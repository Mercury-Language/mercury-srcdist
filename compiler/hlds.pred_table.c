/*
** Automatically generated from `pred_table.m'
** by the Mercury compiler,
** version rotd-2017-01-16
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module hlds.pred_table. */
/* :- implementation. */

/*
INIT mercury__hlds__pred_table__init
ENDINIT
*/

#include "hlds.pred_table.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

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

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2];

static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2];

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

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2);

static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3);

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2);

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2);

static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
  MR_String hlds__pred_table__Name_7,
  MR_Integer hlds__pred_table__Arity_8,
  MR_Word hlds__pred_table__PredId_9,
  MR_Word hlds__pred_table__Module_10,
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15);

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box * hlds__pred_table__wrapper_arg_3);

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
  MR_Word hlds__pred_table__Module_15,
  MR_String hlds__pred_table__Name_16,
  MR_Integer hlds__pred_table__Arity_17,
  MR_Word hlds__pred_table__NeedQual_18,
  MR_Word hlds__pred_table__MaybeQualInfo_19,
  MR_Word hlds__pred_table__PredId_20,
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38);

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box * hlds__pred_table__wrapper_arg_3);

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
  MR_Word hlds__pred_table__MaybePredId_8,
  MR_Word hlds__pred_table__PredInfo_9,
  MR_Word hlds__pred_table__NeedQual_10,
  MR_Word hlds__pred_table__MaybeQualInfo_11,
  MR_Word * hlds__pred_table__PredId_12,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40);

static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
  MR_Word hlds__pred_table__PartialQualInfo_7,
  MR_Word hlds__pred_table__Preds_8,
  MR_Word hlds__pred_table__AccessibilityTable_9,
  MR_Word hlds__pred_table__PredId_10,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20);

static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
  MR_Word hlds__pred_table__Preds_4,
  MR_Word hlds__pred_table__ModuleName_5,
  MR_Word hlds__pred_table__PredId_6);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1);

static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
  MR_Word hlds__pred_table__PredicateTable_6,
  MR_Word hlds__pred_table__IsFullyQualified_7,
  MR_Word hlds__pred_table__Module_8,
  MR_String hlds__pred_table__FuncName_9,
  MR_Word * hlds__pred_table__PredIds_10);

static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
  MR_Word hlds__pred_table__Module_11,
  MR_String hlds__pred_table__Name_12,
  MR_Integer hlds__pred_table__Arity_13,
  MR_Word hlds__pred_table__PredId_14,
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1);

static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box * hlds__pred_table__wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_table_scalar_common_1[16][2];

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[7][3];

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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You need to use an explicit module qualifier."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\' with no modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "(use an explicit lambda expression instead)")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\' with multiple modes.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unresolved predicate overloading,"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "matched"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_table_scalar_common_2[0])),
    ((MR_Box) (&hlds__pred_table_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__pred_table_scalar_common_1[0]))
  },
  /* row 6 */
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__pred_table_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_table__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_accessibility_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____accessibility_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____accessibility_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "accessibility_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_constraint_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____constraint_search_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____constraint_search_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "constraint_search",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table____vti_pred_2builtin__type_ctor_info_int_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_0 = {
  (MR_String) "is_fully_qualified",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__pred_table__hlds__pred_table__enum_functor_desc_is_fully_qualified_0_1 = {
  (MR_String) "may_be_partially_qualified",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_table____Unify____is_fully_qualified_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____is_fully_qualified_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "is_fully_qualified",
  {     hlds__pred_table__hlds__pred_table__enum_name_ordered_is_fully_qualified_0 },
  {     hlds__pred_table__hlds__pred_table__enum_value_ordered_is_fully_qualified_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_is_fully_qualified_0
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0 = {
  (MR_String) "only_mode",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1 = {
  (MR_String) "mode_no",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__pred_table__hlds__pred_table__field_types_mode_no_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_mode_no_0_1
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_mode_no_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____mode_no_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____mode_no_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "mode_no",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_mode_no_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_mode_no_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_mode_no_0
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_module_name_arity_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____module_name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____module_name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "module_name_arity_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0[2] = {
  (MR_String) "accessible_by_unqualified_name",
  (MR_String) "accessible_by_partially_qualified_names"
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0 = {
  (MR_String) "access",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__pred_table__hlds__pred_table__field_types_name_accessibility_0_0,
  hlds__pred_table__hlds__pred_table__field_names_name_accessibility_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_accessibility_0_0
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_accessibility_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_accessibility_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_accessibility_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_accessibility",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_name_accessibility_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_accessibility_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_name_accessibility_0
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0 = {
  (MR_String) "name_arity",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__pred_table__hlds__pred_table__field_types_name_arity_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_name_arity_0_0
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_name_arity_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_name_arity_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_name_arity_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_name_arity_0
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_arity_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_arity_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_arity_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__pred_table__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_name_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____name_index_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____name_index_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "name_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_table__hlds__pred_table__type_ctor_info_pred_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_table____Unify____pred_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____pred_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "pred_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_PseudoTypeInfo hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__pred_table__type_ctor_info_name_accessibility_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2hlds__pred_table__type_ctor_info_name_arity_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__pred_table__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
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
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__pred_table__hlds__pred_table__field_types_predicate_table_0_0,
  hlds__pred_table__hlds__pred_table__field_names_predicate_table_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0[1] = {
  &hlds__pred_table__hlds__pred_table__du_functor_desc_predicate_table_0_0
};

static const MR_DuPtagLayout hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__pred_table__hlds__pred_table__du_stag_ordered_predicate_table_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_table____Unify____predicate_table_0_0_10001)),
  ((MR_Box) (hlds__pred_table____Compare____predicate_table_0_0_10001)),
  (MR_String) "hlds.pred_table",
  (MR_String) "predicate_table",
  {     hlds__pred_table__hlds__pred_table__du_name_ordered_predicate_table_0 },
  {     hlds__pred_table__hlds__pred_table__du_ptag_ordered_predicate_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__pred_table__hlds__pred_table__functor_number_map_predicate_table_0
};

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____accessibility_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____accessibility_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____constraint_search_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____constraint_search_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____is_fully_qualified_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____is_fully_qualified_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____mode_no_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____mode_no_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____module_name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____module_name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_accessibility_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____name_accessibility_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____name_arity_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_arity_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____name_arity_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____name_index_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____name_index_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____pred_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____pred_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0_10001(
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__succeeded = hlds__pred_table____Unify____predicate_table_0_0(((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0_10001(
  MR_Box * hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Word hlds__pred_table__conv0_HeadVar__1_1;

    {
      hlds__pred_table____Compare____predicate_table_0_0(&hlds__pred_table__conv0_HeadVar__1_1, ((MR_Word) hlds__pred_table__wrapper_arg_2), ((MR_Word) hlds__pred_table__wrapper_arg_3));
    }
    *hlds__pred_table__wrapper_arg_1 = ((MR_Box) (hlds__pred_table__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__pred_table____Compare____predicate_table_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_33 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
    MR_Integer hlds__pred_table__CastY_34 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_33 == hlds__pred_table__CastY_34);
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word hlds__pred_table__V_24_24;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], &hlds__pred_table__V_24_24, ((MR_Box) (hlds__pred_table__V_4_4)), ((MR_Box) (hlds__pred_table__V_14_14)));
        }
        hlds__pred_table__succeeded = (hlds__pred_table__V_24_24 == (MR_Integer) 0);
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
        if (hlds__pred_table__succeeded)
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_24_24;
        else
          {
            MR_Word hlds__pred_table__V_25_25;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&hlds__pred_table__V_25_25, hlds__pred_table__V_5_5, hlds__pred_table__V_15_15);
            }
            hlds__pred_table__succeeded = (hlds__pred_table__V_25_25 == (MR_Integer) 0);
            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
            if (hlds__pred_table__succeeded)
              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_25_25;
            else
              {
                MR_Word hlds__pred_table__V_26_26;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_1[2], &hlds__pred_table__V_26_26, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                }
                hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == (MR_Integer) 0);
                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
                if (hlds__pred_table__succeeded)
                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_26_26;
                else
                  {
                    MR_Word hlds__pred_table__V_27_27;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], &hlds__pred_table__V_27_27, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                    }
                    hlds__pred_table__succeeded = (hlds__pred_table__V_27_27 == (MR_Integer) 0);
                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
                    if (hlds__pred_table__succeeded)
                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_27_27;
                    else
                      {
                        MR_Word hlds__pred_table__V_28_28;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_28_28, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                        }
                        hlds__pred_table__succeeded = (hlds__pred_table__V_28_28 == (MR_Integer) 0);
                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
                        if (hlds__pred_table__succeeded)
                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_28_28;
                        else
                          {
                            MR_Word hlds__pred_table__V_29_29;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_29_29, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                            }
                            hlds__pred_table__succeeded = (hlds__pred_table__V_29_29 == (MR_Integer) 0);
                            hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
                            if (hlds__pred_table__succeeded)
                              *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_29_29;
                            else
                              {
                                MR_Word hlds__pred_table__V_30_30;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], &hlds__pred_table__V_30_30, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                }
                                hlds__pred_table__succeeded = (hlds__pred_table__V_30_30 == (MR_Integer) 0);
                                hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
                                if (hlds__pred_table__succeeded)
                                  *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_30_30;
                                else
                                  {
                                    MR_Word hlds__pred_table__V_31_31;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], &hlds__pred_table__V_31_31, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                    }
                                    hlds__pred_table__succeeded = (hlds__pred_table__V_31_31 == (MR_Integer) 0);
                                    hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
                                    if (hlds__pred_table__succeeded)
                                      *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_31_31;
                                    else
                                      {
                                        MR_Word hlds__pred_table__V_32_32;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], &hlds__pred_table__V_32_32, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
                                        }
                                        hlds__pred_table__succeeded = (hlds__pred_table__V_32_32 == (MR_Integer) 0);
                                        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
                                        if (hlds__pred_table__succeeded)
                                          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_32_32;
                                        else
                                          {
                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__V_13_13)), ((MR_Box) (hlds__pred_table__V_23_23)));
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

MR_bool MR_CALL 
hlds__pred_table____Unify____predicate_table_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_23 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
    MR_Integer hlds__pred_table__CastY_24 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_23 == hlds__pred_table__CastY_24);
    if (hlds__pred_table__succeeded)
      hlds__pred_table__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__pred_table__TypeInfo_27_27;
        MR_Word hlds__pred_table__TypeInfo_28_28;
        MR_Word hlds__pred_table__TypeInfo_29_29;
        MR_Word hlds__pred_table__TypeInfo_30_30;
        MR_Word hlds__pred_table__TypeInfo_31_31;
        MR_Word hlds__pred_table__TypeInfo_32_32;
        MR_Word hlds__pred_table__TypeInfo_33_33;
        MR_Word hlds__pred_table__TypeInfo_34_34;
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 9)));

        {
          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__V_3_3)), ((MR_Box) (hlds__pred_table__V_13_13)));
        }
        if (hlds__pred_table__succeeded)
          {
            {
              hlds__pred_table__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__pred_table__V_4_4, hlds__pred_table__V_14_14);
            }
            if (hlds__pred_table__succeeded)
              {
                hlds__pred_table__TypeInfo_27_27 = (MR_Word) &hlds__pred_table_scalar_common_1[2];
                {
                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_27_27, ((MR_Box) (hlds__pred_table__V_5_5)), ((MR_Box) (hlds__pred_table__V_15_15)));
                }
                if (hlds__pred_table__succeeded)
                  {
                    hlds__pred_table__TypeInfo_28_28 = (MR_Word) &hlds__pred_table_scalar_common_2[3];
                    {
                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_28_28, ((MR_Box) (hlds__pred_table__V_6_6)), ((MR_Box) (hlds__pred_table__V_16_16)));
                    }
                    if (hlds__pred_table__succeeded)
                      {
                        hlds__pred_table__TypeInfo_29_29 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
                        {
                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_29_29, ((MR_Box) (hlds__pred_table__V_7_7)), ((MR_Box) (hlds__pred_table__V_17_17)));
                        }
                        if (hlds__pred_table__succeeded)
                          {
                            hlds__pred_table__TypeInfo_30_30 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
                            {
                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_30_30, ((MR_Box) (hlds__pred_table__V_8_8)), ((MR_Box) (hlds__pred_table__V_18_18)));
                            }
                            if (hlds__pred_table__succeeded)
                              {
                                hlds__pred_table__TypeInfo_31_31 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
                                {
                                  hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_31_31, ((MR_Box) (hlds__pred_table__V_9_9)), ((MR_Box) (hlds__pred_table__V_19_19)));
                                }
                                if (hlds__pred_table__succeeded)
                                  {
                                    hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_2[5];
                                    {
                                      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_32_32, ((MR_Box) (hlds__pred_table__V_10_10)), ((MR_Box) (hlds__pred_table__V_20_20)));
                                    }
                                    if (hlds__pred_table__succeeded)
                                      {
                                        hlds__pred_table__TypeInfo_33_33 = (MR_Word) &hlds__pred_table_scalar_common_2[4];
                                        {
                                          hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_33_33, ((MR_Box) (hlds__pred_table__V_11_11)), ((MR_Box) (hlds__pred_table__V_21_21)));
                                        }
                                        if (hlds__pred_table__succeeded)
                                          {
                                            hlds__pred_table__TypeInfo_34_34 = (MR_Word) &hlds__pred_table_scalar_common_2[2];
                                            {
                                              hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0(hlds__pred_table__TypeInfo_34_34, ((MR_Box) (hlds__pred_table__V_12_12)), ((MR_Box) (hlds__pred_table__V_22_22)));
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
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table____Compare____pred_table_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__pred_table____Unify____pred_table_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

    {
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[6], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_index_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_index_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

    {
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[5], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_index_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_index_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

    {
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[4], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_arity_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String hlds__pred_table__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_String hlds__pred_table__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_4_4, hlds__pred_table__V_6_6);
        }
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
        if (hlds__pred_table__succeeded)
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_5_5, hlds__pred_table__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_arity_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
    if (hlds__pred_table__succeeded)
      hlds__pred_table__succeeded = MR_TRUE;
    else
      {
        MR_String hlds__pred_table__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__pred_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_String hlds__pred_table__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

        hlds__pred_table__succeeded = (strcmp(hlds__pred_table__V_3_3, hlds__pred_table__V_5_5) == 0);
        if (hlds__pred_table__succeeded)
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
      }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____name_accessibility_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_9 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
    MR_Integer hlds__pred_table__CastY_10 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_9 == hlds__pred_table__CastY_10);
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_8_8;
        MR_Integer hlds__pred_table__V_13_13 = (MR_Integer) hlds__pred_table__V_4_4;
        MR_Integer hlds__pred_table__V_14_14 = (MR_Integer) hlds__pred_table__V_6_6;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__pred_table__V_8_8, hlds__pred_table__V_13_13, hlds__pred_table__V_14_14);
        }
        hlds__pred_table__succeeded = (hlds__pred_table__V_8_8 == (MR_Integer) 0);
        hlds__pred_table__succeeded = !(hlds__pred_table__succeeded);
        if (hlds__pred_table__succeeded)
          *hlds__pred_table__HeadVar__1_1 = hlds__pred_table__V_8_8;
        else
          {
            MR_Integer hlds__pred_table__V_15_15 = (MR_Integer) hlds__pred_table__V_5_5;
            MR_Integer hlds__pred_table__V_16_16 = (MR_Integer) hlds__pred_table__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_15_15, hlds__pred_table__V_16_16);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____name_accessibility_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
    if (hlds__pred_table__succeeded)
      hlds__pred_table__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__pred_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));

        hlds__pred_table__succeeded = (hlds__pred_table__V_3_3 == hlds__pred_table__V_5_5);
        if (hlds__pred_table__succeeded)
          hlds__pred_table__succeeded = (hlds__pred_table__V_4_4 == hlds__pred_table__V_6_6);
      }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____module_name_arity_index_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____module_name_arity_index_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

    {
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[2], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table____Compare____mode_no_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
    MR_Integer hlds__pred_table__CastY_9 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_8 == hlds__pred_table__CastY_9);
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Integer hlds__pred_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__pred_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__pred_table__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Integer hlds__pred_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__V_11_11, hlds__pred_table__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__pred_table____Unify____mode_no_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__CastX_7 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
    MR_Integer hlds__pred_table__CastY_8 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

    hlds__pred_table__succeeded = (hlds__pred_table__CastX_7 == hlds__pred_table__CastY_8);
    if (hlds__pred_table__succeeded)
      hlds__pred_table__succeeded = MR_TRUE;
    else
    if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__pred_table__CastX_3 = (MR_Integer) hlds__pred_table__HeadVar__1_1;
        MR_Integer hlds__pred_table__CastY_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;

        hlds__pred_table__succeeded = (hlds__pred_table__CastY_4 == hlds__pred_table__CastX_3);
      }
    else
      {
        MR_Integer hlds__pred_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__pred_table__V_6_6;

        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
            hlds__pred_table__succeeded = (hlds__pred_table__V_5_5 == hlds__pred_table__V_6_6);
          }
      }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table____Compare____is_fully_qualified_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Integer hlds__pred_table__Cast_HeadVar1_4 = (MR_Integer) hlds__pred_table__HeadVar__2_2;
    MR_Integer hlds__pred_table__Cast_HeadVar2_5 = (MR_Integer) hlds__pred_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pred_table__HeadVar__1_1, hlds__pred_table__Cast_HeadVar1_4, hlds__pred_table__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__pred_table____Unify____is_fully_qualified_0_0(
  MR_Word hlds__pred_table__HeadVar__2_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_1 == hlds__pred_table__HeadVar__2_2);

    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table____Compare____constraint_search_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_3[0], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__pred_table____Unify____constraint_search_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

    {
      hlds__pred_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) hlds__pred_table__Cast_HeadVar1_3, (MR_Word) hlds__pred_table__Cast_HeadVar2_4);
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table____Compare____accessibility_table_0_0(
  MR_Word * hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__HeadVar__3_3)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_4 = hlds__pred_table__HeadVar__2_2;
    MR_Word hlds__pred_table__Cast_HeadVar2_5 = hlds__pred_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], hlds__pred_table__HeadVar__1_1, ((MR_Box) (hlds__pred_table__Cast_HeadVar1_4)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table____Unify____accessibility_table_0_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Cast_HeadVar1_3 = hlds__pred_table__HeadVar__1_1;
    MR_Word hlds__pred_table__Cast_HeadVar2_4 = hlds__pred_table__HeadVar__2_2;

    {
      hlds__pred_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pred_table_scalar_common_2[3], ((MR_Box) (hlds__pred_table__Cast_HeadVar1_3)), ((MR_Box) (hlds__pred_table__Cast_HeadVar2_4)));
    }
    return hlds__pred_table__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__pred_table__univ_constraints_match_2_p_0(
  MR_Word hlds__pred_table__HeadVar__1_1,
  MR_Word hlds__pred_table__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__pred_table__succeeded;

        if ((hlds__pred_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__pred_table__succeeded = (hlds__pred_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word hlds__pred_table__TypeCtorInfo_11_11;
            MR_Word hlds__pred_table__ProvenConstraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__pred_table__ProvenConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__pred_table__CalleeConstraint_5;
            MR_Word hlds__pred_table__CalleeConstraints_6;
            MR_Word hlds__pred_table__ClassName_7;
            MR_Word hlds__pred_table__ProvenArgTypes_8;
            MR_Integer hlds__pred_table__Arity_9;
            MR_Word hlds__pred_table__CalleeArgTypes_10;
            MR_Word hlds__pred_table__V_12_12;
            MR_Integer hlds__pred_table__V_13_13;

            hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__pred_table__succeeded)
              {
                hlds__pred_table__CalleeConstraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
                hlds__pred_table__CalleeConstraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
                hlds__pred_table__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 0)));
                hlds__pred_table__ProvenArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProvenConstraint_3, (MR_Integer) 1)));
                hlds__pred_table__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                {
                  mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__ProvenArgTypes_8, &hlds__pred_table__Arity_9);
                }
                hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 0)));
                hlds__pred_table__CalleeArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__CalleeConstraint_5, (MR_Integer) 1)));
                {
                  hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ClassName_7, hlds__pred_table__V_12_12);
                }
                if (hlds__pred_table__succeeded)
                  {
                    {
                      mercury__list__length_2_p_0(hlds__pred_table__TypeCtorInfo_11_11, hlds__pred_table__CalleeArgTypes_10, &hlds__pred_table__V_13_13);
                    }
                    hlds__pred_table__succeeded = (hlds__pred_table__Arity_9 == hlds__pred_table__V_13_13);
                    if (hlds__pred_table__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__pred_table__HeadVar__1__tmp_copy_1 = hlds__pred_table__ProvenConstraints_4;
                          MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__CalleeConstraints_6;

                          hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
                          hlds__pred_table__HeadVar__1_1 = hlds__pred_table__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return hlds__pred_table__succeeded;
      }
      break;
    }
}

static void MR_CALL 
hlds__pred_table__insert_into_mna_index_6_p_0(
  MR_String hlds__pred_table__Name_7,
  MR_Integer hlds__pred_table__Arity_8,
  MR_Word hlds__pred_table__PredId_9,
  MR_Word hlds__pred_table__Module_10,
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14,
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_15)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__MN_Arities0_12;
    MR_Word hlds__pred_table__V_16_16;
    MR_Box hlds__pred_table__conv0_MN_Arities0_12;

    {
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_10));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__Name_7));
    }
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_MN_Arities0_12);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__MN_Arities0_12 = ((MR_Word) hlds__pred_table__conv0_MN_Arities0_12);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      {
        MR_Word hlds__pred_table__MN_Arities_13;

        {
          mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__PredId_9)), hlds__pred_table__MN_Arities0_12, &hlds__pred_table__MN_Arities_13);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_16_16)), ((MR_Box) (hlds__pred_table__MN_Arities_13)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
        }
      }
    else
      {
        MR_Word hlds__pred_table__V_19_19;
        MR_Word hlds__pred_table__V_21_21;
        MR_Word hlds__pred_table__MN_Arities_23;

        {
          hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) (hlds__pred_table__PredId_9));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__pred_table__MN_Arities_23 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Arity_8)), ((MR_Box) (hlds__pred_table__V_19_19)));
        }
        {
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_7));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], ((MR_Box) (hlds__pred_table__V_21_21)), ((MR_Box) (hlds__pred_table__MN_Arities_23)), hlds__pred_table__STATE_VARIABLE_MNA_Index_0_14, hlds__pred_table__STATE_VARIABLE_MNA_Index_15);
        }
      }
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box * hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

    {
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_do_insert_14_p_0(
  MR_Word hlds__pred_table__Module_15,
  MR_String hlds__pred_table__Name_16,
  MR_Integer hlds__pred_table__Arity_17,
  MR_Word hlds__pred_table__NeedQual_18,
  MR_Word hlds__pred_table__MaybeQualInfo_19,
  MR_Word hlds__pred_table__PredId_20,
  MR_Word hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31,
  MR_Word * hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32,
  MR_Word hlds__pred_table__STATE_VARIABLE_N_Index_0_33,
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_Index_34,
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_Index_0_35,
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_Index_36,
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37,
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_Index_38)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__AccessibleByUnqualifiedName_26;
    MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_29;
    MR_Word hlds__pred_table__Access_30;
    MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_43_43;

    switch (hlds__pred_table__NeedQual_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__pred_table__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          MR_Word hlds__pred_table__NA_25;

          {
            mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_47_47, ((MR_Box) (hlds__pred_table__Name_16)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_N_Index_0_33, hlds__pred_table__STATE_VARIABLE_N_Index_34);
          }
          {
            hlds__pred_table__NA_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 0) = ((MR_Box) (hlds__pred_table__Name_16));
            MR_hl_field(MR_mktag(0), hlds__pred_table__NA_25, 1) = ((MR_Box) (hlds__pred_table__Arity_17));
          }
          {
            mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_47_47, ((MR_Box) (hlds__pred_table__NA_25)), ((MR_Box) (hlds__pred_table__PredId_20)), hlds__pred_table__STATE_VARIABLE_NA_Index_0_35, hlds__pred_table__STATE_VARIABLE_NA_Index_36);
          }
          hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__pred_table__AccessibleByUnqualifiedName_26 = (MR_Integer) 0;
          *hlds__pred_table__STATE_VARIABLE_N_Index_34 = hlds__pred_table__STATE_VARIABLE_N_Index_0_33;
          *hlds__pred_table__STATE_VARIABLE_NA_Index_36 = hlds__pred_table__STATE_VARIABLE_NA_Index_0_35;
        }
        break;
    }
    if ((hlds__pred_table__MaybeQualInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 0;
        hlds__pred_table__STATE_VARIABLE_MNA_Index_43_43 = hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37;
      }
    else
      {
        MR_Word hlds__pred_table__QualInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_19, (MR_Integer) 0)));
        MR_Word hlds__pred_table__PartialQuals_28;
        MR_Word hlds__pred_table__V_42_42;
        MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_43_43;

        {
          parse_tree__module_qual__get_partial_qualifiers_4_p_0((MR_Integer) 0, hlds__pred_table__Module_15, hlds__pred_table__QualInfo_27, &hlds__pred_table__PartialQuals_28);
        }
        {
          hlds__pred_table__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 1) = ((MR_Box) (hlds__pred_table__predicate_table_do_insert_14_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 3) = ((MR_Box) (hlds__pred_table__Name_16));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 4) = ((MR_Box) (hlds__pred_table__Arity_17));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_42_42, 5) = ((MR_Box) (hlds__pred_table__PredId_20));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_42_42, hlds__pred_table__PartialQuals_28, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_MNA_Index_0_37)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_43_43);
        }
        hlds__pred_table__STATE_VARIABLE_MNA_Index_43_43 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_43_43);
        hlds__pred_table__AccessibleByPartiallyQualifiedNames_29 = (MR_Integer) 1;
      }
    {
      hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_16, hlds__pred_table__Arity_17, hlds__pred_table__PredId_20, hlds__pred_table__Module_15, hlds__pred_table__STATE_VARIABLE_MNA_Index_43_43, hlds__pred_table__STATE_VARIABLE_MNA_Index_38);
    }
    {
      hlds__pred_table__Access_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_26));
      MR_hl_field(MR_mktag(0), hlds__pred_table__Access_30, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_29));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_20)), ((MR_Box) (hlds__pred_table__Access_30)), hlds__pred_table__STATE_VARIABLE_AccessibilityTable_0_31, hlds__pred_table__STATE_VARIABLE_AccessibilityTable_32);
    }
  }
}

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box * hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15;

    {
      hlds__pred_table__insert_into_mna_index_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15);
    }
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_MNA_Index_15));
  }
}

static void MR_CALL 
hlds__pred_table__do_predicate_table_insert_7_p_0(
  MR_Word hlds__pred_table__MaybePredId_8,
  MR_Word hlds__pred_table__PredInfo_9,
  MR_Word hlds__pred_table__NeedQual_10,
  MR_Word hlds__pred_table__MaybeQualInfo_11,
  MR_Word * hlds__pred_table__PredId_12,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_40)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__TypeCtorInfo_43_43;
    MR_Word hlds__pred_table__Preds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 0)));
    MR_Word hlds__pred_table__NextPredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 1)));
    MR_Word hlds__pred_table__ValidPredIds0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 2)));
    MR_Word hlds__pred_table__AccessibilityTable0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 3)));
    MR_Word hlds__pred_table__Pred_N_Index0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 4)));
    MR_Word hlds__pred_table__Pred_NA_Index0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 5)));
    MR_Word hlds__pred_table__Pred_MNA_Index0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 6)));
    MR_Word hlds__pred_table__Func_N_Index0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 7)));
    MR_Word hlds__pred_table__Func_NA_Index0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 8)));
    MR_Word hlds__pred_table__Func_MNA_Index0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_39, (MR_Integer) 9)));
    MR_Word hlds__pred_table__Module_24;
    MR_String hlds__pred_table__Name_25;
    MR_Integer hlds__pred_table__Arity_26;
    MR_Word hlds__pred_table__NextPredId_27;
    MR_Word hlds__pred_table__PredOrFunc_28;
    MR_Word hlds__pred_table__AccessibilityTable_29;
    MR_Word hlds__pred_table__Pred_N_Index_30;
    MR_Word hlds__pred_table__Pred_NA_Index_31;
    MR_Word hlds__pred_table__Pred_MNA_Index_32;
    MR_Word hlds__pred_table__Func_N_Index_33;
    MR_Word hlds__pred_table__Func_NA_Index_34;
    MR_Word hlds__pred_table__Func_MNA_Index_35;
    MR_Word hlds__pred_table__Preds_37;
    MR_Word hlds__pred_table__ValidPredIds_38;

    {
      hlds__pred_table__Module_24 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_9);
    }
    {
      hlds__pred_table__Name_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_9);
    }
    {
      hlds__pred_table__Arity_26 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_9);
    }
    if ((hlds__pred_table__MaybePredId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__pred_table__PredId_12 = hlds__pred_table__NextPredId0_15;
        {
          hlds__hlds_pred__next_pred_id_2_p_0(*hlds__pred_table__PredId_12, &hlds__pred_table__NextPredId_27);
        }
      }
    else
      {
        *hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybePredId_8, (MR_Integer) 0)));
        hlds__pred_table__NextPredId_27 = hlds__pred_table__NextPredId0_15;
      }
    {
      hlds__pred_table__PredOrFunc_28 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_9);
    }
    switch (hlds__pred_table__PredOrFunc_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__pred_table__FuncArity_36 = (hlds__pred_table__Arity_26 - (MR_Integer) 1);
          MR_Word hlds__pred_table__AccessibleByUnqualifiedName_64;
          MR_Word hlds__pred_table__AccessibleByPartiallyQualifiedNames_67;
          MR_Word hlds__pred_table__Access_68;
          MR_Word hlds__pred_table__STATE_VARIABLE_MNA_Index_43_73;

          switch (hlds__pred_table__NeedQual_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word hlds__pred_table__TypeCtorInfo_47_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
                MR_Word hlds__pred_table__NA_63;

                {
                  mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__pred_table__TypeCtorInfo_47_77, ((MR_Box) (hlds__pred_table__Name_25)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_N_Index0_21, &hlds__pred_table__Func_N_Index_33);
                }
                {
                  hlds__pred_table__NA_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 0) = ((MR_Box) (hlds__pred_table__Name_25));
                  MR_hl_field(MR_mktag(0), hlds__pred_table__NA_63, 1) = ((MR_Box) (hlds__pred_table__FuncArity_36));
                }
                {
                  mercury__multi_map__set_4_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, hlds__pred_table__TypeCtorInfo_47_77, ((MR_Box) (hlds__pred_table__NA_63)), ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__Func_NA_Index0_22, &hlds__pred_table__Func_NA_Index_34);
                }
                hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                hlds__pred_table__AccessibleByUnqualifiedName_64 = (MR_Integer) 0;
                hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
                hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
              }
              break;
          }
          if ((hlds__pred_table__MaybeQualInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 0;
              hlds__pred_table__STATE_VARIABLE_MNA_Index_43_73 = hlds__pred_table__Func_MNA_Index0_23;
            }
          else
            {
              MR_Word hlds__pred_table__QualInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_11, (MR_Integer) 0)));
              MR_Word hlds__pred_table__PartialQuals_66;
              MR_Word hlds__pred_table__V_72_72;
              MR_Box hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_43_73;

              {
                parse_tree__module_qual__get_partial_qualifiers_4_p_0((MR_Integer) 0, hlds__pred_table__Module_24, hlds__pred_table__QualInfo_65, &hlds__pred_table__PartialQuals_66);
              }
              {
                hlds__pred_table__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 1) = ((MR_Box) (hlds__pred_table__do_predicate_table_insert_7_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 3) = ((MR_Box) (hlds__pred_table__Name_25));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 4) = ((MR_Box) (hlds__pred_table__FuncArity_36));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_72_72, 5) = ((MR_Box) (*hlds__pred_table__PredId_12));
              }
              {
                mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__pred_table_scalar_common_2[2], hlds__pred_table__V_72_72, hlds__pred_table__PartialQuals_66, ((MR_Box) (hlds__pred_table__Func_MNA_Index0_23)), &hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_43_73);
              }
              hlds__pred_table__STATE_VARIABLE_MNA_Index_43_73 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_MNA_Index_43_73);
              hlds__pred_table__AccessibleByPartiallyQualifiedNames_67 = (MR_Integer) 1;
            }
          {
            hlds__pred_table__insert_into_mna_index_6_p_0(hlds__pred_table__Name_25, hlds__pred_table__FuncArity_36, *hlds__pred_table__PredId_12, hlds__pred_table__Module_24, hlds__pred_table__STATE_VARIABLE_MNA_Index_43_73, &hlds__pred_table__Func_MNA_Index_35);
          }
          {
            hlds__pred_table__Access_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 0) = ((MR_Box) (hlds__pred_table__AccessibleByUnqualifiedName_64));
            MR_hl_field(MR_mktag(0), hlds__pred_table__Access_68, 1) = ((MR_Box) (hlds__pred_table__AccessibleByPartiallyQualifiedNames_67));
          }
          {
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__Access_68)), hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29);
          }
          hlds__pred_table__Pred_N_Index_30 = hlds__pred_table__Pred_N_Index0_18;
          hlds__pred_table__Pred_NA_Index_31 = hlds__pred_table__Pred_NA_Index0_19;
          hlds__pred_table__Pred_MNA_Index_32 = hlds__pred_table__Pred_MNA_Index0_20;
        }
        break;
      case (MR_Integer) 0:
        {
          {
            hlds__pred_table__predicate_table_do_insert_14_p_0(hlds__pred_table__Module_24, hlds__pred_table__Name_25, hlds__pred_table__Arity_26, hlds__pred_table__NeedQual_10, hlds__pred_table__MaybeQualInfo_11, *hlds__pred_table__PredId_12, hlds__pred_table__AccessibilityTable0_17, &hlds__pred_table__AccessibilityTable_29, hlds__pred_table__Pred_N_Index0_18, &hlds__pred_table__Pred_N_Index_30, hlds__pred_table__Pred_NA_Index0_19, &hlds__pred_table__Pred_NA_Index_31, hlds__pred_table__Pred_MNA_Index0_20, &hlds__pred_table__Pred_MNA_Index_32);
          }
          hlds__pred_table__Func_N_Index_33 = hlds__pred_table__Func_N_Index0_21;
          hlds__pred_table__Func_NA_Index_34 = hlds__pred_table__Func_NA_Index0_22;
          hlds__pred_table__Func_MNA_Index_35 = hlds__pred_table__Func_MNA_Index0_23;
        }
        break;
    }
    hlds__pred_table__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    {
      mercury__map__det_insert_4_p_0(hlds__pred_table__TypeCtorInfo_43_43, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (*hlds__pred_table__PredId_12)), ((MR_Box) (hlds__pred_table__PredInfo_9)), hlds__pred_table__Preds0_14, &hlds__pred_table__Preds_37);
    }
    {
      mercury__set_tree234__insert_3_p_0(hlds__pred_table__TypeCtorInfo_43_43, ((MR_Box) (*hlds__pred_table__PredId_12)), hlds__pred_table__ValidPredIds0_16, &hlds__pred_table__ValidPredIds_38);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_40 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_34));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_35));
    }
  }
}

static void MR_CALL 
hlds__pred_table__reinsert_for_restrict_6_p_0(
  MR_Word hlds__pred_table__PartialQualInfo_7,
  MR_Word hlds__pred_table__Preds_8,
  MR_Word hlds__pred_table__AccessibilityTable_9,
  MR_Word hlds__pred_table__PredId_10,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_20)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word hlds__pred_table__PredInfo_12;
    MR_Word hlds__pred_table__Access_13;
    MR_Word hlds__pred_table__Unqualified_14;
    MR_Word hlds__pred_table__PartiallyQualified_15;
    MR_Word hlds__pred_table__NeedQual_16;
    MR_Word hlds__pred_table__MaybeQualInfo_17;
    MR_Word hlds__pred_table__V_21_21;
    MR_Box hlds__pred_table__conv0_PredInfo_12;
    MR_Box hlds__pred_table__conv1_Access_13;
    MR_Word hlds__pred_table__V_18_18;

    {
      hlds__pred_table__conv0_PredInfo_12 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_8, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
    hlds__pred_table__PredInfo_12 = ((MR_Word) hlds__pred_table__conv0_PredInfo_12);
    {
      hlds__pred_table__conv1_Access_13 = mercury__map__lookup_2_f_0(hlds__pred_table__TypeCtorInfo_23_23, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, hlds__pred_table__AccessibilityTable_9, ((MR_Box) (hlds__pred_table__PredId_10)));
    }
    hlds__pred_table__Access_13 = ((MR_Word) hlds__pred_table__conv1_Access_13);
    hlds__pred_table__Unqualified_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 0)));
    hlds__pred_table__PartiallyQualified_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__Access_13, (MR_Integer) 1)));
    switch (hlds__pred_table__Unqualified_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__pred_table__NeedQual_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__pred_table__NeedQual_16 = (MR_Integer) 1;
        break;
    }
    switch (hlds__pred_table__PartiallyQualified_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          hlds__pred_table__MaybeQualInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeQualInfo_17, 0) = ((MR_Box) (hlds__pred_table__PartialQualInfo_7));
        }
        break;
    }
    {
      hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__PredId_10));
    }
    {
      hlds__pred_table__do_predicate_table_insert_7_p_0(hlds__pred_table__V_21_21, hlds__pred_table__PredInfo_12, hlds__pred_table__NeedQual_16, hlds__pred_table__MaybeQualInfo_17, &hlds__pred_table__V_18_18, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_19, hlds__pred_table__STATE_VARIABLE_PredicateTable_20);
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__pred_id_matches_module_3_p_0(
  MR_Word hlds__pred_table__Preds_4,
  MR_Word hlds__pred_table__ModuleName_5,
  MR_Word hlds__pred_table__PredId_6)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredInfo_7;
    MR_Word hlds__pred_table__V_10_10;
    MR_Box hlds__pred_table__conv0_PredInfo_7;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__pred_table__Preds_4, ((MR_Box) (hlds__pred_table__PredId_6)), &hlds__pred_table__conv0_PredInfo_7);
    }
    hlds__pred_table__PredInfo_7 = ((MR_Word) hlds__pred_table__conv0_PredInfo_7);
    {
      hlds__pred_table__V_10_10 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_7);
    }
    {
      hlds__pred_table__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__pred_table__ModuleName_5, hlds__pred_table__V_10_10);
    }
    return hlds__pred_table__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

    {
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
    return hlds__pred_table__succeeded;
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(
  MR_Word hlds__pred_table__PredicateTable_6,
  MR_Word hlds__pred_table__IsFullyQualified_7,
  MR_Word hlds__pred_table__Module_8,
  MR_String hlds__pred_table__FuncName_9,
  MR_Word * hlds__pred_table__PredIds_10)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__Func_MNA_Index_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
    MR_Word hlds__pred_table__Arities_12;
    MR_Word hlds__pred_table__V_15_15;
    MR_Box hlds__pred_table__conv0_Arities_12;

    {
      hlds__pred_table__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__Module_8));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_15_15, 1) = ((MR_Box) (hlds__pred_table__FuncName_9));
    }
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_11, ((MR_Box) (hlds__pred_table__V_15_15)), &hlds__pred_table__conv0_Arities_12);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__Arities_12 = ((MR_Word) hlds__pred_table__conv0_Arities_12);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      {
        MR_Word hlds__pred_table__PredIdLists_13;
        MR_Word hlds__pred_table__PredIds0_14;

        {
          mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_12, &hlds__pred_table__PredIdLists_13);
        }
        {
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_13, &hlds__pred_table__PredIds0_14);
        }
        switch (hlds__pred_table__IsFullyQualified_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__pred_table__Preds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 0)));
              MR_Word hlds__pred_table__V_41_41;
              MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 1)));
              MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 2)));
              MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 3)));
              MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 4)));
              MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 5)));
              MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 6)));
              MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 7)));
              MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 8)));
              MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_6, (MR_Integer) 9)));

              {
                hlds__pred_table__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 3) = ((MR_Box) (hlds__pred_table__Preds_38));
                MR_hl_field(MR_mktag(0), hlds__pred_table__V_41_41, 4) = ((MR_Box) (hlds__pred_table__Module_8));
              }
              {
                mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_41_41, hlds__pred_table__PredIds0_14, hlds__pred_table__PredIds_10);
              }
            }
            break;
          case (MR_Integer) 1:
            *hlds__pred_table__PredIds_10 = hlds__pred_table__PredIds0_14;
            break;
        }
      }
    else
      *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_remove_from_index_10_p_0(
  MR_Word hlds__pred_table__Module_11,
  MR_String hlds__pred_table__Name_12,
  MR_Integer hlds__pred_table__Arity_13,
  MR_Word hlds__pred_table__PredId_14,
  MR_Word hlds__pred_table__STATE_VARIABLE_N_0_18,
  MR_Word * hlds__pred_table__STATE_VARIABLE_N_19,
  MR_Word hlds__pred_table__STATE_VARIABLE_NA_0_20,
  MR_Word * hlds__pred_table__STATE_VARIABLE_NA_21,
  MR_Word hlds__pred_table__STATE_VARIABLE_MNA_0_22,
  MR_Word * hlds__pred_table__STATE_VARIABLE_MNA_23)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word hlds__pred_table__TypeCtorInfo_29_29;
    MR_Word hlds__pred_table__TypeInfo_28_81;
    MR_Word hlds__pred_table__TypeInfo_29_82;
    MR_Word hlds__pred_table__TypeCtorInfo_30_83;
    MR_Word hlds__pred_table__TypeInfo_31_84;
    MR_Word hlds__pred_table__V_25_25;
    MR_Word hlds__pred_table__Arities0_67;
    MR_Word hlds__pred_table__PredIds0_68;
    MR_Word hlds__pred_table__PredIds_69;
    MR_Word hlds__pred_table__V_73_73;
    MR_Word hlds__pred_table__NamePredIds0_35;
    MR_Box hlds__pred_table__conv0_NamePredIds0_35;
    MR_Word hlds__pred_table__NamePredIds0_50;
    MR_Box hlds__pred_table__conv1_NamePredIds0_50;
    MR_Box hlds__pred_table__conv2_Arities0_67;
    MR_Box hlds__pred_table__conv3_PredIds0_68;

    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_N_0_18, ((MR_Box) (hlds__pred_table__Name_12)), &hlds__pred_table__conv0_NamePredIds0_35);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__NamePredIds0_35 = ((MR_Word) hlds__pred_table__conv0_NamePredIds0_35);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      {
        MR_Word hlds__pred_table__NamePredIds_36;

        {
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_35, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_36);
        }
        if ((hlds__pred_table__NamePredIds_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
          }
        else
          {
            {
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_28_28, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__Name_12)), ((MR_Box) (hlds__pred_table__NamePredIds_36)), hlds__pred_table__STATE_VARIABLE_N_0_18, hlds__pred_table__STATE_VARIABLE_N_19);
            }
          }
      }
    else
      *hlds__pred_table__STATE_VARIABLE_N_19 = hlds__pred_table__STATE_VARIABLE_N_0_18;
    {
      hlds__pred_table__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 0) = ((MR_Box) (hlds__pred_table__Name_12));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_25_25, 1) = ((MR_Box) (hlds__pred_table__Arity_13));
    }
    hlds__pred_table__TypeCtorInfo_29_29 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__STATE_VARIABLE_NA_0_20, ((MR_Box) (hlds__pred_table__V_25_25)), &hlds__pred_table__conv1_NamePredIds0_50);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__NamePredIds0_50 = ((MR_Word) hlds__pred_table__conv1_NamePredIds0_50);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      {
        MR_Word hlds__pred_table__NamePredIds_51;

        {
          mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__NamePredIds0_50, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__NamePredIds_51);
        }
        if ((hlds__pred_table__NamePredIds_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
          }
        else
          {
            {
              mercury__map__det_update_4_p_0(hlds__pred_table__TypeCtorInfo_29_29, (MR_Word) &hlds__pred_table_scalar_common_1[0], ((MR_Box) (hlds__pred_table__V_25_25)), ((MR_Box) (hlds__pred_table__NamePredIds_51)), hlds__pred_table__STATE_VARIABLE_NA_0_20, hlds__pred_table__STATE_VARIABLE_NA_21);
            }
          }
      }
    else
      *hlds__pred_table__STATE_VARIABLE_NA_21 = hlds__pred_table__STATE_VARIABLE_NA_0_20;
    {
      hlds__pred_table__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_73_73, 0) = ((MR_Box) (hlds__pred_table__Module_11));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_73_73, 1) = ((MR_Box) (hlds__pred_table__Name_12));
    }
    hlds__pred_table__TypeInfo_28_81 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
    hlds__pred_table__TypeInfo_29_82 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
    {
      mercury__map__lookup_3_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, hlds__pred_table__STATE_VARIABLE_MNA_0_22, ((MR_Box) (hlds__pred_table__V_73_73)), &hlds__pred_table__conv2_Arities0_67);
    }
    hlds__pred_table__Arities0_67 = ((MR_Word) hlds__pred_table__conv2_Arities0_67);
    hlds__pred_table__TypeCtorInfo_30_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    hlds__pred_table__TypeInfo_31_84 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arities0_67, hlds__pred_table__Arity_13, &hlds__pred_table__conv3_PredIds0_68);
    }
    hlds__pred_table__PredIds0_68 = ((MR_Word) hlds__pred_table__conv3_PredIds0_68);
    {
      mercury__list__delete_all_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIds0_68, ((MR_Box) (hlds__pred_table__PredId_14)), &hlds__pred_table__PredIds_69);
    }
    if ((hlds__pred_table__PredIds_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__pred_table__Arities_70;

        {
          mercury__map__delete_3_p_0(hlds__pred_table__TypeCtorInfo_30_83, hlds__pred_table__TypeInfo_31_84, ((MR_Box) (hlds__pred_table__Arity_13)), hlds__pred_table__Arities0_67, &hlds__pred_table__Arities_70);
        }
        {
          hlds__pred_table__succeeded = mercury__map__is_empty_1_p_0(hlds__pred_table__TypeCtorInfo_30_83, hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arities_70);
        }
        if (hlds__pred_table__succeeded)
          {
            mercury__map__delete_3_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
          }
        else
          {
            mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), ((MR_Box) (hlds__pred_table__Arities_70)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
          }
      }
    else
      {
        MR_Word hlds__pred_table__Arities_80;

        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__pred_table__TypeInfo_31_84, hlds__pred_table__Arity_13, ((MR_Box) (hlds__pred_table__PredIds_69)), hlds__pred_table__Arities0_67, &hlds__pred_table__Arities_80);
        }
        {
          mercury__map__det_update_4_p_0(hlds__pred_table__TypeInfo_28_81, hlds__pred_table__TypeInfo_29_82, ((MR_Box) (hlds__pred_table__V_73_73)), ((MR_Box) (hlds__pred_table__Arities_80)), hlds__pred_table__STATE_VARIABLE_MNA_0_22, hlds__pred_table__STATE_VARIABLE_MNA_23);
        }
      }
  }
}

void MR_CALL 
hlds__pred_table__get_next_pred_id_2_p_0(
  MR_Word hlds__pred_table__PredTable_3,
  MR_Word * hlds__pred_table__NextPredId_4)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_6_6;
    MR_Word hlds__pred_table__V_7_7;
    MR_Word hlds__pred_table__V_8_8;
    MR_Word hlds__pred_table__V_9_9;
    MR_Word hlds__pred_table__V_10_10;
    MR_Word hlds__pred_table__V_11_11;
    MR_Word hlds__pred_table__V_12_12;
    MR_Word hlds__pred_table__V_13_13;

    *hlds__pred_table__NextPredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 1)));
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 2)));
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 3)));
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 4)));
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 5)));
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 6)));
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 7)));
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 8)));
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredTable_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(
  MR_Word hlds__pred_table__Module_9,
  MR_Word hlds__pred_table__ModuleName_10,
  MR_String hlds__pred_table__ProcName_11,
  MR_Word hlds__pred_table__PredOrFunc_12,
  MR_Integer hlds__pred_table__Arity_13,
  MR_Word hlds__pred_table__ModeNo_14,
  MR_Word * hlds__pred_table__PredId_15,
  MR_Integer * hlds__pred_table__ProcId_16)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredTable_17;
    MR_Word hlds__pred_table__PredInfo_20;
    MR_Word hlds__pred_table__ProcIds_21;
    MR_Word hlds__pred_table__PredIdPrime_19;
    MR_Word hlds__pred_table__PredIds_18;
    MR_Word hlds__pred_table__V_26_26;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__Module_9, &hlds__pred_table__PredTable_17);
    }
    switch (hlds__pred_table__PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__Arity_13, &hlds__pred_table__PredIds_18);
          }
        }
        break;
    }
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_18)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__PredIdPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 0)));
        hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_18, (MR_Integer) 1)));
        hlds__pred_table__succeeded = (hlds__pred_table__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_19;
    else
      {
        MR_Word hlds__pred_table__PredIdPrime_75;
        MR_Word hlds__pred_table__V_33_33;
        MR_Word hlds__pred_table__PredIds_73;

        switch (hlds__pred_table__PredOrFunc_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer hlds__pred_table__V_28_28 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

              {
                hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_28_28, &hlds__pred_table__PredIds_73);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer hlds__pred_table__V_31_31 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

              {
                hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredTable_17, (MR_Integer) 0, hlds__pred_table__ModuleName_10, hlds__pred_table__ProcName_11, hlds__pred_table__V_31_31, &hlds__pred_table__PredIds_73);
              }
            }
            break;
        }
        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__PredIds_73)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__PredIdPrime_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 0)));
            hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__PredIds_73, (MR_Integer) 1)));
            hlds__pred_table__succeeded = (hlds__pred_table__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (hlds__pred_table__succeeded)
          *hlds__pred_table__PredId_15 = hlds__pred_table__PredIdPrime_75;
        else
          {
            MR_String hlds__pred_table__V_36_36;
            MR_String hlds__pred_table__V_40_40;
            MR_String hlds__pred_table__V_79_79;
            MR_String hlds__pred_table__V_87_87;
            MR_String hlds__pred_table__V_88_88;
            MR_String hlds__pred_table__V_90_90;
            MR_String hlds__pred_table__V_91_91;

            {
              hlds__pred_table__V_40_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__pred_table_scalar_common_6[0], hlds__pred_table__Arity_13, &hlds__pred_table__V_79_79);
            }
            {
              hlds__pred_table__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_79_79);
            }
            {
              hlds__pred_table__V_88_88 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_87_87);
            }
            {
              hlds__pred_table__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_88_88);
            }
            {
              hlds__pred_table__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_40_40, hlds__pred_table__V_90_90);
            }
            {
              hlds__pred_table__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t locate ", hlds__pred_table__V_91_91);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_36_36);
              return;
            }
          }
      }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__Module_9, *hlds__pred_table__PredId_15, &hlds__pred_table__PredInfo_20);
    }
    {
      hlds__pred_table__ProcIds_21 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_20);
    }
    if ((hlds__pred_table__ModeNo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__pred_table__ProcId0_22;
        MR_Word hlds__pred_table__V_60_60;

        hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_21)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__ProcId0_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 0)));
            hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_21, (MR_Integer) 1)));
            hlds__pred_table__succeeded = (hlds__pred_table__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (hlds__pred_table__succeeded)
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_22;
        else
          {
            MR_String hlds__pred_table__V_63_63;
            MR_String hlds__pred_table__V_67_67;
            MR_String hlds__pred_table__V_93_93;
            MR_String hlds__pred_table__V_101_101;
            MR_String hlds__pred_table__V_102_102;
            MR_String hlds__pred_table__V_104_104;
            MR_String hlds__pred_table__V_105_105;

            {
              hlds__pred_table__V_67_67 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__pred_table_scalar_common_6[0], hlds__pred_table__Arity_13, &hlds__pred_table__V_93_93);
            }
            {
              hlds__pred_table__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_93_93);
            }
            {
              hlds__pred_table__V_102_102 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_101_101);
            }
            {
              hlds__pred_table__V_104_104 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_102_102);
            }
            {
              hlds__pred_table__V_105_105 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_67_67, hlds__pred_table__V_104_104);
            }
            {
              hlds__pred_table__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "expected single mode for ", hlds__pred_table__V_105_105);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_63_63);
              return;
            }
          }
      }
    else
      {
        MR_Integer hlds__pred_table__N_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ModeNo_14, (MR_Integer) 0)));
        MR_Integer hlds__pred_table__ProcId0_76;
        MR_Box hlds__pred_table__conv0_ProcId0_76;

        {
          hlds__pred_table__succeeded = mercury__list__index0_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__pred_table__ProcIds_21, hlds__pred_table__N_23, &hlds__pred_table__conv0_ProcId0_76);
        }
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__ProcId0_76 = ((MR_Integer) hlds__pred_table__conv0_ProcId0_76);
            hlds__pred_table__succeeded = MR_TRUE;
          }
        if (hlds__pred_table__succeeded)
          *hlds__pred_table__ProcId_16 = hlds__pred_table__ProcId0_76;
        else
          {
            MR_String hlds__pred_table__V_48_48;
            MR_String hlds__pred_table__V_54_54;
            MR_String hlds__pred_table__V_107_107;
            MR_Word hlds__pred_table__V_113_113;
            MR_String hlds__pred_table__V_115_115;
            MR_String hlds__pred_table__V_116_116;
            MR_String hlds__pred_table__V_118_118;
            MR_String hlds__pred_table__V_119_119;
            MR_String hlds__pred_table__V_121_121;
            MR_String hlds__pred_table__V_122_122;
            MR_String hlds__pred_table__V_129_129;

            {
              hlds__pred_table__V_54_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__ModuleName_10);
            }
            hlds__pred_table__V_113_113 = (MR_Word) &hlds__pred_table_scalar_common_6[0];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__Arity_13, &hlds__pred_table__V_107_107);
            }
            {
              hlds__pred_table__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__pred_table__V_107_107);
            }
            {
              hlds__pred_table__V_116_116 = mercury__string__f_43_43_2_f_0(hlds__pred_table__ProcName_11, hlds__pred_table__V_115_115);
            }
            {
              hlds__pred_table__V_118_118 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__pred_table__V_116_116);
            }
            {
              hlds__pred_table__V_119_119 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_54_54, hlds__pred_table__V_118_118);
            }
            {
              hlds__pred_table__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) " for ", hlds__pred_table__V_119_119);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__pred_table__V_113_113, hlds__pred_table__N_23, &hlds__pred_table__V_122_122);
            }
            {
              hlds__pred_table__V_129_129 = mercury__string__f_43_43_2_f_0(hlds__pred_table__V_122_122, hlds__pred_table__V_121_121);
            }
            {
              hlds__pred_table__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "there is no mode ", hlds__pred_table__V_129_129);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.lookup_builtin_pred_proc_id\'/8", hlds__pred_table__V_48_48);
              return;
            }
          }
      }
  }
}

void MR_CALL 
hlds__pred_table__get_proc_id_3_p_0(
  MR_Word hlds__pred_table__ModuleInfo_4,
  MR_Word hlds__pred_table__PredId_5,
  MR_Integer * hlds__pred_table__ProcId_6)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredInfo_7;
    MR_Word hlds__pred_table__ProcIds_8;
    MR_Integer hlds__pred_table__ProcId0_9;
    MR_Word hlds__pred_table__V_18_18;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_4, hlds__pred_table__PredId_5, &hlds__pred_table__PredInfo_7);
    }
    {
      hlds__pred_table__ProcIds_8 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__pred_table__PredInfo_7);
    }
    hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__ProcIds_8)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 0)));
        hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__ProcIds_8, (MR_Integer) 1)));
        hlds__pred_table__succeeded = (hlds__pred_table__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__ProcId_6 = hlds__pred_table__ProcId0_9;
    else
      {
        MR_String hlds__pred_table__Name_10;
        MR_Word hlds__pred_table__PredOrFunc_11;
        MR_Integer hlds__pred_table__Arity_12;
        MR_String hlds__pred_table__PredOrFuncStr_13;
        MR_String hlds__pred_table__ArityString_14;
        MR_String hlds__pred_table__Message_15;

        {
          hlds__pred_table__Name_10 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_7);
        }
        {
          hlds__pred_table__PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_7);
        }
        {
          hlds__pred_table__Arity_12 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_7);
        }
        {
          hlds__pred_table__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_11);
        }
        {
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_12, &hlds__pred_table__ArityString_14);
        }
        if ((hlds__pred_table__ProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__pred_table__V_35_35;
            MR_Word hlds__pred_table__V_37_37;
            MR_Word hlds__pred_table__V_38_38;
            MR_Word hlds__pred_table__V_40_40;
            MR_Word hlds__pred_table__V_41_41;
            MR_Word hlds__pred_table__V_43_43;

            {
              hlds__pred_table__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[9])));
            }
            {
              hlds__pred_table__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 0) = ((MR_Box) ((MR_String) "/"));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_41_41, 1) = ((MR_Box) (hlds__pred_table__V_43_43));
            }
            {
              hlds__pred_table__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 0) = ((MR_Box) (hlds__pred_table__Name_10));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_40_40, 1) = ((MR_Box) (hlds__pred_table__V_41_41));
            }
            {
              hlds__pred_table__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 0) = ((MR_Box) ((MR_String) "\n\140"));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_38_38, 1) = ((MR_Box) (hlds__pred_table__V_40_40));
            }
            {
              hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (hlds__pred_table__V_38_38));
            }
            {
              hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "cannot take address of "));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
            }
            {
              mercury__string__append_list_2_p_0(hlds__pred_table__V_35_35, &hlds__pred_table__Message_15);
            }
          }
        else
          {
            MR_Word hlds__pred_table__V_19_19;
            MR_Word hlds__pred_table__V_21_21;
            MR_Word hlds__pred_table__V_23_23;
            MR_Word hlds__pred_table__V_24_24;
            MR_Word hlds__pred_table__V_26_26;
            MR_Word hlds__pred_table__V_27_27;
            MR_Word hlds__pred_table__V_29_29;

            {
              hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__ArityString_14));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[11])));
            }
            {
              hlds__pred_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 0) = ((MR_Box) ((MR_String) "/"));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_27_27, 1) = ((MR_Box) (hlds__pred_table__V_29_29));
            }
            {
              hlds__pred_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 0) = ((MR_Box) (hlds__pred_table__Name_10));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_26_26, 1) = ((MR_Box) (hlds__pred_table__V_27_27));
            }
            {
              hlds__pred_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 0) = ((MR_Box) ((MR_String) "\n\140"));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_24_24, 1) = ((MR_Box) (hlds__pred_table__V_26_26));
            }
            {
              hlds__pred_table__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_13));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_23_23, 1) = ((MR_Box) (hlds__pred_table__V_24_24));
            }
            {
              hlds__pred_table__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 0) = ((MR_Box) ((MR_String) "taking address of "));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__V_23_23));
            }
            {
              hlds__pred_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 0) = ((MR_Box) ((MR_String) "sorry, not implemented: "));
              MR_hl_field(MR_mktag(1), hlds__pred_table__V_19_19, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
            }
            {
              mercury__string__append_list_2_p_0(hlds__pred_table__V_19_19, &hlds__pred_table__Message_15);
            }
          }
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_proc_id\'/3", hlds__pred_table__Message_15);
          return;
        }
      }
  }
}

MR_bool MR_CALL 
hlds__pred_table__get_pred_id_by_types_10_p_0(
  MR_Word hlds__pred_table__IsFullyQualified_11,
  MR_Word hlds__pred_table__SymName_12,
  MR_Word hlds__pred_table__PredOrFunc_13,
  MR_Word hlds__pred_table__TVarSet_14,
  MR_Word hlds__pred_table__ExistQTVars_15,
  MR_Word hlds__pred_table__ArgTypes_16,
  MR_Word hlds__pred_table__ExternalTypeParams_17,
  MR_Word hlds__pred_table__ModuleInfo_18,
  MR_Word hlds__pred_table__Context_19,
  MR_Word * hlds__pred_table__PredId_20)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredicateTable_21;
    MR_Integer hlds__pred_table__Arity_22;
    MR_Word hlds__pred_table__PredIds_23;
    MR_Word hlds__pred_table___PredName_25;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_18, &hlds__pred_table__PredicateTable_21);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_16, &hlds__pred_table__Arity_22);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_21, hlds__pred_table__IsFullyQualified_11, hlds__pred_table__PredOrFunc_13, hlds__pred_table__SymName_12, hlds__pred_table__Arity_22, &hlds__pred_table__PredIds_23);
    }
    {
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_18, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__ExternalTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_19, hlds__pred_table__PredId_20, &hlds__pred_table___PredName_25);
    }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0(
  MR_Word hlds__pred_table__IsFullyQualified_12,
  MR_Word hlds__pred_table__SymName_13,
  MR_Word hlds__pred_table__PredOrFunc_14,
  MR_Word hlds__pred_table__TVarSet_15,
  MR_Word hlds__pred_table__ExistQTVars_16,
  MR_Word hlds__pred_table__ArgTypes_17,
  MR_Word hlds__pred_table__ExternalTypeParams_18,
  MR_Word hlds__pred_table__ModuleInfo_19,
  MR_Word hlds__pred_table__Context_20,
  MR_Word * hlds__pred_table__PredId_21,
  MR_Integer * hlds__pred_table__ProcId_22)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredId0_23;
    MR_Word hlds__pred_table__PredicateTable_54;
    MR_Integer hlds__pred_table__Arity_55;
    MR_Word hlds__pred_table__PredIds_56;
    MR_Word hlds__pred_table___PredName_58;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_19, &hlds__pred_table__PredicateTable_54);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_55);
    }
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__pred_table__PredicateTable_54, hlds__pred_table__IsFullyQualified_12, hlds__pred_table__PredOrFunc_14, hlds__pred_table__SymName_13, hlds__pred_table__Arity_55, &hlds__pred_table__PredIds_56);
    }
    {
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_19, hlds__pred_table__PredIds_56, hlds__pred_table__TVarSet_15, hlds__pred_table__ExistQTVars_16, hlds__pred_table__ArgTypes_17, hlds__pred_table__ExternalTypeParams_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_20, &hlds__pred_table__PredId0_23, &hlds__pred_table___PredName_58);
    }
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__PredId_21 = hlds__pred_table__PredId0_23;
    else
      {
        MR_Integer hlds__pred_table__Arity_24;
        MR_String hlds__pred_table__PredOrFuncStr_25;
        MR_String hlds__pred_table__NameStr_26;
        MR_String hlds__pred_table__ArityString_27;
        MR_String hlds__pred_table__Msg_28;
        MR_Word hlds__pred_table__V_29_29;
        MR_Word hlds__pred_table__V_31_31;
        MR_Word hlds__pred_table__V_32_32;
        MR_Word hlds__pred_table__V_34_34;
        MR_Word hlds__pred_table__V_35_35;
        MR_Word hlds__pred_table__V_37_37;

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__pred_table__ArgTypes_17, &hlds__pred_table__Arity_24);
        }
        {
          hlds__pred_table__PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__pred_table__PredOrFunc_14);
        }
        {
          hlds__pred_table__NameStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__pred_table__SymName_13);
        }
        {
          mercury__string__int_to_string_2_p_0(hlds__pred_table__Arity_24, &hlds__pred_table__ArityString_27);
        }
        {
          hlds__pred_table__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 0) = ((MR_Box) (hlds__pred_table__ArityString_27));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[15])));
        }
        {
          hlds__pred_table__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 0) = ((MR_Box) ((MR_String) "/"));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_35_35, 1) = ((MR_Box) (hlds__pred_table__V_37_37));
        }
        {
          hlds__pred_table__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 0) = ((MR_Box) (hlds__pred_table__NameStr_26));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_34_34, 1) = ((MR_Box) (hlds__pred_table__V_35_35));
        }
        {
          hlds__pred_table__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 0) = ((MR_Box) ((MR_String) "\n\140"));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_32_32, 1) = ((MR_Box) (hlds__pred_table__V_34_34));
        }
        {
          hlds__pred_table__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 0) = ((MR_Box) (hlds__pred_table__PredOrFuncStr_25));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_31_31, 1) = ((MR_Box) (hlds__pred_table__V_32_32));
        }
        {
          hlds__pred_table__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 0) = ((MR_Box) ((MR_String) "undefined/invalid "));
          MR_hl_field(MR_mktag(1), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__V_31_31));
        }
        {
          mercury__string__append_list_2_p_0(hlds__pred_table__V_29_29, &hlds__pred_table__Msg_28);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.get_pred_id_and_proc_id_by_types\'/11", hlds__pred_table__Msg_28);
          return;
        }
      }
    {
      hlds__pred_table__get_proc_id_3_p_0(hlds__pred_table__ModuleInfo_19, *hlds__pred_table__PredId_21, hlds__pred_table__ProcId_22);
    }
  }
}

MR_bool MR_CALL 
hlds__pred_table__find_matching_pred_id_10_p_0(
  MR_Word hlds__pred_table__ModuleInfo_11,
  MR_Word hlds__pred_table__HeadVar__2_2,
  MR_Word hlds__pred_table__TVarSet_14,
  MR_Word hlds__pred_table__ExistQTVars_15,
  MR_Word hlds__pred_table__ArgTypes_16,
  MR_Word hlds__pred_table__ExternalTypeParams_17,
  MR_Word hlds__pred_table__MaybeConstraintSearch_18,
  MR_Word hlds__pred_table__Context_19,
  MR_Word * hlds__pred_table__ThePredId_20,
  MR_Word * hlds__pred_table__PredName_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__pred_table__succeeded = ((MR_tag((MR_Word) hlds__pred_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Word hlds__pred_table__PredId_12;
        MR_Word hlds__pred_table__PredIds_13;
        MR_Word hlds__pred_table__PredInfo_22;
        MR_Word hlds__pred_table__PredTVarSet_23;
        MR_Word hlds__pred_table__PredExistQVars0_24;
        MR_Word hlds__pred_table__PredArgTypes0_25;
        MR_Word hlds__pred_table__PredKindMap_26;

        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 0)));
            hlds__pred_table__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__HeadVar__2_2, (MR_Integer) 1)));
            {
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredId_12, &hlds__pred_table__PredInfo_22);
            }
            {
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredTVarSet_23, &hlds__pred_table__PredExistQVars0_24, &hlds__pred_table__PredArgTypes0_25);
            }
            {
              hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredKindMap_26);
            }
            {
              hlds__pred_table__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__ExternalTypeParams_17, hlds__pred_table__PredTVarSet_23, hlds__pred_table__PredKindMap_26, hlds__pred_table__PredExistQVars0_24, hlds__pred_table__PredArgTypes0_25);
            }
            if (hlds__pred_table__succeeded)
              {
                if ((hlds__pred_table__MaybeConstraintSearch_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__pred_table__succeeded = MR_TRUE;
                else
                  {
                    MR_Word hlds__pred_table__ConstraintSearch_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__MaybeConstraintSearch_18, (MR_Integer) 0)));
                    MR_Word hlds__pred_table__ProgConstraints_28;
                    MR_Word hlds__pred_table__UnivConstraints_29;
                    MR_Integer hlds__pred_table__NumConstraints_31;
                    MR_Word hlds__pred_table__ProvenConstraints_32;
                    MR_Word hlds__pred_table__V_30_30;
                    MR_bool MR_CALL (* hlds__pred_table__func_0)(MR_Box, MR_Box, MR_Box *);
                    MR_Box hlds__pred_table__conv1_ProvenConstraints_32;

                    {
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__ProgConstraints_28);
                    }
                    hlds__pred_table__UnivConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 0)));
                    hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__ProgConstraints_28, (MR_Integer) 1)));
                    {
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__pred_table__UnivConstraints_29, &hlds__pred_table__NumConstraints_31);
                    }
                    hlds__pred_table__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__pred_table__ConstraintSearch_27, (MR_Integer) 1)));
                    {
                      hlds__pred_table__succeeded = hlds__pred_table__func_0(((MR_Box) hlds__pred_table__ConstraintSearch_27), ((MR_Box) (hlds__pred_table__NumConstraints_31)), &hlds__pred_table__conv1_ProvenConstraints_32);
                    }
                    if (hlds__pred_table__succeeded)
                      {
                        hlds__pred_table__ProvenConstraints_32 = ((MR_Word) hlds__pred_table__conv1_ProvenConstraints_32);
                        hlds__pred_table__succeeded = MR_TRUE;
                      }
                    if (hlds__pred_table__succeeded)
                      {
                        hlds__pred_table__succeeded = hlds__pred_table__univ_constraints_match_2_p_0(hlds__pred_table__ProvenConstraints_32, hlds__pred_table__UnivConstraints_29);
                      }
                  }
              }
            if (hlds__pred_table__succeeded)
              {
                MR_String hlds__pred_table__PName_33;
                MR_Word hlds__pred_table__Module_34;
                MR_Word hlds__pred_table__OtherPredId_35;
                MR_Word hlds__pred_table___OtherPredName_36;

                {
                  hlds__pred_table__PName_33 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_22);
                }
                {
                  hlds__pred_table__Module_34 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_22);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__pred_table__PredName_21 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__pred_table__Module_34));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__pred_table__PName_33));
                }
                {
                  hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_13, hlds__pred_table__TVarSet_14, hlds__pred_table__ExistQTVars_15, hlds__pred_table__ArgTypes_16, hlds__pred_table__ExternalTypeParams_17, hlds__pred_table__MaybeConstraintSearch_18, hlds__pred_table__Context_19, &hlds__pred_table__OtherPredId_35, &hlds__pred_table___OtherPredName_36);
                }
                if (hlds__pred_table__succeeded)
                  {
                    MR_Word hlds__pred_table__OtherPredInfo_37;
                    MR_Word hlds__pred_table__PredCallId_38;
                    MR_Word hlds__pred_table__OtherPredCallId_39;
                    MR_Word hlds__pred_table__Globals_41;
                    MR_Word hlds__pred_table__Pieces_42;
                    MR_Word hlds__pred_table__V_46_46;
                    MR_Word hlds__pred_table__V_49_49;
                    MR_Word hlds__pred_table__V_50_50;
                    MR_Word hlds__pred_table__V_51_51;
                    MR_Word hlds__pred_table__V_54_54;
                    MR_Word hlds__pred_table__V_55_55;

                    {
                      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__OtherPredId_35, &hlds__pred_table__OtherPredInfo_37);
                    }
                    {
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__PredInfo_22, &hlds__pred_table__PredCallId_38);
                    }
                    {
                      hlds__hlds_pred__pred_info_get_call_id_2_p_0(hlds__pred_table__OtherPredInfo_37, &hlds__pred_table__OtherPredCallId_39);
                    }
                    {
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__Globals_41);
                    }
                    {
                      hlds__pred_table__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_50_50, 1) = ((MR_Box) (hlds__pred_table__PredCallId_38));
                    }
                    {
                      hlds__pred_table__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), hlds__pred_table__V_55_55, 1) = ((MR_Box) (hlds__pred_table__OtherPredCallId_39));
                    }
                    {
                      hlds__pred_table__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_54_54, 0) = ((MR_Box) (hlds__pred_table__V_55_55));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__pred_table_scalar_common_1[7])));
                    }
                    {
                      hlds__pred_table__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[14])));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_51_51, 1) = ((MR_Box) (hlds__pred_table__V_54_54));
                    }
                    {
                      hlds__pred_table__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_49_49, 0) = ((MR_Box) (hlds__pred_table__V_50_50));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_49_49, 1) = ((MR_Box) (hlds__pred_table__V_51_51));
                    }
                    {
                      hlds__pred_table__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[13])));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__V_46_46, 1) = ((MR_Box) (hlds__pred_table__V_49_49));
                    }
                    {
                      hlds__pred_table__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__pred_table_scalar_common_1[12])));
                      MR_hl_field(MR_mktag(1), hlds__pred_table__Pieces_42, 1) = ((MR_Box) (hlds__pred_table__V_46_46));
                    }
                    {
                      parse_tree__error_util__write_error_pieces_6_p_0(hlds__pred_table__Globals_41, hlds__pred_table__Context_19, (MR_Integer) 0, hlds__pred_table__Pieces_42);
                    }
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.find_matching_pred_id\'/10", (MR_String) "unresolvable predicate overloading");
                    }
                  }
                else
                  *hlds__pred_table__ThePredId_20 = hlds__pred_table__PredId_12;
                hlds__pred_table__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__pred_table__HeadVar__2__tmp_copy_2 = hlds__pred_table__PredIds_13;

                  hlds__pred_table__HeadVar__2_2 = hlds__pred_table__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return hlds__pred_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
hlds__pred_table__resolve_pred_overloading_10_p_0(
  MR_Word hlds__pred_table__ModuleInfo_11,
  MR_Word hlds__pred_table__CallerMarkers_12,
  MR_Word hlds__pred_table__TVarSet_13,
  MR_Word hlds__pred_table__ExistQTVars_14,
  MR_Word hlds__pred_table__ArgTypes_15,
  MR_Word hlds__pred_table__ExternalTypeParams_16,
  MR_Word hlds__pred_table__Context_17,
  MR_Word hlds__pred_table__PredName0_18,
  MR_Word * hlds__pred_table__PredName_19,
  MR_Word * hlds__pred_table__PredId_20)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredTable_21;
    MR_Word hlds__pred_table__IsFullyQualified_22;
    MR_Word hlds__pred_table__PredIds_23;
    MR_Word hlds__pred_table__PredId1_24;
    MR_Word hlds__pred_table__PredName1_25;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__pred_table__ModuleInfo_11, &hlds__pred_table__PredTable_21);
    }
    {
      hlds__pred_table__IsFullyQualified_22 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(hlds__pred_table__CallerMarkers_12);
    }
    {
      hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredTable_21, hlds__pred_table__IsFullyQualified_22, hlds__pred_table__PredName0_18, &hlds__pred_table__PredIds_23);
    }
    {
      hlds__pred_table__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(hlds__pred_table__ModuleInfo_11, hlds__pred_table__PredIds_23, hlds__pred_table__TVarSet_13, hlds__pred_table__ExistQTVars_14, hlds__pred_table__ArgTypes_15, hlds__pred_table__ExternalTypeParams_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__Context_17, &hlds__pred_table__PredId1_24, &hlds__pred_table__PredName1_25);
    }
    if (hlds__pred_table__succeeded)
      {
        *hlds__pred_table__PredId_20 = hlds__pred_table__PredId1_24;
        *hlds__pred_table__PredName_19 = hlds__pred_table__PredName1_25;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.pred_table", (MR_String) "predicate \140hlds.pred_table.resolve_pred_overloading\'/10", (MR_String) "type error in pred call: no matching pred");
          return;
        }
      }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_insert_4_p_0(
  MR_Word hlds__pred_table__PredInfo_5,
  MR_Word * hlds__pred_table__PredId_6,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
{
  {
    MR_bool hlds__pred_table__succeeded;

    {
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_5, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredId_6, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, hlds__pred_table__STATE_VARIABLE_PredicateTable_9);
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_insert_qual_6_p_0(
  MR_Word hlds__pred_table__PredInfo_7,
  MR_Word hlds__pred_table__NeedQual_8,
  MR_Word hlds__pred_table__QualInfo_9,
  MR_Word * hlds__pred_table__PredId_10,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_13)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__V_15_15;

    {
      hlds__pred_table__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__pred_table__V_15_15, 0) = ((MR_Box) (hlds__pred_table__QualInfo_9));
    }
    {
      hlds__pred_table__do_predicate_table_insert_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__pred_table__PredInfo_7, hlds__pred_table__NeedQual_8, hlds__pred_table__V_15_15, hlds__pred_table__PredId_10, hlds__pred_table__STATE_VARIABLE_PredicateTable_0_12, hlds__pred_table__STATE_VARIABLE_PredicateTable_13);
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(
  MR_Word hlds__pred_table__PredicateTable_6,
  MR_Word hlds__pred_table__IsFullyQualified_7,
  MR_Word hlds__pred_table__PredOrFunc_8,
  MR_Word hlds__pred_table__SymName_9,
  MR_Word * hlds__pred_table__PredIds_10)
{
  {
    MR_bool hlds__pred_table__succeeded;

    switch (hlds__pred_table__PredOrFunc_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__SymName_9, hlds__pred_table__PredIds_10);
        }
        break;
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(
  MR_Word hlds__pred_table__PredicateTable_7,
  MR_Word hlds__pred_table__IsFullyQualified_8,
  MR_Word hlds__pred_table__PredOrFunc_9,
  MR_Word hlds__pred_table__SymName_10,
  MR_Integer hlds__pred_table__Arity_11,
  MR_Word * hlds__pred_table__PredIds_12)
{
  {
    MR_bool hlds__pred_table__succeeded;

    if (((MR_tag((MR_Word) hlds__pred_table__SymName_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__pred_table__Module_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 0)));
        MR_String hlds__pred_table__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_10, (MR_Integer) 1)));

        switch (hlds__pred_table__PredOrFunc_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer hlds__pred_table__FuncArity_23 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

              {
                hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__FuncArity_23, hlds__pred_table__PredIds_12);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_13, hlds__pred_table__Name_14, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
            }
            break;
        }
      }
    else
      {
        MR_String hlds__pred_table__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_10, (MR_Integer) 0)));

        switch (hlds__pred_table__IsFullyQualified_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__pred_table__PredIds_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            switch (hlds__pred_table__PredOrFunc_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer hlds__pred_table__FuncArity_30 = (hlds__pred_table__Arity_11 - (MR_Integer) 1);

                  {
                    hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__FuncArity_30, hlds__pred_table__PredIds_12);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__Name_15, hlds__pred_table__Arity_11, hlds__pred_table__PredIds_12);
                }
                break;
            }
            break;
        }
      }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_name_arity_5_p_0(
  MR_Word hlds__pred_table__PredicateTable_6,
  MR_Word hlds__pred_table__PredOrFunc_7,
  MR_String hlds__pred_table__Name_8,
  MR_Integer hlds__pred_table__Arity_9,
  MR_Word * hlds__pred_table__PredIds_10)
{
  {
    MR_bool hlds__pred_table__succeeded;

    switch (hlds__pred_table__PredOrFunc_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__pred_table__FuncArity_11 = (hlds__pred_table__Arity_9 - (MR_Integer) 1);

          {
            hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__FuncArity_11, hlds__pred_table__PredIds_10);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_8, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
        break;
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(
  MR_Word hlds__pred_table__PredicateTable_8,
  MR_Word hlds__pred_table__IsFullyQualified_9,
  MR_Word hlds__pred_table__PredOrFunc_10,
  MR_Word hlds__pred_table__Module_11,
  MR_String hlds__pred_table__Name_12,
  MR_Integer hlds__pred_table__Arity_13,
  MR_Word * hlds__pred_table__PredIds_14)
{
  {
    MR_bool hlds__pred_table__succeeded;

    switch (hlds__pred_table__PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__pred_table__FuncArity_15 = (hlds__pred_table__Arity_13 - (MR_Integer) 1);

          {
            hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__FuncArity_15, hlds__pred_table__PredIds_14);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_8, hlds__pred_table__IsFullyQualified_9, hlds__pred_table__Module_11, hlds__pred_table__Name_12, hlds__pred_table__Arity_13, hlds__pred_table__PredIds_14);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

    {
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(
  MR_Word hlds__pred_table__PredicateTable_7,
  MR_Word hlds__pred_table__IsFullyQualified_8,
  MR_Word hlds__pred_table__Module_9,
  MR_String hlds__pred_table__FuncName_10,
  MR_Integer hlds__pred_table__Arity_11,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__F_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
    MR_Word hlds__pred_table__TypeInfo_32_32;
    MR_Word hlds__pred_table__ArityIndex_14;
    MR_Word hlds__pred_table__V_16_16;
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

    {
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__FuncName_10));
    }
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__F_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
        {
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
            hlds__pred_table__succeeded = MR_TRUE;
          }
      }
    if (hlds__pred_table__succeeded)
      switch (hlds__pred_table__IsFullyQualified_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
            MR_Word hlds__pred_table__V_44_44;
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
            MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

            {
              hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
            }
            {
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
            }
          }
          break;
        case (MR_Integer) 1:
          *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
          break;
      }
    else
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

    {
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(
  MR_Word hlds__pred_table__PredicateTable_7,
  MR_Word hlds__pred_table__IsFullyQualified_8,
  MR_Word hlds__pred_table__Module_9,
  MR_String hlds__pred_table__PredName_10,
  MR_Integer hlds__pred_table__Arity_11,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredIds_15)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__P_MNA_Index_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));
    MR_Word hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
    MR_Word hlds__pred_table__TypeInfo_32_32;
    MR_Word hlds__pred_table__ArityIndex_14;
    MR_Word hlds__pred_table__V_16_16;
    MR_Box hlds__pred_table__conv0_ArityIndex_14;
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17;

    {
      hlds__pred_table__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 0) = ((MR_Box) (hlds__pred_table__Module_9));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_16_16, 1) = ((MR_Box) (hlds__pred_table__PredName_10));
    }
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__P_MNA_Index_13, ((MR_Box) (hlds__pred_table__V_16_16)), &hlds__pred_table__conv0_ArityIndex_14);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__ArityIndex_14 = ((MR_Word) hlds__pred_table__conv0_ArityIndex_14);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__TypeInfo_32_32 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
        {
          hlds__pred_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__pred_table__TypeInfo_32_32, hlds__pred_table__ArityIndex_14, hlds__pred_table__Arity_11, &hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
        }
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__STATE_VARIABLE_PredIds_17_17 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredIds_17_17);
            hlds__pred_table__succeeded = MR_TRUE;
          }
      }
    if (hlds__pred_table__succeeded)
      switch (hlds__pred_table__IsFullyQualified_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__pred_table__Preds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 0)));
            MR_Word hlds__pred_table__V_44_44;
            MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 1)));
            MR_Word hlds__pred_table__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 2)));
            MR_Word hlds__pred_table__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 3)));
            MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 4)));
            MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 5)));
            MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 6)));
            MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 7)));
            MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 8)));
            MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_7, (MR_Integer) 9)));

            {
              hlds__pred_table__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 3) = ((MR_Box) (hlds__pred_table__Preds_41));
              MR_hl_field(MR_mktag(0), hlds__pred_table__V_44_44, 4) = ((MR_Box) (hlds__pred_table__Module_9));
            }
            {
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_44_44, hlds__pred_table__STATE_VARIABLE_PredIds_17_17, hlds__pred_table__STATE_VARIABLE_PredIds_15);
            }
          }
          break;
        case (MR_Integer) 1:
          *hlds__pred_table__STATE_VARIABLE_PredIds_15 = hlds__pred_table__STATE_VARIABLE_PredIds_17_17;
          break;
      }
    else
      *hlds__pred_table__STATE_VARIABLE_PredIds_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_m_n_a_6_p_0(
  MR_Word hlds__pred_table__PredicateTable_7,
  MR_Word hlds__pred_table__IsFullyQualified_8,
  MR_Word hlds__pred_table__Module_9,
  MR_String hlds__pred_table__Name_10,
  MR_Integer hlds__pred_table__Arity_11,
  MR_Word * hlds__pred_table__PredIds_12)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredPredIds_13;
    MR_Word hlds__pred_table__FuncPredIds_14;

    {
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__PredPredIds_13);
    }
    {
      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_7, hlds__pred_table__IsFullyQualified_8, hlds__pred_table__Module_9, hlds__pred_table__Name_10, hlds__pred_table__Arity_11, &hlds__pred_table__FuncPredIds_14);
    }
    {
      *hlds__pred_table__PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_14, hlds__pred_table__PredPredIds_13);
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(
  MR_Word hlds__pred_table__PredicateTable_5,
  MR_String hlds__pred_table__FuncName_6,
  MR_Integer hlds__pred_table__Arity_7,
  MR_Word * hlds__pred_table__PredIds_8)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__FuncNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
    MR_Word hlds__pred_table__NA_10;
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
    MR_Word hlds__pred_table__PredIdsPrime_11;
    MR_Box hlds__pred_table__conv0_PredIdsPrime_11;

    {
      hlds__pred_table__NA_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__NA_10, 0) = ((MR_Box) (hlds__pred_table__FuncName_6));
      MR_hl_field(MR_mktag(0), hlds__pred_table__NA_10, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
    }
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameArityIndex_9, ((MR_Box) (hlds__pred_table__NA_10)), &hlds__pred_table__conv0_PredIdsPrime_11);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__PredIdsPrime_11 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_11);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_11;
    else
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(
  MR_Word hlds__pred_table__PredicateTable_5,
  MR_String hlds__pred_table__PredName_6,
  MR_Integer hlds__pred_table__Arity_7,
  MR_Word * hlds__pred_table__PredIds_8)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredNameArityIndex_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
    MR_Word hlds__pred_table__NA_10;
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
    MR_Word hlds__pred_table__PredIdsPrime_11;
    MR_Box hlds__pred_table__conv0_PredIdsPrime_11;

    {
      hlds__pred_table__NA_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__NA_10, 0) = ((MR_Box) (hlds__pred_table__PredName_6));
      MR_hl_field(MR_mktag(0), hlds__pred_table__NA_10, 1) = ((MR_Box) (hlds__pred_table__Arity_7));
    }
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameArityIndex_9, ((MR_Box) (hlds__pred_table__NA_10)), &hlds__pred_table__conv0_PredIdsPrime_11);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__PredIdsPrime_11 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_11);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_11;
    else
      *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_arity_4_p_0(
  MR_Word hlds__pred_table__PredicateTable_5,
  MR_String hlds__pred_table__Name_6,
  MR_Integer hlds__pred_table__Arity_7,
  MR_Word * hlds__pred_table__PredIds_8)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredPredIds_9;
    MR_Word hlds__pred_table__FuncPredIds_10;

    {
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__PredPredIds_9);
    }
    {
      hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_6, hlds__pred_table__Arity_7, &hlds__pred_table__FuncPredIds_10);
    }
    {
      *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_10, hlds__pred_table__PredPredIds_9);
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_name_3_p_0(
  MR_Word hlds__pred_table__PredicateTable_4,
  MR_String hlds__pred_table__FuncName_5,
  MR_Word * hlds__pred_table__PredIds_6)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__FuncNameIndex_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
    MR_Word hlds__pred_table__PredIdsPrime_8;
    MR_Box hlds__pred_table__conv0_PredIdsPrime_8;

    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_7, ((MR_Box) (hlds__pred_table__FuncName_5)), &hlds__pred_table__conv0_PredIdsPrime_8);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__PredIdsPrime_8 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_8);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_8;
    else
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_name_3_p_0(
  MR_Word hlds__pred_table__PredicateTable_4,
  MR_String hlds__pred_table__PredName_5,
  MR_Word * hlds__pred_table__PredIds_6)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredNameIndex_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
    MR_Word hlds__pred_table__PredIdsPrime_8;
    MR_Box hlds__pred_table__conv0_PredIdsPrime_8;

    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_7, ((MR_Box) (hlds__pred_table__PredName_5)), &hlds__pred_table__conv0_PredIdsPrime_8);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__PredIdsPrime_8 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_8);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      *hlds__pred_table__PredIds_6 = hlds__pred_table__PredIdsPrime_8;
    else
      *hlds__pred_table__PredIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_name_3_p_0(
  MR_Word hlds__pred_table__PredicateTable_4,
  MR_String hlds__pred_table__Name_5,
  MR_Word * hlds__pred_table__PredIds_6)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__PredPredIds_7;
    MR_Word hlds__pred_table__FuncPredIds_8;
    MR_Word hlds__pred_table__PredNameIndex_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
    MR_Word hlds__pred_table__FuncNameIndex_29;
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
    MR_Word hlds__pred_table__PredIdsPrime_14;
    MR_Box hlds__pred_table__conv0_PredIdsPrime_14;
    MR_Word hlds__pred_table__V_31_31;
    MR_Word hlds__pred_table__V_32_32;
    MR_Word hlds__pred_table__V_33_33;
    MR_Word hlds__pred_table__V_34_34;
    MR_Word hlds__pred_table__V_35_35;
    MR_Word hlds__pred_table__V_36_36;
    MR_Word hlds__pred_table__V_37_37;
    MR_Word hlds__pred_table__V_38_38;
    MR_Word hlds__pred_table__V_39_39;
    MR_Word hlds__pred_table__PredIdsPrime_30;
    MR_Box hlds__pred_table__conv1_PredIdsPrime_30;

    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_13, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv0_PredIdsPrime_14);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__PredIdsPrime_14 = ((MR_Word) hlds__pred_table__conv0_PredIdsPrime_14);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      hlds__pred_table__PredPredIds_7 = hlds__pred_table__PredIdsPrime_14;
    else
      hlds__pred_table__PredPredIds_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 0)));
    hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 1)));
    hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 2)));
    hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 3)));
    hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 4)));
    hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 5)));
    hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 6)));
    hlds__pred_table__FuncNameIndex_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 7)));
    hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 8)));
    hlds__pred_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_4, (MR_Integer) 9)));
    {
      hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_29, ((MR_Box) (hlds__pred_table__Name_5)), &hlds__pred_table__conv1_PredIdsPrime_30);
    }
    if (hlds__pred_table__succeeded)
      {
        hlds__pred_table__PredIdsPrime_30 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_30);
        hlds__pred_table__succeeded = MR_TRUE;
      }
    if (hlds__pred_table__succeeded)
      hlds__pred_table__FuncPredIds_8 = hlds__pred_table__PredIdsPrime_30;
    else
      hlds__pred_table__FuncPredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      *hlds__pred_table__PredIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_8, hlds__pred_table__PredPredIds_7);
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(
  MR_Word hlds__pred_table__PredicateTable_6,
  MR_Word hlds__pred_table__IsFullyQualified_7,
  MR_Word hlds__pred_table__SymName_8,
  MR_Integer hlds__pred_table__Arity_9,
  MR_Word * hlds__pred_table__PredIds_10)
{
  {
    MR_bool hlds__pred_table__succeeded;

    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

        {
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
      }
    else
      {
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

        switch (hlds__pred_table__IsFullyQualified_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
            }
            break;
        }
      }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(
  MR_Word hlds__pred_table__PredicateTable_6,
  MR_Word hlds__pred_table__IsFullyQualified_7,
  MR_Word hlds__pred_table__SymName_8,
  MR_Integer hlds__pred_table__Arity_9,
  MR_Word * hlds__pred_table__PredIds_10)
{
  {
    MR_bool hlds__pred_table__succeeded;

    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));

        {
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
        }
      }
    else
      {
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

        switch (hlds__pred_table__IsFullyQualified_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, hlds__pred_table__PredIds_10);
            }
            break;
        }
      }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(
  MR_Word hlds__pred_table__PredicateTable_6,
  MR_Word hlds__pred_table__IsFullyQualified_7,
  MR_Word hlds__pred_table__SymName_8,
  MR_Integer hlds__pred_table__Arity_9,
  MR_Word * hlds__pred_table__PredIds_10)
{
  {
    MR_bool hlds__pred_table__succeeded;

    if (((MR_tag((MR_Word) hlds__pred_table__SymName_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__pred_table__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 0)));
        MR_String hlds__pred_table__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_8, (MR_Integer) 1)));
        MR_Word hlds__pred_table__PredPredIds_20;
        MR_Word hlds__pred_table__FuncPredIds_21;

        {
          hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_20);
        }
        {
          hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__IsFullyQualified_7, hlds__pred_table__Module_12, hlds__pred_table__Name_13, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_21);
        }
        {
          *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_21, hlds__pred_table__PredPredIds_20);
        }
      }
    else
      {
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_8, (MR_Integer) 0)));

        switch (hlds__pred_table__IsFullyQualified_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__pred_table__PredIds_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__pred_table__PredPredIds_27;
              MR_Word hlds__pred_table__FuncPredIds_28;

              {
                hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__PredPredIds_27);
              }
              {
                hlds__pred_table__predicate_table_lookup_func_name_arity_4_p_0(hlds__pred_table__PredicateTable_6, hlds__pred_table__Name_11, hlds__pred_table__Arity_9, &hlds__pred_table__FuncPredIds_28);
              }
              {
                *hlds__pred_table__PredIds_10 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_28, hlds__pred_table__PredPredIds_27);
              }
            }
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

    {
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_func_sym_4_p_0(
  MR_Word hlds__pred_table__PredicateTable_5,
  MR_Word hlds__pred_table__IsFullyQualified_6,
  MR_Word hlds__pred_table__SymName_7,
  MR_Word * hlds__pred_table__PredIds_8)
{
  {
    MR_bool hlds__pred_table__succeeded;

    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
        MR_Word hlds__pred_table__Func_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
        MR_Word hlds__pred_table__Arities_18;
        MR_Word hlds__pred_table__V_21_21;
        MR_Box hlds__pred_table__conv0_Arities_18;

        {
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
        }
        {
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Func_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
            hlds__pred_table__succeeded = MR_TRUE;
          }
        if (hlds__pred_table__succeeded)
          {
            MR_Word hlds__pred_table__PredIdLists_19;
            MR_Word hlds__pred_table__PredIds0_20;

            {
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
            {
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
            switch (hlds__pred_table__IsFullyQualified_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
                  MR_Word hlds__pred_table__V_47_47;
                  MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
                  MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
                  MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
                  MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
                  MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
                  MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
                  MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
                  MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

                  {
                    hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_func_sym_4_p_0_1));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
                  }
                  {
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
                  }
                }
                break;
              case (MR_Integer) 1:
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
                break;
            }
          }
        else
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

        switch (hlds__pred_table__IsFullyQualified_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__pred_table__FuncNameIndex_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
              MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
              MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
              MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
              MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
              MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
              MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
              MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
              MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
              MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
              MR_Word hlds__pred_table__PredIdsPrime_65;
              MR_Box hlds__pred_table__conv1_PredIdsPrime_65;

              {
                hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__FuncNameIndex_64, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_65);
              }
              if (hlds__pred_table__succeeded)
                {
                  hlds__pred_table__PredIdsPrime_65 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_65);
                  hlds__pred_table__succeeded = MR_TRUE;
                }
              if (hlds__pred_table__succeeded)
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_65;
              else
                *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

    {
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(
  MR_Word hlds__pred_table__PredicateTable_5,
  MR_Word hlds__pred_table__IsFullyQualified_6,
  MR_Word hlds__pred_table__SymName_7,
  MR_Word * hlds__pred_table__PredIds_8)
{
  {
    MR_bool hlds__pred_table__succeeded;

    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
        MR_Word hlds__pred_table__Pred_MNA_Index_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
        MR_Word hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
        MR_Word hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
        MR_Word hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
        MR_Word hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
        MR_Word hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
        MR_Word hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
        MR_Word hlds__pred_table__Arities_18;
        MR_Word hlds__pred_table__V_21_21;
        MR_Box hlds__pred_table__conv0_Arities_18;

        {
          hlds__pred_table__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 0) = ((MR_Box) (hlds__pred_table__Module_10));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_21_21, 1) = ((MR_Box) (hlds__pred_table__Name_11));
        }
        {
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_17, ((MR_Box) (hlds__pred_table__V_21_21)), &hlds__pred_table__conv0_Arities_18);
        }
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__Arities_18 = ((MR_Word) hlds__pred_table__conv0_Arities_18);
            hlds__pred_table__succeeded = MR_TRUE;
          }
        if (hlds__pred_table__succeeded)
          {
            MR_Word hlds__pred_table__PredIdLists_19;
            MR_Word hlds__pred_table__PredIds0_20;

            {
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_18, &hlds__pred_table__PredIdLists_19);
            }
            {
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_19, &hlds__pred_table__PredIds0_20);
            }
            switch (hlds__pred_table__IsFullyQualified_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__pred_table__Preds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
                  MR_Word hlds__pred_table__V_47_47;
                  MR_Word hlds__pred_table__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
                  MR_Word hlds__pred_table__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
                  MR_Word hlds__pred_table__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
                  MR_Word hlds__pred_table__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
                  MR_Word hlds__pred_table__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
                  MR_Word hlds__pred_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
                  MR_Word hlds__pred_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
                  MR_Word hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

                  {
                    hlds__pred_table__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0_1));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 3) = ((MR_Box) (hlds__pred_table__Preds_44));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_47_47, 4) = ((MR_Box) (hlds__pred_table__Module_10));
                  }
                  {
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_47_47, hlds__pred_table__PredIds0_20, hlds__pred_table__PredIds_8);
                  }
                }
                break;
              case (MR_Integer) 1:
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIds0_20;
                break;
            }
          }
        else
          *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

        switch (hlds__pred_table__IsFullyQualified_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__pred_table__PredNameIndex_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
              MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
              MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
              MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
              MR_Word hlds__pred_table__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
              MR_Word hlds__pred_table__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
              MR_Word hlds__pred_table__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
              MR_Word hlds__pred_table__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
              MR_Word hlds__pred_table__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
              MR_Word hlds__pred_table__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
              MR_Word hlds__pred_table__PredIdsPrime_65;
              MR_Box hlds__pred_table__conv1_PredIdsPrime_65;

              {
                hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__PredNameIndex_64, ((MR_Box) (hlds__pred_table__Name_9)), &hlds__pred_table__conv1_PredIdsPrime_65);
              }
              if (hlds__pred_table__succeeded)
                {
                  hlds__pred_table__PredIdsPrime_65 = ((MR_Word) hlds__pred_table__conv1_PredIdsPrime_65);
                  hlds__pred_table__succeeded = MR_TRUE;
                }
              if (hlds__pred_table__succeeded)
                *hlds__pred_table__PredIds_8 = hlds__pred_table__PredIdsPrime_65;
              else
                *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;

    {
      hlds__pred_table__succeeded = hlds__pred_table__pred_id_matches_module_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) hlds__pred_table__wrapper_arg_1));
    }
    return hlds__pred_table__succeeded;
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_lookup_sym_4_p_0(
  MR_Word hlds__pred_table__PredicateTable_5,
  MR_Word hlds__pred_table__IsFullyQualified_6,
  MR_Word hlds__pred_table__SymName_7,
  MR_Word * hlds__pred_table__PredIds_8)
{
  {
    MR_bool hlds__pred_table__succeeded;

    if (((MR_tag((MR_Word) hlds__pred_table__SymName_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__pred_table__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 0)));
        MR_String hlds__pred_table__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__pred_table__SymName_7, (MR_Integer) 1)));
        MR_Word hlds__pred_table__PredPredIds_17;
        MR_Word hlds__pred_table__FuncPredIds_18;
        MR_Word hlds__pred_table__Pred_MNA_Index_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
        MR_Word hlds__pred_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
        MR_Word hlds__pred_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
        MR_Word hlds__pred_table__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
        MR_Word hlds__pred_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
        MR_Word hlds__pred_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
        MR_Word hlds__pred_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
        MR_Word hlds__pred_table__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
        MR_Word hlds__pred_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
        MR_Word hlds__pred_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));
        MR_Word hlds__pred_table__Arities_26;
        MR_Word hlds__pred_table__V_29_29;
        MR_Box hlds__pred_table__conv0_Arities_26;

        {
          hlds__pred_table__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 0) = ((MR_Box) (hlds__pred_table__Module_10));
          MR_hl_field(MR_mktag(0), hlds__pred_table__V_29_29, 1) = ((MR_Box) (hlds__pred_table__Name_11));
        }
        {
          hlds__pred_table__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pred_table_scalar_common_2[0], (MR_Word) &hlds__pred_table_scalar_common_2[1], hlds__pred_table__Pred_MNA_Index_25, ((MR_Box) (hlds__pred_table__V_29_29)), &hlds__pred_table__conv0_Arities_26);
        }
        if (hlds__pred_table__succeeded)
          {
            hlds__pred_table__Arities_26 = ((MR_Word) hlds__pred_table__conv0_Arities_26);
            hlds__pred_table__succeeded = MR_TRUE;
          }
        if (hlds__pred_table__succeeded)
          {
            MR_Word hlds__pred_table__PredIdLists_27;
            MR_Word hlds__pred_table__PredIds0_28;

            {
              mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pred_table_scalar_common_1[0], hlds__pred_table__Arities_26, &hlds__pred_table__PredIdLists_27);
            }
            {
              mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__PredIdLists_27, &hlds__pred_table__PredIds0_28);
            }
            switch (hlds__pred_table__IsFullyQualified_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__pred_table__Preds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 0)));
                  MR_Word hlds__pred_table__V_55_55;
                  MR_Word hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 1)));
                  MR_Word hlds__pred_table__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 2)));
                  MR_Word hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 3)));
                  MR_Word hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 4)));
                  MR_Word hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 5)));
                  MR_Word hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 6)));
                  MR_Word hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 7)));
                  MR_Word hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 8)));
                  MR_Word hlds__pred_table__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_5, (MR_Integer) 9)));

                  {
                    hlds__pred_table__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 1) = ((MR_Box) (hlds__pred_table__predicate_table_lookup_sym_4_p_0_1));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 3) = ((MR_Box) (hlds__pred_table__Preds_52));
                    MR_hl_field(MR_mktag(0), hlds__pred_table__V_55_55, 4) = ((MR_Box) (hlds__pred_table__Module_10));
                  }
                  {
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__V_55_55, hlds__pred_table__PredIds0_28, &hlds__pred_table__PredPredIds_17);
                  }
                }
                break;
              case (MR_Integer) 1:
                hlds__pred_table__PredPredIds_17 = hlds__pred_table__PredIds0_28;
                break;
            }
          }
        else
          hlds__pred_table__PredPredIds_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__pred_table__predicate_table_lookup_func_module_name_5_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__IsFullyQualified_6, hlds__pred_table__Module_10, hlds__pred_table__Name_11, &hlds__pred_table__FuncPredIds_18);
        }
        {
          *hlds__pred_table__PredIds_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__FuncPredIds_18, hlds__pred_table__PredPredIds_17);
        }
      }
    else
      {
        MR_String hlds__pred_table__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__pred_table__SymName_7, (MR_Integer) 0)));

        switch (hlds__pred_table__IsFullyQualified_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__pred_table__PredIds_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              hlds__pred_table__predicate_table_lookup_name_3_p_0(hlds__pred_table__PredicateTable_5, hlds__pred_table__Name_9, hlds__pred_table__PredIds_8);
            }
            break;
        }
      }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_remove_predicate_3_p_0(
  MR_Word hlds__pred_table__PredId_4,
  MR_Word hlds__pred_table__PredicateTable0_5,
  MR_Word * hlds__pred_table__PredicateTable_6)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word hlds__pred_table__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 0)));
    MR_Word hlds__pred_table__NextPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 1)));
    MR_Word hlds__pred_table__ValidPredIds0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 2)));
    MR_Word hlds__pred_table__AccessibilityTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 3)));
    MR_Word hlds__pred_table__PredN0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 4)));
    MR_Word hlds__pred_table__PredNA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 5)));
    MR_Word hlds__pred_table__PredMNA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 6)));
    MR_Word hlds__pred_table__FuncN0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 7)));
    MR_Word hlds__pred_table__FuncNA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 8)));
    MR_Word hlds__pred_table__FuncMNA0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_5, (MR_Integer) 9)));
    MR_Word hlds__pred_table__ValidPredIds_17;
    MR_Word hlds__pred_table__PredInfo_18;
    MR_Word hlds__pred_table__Preds_19;
    MR_Word hlds__pred_table__AccessibilityTable_21;
    MR_Word hlds__pred_table__Module_22;
    MR_String hlds__pred_table__Name_23;
    MR_Integer hlds__pred_table__Arity_24;
    MR_Word hlds__pred_table__IsPredOrFunc_25;
    MR_Box hlds__pred_table__conv0_PredInfo_18;
    MR_Word hlds__pred_table__V_20_20;
    MR_Box hlds__pred_table__conv1_V_20_20;

    {
      mercury__set_tree234__delete_3_p_0(hlds__pred_table__TypeCtorInfo_34_34, ((MR_Box) (hlds__pred_table__PredId_4)), hlds__pred_table__ValidPredIds0_9, &hlds__pred_table__ValidPredIds_17);
    }
    {
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv0_PredInfo_18, hlds__pred_table__Preds0_7, &hlds__pred_table__Preds_19);
    }
    hlds__pred_table__PredInfo_18 = ((MR_Word) hlds__pred_table__conv0_PredInfo_18);
    {
      mercury__map__det_remove_4_p_0(hlds__pred_table__TypeCtorInfo_34_34, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, ((MR_Box) (hlds__pred_table__PredId_4)), &hlds__pred_table__conv1_V_20_20, hlds__pred_table__AccessibilityTable0_10, &hlds__pred_table__AccessibilityTable_21);
    }
    hlds__pred_table__V_20_20 = ((MR_Word) hlds__pred_table__conv1_V_20_20);
    {
      hlds__pred_table__Module_22 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__pred_table__PredInfo_18);
    }
    {
      hlds__pred_table__Name_23 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__pred_table__PredInfo_18);
    }
    {
      hlds__pred_table__Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__pred_table__PredInfo_18);
    }
    {
      hlds__pred_table__IsPredOrFunc_25 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__pred_table__PredInfo_18);
    }
    switch (hlds__pred_table__IsPredOrFunc_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__pred_table__FuncArity_29 = (hlds__pred_table__Arity_24 - (MR_Integer) 1);
          MR_Word hlds__pred_table__FuncN_30;
          MR_Word hlds__pred_table__FuncNA_31;
          MR_Word hlds__pred_table__FuncMNA_32;

          {
            hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__FuncArity_29, hlds__pred_table__PredId_4, hlds__pred_table__FuncN0_14, &hlds__pred_table__FuncN_30, hlds__pred_table__FuncNA0_15, &hlds__pred_table__FuncNA_31, hlds__pred_table__FuncMNA0_16, &hlds__pred_table__FuncMNA_32);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            *hlds__pred_table__PredicateTable_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN0_11));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA0_12));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA0_13));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN_30));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA_31));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA_32));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__pred_table__PredN_26;
          MR_Word hlds__pred_table__PredNA_27;
          MR_Word hlds__pred_table__PredMNA_28;

          {
            hlds__pred_table__predicate_table_remove_from_index_10_p_0(hlds__pred_table__Module_22, hlds__pred_table__Name_23, hlds__pred_table__Arity_24, hlds__pred_table__PredId_4, hlds__pred_table__PredN0_11, &hlds__pred_table__PredN_26, hlds__pred_table__PredNA0_12, &hlds__pred_table__PredNA_27, hlds__pred_table__PredMNA0_13, &hlds__pred_table__PredMNA_28);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            *hlds__pred_table__PredicateTable_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_17));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_21));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__PredN_26));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__PredNA_27));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__PredMNA_28));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__FuncN0_14));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__FuncNA0_15));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__FuncMNA0_16));
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_make_pred_ids_invalid_3_p_0(
  MR_Word hlds__pred_table__InvalidPredIds_4,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
    MR_Word hlds__pred_table__ValidPredIds_7;
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
    MR_Word hlds__pred_table__V_20_20;
    MR_Word hlds__pred_table__V_21_21;
    MR_Word hlds__pred_table__V_23_23;
    MR_Word hlds__pred_table__V_24_24;
    MR_Word hlds__pred_table__V_25_25;
    MR_Word hlds__pred_table__V_26_26;
    MR_Word hlds__pred_table__V_27_27;
    MR_Word hlds__pred_table__V_28_28;
    MR_Word hlds__pred_table__V_29_29;
    MR_Word hlds__pred_table__V_22_22;

    {
      mercury__set_tree234__delete_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__pred_table__InvalidPredIds_4, hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_make_pred_id_invalid_3_p_0(
  MR_Word hlds__pred_table__InvalidPredId_4,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_9)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__ValidPredIds0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
    MR_Word hlds__pred_table__ValidPredIds_7;
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
    MR_Word hlds__pred_table__V_20_20;
    MR_Word hlds__pred_table__V_21_21;
    MR_Word hlds__pred_table__V_23_23;
    MR_Word hlds__pred_table__V_24_24;
    MR_Word hlds__pred_table__V_25_25;
    MR_Word hlds__pred_table__V_26_26;
    MR_Word hlds__pred_table__V_27_27;
    MR_Word hlds__pred_table__V_28_28;
    MR_Word hlds__pred_table__V_29_29;
    MR_Word hlds__pred_table__V_22_22;

    {
      mercury__set_tree234__delete_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__pred_table__InvalidPredId_4)), hlds__pred_table__ValidPredIds0_6, &hlds__pred_table__ValidPredIds_7);
    }
    hlds__pred_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 0)));
    hlds__pred_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 1)));
    hlds__pred_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 2)));
    hlds__pred_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 3)));
    hlds__pred_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 4)));
    hlds__pred_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 5)));
    hlds__pred_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 6)));
    hlds__pred_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 7)));
    hlds__pred_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 8)));
    hlds__pred_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_8, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__V_20_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_21_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_23_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_24_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_25_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_26_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_27_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_28_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_29_29));
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(
  MR_Word hlds__pred_table__PredicateTable_3,
  MR_Word * hlds__pred_table__ValidPredIds_4)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_7_7;
    MR_Word hlds__pred_table__V_8_8;
    MR_Word hlds__pred_table__V_9_9;
    MR_Word hlds__pred_table__V_10_10;
    MR_Word hlds__pred_table__V_11_11;
    MR_Word hlds__pred_table__V_12_12;
    MR_Word hlds__pred_table__V_13_13;

    *hlds__pred_table__ValidPredIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
    hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_set_preds_3_p_0(
  MR_Word hlds__pred_table__Preds_4,
  MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_7)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 9)));
    MR_Word hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pred_table__STATE_VARIABLE_PredicateTable_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__V_18_18));
    }
  }
}

static void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0_1(
  MR_Box hlds__pred_table__closure_arg,
  MR_Box hlds__pred_table__wrapper_arg_1,
  MR_Box hlds__pred_table__wrapper_arg_2,
  MR_Box * hlds__pred_table__wrapper_arg_3)
{
  {
    MR_Box hlds__pred_table__closure = hlds__pred_table__closure_arg;
    MR_Word hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20;

    {
      hlds__pred_table__reinsert_for_restrict_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__closure, (MR_Integer) 5))), ((MR_Word) hlds__pred_table__wrapper_arg_1), ((MR_Word) hlds__pred_table__wrapper_arg_2), &hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20);
    }
    *hlds__pred_table__wrapper_arg_3 = ((MR_Box) (hlds__pred_table__conv0_STATE_VARIABLE_PredicateTable_20));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_restrict_4_p_0(
  MR_Word hlds__pred_table__PartialQualInfo_5,
  MR_Word hlds__pred_table__PredIds_6,
  MR_Word hlds__pred_table__OrigPredicateTable_7,
  MR_Word * hlds__pred_table__STATE_VARIABLE_PredicateTable_11)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__TypeCtorInfo_24_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word hlds__pred_table__TypeCtorInfo_27_53;
    MR_Word hlds__pred_table__TypeInfo_28_54;
    MR_Word hlds__pred_table__TypeCtorInfo_29_55;
    MR_Word hlds__pred_table__TypeInfo_30_56;
    MR_Word hlds__pred_table__TypeInfo_31_57;
    MR_Word hlds__pred_table__Preds_9;
    MR_Word hlds__pred_table__AccessibilityTable_10;
    MR_Word hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12;
    MR_Word hlds__pred_table__V_13_13;
    MR_Word hlds__pred_table__NextPredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
    MR_Word hlds__pred_table__V_32_32;
    MR_Word hlds__pred_table__V_33_33;
    MR_Word hlds__pred_table__V_34_34;
    MR_Word hlds__pred_table__V_35_35;
    MR_Word hlds__pred_table__V_36_36;
    MR_Word hlds__pred_table__V_37_37;
    MR_Word hlds__pred_table__V_38_38;
    MR_Word hlds__pred_table__V_39_39;
    MR_Word hlds__pred_table__V_40_40;
    MR_Word hlds__pred_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
    MR_Word hlds__pred_table__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
    MR_Word hlds__pred_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
    MR_Word hlds__pred_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
    MR_Word hlds__pred_table__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
    MR_Word hlds__pred_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
    MR_Word hlds__pred_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
    MR_Word hlds__pred_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
    MR_Word hlds__pred_table__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
    MR_Word hlds__pred_table__V_59_59;
    MR_Word hlds__pred_table__V_60_60;
    MR_Word hlds__pred_table__V_62_62;
    MR_Word hlds__pred_table__V_63_63;
    MR_Word hlds__pred_table__V_64_64;
    MR_Word hlds__pred_table__V_65_65;
    MR_Word hlds__pred_table__V_66_66;
    MR_Word hlds__pred_table__V_67_67;
    MR_Box hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11;

    {
      hlds__pred_table__V_32_32 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0);
    }
    {
      hlds__pred_table__V_33_33 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50);
    }
    {
      hlds__pred_table__V_34_34 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_24_50, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0);
    }
    hlds__pred_table__TypeCtorInfo_27_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    hlds__pred_table__TypeInfo_28_54 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
    {
      hlds__pred_table__V_35_35 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
    hlds__pred_table__TypeCtorInfo_29_55 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
    {
      hlds__pred_table__V_36_36 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
    hlds__pred_table__TypeInfo_30_56 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
    hlds__pred_table__TypeInfo_31_57 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
    {
      hlds__pred_table__V_37_37 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
    {
      hlds__pred_table__V_38_38 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_27_53, hlds__pred_table__TypeInfo_28_54);
    }
    {
      hlds__pred_table__V_39_39 = mercury__map__init_0_f_0(hlds__pred_table__TypeCtorInfo_29_55, hlds__pred_table__TypeInfo_28_54);
    }
    {
      hlds__pred_table__V_40_40 = mercury__map__init_0_f_0(hlds__pred_table__TypeInfo_30_56, hlds__pred_table__TypeInfo_31_57);
    }
    {
      hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 0) = ((MR_Box) (hlds__pred_table__V_32_32));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 1) = ((MR_Box) (hlds__pred_table__NextPredId_31));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 2) = ((MR_Box) (hlds__pred_table__V_33_33));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 3) = ((MR_Box) (hlds__pred_table__V_34_34));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 4) = ((MR_Box) (hlds__pred_table__V_35_35));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 5) = ((MR_Box) (hlds__pred_table__V_36_36));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 6) = ((MR_Box) (hlds__pred_table__V_37_37));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 7) = ((MR_Box) (hlds__pred_table__V_38_38));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 8) = ((MR_Box) (hlds__pred_table__V_39_39));
      MR_hl_field(MR_mktag(0), hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12, 9) = ((MR_Box) (hlds__pred_table__V_40_40));
    }
    hlds__pred_table__Preds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 0)));
    hlds__pred_table__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 1)));
    hlds__pred_table__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 2)));
    hlds__pred_table__AccessibilityTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 3)));
    hlds__pred_table__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 4)));
    hlds__pred_table__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 5)));
    hlds__pred_table__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 6)));
    hlds__pred_table__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 7)));
    hlds__pred_table__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 8)));
    hlds__pred_table__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__OrigPredicateTable_7, (MR_Integer) 9)));
    {
      hlds__pred_table__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 0) = ((MR_Box) (&hlds__pred_table_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 1) = ((MR_Box) (hlds__pred_table__predicate_table_restrict_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 3) = ((MR_Box) (hlds__pred_table__PartialQualInfo_5));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 4) = ((MR_Box) (hlds__pred_table__Preds_9));
      MR_hl_field(MR_mktag(0), hlds__pred_table__V_13_13, 5) = ((MR_Box) (hlds__pred_table__AccessibilityTable_10));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0, hlds__pred_table__V_13_13, hlds__pred_table__PredIds_6, ((MR_Box) (hlds__pred_table__STATE_VARIABLE_PredicateTable_12_12)), &hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
    }
    *hlds__pred_table__STATE_VARIABLE_PredicateTable_11 = ((MR_Word) hlds__pred_table__conv1_STATE_VARIABLE_PredicateTable_11);
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_get_preds_2_p_0(
  MR_Word hlds__pred_table__PredicateTable_3,
  MR_Word * hlds__pred_table__HeadVar__2_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__V_4_4;
    MR_Word hlds__pred_table__V_5_5;
    MR_Word hlds__pred_table__V_6_6;
    MR_Word hlds__pred_table__V_7_7;
    MR_Word hlds__pred_table__V_8_8;
    MR_Word hlds__pred_table__V_9_9;
    MR_Word hlds__pred_table__V_10_10;
    MR_Word hlds__pred_table__V_11_11;
    MR_Word hlds__pred_table__V_12_12;

    *hlds__pred_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 0)));
    hlds__pred_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 1)));
    hlds__pred_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 2)));
    hlds__pred_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 3)));
    hlds__pred_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 4)));
    hlds__pred_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 5)));
    hlds__pred_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 6)));
    hlds__pred_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 7)));
    hlds__pred_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 8)));
    hlds__pred_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_optimize_2_p_0(
  MR_Word hlds__pred_table__PredicateTable0_3,
  MR_Word * hlds__pred_table__PredicateTable_4)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word hlds__pred_table__TypeInfo_22_22 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
    MR_Word hlds__pred_table__TypeCtorInfo_23_23;
    MR_Word hlds__pred_table__TypeInfo_24_24;
    MR_Word hlds__pred_table__TypeInfo_25_25;
    MR_Word hlds__pred_table__Preds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 0)));
    MR_Word hlds__pred_table__NextPredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 1)));
    MR_Word hlds__pred_table__ValidPredIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 2)));
    MR_Word hlds__pred_table__AccessibilityTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 3)));
    MR_Word hlds__pred_table__Pred_N_Index0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 4)));
    MR_Word hlds__pred_table__Pred_NA_Index0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 5)));
    MR_Word hlds__pred_table__Pred_MNA_Index0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 6)));
    MR_Word hlds__pred_table__Func_N_Index0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 7)));
    MR_Word hlds__pred_table__Func_NA_Index0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 8)));
    MR_Word hlds__pred_table__Func_MNA_Index0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pred_table__PredicateTable0_3, (MR_Integer) 9)));
    MR_Word hlds__pred_table__Pred_N_Index_15;
    MR_Word hlds__pred_table__Pred_NA_Index_16;
    MR_Word hlds__pred_table__Pred_MNA_Index_17;
    MR_Word hlds__pred_table__Func_N_Index_18;
    MR_Word hlds__pred_table__Func_NA_Index_19;
    MR_Word hlds__pred_table__Func_MNA_Index_20;

    {
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_N_Index0_9, &hlds__pred_table__Pred_N_Index_15);
    }
    hlds__pred_table__TypeCtorInfo_23_23 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
    {
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Pred_NA_Index0_10, &hlds__pred_table__Pred_NA_Index_16);
    }
    hlds__pred_table__TypeInfo_24_24 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
    hlds__pred_table__TypeInfo_25_25 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
    {
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Pred_MNA_Index0_11, &hlds__pred_table__Pred_MNA_Index_17);
    }
    {
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_21_21, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_N_Index0_12, &hlds__pred_table__Func_N_Index_18);
    }
    {
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeCtorInfo_23_23, hlds__pred_table__TypeInfo_22_22, hlds__pred_table__Func_NA_Index0_13, &hlds__pred_table__Func_NA_Index_19);
    }
    {
      mercury__map__optimize_2_p_0(hlds__pred_table__TypeInfo_24_24, hlds__pred_table__TypeInfo_25_25, hlds__pred_table__Func_MNA_Index0_14, &hlds__pred_table__Func_MNA_Index_20);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pred_table__PredicateTable_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_20));
    }
  }
}

void MR_CALL 
hlds__pred_table__predicate_table_init_1_p_0(
  MR_Word * hlds__pred_table__PredicateTable_2)
{
  {
    MR_bool hlds__pred_table__succeeded;
    MR_Word hlds__pred_table__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word hlds__pred_table__TypeCtorInfo_16_16;
    MR_Word hlds__pred_table__TypeInfo_17_17;
    MR_Word hlds__pred_table__TypeCtorInfo_18_18;
    MR_Word hlds__pred_table__TypeInfo_19_19;
    MR_Word hlds__pred_table__TypeInfo_20_20;
    MR_Word hlds__pred_table__Preds_3;
    MR_Word hlds__pred_table__NextPredId_4;
    MR_Word hlds__pred_table__ValidPredIds_5;
    MR_Word hlds__pred_table__AccessibilityTable_6;
    MR_Word hlds__pred_table__Pred_N_Index_7;
    MR_Word hlds__pred_table__Pred_NA_Index_8;
    MR_Word hlds__pred_table__Pred_MNA_Index_9;
    MR_Word hlds__pred_table__Func_N_Index_10;
    MR_Word hlds__pred_table__Func_NA_Index_11;
    MR_Word hlds__pred_table__Func_MNA_Index_12;

    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, &hlds__pred_table__Preds_3);
    }
    {
      hlds__pred_table__NextPredId_4 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
    {
      hlds__pred_table__ValidPredIds_5 = mercury__set_tree234__init_0_f_0(hlds__pred_table__TypeCtorInfo_13_13);
    }
    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_13_13, (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_accessibility_0, &hlds__pred_table__AccessibilityTable_6);
    }
    hlds__pred_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    hlds__pred_table__TypeInfo_17_17 = (MR_Word) &hlds__pred_table_scalar_common_1[0];
    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_N_Index_7);
    }
    hlds__pred_table__TypeCtorInfo_18_18 = (MR_Word) &hlds__pred_table__hlds__pred_table__type_ctor_info_name_arity_0;
    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Pred_NA_Index_8);
    }
    hlds__pred_table__TypeInfo_19_19 = (MR_Word) &hlds__pred_table_scalar_common_2[0];
    hlds__pred_table__TypeInfo_20_20 = (MR_Word) &hlds__pred_table_scalar_common_2[1];
    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Pred_MNA_Index_9);
    }
    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_16_16, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_N_Index_10);
    }
    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeCtorInfo_18_18, hlds__pred_table__TypeInfo_17_17, &hlds__pred_table__Func_NA_Index_11);
    }
    {
      mercury__map__init_1_p_0(hlds__pred_table__TypeInfo_19_19, hlds__pred_table__TypeInfo_20_20, &hlds__pred_table__Func_MNA_Index_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pred_table__PredicateTable_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pred_table__Preds_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pred_table__NextPredId_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pred_table__ValidPredIds_5));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__pred_table__AccessibilityTable_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__pred_table__Pred_N_Index_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__pred_table__Pred_NA_Index_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__pred_table__Pred_MNA_Index_9));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__pred_table__Func_N_Index_10));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__pred_table__Func_NA_Index_11));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__pred_table__Func_MNA_Index_12));
    }
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

/* :- end_module hlds.pred_table. */
