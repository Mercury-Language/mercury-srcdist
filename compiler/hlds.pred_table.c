/*
** Automatically generated from `pred_table.m'
** by the Mercury compiler,
** version rotd-2020-10-04
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


// :- module hlds.pred_table.
// :- implementation.

/*
INIT mercury__hlds__pred_table__init
ENDINIT
*/

#include "hlds.pred_table.mih"


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
#include "getopt_io.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__pred_table__type_ctor_info_module_and_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0;

static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1;

static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2];

static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2];

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2];

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0;

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1];

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1;

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1];

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2];

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2];

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2];

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_module_and_name_0_0[2];

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_module_and_name_0_0;

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_module_and_name_0_0[1];

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_module_and_name_0[1];

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_module_and_name_0[1];

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_module_and_name_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_module_and_name_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2];

static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2];

static const MR_DuArgLocn hlds__pred_table__hlds__pred_table__field_locns_name_accessibility_0_0[2];

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0;

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1];

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1];

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1];

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1];

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2];

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0;

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1];

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1];

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1];

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[10];

static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[10];

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0;

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1];

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1];

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1];

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1];

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____module_and_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_and_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
  MR_Word Preds_4,
  MR_Word ModuleName_5,
  MR_Word PredId_6);

static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
  MR_Word PartialQualInfo_7,
  MR_Word Preds_8,
  MR_Word AccessibilityTable_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredicateTable_0_19,
  MR_Word * STATE_VARIABLE_PredicateTable_20);

static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
  MR_Word MaybePredId_8,
  MR_Word PredInfo_9,
  MR_Word NeedQual_10,
  MR_Word MaybeQualInfo_11,
  MR_Word * PredId_12,
  MR_Word STATE_VARIABLE_PredicateTable_0_39,
  MR_Word * STATE_VARIABLE_PredicateTable_40);

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
  MR_Word Module_15,
  MR_String Name_16,
  MR_Integer Arity_17,
  MR_Word NeedQual_18,
  MR_Word MaybeQualInfo_19,
  MR_Word PredId_20,
  MR_Word STATE_VARIABLE_AccessibilityTable_0_31,
  MR_Word * STATE_VARIABLE_AccessibilityTable_32,
  MR_Word STATE_VARIABLE_N_Index_0_33,
  MR_Word * STATE_VARIABLE_N_Index_34,
  MR_Word STATE_VARIABLE_NA_Index_0_35,
  MR_Word * STATE_VARIABLE_NA_Index_36,
  MR_Word STATE_VARIABLE_MNA_Index_0_37,
  MR_Word * STATE_VARIABLE_MNA_Index_38);

static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word Module_10,
  MR_Word STATE_VARIABLE_MNA_Index_0_15,
  MR_Word * STATE_VARIABLE_MNA_Index_16);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word IsFullyQualified_7,
  MR_Word Module_8,
  MR_String FuncName_9,
  MR_Word * PredIds_10);

static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
  MR_Word Module_11,
  MR_String Name_12,
  MR_Integer Arity_13,
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_N_0_18,
  MR_Word * STATE_VARIABLE_N_19,
  MR_Word STATE_VARIABLE_NA_0_20,
  MR_Word * STATE_VARIABLE_NA_21,
  MR_Word STATE_VARIABLE_MNA_0_22,
  MR_Word * STATE_VARIABLE_MNA_23);

static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_and_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____module_and_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_table_scalar_common_1[16][2];

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[6][3];

static /* final */ const MR_Box hlds__pred_table_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__pred_table_scalar_common_4[2][9];

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__pred_table_scalar_common_6[1][1];




static /* final */ const MR_Box hlds__pred_table_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You need to use an explicit module qualifier."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "(Sorry, confused by earlier errors -- bailing out.)")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\' with no modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "(use an explicit lambda expression instead)")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\' with multiple modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unresolved predicate overloading,"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "matched"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__pred_table__type_ctor_info_module_and_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__pred_table__type_ctor_info_module_and_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_6[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__pred_table__type_ctor_info_module_and_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0),
    (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_accessibility_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____accessibility_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____accessibility_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "accessibility_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_constraint_search_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____constraint_search_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____constraint_search_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "constraint_search",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
  (MR_String) "is_fully_qualified",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
  (MR_String) "may_be_partially_qualified",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

static const MR_EnumFunctorDescPtr hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0[2] = {
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0,
  &hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1
};

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_table____Unify____is_fully_qualified_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____is_fully_qualified_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "is_fully_qualified",
  {     hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0 },
  {     hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0 = {
  (MR_String) "only_mode",
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

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1 = {
  (MR_String) "mode_no",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0[2] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1,
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_mode_no_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____mode_no_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____mode_no_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "mode_no",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_module_and_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_module_and_name_0_0 = {
  (MR_String) "module_and_name",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_table__hlds__pred_table__field_types_module_and_name_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_module_and_name_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_module_and_name_0_0
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_module_and_name_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_module_and_name_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_module_and_name_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_module_and_name_0_0
};

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_module_and_name_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____module_and_name_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____module_and_name_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "module_and_name",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_module_and_name_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_module_and_name_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__pred_table__hlds__pred_table__functor_number_map_module_and_name_0
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_module_and_name_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0),
    (MR_TypeInfo) (&hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_module_name_arity_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____module_name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____module_name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "module_name_arity_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_module_and_name_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2] = {
  (MR_String) "accessible_by_unqualified_name",
  (MR_String) "accessible_by_partially_qualified_names"
};

static const MR_DuArgLocn hlds__pred_table__hlds__pred_table__field_locns_name_accessibility_0_0[2] = {
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

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0 = {
  (MR_String) "access",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0,
  hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0,
  hlds__pred_table__hlds__pred_table__field_locns_name_accessibility_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_accessibility_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_accessibility_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_accessibility",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0 = {
  (MR_String) "name_arity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0),
    (MR_TypeInfo) (&hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_pred_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____pred_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____pred_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "pred_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_module_and_name_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_module_and_name_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0[10] = {
  (MR_String) "preds",
  (MR_String) "next_pred_id",
  (MR_String) "valid_pred_ids",
  (MR_String) "accessibility_table",
  (MR_String) "pred_name_index",
  (MR_String) "pred_name_arity_index",
  (MR_String) "pred_module_name_arity_index",
  (MR_String) "func_name_index",
  (MR_String) "func_name_arity_index",
  (MR_String) "func_module_name_arity_index"
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0 = {
  (MR_String) "predicate_table",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0,
  hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

static const MR_Integer hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____predicate_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____predicate_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "predicate_table",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0
};

void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0(
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
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[4]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[3]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
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

MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0(
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
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word TypeInfo_32_32;
      MR_Word TypeInfo_33_33;
      MR_Word TypeInfo_34_34;
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_27_27 = (MR_Word) (&hlds__pred_table_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_28_28 = (MR_Word) (&hlds__pred_table_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&hlds__pred_table_scalar_common_2[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&hlds__pred_table_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_31_31 = (MR_Word) (&hlds__pred_table_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_32_32 = (MR_Word) (&hlds__pred_table_scalar_common_2[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_33_33 = (MR_Word) (&hlds__pred_table_scalar_common_2[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_34_34 = (MR_Word) (&hlds__pred_table_scalar_common_2[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
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

void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
hlds__pred_table____Unify____name_arity_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
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
hlds__pred_table____Unify____name_accessibility_0_0(
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

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____module_and_name_0_0(
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
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_and_name_0_0(
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
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0(
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
      MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_11 < ArgY1_7);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_11 > ArgY1_7);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0(
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
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0(
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

MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_table_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
  MR_Word Preds_4,
  MR_Word ModuleName_5,
  MR_Word PredId_6)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_7;
    MR_Word Var_10;
    MR_Box conv0_PredInfo_7;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_4, ((MR_Box) (PredId_6)), &conv0_PredInfo_7);
    PredInfo_7 = ((MR_Word) (conv0_PredInfo_7));
    Var_10 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_5, Var_10);
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
  MR_Word PartialQualInfo_7,
  MR_Word Preds_8,
  MR_Word AccessibilityTable_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredicateTable_0_19,
  MR_Word * STATE_VARIABLE_PredicateTable_20)
{
  {
    MR_Word PredInfo_12;
    MR_Word Access_13;
    MR_Word Unqualified_14;
    MR_Word PartiallyQualified_15;
    MR_Word NeedQual_16;
    MR_Word MaybeQualInfo_17;
    MR_Word Var_21;
    MR_Box conv0_PredInfo_12;
    MR_Box conv1_Access_13;
    MR_Word Var_18;

    conv0_PredInfo_12 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_8, ((MR_Box) (PredId_10)));
    PredInfo_12 = ((MR_Word) (conv0_PredInfo_12));
    conv1_Access_13 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0), AccessibilityTable_9, ((MR_Box) (PredId_10)));
    Access_13 = ((MR_Word) (conv1_Access_13));
    Unqualified_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Access_13, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    PartiallyQualified_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Access_13, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Unqualified_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NeedQual_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        NeedQual_16 = (MR_Integer) 1;
        break;
    }
    switch (PartiallyQualified_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeQualInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeQualInfo_17, 0) = ((MR_Box) (PartialQualInfo_7));
        }
        break;
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (PredId_10));
    }
    hlds__pred_table__do_predicate_table_insert_7_p_0(Var_21, PredInfo_12, NeedQual_16, MaybeQualInfo_17, &Var_18, STATE_VARIABLE_PredicateTable_0_19, STATE_VARIABLE_PredicateTable_20);
  }
}

void MR_CALL 
hlds__pred_table__get_next_pred_id_2_p_0(
  MR_Word PredTable_3,
  MR_Word * NextPredId_4)
{
  *NextPredId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredTable_3, (MR_Integer) 1))));
}

void MR_CALL 
hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(
  MR_Word Module_9,
  MR_Word ModuleName_10,
  MR_String ProcName_11,
  MR_Word PredOrFunc_12,
  MR_Integer Arity_13,
  MR_Word ModeNo_14,
  MR_Word * PredId_15,
  MR_Integer * ProcId_16)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_17;
    MR_Word PredInfo_20;
    MR_Word ProcIds_21;
    MR_Word PredIdPrime_19;
    MR_Word PredIds_18;
    MR_Word Var_26;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(Module_9, &PredTable_17);
    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredTable_17, (MR_Integer) 0, ModuleName_10, ProcName_11, Arity_13, &PredIds_18);
        break;
      case (MR_Integer) 0:
        hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredTable_17, (MR_Integer) 0, ModuleName_10, ProcName_11, Arity_13, &PredIds_18);
        break;
    }
    succeeded = (PredIds_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredIdPrime_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_18, (MR_Integer) 1))));
      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *PredId_15 = PredIdPrime_19;
    else
    {
      MR_Word PredIdPrime_72;
      MR_Word Var_33;
      MR_Word PredIds_70;

      switch (PredOrFunc_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) Arity_13 - (MR_Unsigned) 1);

            hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredTable_17, (MR_Integer) 0, ModuleName_10, ProcName_11, Var_28, &PredIds_70);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Arity_13 - (MR_Unsigned) 1);

            hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredTable_17, (MR_Integer) 0, ModuleName_10, ProcName_11, Var_31, &PredIds_70);
          }
          break;
      }
      succeeded = (PredIds_70 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        PredIdPrime_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_70, (MR_Integer) 0))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_70, (MR_Integer) 1))));
        succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        *PredId_15 = PredIdPrime_72;
      else
      {
        MR_String Var_35;
        MR_String Var_39;
        MR_String Var_76;
        MR_String Var_84;
        MR_String Var_85;
        MR_String Var_87;
        MR_String Var_88;

        Var_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_6[0]), Arity_13, &Var_76);
        Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_76);
        Var_85 = mercury__string__f_43_43_2_f_0(ProcName_11, Var_84);
        Var_87 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_85);
        Var_88 = mercury__string__f_43_43_2_f_0(Var_39, Var_87);
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t locate ", Var_88);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", Var_35);
          return;
        }
      }
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(Module_9, *PredId_15, &PredInfo_20);
    ProcIds_21 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_20);
    if ((ModeNo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer ProcId0_22;
      MR_Word Var_58;

      succeeded = (ProcIds_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ProcId0_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_21, (MR_Integer) 0))));
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_21, (MR_Integer) 1))));
        succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        *ProcId_16 = ProcId0_22;
      else
      {
        MR_String Var_60;
        MR_String Var_64;
        MR_String Var_90;
        MR_String Var_98;
        MR_String Var_99;
        MR_String Var_101;
        MR_String Var_102;

        Var_64 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_6[0]), Arity_13, &Var_90);
        Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_90);
        Var_99 = mercury__string__f_43_43_2_f_0(ProcName_11, Var_98);
        Var_101 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_99);
        Var_102 = mercury__string__f_43_43_2_f_0(Var_64, Var_101);
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "expected single mode for ", Var_102);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", Var_60);
          return;
        }
      }
    }
    else
    {
      MR_Integer N_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ModeNo_14, (MR_Integer) 0))));
      MR_Integer ProcId0_73;
      MR_Box conv0_ProcId0_73;

      succeeded = mercury__list__index0_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds_21, N_23, &conv0_ProcId0_73);
      if (succeeded)
      {
        ProcId0_73 = ((MR_Integer) (conv0_ProcId0_73));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        *ProcId_16 = ProcId0_73;
      else
      {
        MR_String Var_46;
        MR_String Var_52;
        MR_String Var_104;
        MR_String Var_112;
        MR_String Var_113;
        MR_String Var_115;
        MR_String Var_116;
        MR_String Var_118;
        MR_String Var_119;
        MR_String Var_126;

        Var_52 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_6[0]), Arity_13, &Var_104);
        Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_104);
        Var_113 = mercury__string__f_43_43_2_f_0(ProcName_11, Var_112);
        Var_115 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_113);
        Var_116 = mercury__string__f_43_43_2_f_0(Var_52, Var_115);
        Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_116);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_6[0]), N_23, &Var_119);
        Var_126 = mercury__string__f_43_43_2_f_0(Var_119, Var_118);
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "there is no mode ", Var_126);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", Var_46);
          return;
        }
      }
    }
  }
}

void MR_CALL 
hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0(
  MR_Word IsFullyQualified_12,
  MR_Word SymName_13,
  MR_Word PredOrFunc_14,
  MR_Word TVarSet_15,
  MR_Word ExistQTVars_16,
  MR_Word ArgTypes_17,
  MR_Word ExternalTypeParams_18,
  MR_Word ModuleInfo_19,
  MR_Word Context_20,
  MR_Word * PredId_21,
  MR_Integer * ProcId_22)
{
  {
    MR_bool succeeded;
    MR_Word PredId0_23;
    MR_Word PredicateTable_53;
    MR_Integer Arity_54;
    MR_Word PredIds_55;
    MR_Word _PredName_57;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_19, &PredicateTable_53);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_17, &Arity_54);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_53, IsFullyQualified_12, PredOrFunc_14, SymName_13, Arity_54, &PredIds_55);
    succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(ModuleInfo_19, PredIds_55, TVarSet_15, ExistQTVars_16, ArgTypes_17, ExternalTypeParams_18, (MR_Word) ((MR_Unsigned) 0U), Context_20, &PredId0_23, &_PredName_57);
    if (succeeded)
      *PredId_21 = PredId0_23;
    else
    {
      MR_Integer Arity_24;
      MR_String PredOrFuncStr_25;
      MR_String NameStr_26;
      MR_String ArityString_27;
      MR_String Msg_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_37;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_17, &Arity_24);
      PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_14);
      NameStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
      mercury__string__int_to_string_2_p_0(Arity_24, &ArityString_27);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ArityString_27));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[15])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "/"));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (NameStr_26));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "\n\140"));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (PredOrFuncStr_25));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "undefined/invalid "));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      mercury__string__append_list_2_p_0(Var_29, &Msg_28);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.pred_table.get_pred_id_and_proc_id_by_types\'/11", Msg_28);
        return;
      }
    }
    hlds__pred_table__get_single_proc_id_3_p_0(ModuleInfo_19, *PredId_21, ProcId_22);
  }
}

void MR_CALL 
hlds__pred_table__get_single_proc_id_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Integer * ProcId_6)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_7;
    MR_Word ProcIds_8;
    MR_Integer ProcId0_9;
    MR_Word Var_18;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
    ProcIds_8 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_7);
    succeeded = (ProcIds_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcId0_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_8, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_8, (MR_Integer) 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *ProcId_6 = ProcId0_9;
    else
    {
      MR_String Name_10;
      MR_Word PredOrFunc_11;
      MR_Integer Arity_12;
      MR_String PredOrFuncStr_13;
      MR_String ArityString_14;
      MR_String Message_15;

      Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
      PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
      Arity_12 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_7);
      PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_11);
      mercury__string__int_to_string_2_p_0(Arity_12, &ArityString_14);
      if ((ProcIds_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_35;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ArityString_14));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[9])));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "/"));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Name_10));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "\n\140"));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (PredOrFuncStr_13));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "cannot take address of "));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
        }
        mercury__string__append_list_2_p_0(Var_35, &Message_15);
      }
      else
      {
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ArityString_14));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[11])));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) "/"));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Name_10));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "\n\140"));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (PredOrFuncStr_13));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) ((MR_String) "taking address of "));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) ((MR_String) "sorry, not implemented: "));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
        }
        mercury__string__append_list_2_p_0(Var_19, &Message_15);
      }
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.pred_table.get_single_proc_id\'/3", Message_15);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
hlds__pred_table__get_pred_id_by_types_10_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word SymName_12,
  MR_Word PredOrFunc_13,
  MR_Word TVarSet_14,
  MR_Word ExistQTVars_15,
  MR_Word ArgTypes_16,
  MR_Word ExternalTypeParams_17,
  MR_Word ModuleInfo_18,
  MR_Word Context_19,
  MR_Word * PredId_20)
{
  {
    MR_bool succeeded;
    MR_Word PredicateTable_21;
    MR_Integer Arity_22;
    MR_Word PredIds_23;
    MR_Word _PredName_25;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_18, &PredicateTable_21);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_16, &Arity_22);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_21, IsFullyQualified_11, PredOrFunc_13, SymName_12, Arity_22, &PredIds_23);
    succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(ModuleInfo_18, PredIds_23, TVarSet_14, ExistQTVars_15, ArgTypes_16, ExternalTypeParams_17, (MR_Word) ((MR_Unsigned) 0U), Context_19, PredId_20, &_PredName_25);
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table__resolve_pred_overloading_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word CallerMarkers_12,
  MR_Word TVarSet_13,
  MR_Word ExistQTVars_14,
  MR_Word ArgTypes_15,
  MR_Word ExternalTypeParams_16,
  MR_Word Context_17,
  MR_Word PredName0_18,
  MR_Word * PredName_19,
  MR_Word * PredId_20)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_21;
    MR_Word IsFullyQualified_22;
    MR_Word PredIds_23;
    MR_Word PredId1_24;
    MR_Word PredName1_25;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredTable_21);
    IsFullyQualified_22 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(CallerMarkers_12);
    hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredTable_21, IsFullyQualified_22, PredName0_18, &PredIds_23);
    succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(ModuleInfo_11, PredIds_23, TVarSet_13, ExistQTVars_14, ArgTypes_15, ExternalTypeParams_16, (MR_Word) ((MR_Unsigned) 0U), Context_17, &PredId1_24, &PredName1_25);
    if (succeeded)
    {
      *PredId_20 = PredId1_24;
      *PredName_19 = PredName1_25;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.pred_table.resolve_pred_overloading\'/10", (MR_String) "type error in pred call: no matching pred");
        return;
      }
  }
}

MR_bool MR_CALL 
hlds__pred_table__find_matching_pred_id_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word HeadVar__2_2,
  MR_Word TVarSet_14,
  MR_Word ExistQTVars_15,
  MR_Word ArgTypes_16,
  MR_Word ExternalTypeParams_17,
  MR_Word MaybeConstraintSearch_18,
  MR_Word Context_19,
  MR_Word * ThePredId_20,
  MR_Word * PredName_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word PredId_12;
    MR_Word PredIds_13;
    MR_Word PredInfo_22;
    MR_Word PredTVarSet_23;
    MR_Word PredExistQVars0_24;
    MR_Word PredArgTypes0_25;
    MR_Word PredKindMap_26;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      PredIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_12, &PredInfo_22);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_22, &PredTVarSet_23, &PredExistQVars0_24, &PredArgTypes0_25);
      hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_22, &PredKindMap_26);
      succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(TVarSet_14, ExistQTVars_15, ArgTypes_16, ExternalTypeParams_17, PredTVarSet_23, PredKindMap_26, PredExistQVars0_24, PredArgTypes0_25);
      if (succeeded)
      {
        if ((MaybeConstraintSearch_18 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word ConstraintSearch_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstraintSearch_18, (MR_Integer) 0))));
          MR_Word ProgConstraints_28;
          MR_Word UnivConstraints_29;
          MR_Integer NumConstraints_31;
          MR_Word ProvenConstraints_32;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
          MR_Box conv1_ProvenConstraints_32;

          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_22, &ProgConstraints_28);
          UnivConstraints_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgConstraints_28, (MR_Integer) 0))));
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivConstraints_29, &NumConstraints_31);
          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ConstraintSearch_27, (MR_Integer) 1))));
          succeeded = func_0(((MR_Box) (ConstraintSearch_27)), ((MR_Box) (NumConstraints_31)), &conv1_ProvenConstraints_32);
          if (succeeded)
          {
            ProvenConstraints_32 = ((MR_Word) (conv1_ProvenConstraints_32));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = hlds__pred_table__univ_constraints_match_2_p_0(ProvenConstraints_32, UnivConstraints_29);
        }
      }
      if (succeeded)
      {
        MR_String PName_33;
        MR_Word Module_34;
        MR_Word OtherPredId_35;
        MR_Word _OtherPredName_36;

        PName_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_22);
        Module_34 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PredName_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_34));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PName_33));
        }
        succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(ModuleInfo_11, PredIds_13, TVarSet_14, ExistQTVars_15, ArgTypes_16, ExternalTypeParams_17, MaybeConstraintSearch_18, Context_19, &OtherPredId_35, &_OtherPredName_36);
        if (succeeded)
        {
          MR_Word OtherPredInfo_37;
          MR_Word PredCallId_38;
          MR_Word OtherPredCallId_39;
          MR_Word Globals_41;
          MR_Word Pieces_42;
          MR_Word Spec_43;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_55;
          MR_Word Var_56;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, OtherPredId_35, &OtherPredInfo_37);
          hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo_22, &PredCallId_38);
          hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(OtherPredInfo_37, &OtherPredCallId_39);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_41);
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (PredCallId_38));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (OtherPredCallId_39));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[7])));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[14])));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[13])));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Pieces_42, 1) = ((MR_Box) (Var_47));
          }
          {
            Spec_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10"));
            MR_hl_field(MR_mktag(1), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(MR_mktag(1), Spec_43, 3) = ((MR_Box) (Context_19));
            MR_hl_field(MR_mktag(1), Spec_43, 4) = ((MR_Box) (Pieces_42));
          }
          parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_41, Spec_43);
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10", (MR_String) "unresolvable predicate overloading");
        }
        else
          *ThePredId_20 = PredId_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = PredIds_13;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word TypeCtorInfo_11_11;
      MR_Word ProvenConstraint_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProvenConstraints_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CalleeConstraint_5;
      MR_Word CalleeConstraints_6;
      MR_Word ClassName_7;
      MR_Word ProvenArgTypes_8;
      MR_Integer Arity_9;
      MR_Word CalleeArgTypes_10;
      MR_Word Var_12;
      MR_Integer Var_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CalleeConstraint_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        CalleeConstraints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ClassName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProvenConstraint_3, (MR_Integer) 0))));
        ProvenArgTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProvenConstraint_3, (MR_Integer) 1))));
        TypeCtorInfo_11_11 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__list__length_2_p_0(TypeCtorInfo_11_11, ProvenArgTypes_8, &Arity_9);
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeConstraint_5, (MR_Integer) 0))));
        CalleeArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeConstraint_5, (MR_Integer) 1))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassName_7, Var_12);
        if (succeeded)
        {
          mercury__list__length_2_p_0(TypeCtorInfo_11_11, CalleeArgTypes_10, &Var_13);
          succeeded = (Arity_9 == Var_13);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ProvenConstraints_4;
            next_value_of_HeadVar__2_2 = CalleeConstraints_6;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_insert_4_p_0(
  MR_Word PredInfo_5,
  MR_Word * PredId_6,
  MR_Word STATE_VARIABLE_PredicateTable_0_8,
  MR_Word * STATE_VARIABLE_PredicateTable_9)
{
  hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) ((MR_Unsigned) 0U), PredInfo_5, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_6, STATE_VARIABLE_PredicateTable_0_8, STATE_VARIABLE_PredicateTable_9);
}

void MR_CALL 
hlds__pred_table__predicate_table_insert_qual_6_p_0(
  MR_Word PredInfo_7,
  MR_Word NeedQual_8,
  MR_Word QualInfo_9,
  MR_Word * PredId_10,
  MR_Word STATE_VARIABLE_PredicateTable_0_12,
  MR_Word * STATE_VARIABLE_PredicateTable_13)
{
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (QualInfo_9));
    }
    hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) ((MR_Unsigned) 0U), PredInfo_7, NeedQual_8, Var_15, PredId_10, STATE_VARIABLE_PredicateTable_0_12, STATE_VARIABLE_PredicateTable_13);
  }
}

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_MNA_Index_16;

    hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_MNA_Index_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_MNA_Index_16));
  }
}

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
  MR_Word MaybePredId_8,
  MR_Word PredInfo_9,
  MR_Word NeedQual_10,
  MR_Word MaybeQualInfo_11,
  MR_Word * PredId_12,
  MR_Word STATE_VARIABLE_PredicateTable_0_39,
  MR_Word * STATE_VARIABLE_PredicateTable_40)
{
  {
    MR_Word Preds0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 0))));
    MR_Word NextPredId0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 1))));
    MR_Word ValidPredIds0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 2))));
    MR_Word AccessibilityTable0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 3))));
    MR_Word Pred_N_Index0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 4))));
    MR_Word Pred_NA_Index0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 5))));
    MR_Word Pred_MNA_Index0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 6))));
    MR_Word Func_N_Index0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 7))));
    MR_Word Func_NA_Index0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 8))));
    MR_Word Func_MNA_Index0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 9))));
    MR_Word Module_24;
    MR_String Name_25;
    MR_Integer Arity_26;
    MR_Word NextPredId_27;
    MR_Word PredOrFunc_28;
    MR_Word AccessibilityTable_29;
    MR_Word Pred_N_Index_30;
    MR_Word Pred_NA_Index_31;
    MR_Word Pred_MNA_Index_32;
    MR_Word Func_N_Index_33;
    MR_Word Func_NA_Index_34;
    MR_Word Func_MNA_Index_35;
    MR_Word Preds_37;
    MR_Word ValidPredIds_38;

    Module_24 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_9);
    Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_9);
    Arity_26 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_9);
    if ((MaybePredId_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *PredId_12 = NextPredId0_15;
      hlds__hlds_pred__next_pred_id_2_p_0(*PredId_12, &NextPredId_27);
    }
    else
    {
      *PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_8, (MR_Integer) 0))));
      NextPredId_27 = NextPredId0_15;
    }
    PredOrFunc_28 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
    switch (PredOrFunc_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer FuncArity_36 = (MR_Integer) ((MR_Unsigned) Arity_26 - (MR_Unsigned) 1);
          MR_Word AccessibleByUnqualifiedName_64;
          MR_Word AccessibleByPartiallyQualifiedNames_67;
          MR_Word Access_68;
          MR_Word STATE_VARIABLE_MNA_Index_43_73;

          switch (NeedQual_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NA_63;

                mercury__multi_map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (Name_25)), ((MR_Box) (*PredId_12)), Func_N_Index0_21, &Func_N_Index_33);
                {
                  NA_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), NA_63, 0) = ((MR_Box) (Name_25));
                  MR_hl_field(MR_mktag(0), NA_63, 1) = ((MR_Box) (FuncArity_36));
                }
                mercury__multi_map__set_4_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (NA_63)), ((MR_Box) (*PredId_12)), Func_NA_Index0_22, &Func_NA_Index_34);
                AccessibleByUnqualifiedName_64 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                AccessibleByUnqualifiedName_64 = (MR_Integer) 0;
                Func_N_Index_33 = Func_N_Index0_21;
                Func_NA_Index_34 = Func_NA_Index0_22;
              }
              break;
          }
          if ((MaybeQualInfo_11 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 0;
            STATE_VARIABLE_MNA_Index_43_73 = Func_MNA_Index0_23;
          }
          else
          {
            MR_Word QualInfo_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeQualInfo_11, (MR_Integer) 0))));
            MR_Word PartialQuals_66;
            MR_Word Var_72;
            MR_Box conv1_STATE_VARIABLE_MNA_Index_43_73;

            parse_tree__module_qual__get_partial_qualifiers_4_p_0((MR_Integer) 0, Module_24, QualInfo_65, &PartialQuals_66);
            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (hlds__pred_table__do_predicate_table_insert_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Name_25));
              MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (FuncArity_36));
              MR_hl_field(MR_mktag(0), Var_72, 5) = ((MR_Box) (*PredId_12));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[1]), Var_72, PartialQuals_66, ((MR_Box) (Func_MNA_Index0_23)), &conv1_STATE_VARIABLE_MNA_Index_43_73);
            STATE_VARIABLE_MNA_Index_43_73 = ((MR_Word) (conv1_STATE_VARIABLE_MNA_Index_43_73));
            AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 1;
          }
          hlds__pred_table__insert_into_mna_index_6_p_0(Name_25, FuncArity_36, *PredId_12, Module_24, STATE_VARIABLE_MNA_Index_43_73, &Func_MNA_Index_35);
          {
            Access_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Access_68, 0) = (MR_Box) (((((MR_Unsigned) (AccessibleByUnqualifiedName_64) << 1)) | (MR_Unsigned) (AccessibleByPartiallyQualifiedNames_67)));
          }
          mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0), ((MR_Box) (*PredId_12)), ((MR_Box) (Access_68)), AccessibilityTable0_17, &AccessibilityTable_29);
          Pred_N_Index_30 = Pred_N_Index0_18;
          Pred_NA_Index_31 = Pred_NA_Index0_19;
          Pred_MNA_Index_32 = Pred_MNA_Index0_20;
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__pred_table__predicate_table_do_insert_14_p_0(Module_24, Name_25, Arity_26, NeedQual_10, MaybeQualInfo_11, *PredId_12, AccessibilityTable0_17, &AccessibilityTable_29, Pred_N_Index0_18, &Pred_N_Index_30, Pred_NA_Index0_19, &Pred_NA_Index_31, Pred_MNA_Index0_20, &Pred_MNA_Index_32);
          Func_N_Index_33 = Func_N_Index0_21;
          Func_NA_Index_34 = Func_NA_Index0_22;
          Func_MNA_Index_35 = Func_MNA_Index0_23;
        }
        break;
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (*PredId_12)), ((MR_Box) (PredInfo_9)), Preds0_14, &Preds_37);
    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (*PredId_12)), ValidPredIds0_16, &ValidPredIds_38);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PredicateTable_40 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Preds_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NextPredId_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValidPredIds_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (AccessibilityTable_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Pred_N_Index_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Pred_NA_Index_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Pred_MNA_Index_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Func_N_Index_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Func_NA_Index_34));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Func_MNA_Index_35));
    }
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_MNA_Index_16;

    hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_MNA_Index_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_MNA_Index_16));
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
  MR_Word Module_15,
  MR_String Name_16,
  MR_Integer Arity_17,
  MR_Word NeedQual_18,
  MR_Word MaybeQualInfo_19,
  MR_Word PredId_20,
  MR_Word STATE_VARIABLE_AccessibilityTable_0_31,
  MR_Word * STATE_VARIABLE_AccessibilityTable_32,
  MR_Word STATE_VARIABLE_N_Index_0_33,
  MR_Word * STATE_VARIABLE_N_Index_34,
  MR_Word STATE_VARIABLE_NA_Index_0_35,
  MR_Word * STATE_VARIABLE_NA_Index_36,
  MR_Word STATE_VARIABLE_MNA_Index_0_37,
  MR_Word * STATE_VARIABLE_MNA_Index_38)
{
  {
    MR_Word AccessibleByUnqualifiedName_26;
    MR_Word AccessibleByPartiallyQualifiedNames_29;
    MR_Word Access_30;
    MR_Word STATE_VARIABLE_MNA_Index_43_43;

    switch (NeedQual_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word NA_25;

          mercury__multi_map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (Name_16)), ((MR_Box) (PredId_20)), STATE_VARIABLE_N_Index_0_33, STATE_VARIABLE_N_Index_34);
          {
            NA_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NA_25, 0) = ((MR_Box) (Name_16));
            MR_hl_field(MR_mktag(0), NA_25, 1) = ((MR_Box) (Arity_17));
          }
          mercury__multi_map__set_4_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (NA_25)), ((MR_Box) (PredId_20)), STATE_VARIABLE_NA_Index_0_35, STATE_VARIABLE_NA_Index_36);
          AccessibleByUnqualifiedName_26 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          AccessibleByUnqualifiedName_26 = (MR_Integer) 0;
          *STATE_VARIABLE_N_Index_34 = STATE_VARIABLE_N_Index_0_33;
          *STATE_VARIABLE_NA_Index_36 = STATE_VARIABLE_NA_Index_0_35;
        }
        break;
    }
    if ((MaybeQualInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 0;
      STATE_VARIABLE_MNA_Index_43_43 = STATE_VARIABLE_MNA_Index_0_37;
    }
    else
    {
      MR_Word QualInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeQualInfo_19, (MR_Integer) 0))));
      MR_Word PartialQuals_28;
      MR_Word Var_42;
      MR_Box conv1_STATE_VARIABLE_MNA_Index_43_43;

      parse_tree__module_qual__get_partial_qualifiers_4_p_0((MR_Integer) 0, Module_15, QualInfo_27, &PartialQuals_28);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (hlds__pred_table__predicate_table_do_insert_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Name_16));
        MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Arity_17));
        MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (PredId_20));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[1]), Var_42, PartialQuals_28, ((MR_Box) (STATE_VARIABLE_MNA_Index_0_37)), &conv1_STATE_VARIABLE_MNA_Index_43_43);
      STATE_VARIABLE_MNA_Index_43_43 = ((MR_Word) (conv1_STATE_VARIABLE_MNA_Index_43_43));
      AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 1;
    }
    hlds__pred_table__insert_into_mna_index_6_p_0(Name_16, Arity_17, PredId_20, Module_15, STATE_VARIABLE_MNA_Index_43_43, STATE_VARIABLE_MNA_Index_38);
    {
      Access_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Access_30, 0) = (MR_Box) (((((MR_Unsigned) (AccessibleByUnqualifiedName_26) << 1)) | (MR_Unsigned) (AccessibleByPartiallyQualifiedNames_29)));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0), ((MR_Box) (PredId_20)), ((MR_Box) (Access_30)), STATE_VARIABLE_AccessibilityTable_0_31, STATE_VARIABLE_AccessibilityTable_32);
  }
}

static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
  MR_String Name_7,
  MR_Integer Arity_8,
  MR_Word PredId_9,
  MR_Word Module_10,
  MR_Word STATE_VARIABLE_MNA_Index_0_15,
  MR_Word * STATE_VARIABLE_MNA_Index_16)
{
  {
    MR_bool succeeded;
    MR_Word ModuleAndName_12;
    MR_Word MN_Arities0_13;
    MR_Box conv0_MN_Arities0_13;

    {
      ModuleAndName_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModuleAndName_12, 0) = ((MR_Box) (Module_10));
      MR_hl_field(MR_mktag(0), ModuleAndName_12, 1) = ((MR_Box) (Name_7));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), STATE_VARIABLE_MNA_Index_0_15, ((MR_Box) (ModuleAndName_12)), &conv0_MN_Arities0_13);
    if (succeeded)
    {
      MN_Arities0_13 = ((MR_Word) (conv0_MN_Arities0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word MN_Arities_14;

      mercury__multi_map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (Arity_8)), ((MR_Box) (PredId_9)), MN_Arities0_13, &MN_Arities_14);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), ((MR_Box) (ModuleAndName_12)), ((MR_Box) (MN_Arities_14)), STATE_VARIABLE_MNA_Index_0_15, STATE_VARIABLE_MNA_Index_16);
    }
    else
    {
      MR_Word Var_18;
      MR_Word MN_Arities_21;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (PredId_9));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      MN_Arities_21 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), ((MR_Box) (Arity_8)), ((MR_Box) (Var_18)));
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), ((MR_Box) (ModuleAndName_12)), ((MR_Box) (MN_Arities_21)), STATE_VARIABLE_MNA_Index_0_15, STATE_VARIABLE_MNA_Index_16);
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word IsFullyQualified_7,
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word * PredIds_10)
{
  switch (PredOrFunc_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(PredicateTable_6, IsFullyQualified_7, SymName_9, PredIds_10);
      break;
    case (MR_Integer) 0:
      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredicateTable_6, IsFullyQualified_7, SymName_9, PredIds_10);
      break;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(
  MR_Word PredicateTable_7,
  MR_Word IsFullyQualified_8,
  MR_Word PredOrFunc_9,
  MR_Word SymName_10,
  MR_Integer Arity_11,
  MR_Word * PredIds_12)
{
  if (((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 1))
  {
    MR_Word Module_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_10, (MR_Integer) 0))));
    MR_String Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_10, (MR_Integer) 1))));

    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer FuncArity_23 = (MR_Integer) ((MR_Unsigned) Arity_11 - (MR_Unsigned) 1);

          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredicateTable_7, IsFullyQualified_8, Module_13, Name_14, FuncArity_23, PredIds_12);
        }
        break;
      case (MR_Integer) 0:
        hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredicateTable_7, IsFullyQualified_8, Module_13, Name_14, Arity_11, PredIds_12);
        break;
    }
  }
  else
  {
    MR_String Name_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_10, (MR_Integer) 0))));

    switch (IsFullyQualified_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *PredIds_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        switch (PredOrFunc_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer FuncArity_30 = (MR_Integer) ((MR_Unsigned) Arity_11 - (MR_Unsigned) 1);

              hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(PredicateTable_7, Name_15, FuncArity_30, PredIds_12);
            }
            break;
          case (MR_Integer) 0:
            hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(PredicateTable_7, Name_15, Arity_11, PredIds_12);
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_name_arity_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word PredOrFunc_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_Word * PredIds_10)
{
  switch (PredOrFunc_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer FuncArity_11 = (MR_Integer) ((MR_Unsigned) Arity_9 - (MR_Unsigned) 1);

        hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(PredicateTable_6, Name_8, FuncArity_11, PredIds_10);
      }
      break;
    case (MR_Integer) 0:
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(PredicateTable_6, Name_8, Arity_9, PredIds_10);
      break;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(
  MR_Word PredicateTable_8,
  MR_Word IsFullyQualified_9,
  MR_Word PredOrFunc_10,
  MR_Word Module_11,
  MR_String Name_12,
  MR_Integer Arity_13,
  MR_Word * PredIds_14)
{
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer FuncArity_15 = (MR_Integer) ((MR_Unsigned) Arity_13 - (MR_Unsigned) 1);

        hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredicateTable_8, IsFullyQualified_9, Module_11, Name_12, FuncArity_15, PredIds_14);
      }
      break;
    case (MR_Integer) 0:
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredicateTable_8, IsFullyQualified_9, Module_11, Name_12, Arity_13, PredIds_14);
      break;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(
  MR_Word PredicateTable_7,
  MR_Word IsFullyQualified_8,
  MR_Word Module_9,
  MR_String Name_10,
  MR_Integer Arity_11,
  MR_Word * PredIds_12)
{
  {
    MR_Word PredPredIds_13;
    MR_Word FuncPredIds_14;

    hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredicateTable_7, IsFullyQualified_8, Module_9, Name_10, Arity_11, &PredPredIds_13);
    hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredicateTable_7, IsFullyQualified_8, Module_9, Name_10, Arity_11, &FuncPredIds_14);
    *PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FuncPredIds_14, PredPredIds_13);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_arity_4_p_0(
  MR_Word PredicateTable_5,
  MR_String Name_6,
  MR_Integer Arity_7,
  MR_Word * PredIds_8)
{
  {
    MR_Word PredPredIds_9;
    MR_Word FuncPredIds_10;

    hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(PredicateTable_5, Name_6, Arity_7, &PredPredIds_9);
    hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(PredicateTable_5, Name_6, Arity_7, &FuncPredIds_10);
    *PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FuncPredIds_10, PredPredIds_9);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_3_p_0(
  MR_Word PredicateTable_4,
  MR_String FuncName_5,
  MR_Word * PredIds_6)
{
  {
    MR_bool succeeded;
    MR_Word FuncNameIndex_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_4, (MR_Integer) 7))));
    MR_Word PredIdsPrime_8;
    MR_Box conv0_PredIdsPrime_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), FuncNameIndex_7, ((MR_Box) (FuncName_5)), &conv0_PredIdsPrime_8);
    if (succeeded)
    {
      PredIdsPrime_8 = ((MR_Word) (conv0_PredIdsPrime_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PredIds_6 = PredIdsPrime_8;
    else
      *PredIds_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_3_p_0(
  MR_Word PredicateTable_4,
  MR_String PredName_5,
  MR_Word * PredIds_6)
{
  {
    MR_bool succeeded;
    MR_Word PredNameIndex_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_4, (MR_Integer) 4))));
    MR_Word PredIdsPrime_8;
    MR_Box conv0_PredIdsPrime_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), PredNameIndex_7, ((MR_Box) (PredName_5)), &conv0_PredIdsPrime_8);
    if (succeeded)
    {
      PredIdsPrime_8 = ((MR_Word) (conv0_PredIdsPrime_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PredIds_6 = PredIdsPrime_8;
    else
      *PredIds_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word IsFullyQualified_7,
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word * PredIds_10)
{
  if (((MR_tag((MR_Word) SymName_8)) == (MR_Integer) 1))
  {
    MR_Word Module_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 0))));
    MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 1))));

    hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredicateTable_6, IsFullyQualified_7, Module_12, Name_13, Arity_9, PredIds_10);
  }
  else
  {
    MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_8, (MR_Integer) 0))));

    switch (IsFullyQualified_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *PredIds_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(PredicateTable_6, Name_11, Arity_9, PredIds_10);
        break;
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word IsFullyQualified_7,
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word * PredIds_10)
{
  if (((MR_tag((MR_Word) SymName_8)) == (MR_Integer) 1))
  {
    MR_Word Module_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 0))));
    MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 1))));

    hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredicateTable_6, IsFullyQualified_7, Module_12, Name_13, Arity_9, PredIds_10);
  }
  else
  {
    MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_8, (MR_Integer) 0))));

    switch (IsFullyQualified_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *PredIds_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(PredicateTable_6, Name_11, Arity_9, PredIds_10);
        break;
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word IsFullyQualified_7,
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word * PredIds_10)
{
  if (((MR_tag((MR_Word) SymName_8)) == (MR_Integer) 1))
  {
    MR_Word Module_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 0))));
    MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 1))));
    MR_Word PredPredIds_20;
    MR_Word FuncPredIds_21;

    hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(PredicateTable_6, IsFullyQualified_7, Module_12, Name_13, Arity_9, &PredPredIds_20);
    hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredicateTable_6, IsFullyQualified_7, Module_12, Name_13, Arity_9, &FuncPredIds_21);
    *PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FuncPredIds_21, PredPredIds_20);
  }
  else
  {
    MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_8, (MR_Integer) 0))));

    switch (IsFullyQualified_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *PredIds_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredPredIds_27;
          MR_Word FuncPredIds_28;

          hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(PredicateTable_6, Name_11, Arity_9, &PredPredIds_27);
          hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(PredicateTable_6, Name_11, Arity_9, &FuncPredIds_28);
          *PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FuncPredIds_28, PredPredIds_27);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(
  MR_Word PredicateTable_7,
  MR_Word IsFullyQualified_8,
  MR_Word Module_9,
  MR_String FuncName_10,
  MR_Integer Arity_11,
  MR_Word * STATE_VARIABLE_PredIds_16)
{
  {
    MR_bool succeeded;
    MR_Word F_MNA_Index_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_7, (MR_Integer) 9))));
    MR_Word ModuleAndName_14;
    MR_Word STATE_VARIABLE_PredIds_17_17;
    MR_Word TypeInfo_32_32;
    MR_Word ArityIndex_15;
    MR_Box conv0_ArityIndex_15;
    MR_Box conv1_STATE_VARIABLE_PredIds_17_17;

    {
      ModuleAndName_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModuleAndName_14, 0) = ((MR_Box) (Module_9));
      MR_hl_field(MR_mktag(0), ModuleAndName_14, 1) = ((MR_Box) (FuncName_10));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), F_MNA_Index_13, ((MR_Box) (ModuleAndName_14)), &conv0_ArityIndex_15);
    if (succeeded)
    {
      ArityIndex_15 = ((MR_Word) (conv0_ArityIndex_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_32_32 = (MR_Word) (&hlds__pred_table_scalar_common_1[0]);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_32_32, ArityIndex_15, Arity_11, &conv1_STATE_VARIABLE_PredIds_17_17);
      if (succeeded)
      {
        STATE_VARIABLE_PredIds_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_PredIds_17_17));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      switch (IsFullyQualified_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Preds_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_7, (MR_Integer) 0))));
            MR_Word Var_44;

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Preds_41));
              MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Module_9));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_44, STATE_VARIABLE_PredIds_17_17, STATE_VARIABLE_PredIds_16);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_PredIds_16 = STATE_VARIABLE_PredIds_17_17;
          break;
      }
    else
      *STATE_VARIABLE_PredIds_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(
  MR_Word PredicateTable_7,
  MR_Word IsFullyQualified_8,
  MR_Word Module_9,
  MR_String PredName_10,
  MR_Integer Arity_11,
  MR_Word * STATE_VARIABLE_PredIds_16)
{
  {
    MR_bool succeeded;
    MR_Word P_MNA_Index_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_7, (MR_Integer) 6))));
    MR_Word ModuleAndName_14;
    MR_Word STATE_VARIABLE_PredIds_17_17;
    MR_Word TypeInfo_32_32;
    MR_Word ArityIndex_15;
    MR_Box conv0_ArityIndex_15;
    MR_Box conv1_STATE_VARIABLE_PredIds_17_17;

    {
      ModuleAndName_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModuleAndName_14, 0) = ((MR_Box) (Module_9));
      MR_hl_field(MR_mktag(0), ModuleAndName_14, 1) = ((MR_Box) (PredName_10));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), P_MNA_Index_13, ((MR_Box) (ModuleAndName_14)), &conv0_ArityIndex_15);
    if (succeeded)
    {
      ArityIndex_15 = ((MR_Word) (conv0_ArityIndex_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_32_32 = (MR_Word) (&hlds__pred_table_scalar_common_1[0]);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_32_32, ArityIndex_15, Arity_11, &conv1_STATE_VARIABLE_PredIds_17_17);
      if (succeeded)
      {
        STATE_VARIABLE_PredIds_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_PredIds_17_17));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      switch (IsFullyQualified_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Preds_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_7, (MR_Integer) 0))));
            MR_Word Var_44;

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Preds_41));
              MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Module_9));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_44, STATE_VARIABLE_PredIds_17_17, STATE_VARIABLE_PredIds_16);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_PredIds_16 = STATE_VARIABLE_PredIds_17_17;
          break;
      }
    else
      *STATE_VARIABLE_PredIds_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(
  MR_Word PredicateTable_5,
  MR_String FuncName_6,
  MR_Integer Arity_7,
  MR_Word * PredIds_8)
{
  {
    MR_bool succeeded;
    MR_Word FuncNameArityIndex_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 8))));
    MR_Word NA_10;
    MR_Word PredIdsPrime_11;
    MR_Box conv0_PredIdsPrime_11;

    {
      NA_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NA_10, 0) = ((MR_Box) (FuncName_6));
      MR_hl_field(MR_mktag(0), NA_10, 1) = ((MR_Box) (Arity_7));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), FuncNameArityIndex_9, ((MR_Box) (NA_10)), &conv0_PredIdsPrime_11);
    if (succeeded)
    {
      PredIdsPrime_11 = ((MR_Word) (conv0_PredIdsPrime_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PredIds_8 = PredIdsPrime_11;
    else
      *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(
  MR_Word PredicateTable_5,
  MR_String PredName_6,
  MR_Integer Arity_7,
  MR_Word * PredIds_8)
{
  {
    MR_bool succeeded;
    MR_Word PredNameArityIndex_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 5))));
    MR_Word NA_10;
    MR_Word PredIdsPrime_11;
    MR_Box conv0_PredIdsPrime_11;

    {
      NA_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NA_10, 0) = ((MR_Box) (PredName_6));
      MR_hl_field(MR_mktag(0), NA_10, 1) = ((MR_Box) (Arity_7));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), PredNameArityIndex_9, ((MR_Box) (NA_10)), &conv0_PredIdsPrime_11);
    if (succeeded)
    {
      PredIdsPrime_11 = ((MR_Word) (conv0_PredIdsPrime_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PredIds_8 = PredIdsPrime_11;
    else
      *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(
  MR_Word PredicateTable_5,
  MR_Word IsFullyQualified_6,
  MR_Word SymName_7,
  MR_Word * PredIds_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
    {
      MR_Word Module_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 0))));
      MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 1))));
      MR_Word Func_MNA_Index_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 9))));
      MR_Word ModuleAndName_18;
      MR_Word Arities_19;
      MR_Box conv0_Arities_19;

      {
        ModuleAndName_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModuleAndName_18, 0) = ((MR_Box) (Module_10));
        MR_hl_field(MR_mktag(0), ModuleAndName_18, 1) = ((MR_Box) (Name_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), Func_MNA_Index_17, ((MR_Box) (ModuleAndName_18)), &conv0_Arities_19);
      if (succeeded)
      {
        Arities_19 = ((MR_Word) (conv0_Arities_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredIdLists_20;
        MR_Word PredIds0_21;

        mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Arities_19, &PredIdLists_20);
        mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdLists_20, &PredIds0_21);
        switch (IsFullyQualified_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Preds_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 0))));
              MR_Word Var_47;

              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Preds_44));
                MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Module_10));
              }
              mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_47, PredIds0_21, PredIds_8);
            }
            break;
          case (MR_Integer) 1:
            *PredIds_8 = PredIds0_21;
            break;
        }
      }
      else
        *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_7, (MR_Integer) 0))));

      switch (IsFullyQualified_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word FuncNameIndex_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 7))));
            MR_Word PredIdsPrime_65;
            MR_Box conv1_PredIdsPrime_65;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), FuncNameIndex_64, ((MR_Box) (Name_9)), &conv1_PredIdsPrime_65);
            if (succeeded)
            {
              PredIdsPrime_65 = ((MR_Word) (conv1_PredIdsPrime_65));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              *PredIds_8 = PredIdsPrime_65;
            else
              *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(
  MR_Word PredicateTable_5,
  MR_Word IsFullyQualified_6,
  MR_Word SymName_7,
  MR_Word * PredIds_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
    {
      MR_Word Module_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 0))));
      MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 1))));
      MR_Word Pred_MNA_Index_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 6))));
      MR_Word ModuleAndName_18;
      MR_Word Arities_19;
      MR_Box conv0_Arities_19;

      {
        ModuleAndName_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModuleAndName_18, 0) = ((MR_Box) (Module_10));
        MR_hl_field(MR_mktag(0), ModuleAndName_18, 1) = ((MR_Box) (Name_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), Pred_MNA_Index_17, ((MR_Box) (ModuleAndName_18)), &conv0_Arities_19);
      if (succeeded)
      {
        Arities_19 = ((MR_Word) (conv0_Arities_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredIdLists_20;
        MR_Word PredIds0_21;

        mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Arities_19, &PredIdLists_20);
        mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdLists_20, &PredIds0_21);
        switch (IsFullyQualified_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Preds_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 0))));
              MR_Word Var_47;

              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Preds_44));
                MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Module_10));
              }
              mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_47, PredIds0_21, PredIds_8);
            }
            break;
          case (MR_Integer) 1:
            *PredIds_8 = PredIds0_21;
            break;
        }
      }
      else
        *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_7, (MR_Integer) 0))));

      switch (IsFullyQualified_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredNameIndex_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 4))));
            MR_Word PredIdsPrime_65;
            MR_Box conv1_PredIdsPrime_65;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), PredNameIndex_64, ((MR_Box) (Name_9)), &conv1_PredIdsPrime_65);
            if (succeeded)
            {
              PredIdsPrime_65 = ((MR_Word) (conv1_PredIdsPrime_65));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              *PredIds_8 = PredIdsPrime_65;
            else
              *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0(
  MR_Word PredicateTable_5,
  MR_Word IsFullyQualified_6,
  MR_Word SymName_7,
  MR_Word * PredIds_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
    {
      MR_Word Module_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 0))));
      MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 1))));
      MR_Word PredPredIds_17;
      MR_Word FuncPredIds_18;
      MR_Word Pred_MNA_Index_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 6))));
      MR_Word ModuleAndName_26;
      MR_Word Arities_27;
      MR_Box conv0_Arities_27;

      {
        ModuleAndName_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModuleAndName_26, 0) = ((MR_Box) (Module_10));
        MR_hl_field(MR_mktag(0), ModuleAndName_26, 1) = ((MR_Box) (Name_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), Pred_MNA_Index_25, ((MR_Box) (ModuleAndName_26)), &conv0_Arities_27);
      if (succeeded)
      {
        Arities_27 = ((MR_Word) (conv0_Arities_27));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredIdLists_28;
        MR_Word PredIds0_29;

        mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Arities_27, &PredIdLists_28);
        mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdLists_28, &PredIds0_29);
        switch (IsFullyQualified_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Preds_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_5, (MR_Integer) 0))));
              MR_Word Var_55;

              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_sym_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Preds_52));
                MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Module_10));
              }
              mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_55, PredIds0_29, &PredPredIds_17);
            }
            break;
          case (MR_Integer) 1:
            PredPredIds_17 = PredIds0_29;
            break;
        }
      }
      else
        PredPredIds_17 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(PredicateTable_5, IsFullyQualified_6, Module_10, Name_11, &FuncPredIds_18);
      *PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FuncPredIds_18, PredPredIds_17);
    }
    else
    {
      MR_String Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_7, (MR_Integer) 0))));

      switch (IsFullyQualified_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *PredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          hlds__pred_table__predicate_table_lookup_name_3_p_0(PredicateTable_5, Name_9, PredIds_8);
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word IsFullyQualified_7,
  MR_Word Module_8,
  MR_String FuncName_9,
  MR_Word * PredIds_10)
{
  {
    MR_bool succeeded;
    MR_Word Func_MNA_Index_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_6, (MR_Integer) 9))));
    MR_Word ModuleAndName_12;
    MR_Word Arities_13;
    MR_Box conv0_Arities_13;

    {
      ModuleAndName_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModuleAndName_12, 0) = ((MR_Box) (Module_8));
      MR_hl_field(MR_mktag(0), ModuleAndName_12, 1) = ((MR_Box) (FuncName_9));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), Func_MNA_Index_11, ((MR_Box) (ModuleAndName_12)), &conv0_Arities_13);
    if (succeeded)
    {
      Arities_13 = ((MR_Word) (conv0_Arities_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word PredIdLists_14;
      MR_Word PredIds0_15;

      mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Arities_13, &PredIdLists_14);
      mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdLists_14, &PredIds0_15);
      switch (IsFullyQualified_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Preds_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_6, (MR_Integer) 0))));
            MR_Word Var_41;

            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Preds_38));
              MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Module_8));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_41, PredIds0_15, PredIds_10);
          }
          break;
        case (MR_Integer) 1:
          *PredIds_10 = PredIds0_15;
          break;
      }
    }
    else
      *PredIds_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_3_p_0(
  MR_Word PredicateTable_4,
  MR_String Name_5,
  MR_Word * PredIds_6)
{
  {
    MR_bool succeeded;
    MR_Word PredPredIds_7;
    MR_Word FuncPredIds_8;
    MR_Word PredNameIndex_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_4, (MR_Integer) 4))));
    MR_Word FuncNameIndex_29;
    MR_Word PredIdsPrime_14;
    MR_Box conv0_PredIdsPrime_14;
    MR_Word PredIdsPrime_30;
    MR_Box conv1_PredIdsPrime_30;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), PredNameIndex_13, ((MR_Box) (Name_5)), &conv0_PredIdsPrime_14);
    if (succeeded)
    {
      PredIdsPrime_14 = ((MR_Word) (conv0_PredIdsPrime_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      PredPredIds_7 = PredIdsPrime_14;
    else
      PredPredIds_7 = (MR_Word) ((MR_Unsigned) 0U);
    FuncNameIndex_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_4, (MR_Integer) 7))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), FuncNameIndex_29, ((MR_Box) (Name_5)), &conv1_PredIdsPrime_30);
    if (succeeded)
    {
      PredIdsPrime_30 = ((MR_Word) (conv1_PredIdsPrime_30));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      FuncPredIds_8 = PredIdsPrime_30;
    else
      FuncPredIds_8 = (MR_Word) ((MR_Unsigned) 0U);
    *PredIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FuncPredIds_8, PredPredIds_7);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_remove_predicate_3_p_0(
  MR_Word PredId_4,
  MR_Word PredicateTable0_5,
  MR_Word * PredicateTable_6)
{
  {
    MR_Word Preds0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 0))));
    MR_Word NextPredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 1))));
    MR_Word ValidPredIds0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 2))));
    MR_Word AccessibilityTable0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 3))));
    MR_Word PredN0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 4))));
    MR_Word PredNA0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 5))));
    MR_Word PredMNA0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 6))));
    MR_Word FuncN0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 7))));
    MR_Word FuncNA0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 8))));
    MR_Word FuncMNA0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_5, (MR_Integer) 9))));
    MR_Word ValidPredIds_17;
    MR_Word PredInfo_18;
    MR_Word Preds_19;
    MR_Word AccessibilityTable_21;
    MR_Word Module_22;
    MR_String Name_23;
    MR_Integer Arity_24;
    MR_Word IsPredOrFunc_25;
    MR_Box conv0_PredInfo_18;
    MR_Box conv1_Var_20;

    mercury__set_tree234__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_4)), ValidPredIds0_9, &ValidPredIds_17);
    mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_4)), &conv0_PredInfo_18, Preds0_7, &Preds_19);
    PredInfo_18 = ((MR_Word) (conv0_PredInfo_18));
    mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0), ((MR_Box) (PredId_4)), &conv1_Var_20, AccessibilityTable0_10, &AccessibilityTable_21);
    Module_22 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_18);
    Name_23 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_18);
    Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_18);
    IsPredOrFunc_25 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_18);
    switch (IsPredOrFunc_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer FuncArity_29 = (MR_Integer) ((MR_Unsigned) Arity_24 - (MR_Unsigned) 1);
          MR_Word FuncN_30;
          MR_Word FuncNA_31;
          MR_Word FuncMNA_32;

          hlds__pred_table__predicate_table_remove_from_index_10_p_0(Module_22, Name_23, FuncArity_29, PredId_4, FuncN0_14, &FuncN_30, FuncNA0_15, &FuncNA_31, FuncMNA0_16, &FuncMNA_32);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
            *PredicateTable_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Preds_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NextPredId_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValidPredIds_17));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (AccessibilityTable_21));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PredN0_11));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (PredNA0_12));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (PredMNA0_13));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (FuncN_30));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (FuncNA_31));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (FuncMNA_32));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word PredN_26;
          MR_Word PredNA_27;
          MR_Word PredMNA_28;

          hlds__pred_table__predicate_table_remove_from_index_10_p_0(Module_22, Name_23, Arity_24, PredId_4, PredN0_11, &PredN_26, PredNA0_12, &PredNA_27, PredMNA0_13, &PredMNA_28);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
            *PredicateTable_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Preds_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NextPredId_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValidPredIds_17));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (AccessibilityTable_21));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PredN_26));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (PredNA_27));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (PredMNA_28));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (FuncN0_14));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (FuncNA0_15));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (FuncMNA0_16));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
  MR_Word Module_11,
  MR_String Name_12,
  MR_Integer Arity_13,
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_N_0_18,
  MR_Word * STATE_VARIABLE_N_19,
  MR_Word STATE_VARIABLE_NA_0_20,
  MR_Word * STATE_VARIABLE_NA_21,
  MR_Word STATE_VARIABLE_MNA_0_22,
  MR_Word * STATE_VARIABLE_MNA_23)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Arities0_67;
    MR_Word PredIds0_68;
    MR_Word PredIds_69;
    MR_Word NamePredIds0_36;
    MR_Box conv0_NamePredIds0_36;
    MR_Word NamePredIds0_51;
    MR_Box conv1_NamePredIds0_51;
    MR_Box conv2_Arities0_67;
    MR_Box conv3_PredIds0_68;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), STATE_VARIABLE_N_0_18, ((MR_Box) (Name_12)), &conv0_NamePredIds0_36);
    if (succeeded)
    {
      NamePredIds0_36 = ((MR_Word) (conv0_NamePredIds0_36));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NamePredIds_37;

      mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NamePredIds0_36, ((MR_Box) (PredId_14)), &NamePredIds_37);
      if ((NamePredIds_37 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), ((MR_Box) (Name_12)), STATE_VARIABLE_N_0_18, STATE_VARIABLE_N_19);
      else
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), ((MR_Box) (Name_12)), ((MR_Box) (NamePredIds_37)), STATE_VARIABLE_N_0_18, STATE_VARIABLE_N_19);
    }
    else
      *STATE_VARIABLE_N_19 = STATE_VARIABLE_N_0_18;
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Name_12));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Arity_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), STATE_VARIABLE_NA_0_20, ((MR_Box) (Var_25)), &conv1_NamePredIds0_51);
    if (succeeded)
    {
      NamePredIds0_51 = ((MR_Word) (conv1_NamePredIds0_51));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NamePredIds_52;

      mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NamePredIds0_51, ((MR_Box) (PredId_14)), &NamePredIds_52);
      if ((NamePredIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__map__delete_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), ((MR_Box) (Var_25)), STATE_VARIABLE_NA_0_20, STATE_VARIABLE_NA_21);
      else
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), ((MR_Box) (Var_25)), ((MR_Box) (NamePredIds_52)), STATE_VARIABLE_NA_0_20, STATE_VARIABLE_NA_21);
    }
    else
      *STATE_VARIABLE_NA_21 = STATE_VARIABLE_NA_0_20;
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Module_11));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Name_12));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), STATE_VARIABLE_MNA_0_22, ((MR_Box) (Var_27)), &conv2_Arities0_67);
    Arities0_67 = ((MR_Word) (conv2_Arities0_67));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&hlds__pred_table_scalar_common_1[0]), Arities0_67, Arity_13, &conv3_PredIds0_68);
    PredIds0_68 = ((MR_Word) (conv3_PredIds0_68));
    mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_68, ((MR_Box) (PredId_14)), &PredIds_69);
    if ((PredIds_69 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Arities_70;

      mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), ((MR_Box) (Arity_13)), Arities0_67, &Arities_70);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Arities_70);
      if (succeeded)
        mercury__map__delete_3_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), ((MR_Box) (Var_27)), STATE_VARIABLE_MNA_0_22, STATE_VARIABLE_MNA_23);
      else
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), ((MR_Box) (Var_27)), ((MR_Box) (Arities_70)), STATE_VARIABLE_MNA_0_22, STATE_VARIABLE_MNA_23);
    }
    else
    {
      MR_Word Arities_76;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&hlds__pred_table_scalar_common_1[0]), Arity_13, ((MR_Box) (PredIds_69)), Arities0_67, &Arities_76);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), ((MR_Box) (Var_27)), ((MR_Box) (Arities_76)), STATE_VARIABLE_MNA_0_22, STATE_VARIABLE_MNA_23);
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_make_pred_ids_invalid_3_p_0(
  MR_Word InvalidPredIds_4,
  MR_Word STATE_VARIABLE_PredicateTable_0_8,
  MR_Word * STATE_VARIABLE_PredicateTable_9)
{
  {
    MR_Word ValidPredIds0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2))));
    MR_Word ValidPredIds_7;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    mercury__set_tree234__delete_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), InvalidPredIds_4, ValidPredIds0_6, &ValidPredIds_7);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PredicateTable_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValidPredIds_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_make_pred_id_invalid_3_p_0(
  MR_Word InvalidPredId_4,
  MR_Word STATE_VARIABLE_PredicateTable_0_8,
  MR_Word * STATE_VARIABLE_PredicateTable_9)
{
  {
    MR_Word ValidPredIds0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2))));
    MR_Word ValidPredIds_7;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    mercury__set_tree234__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (InvalidPredId_4)), ValidPredIds0_6, &ValidPredIds_7);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PredicateTable_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValidPredIds_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(
  MR_Word PredicateTable_3,
  MR_Word * ValidPredIds_4)
{
  *ValidPredIds_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_3, (MR_Integer) 2))));
}

void MR_CALL 
hlds__pred_table__predicate_table_set_preds_3_p_0(
  MR_Word Preds_4,
  MR_Word STATE_VARIABLE_PredicateTable_0_6,
  MR_Word * STATE_VARIABLE_PredicateTable_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PredicateTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Preds_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
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
hlds__pred_table__predicate_table_get_preds_2_p_0(
  MR_Word PredicateTable_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable_3, (MR_Integer) 0))));
}

static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredicateTable_20;

    hlds__pred_table__reinsert_for_restrict_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredicateTable_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredicateTable_20));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0(
  MR_Word PartialQualInfo_5,
  MR_Word PredIds_6,
  MR_Word OrigPredicateTable_7,
  MR_Word * STATE_VARIABLE_PredicateTable_11)
{
  {
    MR_Word Preds_9;
    MR_Word AccessibilityTable_10;
    MR_Word STATE_VARIABLE_PredicateTable_12_12;
    MR_Word Var_13;
    MR_Word NextPredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigPredicateTable_7, (MR_Integer) 1))));
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Box conv1_STATE_VARIABLE_PredicateTable_11;

    Var_32 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0));
    Var_33 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0));
    Var_35 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]));
    Var_36 = mercury__map__init_0_f_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]));
    Var_37 = mercury__map__init_0_f_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]));
    Var_38 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]));
    Var_39 = mercury__map__init_0_f_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]));
    Var_40 = mercury__map__init_0_f_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]));
    {
      STATE_VARIABLE_PredicateTable_12_12 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 1) = ((MR_Box) (NextPredId_31));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 3) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 5) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 6) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 7) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 8) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredicateTable_12_12, 9) = ((MR_Box) (Var_40));
    }
    Preds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigPredicateTable_7, (MR_Integer) 0))));
    AccessibilityTable_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigPredicateTable_7, (MR_Integer) 3))));
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (hlds__pred_table__predicate_table_restrict_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (PartialQualInfo_5));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Preds_9));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (AccessibilityTable_10));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0), Var_13, PredIds_6, ((MR_Box) (STATE_VARIABLE_PredicateTable_12_12)), &conv1_STATE_VARIABLE_PredicateTable_11);
    *STATE_VARIABLE_PredicateTable_11 = ((MR_Word) (conv1_STATE_VARIABLE_PredicateTable_11));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_optimize_2_p_0(
  MR_Word PredicateTable0_3,
  MR_Word * PredicateTable_4)
{
  {
    MR_Word Preds_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 0))));
    MR_Word NextPredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 1))));
    MR_Word ValidPredIds_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 2))));
    MR_Word AccessibilityTable_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 3))));
    MR_Word Pred_N_Index0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 4))));
    MR_Word Pred_NA_Index0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 5))));
    MR_Word Pred_MNA_Index0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 6))));
    MR_Word Func_N_Index0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 7))));
    MR_Word Func_NA_Index0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 8))));
    MR_Word Func_MNA_Index0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredicateTable0_3, (MR_Integer) 9))));
    MR_Word Pred_N_Index_15;
    MR_Word Pred_NA_Index_16;
    MR_Word Pred_MNA_Index_17;
    MR_Word Func_N_Index_18;
    MR_Word Func_NA_Index_19;
    MR_Word Func_MNA_Index_20;

    mercury__map__optimize_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Pred_N_Index0_9, &Pred_N_Index_15);
    mercury__map__optimize_2_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Pred_NA_Index0_10, &Pred_NA_Index_16);
    mercury__map__optimize_2_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), Pred_MNA_Index0_11, &Pred_MNA_Index_17);
    mercury__map__optimize_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Func_N_Index0_12, &Func_N_Index_18);
    mercury__map__optimize_2_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), Func_NA_Index0_13, &Func_NA_Index_19);
    mercury__map__optimize_2_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), Func_MNA_Index0_14, &Func_MNA_Index_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *PredicateTable_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Preds_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NextPredId_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValidPredIds_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (AccessibilityTable_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Pred_N_Index_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Pred_NA_Index_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Pred_MNA_Index_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Func_N_Index_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Func_NA_Index_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Func_MNA_Index_20));
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_init_1_p_0(
  MR_Word * PredicateTable_2)
{
  {
    MR_Word Preds_3;
    MR_Word NextPredId_4;
    MR_Word ValidPredIds_5;
    MR_Word AccessibilityTable_6;
    MR_Word Pred_N_Index_7;
    MR_Word Pred_NA_Index_8;
    MR_Word Pred_MNA_Index_9;
    MR_Word Func_N_Index_10;
    MR_Word Func_NA_Index_11;
    MR_Word Func_MNA_Index_12;

    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), &Preds_3);
    NextPredId_4 = hlds__hlds_pred__initial_pred_id_0_f_0();
    ValidPredIds_5 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0), &AccessibilityTable_6);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), &Pred_N_Index_7);
    mercury__map__init_1_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), &Pred_NA_Index_8);
    mercury__map__init_1_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), &Pred_MNA_Index_9);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), &Func_N_Index_10);
    mercury__map__init_1_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0), (MR_Word) (&hlds__pred_table_scalar_common_1[0]), &Func_NA_Index_11);
    mercury__map__init_1_p_0((MR_Word) (&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0), (MR_Word) (&hlds__pred_table_scalar_common_2[0]), &Func_MNA_Index_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *PredicateTable_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Preds_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NextPredId_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValidPredIds_5));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (AccessibilityTable_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Pred_N_Index_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Pred_NA_Index_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Pred_MNA_Index_9));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Func_N_Index_10));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Func_NA_Index_11));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Func_MNA_Index_12));
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____accessibility_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____accessibility_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____constraint_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____constraint_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____is_fully_qualified_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____is_fully_qualified_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____mode_no_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____mode_no_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_and_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____module_and_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____module_and_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____module_and_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____module_name_arity_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____module_name_arity_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____name_accessibility_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____name_accessibility_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____name_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____name_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____name_arity_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____name_arity_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____name_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____name_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____pred_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____pred_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pred_table____Unify____predicate_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pred_table____Compare____predicate_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__pred_table__init(void)
{
}

void mercury__hlds__pred_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_accessibility_table_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_constraint_search_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_mode_no_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_module_and_name_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_module_name_arity_index_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_index_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_name_index_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_pred_table_0);
	MR_register_type_ctor_info(&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0);
}

void mercury__hlds__pred_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__pred_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.pred_table.
