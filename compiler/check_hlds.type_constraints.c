/*
** Automatically generated from `type_constraints.m'
** by the Mercury compiler,
** version rotd-2018-08-01
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


// :- module check_hlds.type_constraints.
// :- implementation.

/*
INIT mercury__check_hlds__type_constraints__init
ENDINIT
*/

#include "check_hlds.type_constraints.mih"


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
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0;

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__type_constraints____vpti_pred_3__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0;

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__type_constraints____vpti_pred_3__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__type_constraints____vpti_pred_2__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__type_constraints____vpti_pred_1__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__type_constraints____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_int_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_conj_type_constraint_0_0[5];

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_conj_type_constraint_0_0[5];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_conj_type_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_conj_type_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_conj_type_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_conj_type_constraint_0[1];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_conj_type_constraint_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_simple_type_constraint_0_0[2];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_simple_type_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_simple_type_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_simple_type_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_simple_type_constraint_0[1];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_simple_type_constraint_0[1];

static const MR_EnumFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_0;

static const MR_EnumFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_1;

static const MR_EnumFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__enum_value_ordered_tconstr_activity_0[2];

static const MR_EnumFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__enum_name_ordered_tconstr_activity_0[2];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_tconstr_activity_0[2];

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_tconstr_environment_0_0[4];

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_tconstr_environment_0_0[4];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_tconstr_environment_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_tconstr_environment_0_0[1];

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_tconstr_environment_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_tconstr_environment_0[1];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_tconstr_environment_0[1];

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_0_0[1];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__maybe__ti_maybe_1check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0;

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_0_1[2];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_1;

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_0_1[1];

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_0[2];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_0[2];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_0[2];

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__type_constraints__type_ctor_info_type_constraint_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_info_0_0[6];

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_type_constraint_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_info_0_0[1];

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_info_0[1];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0;

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_solution_0_0[3];

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_type_constraint_solution_0_0[3];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_solution_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_solution_0_0[1];

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_solution_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_solution_0[1];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_solution_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_domain_0_0[1];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_0;

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_domain_0_1[1];

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_1;

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_2;

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_2[1];

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_domain_0[3];

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_domain_0[3];

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_domain_0[3];

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1573__1_2_p_0(
  MR_Word NewD_25,
  MR_Word HeadVar__2_82);

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__3_4_p_0(
  MR_Word HeadVar__1_41,
  MR_Word HeadVar__2_58,
  MR_Word HeadVar__3_59,
  MR_Word * HeadVar__4_60);

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__2_3_p_0(
  MR_Word HeadVar__1_42,
  MR_Word HeadVar__2_63,
  MR_Word * HeadVar__3_64);

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__1_2_p_0(
  MR_Word Union_16,
  MR_Integer HeadVar__2_66);

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__constraint_is_satisfiable__1252__1_3_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_16,
  MR_Word * HeadVar__3_17);

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__unify_equal_tvars__933__1_2_p_0(
  MR_Word Replaced_10,
  MR_Word HeadVar__2_65);

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__find_domain__800__1_4_p_0(
  MR_Word HeadVar__1_31,
  MR_Word HeadVar__2_50,
  MR_Word HeadVar__3_51,
  MR_Word * HeadVar__4_52);

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__propagate__746__1_3_p_0(
  MR_Word VarConstraints_9,
  MR_Word HeadVar__2_60,
  MR_Word * HeadVar__3_61);

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__solve_constraint_labeling__661__1_4_p_0(
  MR_Word HeadVar__1_46,
  MR_Word HeadVar__2_84,
  MR_Word HeadVar__3_85,
  MR_Word * HeadVar__4_86);

static MR_Word MR_CALL 
check_hlds__type_constraints__IntroducedFrom__func__solve_constraint_labeling__634__1_3_f_0(
  MR_Word Guesses_11,
  MR_Word Var_21,
  MR_Word HeadVar__3_62);

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__602__1_4_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_78,
  MR_Word HeadVar__3_79,
  MR_Word * HeadVar__4_80);

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__591__1_4_p_0(
  MR_Word HeadVar__1_47,
  MR_Word HeadVar__2_69,
  MR_Word HeadVar__3_70,
  MR_Word * HeadVar__4_71);

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__create_vartypes_map__485__1_2_p_0(
  MR_Word HeadVar__1_29,
  MR_Word * HeadVar__2_30);

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__func__update_goal__405__1_1_f_0(
  MR_Word HeadVar__1_51,
  MR_Word * HeadVar__2_52);

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__update_goal__403__1_3_p_0(
  MR_Word HeadVar__1_26,
  MR_Word HeadVar__2_44,
  MR_Word * HeadVar__3_45);

static void MR_CALL 
check_hlds__type_constraints____Compare____var_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____var_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_solution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_solution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_counter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_counter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_environment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____tconstr_environment_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_activity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____tconstr_activity_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_type_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____pred_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____pred_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____func_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____func_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____event_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____event_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____error_specs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____error_specs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____conj_type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____conj_type_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____class_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____class_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__print_domain_map_change_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__print_domain_map_change_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__print_domain_map_change_5_p_0(
  MR_Word TVarSet_6,
  MR_Word OldDomainMap_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__type_constraints__print_type_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__print_type_domain_4_p_0(
  MR_Word TVarSet_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__print_guess_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__print_guess_4_p_0(
  MR_Word TVarSet_5,
  MR_Word Guess_6);

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0(
  MR_Word TVarSet_4,
  MR_Word Type_5,
  MR_String * Name_6);

static void MR_CALL 
check_hlds__type_constraints__get_ctor_arg_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_4);

static void MR_CALL 
check_hlds__type_constraints__get_case_goal_2_p_0(
  MR_Word Case_3,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__type_constraints__create_stconstr_2_f_0(
  MR_Word TVar_4,
  MR_Word Type_5);

static void MR_CALL 
check_hlds__type_constraints__map_var_to_constraint_4_p_0(
  MR_Integer Id_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_VarConstraints_0_9,
  MR_Word * STATE_VARIABLE_VarConstraints_10);

static MR_Box MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0(
  MR_Word LTVar_8,
  MR_Word ArgTVars_9,
  MR_Word Info_10,
  MR_Word ConsDefn_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_TCInfo_0_32,
  MR_Word * STATE_VARIABLE_TCInfo_33);

static MR_Box MR_CALL 
check_hlds__type_constraints__ho_pred_unif_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__ho_pred_unif_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word LHSTVar_11,
  MR_Word ArgTVars_12,
  MR_Word PredId_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TCInfo_0_35,
  MR_Word * STATE_VARIABLE_TCInfo_36);

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__shorthand_goal_to_constraint_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0(
  MR_Word tscc_proc_1_input_1_Environment_5,
  MR_Word tscc_proc_1_input_2_Goal_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46);

static void MR_CALL 
check_hlds__type_constraints__shorthand_goal_to_constraint_5_p_0(
  MR_Word tscc_proc_2_input_1_Environment_6,
  MR_Word tscc_proc_2_input_2_GoalExpr_7,
  MR_Word tscc_proc_2_input_3_GoalInfo_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46);

static MR_Box MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_56,
  MR_Word * STATE_VARIABLE_TCInfo_57);

static MR_Box MR_CALL 
check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_41,
  MR_Word * STATE_VARIABLE_TCInfo_42);

static MR_bool MR_CALL 
check_hlds__type_constraints__pred_has_arity_3_p_0(
  MR_Word Preds_4,
  MR_Integer Arity_5,
  MR_Word PredId_6);

static void MR_CALL 
check_hlds__type_constraints__variable_assignment_constraint_5_p_0(
  MR_Word Context_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_TCInfo_0_13,
  MR_Word * STATE_VARIABLE_TCInfo_14);

static MR_Box MR_CALL 
check_hlds__type_constraints__pred_call_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__pred_call_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word ArgTVars_11,
  MR_Word PredId_12,
  MR_Word * Constraint_13,
  MR_Word * TVars_14,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28);

static void MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_26,
  MR_Word * STATE_VARIABLE_TCInfo_27);

static void MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28);

static MR_Word MR_CALL 
check_hlds__type_constraints__tvar_to_type_1_f_0(
  MR_Word TVar_3);

static void MR_CALL 
check_hlds__type_constraints__get_var_type_4_p_0(
  MR_Word Var_5,
  MR_Word * TVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__type_constraints__add_type_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__add_type_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__add_type_constraint_4_p_0(
  MR_Word Constraints_5,
  MR_Word TVars_6,
  MR_Word STATE_VARIABLE_TConstrInfo_0_20,
  MR_Word * STATE_VARIABLE_TConstrInfo_21);

static MR_bool MR_CALL 
check_hlds__type_constraints__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__conj_constraint_get_context_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__context_to_string_2_p_0(
  MR_Word Context_3,
  MR_String * String_4);

static void MR_CALL 
check_hlds__type_constraints__add_message_to_spec_3_p_0(
  MR_Word ErrMsg_4,
  MR_Word STATE_VARIABLE_TCInfo_0_7,
  MR_Word * STATE_VARIABLE_TCInfo_8);

static void MR_CALL 
check_hlds__type_constraints__next_min_unsat_8_p_0(
  MR_Word Constraint_9,
  MR_Integer C_10,
  MR_Word STATE_VARIABLE_D_0_14,
  MR_Word * STATE_VARIABLE_D_15,
  MR_Word STATE_VARIABLE_P_0_16,
  MR_Word * STATE_VARIABLE_P_17,
  MR_Word STATE_VARIABLE_MinUnsats_0_18,
  MR_Word * STATE_VARIABLE_MinUnsats_19);

static void MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word MinUnsatSet_5,
  MR_Word * Components_6);

static void MR_CALL 
check_hlds__type_constraints__diagnose_unsatisfiability_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__diagnose_unsatisfiability_error_5_p_0(
  MR_Word TCInfo_6,
  MR_Word Context_7,
  MR_Word ProgVarSet_8,
  MR_Word TypeVar_9,
  MR_Word * Msg_10);

static void MR_CALL 
check_hlds__type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(
  MR_Box E_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0(
  MR_Word TCInfo_6,
  MR_Word D_7,
  MR_Word P_8,
  MR_Word STATE_VARIABLE_MinUnsats_0_27,
  MR_Word * STATE_VARIABLE_MinUnsats_28);

static MR_bool MR_CALL 
check_hlds__type_constraints__pred_constraint_info_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__ambig_pred_error_message_3_p_0(
  MR_Word PredEnv_4,
  MR_Word HeadVar__2_2,
  MR_Word * Component_7);

static void MR_CALL 
check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0(
  MR_Word PredEnv_4,
  MR_Word Conjunctions_5,
  MR_Word * Msg_6);

static void MR_CALL 
check_hlds__type_constraints__merge_type_constraints2_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6);

static MR_bool MR_CALL 
check_hlds__type_constraints__merge_type_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__merge_type_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__merge_type_constraints_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6);

static void MR_CALL 
check_hlds__type_constraints__get_constraints_from_conj_2_p_0(
  MR_Word Conj_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__add_unused_prog_var_4_p_0(
  MR_Word TCInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_Vartypes_0_9,
  MR_Word * STATE_VARIABLE_Vartypes_10);

static MR_Word MR_CALL 
check_hlds__type_constraints__to_singleton_type_domain_1_f_0(
  MR_Word Type_3);

static void MR_CALL 
check_hlds__type_constraints__domain_size_compare_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8);

static MR_bool MR_CALL 
check_hlds__type_constraints__has_ambiguous_domain_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_one_solution_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_one_solution_1_p_0(
  MR_Word DomainMap_2);

static void MR_CALL 
check_hlds__type_constraints__tvars_in_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__update_singleton_domain_3_p_0(
  MR_Word TVar_4,
  MR_Word STATE_VARIABLE_DomainMap_0_8,
  MR_Word * STATE_VARIABLE_DomainMap_9);

static MR_bool MR_CALL 
check_hlds__type_constraints__is_singleton_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__has_singleton_domain_2_p_0(
  MR_Word DomainMap_3,
  MR_Word TVar_4);

static MR_bool MR_CALL 
check_hlds__type_constraints__has_empty_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVar_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__domain_map_unchanged_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__domain_map_unchanged_2_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__non_empty_domain_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__still_active_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__type_constraints__type_domain_union_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6);

static void MR_CALL 
check_hlds__type_constraints__find_type_of_tvar_3_p_0(
  MR_Word DomainMap_4,
  MR_Word STATE_VARIABLE_Type_0_9,
  MR_Word * STATE_VARIABLE_Type_10);

static void MR_CALL 
check_hlds__type_constraints__update_replacement_map_5_p_0(
  MR_Word VarMap_6,
  MR_Word Replacement_7,
  MR_Word OldVar_8,
  MR_Word STATE_VARIABLE_ReplacementMap_0_11,
  MR_Word * STATE_VARIABLE_ReplacementMap_12);

static MR_bool MR_CALL 
check_hlds__type_constraints__to_simple_constraints_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__find_unified_var_3_p_0(
  MR_Word Target_4,
  MR_Word HeadVar__2_2,
  MR_Word * Unified_8);

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0(
  MR_Word TCInfo_9,
  MR_Word Replaced_10,
  MR_Word Replacement_11,
  MR_Word Target_12,
  MR_Word STATE_VARIABLE_ReplacementMap_0_34,
  MR_Word * STATE_VARIABLE_ReplacementMap_35,
  MR_Word STATE_VARIABLE_DomainMap_0_36,
  MR_Word * STATE_VARIABLE_DomainMap_37);

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DomainMap_0_26,
  MR_Word * STATE_VARIABLE_DomainMap_27);

static void MR_CALL 
check_hlds__type_constraints__restrict_domain_4_p_0(
  MR_Word TVar_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_DomainMap_0_11,
  MR_Word * STATE_VARIABLE_DomainMap_12);

static MR_bool MR_CALL 
check_hlds__type_constraints__type_domain_intersect_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__type_domain_intersect_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__type_domain_intersect_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6);

static void MR_CALL 
check_hlds__type_constraints__td_list_intersect_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Type_6);

static void MR_CALL 
check_hlds__type_constraints__create_domain_4_p_0(
  MR_Word STATE_VARIABLE_DomainMap_0_7,
  MR_Word STATE_VARIABLE_Constraint_0_8,
  MR_Word * STATE_VARIABLE_Constraint_9,
  MR_Word * STATE_VARIABLE_DomainMap_10);

static void MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__propagate_7_p_0(
  MR_Word TVarSet_8,
  MR_Word VarConstraints_9,
  MR_Integer ConstraintId_10,
  MR_Word STATE_VARIABLE_ConstraintMap_0_22,
  MR_Word * STATE_VARIABLE_ConstraintMap_23,
  MR_Word STATE_VARIABLE_DomainMap_0_24,
  MR_Word * STATE_VARIABLE_DomainMap_25);

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVars_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0(
  MR_Word Constraint0_5,
  MR_Word * Constraint_6,
  MR_Word STATE_VARIABLE_DomainMap_0_22,
  MR_Word * STATE_VARIABLE_DomainMap_23);

static MR_bool MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0(
  MR_Word STATE_VARIABLE_ConjTypeConstraint_0_18,
  MR_Word * STATE_VARIABLE_ConjTypeConstraint_19,
  MR_Word DomainMap0_6,
  MR_Word * DomainMap_7);

static void MR_CALL 
check_hlds__type_constraints__type_constraint_solution_get_constraint_map_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__type_constraint_solution_get_domains_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__solution_is_invalid_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__type_constraints__set_clause_body_3_p_0(
  MR_Word Goal_4,
  MR_Word Clause_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__type_constraints__get_clause_body_2_p_0(
  MR_Word Clause_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__type_constraints__find_variable_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__find_variable_type_9_p_0(
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
check_hlds__type_constraints__has_multiple_disjuncts_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__has_multiple_disjuncts_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Cs_5);

static MR_bool MR_CALL 
check_hlds__type_constraints__get_first_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__get_first_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__has_one_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__has_one_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2);

static void MR_CALL 
check_hlds__type_constraints__set_goal_pred_id_3_p_0(
  MR_Word PredId_4,
  MR_Word Goal0_5,
  MR_Word * MaybeGoal_6);

static void MR_CALL 
check_hlds__type_constraints__apply_pred_data_to_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__apply_pred_data_to_goal_4_p_0(
  MR_Word ForwardGoalPathMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13);

static void MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0(
  MR_Word PredEnv_7,
  MR_Word ConstraintMap_8,
  MR_Word ForwardGoalPathMap_9,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word * Errors_11);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_if_needed_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_22,
  MR_Word * STATE_VARIABLE_Environment_23,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_41,
  MR_Word * STATE_VARIABLE_Environment_42,
  MR_Word STATE_VARIABLE_HLDS_0_43,
  MR_Word * STATE_VARIABLE_HLDS_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0(
  MR_Word Context_6,
  MR_Word ProgVarSet_7,
  MR_Word * DomainMap_8,
  MR_Word STATE_VARIABLE_TCInfo_0_28,
  MR_Word * STATE_VARIABLE_TCInfo_29);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0(
  MR_Word TVarSet_7,
  MR_Word VarConstraints_8,
  MR_Word ConstraintMap0_9,
  MR_Word DomainMap0_10,
  MR_Word Guesses_11,
  MR_Word * Solution_12);

static MR_Box MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0(
  MR_Word DomainMap_4,
  MR_Word * Var_5,
  MR_Word * Domains_6);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_6_p_0(
  MR_Word TVarSet_7,
  MR_Word VarConstraints_8,
  MR_Word STATE_VARIABLE_ConstraintMap_0_14,
  MR_Word * STATE_VARIABLE_ConstraintMap_15,
  MR_Word STATE_VARIABLE_DomainMap_0_16,
  MR_Word * STATE_VARIABLE_DomainMap_17);

static MR_bool MR_CALL 
check_hlds__type_constraints__create_vartypes_map_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints__create_vartypes_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_constraints__create_vartypes_map_8_p_0(
  MR_Word Context_9,
  MR_Word ProgVarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarMap_12,
  MR_Word DomainMap_13,
  MR_Word ReplacementMap_14,
  MR_Word * Vartypes_15,
  MR_Word * Errors_16);

static void MR_CALL 
check_hlds__type_constraints__typecheck_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____class_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____class_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____conj_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____conj_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____error_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____error_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____event_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____event_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____func_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____func_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____pred_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____pred_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____tconstr_activity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_activity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____tconstr_environment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_environment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____var_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_constraints____Compare____var_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_1[72][2];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_2[75][3];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_3[12][1];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_4[3][10];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_5[1][12];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_6[26][5];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_7[9][4];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_8[23][6];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_9[10][7];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_10[2][9];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_11[3][8];

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_12[4][11];


/* sealed */ struct check_hlds__type_constraints__vector_common_type_13_0_s {
  const MR_String check_hlds__type_constraints__vector_common_type_13_0__vct_13_f_0;
  const MR_Word check_hlds__type_constraints__vector_common_type_13_0__vct_13_f_1;
};

static /* final */ const struct check_hlds__type_constraints__vector_common_type_13_0_s check_hlds__type_constraints_vector_common_13[5];



static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_1[72][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_2[2]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_2[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[2]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[11]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Possible predicates include:"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Ambiguous predicate call."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ") or"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "sets of goals"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[30])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The problem is most likely due to one of the following"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has not been defined."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "by constraint-based type checking."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The given type is not supported"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not have the given method."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "by constraint-based typechecking."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Event calls are not yet supported"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "ambiguous overloading causes type ambiguity."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Possible type assignments include:"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "/"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ": "))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Conflicting type assignments for the"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The predicate with id"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Incorrect number of arguments"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "provided to method"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of typeclass"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The typeclass"))
  },
  /* row 68 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_3[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is not event named"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The constructor"))
  },
  /* row 71 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_3[11])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_2[75][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_1[2]))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_constraints__typecheck_constraints_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__type_constraints__create_vartypes_map_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[1])),
    ((MR_Box) (check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[1])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[2])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[3])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[2])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[3])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[2])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[4])),
    ((MR_Box) (check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[3])),
    ((MR_Box) (check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[5])),
    ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[4])),
    ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[3])),
    ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[6])),
    ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[7])),
    ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[8])),
    ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[7])),
    ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[9])),
    ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[6])),
    ((MR_Box) (check_hlds__type_constraints__has_one_disjunct_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[6])),
    ((MR_Box) (check_hlds__type_constraints__get_first_disjunct_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[6])),
    ((MR_Box) (check_hlds__type_constraints__has_multiple_disjuncts_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[9])),
    ((MR_Box) (check_hlds__type_constraints__conj_find_domain_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[10])),
    ((MR_Box) (check_hlds__type_constraints__conj_find_domain_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[7])),
    ((MR_Box) (check_hlds__type_constraints__conj_find_domain_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[6])),
    ((MR_Box) (check_hlds__type_constraints__find_domain_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_constraints__find_domain_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_constraints__find_domain_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[6])),
    ((MR_Box) (check_hlds__type_constraints__find_domain_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[10])),
    ((MR_Box) (check_hlds__type_constraints__tvars_in_constraint_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[12])),
    ((MR_Box) (check_hlds__type_constraints__tvars_in_constraint_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[10])),
    ((MR_Box) (check_hlds__type_constraints__tvars_in_constraint_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[11])),
    ((MR_Box) (check_hlds__type_constraints__propagate_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13])),
    ((MR_Box) (check_hlds__type_constraints__unify_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13])),
    ((MR_Box) (check_hlds__type_constraints__unify_types_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13])),
    ((MR_Box) (check_hlds__type_constraints__unify_types_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13])),
    ((MR_Box) (check_hlds__type_constraints__unify_types_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[14])),
    ((MR_Box) (check_hlds__type_constraints__unify_equal_tvars_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13])),
    ((MR_Box) (check_hlds__type_constraints__domain_map_unchanged_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[16])),
    ((MR_Box) (check_hlds__type_constraints__constraint_has_one_solution_1_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[17])),
    ((MR_Box) (check_hlds__type_constraints__merge_type_constraints_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_7[6])),
    ((MR_Box) (check_hlds__type_constraints__merge_type_constraints_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[7])),
    ((MR_Box) (check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[6])),
    ((MR_Box) (check_hlds__type_constraints__error_from_one_min_set_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[19])),
    ((MR_Box) (check_hlds__type_constraints__error_from_one_min_set_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[20])),
    ((MR_Box) (check_hlds__type_constraints__error_from_one_min_set_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[9])),
    ((MR_Box) (check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 61 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[21])),
    ((MR_Box) (check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 62 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[22])),
    ((MR_Box) (check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 63 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[22])),
    ((MR_Box) (check_hlds__type_constraints__pred_call_constraint_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 64 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[9])),
    ((MR_Box) (check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 65 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[23])),
    ((MR_Box) (check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 66 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[9])),
    ((MR_Box) (check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 67 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[9])),
    ((MR_Box) (check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 68 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[23])),
    ((MR_Box) (check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 69 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[24])),
    ((MR_Box) (check_hlds__type_constraints__goal_to_constraint_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 70 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[22])),
    ((MR_Box) (check_hlds__type_constraints__ho_pred_unif_constraint_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 71 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[25])),
    ((MR_Box) (check_hlds__type_constraints__functor_unif_constraint_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 72 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[23])),
    ((MR_Box) (check_hlds__type_constraints__functor_unif_constraint_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 73 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[22])),
    ((MR_Box) (check_hlds__type_constraints__functor_unif_constraint_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 74 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13])),
    ((MR_Box) (check_hlds__type_constraints__print_domain_map_change_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_3[12][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[24])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Goal was not a plain call"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[53])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[43])))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_4[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_environment_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_environment_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_5[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_6[26][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 24 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 25 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_7[9][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[1])),
    ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_2[20]))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[2])),
    ((MR_Box) (check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_2[23]))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[2])),
    ((MR_Box) (check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_2[24]))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[6])),
    ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_2[31]))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[2])),
    ((MR_Box) (check_hlds__type_constraints__find_domain_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_constraints_scalar_common_2[40]))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_8[23][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints____vpti_pred_2__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__type_constraints__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints____vpti_pred_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_9[10][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints____vpti_pred_3__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints____vpti_pred_3__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_environment_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&check_hlds__type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_int_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_10[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_11[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_constraints_scalar_common_12[4][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0))
  },
};


static /* final */ const struct check_hlds__type_constraints__vector_common_type_13_0_s check_hlds__type_constraints_vector_common_13[5] = {
  /* row 0 */
  {
    (MR_String) "file",
    (MR_Word) ((MR_Unsigned) 4U)
  },
  /* row 1 */
  {
    (MR_String) "grade",
    (MR_Word) ((MR_Unsigned) 4U)
  },
  /* row 2 */
  {
    (MR_String) "line",
    (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[2]))
  },
  /* row 3 */
  {
    (MR_String) "module",
    (MR_Word) ((MR_Unsigned) 4U)
  },
  /* row 4 */
  {
    (MR_String) "pred",
    (MR_Word) ((MR_Unsigned) 4U)
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__type_constraints____vpti_pred_3__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__type_constraints__type_ctor_info_type_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__type_constraints____vpti_pred_3__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__type_constraints____vpti_pred_2__plain_check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__type_constraints____vpti_pred_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__type_constraints____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_int_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_constraints__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_class_env_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____class_env_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____class_env_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "class_env",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_conj_type_constraint_0_0[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_activity_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_conj_type_constraint_0_0[5] = {
  (MR_String) "tconstr_simples",
  (MR_String) "tconstr_activity",
  (MR_String) "tconstr_context",
  (MR_String) "tconstr_goal_id",
  (MR_String) "tconstr_pred_id"
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_conj_type_constraint_0_0 = {
  (MR_String) "ctconstr",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_conj_type_constraint_0_0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_names_conj_type_constraint_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_conj_type_constraint_0_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_conj_type_constraint_0_0
};

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_conj_type_constraint_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_conj_type_constraint_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_conj_type_constraint_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_conj_type_constraint_0_0
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_conj_type_constraint_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_constraints____Unify____conj_type_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____conj_type_constraint_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "conj_type_constraint",
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_conj_type_constraint_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_conj_type_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_conj_type_constraint_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_error_specs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____error_specs_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____error_specs_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "error_specs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_event_env_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____event_env_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____event_env_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "event_env",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_inner_cons_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&check_hlds__type_constraints__list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_func_env_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____func_env_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____func_env_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "func_env",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_pred_env_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____pred_env_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____pred_env_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "pred_env",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_prog_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____prog_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____prog_var_map_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "prog_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_prog_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____simple_prog_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____simple_prog_var_map_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "simple_prog_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_simple_type_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_simple_type_constraint_0_0 = {
  (MR_String) "stconstr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_simple_type_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_simple_type_constraint_0_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_simple_type_constraint_0_0
};

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_simple_type_constraint_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_simple_type_constraint_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_simple_type_constraint_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_simple_type_constraint_0_0
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_simple_type_constraint_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_constraints____Unify____simple_type_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____simple_type_constraint_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "simple_type_constraint",
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_simple_type_constraint_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_simple_type_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_simple_type_constraint_0
};

static const MR_EnumFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_0 = {
  (MR_String) "tconstr_active",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_1 = {
  (MR_String) "tconstr_unsatisfiable",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__enum_value_ordered_tconstr_activity_0[2] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_0,
  &check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__enum_name_ordered_tconstr_activity_0[2] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_0,
  &check_hlds__type_constraints__check_hlds__type_constraints__enum_functor_desc_tconstr_activity_0_1
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_tconstr_activity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_activity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_constraints____Unify____tconstr_activity_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____tconstr_activity_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "tconstr_activity",
  {     check_hlds__type_constraints__check_hlds__type_constraints__enum_name_ordered_tconstr_activity_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__enum_value_ordered_tconstr_activity_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_tconstr_activity_0
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_tconstr_environment_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)
};

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_tconstr_environment_0_0[4] = {
  (MR_String) "tce_event_env",
  (MR_String) "tce_class_env",
  (MR_String) "tce_func_env",
  (MR_String) "tce_pred_env"
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_tconstr_environment_0_0 = {
  (MR_String) "tconstr_environment",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_tconstr_environment_0_0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_names_tconstr_environment_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_tconstr_environment_0_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_tconstr_environment_0_0
};

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_tconstr_environment_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_tconstr_environment_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_tconstr_environment_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_tconstr_environment_0_0
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_tconstr_environment_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_environment_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_constraints____Unify____tconstr_environment_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____tconstr_environment_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "tconstr_environment",
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_tconstr_environment_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_tconstr_environment_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_tconstr_environment_0
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_0 = {
  (MR_String) "tconstr_conj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__maybe__ti_maybe_1check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__maybe__ti_maybe_1check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0)
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_1 = {
  (MR_String) "tconstr_disj",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_0_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_0
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_0_1[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_1
};

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_0[2] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_0,
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_0_1
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_constraint_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_constraint",
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_counter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_constraint_counter_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_constraint_counter_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_constraint_counter",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_constraint_id_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_constraint_id_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_constraint_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__type_constraints__type_ctor_info_type_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&check_hlds__type_constraints__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__type_constraints__type_ctor_info_type_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_type_constraint_info_0_0[6] = {
  (MR_String) "tconstr_var_map",
  (MR_String) "tconstr_constraint_counter",
  (MR_String) "tconstr_constraint_map",
  (MR_String) "tconstr_var_constraints",
  (MR_String) "tconstr_tvarset",
  (MR_String) "tconstr_error_specs"
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_info_0_0 = {
  (MR_String) "tconstr_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_info_0_0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_names_type_constraint_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_info_0_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_info_0_0
};

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_info_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_info_0_0
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_constraint_info",
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_info_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_constraint_map_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_constraint_map_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__type_constraints__type_ctor_info_type_constraint_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_constraint_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_constraint_set_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_constraint_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_solution_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__type_constraints__type_ctor_info_type_constraint_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__type_constraints__check_hlds__type_constraints__field_names_type_constraint_solution_0_0[3] = {
  (MR_String) "tconstr_sol_domain_maps",
  (MR_String) "tconstr_sol_constraint_map",
  (MR_String) "tconstr_sol_success"
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_solution_0_0 = {
  (MR_String) "tconstr_solution",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_constraint_solution_0_0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_names_type_constraint_solution_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_solution_0_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_solution_0_0
};

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_solution_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_constraint_solution_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_solution_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_constraint_solution_0_0
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_solution_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_constraint_solution_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_constraint_solution_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_constraint_solution",
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_constraint_solution_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_constraint_solution_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_constraint_solution_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_constraints__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_domain_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_constraints__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_0 = {
  (MR_String) "tdomain",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_domain_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_domain_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_1 = {
  (MR_String) "tdomain_singleton",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__type_constraints__check_hlds__type_constraints__field_types_type_domain_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_2 = {
  (MR_String) "tdomain_any",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_0[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_2
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_1[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_0
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_2[1] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_1
};

static const MR_DuPtagLayout check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_domain_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__type_constraints__check_hlds__type_constraints__du_stag_ordered_type_domain_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_domain_0[3] = {
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_0,
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_2,
  &check_hlds__type_constraints__check_hlds__type_constraints__du_functor_desc_type_domain_0_1
};

static const MR_Integer check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_domain_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_domain_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_domain_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_domain",
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_name_ordered_type_domain_0 },
  {     check_hlds__type_constraints__check_hlds__type_constraints__du_ptag_ordered_type_domain_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__type_constraints__check_hlds__type_constraints__functor_number_map_type_domain_0
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____type_domain_map_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____type_domain_map_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "type_domain_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__type_constraints__type_ctor_info_type_domain_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_var_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_constraints____Unify____var_constraint_map_0_0_10001)),
  ((MR_Box) (check_hlds__type_constraints____Compare____var_constraint_map_0_0_10001)),
  (MR_String) "check_hlds.type_constraints",
  (MR_String) "var_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1573__1_2_p_0(
  MR_Word NewD_25,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__superset_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NewD_25, HeadVar__2_82);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__3_4_p_0(
  MR_Word HeadVar__1_41,
  MR_Word HeadVar__2_58,
  MR_Word HeadVar__3_59,
  MR_Word * HeadVar__4_60)
{
  {
    mercury__map__det_transform_value_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), HeadVar__1_41, ((MR_Box) (HeadVar__2_58)), HeadVar__3_59, HeadVar__4_60);
  }
}

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__2_3_p_0(
  MR_Word HeadVar__1_42,
  MR_Word HeadVar__2_63,
  MR_Word * HeadVar__3_64)
{
  {
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_42, HeadVar__2_63, HeadVar__3_64);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__1_2_p_0(
  MR_Word Union_16,
  MR_Integer HeadVar__2_66)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Union_16, ((MR_Box) (HeadVar__2_66)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__constraint_is_satisfiable__1252__1_3_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_16,
  MR_Word * HeadVar__3_17)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__3_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap_3, ((MR_Box) (HeadVar__2_16)), &conv0_HeadVar__3_17);
    if (succeeded)
    {
      *HeadVar__3_17 = ((MR_Word) (conv0_HeadVar__3_17));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__unify_equal_tvars__933__1_2_p_0(
  MR_Word Replaced_10,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), Replaced_10, ((MR_Box) (HeadVar__2_65)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__find_domain__800__1_4_p_0(
  MR_Word HeadVar__1_31,
  MR_Word HeadVar__2_50,
  MR_Word HeadVar__3_51,
  MR_Word * HeadVar__4_52)
{
  {
    mercury__map__intersect_4_p_1((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), HeadVar__1_31, HeadVar__2_50, HeadVar__3_51, HeadVar__4_52);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__propagate__746__1_3_p_0(
  MR_Word VarConstraints_9,
  MR_Word HeadVar__2_60,
  MR_Word * HeadVar__3_61)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__3_61;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), VarConstraints_9, ((MR_Box) (HeadVar__2_60)), &conv0_HeadVar__3_61);
    if (succeeded)
    {
      *HeadVar__3_61 = ((MR_Word) (conv0_HeadVar__3_61));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__solve_constraint_labeling__661__1_4_p_0(
  MR_Word HeadVar__1_46,
  MR_Word HeadVar__2_84,
  MR_Word HeadVar__3_85,
  MR_Word * HeadVar__4_86)
{
  {
    mercury__map__union_4_p_1((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_46, HeadVar__2_84, HeadVar__3_85, HeadVar__4_86);
  }
}

static MR_Word MR_CALL 
check_hlds__type_constraints__IntroducedFrom__func__solve_constraint_labeling__634__1_3_f_0(
  MR_Word Guesses_11,
  MR_Word Var_21,
  MR_Word HeadVar__3_62)
{
  {
    MR_Word HeadVar__4_63;

    HeadVar__4_63 = mercury__map__set_3_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), Guesses_11, ((MR_Box) (Var_21)), ((MR_Box) (HeadVar__3_62)));
    return HeadVar__4_63;
  }
}

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__602__1_4_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_78,
  MR_Word HeadVar__3_79,
  MR_Word * HeadVar__4_80)
{
  {
    mercury__map__union_4_p_1((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), HeadVar__1_34, HeadVar__2_78, HeadVar__3_79, HeadVar__4_80);
  }
}

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__591__1_4_p_0(
  MR_Word HeadVar__1_47,
  MR_Word HeadVar__2_69,
  MR_Word HeadVar__3_70,
  MR_Word * HeadVar__4_71)
{
  {
    mercury__map__union_4_p_1((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), HeadVar__1_47, HeadVar__2_69, HeadVar__3_70, HeadVar__4_71);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__create_vartypes_map__485__1_2_p_0(
  MR_Word HeadVar__1_29,
  MR_Word * HeadVar__2_30)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__2_30;

    succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), HeadVar__1_29, &conv0_HeadVar__2_30);
    if (succeeded)
    {
      *HeadVar__2_30 = ((MR_Word) (conv0_HeadVar__2_30));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__IntroducedFrom__func__update_goal__405__1_1_f_0(
  MR_Word HeadVar__1_51,
  MR_Word * HeadVar__2_52)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__2_52;

    succeeded = mercury__list__head_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[2]), HeadVar__1_51, &conv0_HeadVar__2_52);
    if (succeeded)
    {
      *HeadVar__2_52 = ((MR_Word) (conv0_HeadVar__2_52));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__IntroducedFrom__pred__update_goal__403__1_3_p_0(
  MR_Word HeadVar__1_26,
  MR_Word HeadVar__2_44,
  MR_Word * HeadVar__3_45)
{
  {
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[2]), HeadVar__1_26, HeadVar__2_44, HeadVar__3_45);
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____var_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____var_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
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
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[18]), HeadVar__1_1, ((MR_Box) (Var_20)), ((MR_Box) (ArgY1_5)));
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
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Var_21, ArgY1_12);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_0_0(
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
            MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_8 == CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_11_11 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[18]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_solution_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[8]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, Var_18);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_solution_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[11]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
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
      MR_Word Var_16;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[8]), &Var_16, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__counter____Compare____counter_0_0(&Var_17, ArgX2_6, ArgY2_7);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), &Var_18, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[5]), &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[17]), &Var_20, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[17]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
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
check_hlds__type_constraints____Compare____type_constraint_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_counter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__counter____Compare____counter_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_counter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__counter____Unify____counter_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));

        check_hlds__type_constraints____Compare____conj_type_constraint_0_0(HeadVar__1_1, Var_22, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_16;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[5]), &Var_16, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_13)));
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[16]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_15)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
        succeeded = check_hlds__type_constraints____Unify____conj_type_constraint_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[16]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_environment_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[7]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[6]), &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_table_0), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            hlds__pred_table____Compare____predicate_table_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____tconstr_environment_0_0(
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
      MR_Word TypeCtorInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_15_15 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_table_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
            succeeded = hlds__pred_table____Unify____predicate_table_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_activity_0_0(
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
check_hlds__type_constraints____Unify____tconstr_activity_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_type_constraint_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_type_constraint_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____pred_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    hlds__pred_table____Compare____predicate_table_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____pred_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = hlds__pred_table____Unify____predicate_table_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____func_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_table_0), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____func_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_table_0), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____event_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____event_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____error_specs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____error_specs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____conj_type_constraint_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[9]), &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;
        MR_Integer Var_25 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_26 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_15, Var_25, Var_26);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__term____Compare____context_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[14]), &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[15]), HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____conj_type_constraint_0_0(
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
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[14]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[15]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____class_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____class_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__print_domain_map_change_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Name_6));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__print_domain_map_change_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Type_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__print_domain_map_change_5_p_0(
  MR_Word TVarSet_6,
  MR_Word OldDomainMap_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word TVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word NewDomain_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word OldDomain_11;
    MR_Box conv0_OldDomain_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), OldDomainMap_7, ((MR_Box) (TVar_8)), &conv0_OldDomain_11);
    if (succeeded)
    {
      OldDomain_11 = ((MR_Word) (conv0_OldDomain_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      switch (MR_tag((MR_Word) OldDomain_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = (NewDomain_9 == (MR_Word) ((MR_Unsigned) 0U));
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_13_42;
            MR_Word TypeCtorInfo_17_46;
            MR_Word A_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldDomain_11, (MR_Integer) 0))));
            MR_Word B_36;
            MR_Integer C_37;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Integer Var_47;
            MR_Word Var_38;

            succeeded = ((MR_tag((MR_Word) NewDomain_9)) == (MR_Integer) 1);
            if (succeeded)
            {
              B_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewDomain_9, (MR_Integer) 0))));
              TypeCtorInfo_13_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__set__count_2_p_0(TypeCtorInfo_13_42, A_35, &C_37);
              mercury__set__count_2_p_0(TypeCtorInfo_13_42, B_36, &Var_47);
              succeeded = (C_37 == Var_47);
              if (succeeded)
              {
                Var_39 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[74]);
                TypeCtorInfo_17_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                Var_40 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_46, A_35);
                Var_41 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_46, B_36);
                succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_17_46, TypeCtorInfo_17_46, TypeCtorInfo_17_46, Var_39, Var_40, Var_41, &Var_38);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldDomain_11, (MR_Integer) 0))));
            MR_Word B_33;
            MR_Word Var_34;

            succeeded = ((MR_tag((MR_Word) NewDomain_9)) == (MR_Integer) 2);
            if (succeeded)
            {
              B_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewDomain_9, (MR_Integer) 0))));
              succeeded = check_hlds__type_constraints__unify_types_3_p_0(A_32, B_33, &Var_34);
            }
          }
          break;
      }
      if (!(succeeded))
      {
        MR_Word Var_16;
        MR_Word Var_20;
        MR_Word TVar_51;
        MR_Word Domain_52;
        MR_String DomainName_54;
        MR_String TVarName_55;
        MR_String Var_57;
        MR_String Var_60;
        MR_String Var_61;
        MR_String Var_63;

        mercury__io__write_string_3_p_0((MR_String) "  Old domain:");
        Var_16 = mercury__pair__pair_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_8)), ((MR_Box) (OldDomain_11)));
        TVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        Domain_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
        switch (MR_tag((MR_Word) Domain_52)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DomainName_54 = (MR_String) "any";
            break;
          case (MR_Integer) 1:
            {
              MR_Word DomainSet_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domain_52, (MR_Integer) 0))));
              MR_Word DomainTypeNames_72;
              MR_Word Var_73;
              MR_Word Var_74;

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (check_hlds__type_constraints__print_domain_map_change_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (TVarSet_6));
              }
              Var_74 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), DomainSet_71);
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, Var_74, &DomainTypeNames_72);
              DomainName_54 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainTypeNames_72);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_70 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Domain_52, (MR_Integer) 0))));

              check_hlds__type_constraints__type_to_string_3_p_0(TVarSet_6, Type_70, &DomainName_54);
            }
            break;
        }
        TVarName_55 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_6, (MR_Integer) 1, TVar_51);
        Var_63 = mercury__string__f_43_43_2_f_0(DomainName_54, (MR_String) "}\n");
        Var_61 = mercury__string__f_43_43_2_f_0((MR_String) " -> {", Var_63);
        Var_60 = mercury__string__f_43_43_2_f_0(TVarName_55, Var_61);
        Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_60);
        mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_57)));
        mercury__io__write_string_3_p_0((MR_String) "  New domain:");
        Var_20 = mercury__pair__pair_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_8)), ((MR_Box) (NewDomain_9)));
        check_hlds__type_constraints__print_type_domain_4_p_0(TVarSet_6, Var_20);
      }
    }
    else
    {
      MR_Word Var_24;

      mercury__io__write_string_3_p_0((MR_String) "  New domain added:");
      Var_24 = mercury__pair__pair_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_8)), ((MR_Box) (NewDomain_9)));
      check_hlds__type_constraints__print_type_domain_4_p_0(TVarSet_6, Var_24);
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__print_type_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Name_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__print_type_domain_4_p_0(
  MR_Word TVarSet_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word TVar_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Domain_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String DomainName_9;
    MR_String TVarName_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_18;
    MR_String Var_20;

    switch (MR_tag((MR_Word) Domain_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DomainName_9 = (MR_String) "any";
        break;
      case (MR_Integer) 1:
        {
          MR_Word DomainSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domain_7, (MR_Integer) 0))));
          MR_Word DomainTypeNames_29;
          MR_Word Var_30;
          MR_Word Var_31;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__type_constraints__print_type_domain_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (TVarSet_5));
          }
          Var_31 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), DomainSet_28);
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31, &DomainTypeNames_29);
          DomainName_9 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainTypeNames_29);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Domain_7, (MR_Integer) 0))));

          check_hlds__type_constraints__type_to_string_3_p_0(TVarSet_5, Type_27, &DomainName_9);
        }
        break;
    }
    TVarName_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_5, (MR_Integer) 1, TVar_6);
    Var_20 = mercury__string__f_43_43_2_f_0(DomainName_9, (MR_String) "}\n");
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) " -> {", Var_20);
    Var_17 = mercury__string__f_43_43_2_f_0(TVarName_10, Var_18);
    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_17);
    mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_14)));
  }
}

static void MR_CALL 
check_hlds__type_constraints__print_guess_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Name_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__print_guess_4_p_0(
  MR_Word TVarSet_5,
  MR_Word Guess_6)
{
  {
    MR_Word TVar_17;
    MR_Word Domain_18;
    MR_String DomainName_20;
    MR_String TVarName_21;
    MR_String Var_23;
    MR_String Var_26;
    MR_String Var_27;
    MR_String Var_29;

    mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "        Guessing ")));
    TVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Guess_6, (MR_Integer) 0))));
    Domain_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Guess_6, (MR_Integer) 1))));
    switch (MR_tag((MR_Word) Domain_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DomainName_20 = (MR_String) "any";
        break;
      case (MR_Integer) 1:
        {
          MR_Word DomainSet_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domain_18, (MR_Integer) 0))));
          MR_Word DomainTypeNames_38;
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__type_constraints__print_guess_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (TVarSet_5));
          }
          Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), DomainSet_37);
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_39, Var_40, &DomainTypeNames_38);
          DomainName_20 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainTypeNames_38);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Domain_18, (MR_Integer) 0))));

          check_hlds__type_constraints__type_to_string_3_p_0(TVarSet_5, Type_36, &DomainName_20);
        }
        break;
    }
    TVarName_21 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_5, (MR_Integer) 1, TVar_17);
    Var_29 = mercury__string__f_43_43_2_f_0(DomainName_20, (MR_String) "}\n");
    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) " -> {", Var_29);
    Var_26 = mercury__string__f_43_43_2_f_0(TVarName_21, Var_27);
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_26);
    mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_23)));
  }
}

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv4_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv4_Name_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Name_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Name_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Name_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__type_to_string_3_p_0(
  MR_Word TVarSet_4,
  MR_Word Type_5,
  MR_String * Name_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_5, (MR_Integer) 0))));

          *Name_6 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_4, (MR_Integer) 1, TVar_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_5, (MR_Integer) 0))));
          MR_Word Subtypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_5, (MR_Integer) 1))));
          MR_Word SubtypeNames_12;
          MR_String SubtypeName_13;
          MR_Word Var_56;
          MR_String Var_58;
          MR_String Var_59;
          MR_String Var_61;

          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__type_constraints__type_to_string_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (TVarSet_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_56, Subtypes_10, &SubtypeNames_12);
          SubtypeName_13 = mercury__string__join_list_2_f_0((MR_String) ", ", SubtypeNames_12);
          Var_58 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_9);
          Var_61 = mercury__string__f_43_43_2_f_0(SubtypeName_13, (MR_String) ")");
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_61);
          *Name_6 = mercury__string__f_43_43_2_f_0(Var_58, Var_59);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_5, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_85)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_85)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Name_6 = (MR_String) "float";
                  break;
                case (MR_Integer) 1:
                  *Name_6 = (MR_String) "string";
                  break;
                case (MR_Integer) 2:
                  *Name_6 = (MR_String) "character";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));

                parse_tree__prog_data__int_type_to_string_2_p_0(IntType_14, Name_6);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_46;
              MR_String Var_48;
              MR_String Var_49;
              MR_Word Subtypes_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))));
              MR_Word SubtypeNames_65;

              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
                MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__type_constraints__type_to_string_3_p_0_4));
                MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (TVarSet_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, Subtypes_64, &SubtypeNames_65);
              Var_49 = mercury__string__join_list_2_f_0((MR_String) ", ", SubtypeNames_65);
              Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "}");
              *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "{", Var_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))));
              MR_Word Types_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 2))));
              MR_Word TypeNames_21;
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
                MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (check_hlds__type_constraints__type_to_string_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TVarSet_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Types_17, &TypeNames_21);
              switch (PorF_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ArgTypeNames_22;
                    MR_String ReturnTypeName_23;
                    MR_String Var_36;
                    MR_String Var_37;
                    MR_String Var_39;
                    MR_Box conv3_ReturnTypeName_23;

                    mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeNames_21, &ArgTypeNames_22, &conv3_ReturnTypeName_23);
                    ReturnTypeName_23 = ((MR_String) (conv3_ReturnTypeName_23));
                    Var_37 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgTypeNames_22);
                    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", ReturnTypeName_23);
                    Var_36 = mercury__string__f_43_43_2_f_0(Var_37, Var_39);
                    *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "func(", Var_36);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String Var_42;
                    MR_String Var_43;

                    Var_43 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeNames_21);
                    Var_42 = mercury__string__f_43_43_2_f_0(Var_43, (MR_String) ")");
                    *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "pred(", Var_42);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_28;
              MR_String Var_30;
              MR_String Var_31;
              MR_Word Subtypes_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 2))));
              MR_Word SubtypeNames_67;

              {
                Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
                MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (check_hlds__type_constraints__type_to_string_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (TVarSet_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Subtypes_66, &SubtypeNames_67);
              Var_31 = mercury__string__join_list_2_f_0((MR_String) ", ", SubtypeNames_67);
              Var_30 = mercury__string__f_43_43_2_f_0(Var_31, (MR_String) ")");
              *Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "func(", Var_30);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))));
              MR_Word next_value_of_Type_5 = Type0_26;

              // direct tailcall eliminated
              ;
              Type_5 = next_value_of_Type_5;
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
check_hlds__type_constraints__get_ctor_arg_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_4)
{
  *Type_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

static void MR_CALL 
check_hlds__type_constraints__get_case_goal_2_p_0(
  MR_Word Case_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 2))));
}

static MR_Word MR_CALL 
check_hlds__type_constraints__create_stconstr_2_f_0(
  MR_Word TVar_4,
  MR_Word Type_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (TVar_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Type_5));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
check_hlds__type_constraints__map_var_to_constraint_4_p_0(
  MR_Integer Id_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_VarConstraints_0_9,
  MR_Word * STATE_VARIABLE_VarConstraints_10)
{
  {
    MR_bool succeeded;
    MR_Word OldIds_8;
    MR_Box conv0_OldIds_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), STATE_VARIABLE_VarConstraints_0_9, ((MR_Box) (TVar_6)), &conv0_OldIds_8);
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
          Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Id_5));
          MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (OldIds_8));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), ((MR_Box) (TVar_6)), ((MR_Box) (Var_11)), STATE_VARIABLE_VarConstraints_0_9, STATE_VARIABLE_VarConstraints_10);
      }
    }
    else
    {
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Id_5));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), ((MR_Box) (TVar_6)), ((MR_Box) (Var_13)), STATE_VARIABLE_VarConstraints_0_9, STATE_VARIABLE_VarConstraints_10);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = check_hlds__type_constraints__create_stconstr_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = check_hlds__type_constraints__tvar_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_4;

    check_hlds__type_constraints__get_ctor_arg_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Type_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_4));
  }
}

static void MR_CALL 
check_hlds__type_constraints__functor_unif_constraint_7_p_0(
  MR_Word LTVar_8,
  MR_Word ArgTVars_9,
  MR_Word Info_10,
  MR_Word ConsDefn_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_TCInfo_0_32,
  MR_Word * STATE_VARIABLE_TCInfo_33)
{
  {
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 0))));
    MR_Word FunctorTVarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 1))));
    MR_Word TypeParams0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 2))));
    MR_Word FuncArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 5))));
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
    MR_Word Var_35;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;

    Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(Info_10);
    GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Info_10);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[71]), FuncArgs_19, &FuncArgTypes0_23);
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_32, (MR_Integer) 4))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_35, FunctorTVarSet_15, &NewTVarSet_24, &TVarRenaming_25);
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_32, (MR_Integer) 0))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_32, (MR_Integer) 1))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_32, (MR_Integer) 2))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_32, (MR_Integer) 3))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_32, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TCInfo_33 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NewTVarSet_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_53));
    }
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(TVarRenaming_25, TypeParams0_16, &TypeParams_26);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_25, FuncArgTypes0_23, &FuncArgTypes_27);
    Params_28 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[72]), TypeParams_26);
    parse_tree__prog_type__construct_type_3_p_0(TypeCtor_14, Params_28, &ResultType_29);
    {
      LHS_Constraint_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LHS_Constraint_30, 0) = ((MR_Box) (LTVar_8));
      MR_hl_field(MR_mktag(0), LHS_Constraint_30, 1) = ((MR_Box) (ResultType_29));
    }
    RHS_Constraints_31 = mercury__list__map_corresponding_3_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[73]), ArgTVars_9, FuncArgTypes_27);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (LHS_Constraint_30));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (RHS_Constraints_31));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (GoalId_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Constraints_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__ho_pred_unif_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = check_hlds__type_constraints__create_stconstr_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__ho_pred_unif_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word LHSTVar_11,
  MR_Word ArgTVars_12,
  MR_Word PredId_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TCInfo_0_35,
  MR_Word * STATE_VARIABLE_TCInfo_36)
{
  {
    MR_bool succeeded;
    MR_Word Constraints_16;
    MR_Word Context_17;
    MR_Word GoalId_18;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word PredInfo_19;
    MR_Box conv0_PredInfo_19;

    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (PredId_13));
    }
    Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(Info_10);
    GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Info_10);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (GoalId_18));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_9, ((MR_Box) (PredId_13)), &conv0_PredInfo_19);
    if (succeeded)
    {
      PredInfo_19 = ((MR_Word) (conv0_PredInfo_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_77_77;
      MR_Word TypeCtorInfo_78_78;
      MR_Word TypeCtorInfo_79_79;
      MR_Word PredArgTypes0_20;
      MR_Word PredTVarSet_21;
      MR_Word Purity_22;
      MR_Word PredOrFunc_23;
      MR_Word NewTVarSet_24;
      MR_Word TVarRenaming_25;
      MR_Word PredArgTypes_26;
      MR_Word HOArgTypes_27;
      MR_Word LambdaTypes_28;
      MR_Word ArgConstraints_29;
      MR_Word Type_31;
      MR_Word LHSConstraint_32;
      MR_Word Var_40;
      MR_Integer Var_42;
      MR_Word Var_43;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Word ReturnType_30;
      MR_Word Var_44;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_19, &PredArgTypes0_20);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_19, &PredTVarSet_21);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_19, &Purity_22);
      PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_19);
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_35, (MR_Integer) 4))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_40, PredTVarSet_21, &NewTVarSet_24, &TVarRenaming_25);
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_35, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_35, (MR_Integer) 1))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_35, (MR_Integer) 2))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_35, (MR_Integer) 3))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_35, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_TCInfo_36 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NewTVarSet_24));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_72));
      }
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_25, PredArgTypes0_20, &PredArgTypes_26);
      Var_42 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ArgTVars_12);
      succeeded = mercury__list__split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_42, PredArgTypes_26, &HOArgTypes_27, &LambdaTypes_28);
      if (succeeded)
      {
        TypeInfo_77_77 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]);
        TypeCtorInfo_78_78 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        TypeCtorInfo_79_79 = (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0);
        Var_43 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[70]);
        ArgConstraints_29 = mercury__list__map_corresponding_3_f_0(TypeInfo_77_77, TypeCtorInfo_78_78, TypeCtorInfo_79_79, Var_43, ArgTVars_12, HOArgTypes_27);
        succeeded = (PredOrFunc_23 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) LambdaTypes_28)) == (MR_Integer) 1);
          if (succeeded)
          {
            ReturnType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LambdaTypes_28, (MR_Integer) 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LambdaTypes_28, (MR_Integer) 1))));
            succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          Type_31 = ReturnType_30;
        else
        {
          {
            Type_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Type_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Type_31, 1) = ((MR_Box) (PredOrFunc_23));
            MR_hl_field(MR_mktag(3), Type_31, 2) = ((MR_Box) (LambdaTypes_28));
            MR_hl_field(MR_mktag(3), Type_31, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Type_31, 4) = ((MR_Box) (Purity_22));
            MR_hl_field(MR_mktag(3), Type_31, 5) = NULL;
          }
        }
        {
          LHSConstraint_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LHSConstraint_32, 0) = ((MR_Box) (LHSTVar_11));
          MR_hl_field(MR_mktag(0), LHSConstraint_32, 1) = ((MR_Box) (Type_31));
        }
        {
          Constraints_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Constraints_16, 0) = ((MR_Box) (LHSConstraint_32));
          MR_hl_field(MR_mktag(1), Constraints_16, 1) = ((MR_Box) (ArgConstraints_29));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Pieces_33;
      MR_Word ErrMsg_34;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Integer Var_51;
      MR_Word Var_58;
      MR_Word Var_59;

      Var_51 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_13);
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[39])));
      }
      {
        Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces_33));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ErrMsg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ErrMsg_34, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), ErrMsg_34, 1) = ((MR_Box) (Var_58));
      }
      check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_34, STATE_VARIABLE_TCInfo_0_35, STATE_VARIABLE_TCInfo_36);
      Constraints_16 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *Constraint_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Constraints_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_TCInfo_46;

    check_hlds__type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TCInfo_46);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TCInfo_46));
  }
}

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    check_hlds__type_constraints__get_case_goal_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TCInfo_46;

    check_hlds__type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TCInfo_46);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TCInfo_46));
  }
}

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TCInfo_46;

    check_hlds__type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TCInfo_46);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TCInfo_46));
  }
}

static void MR_CALL 
check_hlds__type_constraints__shorthand_goal_to_constraint_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_TCInfo_46;

    check_hlds__type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_TCInfo_46);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_TCInfo_46));
  }
}

static void MR_CALL 
check_hlds__type_constraints__goal_to_constraint_4_p_0(
  MR_Word tscc_proc_1_input_1_Environment_5,
  MR_Word tscc_proc_1_input_2_Goal_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46)
{
  {
    MR_Word tscc_proc_2_input_1_Environment_6;
    MR_Word tscc_proc_2_input_2_GoalExpr_7;
    MR_Word tscc_proc_2_input_3_GoalInfo_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40;
    MR_Word tscc_output_1_STATE_VARIABLE_TCInfo_46;

    // The code for TSCC PROC 1: pred check_hlds.type_constraints.goal_to_constraint/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.type_constraints.goal_to_constraint/4-0
    ;
    // proc 2 in TSCC: pred check_hlds.type_constraints.shorthand_goal_to_constraint/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Environment_5 = tscc_proc_1_input_1_Environment_5;
      MR_Word Goal_6 = tscc_proc_1_input_2_Goal_6;
      MR_Word STATE_VARIABLE_TCInfo_0_45 = tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
      MR_Word STATE_VARIABLE_TCInfo_46;
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
      MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_35 = (MR_Word) (MR_body((MR_Word) (GoalExpr_8), (MR_Integer) 0));
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
          check_hlds__type_constraints__unify_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
          break;
        case (MR_Integer) 2:
          check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
              break;
            case (MR_Integer) 1:
              check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Var_58;
                MR_Box conv1_STATE_VARIABLE_TCInfo_46;

                {
                  Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
                  MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (check_hlds__type_constraints__goal_to_constraint_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Environment_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_58, Goals_34, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv1_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv1_STATE_VARIABLE_TCInfo_46));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_56;
                MR_Word Goals_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Box conv3_STATE_VARIABLE_TCInfo_46;

                {
                  Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
                  MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__type_constraints__goal_to_constraint_4_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Environment_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_56, Goals_64, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv3_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv3_STATE_VARIABLE_TCInfo_46));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word Var_49;
                MR_Word Goals_66;
                MR_Box conv6_STATE_VARIABLE_TCInfo_46;

                mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[69]), Cases_43, &Goals_66);
                {
                  Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
                  MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__type_constraints__goal_to_constraint_4_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Environment_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_49, Goals_66, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv6_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv6_STATE_VARIABLE_TCInfo_46));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
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
                MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Then_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word Else_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_TCInfo_51_51;
                MR_Word STATE_VARIABLE_TCInfo_52_52;
                MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

                check_hlds__type_constraints__goal_to_constraint_4_p_0(Environment_5, Cond_38, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_51_51);
                check_hlds__type_constraints__goal_to_constraint_4_p_0(Environment_5, Then_39, STATE_VARIABLE_TCInfo_51_51, &STATE_VARIABLE_TCInfo_52_52);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
                next_value_of_tscc_proc_1_input_2_Goal_6 = Else_40;
                next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_52_52;
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
      MR_Word Shorthand_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Shorthand_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GoalA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_10, (MR_Integer) 0))));
            MR_Word GoalB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_10, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_TCInfo_42_42;
            MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

            check_hlds__type_constraints__goal_to_constraint_4_p_0(Environment_6, GoalA_38, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_42_42);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
            next_value_of_tscc_proc_1_input_2_Goal_6 = GoalB_39;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_42_42;
            tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
            tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
            tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word GoalType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 0))));
            MR_Word Outer_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 1))));
            MR_Word Inner_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 2))));
            MR_Word Main_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 4))));
            MR_Word Alternatives_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 5))));
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
            MR_Word Var_72;
            MR_Word STATE_VARIABLE_TCInfo_73_73;
            MR_Word Var_74;
            MR_Word STATE_VARIABLE_TCInfo_75_75;
            MR_Word STATE_VARIABLE_TCInfo_76_76;
            MR_Word STATE_VARIABLE_TCInfo_77_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word STATE_VARIABLE_TCInfo_134_134;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Box conv8_STATE_VARIABLE_TCInfo_41;

            Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
            InnerInitVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_13, (MR_Integer) 0))));
            InnerFinalVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_13, (MR_Integer) 1))));
            Var_72 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            check_hlds__type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerInitVar_19, Var_72, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_73_73);
            Var_74 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            check_hlds__type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerFinalVar_20, Var_74, STATE_VARIABLE_TCInfo_73_73, &STATE_VARIABLE_TCInfo_75_75);
            OuterInitVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_12, (MR_Integer) 0))));
            OuterFinalVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_12, (MR_Integer) 1))));
            check_hlds__type_constraints__get_var_type_4_p_0(OuterInitVar_21, &OuterInit_23, STATE_VARIABLE_TCInfo_75_75, &STATE_VARIABLE_TCInfo_76_76);
            check_hlds__type_constraints__get_var_type_4_p_0(OuterFinalVar_22, &OuterFinal_24, STATE_VARIABLE_TCInfo_76_76, &STATE_VARIABLE_TCInfo_77_77);
            Var_80 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (OuterInit_23));
              MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              InitStmConstraint_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 0) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_87 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (OuterInit_23));
              MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Var_87));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              InitIOConstraint_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 0) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_94 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (OuterFinal_24));
              MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              FinalStmConstraint_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 0) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_101 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (OuterFinal_24));
              MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (Var_101));
            }
            {
              Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              FinalIOConstraint_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 0) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            switch (GoalType_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word Var_106;
                  MR_Word Var_107;
                  MR_Word STATE_VARIABLE_TCInfo_108_108;
                  MR_Word Var_111;
                  MR_Word Var_112;

                  {
                    Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (InitStmConstraint_25));
                    MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (OuterInit_23));
                    MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_106, Var_107, STATE_VARIABLE_TCInfo_77_77, &STATE_VARIABLE_TCInfo_108_108);
                  {
                    Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (FinalStmConstraint_27));
                    MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (OuterFinal_24));
                    MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_111, Var_112, STATE_VARIABLE_TCInfo_108_108, &STATE_VARIABLE_TCInfo_134_134);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_116;
                  MR_Word Var_117;
                  MR_Word STATE_VARIABLE_TCInfo_118_118;
                  MR_Word Var_121;
                  MR_Word Var_122;

                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (InitIOConstraint_26));
                    MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (OuterInit_23));
                    MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_116, Var_117, STATE_VARIABLE_TCInfo_77_77, &STATE_VARIABLE_TCInfo_118_118);
                  {
                    Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (FinalIOConstraint_28));
                    MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (OuterFinal_24));
                    MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_121, Var_122, STATE_VARIABLE_TCInfo_118_118, &STATE_VARIABLE_TCInfo_134_134);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_126;
                  MR_Word Var_127;
                  MR_Word STATE_VARIABLE_TCInfo_128_128;
                  MR_Word Var_129;
                  MR_Word Var_132;
                  MR_Word Var_133;
                  MR_Word Var_135;

                  {
                    Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (InitIOConstraint_26));
                    MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (InitStmConstraint_25));
                    MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                  }
                  {
                    Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (OuterInit_23));
                    MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_126, Var_127, STATE_VARIABLE_TCInfo_77_77, &STATE_VARIABLE_TCInfo_128_128);
                  {
                    Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (FinalIOConstraint_28));
                    MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (FinalStmConstraint_27));
                    MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
                  }
                  {
                    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (OuterFinal_24));
                    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_132, Var_133, STATE_VARIABLE_TCInfo_128_128, &STATE_VARIABLE_TCInfo_134_134);
                }
                break;
            }
            {
              Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
              MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (check_hlds__type_constraints__shorthand_goal_to_constraint_5_p_0_5));
              MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (Environment_6));
            }
            {
              Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Main_15));
              MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Alternatives_16));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_138, Var_139, ((MR_Box) (STATE_VARIABLE_TCInfo_134_134)), &conv8_STATE_VARIABLE_TCInfo_41);
            STATE_VARIABLE_TCInfo_41 = ((MR_Word) (conv8_STATE_VARIABLE_TCInfo_41));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeIO_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_10, (MR_Integer) 0))));
            MR_Word SubGoal_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_10, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_TCInfo_68_68;
            MR_Word Context_141;
            MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

            Context_141 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
            if ((MaybeIO_29 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_TCInfo_68_68 = STATE_VARIABLE_TCInfo_0_40;
            else
            {
              MR_Word IOVarA_32;
              MR_Word IOVarB_33;
              MR_Word InitA_34;
              MR_Word InitB_35;
              MR_Word ConstraintA_36;
              MR_Word ConstraintB_37;
              MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_29, (MR_Integer) 0))));
              MR_Word STATE_VARIABLE_TCInfo_45_45;
              MR_Word STATE_VARIABLE_TCInfo_46_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word STATE_VARIABLE_TCInfo_63_63;
              MR_Word Var_66;
              MR_Word Var_67;

              IOVarA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
              IOVarB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
              check_hlds__type_constraints__get_var_type_4_p_0(IOVarA_32, &InitA_34, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_45_45);
              check_hlds__type_constraints__get_var_type_4_p_0(IOVarB_33, &InitB_35, STATE_VARIABLE_TCInfo_45_45, &STATE_VARIABLE_TCInfo_46_46);
              Var_49 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (InitA_34));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Var_49));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ConstraintA_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstraintA_36, 0) = ((MR_Box) (Var_47));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 2) = ((MR_Box) (Context_141));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_56 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (InitB_35));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ConstraintB_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstraintB_37, 0) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 2) = ((MR_Box) (Context_141));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ConstraintA_36));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (InitA_34));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              check_hlds__type_constraints__add_type_constraint_4_p_0(Var_61, Var_62, STATE_VARIABLE_TCInfo_46_46, &STATE_VARIABLE_TCInfo_63_63);
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ConstraintB_37));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (InitB_35));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              check_hlds__type_constraints__add_type_constraint_4_p_0(Var_66, Var_67, STATE_VARIABLE_TCInfo_63_63, &STATE_VARIABLE_TCInfo_68_68);
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
            next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_31;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_68_68;
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
}

static void MR_CALL 
check_hlds__type_constraints__shorthand_goal_to_constraint_5_p_0(
  MR_Word tscc_proc_2_input_1_Environment_6,
  MR_Word tscc_proc_2_input_2_GoalExpr_7,
  MR_Word tscc_proc_2_input_3_GoalInfo_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46)
{
  {
    MR_Word tscc_proc_1_input_1_Environment_5;
    MR_Word tscc_proc_1_input_2_Goal_6;
    MR_Word tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
    MR_Word tscc_output_1_STATE_VARIABLE_TCInfo_46;

    // The code for TSCC PROC 2: pred check_hlds.type_constraints.shorthand_goal_to_constraint/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.type_constraints.goal_to_constraint/4-0
    ;
    // proc 2 in TSCC: pred check_hlds.type_constraints.shorthand_goal_to_constraint/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Environment_5 = tscc_proc_1_input_1_Environment_5;
      MR_Word Goal_6 = tscc_proc_1_input_2_Goal_6;
      MR_Word STATE_VARIABLE_TCInfo_0_45 = tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
      MR_Word STATE_VARIABLE_TCInfo_46;
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
      MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_35 = (MR_Word) (MR_body((MR_Word) (GoalExpr_8), (MR_Integer) 0));
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
          check_hlds__type_constraints__unify_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
          break;
        case (MR_Integer) 2:
          check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
              break;
            case (MR_Integer) 1:
              check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Var_58;
                MR_Box conv1_STATE_VARIABLE_TCInfo_46;

                {
                  Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
                  MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (check_hlds__type_constraints__goal_to_constraint_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Environment_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_58, Goals_34, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv1_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv1_STATE_VARIABLE_TCInfo_46));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_56;
                MR_Word Goals_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Box conv3_STATE_VARIABLE_TCInfo_46;

                {
                  Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
                  MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__type_constraints__goal_to_constraint_4_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Environment_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_56, Goals_64, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv3_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv3_STATE_VARIABLE_TCInfo_46));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word Var_49;
                MR_Word Goals_66;
                MR_Box conv6_STATE_VARIABLE_TCInfo_46;

                mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[69]), Cases_43, &Goals_66);
                {
                  Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
                  MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__type_constraints__goal_to_constraint_4_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Environment_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_49, Goals_66, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv6_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv6_STATE_VARIABLE_TCInfo_46));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
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
                MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Then_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word Else_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_TCInfo_51_51;
                MR_Word STATE_VARIABLE_TCInfo_52_52;
                MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

                check_hlds__type_constraints__goal_to_constraint_4_p_0(Environment_5, Cond_38, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_51_51);
                check_hlds__type_constraints__goal_to_constraint_4_p_0(Environment_5, Then_39, STATE_VARIABLE_TCInfo_51_51, &STATE_VARIABLE_TCInfo_52_52);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
                next_value_of_tscc_proc_1_input_2_Goal_6 = Else_40;
                next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_52_52;
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
      MR_Word Shorthand_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Shorthand_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GoalA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_10, (MR_Integer) 0))));
            MR_Word GoalB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_10, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_TCInfo_42_42;
            MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

            check_hlds__type_constraints__goal_to_constraint_4_p_0(Environment_6, GoalA_38, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_42_42);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
            next_value_of_tscc_proc_1_input_2_Goal_6 = GoalB_39;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_42_42;
            tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
            tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
            tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word GoalType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 0))));
            MR_Word Outer_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 1))));
            MR_Word Inner_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 2))));
            MR_Word Main_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 4))));
            MR_Word Alternatives_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_10, (MR_Integer) 5))));
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
            MR_Word Var_72;
            MR_Word STATE_VARIABLE_TCInfo_73_73;
            MR_Word Var_74;
            MR_Word STATE_VARIABLE_TCInfo_75_75;
            MR_Word STATE_VARIABLE_TCInfo_76_76;
            MR_Word STATE_VARIABLE_TCInfo_77_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word STATE_VARIABLE_TCInfo_134_134;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Box conv8_STATE_VARIABLE_TCInfo_41;

            Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
            InnerInitVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_13, (MR_Integer) 0))));
            InnerFinalVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_13, (MR_Integer) 1))));
            Var_72 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            check_hlds__type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerInitVar_19, Var_72, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_73_73);
            Var_74 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            check_hlds__type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerFinalVar_20, Var_74, STATE_VARIABLE_TCInfo_73_73, &STATE_VARIABLE_TCInfo_75_75);
            OuterInitVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_12, (MR_Integer) 0))));
            OuterFinalVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_12, (MR_Integer) 1))));
            check_hlds__type_constraints__get_var_type_4_p_0(OuterInitVar_21, &OuterInit_23, STATE_VARIABLE_TCInfo_75_75, &STATE_VARIABLE_TCInfo_76_76);
            check_hlds__type_constraints__get_var_type_4_p_0(OuterFinalVar_22, &OuterFinal_24, STATE_VARIABLE_TCInfo_76_76, &STATE_VARIABLE_TCInfo_77_77);
            Var_80 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (OuterInit_23));
              MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              InitStmConstraint_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 0) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), InitStmConstraint_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_87 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (OuterInit_23));
              MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Var_87));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              InitIOConstraint_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 0) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), InitIOConstraint_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_94 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (OuterFinal_24));
              MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              FinalStmConstraint_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 0) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FinalStmConstraint_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_101 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (OuterFinal_24));
              MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (Var_101));
            }
            {
              Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              FinalIOConstraint_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 0) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 2) = ((MR_Box) (Context_18));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FinalIOConstraint_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            switch (GoalType_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word Var_106;
                  MR_Word Var_107;
                  MR_Word STATE_VARIABLE_TCInfo_108_108;
                  MR_Word Var_111;
                  MR_Word Var_112;

                  {
                    Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (InitStmConstraint_25));
                    MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (OuterInit_23));
                    MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_106, Var_107, STATE_VARIABLE_TCInfo_77_77, &STATE_VARIABLE_TCInfo_108_108);
                  {
                    Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (FinalStmConstraint_27));
                    MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (OuterFinal_24));
                    MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_111, Var_112, STATE_VARIABLE_TCInfo_108_108, &STATE_VARIABLE_TCInfo_134_134);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_116;
                  MR_Word Var_117;
                  MR_Word STATE_VARIABLE_TCInfo_118_118;
                  MR_Word Var_121;
                  MR_Word Var_122;

                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (InitIOConstraint_26));
                    MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (OuterInit_23));
                    MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_116, Var_117, STATE_VARIABLE_TCInfo_77_77, &STATE_VARIABLE_TCInfo_118_118);
                  {
                    Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (FinalIOConstraint_28));
                    MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (OuterFinal_24));
                    MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_121, Var_122, STATE_VARIABLE_TCInfo_118_118, &STATE_VARIABLE_TCInfo_134_134);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_126;
                  MR_Word Var_127;
                  MR_Word STATE_VARIABLE_TCInfo_128_128;
                  MR_Word Var_129;
                  MR_Word Var_132;
                  MR_Word Var_133;
                  MR_Word Var_135;

                  {
                    Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (InitIOConstraint_26));
                    MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (InitStmConstraint_25));
                    MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                  }
                  {
                    Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (OuterInit_23));
                    MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_126, Var_127, STATE_VARIABLE_TCInfo_77_77, &STATE_VARIABLE_TCInfo_128_128);
                  {
                    Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (FinalIOConstraint_28));
                    MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (FinalStmConstraint_27));
                    MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
                  }
                  {
                    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (OuterFinal_24));
                    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__type_constraints__add_type_constraint_4_p_0(Var_132, Var_133, STATE_VARIABLE_TCInfo_128_128, &STATE_VARIABLE_TCInfo_134_134);
                }
                break;
            }
            {
              Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
              MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (check_hlds__type_constraints__shorthand_goal_to_constraint_5_p_0_5));
              MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (Environment_6));
            }
            {
              Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Main_15));
              MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Alternatives_16));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_138, Var_139, ((MR_Box) (STATE_VARIABLE_TCInfo_134_134)), &conv8_STATE_VARIABLE_TCInfo_41);
            STATE_VARIABLE_TCInfo_41 = ((MR_Word) (conv8_STATE_VARIABLE_TCInfo_41));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeIO_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_10, (MR_Integer) 0))));
            MR_Word SubGoal_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_10, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_TCInfo_68_68;
            MR_Word Context_141;
            MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

            Context_141 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
            if ((MaybeIO_29 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_TCInfo_68_68 = STATE_VARIABLE_TCInfo_0_40;
            else
            {
              MR_Word IOVarA_32;
              MR_Word IOVarB_33;
              MR_Word InitA_34;
              MR_Word InitB_35;
              MR_Word ConstraintA_36;
              MR_Word ConstraintB_37;
              MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_29, (MR_Integer) 0))));
              MR_Word STATE_VARIABLE_TCInfo_45_45;
              MR_Word STATE_VARIABLE_TCInfo_46_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word STATE_VARIABLE_TCInfo_63_63;
              MR_Word Var_66;
              MR_Word Var_67;

              IOVarA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
              IOVarB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
              check_hlds__type_constraints__get_var_type_4_p_0(IOVarA_32, &InitA_34, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_45_45);
              check_hlds__type_constraints__get_var_type_4_p_0(IOVarB_33, &InitB_35, STATE_VARIABLE_TCInfo_45_45, &STATE_VARIABLE_TCInfo_46_46);
              Var_49 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (InitA_34));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Var_49));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ConstraintA_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstraintA_36, 0) = ((MR_Box) (Var_47));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 2) = ((MR_Box) (Context_141));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ConstraintA_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_56 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (InitB_35));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ConstraintB_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstraintB_37, 0) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 2) = ((MR_Box) (Context_141));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ConstraintB_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ConstraintA_36));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (InitA_34));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              check_hlds__type_constraints__add_type_constraint_4_p_0(Var_61, Var_62, STATE_VARIABLE_TCInfo_46_46, &STATE_VARIABLE_TCInfo_63_63);
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ConstraintB_37));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (InitB_35));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              check_hlds__type_constraints__add_type_constraint_4_p_0(Var_66, Var_67, STATE_VARIABLE_TCInfo_63_63, &STATE_VARIABLE_TCInfo_68_68);
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
            next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_31;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_68_68;
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
}

static MR_Box MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__2_2;

    conv12_HeadVar__2_2 = check_hlds__type_constraints__tvar_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_TVar_6;
    MR_Word conv9_HeadVar__4_4;

    check_hlds__type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv10_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv9_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv10_TVar_6));
    *wrapper_arg_4 = ((MR_Box) (conv9_HeadVar__4_4));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv7_Constraint_14;
    MR_Word conv6_STATE_VARIABLE_TCInfo_36;

    succeeded = check_hlds__type_constraints__ho_pred_unif_constraint_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_TCInfo_36);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv7_Constraint_14));
      *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_TCInfo_36));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Constraints_12;
    MR_Word conv3_STATE_VARIABLE_TCInfo_33;

    check_hlds__type_constraints__functor_unif_constraint_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_Constraints_12, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_TCInfo_33);
    *wrapper_arg_2 = ((MR_Box) (conv4_Constraints_12));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_TCInfo_33));
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TVar_6;
    MR_Word conv0_HeadVar__4_4;

    check_hlds__type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_TVar_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_56,
  MR_Word * STATE_VARIABLE_TCInfo_57)
{
  {
    MR_bool succeeded;
    MR_Word Context_10;
    MR_Word L_11;
    MR_Word RHS_12;
    MR_Word LTVar_16;
    MR_Word Constraints_19;
    MR_Word RelevantTVars_20;
    MR_Word STATE_VARIABLE_TCInfo_58_58;
    MR_Word STATE_VARIABLE_TCInfo_114_114;

    Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    L_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 0))));
    RHS_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 1))));
    check_hlds__type_constraints__get_var_type_4_p_0(L_11, &LTVar_16, STATE_VARIABLE_TCInfo_0_56, &STATE_VARIABLE_TCInfo_58_58);
    switch (MR_tag((MR_Word) RHS_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word R_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_12, (MR_Integer) 0))));
          MR_Word RTVar_18;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_124;

          check_hlds__type_constraints__get_var_type_4_p_0(R_17, &RTVar_18, STATE_VARIABLE_TCInfo_58_58, &STATE_VARIABLE_TCInfo_114_114);
          Var_118 = check_hlds__type_constraints__tvar_to_type_1_f_0(RTVar_18);
          {
            Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (LTVar_16));
            MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (Var_118));
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
            MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (Var_116));
            MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Constraints_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Constraints_19, 0) = ((MR_Box) (Var_115));
            MR_hl_field(MR_mktag(1), Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (RTVar_18));
            MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            RelevantTVars_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
            MR_hl_field(MR_mktag(1), RelevantTVars_20, 1) = ((MR_Box) (Var_124));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_12, (MR_Integer) 0))));
          MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_12, (MR_Integer) 2))));
          MR_Word Builtin_24;

          succeeded = check_hlds__type_constraints__builtin_atomic_type_2_p_0(ConsId_21, &Builtin_24);
          if (succeeded)
          {
            MR_Word SimpleConstraint_25;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;

            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_71, 0) = ((MR_Box) (Builtin_24));
            }
            {
              SimpleConstraint_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SimpleConstraint_25, 0) = ((MR_Box) (LTVar_16));
              MR_hl_field(MR_mktag(0), SimpleConstraint_25, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (SimpleConstraint_25));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Constraints_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Constraints_19, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              RelevantTVars_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
              MR_hl_field(MR_mktag(1), RelevantTVars_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            STATE_VARIABLE_TCInfo_114_114 = STATE_VARIABLE_TCInfo_58_58;
          }
          else
          {
            MR_Word Name_26;
            MR_Integer Arity_27;
            MR_Word TypeInfo_130_130;
            MR_Integer Var_161;

            succeeded = ((((MR_tag((MR_Word) ConsId_21)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_21, (MR_Integer) 0))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Name_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_21, (MR_Integer) 1))));
              Arity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_21, (MR_Integer) 2))));
              TypeInfo_130_130 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]);
              Var_161 = mercury__list__length_1_f_0(TypeInfo_130_130, Args_23);
              succeeded = (Arity_27 == Var_161);
            }
            if (succeeded)
            {
              MR_Word ArgTypeVars_29;
              MR_Word FuncEnv_32;
              MR_Word PredEnv_33;
              MR_Word TypeConstraints_35;
              MR_Word PredIds_36;
              MR_Word PredConstraints_40;
              MR_Word STATE_VARIABLE_TCInfo_81_81;
              MR_Word STATE_VARIABLE_TCInfo_83_83;
              MR_Word STATE_VARIABLE_TCInfo_86_86;
              MR_Box conv2_STATE_VARIABLE_TCInfo_81_81;
              MR_Word ConsDefns_34;

              mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[66]), Args_23, &ArgTypeVars_29, ((MR_Box) (STATE_VARIABLE_TCInfo_58_58)), &conv2_STATE_VARIABLE_TCInfo_81_81);
              STATE_VARIABLE_TCInfo_81_81 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_81_81));
              FuncEnv_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Environment_6, (MR_Integer) 2))));
              PredEnv_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Environment_6, (MR_Integer) 3))));
              succeeded = hlds__hlds_data__search_cons_table_3_p_0(FuncEnv_32, ConsId_21, &ConsDefns_34);
              if (succeeded)
              {
                MR_Word Var_82;
                MR_Box conv5_STATE_VARIABLE_TCInfo_83_83;

                {
                  Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (LTVar_16));
                  MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (ArgTypeVars_29));
                  MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (GoalInfo_8));
                }
                mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_82, ConsDefns_34, &TypeConstraints_35, ((MR_Box) (STATE_VARIABLE_TCInfo_81_81)), &conv5_STATE_VARIABLE_TCInfo_83_83);
                STATE_VARIABLE_TCInfo_83_83 = ((MR_Word) (conv5_STATE_VARIABLE_TCInfo_83_83));
              }
              else
              {
                TypeConstraints_35 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_TCInfo_83_83 = STATE_VARIABLE_TCInfo_81_81;
              }
              hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredEnv_33, (MR_Integer) 1, Name_26, &PredIds_36);
              if ((PredIds_36 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                PredConstraints_40 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_TCInfo_86_86 = STATE_VARIABLE_TCInfo_83_83;
              }
              else
              {
                MR_Word Preds_39;
                MR_Word Var_85;
                MR_Box conv8_STATE_VARIABLE_TCInfo_86_86;

                hlds__pred_table__predicate_table_get_preds_2_p_0(PredEnv_33, &Preds_39);
                {
                  Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_12[3]));
                  MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (check_hlds__type_constraints__unify_goal_to_constraint_5_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Preds_39));
                  MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (GoalInfo_8));
                  MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (LTVar_16));
                  MR_hl_field(MR_mktag(0), Var_85, 6) = ((MR_Box) (ArgTypeVars_29));
                }
                mercury__list__filter_map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_85, PredIds_36, &PredConstraints_40, ((MR_Box) (STATE_VARIABLE_TCInfo_83_83)), &conv8_STATE_VARIABLE_TCInfo_86_86);
                STATE_VARIABLE_TCInfo_86_86 = ((MR_Word) (conv8_STATE_VARIABLE_TCInfo_86_86));
              }
              Constraints_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), TypeConstraints_35, PredConstraints_40);
              if ((Constraints_19 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Pieces_41;
                MR_Word ErrMsg_42;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_91;
                MR_Word Var_98;
                MR_Word Var_99;

                {
                  Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Name_26));
                  MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (Arity_27));
                }
                {
                  Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
                  MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[39])));
                }
                {
                  Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[70])));
                  MR_hl_field(MR_mktag(1), Pieces_41, 1) = ((MR_Box) (Var_89));
                }
                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Pieces_41));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  ErrMsg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ErrMsg_42, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), ErrMsg_42, 1) = ((MR_Box) (Var_98));
                }
                check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_42, STATE_VARIABLE_TCInfo_86_86, &STATE_VARIABLE_TCInfo_114_114);
              }
              else
                STATE_VARIABLE_TCInfo_114_114 = STATE_VARIABLE_TCInfo_86_86;
              {
                RelevantTVars_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
                MR_hl_field(MR_mktag(1), RelevantTVars_20, 1) = ((MR_Box) (ArgTypeVars_29));
              }
            }
            else
            {
              MR_Word ErrMsg_128;

              {
                ErrMsg_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ErrMsg_128, 0) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(0), ErrMsg_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[71])));
              }
              check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_128, STATE_VARIABLE_TCInfo_58_58, &STATE_VARIABLE_TCInfo_114_114);
              RelevantTVars_20 = (MR_Word) ((MR_Unsigned) 0U);
              Constraints_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Purity_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 3);
          MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word LambdaGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 6))));
          MR_Word ArgTVars_53;
          MR_Word ArgTypes_54;
          MR_Word LambdaType_55;
          MR_Word STATE_VARIABLE_TCInfo_60_60;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Args_129 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 3))));
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 0)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 5)));
          MR_Box conv11_STATE_VARIABLE_TCInfo_60_60;

          mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[67]), Args_129, &ArgTVars_53, ((MR_Box) (STATE_VARIABLE_TCInfo_58_58)), &conv11_STATE_VARIABLE_TCInfo_60_60);
          STATE_VARIABLE_TCInfo_60_60 = ((MR_Word) (conv11_STATE_VARIABLE_TCInfo_60_60));
          ArgTypes_54 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[68]), ArgTVars_53);
          parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_45, PredOrFunc_47, ArgTypes_54, &LambdaType_55);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (LTVar_16));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (LambdaType_55));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Constraints_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Constraints_19, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            RelevantTVars_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
            MR_hl_field(MR_mktag(1), RelevantTVars_20, 1) = ((MR_Box) (ArgTVars_53));
          }
          check_hlds__type_constraints__goal_to_constraint_4_p_0(Environment_6, LambdaGoal_52, STATE_VARIABLE_TCInfo_60_60, &STATE_VARIABLE_TCInfo_114_114);
        }
        break;
    }
    check_hlds__type_constraints__add_type_constraint_4_p_0(Constraints_19, RelevantTVars_20, STATE_VARIABLE_TCInfo_114_114, STATE_VARIABLE_TCInfo_57);
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = check_hlds__type_constraints__tvar_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TVar_6;
    MR_Word conv0_HeadVar__4_4;

    check_hlds__type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_TVar_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__type_constraints__generic_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_41,
  MR_Word * STATE_VARIABLE_TCInfo_42)
{
  {
    MR_bool succeeded;
    MR_Word Details_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
    MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
    MR_Word Context_15;
    MR_Word ArgTVars_16;
    MR_Word ArgTypes_17;
    MR_Word STATE_VARIABLE_TCInfo_44_44;
    MR_Box conv2_STATE_VARIABLE_TCInfo_44_44;

    Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[64]), Vars_11, &ArgTVars_16, ((MR_Box) (STATE_VARIABLE_TCInfo_0_41)), &conv2_STATE_VARIABLE_TCInfo_44_44);
    STATE_VARIABLE_TCInfo_44_44 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_44_44));
    ArgTypes_17 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[65]), ArgTVars_16);
    switch (MR_tag((MR_Word) Details_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CallVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_10, (MR_Integer) 0))));
          MR_Word Purity_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_10, (MR_Integer) 1))));
          MR_Word PredOrFunc_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Details_10, (MR_Integer) 2))));
          MR_Word HOType_22;

          {
            HOType_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HOType_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), HOType_22, 1) = ((MR_Box) (PredOrFunc_20));
            MR_hl_field(MR_mktag(3), HOType_22, 2) = ((MR_Box) (ArgTypes_17));
            MR_hl_field(MR_mktag(3), HOType_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), HOType_22, 4) = ((MR_Box) (Purity_19));
            MR_hl_field(MR_mktag(3), HOType_22, 5) = NULL;
          }
          check_hlds__type_constraints__variable_assignment_constraint_5_p_0(Context_15, CallVar_18, HOType_22, STATE_VARIABLE_TCInfo_44_44, STATE_VARIABLE_TCInfo_42);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer MethodNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Details_10, (MR_Integer) 1))));
          MR_Word ClassId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Details_10, (MR_Integer) 2))));
          MR_Word Name_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_25, (MR_Integer) 0))));
          MR_Integer Arity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_25, (MR_Integer) 1))));
          MR_Word ClassDefn_29;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Environment_6, (MR_Integer) 1))));
          MR_Box conv4_ClassDefn_29;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Var_73, ((MR_Box) (ClassId_25)), &conv4_ClassDefn_29);
          if (succeeded)
          {
            ClassDefn_29 = ((MR_Word) (conv4_ClassDefn_29));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Method_30;
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_29, (MR_Integer) 7))));
            MR_Box conv5_Method_30;

            succeeded = mercury__list__index0_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_74, MethodNum_24, &conv5_Method_30);
            if (succeeded)
            {
              Method_30 = ((MR_Word) (conv5_Method_30));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_30, (MR_Integer) 0))));
              MR_Word Preds_33;
              MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Environment_6, (MR_Integer) 3))));
              MR_Integer Var_76;

              hlds__pred_table__predicate_table_get_preds_2_p_0(Var_75, &Preds_33);
              Var_76 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), Vars_11);
              succeeded = check_hlds__type_constraints__pred_has_arity_3_p_0(Preds_33, Var_76, PredId_31);
              if (succeeded)
              {
                MR_Word Constraint_34;
                MR_Word PredTVars_35;
                MR_Word TVars_36;
                MR_Word STATE_VARIABLE_TCInfo_77_77;
                MR_Word Var_78;

                check_hlds__type_constraints__pred_call_constraint_8_p_0(Preds_33, GoalInfo_8, ArgTVars_16, PredId_31, &Constraint_34, &PredTVars_35, STATE_VARIABLE_TCInfo_44_44, &STATE_VARIABLE_TCInfo_77_77);
                mercury__list__append_3_p_1((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ArgTVars_16, PredTVars_35, &TVars_36);
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Constraint_34));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__type_constraints__add_type_constraint_4_p_0(Var_78, TVars_36, STATE_VARIABLE_TCInfo_77_77, STATE_VARIABLE_TCInfo_42);
              }
              else
              {
                MR_Word Pieces_37;
                MR_Word ErrMsg_38;
                MR_Word Var_83;
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Word Var_88;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_100;
                MR_Word Var_101;

                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (MethodNum_24));
                }
                {
                  Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Name_27));
                  MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (Arity_28));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
                }
                {
                  Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
                  MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[45])));
                }
                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[66])));
                  MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[65])));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
                }
                {
                  Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[64])));
                  MR_hl_field(MR_mktag(1), Pieces_37, 1) = ((MR_Box) (Var_83));
                }
                {
                  Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (Pieces_37));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
                  MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  ErrMsg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ErrMsg_38, 0) = ((MR_Box) (Context_15));
                  MR_hl_field(MR_mktag(0), ErrMsg_38, 1) = ((MR_Box) (Var_100));
                }
                check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_38, STATE_VARIABLE_TCInfo_44_44, STATE_VARIABLE_TCInfo_42);
              }
            }
            else
            {
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Pieces_137;
              MR_Word ErrMsg_138;

              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Name_27));
                MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Arity_28));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
                MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[47])));
              }
              {
                Pieces_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[67])));
                MR_hl_field(MR_mktag(1), Pieces_137, 1) = ((MR_Box) (Var_106));
              }
              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Pieces_137));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ErrMsg_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ErrMsg_138, 0) = ((MR_Box) (Context_15));
                MR_hl_field(MR_mktag(0), ErrMsg_138, 1) = ((MR_Box) (Var_115));
              }
              check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_138, STATE_VARIABLE_TCInfo_44_44, STATE_VARIABLE_TCInfo_42);
            }
          }
          else
          {
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Pieces_139;
            MR_Word ErrMsg_140;

            {
              Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (Name_27));
              MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (Arity_28));
            }
            {
              Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (Var_123));
            }
            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[49])));
            }
            {
              Pieces_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[67])));
              MR_hl_field(MR_mktag(1), Pieces_139, 1) = ((MR_Box) (Var_121));
            }
            {
              Var_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (Pieces_139));
            }
            {
              Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
              MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ErrMsg_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ErrMsg_140, 0) = ((MR_Box) (Context_15));
              MR_hl_field(MR_mktag(0), ErrMsg_140, 1) = ((MR_Box) (Var_130));
            }
            check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_140, STATE_VARIABLE_TCInfo_44_44, STATE_VARIABLE_TCInfo_42);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Name_147 = ((MR_String) ((MR_hl_field(MR_mktag(2), Details_10, (MR_Integer) 0))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Environment_6, (MR_Integer) 0))));
          MR_Word _ArgTypes_39;

          succeeded = parse_tree__prog_event__event_arg_types_3_p_0(Var_46, Name_147, &_ArgTypes_39);
          if (succeeded)
          {
            MR_Word ErrMsg_142;

            {
              ErrMsg_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ErrMsg_142, 0) = ((MR_Box) (Context_15));
              MR_hl_field(MR_mktag(0), ErrMsg_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[68])));
            }
            check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_142, STATE_VARIABLE_TCInfo_44_44, STATE_VARIABLE_TCInfo_42);
          }
          else
          {
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Pieces_143;
            MR_Word ErrMsg_144;

            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Name_147));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[45])));
            }
            {
              Pieces_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[69])));
              MR_hl_field(MR_mktag(1), Pieces_143, 1) = ((MR_Box) (Var_61));
            }
            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Pieces_143));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ErrMsg_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ErrMsg_144, 0) = ((MR_Box) (Context_15));
              MR_hl_field(MR_mktag(0), ErrMsg_144, 1) = ((MR_Box) (Var_69));
            }
            check_hlds__type_constraints__add_message_to_spec_3_p_0(ErrMsg_144, STATE_VARIABLE_TCInfo_44_44, STATE_VARIABLE_TCInfo_42);
          }
        }
        break;
      case (MR_Integer) 3:
        *STATE_VARIABLE_TCInfo_42 = STATE_VARIABLE_TCInfo_44_44;
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__pred_has_arity_3_p_0(
  MR_Word Preds_4,
  MR_Integer Arity_5,
  MR_Word PredId_6)
{
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
}

static void MR_CALL 
check_hlds__type_constraints__variable_assignment_constraint_5_p_0(
  MR_Word Context_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_TCInfo_0_13,
  MR_Word * STATE_VARIABLE_TCInfo_14)
{
  {
    MR_Word TypeVariables_10;
    MR_Word TVar_11;
    MR_Word Constraint_12;
    MR_Word STATE_VARIABLE_TCInfo_15_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_22;
    MR_Word Var_23;

    parse_tree__prog_type__type_vars_2_p_0(Type_8, &TypeVariables_10);
    check_hlds__type_constraints__get_var_type_4_p_0(Var_7, &TVar_11, STATE_VARIABLE_TCInfo_0_13, &STATE_VARIABLE_TCInfo_15_15);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (TVar_11));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Type_8));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Constraint_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraint_12, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), Constraint_12, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Constraint_12, 2) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Constraint_12, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Constraint_12, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Constraint_12));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (TVar_11));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (TypeVariables_10));
    }
    check_hlds__type_constraints__add_type_constraint_4_p_0(Var_22, Var_23, STATE_VARIABLE_TCInfo_15_15, STATE_VARIABLE_TCInfo_14);
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__pred_call_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = check_hlds__type_constraints__create_stconstr_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__type_constraints__pred_call_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word ArgTVars_11,
  MR_Word PredId_12,
  MR_Word * Constraint_13,
  MR_Word * TVars_14,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word Constraints_16;
    MR_Word Context_17;
    MR_Word GoalId_18;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word PredInfo_19;
    MR_Box conv0_PredInfo_19;

    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (PredId_12));
    }
    Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(Info_10);
    GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Info_10);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (GoalId_18));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_9, ((MR_Box) (PredId_12)), &conv0_PredInfo_19);
    if (succeeded)
    {
      PredInfo_19 = ((MR_Word) (conv0_PredInfo_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word PredArgTypes0_20;
      MR_Word PredTVarSet_21;
      MR_Word NewTVarSet_22;
      MR_Word TVarRenaming_23;
      MR_Word PredArgTypes_24;
      MR_Word Var_32;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_60;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_19, &PredArgTypes0_20);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_19, &PredTVarSet_21);
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 4))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_32, PredTVarSet_21, &NewTVarSet_22, &TVarRenaming_23);
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 0))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 1))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 2))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 3))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_TCInfo_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NewTVarSet_22));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_60));
      }
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_23, PredArgTypes0_20, &PredArgTypes_24);
      Constraints_16 = mercury__list__map_corresponding_3_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[63]), ArgTVars_11, PredArgTypes_24);
      parse_tree__prog_type__type_vars_list_2_p_0(PredArgTypes_24, TVars_14);
    }
    else
    {
      MR_Word Pieces_25;
      MR_Word ErrMsg_26;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Integer Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Spec_73;
      MR_Word Var_76;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;

      Var_39 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_12);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[39])));
      }
      {
        Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_25));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ErrMsg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ErrMsg_26, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), ErrMsg_26, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (ErrMsg_26));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_73, 2) = ((MR_Box) (Var_76));
      }
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 0))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 1))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 2))));
      Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 3))));
      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 4))));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_27, (MR_Integer) 5))));
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Spec_73));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_TCInfo_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_79));
      }
      *TVars_14 = (MR_Word) ((MR_Unsigned) 0U);
      Constraints_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Constraint_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Constraints_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_TCInfo_14;

    check_hlds__type_constraints__variable_assignment_constraint_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_TCInfo_14);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_TCInfo_14));
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_26,
  MR_Word * STATE_VARIABLE_TCInfo_27)
{
  {
    MR_bool succeeded;
    MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
    MR_Word ForeignArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
    MR_Word Context_17;
    MR_Word ArgVars_18;
    MR_Word ArgTypes0_19;
    MR_Word Preds_20;
    MR_Word Var_30;
    MR_Word PredInfo_21;
    MR_Box conv2_PredInfo_21;

    Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    ArgVars_18 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[61]), ForeignArgs_13);
    ArgTypes0_19 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[62]), ForeignArgs_13);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Environment_6, (MR_Integer) 3))));
    hlds__pred_table__predicate_table_get_preds_2_p_0(Var_30, &Preds_20);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_20, ((MR_Box) (PredId_11)), &conv2_PredInfo_21);
    if (succeeded)
    {
      PredInfo_21 = ((MR_Word) (conv2_PredInfo_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word PredTVarSet_22;
      MR_Word NewTVarSet_23;
      MR_Word TVarRenaming_24;
      MR_Word ArgTypes_25;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_TCInfo_32_32;
      MR_Word Var_33;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_50;
      MR_Box conv4_STATE_VARIABLE_TCInfo_27;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &PredTVarSet_22);
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_26, (MR_Integer) 4))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_31, PredTVarSet_22, &NewTVarSet_23, &TVarRenaming_24);
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_26, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_26, (MR_Integer) 1))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_26, (MR_Integer) 2))));
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_26, (MR_Integer) 3))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_26, (MR_Integer) 5))));
      {
        STATE_VARIABLE_TCInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_32_32, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_32_32, 1) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_32_32, 2) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_32_32, 3) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_32_32, 4) = ((MR_Box) (NewTVarSet_23));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_32_32, 5) = ((MR_Box) (Var_50));
      }
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_24, ArgTypes0_19, &ArgTypes_25);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_11[1]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (check_hlds__type_constraints__foreign_proc_goal_to_constraint_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Context_17));
      }
      mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_33, ArgVars_18, ArgTypes_25, ((MR_Box) (STATE_VARIABLE_TCInfo_32_32)), &conv4_STATE_VARIABLE_TCInfo_27);
      *STATE_VARIABLE_TCInfo_27 = ((MR_Word) (conv4_STATE_VARIABLE_TCInfo_27));
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_constraints.foreign_proc_goal_to_constraint\'/5", (MR_String) "cannot find pred_info for foreign_proc");
        return;
      }
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Constraint_13;
    MR_Word conv4_TVars_14;
    MR_Word conv3_STATE_VARIABLE_TCInfo_28;

    check_hlds__type_constraints__pred_call_constraint_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_Constraint_13, &conv4_TVars_14, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_TCInfo_28);
    *wrapper_arg_2 = ((MR_Box) (conv5_Constraint_13));
    *wrapper_arg_3 = ((MR_Box) (conv4_TVars_14));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_TCInfo_28));
  }
}

static void MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TVar_6;
    MR_Word conv0_HeadVar__4_4;

    check_hlds__type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_TVar_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__pred_has_arity_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word PredEnv_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Environment_6, (MR_Integer) 3))));
    MR_Word Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
    MR_Word Name_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5))));
    MR_Word PredIds0_20;
    MR_Word Preds_21;
    MR_Word PredIds_22;
    MR_Word ArgTVars_23;
    MR_Word Constraints_24;
    MR_Word PredTVars_25;
    MR_Word TVars_26;
    MR_Word Var_30;
    MR_Integer Var_31;
    MR_Word STATE_VARIABLE_TCInfo_33_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_TCInfo_35_35;
    MR_Word Var_36;
    MR_Box conv2_STATE_VARIABLE_TCInfo_33_33;
    MR_Box conv6_STATE_VARIABLE_TCInfo_35_35;

    hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredEnv_13, (MR_Integer) 1, Name_19, &PredIds0_20);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredEnv_13, &Preds_21);
    Var_31 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), Args_16);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[21]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Preds_21));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (Var_31));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_30, PredIds0_20, &PredIds_22);
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[60]), Args_16, &ArgTVars_23, ((MR_Box) (STATE_VARIABLE_TCInfo_0_27)), &conv2_STATE_VARIABLE_TCInfo_33_33);
    STATE_VARIABLE_TCInfo_33_33 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_33_33));
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (check_hlds__type_constraints__plain_call_goal_to_constraint_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Preds_21));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (GoalInfo_8));
      MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (ArgTVars_23));
    }
    mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[10]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_34, PredIds_22, &Constraints_24, &PredTVars_25, ((MR_Box) (STATE_VARIABLE_TCInfo_33_33)), &conv6_STATE_VARIABLE_TCInfo_35_35);
    STATE_VARIABLE_TCInfo_35_35 = ((MR_Word) (conv6_STATE_VARIABLE_TCInfo_35_35));
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ArgTVars_23));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (PredTVars_25));
    }
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), Var_36, &TVars_26);
    check_hlds__type_constraints__add_type_constraint_4_p_0(Constraints_24, TVars_26, STATE_VARIABLE_TCInfo_35_35, STATE_VARIABLE_TCInfo_28);
  }
}

static MR_Word MR_CALL 
check_hlds__type_constraints__tvar_to_type_1_f_0(
  MR_Word TVar_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (TVar_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__get_var_type_4_p_0(
  MR_Word Var_5,
  MR_Word * TVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word CC_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word CM_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word VC_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word Errs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word STATE_VARIABLE_VarMap_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_TVarSet_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_VarMap_16;
    MR_Word STATE_VARIABLE_TVarSet_17;
    MR_Word TVar0_13;
    MR_Box conv0_TVar0_13;

    succeeded = mercury__bimap__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), STATE_VARIABLE_VarMap_0_14, ((MR_Box) (Var_5)), &conv0_TVar0_13);
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
      mercury__bimap__det_insert_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ((MR_Box) (Var_5)), ((MR_Box) (*TVar_6)), STATE_VARIABLE_VarMap_0_14, &STATE_VARIABLE_VarMap_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_VarMap_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CC_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CM_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VC_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (STATE_VARIABLE_TVarSet_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Errs_12));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__add_type_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_VarConstraints_10;

    check_hlds__type_constraints__map_var_to_constraint_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_VarConstraints_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_VarConstraints_10));
  }
}

static void MR_CALL 
check_hlds__type_constraints__add_type_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_VarConstraints_10;

    check_hlds__type_constraints__map_var_to_constraint_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_VarConstraints_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VarConstraints_10));
  }
}

static void MR_CALL 
check_hlds__type_constraints__add_type_constraint_4_p_0(
  MR_Word Constraints_5,
  MR_Word TVars_6,
  MR_Word STATE_VARIABLE_TConstrInfo_0_20,
  MR_Word * STATE_VARIABLE_TConstrInfo_21)
{
  {
    MR_Word VarMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TConstrInfo_0_20, (MR_Integer) 0))));
    MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TConstrInfo_0_20, (MR_Integer) 4))));
    MR_Word Errors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TConstrInfo_0_20, (MR_Integer) 5))));
    MR_Word STATE_VARIABLE_ConstraintCounter_22_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TConstrInfo_0_20, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_ConstraintMap_23_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TConstrInfo_0_20, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_VarConstraints_24_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TConstrInfo_0_20, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_ConstraintCounter_28_28;
    MR_Word STATE_VARIABLE_ConstraintMap_29_29;
    MR_Word STATE_VARIABLE_VarConstraints_31_31;

    if ((Constraints_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      STATE_VARIABLE_ConstraintCounter_28_28 = STATE_VARIABLE_ConstraintCounter_22_22;
      STATE_VARIABLE_ConstraintMap_29_29 = STATE_VARIABLE_ConstraintMap_23_23;
      STATE_VARIABLE_VarConstraints_31_31 = STATE_VARIABLE_VarConstraints_24_24;
    }
    else
    {
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraints_5, (MR_Integer) 1))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraints_5, (MR_Integer) 0))));

      if ((Var_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Constraint_15 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Var_51)));
        MR_Integer Id_19;
        MR_Word Var_30;
        MR_Box conv1_STATE_VARIABLE_VarConstraints_31_31;

        mercury__counter__allocate_3_p_0(&Id_19, STATE_VARIABLE_ConstraintCounter_22_22, &STATE_VARIABLE_ConstraintCounter_28_28);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), Id_19, ((MR_Box) (Constraint_15)), STATE_VARIABLE_ConstraintMap_23_23, &STATE_VARIABLE_ConstraintMap_29_29);
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[8]));
          MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__type_constraints__add_type_constraint_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Id_19));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[5]), Var_30, TVars_6, ((MR_Box) (STATE_VARIABLE_VarConstraints_24_24)), &conv1_STATE_VARIABLE_VarConstraints_31_31);
        STATE_VARIABLE_VarConstraints_31_31 = ((MR_Word) (conv1_STATE_VARIABLE_VarConstraints_31_31));
      }
      else
      {
        MR_Word Constraint_43;
        MR_Integer Id_44;
        MR_Word Var_45;
        MR_Box conv3_STATE_VARIABLE_VarConstraints_31_31;

        {
          Constraint_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Constraint_43, 0) = ((MR_Box) (Constraints_5));
          MR_hl_field(MR_mktag(1), Constraint_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__counter__allocate_3_p_0(&Id_44, STATE_VARIABLE_ConstraintCounter_22_22, &STATE_VARIABLE_ConstraintCounter_28_28);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), Id_44, ((MR_Box) (Constraint_43)), STATE_VARIABLE_ConstraintMap_23_23, &STATE_VARIABLE_ConstraintMap_29_29);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[8]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__type_constraints__add_type_constraint_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Id_44));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[5]), Var_45, TVars_6, ((MR_Box) (STATE_VARIABLE_VarConstraints_24_24)), &conv3_STATE_VARIABLE_VarConstraints_31_31);
        STATE_VARIABLE_VarConstraints_31_31 = ((MR_Word) (conv3_STATE_VARIABLE_VarConstraints_31_31));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TConstrInfo_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarMap_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_ConstraintCounter_28_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_ConstraintMap_29_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (STATE_VARIABLE_VarConstraints_31_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TVarSet_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Errors_13));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_String String_21;
              MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Char Var_23;

              succeeded = (Var_25 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
                if (succeeded)
                {
                  String_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
                  *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 8U);
                  succeeded = mercury__string__char_to_string_2_p_1(&Var_23, String_21);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[2]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[9]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[5]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[8]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[3]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[6]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[4]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 12:
            {
              *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[7]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 17:
            {
              *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String Name_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer lo_0 = (MR_Integer) 0;
              MR_Integer hi_1 = (MR_Integer) 4;
              MR_Integer mid_2;
              MR_Integer result_3;

              // binary string simple lookup switch
              ;
              do
              {
                mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(Name_26, ((&check_hlds__type_constraints_vector_common_13[0 + mid_2]))->check_hlds__type_constraints__vector_common_type_13_0__vct_13_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  *HeadVar__2_2 = ((&check_hlds__type_constraints_vector_common_13[0 + mid_2]))->check_hlds__type_constraints__vector_common_type_13_0__vct_13_f_1;
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_0;
                }
                else
                if ((result_3 < (MR_Integer) 0))
                  hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
                else
                  lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
              }
              while ((lo_0 <= hi_1));
              succeeded = MR_FALSE;
            label_0:;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__conj_constraint_get_context_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 2))));
}

static void MR_CALL 
check_hlds__type_constraints__context_to_string_2_p_0(
  MR_Word Context_3,
  MR_String * String_4)
{
  {
    MR_String LineNumber_5;
    MR_String FileName_6;
    MR_Integer Var_7;
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_12;

    Var_7 = mercury__term__context_line_1_f_0(Context_3);
    LineNumber_5 = mercury__string__int_to_string_1_f_0(Var_7);
    FileName_6 = mercury__term__context_file_1_f_0(Context_3);
    Var_12 = mercury__string__f_43_43_2_f_0(LineNumber_5, (MR_String) "]");
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_12);
    Var_9 = mercury__string__f_43_43_2_f_0(FileName_6, Var_10);
    *String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_9);
  }
}

static void MR_CALL 
check_hlds__type_constraints__add_message_to_spec_3_p_0(
  MR_Word ErrMsg_4,
  MR_Word STATE_VARIABLE_TCInfo_0_7,
  MR_Word * STATE_VARIABLE_TCInfo_8)
{
  {
    MR_Word Spec_6;
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ErrMsg_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_11));
    }
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_7, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_7, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_7, (MR_Integer) 2))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_7, (MR_Integer) 3))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_7, (MR_Integer) 4))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_7, (MR_Integer) 5))));
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Spec_6));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TCInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__next_min_unsat_8_p_0(
  MR_Word Constraint_9,
  MR_Integer C_10,
  MR_Word STATE_VARIABLE_D_0_14,
  MR_Word * STATE_VARIABLE_D_15,
  MR_Word STATE_VARIABLE_P_0_16,
  MR_Word * STATE_VARIABLE_P_17,
  MR_Word STATE_VARIABLE_MinUnsats_0_18,
  MR_Word * STATE_VARIABLE_MinUnsats_19)
{
  {
    mercury__set__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (C_10)), STATE_VARIABLE_P_0_16, STATE_VARIABLE_P_17);
    check_hlds__type_constraints__min_unsat_constraints_5_p_0(Constraint_9, STATE_VARIABLE_D_0_14, *STATE_VARIABLE_P_17, STATE_VARIABLE_MinUnsats_0_18, STATE_VARIABLE_MinUnsats_19);
    mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (C_10)), STATE_VARIABLE_D_0_14, STATE_VARIABLE_D_15);
  }
}

static void MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_String_4;

    check_hlds__type_constraints__context_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_String_4));
  }
}

static void MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    check_hlds__type_constraints__conj_constraint_get_context_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_C_2;

    succeeded = check_hlds__type_constraints__get_first_disjunct_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_C_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_C_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__error_from_one_min_set_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word MinUnsatSet_5,
  MR_Word * Components_6)
{
  {
    MR_bool succeeded;
    MR_Word MinUnsatList_7;
    MR_Word Constraints_8;
    MR_Word ConjConstraints_9;
    MR_Word Contexts_10;
    MR_Word ContextStrings_11;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MinUnsatSet_5, &MinUnsatList_7);
    mercury__map__apply_to_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), MinUnsatList_7, ConstraintMap_4, &Constraints_8);
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[57]), Constraints_8, &ConjConstraints_9);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[58]), ConjConstraints_9, &Contexts_10);
    mercury__list__map_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[59]), Contexts_10, &ContextStrings_11);
    *Components_6 = parse_tree__error_util__list_to_pieces_1_f_0(ContextStrings_11);
  }
}

static void MR_CALL 
check_hlds__type_constraints__diagnose_unsatisfiability_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Components_6;

    check_hlds__type_constraints__error_from_one_min_set_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Components_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Components_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__diagnose_unsatisfiability_error_5_p_0(
  MR_Word TCInfo_6,
  MR_Word Context_7,
  MR_Word ProgVarSet_8,
  MR_Word TypeVar_9,
  MR_Word * Msg_10)
{
  {
    MR_bool succeeded;
    MR_Word VarMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 0))));
    MR_Word ConstraintMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 2))));
    MR_Word VarConstraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 3))));
    MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 4))));
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
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Box conv0_ConstraintIds_17;
    MR_Word ProgVar_23;
    MR_Box conv2_ProgVar_23;

    mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), VarConstraints_14, ((MR_Box) (TypeVar_9)), &conv0_ConstraintIds_17);
    ConstraintIds_17 = ((MR_Word) (conv0_ConstraintIds_17));
    Var_27 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    mercury__set__insert_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConstraintIds_17, Var_27, &ConstraintSet_18);
    Var_28 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    check_hlds__type_constraints__min_unsat_constraints_5_p_0(TCInfo_6, Var_28, ConstraintSet_18, (MR_Word) ((MR_Unsigned) 0U), &MinUnsats_19);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[20]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__type_constraints__diagnose_unsatisfiability_error_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ConstraintMap_13));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[12]), Var_30, MinUnsats_19, &MinUnsatPieces_20);
    check_hlds__type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[32]))), MinUnsatPieces_20, &ErrorLocations0_21);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ErrorLocations0_21, &ErrorLocations_22);
    succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), VarMap_11, &conv2_ProgVar_23, ((MR_Box) (TypeVar_9)));
    if (succeeded)
    {
      ProgVar_23 = ((MR_Word) (conv2_ProgVar_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      VarName_24 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_8, ProgVar_23);
      VarKind_25 = (MR_String) "program";
    }
    else
    {
      VarName_24 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_15, TypeVar_9);
      VarKind_25 = (MR_String) "type";
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (VarKind_25));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (VarName_24));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[37])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ErrorLocations_22, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[27])));
    Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_40, Var_64);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_26));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Msg_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_71));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(
  MR_Box E_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Var_19 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

    if ((Var_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Var_19;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Bs_13;
      MR_Word Var_15;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
      MR_Box Var_34 = (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0));

      if ((Var_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Bs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Bs_13, 0) = Var_34;
          MR_hl_field(MR_mktag(1), Bs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Bs_29;
        MR_Word Var_31;

        check_hlds__type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(E_1, Var_33, &Bs_29);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = E_1;
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Bs_29));
        }
        {
          Bs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Bs_13, 0) = Var_34;
          MR_hl_field(MR_mktag(1), Bs_13, 1) = ((MR_Box) (Var_31));
        }
      }
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = E_1;
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Bs_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Var_19;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_15));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1573__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_D_15;
    MR_Word conv4_STATE_VARIABLE_P_17;
    MR_Word conv3_STATE_VARIABLE_MinUnsats_19;

    check_hlds__type_constraints__next_min_unsat_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_D_15, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_P_17, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_MinUnsats_19);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_D_15));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_P_17));
    *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_MinUnsats_19));
  }
}

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_60;

    check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__3_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_60);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_60));
  }
}

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_64;

    check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__2_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_64);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_64));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__IntroducedFrom__pred__min_unsat_constraints__1562__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__min_unsat_constraints_5_p_0(
  MR_Word TCInfo_6,
  MR_Word D_7,
  MR_Word P_8,
  MR_Word STATE_VARIABLE_MinUnsats_0_27,
  MR_Word * STATE_VARIABLE_MinUnsats_28)
{
  {
    MR_bool succeeded;
    MR_Word VarMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 0))));
    MR_Word ConstraintMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 2))));
    MR_Word VarConstraints0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 3))));
    MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_6, (MR_Integer) 4))));
    MR_Word Union_16;
    MR_Word VarConstraints_19;
    MR_Word UnionConstraintMap_20;
    MR_Word Constraint_21;
    MR_Word Success_24;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Box conv2_VarConstraints_19;

    mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), P_8, D_7, &Union_16);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[17]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_constraints__min_unsat_constraints_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Union_16));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[19]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (check_hlds__type_constraints__min_unsat_constraints_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Var_42));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[7]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__type_constraints__min_unsat_constraints_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Var_41));
    }
    Var_40 = mercury__map__keys_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), VarConstraints0_13);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[5]), Var_39, Var_40, ((MR_Box) (VarConstraints0_13)), &conv2_VarConstraints_19);
    VarConstraints_19 = ((MR_Word) (conv2_VarConstraints_19));
    mercury__map__select_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), ConstraintMap_12, Union_16, &UnionConstraintMap_20);
    Var_43 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      Constraint_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraint_21, 0) = ((MR_Box) (VarMap_10));
      MR_hl_field(MR_mktag(0), Constraint_21, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Constraint_21, 2) = ((MR_Box) (UnionConstraintMap_20));
      MR_hl_field(MR_mktag(0), Constraint_21, 3) = ((MR_Box) (VarConstraints_19));
      MR_hl_field(MR_mktag(0), Constraint_21, 4) = ((MR_Box) (TVarSet_14));
      MR_hl_field(MR_mktag(0), Constraint_21, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_46 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0));
    Var_47 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0));
    check_hlds__type_constraints__solve_constraint_labeling_6_p_0(TVarSet_14, VarConstraints_19, UnionConstraintMap_20, Var_46, Var_47, &Var_48);
    Success_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 2))));
    switch (Success_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NewD_25;
          MR_Word Var_49;
          MR_Word STATE_VARIABLE_MinUnsats_51_51;
          MR_Box conv8_NewD_25;
          MR_Box conv7_Var_26;
          MR_Box conv6_STATE_VARIABLE_MinUnsats_51_51;
          MR_Word Var_52;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_12[1]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__type_constraints__min_unsat_constraints_5_p_0_4));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Constraint_21));
          }
          mercury__set__fold3_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[13]), Var_49, P_8, ((MR_Box) (D_7)), &conv8_NewD_25, ((MR_Box) (P_8)), &conv7_Var_26, ((MR_Box) (STATE_VARIABLE_MinUnsats_0_27)), &conv6_STATE_VARIABLE_MinUnsats_51_51);
          NewD_25 = ((MR_Word) (conv8_NewD_25));
          STATE_VARIABLE_MinUnsats_51_51 = ((MR_Word) (conv6_STATE_VARIABLE_MinUnsats_51_51));
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[18]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (check_hlds__type_constraints__min_unsat_constraints_5_p_0_5));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (NewD_25));
          }
          succeeded = mercury__list__all_false_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[11]), Var_52, STATE_VARIABLE_MinUnsats_51_51);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MinUnsats_28 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewD_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MinUnsats_51_51));
            }
          else
            *STATE_VARIABLE_MinUnsats_28 = STATE_VARIABLE_MinUnsats_51_51;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_MinUnsats_28 = STATE_VARIABLE_MinUnsats_0_27;
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__pred_constraint_info_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Path_4;
    MR_Word PredId_5;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 4))));

    succeeded = (Var_8 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        Path_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 1);
        if (succeeded)
        {
          PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Path_4));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredId_5));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__ambig_pred_error_message_3_p_0(
  MR_Word PredEnv_4,
  MR_Word HeadVar__2_2,
  MR_Word * Component_7)
{
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Preds_8;
    MR_Word PredInfo_9;
    MR_String Name_10;
    MR_Integer Arity_11;
    MR_Word Context_12;
    MR_Integer LineNumber_13;
    MR_String FileName_14;
    MR_Word Pieces_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv0_PredInfo_9;

    hlds__pred_table__predicate_table_get_preds_2_p_0(PredEnv_4, &Preds_8);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_8, ((MR_Box) (PredId_6)), &conv0_PredInfo_9);
    PredInfo_9 = ((MR_Word) (conv0_PredInfo_9));
    Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_9);
    Arity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_9);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, &Context_12);
    LineNumber_13 = mercury__term__context_line_1_f_0(Context_12);
    FileName_14 = mercury__term__context_file_1_f_0(Context_12);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (Name_10));
    }
    Var_22 = mercury__string__int_to_string_1_f_0(Arity_11);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (FileName_14));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (LineNumber_13));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[27])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[59])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[58])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *Component_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pieces_15));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Component_7;

    check_hlds__type_constraints__ambig_pred_error_message_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Component_7);
    *wrapper_arg_2 = ((MR_Box) (conv2_Component_7));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = check_hlds__type_constraints__pred_constraint_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0(
  MR_Word PredEnv_4,
  MR_Word Conjunctions_5,
  MR_Word * Msg_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29;
    MR_Word TypeCtorInfo_34_34;
    MR_Word Context_7;
    MR_Word AmbigPredData_8;
    MR_Word Components_9;
    MR_Word Pieces_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box conv0_Var_11;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeCtorInfo_31_31;
    MR_Word Var_13;

    succeeded = mercury__list__head_1_f_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), Conjunctions_5, &conv0_Var_11);
    if (succeeded)
    {
      Var_11 = ((MR_Word) (conv0_Var_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Context_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      Var_12 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[56]);
      TypeInfo_29_29 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[2]);
      mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), TypeInfo_29_29, Var_12, Conjunctions_5, &AmbigPredData_8);
      TypeCtorInfo_30_30 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
      TypeCtorInfo_31_31 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
      Var_13 = mercury__assoc_list__values_1_f_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, AmbigPredData_8);
      succeeded = mercury__list__all_same_1_p_0(TypeCtorInfo_31_31, Var_13);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_34_34 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0);
        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[18]));
          MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (PredEnv_4));
        }
        mercury__list__map_3_p_0(TypeInfo_29_29, TypeCtorInfo_34_34, Var_14, AmbigPredData_8, &Components_9);
        Var_15 = (MR_Word) (&check_hlds__type_constraints_scalar_common_3[0]);
        {
          Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Components_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *Msg_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Pieces_10));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__merge_type_constraints2_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1))));
    MR_Word Var_8;

    succeeded = (Var_7 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Integer) 1);
    }
    if (succeeded)
      *Result_6 = A_4;
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 4))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__merge_type_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__merge_type_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    check_hlds__type_constraints__merge_type_constraints2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__merge_type_constraints_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word ConjsA_8;
    MR_Word ConjsB_11;
    MR_Word Conjs_13;
    MR_Word SingletonConj_14;
    MR_Word Var_18;

    if (((MR_tag((MR_Word) A_4)) == (MR_Integer) 0))
    {
      MR_Word ConjA_7 = (MR_Word) (MR_body((MR_Word) (A_4), (MR_Integer) 0));

      {
        ConjsA_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConjsA_8, 0) = ((MR_Box) (ConjA_7));
        MR_hl_field(MR_mktag(1), ConjsA_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      ConjsA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) B_5)) == (MR_Integer) 0))
    {
      MR_Word ConjB_10 = (MR_Word) (MR_body((MR_Word) (B_5), (MR_Integer) 0));

      {
        ConjsB_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConjsB_11, 0) = ((MR_Box) (ConjB_10));
        MR_hl_field(MR_mktag(1), ConjsB_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      ConjsB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_5, (MR_Integer) 0))));
    mercury__list__map_corresponding_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[54]), ConjsA_8, ConjsB_11, &Conjs_13);
    succeeded = ((MR_tag((MR_Word) Conjs_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      SingletonConj_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjs_13, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjs_13, (MR_Integer) 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SingletonConj_14)));
    else
    {
      MR_Word SingletonConj_24;
      MR_Word TypeInfo_31_31;
      MR_Word Var_20;
      MR_Word Var_30;

      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[55]), Conjs_13, &Var_20);
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        SingletonConj_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
        TypeInfo_31_31 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_30)));
      }
      if (succeeded)
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (SingletonConj_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Conjs_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_22));
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Conjs_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__get_constraints_from_conj_2_p_0(
  MR_Word Conj_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_3, (MR_Integer) 0))));
}

static void MR_CALL 
check_hlds__type_constraints__add_unused_prog_var_4_p_0(
  MR_Word TCInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_Vartypes_0_9,
  MR_Word * STATE_VARIABLE_Vartypes_10)
{
  {
    MR_bool succeeded;

    succeeded = hlds__vartypes__is_in_vartypes_2_p_0(STATE_VARIABLE_Vartypes_0_9, Var_6);
    if (succeeded)
      *STATE_VARIABLE_Vartypes_10 = STATE_VARIABLE_Vartypes_0_9;
    else
    {
      MR_Word TVar_8;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_5, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Box conv0_TVar_8;

      mercury__bimap__lookup_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), Var_11, ((MR_Box) (Var_6)), &conv0_TVar_8);
      TVar_8 = ((MR_Word) (conv0_TVar_8));
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (TVar_8));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__vartypes__add_var_type_4_p_0(Var_6, Var_12, STATE_VARIABLE_Vartypes_0_9, STATE_VARIABLE_Vartypes_10);
    }
  }
}

static MR_Word MR_CALL 
check_hlds__type_constraints__to_singleton_type_domain_1_f_0(
  MR_Word Type_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Type_3));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__domain_size_compare_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word A_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word B_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word D1_9;
    MR_Word D2_10;

    succeeded = ((MR_tag((MR_Word) A_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      D1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_5, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) B_7)) == (MR_Integer) 1);
      if (succeeded)
        D2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_7, (MR_Integer) 0))));
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
      mercury__private_builtin__builtin_compare_int_3_p_0(Result_8, L1_11, L2_12);
    }
    else
      *Result_8 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__has_ambiguous_domain_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_7_7;
    MR_Word Dom_3;
    MR_Integer Size_4;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_6;

    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      Dom_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0))));
      TypeCtorInfo_7_7 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__set__count_2_p_0(TypeCtorInfo_7_7, Dom_3, &Size_4);
      Var_6 = (MR_Integer) 1;
      succeeded = (Size_4 > Var_6);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_one_solution_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_2;

    succeeded = check_hlds__type_constraints__is_singleton_domain_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Type_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Type_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_one_solution_1_p_0(
  MR_Word DomainMap_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_3;

    Var_5 = mercury__map__values_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap_2);
    succeeded = mercury__list__map_3_p_2((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[53]), Var_5, &Var_3);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__tvars_in_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word TVar_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Type_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TVars_5;

    parse_tree__prog_type__type_vars_2_p_0(Type_4, &TVars_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TVar_3));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TVars_5));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__update_singleton_domain_3_p_0(
  MR_Word TVar_4,
  MR_Word STATE_VARIABLE_DomainMap_0_8,
  MR_Word * STATE_VARIABLE_DomainMap_9)
{
  {
    MR_bool succeeded;
    MR_Word Type_7;
    MR_Word TypeCtorInfo_15_15;
    MR_Word Domain_6;
    MR_Word Var_10;
    MR_Box conv0_Var_10;
    MR_Box conv1_Type_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_8, ((MR_Box) (TVar_4)), &conv0_Var_10);
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
        Domain_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
        TypeCtorInfo_15_15 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        succeeded = mercury__set__is_singleton_2_p_0(TypeCtorInfo_15_15, Domain_6, &conv1_Type_7);
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
        Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (Type_7));
      }
      mercury__map__set_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_4)), ((MR_Box) (Var_11)), STATE_VARIABLE_DomainMap_0_8, STATE_VARIABLE_DomainMap_9);
    }
    else
      *STATE_VARIABLE_DomainMap_9 = STATE_VARIABLE_DomainMap_0_8;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__is_singleton_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word Domain_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
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
      *Type_2 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__has_singleton_domain_2_p_0(
  MR_Word DomainMap_3,
  MR_Word TVar_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_10_10;
    MR_Word Domain_5;
    MR_Word Var_7;
    MR_Box conv0_Var_7;
    MR_Box conv1_Var_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap_3, ((MR_Box) (TVar_4)), &conv0_Var_7);
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
        Domain_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
        TypeCtorInfo_10_10 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        succeeded = mercury__set__is_singleton_2_p_0(TypeCtorInfo_10_10, Domain_5, &conv1_Var_6);
        if (succeeded)
          succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__has_empty_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVar_3)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6;
    MR_Word Domain_4;
    MR_Word Var_5;

    *TVar_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      Domain_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0))));
      TypeCtorInfo_6_6 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_6_6, Domain_4);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__domain_map_unchanged_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Type_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__domain_map_unchanged_2_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TVar_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Domain_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Domain0_6;
    MR_Box conv0_Domain0_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap_3, ((MR_Box) (TVar_4)), &conv0_Domain0_6);
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
            MR_Word TypeCtorInfo_17_23;
            MR_Word A_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domain0_6, (MR_Integer) 0))));
            MR_Word B_13;
            MR_Integer C_14;
            MR_Word Var_16;
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Integer Var_24;
            MR_Word Var_15;

            succeeded = ((MR_tag((MR_Word) Domain_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              B_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domain_5, (MR_Integer) 0))));
              TypeCtorInfo_13_19 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__set__count_2_p_0(TypeCtorInfo_13_19, A_12, &C_14);
              mercury__set__count_2_p_0(TypeCtorInfo_13_19, B_13, &Var_24);
              succeeded = (C_14 == Var_24);
              if (succeeded)
              {
                Var_16 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[52]);
                TypeCtorInfo_17_23 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                Var_17 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_23, A_12);
                Var_18 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_23, B_13);
                succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_17_23, TypeCtorInfo_17_23, TypeCtorInfo_17_23, Var_16, Var_17, Var_18, &Var_15);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Domain0_6, (MR_Integer) 0))));
            MR_Word B_10;
            MR_Word Var_11;

            succeeded = ((MR_tag((MR_Word) Domain_5)) == (MR_Integer) 2);
            if (succeeded)
            {
              B_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Domain_5, (MR_Integer) 0))));
              succeeded = check_hlds__type_constraints__unify_types_3_p_0(A_9, B_10, &Var_11);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__non_empty_domain_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word D_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

          succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), D_3);
        }
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__still_active_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = (Var_6 == (MR_Integer) 0);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__type_domain_union_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) DomainA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Domain_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DomainA_4, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) DomainB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Domain_6 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Types_13;
                MR_Word TypesB_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DomainB_5, (MR_Integer) 0))));

                mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, TypesB_22, &Types_13);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Types_13));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DomainB_5, (MR_Integer) 0))));

                succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30);
                if (succeeded)
                  *Domain_6 = DomainB_5;
                else
                {
                  MR_Word Var_14;

                  Var_14 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, ((MR_Box) (TypeB_21)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
                  }
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DomainA_4, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) DomainB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Domain_6 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypesB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DomainB_5, (MR_Integer) 0))));

                succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypesB_10);
                if (succeeded)
                  *Domain_6 = DomainA_4;
                else
                {
                  MR_Word Var_15;

                  Var_15 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypesB_10, ((MR_Box) (Var_31)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DomainB_5, (MR_Integer) 0))));

                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_31, TypeB_9);
                if (succeeded)
                  *Domain_6 = DomainA_4;
                else
                {
                  MR_Word Var_16;
                  MR_Word Var_17;
                  MR_Word Var_18;

                  {
                    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (TypeB_9));
                    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_31));
                    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
                  }
                  Var_16 = mercury__set__from_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
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

static void MR_CALL 
check_hlds__type_constraints__find_type_of_tvar_3_p_0(
  MR_Word DomainMap_4,
  MR_Word STATE_VARIABLE_Type_0_9,
  MR_Word * STATE_VARIABLE_Type_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Type_0_9)) == (MR_Integer) 0);
    MR_Word KnownType_8;
    MR_Word TypeInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word TVar_6;
    MR_Word Var_11;
    MR_Box conv0_Var_11;

    if (succeeded)
    {
      TVar_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Type_0_9, (MR_Integer) 0))));
      TypeInfo_13_13 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]);
      TypeCtorInfo_14_14 = (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_13_13, TypeCtorInfo_14_14, DomainMap_4, ((MR_Box) (TVar_6)), &conv0_Var_11);
      if (succeeded)
      {
        Var_11 = ((MR_Word) (conv0_Var_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 2);
        if (succeeded)
          KnownType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_11, (MR_Integer) 0))));
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Type_10 = KnownType_8;
    else
      *STATE_VARIABLE_Type_10 = STATE_VARIABLE_Type_0_9;
  }
}

static void MR_CALL 
check_hlds__type_constraints__update_replacement_map_5_p_0(
  MR_Word VarMap_6,
  MR_Word Replacement_7,
  MR_Word OldVar_8,
  MR_Word STATE_VARIABLE_ReplacementMap_0_11,
  MR_Word * STATE_VARIABLE_ReplacementMap_12)
{
  {
    MR_bool succeeded;
    MR_Word ProgVar_10;
    MR_Box conv0_ProgVar_10;

    succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), VarMap_6, &conv0_ProgVar_10, ((MR_Box) (OldVar_8)));
    if (succeeded)
    {
      ProgVar_10 = ((MR_Word) (conv0_ProgVar_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      mercury__map__set_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ((MR_Box) (ProgVar_10)), ((MR_Box) (Replacement_7)), STATE_VARIABLE_ReplacementMap_0_11, STATE_VARIABLE_ReplacementMap_12);
    }
    else
      *STATE_VARIABLE_ReplacementMap_12 = STATE_VARIABLE_ReplacementMap_0_11;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__to_simple_constraints_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word Conj_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));

      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_3, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Conj_5;
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 1);
      if (succeeded)
      {
        Conj_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_6, (MR_Integer) 0))));
        *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_5, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__find_unified_var_3_p_0(
  MR_Word Target_4,
  MR_Word HeadVar__2_2,
  MR_Word * Unified_8)
{
  {
    MR_bool succeeded;
    MR_Word LHS_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word RHS_6;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Unified0_9;
    MR_Word TypeInfo_12_12;

    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      RHS_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
      TypeInfo_12_12 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]);
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
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ((MR_Box) (RHS_6)), ((MR_Box) (Target_4)));
        if (succeeded)
        {
          *Unified_8 = LHS_5;
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__3_3;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ReplacementMap_35;
    MR_Word conv6_STATE_VARIABLE_DomainMap_37;

    check_hlds__type_constraints__unify_equal_tvars_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ReplacementMap_35, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_DomainMap_37);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ReplacementMap_35));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_DomainMap_37));
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ReplacementMap_12;

    check_hlds__type_constraints__update_replacement_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReplacementMap_12);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReplacementMap_12));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__IntroducedFrom__pred__unify_equal_tvars__933__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_Unified_8;

    succeeded = check_hlds__type_constraints__find_unified_var_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Unified_8);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_Unified_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    succeeded = check_hlds__type_constraints__to_simple_constraints_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__unify_equal_tvars_8_p_0(
  MR_Word TCInfo_9,
  MR_Word Replaced_10,
  MR_Word Replacement_11,
  MR_Word Target_12,
  MR_Word STATE_VARIABLE_ReplacementMap_0_34,
  MR_Word * STATE_VARIABLE_ReplacementMap_35,
  MR_Word STATE_VARIABLE_DomainMap_0_36,
  MR_Word * STATE_VARIABLE_DomainMap_37)
{
  {
    MR_bool succeeded;
    MR_Word VarMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_9, (MR_Integer) 0))));
    MR_Word ConstraintMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_9, (MR_Integer) 2))));
    MR_Word VarConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCInfo_9, (MR_Integer) 3))));
    MR_Word Renaming_21;
    MR_Word ConstraintIds_22;
    MR_Word TypeInfo_56_56;
    MR_Word Var_84;
    MR_Box conv0_Var_84;
    MR_Integer CastX_91;
    MR_Integer CastY_92;
    MR_Box conv1_ConstraintIds_22;

    Renaming_21 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ((MR_Box) (Target_12)), ((MR_Box) (Replacement_11)));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_36, ((MR_Box) (Target_12)), &conv0_Var_84);
    if (succeeded)
    {
      Var_84 = ((MR_Word) (conv0_Var_84));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      CastX_91 = (MR_Integer) ((MR_Word) ((MR_Unsigned) 0U));
      CastY_92 = (MR_Integer) (Var_84);
      succeeded = (CastX_91 == CastY_92);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer CastY_90 = (MR_Integer) (Var_84);

        succeeded = (CastY_90 == (MR_Integer) ((MR_Word) ((MR_Unsigned) 0U)));
      }
      if (succeeded)
      {
        TypeInfo_56_56 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), TypeInfo_56_56, VarConstraints_18, ((MR_Box) (Target_12)), &conv1_ConstraintIds_22);
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
      MR_Word STATE_VARIABLE_ReplacementMap_43_43;
      MR_Word Var_44;
      MR_Word Var_27;
      MR_Box conv5_STATE_VARIABLE_ReplacementMap_43_43;
      MR_Box conv9_STATE_VARIABLE_ReplacementMap_35;
      MR_Box conv8_STATE_VARIABLE_DomainMap_37;

      mercury__map__apply_to_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), ConstraintIds_22, ConstraintMap_17, &Constraints_23);
      mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[9]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[51]), Constraints_23, &SimpleConstraints0_24);
      mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), SimpleConstraints0_24, &SimpleConstraints_25);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[15]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (check_hlds__type_constraints__unify_equal_tvars_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Target_12));
      }
      mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), Var_40, SimpleConstraints_25, &UnifiedVars0_26);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[15]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (check_hlds__type_constraints__unify_equal_tvars_8_p_0_3));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Replaced_10));
      }
      mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), Var_41, UnifiedVars0_26, &Var_27, &UnifiedVars_28);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_11[2]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_constraints__unify_equal_tvars_8_p_0_4));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (VarMap_15));
        MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Replacement_11));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[0]), Var_42, UnifiedVars_28, ((MR_Box) (STATE_VARIABLE_ReplacementMap_0_34)), &conv5_STATE_VARIABLE_ReplacementMap_43_43);
      STATE_VARIABLE_ReplacementMap_43_43 = ((MR_Word) (conv5_STATE_VARIABLE_ReplacementMap_43_43));
      mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), UnifiedVars_28, Replaced_10, &Replaced1_29);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (check_hlds__type_constraints__unify_equal_tvars_8_p_0_5));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TCInfo_9));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Replaced1_29));
        MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (Replacement_11));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[0]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), Var_44, UnifiedVars_28, ((MR_Box) (STATE_VARIABLE_ReplacementMap_43_43)), &conv9_STATE_VARIABLE_ReplacementMap_35, ((MR_Box) (STATE_VARIABLE_DomainMap_0_36)), &conv8_STATE_VARIABLE_DomainMap_37);
      *STATE_VARIABLE_ReplacementMap_35 = ((MR_Word) (conv9_STATE_VARIABLE_ReplacementMap_35));
      *STATE_VARIABLE_DomainMap_37 = ((MR_Word) (conv8_STATE_VARIABLE_DomainMap_37));
    }
    else
    {
      MR_Word Type0_30;
      MR_Word Var_47;
      MR_Box conv10_Var_47;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_36, ((MR_Box) (Target_12)), &conv10_Var_47);
      if (succeeded)
      {
        Var_47 = ((MR_Word) (conv10_Var_47));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 2);
        if (succeeded)
          Type0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_47, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Type_31;
        MR_Word Var_48;

        parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_21, Type0_30, &Type_31);
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (Type_31));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Target_12)), ((MR_Box) (Var_48)), STATE_VARIABLE_DomainMap_0_36, STATE_VARIABLE_DomainMap_37);
      }
      else
      {
        MR_Word Types0_32;
        MR_Word Var_50;
        MR_Box conv11_Var_50;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_36, ((MR_Box) (Target_12)), &conv11_Var_50);
        if (succeeded)
        {
          Var_50 = ((MR_Word) (conv11_Var_50));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 1);
          if (succeeded)
            Types0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Types_33;
          MR_Word Var_51;
          MR_Word Var_52;

          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[16]));
            MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__type_constraints__unify_equal_tvars_8_p_0_6));
            MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Renaming_21));
          }
          mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_51, Types0_32, &Types_33);
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Types_33));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Target_12)), ((MR_Box) (Var_52)), STATE_VARIABLE_DomainMap_0_36, STATE_VARIABLE_DomainMap_37);
        }
        else
          *STATE_VARIABLE_DomainMap_37 = STATE_VARIABLE_DomainMap_0_36;
      }
      *STATE_VARIABLE_ReplacementMap_35 = STATE_VARIABLE_ReplacementMap_0_34;
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Type_10;

    check_hlds__type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Type_10);
    *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Type_10));
  }
}

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Type_10;

    check_hlds__type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Type_10);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Type_10));
  }
}

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Type_10;

    check_hlds__type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Type_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Type_10));
  }
}

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Type_10;

    check_hlds__type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Type_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Type_10));
  }
}

static void MR_CALL 
check_hlds__type_constraints__simple_find_domain_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DomainMap_0_26,
  MR_Word * STATE_VARIABLE_DomainMap_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TVarA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeA_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVarB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeA_5, (MR_Integer) 0))));
          MR_Word DomainB_10;
          MR_Word STATE_VARIABLE_DomainMap_39_39;
          MR_Word DomainBPrime_9;
          MR_Box conv5_DomainBPrime_9;
          MR_Word DomainA_11;
          MR_Box conv6_DomainA_11;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_26, ((MR_Box) (TVarB_7)), &conv5_DomainBPrime_9);
          if (succeeded)
          {
            DomainBPrime_9 = ((MR_Word) (conv5_DomainBPrime_9));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            DomainB_10 = DomainBPrime_9;
            STATE_VARIABLE_DomainMap_39_39 = STATE_VARIABLE_DomainMap_0_26;
          }
          else
          {
            DomainB_10 = (MR_Word) ((MR_Unsigned) 0U);
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarB_7)), ((MR_Box) (DomainB_10)), STATE_VARIABLE_DomainMap_0_26, &STATE_VARIABLE_DomainMap_39_39);
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_39_39, ((MR_Box) (TVarA_4)), &conv6_DomainA_11);
          if (succeeded)
          {
            DomainA_11 = ((MR_Word) (conv6_DomainA_11));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word NewDomain_12;
            MR_Word STATE_VARIABLE_DomainMap_40_40;

            check_hlds__type_constraints__type_domain_intersect_3_p_0(DomainA_11, DomainB_10, &NewDomain_12);
            mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (NewDomain_12)), STATE_VARIABLE_DomainMap_39_39, &STATE_VARIABLE_DomainMap_40_40);
            mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarB_7)), ((MR_Box) (NewDomain_12)), STATE_VARIABLE_DomainMap_40_40, STATE_VARIABLE_DomainMap_27);
          }
          else
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (DomainB_10)), STATE_VARIABLE_DomainMap_39_39, STATE_VARIABLE_DomainMap_27);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_5, (MR_Integer) 0))));
          MR_Word ArgTypes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_5, (MR_Integer) 1))));
          MR_Word Kind_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeA_5, (MR_Integer) 2))));
          MR_Word ArgTypes_16;
          MR_Word NewTypeA_17;
          MR_Word Var_37;

          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[14]));
            MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (check_hlds__type_constraints__simple_find_domain_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_26));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_37, ArgTypes0_14, &ArgTypes_16);
          {
            NewTypeA_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NewTypeA_17, 0) = ((MR_Box) (Name_13));
            MR_hl_field(MR_mktag(1), NewTypeA_17, 1) = ((MR_Box) (ArgTypes_16));
            MR_hl_field(MR_mktag(1), NewTypeA_17, 2) = ((MR_Box) (Kind_15));
          }
          check_hlds__type_constraints__restrict_domain_4_p_0(TVarA_4, NewTypeA_17, STATE_VARIABLE_DomainMap_0_26, STATE_VARIABLE_DomainMap_27);
        }
        break;
      case (MR_Integer) 2:
        check_hlds__type_constraints__restrict_domain_4_p_0(TVarA_4, TypeA_5, STATE_VARIABLE_DomainMap_0_26, STATE_VARIABLE_DomainMap_27);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_34;
              MR_Word ArgTypes0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 1))));
              MR_Word Kind_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 2))));
              MR_Word ArgTypes_45;
              MR_Word NewTypeA_46;

              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[14]));
                MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (check_hlds__type_constraints__simple_find_domain_3_p_0_4));
                MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_26));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_34, ArgTypes0_43, &ArgTypes_45);
              {
                NewTypeA_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), NewTypeA_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), NewTypeA_46, 1) = ((MR_Box) (ArgTypes_45));
                MR_hl_field(MR_mktag(3), NewTypeA_46, 2) = ((MR_Box) (Kind_44));
              }
              check_hlds__type_constraints__restrict_domain_4_p_0(TVarA_4, NewTypeA_46, STATE_VARIABLE_DomainMap_0_26, STATE_VARIABLE_DomainMap_27);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 1))));
              MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 3))));
              MR_Word Purity_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 4))));
              MR_Word Var_32;
              MR_Word ArgTypes0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 2))));
              MR_Word ArgTypes_48;
              MR_Word NewTypeA_49;

              {
                Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[14]));
                MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (check_hlds__type_constraints__simple_find_domain_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_26));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_32, ArgTypes0_47, &ArgTypes_48);
              {
                NewTypeA_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), NewTypeA_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), NewTypeA_49, 1) = ((MR_Box) (PorF_19));
                MR_hl_field(MR_mktag(3), NewTypeA_49, 2) = ((MR_Box) (ArgTypes_48));
                MR_hl_field(MR_mktag(3), NewTypeA_49, 3) = ((MR_Box) (HOInstInfo_20));
                MR_hl_field(MR_mktag(3), NewTypeA_49, 4) = ((MR_Box) (Purity_21));
                MR_hl_field(MR_mktag(3), NewTypeA_49, 5) = NULL;
              }
              check_hlds__type_constraints__restrict_domain_4_p_0(TVarA_4, NewTypeA_49, STATE_VARIABLE_DomainMap_0_26, STATE_VARIABLE_DomainMap_27);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Return_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 1))));
              MR_Word Var_30;
              MR_Word ArgTypes0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 2))));
              MR_Word Kind_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 3))));
              MR_Word ArgTypes_52;
              MR_Word NewTypeA_53;
              MR_Word CurrDomain_82;
              MR_Word NewDomain_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word CurrDomain0_81;
              MR_Box conv1_CurrDomain0_81;

              {
                Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[14]));
                MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__type_constraints__simple_find_domain_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_26));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, ArgTypes0_50, &ArgTypes_52);
              {
                NewTypeA_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), NewTypeA_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), NewTypeA_53, 1) = ((MR_Box) (Return_23));
                MR_hl_field(MR_mktag(3), NewTypeA_53, 2) = ((MR_Box) (ArgTypes_52));
                MR_hl_field(MR_mktag(3), NewTypeA_53, 3) = ((MR_Box) (Kind_51));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_26, ((MR_Box) (TVarA_4)), &conv1_CurrDomain0_81);
              if (succeeded)
              {
                CurrDomain0_81 = ((MR_Word) (conv1_CurrDomain0_81));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                CurrDomain_82 = CurrDomain0_81;
              else
                CurrDomain_82 = (MR_Word) ((MR_Unsigned) 0U);
              Var_85 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (NewTypeA_53)));
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
              }
              check_hlds__type_constraints__type_domain_intersect_3_p_0(CurrDomain_82, Var_84, &NewDomain_83);
              mercury__map__set_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (NewDomain_83)), STATE_VARIABLE_DomainMap_0_26, STATE_VARIABLE_DomainMap_27);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedTypeA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_5, (MR_Integer) 1))));
              MR_Word Var_28;
              MR_Word next_value_of_HeadVar__1_1;

              {
                Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (TVarA_4));
                MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (KindedTypeA_24));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_28;
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
check_hlds__type_constraints__restrict_domain_4_p_0(
  MR_Word TVar_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_DomainMap_0_11,
  MR_Word * STATE_VARIABLE_DomainMap_12)
{
  {
    MR_bool succeeded;
    MR_Word CurrDomain_9;
    MR_Word NewDomain_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word CurrDomain0_8;
    MR_Box conv0_CurrDomain0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_11, ((MR_Box) (TVar_5)), &conv0_CurrDomain0_8);
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
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
    }
    check_hlds__type_constraints__type_domain_intersect_3_p_0(CurrDomain_9, Var_13, &NewDomain_10);
    mercury__map__set_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_5)), ((MR_Box) (NewDomain_10)), STATE_VARIABLE_DomainMap_0_11, STATE_VARIABLE_DomainMap_12);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__type_domain_intersect_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__type_domain_intersect_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__type_domain_intersect_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) DomainA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Domain_6 = DomainB_5;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DomainA_4, (MR_Integer) 0))));

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
                MR_Word TypesB_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DomainB_5, (MR_Integer) 0))));

                mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_38, &TypeListA_16);
                mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypesB_28, &TypeListB_17);
                check_hlds__type_constraints__td_list_intersect_3_p_0(TypeListB_17, TypeListA_16, &TypeList_18);
                mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeList_18, &Types_19);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Types_19));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_20;
                MR_Word TypeB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DomainB_5, (MR_Integer) 0))));
                MR_Word UnifiedTypes_26;
                MR_Word SingletonType_24;
                MR_Box conv1_SingletonType_24;

                {
                  Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13]));
                  MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__type_constraints__type_domain_intersect_3_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TypeB_25));
                }
                mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_20, Var_38, &UnifiedTypes_26);
                succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnifiedTypes_26, &conv1_SingletonType_24);
                if (succeeded)
                {
                  SingletonType_24 = ((MR_Word) (conv1_SingletonType_24));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (SingletonType_24));
                  }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnifiedTypes_26));
                  }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DomainA_4, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) DomainB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Domain_6 = DomainA_4;
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypesB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DomainB_5, (MR_Integer) 0))));
                MR_Word UnifiedTypes_12;
                MR_Word Var_21;
                MR_Word SingletonType_13;
                MR_Box conv3_SingletonType_13;

                {
                  Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[13]));
                  MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__type_constraints__type_domain_intersect_3_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Var_39));
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
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (SingletonType_13));
                  }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnifiedTypes_12));
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DomainB_5, (MR_Integer) 0))));
                MR_Word Type_10;

                succeeded = check_hlds__type_constraints__unify_types_3_p_0(Var_39, TypeB_9, &Type_10);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Type_10));
                  }
                else
                {
                  MR_Word Var_22;

                  Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Domain_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
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

static void MR_CALL 
check_hlds__type_constraints__td_list_intersect_3_p_0(
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
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word B_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Bs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word AB_12;

        succeeded = check_hlds__type_constraints__unify_types_3_p_0(Var_22, B_9, &AB_12);
        if (succeeded)
        {
          MR_Word Cs0_13;

          check_hlds__type_constraints__td_list_intersect_3_p_0(Var_21, Bs_10, &Cs0_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AB_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cs0_13));
          }
        }
        else
        {
          MR_Word R_14;

          parse_tree__prog_data____Compare____mer_type_0_0(&R_14, Var_22, B_9);
          switch (R_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_HeadVar__1_1 = Var_21;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Cs0_17;

                check_hlds__type_constraints__td_list_intersect_3_p_0(Var_21, Bs_10, &Cs0_17);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cs0_17));
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
check_hlds__type_constraints__unify_types_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Type_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Type_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Type_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    succeeded = check_hlds__type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Type_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_Type_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__unify_types_3_p_0(
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
              MR_Word TypeCtorInfo_47_47;
              MR_Word TypeCtorInfo_51_51;
              MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 0))));
              MR_Word ArgsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 1))));
              MR_Word Kind_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 2))));
              MR_Word ArgsB_14;
              MR_Word Args_15;
              MR_Word Var_28;
              MR_Word Var_67;
              MR_Word Var_68;

              succeeded = ((MR_tag((MR_Word) B_5)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_5, (MR_Integer) 0))));
                ArgsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_5, (MR_Integer) 1))));
                Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_5, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_11, Var_67);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_13, Var_68);
                  if (succeeded)
                  {
                    TypeCtorInfo_47_47 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_47_47, TypeCtorInfo_47_47, ArgsA_12, ArgsB_14);
                    if (succeeded)
                    {
                      Var_28 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[48]);
                      TypeCtorInfo_51_51 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_51_51, TypeCtorInfo_51_51, TypeCtorInfo_51_51, Var_28, ArgsA_12, ArgsB_14, &Args_15);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *Type_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_11));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_15));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_13));
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
              MR_Word T_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), A_4, (MR_Integer) 0))));
              MR_Word Var_69;

              succeeded = ((MR_tag((MR_Word) B_5)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(2), B_5, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(T_16, Var_69);
                if (succeeded)
                {
                  *Type_6 = A_4;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorInfo_52_52;
                  MR_Word TypeCtorInfo_56_56;
                  MR_Word Var_27;
                  MR_Word Args_29;
                  MR_Word ArgsA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 1))));
                  MR_Word Kind_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 2))));
                  MR_Word ArgsB_33;
                  MR_Word Var_70;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgsB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 1))));
                    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 2))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_32, Var_70);
                    if (succeeded)
                    {
                      TypeCtorInfo_52_52 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_52_52, TypeCtorInfo_52_52, ArgsA_31, ArgsB_33);
                      if (succeeded)
                      {
                        Var_27 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[50]);
                        TypeCtorInfo_56_56 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                        succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_56_56, TypeCtorInfo_56_56, TypeCtorInfo_56_56, Var_27, ArgsA_31, ArgsB_33, &Args_29);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *Type_6 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_29));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_32));
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
                  MR_Word TypeCtorInfo_57_57;
                  MR_Word TypeCtorInfo_61_61;
                  MR_Word PorF_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 1))));
                  MR_Word HOInstInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 3))));
                  MR_Word Purity_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 4))));
                  MR_Word Var_26;
                  MR_Word Args_35;
                  MR_Word ArgsA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 2))));
                  MR_Word ArgsB_38;
                  MR_Word Var_71;
                  MR_Word Var_72;
                  MR_Word Var_73;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 1))));
                    ArgsB_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 2))));
                    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 3))));
                    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 4))));
                    succeeded = (PorF_17 == Var_71);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(HOInstInfo_18, Var_72);
                      if (succeeded)
                      {
                        succeeded = (Purity_19 == Var_73);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                          {
                            TypeCtorInfo_57_57 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                            succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_57_57, TypeCtorInfo_57_57, ArgsA_37, ArgsB_38);
                            if (succeeded)
                            {
                              Var_26 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[49]);
                              TypeCtorInfo_61_61 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                              succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_61_61, TypeCtorInfo_61_61, TypeCtorInfo_61_61, Var_26, ArgsA_37, ArgsB_38, &Args_35);
                              if (succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                                  *Type_6 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (PorF_17));
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_35));
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_18));
                                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Purity_19));
                                  MR_hl_field(MR_mktag(3), base, 5) = NULL;
                                }
                                succeeded = MR_TRUE;
                              }
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
                  MR_Word TypeCtorInfo_62_62;
                  MR_Word TypeCtorInfo_66_66;
                  MR_Word TVarA_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 1))));
                  MR_Word Var_25;
                  MR_Word Args_40;
                  MR_Word ArgsA_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 2))));
                  MR_Word Kind_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 3))));
                  MR_Word ArgsB_44;
                  MR_Word Var_75;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 0))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgsB_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 2))));
                    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 3))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_43, Var_75);
                    if (succeeded)
                    {
                      TypeCtorInfo_62_62 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_62_62, TypeCtorInfo_62_62, ArgsA_42, ArgsB_44);
                      if (succeeded)
                      {
                        Var_25 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[47]);
                        TypeCtorInfo_66_66 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                        succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_66_66, TypeCtorInfo_66_66, TypeCtorInfo_66_66, Var_25, ArgsA_42, ArgsB_44, &Args_40);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *Type_6 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TVarA_21));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_40));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_43));
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
                  MR_Word TypeA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 1))));
                  MR_Word TypeB_24;
                  MR_Word Kind_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_4, (MR_Integer) 2))));
                  MR_Word Var_76;
                  MR_Word next_value_of_A_4;
                  MR_Word next_value_of_B_5;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 0))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    TypeB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 1))));
                    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_5, (MR_Integer) 2))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_46, Var_76);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_A_4 = TypeA_23;
                      next_value_of_B_5 = TypeB_24;
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
check_hlds__type_constraints__create_domain_4_p_0(
  MR_Word STATE_VARIABLE_DomainMap_0_7,
  MR_Word STATE_VARIABLE_Constraint_0_8,
  MR_Word * STATE_VARIABLE_Constraint_9,
  MR_Word * STATE_VARIABLE_DomainMap_10)
{
  check_hlds__type_constraints__conj_find_domain_4_p_0(STATE_VARIABLE_Constraint_0_8, STATE_VARIABLE_Constraint_9, STATE_VARIABLE_DomainMap_0_7, STATE_VARIABLE_DomainMap_10);
}

static void MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_ConstraintMap_23;
    MR_Word conv4_STATE_VARIABLE_DomainMap_25;

    check_hlds__type_constraints__propagate_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ConstraintMap_23, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_DomainMap_25);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ConstraintMap_23));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_DomainMap_25));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_61;

    succeeded = check_hlds__type_constraints__IntroducedFrom__pred__propagate__746__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_61);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_61));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_DomainMap_9;

    check_hlds__type_constraints__update_singleton_domain_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DomainMap_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DomainMap_9));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__propagate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__has_singleton_domain_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__propagate_7_p_0(
  MR_Word TVarSet_8,
  MR_Word VarConstraints_9,
  MR_Integer ConstraintId_10,
  MR_Word STATE_VARIABLE_ConstraintMap_0_22,
  MR_Word * STATE_VARIABLE_ConstraintMap_23,
  MR_Word STATE_VARIABLE_DomainMap_0_24,
  MR_Word * STATE_VARIABLE_DomainMap_25)
{
  {
    MR_bool succeeded;
    MR_Word Constraint0_13;
    MR_Word Constraint_14;
    MR_Word TVars_18;
    MR_Word SingletonVars_19;
    MR_Word PropConstraints0_20;
    MR_Word PropConstraints_21;
    MR_Word STATE_VARIABLE_DomainMap_35_35;
    MR_Word STATE_VARIABLE_ConstraintMap_36_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_DomainMap_39_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Box conv0_Constraint0_13;
    MR_Box conv2_STATE_VARIABLE_DomainMap_39_39;
    MR_Box conv7_STATE_VARIABLE_ConstraintMap_23;
    MR_Box conv6_STATE_VARIABLE_DomainMap_25;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), STATE_VARIABLE_ConstraintMap_0_22, ConstraintId_10, &conv0_Constraint0_13);
    Constraint0_13 = ((MR_Word) (conv0_Constraint0_13));
    check_hlds__type_constraints__find_domain_4_p_0(Constraint0_13, &Constraint_14, STATE_VARIABLE_DomainMap_0_24, &STATE_VARIABLE_DomainMap_35_35);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), ConstraintId_10, ((MR_Box) (Constraint_14)), STATE_VARIABLE_ConstraintMap_0_22, &STATE_VARIABLE_ConstraintMap_36_36);
    check_hlds__type_constraints__tvars_in_constraint_2_p_0(Constraint_14, &TVars_18);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[13]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (check_hlds__type_constraints__propagate_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_35_35));
    }
    mercury__list__filter_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), Var_37, TVars_18, &SingletonVars_19);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[46]), SingletonVars_19, ((MR_Box) (STATE_VARIABLE_DomainMap_35_35)), &conv2_STATE_VARIABLE_DomainMap_39_39);
    STATE_VARIABLE_DomainMap_39_39 = ((MR_Word) (conv2_STATE_VARIABLE_DomainMap_39_39));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[12]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (check_hlds__type_constraints__propagate_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (VarConstraints_9));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]), Var_40, SingletonVars_19, &PropConstraints0_20);
    Var_41 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PropConstraints0_20);
    PropConstraints_21 = mercury__list__remove_dups_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_41);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_constraints__propagate_7_p_0_4));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (TVarSet_8));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (VarConstraints_9));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), Var_42, PropConstraints_21, ((MR_Box) (STATE_VARIABLE_ConstraintMap_36_36)), &conv7_STATE_VARIABLE_ConstraintMap_23, ((MR_Box) (STATE_VARIABLE_DomainMap_39_39)), &conv6_STATE_VARIABLE_DomainMap_25);
    *STATE_VARIABLE_ConstraintMap_23 = ((MR_Word) (conv7_STATE_VARIABLE_ConstraintMap_23));
    *STATE_VARIABLE_DomainMap_25 = ((MR_Word) (conv6_STATE_VARIABLE_DomainMap_25));
  }
}

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    check_hlds__type_constraints__tvars_in_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    check_hlds__type_constraints__get_constraints_from_conj_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    check_hlds__type_constraints__tvars_in_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__tvars_in_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVars_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word Constraints_3;
    MR_Word TVarLists_9;
    MR_Word Var_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));

    Constraints_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[10]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[43]), Constraints_3, &TVarLists_9);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), TVarLists_9, TVars_2);
  }
  else
  {
    MR_Word Disjuncts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjuncts_15;
    MR_Word Constraints_16;
    MR_Word TVarLists_17;

    mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[9]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[44]), Disjuncts0_12, &Disjuncts_15);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), Disjuncts_15, &Constraints_16);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[10]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[45]), Constraints_16, &TVarLists_17);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), TVarLists_17, TVars_2);
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Domain_6;

    check_hlds__type_constraints__type_domain_intersect_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Domain_6);
    *wrapper_arg_3 = ((MR_Box) (conv5_Domain_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_52;

    check_hlds__type_constraints__IntroducedFrom__pred__find_domain__800__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__4_52);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_52));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Domain_6;

    check_hlds__type_constraints__type_domain_union_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Domain_6);
    *wrapper_arg_3 = ((MR_Box) (conv2_Domain_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Constraint_9;
    MR_Word conv0_STATE_VARIABLE_DomainMap_10;

    check_hlds__type_constraints__create_domain_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Constraint_9, &conv0_STATE_VARIABLE_DomainMap_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Constraint_9));
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DomainMap_10));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_domain_4_p_0(
  MR_Word Constraint0_5,
  MR_Word * Constraint_6,
  MR_Word STATE_VARIABLE_DomainMap_0_22,
  MR_Word * STATE_VARIABLE_DomainMap_23)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Constraint0_5)) == (MR_Integer) 0))
    {
      MR_Word ConjConstraints0_8 = (MR_Word) (MR_body((MR_Word) (Constraint0_5), (MR_Integer) 0));
      MR_Word ConjConstraints_9;

      check_hlds__type_constraints__conj_find_domain_4_p_0(ConjConstraints0_8, &ConjConstraints_9, STATE_VARIABLE_DomainMap_0_22, STATE_VARIABLE_DomainMap_23);
      *Constraint_6 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ConjConstraints_9)));
    }
    else
    {
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraint0_5, (MR_Integer) 1))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraint0_5, (MR_Integer) 0))));

      if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word DisjConstraints_13;
        MR_Word InactiveConstraints_14;
        MR_Word Domains_15;
        MR_Word DisjDomain_16;
        MR_Word Active_19;
        MR_Word SingleConstraint_21;
        MR_Word STATE_VARIABLE_DisjConstraints_27_27;
        MR_Word Var_28;
        MR_Word STATE_VARIABLE_DisjConstraints_29_29;
        MR_Word SingleConstraint0_20;
        MR_Word Var_35;

        mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[39]), Var_65, &STATE_VARIABLE_DisjConstraints_27_27, &InactiveConstraints_14);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[6]));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (check_hlds__type_constraints__find_domain_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_22));
        }
        mercury__list__map2_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), Var_28, STATE_VARIABLE_DisjConstraints_27_27, &STATE_VARIABLE_DisjConstraints_29_29, &Domains_15);
        if ((Domains_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          DisjDomain_16 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0));
        }
        else
        {
          MR_Word HeadDomain_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domains_15, (MR_Integer) 0))));
          MR_Word TailDomains_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domains_15, (MR_Integer) 1))));
          MR_Box conv4_DisjDomain_16;

          mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_7[8]), TailDomains_18, ((MR_Box) (HeadDomain_17)), &conv4_DisjDomain_16);
          DisjDomain_16 = ((MR_Word) (conv4_DisjDomain_16));
        }
        mercury__map__union_4_p_1((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[41]), DisjDomain_16, STATE_VARIABLE_DomainMap_0_22, STATE_VARIABLE_DomainMap_23);
        mercury__list__filter_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[42]), STATE_VARIABLE_DisjConstraints_29_29, &Active_19);
        succeeded = ((MR_tag((MR_Word) Active_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          SingleConstraint0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Active_19, (MR_Integer) 0))));
          Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Active_19, (MR_Integer) 1))));
          succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          {
            SingleConstraint_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SingleConstraint_21, 0) = ((MR_Box) (SingleConstraint0_20));
          }
        else
          SingleConstraint_21 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__list__append_3_p_1((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), InactiveConstraints_14, STATE_VARIABLE_DisjConstraints_29_29, &DisjConstraints_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Constraint_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DisjConstraints_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SingleConstraint_21));
        }
      }
      else
      {
        MR_Word SingleConstraints0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
        MR_Word SingleConstraints_12;
        MR_Word Var_39;

        check_hlds__type_constraints__conj_find_domain_4_p_0(SingleConstraints0_11, &SingleConstraints_12, STATE_VARIABLE_DomainMap_0_22, STATE_VARIABLE_DomainMap_23);
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (SingleConstraints_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Constraint_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_39));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__domain_map_unchanged_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__non_empty_domain_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_17;

    succeeded = check_hlds__type_constraints__IntroducedFrom__pred__constraint_is_satisfiable__1252__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_17);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_17));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    check_hlds__type_constraints__tvars_in_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DomainMap_27;

    check_hlds__type_constraints__simple_find_domain_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DomainMap_27);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DomainMap_27));
  }
}

static void MR_CALL 
check_hlds__type_constraints__conj_find_domain_4_p_0(
  MR_Word STATE_VARIABLE_ConjTypeConstraint_0_18,
  MR_Word * STATE_VARIABLE_ConjTypeConstraint_19,
  MR_Word DomainMap0_6,
  MR_Word * DomainMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ConjTypeConstraint_0_18, (MR_Integer) 4))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ConjTypeConstraint_0_18, (MR_Integer) 3))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ConjTypeConstraint_0_18, (MR_Integer) 2))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ConjTypeConstraint_0_18, (MR_Integer) 1))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ConjTypeConstraint_0_18, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (Var_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DomainMap1_16;
          MR_Box conv1_DomainMap1_16;
          MR_Word TVars0_43;
          MR_Word TVars_44;
          MR_Word Domains_45;
          MR_Word Var_47;

          mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[36]), Var_40, ((MR_Box) (DomainMap0_6)), &conv1_DomainMap1_16);
          DomainMap1_16 = ((MR_Word) (conv1_DomainMap1_16));
          mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[10]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[37]), Var_40, &TVars0_43);
          mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), TVars0_43, &TVars_44);
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[10]));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__type_constraints__conj_find_domain_4_p_0_3));
            MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (DomainMap1_16));
          }
          mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), Var_47, TVars_44, &Domains_45);
          succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[38]), Domains_45);
          if (succeeded)
          {
            MR_Word AssocDomain1_17;
            MR_Word Var_22;

            mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap1_16, &AssocDomain1_17);
            {
              Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_6[11]));
              MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__type_constraints__conj_find_domain_4_p_0_5));
              MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (DomainMap0_6));
            }
            succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[3]), Var_22, AssocDomain1_17);
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
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ConjTypeConstraint_19 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
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
check_hlds__type_constraints__type_constraint_solution_get_constraint_map_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), T_3, (MR_Integer) 1))));
}

static void MR_CALL 
check_hlds__type_constraints__type_constraint_solution_get_domains_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), T_3, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
check_hlds__type_constraints__solution_is_invalid_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    succeeded = (Var_4 == (MR_Integer) 0);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__set_clause_body_3_p_0(
  MR_Word Goal_4,
  MR_Word Clause_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 2))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 4))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_10));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__get_clause_body_2_p_0(
  MR_Word Clause_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(Clause_3);
}

static void MR_CALL 
check_hlds__type_constraints__find_variable_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv4_Name_6;

    check_hlds__type_constraints__type_to_string_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Name_6);
    *wrapper_arg_2 = ((MR_Box) (conv4_Name_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_variable_type_9_p_0(
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
  {
    MR_bool succeeded;
    MR_Word TVar_19;
    MR_Word DefaultType_21;
    MR_Box conv0_TVar_19;
    MR_Word ReplacementType_20;
    MR_Box conv1_ReplacementType_20;
    MR_Word Domain_22;
    MR_Box conv2_Domain_22;

    mercury__bimap__lookup_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), VarMap_13, ((MR_Box) (Var_16)), &conv0_TVar_19);
    TVar_19 = ((MR_Word) (conv0_TVar_19));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), ReplacementMap_15, ((MR_Box) (Var_16)), &conv1_ReplacementType_20);
    if (succeeded)
    {
      ReplacementType_20 = ((MR_Word) (conv1_ReplacementType_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        DefaultType_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DefaultType_21, 0) = ((MR_Box) (ReplacementType_20));
        MR_hl_field(MR_mktag(0), DefaultType_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      {
        DefaultType_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DefaultType_21, 0) = ((MR_Box) (TVar_19));
        MR_hl_field(MR_mktag(0), DefaultType_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap_14, ((MR_Box) (TVar_19)), &conv2_Domain_22);
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
            MR_Word Types_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domain_22, (MR_Integer) 0))));
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
                MR_Word Var_55;
                MR_Word Var_56;

                *Type_17 = DefaultType_21;
                VarName_25 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_11, Var_16);
                {
                  Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[8]));
                  MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__type_constraints__find_variable_type_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (TVarSet_12));
                }
                Var_31 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_23);
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31, &TypeStrings_26);
                TypesString_27 = mercury__string__join_list_2_f_0((MR_String) " or ", TypeStrings_26);
                {
                  Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (VarName_25));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (TypesString_27));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_1[25])));
                }
                {
                  Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[57])));
                  MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
                }
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
                }
                {
                  Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[56])));
                  MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
                }
                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
                }
                {
                  Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[55])));
                  MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
                }
                {
                  Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_constraints_scalar_common_1[54])));
                  MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_35));
                }
                {
                  Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Pieces_28));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
                  MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_29, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Msg_29, 1) = ((MR_Box) (Var_55));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeMsg_18 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_29));
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Domain_22, (MR_Integer) 0))));
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
}

static MR_bool MR_CALL 
check_hlds__type_constraints__has_multiple_disjuncts_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__has_multiple_disjuncts_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Cs_5)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
    MR_Word TypeCtorInfo_12_12;
    MR_Word Cs0_3;
    MR_Word Var_9;
    MR_Word Var_10;

    if (succeeded)
    {
      Cs0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_9 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[35]);
      TypeCtorInfo_12_12 = (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0);
      mercury__list__filter_3_p_0(TypeCtorInfo_12_12, Var_9, Cs0_3, Cs_5);
      succeeded = ((MR_tag((MR_Word) *Cs_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Cs_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__get_first_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__get_first_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      *C_2 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_8;

        mercury__list__filter_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[34]), Var_16, &Var_8);
        succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 1);
        if (succeeded)
          *C_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
      }
      else
      {
        *C_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__has_one_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__has_one_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      *C_2 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_18_18;
        MR_Word Var_7;
        MR_Word Var_15;

        mercury__list__filter_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[33]), Var_17, &Var_7);
        succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
        if (succeeded)
        {
          *C_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1))));
          TypeInfo_18_18 = (MR_Word) (&check_hlds__type_constraints_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_15)));
        }
      }
      else
      {
        *C_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__set_goal_pred_id_3_p_0(
  MR_Word PredId_4,
  MR_Word Goal0_5,
  MR_Word * MaybeGoal_6)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Integer Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    succeeded = ((MR_tag((MR_Word) GoalExpr0_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 2))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 3))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 4))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 5))));
      {
        MR_Word GoalExpr_20;
        MR_Word Goal_21;

        {
          GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), GoalExpr_20, 0) = ((MR_Box) (PredId_4));
          MR_hl_field(MR_mktag(2), GoalExpr_20, 1) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(2), GoalExpr_20, 2) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(2), GoalExpr_20, 3) = ((MR_Box) (Var_12));
          MR_hl_field(MR_mktag(2), GoalExpr_20, 4) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(2), GoalExpr_20, 5) = ((MR_Box) (Var_14));
        }
        {
          Goal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_21, 0) = ((MR_Box) (GoalExpr_20));
          MR_hl_field(MR_mktag(0), Goal_21, 1) = ((MR_Box) (GoalInfo_8));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Goal_21));
        }
      }
    }
    else
      *MaybeGoal_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_constraints_scalar_common_3[1]));
  }
}

static void MR_CALL 
check_hlds__type_constraints__apply_pred_data_to_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeGoal_6;

    check_hlds__type_constraints__set_goal_pred_id_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_MaybeGoal_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_MaybeGoal_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__apply_pred_data_to_goal_4_p_0(
  MR_Word ForwardGoalPathMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13)
{
  {
    MR_Word GoalId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word GoalPath_9;
    MR_Word Result_10;
    MR_Word Var_14;
    MR_Box conv0_GoalPath_9;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), ForwardGoalPathMap_5, ((MR_Box) (GoalId_6)), &conv0_GoalPath_9);
    GoalPath_9 = ((MR_Word) (conv0_GoalPath_9));
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[7]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (check_hlds__type_constraints__apply_pred_data_to_goal_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (PredId_7));
    }
    hlds__goal_util__maybe_transform_goal_at_goal_path_4_p_0(Var_14, GoalPath_9, STATE_VARIABLE_Goal_0_12, &Result_10);
    switch (MR_tag((MR_Word) Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_constraints.apply_pred_data_to_goal\'/4", (MR_String) "not ok");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_10, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_constraints.apply_pred_data_to_goal\'/4", (MR_String) "not ok");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Goal_13;

    check_hlds__type_constraints__apply_pred_data_to_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Goal_13);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Goal_13));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_52;

    succeeded = check_hlds__type_constraints__IntroducedFrom__func__update_goal__405__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_52);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_52));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_45;

    check_hlds__type_constraints__IntroducedFrom__pred__update_goal__403__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__3_45);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_45));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    succeeded = check_hlds__type_constraints__pred_constraint_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_Msg_6;

    succeeded = check_hlds__type_constraints__diagnose_ambig_pred_error_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Msg_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv3_Msg_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Cs_5;

    succeeded = check_hlds__type_constraints__has_multiple_disjuncts_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Cs_5);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_Cs_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = check_hlds__type_constraints__pred_constraint_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_C_2;

    succeeded = check_hlds__type_constraints__has_one_disjunct_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_C_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_C_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__update_goal_6_p_0(
  MR_Word PredEnv_7,
  MR_Word ConstraintMap_8,
  MR_Word ForwardGoalPathMap_9,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word * Errors_11)
{
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

    Disjunctions_12 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), ConstraintMap_8);
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[28]), Disjunctions_12, &Conjunctions_13);
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[29]), Conjunctions_13, &DefinitePredData_14);
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[5]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[30]), Disjunctions_12, &AmbigDisjuncts_15);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_8[5]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_4));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (PredEnv_7));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[5]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_24, AmbigDisjuncts_15, Errors_11);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[5]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[6]), (MR_Word) (&check_hlds__type_constraints_scalar_common_7[5]), AmbigDisjuncts_15, &AmbigPredDatas_16);
    AmbigPredData_17 = mercury__list__filter_map_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[6]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[32]), AmbigPredDatas_16);
    PredData_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[2]), DefinitePredData_14, AmbigPredData_17);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[5]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (check_hlds__type_constraints__update_goal_6_p_0_8));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (ForwardGoalPathMap_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_28, PredData_18, ((MR_Box) (STATE_VARIABLE_Goal_0_19)), &conv8_STATE_VARIABLE_Goal_20);
    *STATE_VARIABLE_Goal_20 = ((MR_Word) (conv8_STATE_VARIABLE_Goal_20));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_if_needed_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_22,
  MR_Word * STATE_VARIABLE_Environment_23,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word Preds0_12;
    MR_Word PredInfo_13;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_22, (MR_Integer) 3))));
    MR_Box conv0_PredInfo_13;

    hlds__pred_table__predicate_table_get_preds_2_p_0(Var_28, &Preds0_12);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_12, ((MR_Box) (PredId_8)), &conv0_PredInfo_13);
    PredInfo_13 = ((MR_Word) (conv0_PredInfo_13));
    {
      MR_Word Origin_48;
      MR_Word SpecialPredId_49;
      MR_Word TypeCtor_50;
      MR_Word TypeTable_51;
      MR_Word TypeDefn_52;
      MR_Word Body_53;
      MR_Word TypeCtorInfo_12_55;
      MR_Word Var_54;

      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_13);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_13, &Origin_48);
        succeeded = ((MR_tag((MR_Word) Origin_48)) == (MR_Integer) 0);
        if (succeeded)
        {
          SpecialPredId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_48, (MR_Integer) 0))));
          TypeCtor_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_48, (MR_Integer) 1))));
          Var_54 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
          TypeCtorInfo_12_55 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_12_55, ((MR_Box) (TypeCtor_50)), Var_54);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_HLDS_0_24, &TypeTable_51);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_51, TypeCtor_50, &TypeDefn_52);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_52, &Body_53);
            succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(STATE_VARIABLE_HLDS_0_24, SpecialPredId_49, Body_53);
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
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;

            hlds__hlds_pred__pred_info_mark_as_external_2_p_0(PredInfo_13, &PredInfo1_18);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_8)), ((MR_Box) (PredInfo1_18)), Preds0_12, &Preds_19);
            PredEnv0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_22, (MR_Integer) 3))));
            hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_19, PredEnv0_20, &PredEnv_21);
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredEnv_21, STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25);
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_22, (MR_Integer) 0))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_22, (MR_Integer) 1))));
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_22, (MR_Integer) 2))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Environment_23 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredEnv_21));
            }
          }
          break;
      }
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
      check_hlds__type_constraints__typecheck_one_predicate_7_p_0(PredId_8, STATE_VARIABLE_Environment_0_22, STATE_VARIABLE_Environment_23, STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_Vartypes_10;

    check_hlds__type_constraints__add_unused_prog_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_Vartypes_10);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_Vartypes_10));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_TCInfo_8;

    check_hlds__type_constraints__add_message_to_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_TCInfo_8);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_TCInfo_8));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__3_3;

    check_hlds__type_constraints__set_clause_body_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Goal_20;
    MR_Word conv10_Errors_11;

    check_hlds__type_constraints__update_goal_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv11_STATE_VARIABLE_Goal_20, &conv10_Errors_11);
    *wrapper_arg_2 = ((MR_Box) (conv11_STATE_VARIABLE_Goal_20));
    *wrapper_arg_3 = ((MR_Box) (conv10_Errors_11));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ReplacementMap_35;
    MR_Word conv6_STATE_VARIABLE_DomainMap_37;

    check_hlds__type_constraints__unify_equal_tvars_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_ReplacementMap_35, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_DomainMap_37);
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ReplacementMap_35));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_DomainMap_37));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_TCInfo_46;

    check_hlds__type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_TCInfo_46);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_TCInfo_46));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    check_hlds__type_constraints__get_clause_body_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TCInfo_14;

    check_hlds__type_constraints__variable_assignment_constraint_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TCInfo_14);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TCInfo_14));
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_one_predicate_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_41,
  MR_Word * STATE_VARIABLE_Environment_42,
  MR_Word STATE_VARIABLE_HLDS_0_43,
  MR_Word * STATE_VARIABLE_HLDS_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet_20;
    MR_Word Context_21;
    MR_Word ProgVarSet_22;
    MR_Word HeadVars_27;
    MR_Word HeadTypes_28;
    MR_Word HeadTVars_29;
    MR_Word ContainingGoalMap_30;
    MR_Word ForwardGoalPathMap_31;
    MR_Word ClausesRep0_32;
    MR_Word ItemNumbers_33;
    MR_Word DomainMap0_34;
    MR_Word ReplacementMap_35;
    MR_Word DomainMap_36;
    MR_Word PredErrors_37;
    MR_Word VarTypeErrors_38;
    MR_Word NewErrors_39;
    MR_Word ClausesRep_40;
    MR_Word STATE_VARIABLE_PredEnv_47_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_41, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Preds_48_48;
    MR_Word STATE_VARIABLE_PredInfo_49_49;
    MR_Word STATE_VARIABLE_ClausesInfo_50_50;
    MR_Word STATE_VARIABLE_TCInfo_67_67;
    MR_Word STATE_VARIABLE_ClausesInfo_76_76;
    MR_Word STATE_VARIABLE_Clauses_77_77;
    MR_Word STATE_VARIABLE_Goals_79_79;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_TCInfo_81_81;
    MR_Word STATE_VARIABLE_TCInfo_84_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word STATE_VARIABLE_Goals_92_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_Vartypes_96_96;
    MR_Word STATE_VARIABLE_Clauses_98_98;
    MR_Word Var_99;
    MR_Word STATE_VARIABLE_TCInfo_101_101;
    MR_Word STATE_VARIABLE_ClausesInfo_102_102;
    MR_Word Var_103;
    MR_Word STATE_VARIABLE_Vartypes_104_104;
    MR_Word STATE_VARIABLE_ClausesInfo_105_105;
    MR_Word STATE_VARIABLE_PredInfo_106_106;
    MR_Word Var_107;
    MR_Word STATE_VARIABLE_PredInfo_108_108;
    MR_Word STATE_VARIABLE_Preds_109_109;
    MR_Word STATE_VARIABLE_PredEnv_110_110;
    MR_Word Var_114;
    MR_Word Var_123;
    MR_Box conv0_STATE_VARIABLE_PredInfo_49_49;
    MR_Box conv5_STATE_VARIABLE_TCInfo_81_81;
    MR_Box conv9_ReplacementMap_35;
    MR_Box conv8_DomainMap_36;
    MR_Box conv14_STATE_VARIABLE_TCInfo_101_101;
    MR_Box conv16_STATE_VARIABLE_Vartypes_104_104;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;

    hlds__pred_table__predicate_table_get_preds_2_p_0(STATE_VARIABLE_PredEnv_47_47, &STATE_VARIABLE_Preds_48_48);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_Preds_48_48, ((MR_Box) (PredId_8)), &conv0_STATE_VARIABLE_PredInfo_49_49);
    STATE_VARIABLE_PredInfo_49_49 = ((MR_Word) (conv0_STATE_VARIABLE_PredInfo_49_49));
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_49_49, &TVarSet_20);
    hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_49_49, &Context_21);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_49_49, &STATE_VARIABLE_ClausesInfo_50_50);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_50_50, &ProgVarSet_22);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_50_50, &HeadVars_27);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_49_49, &HeadTypes_28);
    parse_tree__prog_type__type_vars_list_2_p_0(HeadTypes_28, &HeadTVars_29);
    succeeded = mercury__list__same_length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), HeadTypes_28, HeadVars_27);
    if (succeeded)
    {
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Box conv2_STATE_VARIABLE_TCInfo_67_67;

      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_11[1]));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Context_21));
      }
      Var_68 = mercury__bimap__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]));
      Var_69 = mercury__counter__init_1_f_0((MR_Integer) 0);
      Var_71 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0));
      Var_72 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[3]));
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (TVarSet_20));
        MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_65, HeadVars_27, HeadTypes_28, ((MR_Box) (Var_66)), &conv2_STATE_VARIABLE_TCInfo_67_67);
      STATE_VARIABLE_TCInfo_67_67 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_67_67));
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_constraints.typecheck_one_predicate\'/7", (MR_String) "head variable types vs vars mismatch");
        return;
      }
    }
    hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(STATE_VARIABLE_HLDS_0_43, &ContainingGoalMap_30, STATE_VARIABLE_ClausesInfo_50_50, &STATE_VARIABLE_ClausesInfo_76_76);
    ForwardGoalPathMap_31 = mdbcomp__goal_path__create_forward_goal_path_map_1_f_0(ContainingGoalMap_30);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(STATE_VARIABLE_ClausesInfo_76_76, &ClausesRep0_32, &ItemNumbers_33);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_32, &STATE_VARIABLE_Clauses_77_77);
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[25]), STATE_VARIABLE_Clauses_77_77, &STATE_VARIABLE_Goals_79_79);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (STATE_VARIABLE_Environment_0_41));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), Var_80, STATE_VARIABLE_Goals_79_79, ((MR_Box) (STATE_VARIABLE_TCInfo_67_67)), &conv5_STATE_VARIABLE_TCInfo_81_81);
    STATE_VARIABLE_TCInfo_81_81 = ((MR_Word) (conv5_STATE_VARIABLE_TCInfo_81_81));
    check_hlds__type_constraints__find_type_constraint_solutions_5_p_0(Context_21, ProgVarSet_22, &DomainMap0_34, STATE_VARIABLE_TCInfo_81_81, &STATE_VARIABLE_TCInfo_84_84);
    Var_88 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]));
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_4));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (STATE_VARIABLE_TCInfo_84_84));
      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (Var_88));
    }
    Var_87 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]));
    mercury__list__foldl2_corresponding_7_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[0]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), Var_85, HeadTVars_29, HeadTVars_29, ((MR_Box) (Var_87)), &conv9_ReplacementMap_35, ((MR_Box) (DomainMap0_34)), &conv8_DomainMap_36);
    ReplacementMap_35 = ((MR_Word) (conv9_ReplacementMap_35));
    DomainMap_36 = ((MR_Word) (conv8_DomainMap_36));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_84_84, (MR_Integer) 2))));
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_5));
      MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (STATE_VARIABLE_PredEnv_47_47));
      MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), Var_91, 5) = ((MR_Box) (ForwardGoalPathMap_31));
    }
    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[4]), Var_91, STATE_VARIABLE_Goals_79_79, &STATE_VARIABLE_Goals_92_92, &PredErrors_37);
    Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_84_84, (MR_Integer) 0))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_84_84, (MR_Integer) 4))));
    check_hlds__type_constraints__create_vartypes_map_8_p_0(Context_21, ProgVarSet_22, Var_94, Var_123, DomainMap_36, ReplacementMap_35, &STATE_VARIABLE_Vartypes_96_96, &VarTypeErrors_38);
    mercury__list__map_corresponding_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[26]), STATE_VARIABLE_Goals_92_92, STATE_VARIABLE_Clauses_77_77, &STATE_VARIABLE_Clauses_98_98);
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (VarTypeErrors_38));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (PredErrors_37));
    }
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_99, &NewErrors_39);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[27]), NewErrors_39, ((MR_Box) (STATE_VARIABLE_TCInfo_84_84)), &conv14_STATE_VARIABLE_TCInfo_101_101);
    STATE_VARIABLE_TCInfo_101_101 = ((MR_Word) (conv14_STATE_VARIABLE_TCInfo_101_101));
    hlds__hlds_clauses__set_clause_list_2_p_0(STATE_VARIABLE_Clauses_98_98, &ClausesRep_40);
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_40, ItemNumbers_33, STATE_VARIABLE_ClausesInfo_76_76, &STATE_VARIABLE_ClausesInfo_102_102);
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (check_hlds__type_constraints__typecheck_one_predicate_7_p_0_8));
      MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (STATE_VARIABLE_TCInfo_101_101));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_103, HeadVars_27, ((MR_Box) (STATE_VARIABLE_Vartypes_96_96)), &conv16_STATE_VARIABLE_Vartypes_104_104);
    STATE_VARIABLE_Vartypes_104_104 = ((MR_Word) (conv16_STATE_VARIABLE_Vartypes_104_104));
    hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(STATE_VARIABLE_Vartypes_104_104, STATE_VARIABLE_ClausesInfo_102_102, &STATE_VARIABLE_ClausesInfo_105_105);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_105_105, STATE_VARIABLE_PredInfo_49_49, &STATE_VARIABLE_PredInfo_106_106);
    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_101_101, (MR_Integer) 4))));
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(Var_107, STATE_VARIABLE_PredInfo_106_106, &STATE_VARIABLE_PredInfo_108_108);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_8)), ((MR_Box) (STATE_VARIABLE_PredInfo_108_108)), STATE_VARIABLE_Preds_48_48, &STATE_VARIABLE_Preds_109_109);
    hlds__pred_table__predicate_table_set_preds_3_p_0(STATE_VARIABLE_Preds_109_109, STATE_VARIABLE_PredEnv_47_47, &STATE_VARIABLE_PredEnv_110_110);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(STATE_VARIABLE_PredEnv_110_110, STATE_VARIABLE_HLDS_0_43, STATE_VARIABLE_HLDS_44);
    Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_41, (MR_Integer) 0))));
    Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_41, (MR_Integer) 1))));
    Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Environment_0_41, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Environment_42 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (STATE_VARIABLE_PredEnv_110_110));
    }
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_101_101, (MR_Integer) 5))));
    *STATE_VARIABLE_Specs_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_114, STATE_VARIABLE_Specs_0_45);
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__4_80;

    check_hlds__type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__602__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__4_80);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__4_80));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Domain_6;

    check_hlds__type_constraints__type_domain_union_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_Domain_6);
    *wrapper_arg_3 = ((MR_Box) (conv7_Domain_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_71;

    check_hlds__type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__591__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_71);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_71));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Domain_6;

    check_hlds__type_constraints__type_domain_union_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Domain_6);
    *wrapper_arg_3 = ((MR_Box) (conv4_Domain_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TCInfo_8;

    check_hlds__type_constraints__add_message_to_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TCInfo_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TCInfo_8));
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Msg_10;

    check_hlds__type_constraints__diagnose_unsatisfiability_error_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Msg_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_Msg_10));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_TVar_3;

    succeeded = check_hlds__type_constraints__has_empty_domain_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVar_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_TVar_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__find_type_constraint_solutions_5_p_0(
  MR_Word Context_6,
  MR_Word ProgVarSet_7,
  MR_Word * DomainMap_8,
  MR_Word STATE_VARIABLE_TCInfo_0_28,
  MR_Word * STATE_VARIABLE_TCInfo_29)
{
  {
    MR_bool succeeded;
    MR_Word ConstraintMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_28, (MR_Integer) 2))));
    MR_Word VarConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_28, (MR_Integer) 3))));
    MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_0_28, (MR_Integer) 4))));
    MR_Word LabeledSolution_16;
    MR_Word Solutions_17;
    MR_Word ConstraintMap_18;
    MR_Word Success_19;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_TCInfo_44_44;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    Var_30 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0));
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0));
    check_hlds__type_constraints__solve_constraint_labeling_6_p_0(TVarSet_14, VarConstraints_13, ConstraintMap0_12, Var_30, Var_31, &LabeledSolution_16);
    Solutions_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabeledSolution_16, (MR_Integer) 0))));
    ConstraintMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabeledSolution_16, (MR_Integer) 1))));
    Success_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabeledSolution_16, (MR_Integer) 2))));
    if ((Solutions_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_constraints.find_type_constraint_solutions\'/5", (MR_String) "cannot find any possible solutions for the type constraints");
        return;
      }
    }
    else
    {
      MR_Word FirstSolution_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solutions_17, (MR_Integer) 0))));
      MR_Word LaterSolutions_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Solutions_17, (MR_Integer) 1))));

      switch (Success_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SolutionAssocList_23;
            MR_Word ErrorTVars_24;
            MR_Word ErrorMessages_25;
            MR_Word Var_42;
            MR_Word Var_46;
            MR_Box conv3_STATE_VARIABLE_TCInfo_44_44;
            MR_Box conv6_DomainMap_8;

            mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), FirstSolution_20, &SolutionAssocList_23);
            mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[3]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[21]), SolutionAssocList_23, &ErrorTVars_24);
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_11[0]));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__type_constraints__find_type_constraint_solutions_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (STATE_VARIABLE_TCInfo_0_28));
              MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Context_6));
              MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (ProgVarSet_7));
            }
            mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_42, ErrorTVars_24, &ErrorMessages_25);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[22]), ErrorMessages_25, ((MR_Box) (STATE_VARIABLE_TCInfo_0_28)), &conv3_STATE_VARIABLE_TCInfo_44_44);
            STATE_VARIABLE_TCInfo_44_44 = ((MR_Word) (conv3_STATE_VARIABLE_TCInfo_44_44));
            Var_46 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0));
            mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_7[3]), Solutions_17, ((MR_Box) (Var_46)), &conv6_DomainMap_8);
            *DomainMap_8 = ((MR_Word) (conv6_DomainMap_8));
          }
          break;
        case (MR_Integer) 1:
          {
            if ((LaterSolutions_21 == (MR_Word) ((MR_Unsigned) 0U)))
              *DomainMap_8 = FirstSolution_20;
            else
            {
              MR_Word Var_33;
              MR_Box conv9_DomainMap_8;

              Var_33 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0));
              mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_7[4]), Solutions_17, ((MR_Box) (Var_33)), &conv9_DomainMap_8);
              *DomainMap_8 = ((MR_Word) (conv9_DomainMap_8));
            }
            STATE_VARIABLE_TCInfo_44_44 = STATE_VARIABLE_TCInfo_0_28;
          }
          break;
      }
    }
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_44_44, (MR_Integer) 0))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_44_44, (MR_Integer) 1))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_44_44, (MR_Integer) 3))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_44_44, (MR_Integer) 4))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TCInfo_44_44, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TCInfo_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConstraintMap_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_56));
    }
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__4_86;

    check_hlds__type_constraints__IntroducedFrom__pred__solve_constraint_labeling__661__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__4_86);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__4_86));
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Result_6;

    check_hlds__type_constraints__merge_type_constraints_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv7_Result_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    check_hlds__type_constraints__type_constraint_solution_get_constraint_map_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    check_hlds__type_constraints__type_constraint_solution_get_domains_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    check_hlds__type_constraints__type_constraint_solution_get_constraint_map_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    check_hlds__type_constraints__type_constraint_solution_get_domains_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__solution_is_invalid_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Solution_12;

    check_hlds__type_constraints__solve_constraint_labeling_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Solution_12);
    *wrapper_arg_2 = ((MR_Box) (conv2_Solution_12));
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_63;

    conv1_HeadVar__4_63 = check_hlds__type_constraints__IntroducedFrom__func__solve_constraint_labeling__634__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_63));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Domain_6;

    check_hlds__type_constraints__type_domain_intersect_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Domain_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Domain_6));
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_labeling_6_p_0(
  MR_Word TVarSet_7,
  MR_Word VarConstraints_8,
  MR_Word ConstraintMap0_9,
  MR_Word DomainMap0_10,
  MR_Word Guesses_11,
  MR_Word * Solution_12)
{
  {
    MR_bool succeeded;
    MR_Word GuessMap_15;
    MR_Word ConstraintMap1_16;
    MR_Word DomainMap1_17;
    MR_Word DomainMaps_18;
    MR_Word ConstraintMap_19;
    MR_Word Success_20;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    mercury__map__union_4_p_1((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[14]), Guesses_11, DomainMap0_10, &GuessMap_15);
    check_hlds__type_constraints__solve_constraint_6_p_0(TVarSet_7, VarConstraints_8, ConstraintMap0_9, &ConstraintMap1_16, GuessMap_15, &DomainMap1_17);
    Var_96 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_96));
    }
    Var_95 = mercury__map__values_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap1_17);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Var_94)), Var_95);
    if (succeeded)
    {
      {
        DomainMaps_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DomainMaps_18, 0) = ((MR_Box) (DomainMap1_17));
        MR_hl_field(MR_mktag(1), DomainMaps_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ConstraintMap_19 = ConstraintMap1_16;
      Success_20 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_21;
      MR_Word Domains_22;

      succeeded = check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0(DomainMap1_17, &Var_21, &Domains_22);
      if (succeeded)
      {
        MR_Word NewGuesses_23;
        MR_Word Solutions_24;
        MR_Word FailSolutions_25;
        MR_Word SuccessSolutions_26;
        MR_Word RelevantConstraintMaps_28;
        MR_Word Var_38;
        MR_Word Var_39;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Guesses_11));
          MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (Var_21));
        }
        NewGuesses_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), Var_38, Domains_22);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__type_constraints__solve_constraint_labeling_6_p_0_3));
          MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (TVarSet_7));
          MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (VarConstraints_8));
          MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (ConstraintMap1_16));
          MR_hl_field(MR_mktag(0), Var_39, 6) = ((MR_Box) (DomainMap1_17));
        }
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0), Var_39, NewGuesses_23, &Solutions_24);
        mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[15]), Solutions_24, &FailSolutions_25, &SuccessSolutions_26);
        if ((SuccessSolutions_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word DomainMaps0_27;

          mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[8]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[16]), FailSolutions_25, &DomainMaps0_27);
          mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), DomainMaps0_27, &DomainMaps_18);
          mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[17]), FailSolutions_25, &RelevantConstraintMaps_28);
          Success_20 = (MR_Integer) 0;
        }
        else
        {
          MR_Word DomainMaps0_48;

          mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[8]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[18]), SuccessSolutions_26, &DomainMaps0_48);
          mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), DomainMaps0_48, &DomainMaps_18);
          mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[19]), SuccessSolutions_26, &RelevantConstraintMaps_28);
          Success_20 = (MR_Integer) 1;
        }
        if ((RelevantConstraintMaps_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ConstraintMap_19 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0));
        }
        else
        {
          MR_Word RelevantHead_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RelevantConstraintMaps_28, (MR_Integer) 0))));
          MR_Word RelevantTail_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RelevantConstraintMaps_28, (MR_Integer) 1))));
          MR_Box conv9_ConstraintMap_19;

          mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__type_constraints_scalar_common_7[2]), RelevantTail_32, ((MR_Box) (RelevantHead_31)), &conv9_ConstraintMap_19);
          ConstraintMap_19 = ((MR_Word) (conv9_ConstraintMap_19));
        }
      }
      else
      {
        {
          DomainMaps_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DomainMaps_18, 0) = ((MR_Box) (DomainMap1_17));
          MR_hl_field(MR_mktag(1), DomainMaps_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ConstraintMap_19 = ConstraintMap1_16;
        Success_20 = (MR_Integer) 1;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Solution_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DomainMaps_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConstraintMap_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Success_20));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = check_hlds__type_constraints__to_singleton_type_domain_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_8;

    check_hlds__type_constraints__domain_size_compare_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__type_constraints__has_ambiguous_domain_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints__constraint_has_multiple_solutions_3_p_0(
  MR_Word DomainMap_4,
  MR_Word * Var_5,
  MR_Word * Domains_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_25_25;
    MR_Word DomainMap1_7;
    MR_Word AmbigDomains0_8;
    MR_Word Domain0_9;
    MR_Word Domain1_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), DomainMap_4, &DomainMap1_7);
    mercury__list__filter_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[3]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[11]), DomainMap1_7, &AmbigDomains0_8);
    mercury__list__sort_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[3]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[12]), AmbigDomains0_8, &Var_14);
    succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
      *Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      Domain0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Domain0_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        Domain1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Domain0_9, (MR_Integer) 0))));
        TypeCtorInfo_25_25 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        Var_17 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[13]);
        Var_16 = mercury__set__map_2_f_0(TypeCtorInfo_25_25, (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), Var_17, Domain1_11);
        *Domains_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), Var_16);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConstraintMap_23;
    MR_Word conv0_STATE_VARIABLE_DomainMap_25;

    check_hlds__type_constraints__propagate_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstraintMap_23, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DomainMap_25);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstraintMap_23));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DomainMap_25));
  }
}

static void MR_CALL 
check_hlds__type_constraints__solve_constraint_6_p_0(
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
    MR_Word STATE_VARIABLE_ConstraintMap_19_19;
    MR_Word STATE_VARIABLE_DomainMap_20_20;
    MR_Box conv3_STATE_VARIABLE_ConstraintMap_19_19;
    MR_Box conv2_STATE_VARIABLE_DomainMap_20_20;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    // setup for model_det tailcalls optimized into a loop
    ;
    ConstraintIds_13 = mercury__map__keys_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0), STATE_VARIABLE_ConstraintMap_0_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__type_constraints__solve_constraint_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (TVarSet_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (VarConstraints_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]), Var_18, ConstraintIds_13, ((MR_Box) (STATE_VARIABLE_ConstraintMap_0_14)), &conv3_STATE_VARIABLE_ConstraintMap_19_19, ((MR_Box) (STATE_VARIABLE_DomainMap_0_16)), &conv2_STATE_VARIABLE_DomainMap_20_20);
    STATE_VARIABLE_ConstraintMap_19_19 = ((MR_Word) (conv3_STATE_VARIABLE_ConstraintMap_19_19));
    STATE_VARIABLE_DomainMap_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_DomainMap_20_20));
    Var_37 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_37));
    }
    Var_36 = mercury__map__values_1_f_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_20_20);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Var_35)), Var_36);
    if (succeeded)
    {
      *STATE_VARIABLE_DomainMap_17 = STATE_VARIABLE_DomainMap_20_20;
      *STATE_VARIABLE_ConstraintMap_15 = STATE_VARIABLE_ConstraintMap_19_19;
    }
    else
    {
      MR_Word TypeInfo_33_33;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_2[4]), ((MR_Box) (STATE_VARIABLE_ConstraintMap_19_19)), ((MR_Box) (STATE_VARIABLE_ConstraintMap_0_14)));
      if (succeeded)
      {
        TypeInfo_33_33 = (MR_Word) (&check_hlds__type_constraints_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (STATE_VARIABLE_DomainMap_20_20)), ((MR_Box) (STATE_VARIABLE_DomainMap_0_16)));
      }
      if (succeeded)
      {
        *STATE_VARIABLE_DomainMap_17 = STATE_VARIABLE_DomainMap_20_20;
        *STATE_VARIABLE_ConstraintMap_15 = STATE_VARIABLE_ConstraintMap_19_19;
      }
      else
      {
        MR_Word next_value_of_STATE_VARIABLE_ConstraintMap_0_14 = STATE_VARIABLE_ConstraintMap_19_19;
        MR_Word next_value_of_STATE_VARIABLE_DomainMap_0_16 = STATE_VARIABLE_DomainMap_20_20;

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
check_hlds__type_constraints__create_vartypes_map_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_30;

    succeeded = check_hlds__type_constraints__IntroducedFrom__pred__create_vartypes_map__485__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_30);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_30));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints__create_vartypes_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_17;
    MR_Word conv0_MaybeMsg_18;

    check_hlds__type_constraints__find_variable_type_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_17, &conv0_MaybeMsg_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_17));
    *wrapper_arg_3 = ((MR_Box) (conv0_MaybeMsg_18));
  }
}

static void MR_CALL 
check_hlds__type_constraints__create_vartypes_map_8_p_0(
  MR_Word Context_9,
  MR_Word ProgVarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarMap_12,
  MR_Word DomainMap_13,
  MR_Word ReplacementMap_14,
  MR_Word * Vartypes_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word ProgVars_17;
    MR_Word Types_18;
    MR_Word MaybeErrors_19;
    MR_Word Var_20;

    mercury__bimap__ordinates_2_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[2]), VarMap_12, &ProgVars_17);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__type_constraints_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__type_constraints__create_vartypes_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (ProgVarSet_10));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), Var_20, 6) = ((MR_Box) (VarMap_12));
      MR_hl_field(MR_mktag(0), Var_20, 7) = ((MR_Box) (DomainMap_13));
      MR_hl_field(MR_mktag(0), Var_20, 8) = ((MR_Box) (ReplacementMap_14));
    }
    mercury__list__map2_4_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[7]), Var_20, ProgVars_17, &Types_18, &MaybeErrors_19);
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_constraints_scalar_common_1[7]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[10]), MaybeErrors_19, Errors_16);
    hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(ProgVars_17, Types_18, Vartypes_15);
  }
}

static void MR_CALL 
check_hlds__type_constraints__typecheck_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Environment_23;
    MR_Word conv1_STATE_VARIABLE_HLDS_25;
    MR_Word conv0_STATE_VARIABLE_Specs_27;

    check_hlds__type_constraints__typecheck_one_predicate_if_needed_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Environment_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_HLDS_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_27);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Environment_23));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_HLDS_25));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_27));
  }
}

void MR_CALL 
check_hlds__type_constraints__typecheck_constraints_3_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15,
  MR_Word * Specs_5)
{
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
    EventEnv_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_HLDS_0_14, &ClassEnv_8);
    hlds__hlds_module__module_info_get_cons_table_2_p_0(STATE_VARIABLE_HLDS_0_14, &FuncEnv_9);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_HLDS_0_14, &PredEnv_10);
    {
      Environment0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Environment0_11, 0) = ((MR_Box) (EventEnv_7));
      MR_hl_field(MR_mktag(0), Environment0_11, 1) = ((MR_Box) (ClassEnv_8));
      MR_hl_field(MR_mktag(0), Environment0_11, 2) = ((MR_Box) (FuncEnv_9));
      MR_hl_field(MR_mktag(0), Environment0_11, 3) = ((MR_Box) (PredEnv_10));
    }
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_HLDS_0_14, &PredIds_12);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_environment_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__type_constraints_scalar_common_1[0]), (MR_Word) (&check_hlds__type_constraints_scalar_common_2[9]), PredIds_12, ((MR_Box) (Environment0_11)), &conv5_Var_13, ((MR_Box) (STATE_VARIABLE_HLDS_0_14)), &conv4_STATE_VARIABLE_HLDS_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Specs_5);
    *STATE_VARIABLE_HLDS_15 = ((MR_Word) (conv4_STATE_VARIABLE_HLDS_15));
    *Specs_5 = ((MR_Word) (conv3_Specs_5));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____class_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____class_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____class_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____class_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____conj_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____conj_type_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____conj_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____conj_type_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____error_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____error_specs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____error_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____error_specs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____event_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____event_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____event_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____event_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____func_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____func_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____func_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____func_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____pred_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____pred_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____pred_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____pred_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____prog_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____prog_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____simple_prog_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____simple_prog_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____simple_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____simple_type_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____simple_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____simple_type_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____tconstr_activity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____tconstr_activity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_activity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____tconstr_activity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____tconstr_environment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____tconstr_environment_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____tconstr_environment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____tconstr_environment_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_constraint_counter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_constraint_counter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_constraint_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_constraint_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_constraint_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_constraint_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_constraint_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_constraint_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_constraint_solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_constraint_solution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_constraint_solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_constraint_solution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_domain_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_domain_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____type_domain_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____type_domain_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____type_domain_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____type_domain_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_constraints____Unify____var_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_constraints____Unify____var_constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_constraints____Compare____var_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_constraints____Compare____var_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__type_constraints__init(void)
{
}

void mercury__check_hlds__type_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_class_env_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_conj_type_constraint_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_error_specs_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_event_env_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_func_env_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_pred_env_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_prog_var_map_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_prog_var_map_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_simple_type_constraint_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_activity_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_tconstr_environment_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_counter_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_id_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_info_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_map_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_set_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_constraint_solution_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_type_domain_map_0);
	MR_register_type_ctor_info(&check_hlds__type_constraints__check_hlds__type_constraints__type_ctor_info_var_constraint_map_0);
}

void mercury__check_hlds__type_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__type_constraints__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.type_constraints.
