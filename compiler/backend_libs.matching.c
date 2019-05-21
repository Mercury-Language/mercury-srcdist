/*
** Automatically generated from `matching.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module backend_libs.matching. */
/* :- implementation. */

/*
INIT mercury__backend_libs__matching__init
ENDINIT
*/

#include "backend_libs.matching.mih"


#include "backend_libs.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0[2];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0[1];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0[1];

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[2];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0[1];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0[1];

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0[1];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0;

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1[1];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0[2];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0[2];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0[2];

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0[2];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0[1];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0[1];

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0[1];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0;

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0[2];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0[2];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0[2];

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0[3];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0[1];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0[1];

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_0_0[2];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0[1];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_0[1];

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0[7];

static const MR_ConstString backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0[7];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0[1];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0[1];

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0[2];

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0;

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[1];

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[1];

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0[1];

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0[1];

static MR_Word MR_CALL 
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__573__1_2_f_0(
  MR_Word backend_libs__matching__BenefitToCostMap_18,
  MR_Word backend_libs__matching__HeadVar__2_33);

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____matching_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1);

static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1);

static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
  MR_Word backend_libs__matching__ViaCellOccurringVars_3,
  MR_Word backend_libs__matching__FieldCostsBenefits_4);

static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
  MR_Word backend_libs__matching__CostToBenefitMap_4,
  MR_Word backend_libs__matching__CostNode_5);

static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
  MR_Word backend_libs__matching__CostToBenefitsMap_5,
  MR_Word backend_libs__matching__CostNode_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_10);

static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
  MR_Word backend_libs__matching__Costs_5,
  MR_Word backend_libs__matching__Benefit_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);

static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
  MR_Word backend_libs__matching__Benefits_5,
  MR_Word backend_libs__matching__Cost_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10,
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11,
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14);

static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_Costs_0_8,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Costs_9);

static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_Benefits_0_8,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Benefits_9);

static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
  MR_Integer backend_libs__matching__HeadVar__1_1,
  MR_Integer backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
  MR_Integer backend_libs__matching__Cur_4,
  MR_Word backend_libs__matching__Op_5);

static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
  MR_Integer backend_libs__matching__HeadVar__1_1,
  MR_Integer backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3);

static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
  MR_Integer backend_libs__matching__Cur_4,
  MR_Word backend_libs__matching__Op_5);

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
  MR_Word backend_libs__matching__CellVar_8,
  MR_Word backend_libs__matching__BeforeFlush_9,
  MR_Word backend_libs__matching__AfterFlush_10,
  MR_Word backend_libs__matching__CellVarFlushedLater_11,
  MR_Word backend_libs__matching__MatchingParams_12,
  MR_Word backend_libs__matching__FieldVar_13);

static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__FieldVar_2,
  MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0_3,
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostOps_4);

static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
  MR_Word backend_libs__matching__CellVar_5,
  MR_Word backend_libs__matching__CandidateArgVars_6,
  MR_Word backend_libs__matching__SegmentVars0_7,
  MR_Word * backend_libs__matching__SegmentVars_8);

static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_9(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_8(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_7(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_6(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_5(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_4(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_3(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box * backend_libs__matching__wrapper_arg_2);

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__MatchingCB_2);

static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
  MR_Word backend_libs__matching__SelectedCostNodes_5,
  MR_Word backend_libs__matching__Graph_6,
  MR_Word backend_libs__matching__Matching_7);

static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
  MR_Word backend_libs__matching__SelectedCostNodes_6,
  MR_Word backend_libs__matching__Graph_7,
  MR_Word backend_libs__matching__Matching_8,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_21);

static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
  MR_Word backend_libs__matching__BenefitNodes_4,
  MR_Word backend_libs__matching__Graph_5);

static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
  MR_Word backend_libs__matching__BenefitNodes_5,
  MR_Word backend_libs__matching__Graph_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0_9,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Matching_10);

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__MatchingBC_2);

static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
  MR_Word backend_libs__matching__Queue0_6,
  MR_Word backend_libs__matching__Seen0_7,
  MR_Word backend_libs__matching__Graph_8,
  MR_Word backend_libs__matching__Matching_9,
  MR_Word * backend_libs__matching__Path_10);

static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0_2,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Seen_3,
  MR_Word backend_libs__matching__BenefitNode_4,
  MR_Word backend_libs__matching__Path_5,
  MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0_6,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Queue_7);

static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word * backend_libs__matching__Unmatched_6);

static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__Matching0_2);

static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3,
  MR_Box backend_libs__matching__wrapper_arg_4,
  MR_Box * backend_libs__matching__wrapper_arg_5);

static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
  MR_Word backend_libs__matching__CostsBenefits_3);

static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
  MR_Integer backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__matching_scalar_common_1[8][2];

static /* final */ const MR_Box backend_libs__matching_scalar_common_2[13][3];

static /* final */ const MR_Box backend_libs__matching_scalar_common_3[1][8];

static /* final */ const MR_Box backend_libs__matching_scalar_common_4[4][6];

static /* final */ const MR_Box backend_libs__matching_scalar_common_5[6][7];

static /* final */ const MR_Box backend_libs__matching_scalar_common_6[1][10];

static /* final */ const MR_Box backend_libs__matching_scalar_common_7[3][5];




static /* final */ const MR_Box backend_libs__matching_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&backend_libs__matching_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__matching_scalar_common_2[3]))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching_scalar_common_1[6]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_3[0])),
    ((MR_Box) (backend_libs__matching__create_graph_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[2])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[3])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[2])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[3])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_7[1])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_7[2])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_4[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_5[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0)),
    ((MR_Box) (&backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0 = {
  (MR_String) "benefit_node",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_node_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_node_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_node",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0 = {
  (MR_String) "benefit_node_and_edge_list",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_node_and_edge_list",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0 = {
  (MR_String) "field_var_load",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1 = {
  (MR_String) "field_var_store",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0[2] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0,
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_operation_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_operation_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_operation",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0 = {
  (MR_String) "cost_node",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____cost_node_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____cost_node_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "cost_node",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0 = {
  (MR_String) "cell_var_load",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1 = {
  (MR_String) "cell_var_store",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0[2] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0,
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____cost_operation_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____cost_operation_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "cost_operation",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_edge_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__matching____Unify____edge_list_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____edge_list_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "edge_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0 = {
  (MR_String) "field_costs_benefits",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____field_costs_benefits_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____field_costs_benefits_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "field_costs_benefits",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0 = {
  (MR_String) "matching",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_matching_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_matching_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____matching_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____matching_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "matching",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_matching_0
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0[7] = {
  (MR_String) "cell_var_store_cost",
  (MR_String) "cell_var_load_cost",
  (MR_String) "field_var_store_cost",
  (MR_String) "field_var_load_cost",
  (MR_String) "one_path_op_ratio",
  (MR_String) "one_path_node_ratio",
  (MR_String) "include_all_candidates"
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0 = {
  (MR_String) "matching_params",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0,
  backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____matching_params_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____matching_params_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "matching_params",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_TypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0 = {
  (MR_String) "stack_slot_graph",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0
  }
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_stack_slot_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____stack_slot_graph_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____stack_slot_graph_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "stack_slot_graph",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0
};

static MR_Word MR_CALL 
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__573__1_2_f_0(
  MR_Word backend_libs__matching__BenefitToCostMap_18,
  MR_Word backend_libs__matching__HeadVar__2_33)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__HeadVar__3_34;
    MR_Box backend_libs__matching__conv0_HeadVar__3_34;

    {
      backend_libs__matching__conv0_HeadVar__3_34 = mercury__map__lookup_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__BenefitToCostMap_18, ((MR_Box) (backend_libs__matching__HeadVar__2_33)));
    }
    backend_libs__matching__HeadVar__3_34 = ((MR_Word) backend_libs__matching__conv0_HeadVar__3_34);
    return backend_libs__matching__HeadVar__3_34;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word backend_libs__matching__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__matching__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[0], &backend_libs__matching__Var_8, ((MR_Box) (backend_libs__matching__ArgX1_4)), ((MR_Box) (backend_libs__matching__ArgY1_5)));
        }
        backend_libs__matching__succeeded = (backend_libs__matching__Var_8 == (MR_Integer) 0);
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
        if (backend_libs__matching__succeeded)
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[1], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__ArgX2_6)), ((MR_Box) (backend_libs__matching__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
      {
        MR_Word backend_libs__matching__TypeInfo_10_10;
        MR_Word backend_libs__matching__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

        {
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_2[0], ((MR_Box) (backend_libs__matching__ArgX1_3)), ((MR_Box) (backend_libs__matching__ArgY1_4)));
        }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_2[1];
            {
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__ArgX2_5)), ((MR_Box) (backend_libs__matching__ArgY2_6)));
            }
          }
      }
    return backend_libs__matching__succeeded;
  }
}

void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_24 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_25 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_24 == backend_libs__matching__CastY_25);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer backend_libs__matching__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer backend_libs__matching__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer backend_libs__matching__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer backend_libs__matching__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer backend_libs__matching__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer backend_libs__matching__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer backend_libs__matching__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer backend_libs__matching__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word backend_libs__matching__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word backend_libs__matching__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word backend_libs__matching__Var_18;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__Var_18, backend_libs__matching__ArgX1_4, backend_libs__matching__ArgY1_5);
        }
        backend_libs__matching__succeeded = (backend_libs__matching__Var_18 == (MR_Integer) 0);
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
        if (backend_libs__matching__succeeded)
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_18;
        else
          {
            MR_Word backend_libs__matching__Var_19;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__Var_19, backend_libs__matching__ArgX2_6, backend_libs__matching__ArgY2_7);
            }
            backend_libs__matching__succeeded = (backend_libs__matching__Var_19 == (MR_Integer) 0);
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
            if (backend_libs__matching__succeeded)
              *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_19;
            else
              {
                MR_Word backend_libs__matching__Var_20;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__Var_20, backend_libs__matching__ArgX3_8, backend_libs__matching__ArgY3_9);
                }
                backend_libs__matching__succeeded = (backend_libs__matching__Var_20 == (MR_Integer) 0);
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
                if (backend_libs__matching__succeeded)
                  *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_20;
                else
                  {
                    MR_Word backend_libs__matching__Var_21;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__Var_21, backend_libs__matching__ArgX4_10, backend_libs__matching__ArgY4_11);
                    }
                    backend_libs__matching__succeeded = (backend_libs__matching__Var_21 == (MR_Integer) 0);
                    backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
                    if (backend_libs__matching__succeeded)
                      *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_21;
                    else
                      {
                        MR_Word backend_libs__matching__Var_22;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__Var_22, backend_libs__matching__ArgX5_12, backend_libs__matching__ArgY5_13);
                        }
                        backend_libs__matching__succeeded = (backend_libs__matching__Var_22 == (MR_Integer) 0);
                        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
                        if (backend_libs__matching__succeeded)
                          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_22;
                        else
                          {
                            MR_Word backend_libs__matching__Var_23;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__Var_23, backend_libs__matching__ArgX6_14, backend_libs__matching__ArgY6_15);
                            }
                            backend_libs__matching__succeeded = (backend_libs__matching__Var_23 == (MR_Integer) 0);
                            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
                            if (backend_libs__matching__succeeded)
                              *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_23;
                            else
                              {
                                MR_Integer backend_libs__matching__Var_33 = (MR_Integer) backend_libs__matching__ArgX7_16;
                                MR_Integer backend_libs__matching__Var_34 = (MR_Integer) backend_libs__matching__ArgY7_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__Var_33, backend_libs__matching__Var_34);
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
backend_libs__matching____Unify____matching_params_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_17 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_18 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_17 == backend_libs__matching__CastY_18);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
      {
        MR_Integer backend_libs__matching__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer backend_libs__matching__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer backend_libs__matching__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer backend_libs__matching__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer backend_libs__matching__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer backend_libs__matching__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer backend_libs__matching__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer backend_libs__matching__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word backend_libs__matching__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word backend_libs__matching__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 6)));

        backend_libs__matching__succeeded = (backend_libs__matching__ArgX1_3 == backend_libs__matching__ArgY1_4);
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__succeeded = (backend_libs__matching__ArgX2_5 == backend_libs__matching__ArgY2_6);
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__succeeded = (backend_libs__matching__ArgX3_7 == backend_libs__matching__ArgY3_8);
                if (backend_libs__matching__succeeded)
                  {
                    backend_libs__matching__succeeded = (backend_libs__matching__ArgX4_9 == backend_libs__matching__ArgY4_10);
                    if (backend_libs__matching__succeeded)
                      {
                        backend_libs__matching__succeeded = (backend_libs__matching__ArgX5_11 == backend_libs__matching__ArgY5_12);
                        if (backend_libs__matching__succeeded)
                          {
                            backend_libs__matching__succeeded = (backend_libs__matching__ArgX6_13 == backend_libs__matching__ArgY6_14);
                            if (backend_libs__matching__succeeded)
                              backend_libs__matching__succeeded = (backend_libs__matching__ArgX7_15 == backend_libs__matching__ArgY7_16);
                          }
                      }
                  }
              }
          }
      }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____matching_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word backend_libs__matching__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__matching__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[4], &backend_libs__matching__Var_8, ((MR_Box) (backend_libs__matching__ArgX1_4)), ((MR_Box) (backend_libs__matching__ArgY1_5)));
        }
        backend_libs__matching__succeeded = (backend_libs__matching__Var_8 == (MR_Integer) 0);
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
        if (backend_libs__matching__succeeded)
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[5], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__ArgX2_6)), ((MR_Box) (backend_libs__matching__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
      {
        MR_Word backend_libs__matching__TypeInfo_10_10;
        MR_Word backend_libs__matching__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

        {
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_2[4], ((MR_Box) (backend_libs__matching__ArgX1_3)), ((MR_Box) (backend_libs__matching__ArgY1_4)));
        }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_2[5];
            {
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__ArgX2_5)), ((MR_Box) (backend_libs__matching__ArgY2_6)));
            }
          }
      }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_12 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_13 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_12 == backend_libs__matching__CastY_13);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word backend_libs__matching__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word backend_libs__matching__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word backend_libs__matching__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], &backend_libs__matching__Var_10, ((MR_Box) (backend_libs__matching__ArgX1_4)), ((MR_Box) (backend_libs__matching__ArgY1_5)));
        }
        backend_libs__matching__succeeded = (backend_libs__matching__Var_10 == (MR_Integer) 0);
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
        if (backend_libs__matching__succeeded)
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_10;
        else
          {
            MR_Word backend_libs__matching__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[3], &backend_libs__matching__Var_11, ((MR_Box) (backend_libs__matching__ArgX2_6)), ((MR_Box) (backend_libs__matching__ArgY2_7)));
            }
            backend_libs__matching__succeeded = (backend_libs__matching__Var_11 == (MR_Integer) 0);
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
            if (backend_libs__matching__succeeded)
              *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__ArgX3_8)), ((MR_Box) (backend_libs__matching__ArgY3_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
      {
        MR_Word backend_libs__matching__TypeInfo_12_12;
        MR_Word backend_libs__matching__TypeInfo_13_13;
        MR_Word backend_libs__matching__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word backend_libs__matching__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));

        {
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], ((MR_Box) (backend_libs__matching__ArgX1_3)), ((MR_Box) (backend_libs__matching__ArgY1_4)));
        }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__TypeInfo_12_12 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
            {
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_12_12, ((MR_Box) (backend_libs__matching__ArgX2_5)), ((MR_Box) (backend_libs__matching__ArgY2_6)));
            }
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__TypeInfo_13_13 = (MR_Word) &backend_libs__matching_scalar_common_1[2];
                {
                  backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_13_13, ((MR_Box) (backend_libs__matching__ArgX3_7)), ((MR_Box) (backend_libs__matching__ArgY3_8)));
                }
              }
          }
      }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__Cast_HeadVar1_4 = backend_libs__matching__HeadVar__2_2;
    MR_Word backend_libs__matching__Cast_HeadVar2_5 = backend_libs__matching__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__matching__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__Cast_HeadVar1_3 = backend_libs__matching__HeadVar__1_1;
    MR_Word backend_libs__matching__Cast_HeadVar2_4 = backend_libs__matching__HeadVar__2_2;

    {
      backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], ((MR_Box) (backend_libs__matching__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__matching__Cast_HeadVar2_4)));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_9 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_8 == backend_libs__matching__CastY_9);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((backend_libs__matching__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
      else
        *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Integer backend_libs__matching__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

        if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Integer backend_libs__matching__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__Var_11, backend_libs__matching__ArgY1_5);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer backend_libs__matching__CastX_5 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
        MR_Integer backend_libs__matching__CastY_6 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

        backend_libs__matching__succeeded = (backend_libs__matching__CastY_6 == backend_libs__matching__CastX_5);
      }
    else
      {
        MR_Integer backend_libs__matching__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgY1_4;

        backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__matching__succeeded = (backend_libs__matching__ArgX1_3 == backend_libs__matching__ArgY1_4);
          }
      }
    return backend_libs__matching__succeeded;
  }
}

void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word backend_libs__matching__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__matching__Var_8;
        MR_Integer backend_libs__matching__CastX_17 = (MR_Integer) backend_libs__matching__ArgX1_4;
        MR_Integer backend_libs__matching__CastY_18 = (MR_Integer) backend_libs__matching__ArgY1_5;

        backend_libs__matching__succeeded = (backend_libs__matching__CastX_17 == backend_libs__matching__CastY_18);
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__Var_8 = (MR_Integer) 0;
                backend_libs__matching__succeeded = MR_TRUE;
              }
          }
        else
        if ((backend_libs__matching__ArgX1_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((backend_libs__matching__ArgY1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
              backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
              if (backend_libs__matching__succeeded)
                {
                  backend_libs__matching__Var_8 = (MR_Integer) 0;
                  backend_libs__matching__succeeded = MR_TRUE;
                }
            }
          else
            {
              backend_libs__matching__Var_8 = (MR_Integer) 2;
              backend_libs__matching__succeeded = MR_TRUE;
            }
        else
          {
            MR_Integer backend_libs__matching__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgX1_4, (MR_Integer) 0)));

            if ((backend_libs__matching__ArgY1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                backend_libs__matching__Var_8 = (MR_Integer) 1;
                backend_libs__matching__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer backend_libs__matching__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgY1_5, (MR_Integer) 0)));

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__Var_8, backend_libs__matching__Var_20, backend_libs__matching__ArgY1_14);
                }
                backend_libs__matching__succeeded = (backend_libs__matching__Var_8 == (MR_Integer) 0);
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
              }
          }
        if (backend_libs__matching__succeeded)
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__ArgX2_6, backend_libs__matching__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
      {
        MR_Word backend_libs__matching__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__CastX_13 = (MR_Integer) backend_libs__matching__ArgX1_3;
        MR_Integer backend_libs__matching__CastY_14 = (MR_Integer) backend_libs__matching__ArgY1_4;

        backend_libs__matching__succeeded = (backend_libs__matching__CastX_13 == backend_libs__matching__CastY_14);
        if (backend_libs__matching__succeeded)
          backend_libs__matching__succeeded = MR_TRUE;
        else
        if ((backend_libs__matching__ArgX1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer backend_libs__matching__CastX_11 = (MR_Integer) backend_libs__matching__ArgX1_3;
            MR_Integer backend_libs__matching__CastY_12 = (MR_Integer) backend_libs__matching__ArgY1_4;

            backend_libs__matching__succeeded = (backend_libs__matching__CastY_12 == backend_libs__matching__CastX_11);
          }
        else
          {
            MR_Integer backend_libs__matching__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgX1_3, (MR_Integer) 0)));
            MR_Integer backend_libs__matching__ArgY1_10;

            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__ArgY1_4)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgY1_4, (MR_Integer) 0)));
                backend_libs__matching__succeeded = (backend_libs__matching__ArgX1_9 == backend_libs__matching__ArgY1_10);
              }
          }
        if (backend_libs__matching__succeeded)
          backend_libs__matching__succeeded = (backend_libs__matching__ArgX2_5 == backend_libs__matching__ArgY2_6);
      }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_12 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_13 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_12 == backend_libs__matching__CastY_13);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__matching__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word backend_libs__matching__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__Var_16)), ((MR_Box) (backend_libs__matching__ArgY1_5)));
            }
          }
        else
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word backend_libs__matching__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word backend_libs__matching__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__Var_17)), ((MR_Box) (backend_libs__matching__ArgY1_11)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__matching__TypeInfo_9_9;
        MR_Word backend_libs__matching__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_4;

        backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__matching__TypeInfo_9_9 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
            {
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_9, ((MR_Box) (backend_libs__matching__ArgX1_3)), ((MR_Box) (backend_libs__matching__ArgY1_4)));
            }
          }
      }
    else
      {
        MR_Word backend_libs__matching__TypeInfo_10_10;
        MR_Word backend_libs__matching__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_6;

        backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
            {
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__ArgX1_5)), ((MR_Box) (backend_libs__matching__ArgY1_6)));
            }
          }
      }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word backend_libs__matching__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__matching__Var_8;

        {
          backend_libs__matching____Compare____benefit_node_0_0(&backend_libs__matching__Var_8, backend_libs__matching__ArgX1_4, backend_libs__matching__ArgY1_5);
        }
        backend_libs__matching__succeeded = (backend_libs__matching__Var_8 == (MR_Integer) 0);
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
        if (backend_libs__matching__succeeded)
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__ArgX2_6)), ((MR_Box) (backend_libs__matching__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
      {
        MR_Word backend_libs__matching__TypeInfo_9_9;
        MR_Word backend_libs__matching__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

        {
          backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_0_0(backend_libs__matching__ArgX1_3, backend_libs__matching__ArgY1_4);
        }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__TypeInfo_9_9 = (MR_Word) &backend_libs__matching_scalar_common_1[7];
            {
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_9, ((MR_Box) (backend_libs__matching__ArgX2_5)), ((MR_Box) (backend_libs__matching__ArgY2_6)));
            }
          }
      }
    return backend_libs__matching__succeeded;
  }
}

void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0(
  MR_Word * backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
    if (backend_libs__matching__succeeded)
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word backend_libs__matching__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__matching__Var_8;
        MR_Integer backend_libs__matching__CastX_21 = (MR_Integer) backend_libs__matching__ArgX1_4;
        MR_Integer backend_libs__matching__CastY_22 = (MR_Integer) backend_libs__matching__ArgY1_5;

        backend_libs__matching__succeeded = (backend_libs__matching__CastX_21 == backend_libs__matching__CastY_22);
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__Var_8 = (MR_Integer) 0;
                backend_libs__matching__succeeded = MR_TRUE;
              }
          }
        else
        if (((MR_tag((MR_Word) backend_libs__matching__ArgX1_4)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word backend_libs__matching__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__ArgX1_4, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) backend_libs__matching__ArgY1_5)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word backend_libs__matching__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__ArgY1_5, (MR_Integer) 0)));

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], &backend_libs__matching__Var_8, ((MR_Box) (backend_libs__matching__Var_25)), ((MR_Box) (backend_libs__matching__ArgY1_14)));
                }
                backend_libs__matching__succeeded = (backend_libs__matching__Var_8 == (MR_Integer) 0);
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
              }
            else
              {
                backend_libs__matching__Var_8 = (MR_Integer) 1;
                backend_libs__matching__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word backend_libs__matching__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgX1_4, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) backend_libs__matching__ArgY1_5)) == (MR_mktag((MR_Integer) 0))))
              {
                backend_libs__matching__Var_8 = (MR_Integer) 2;
                backend_libs__matching__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word backend_libs__matching__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgY1_5, (MR_Integer) 0)));

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], &backend_libs__matching__Var_8, ((MR_Box) (backend_libs__matching__Var_26)), ((MR_Box) (backend_libs__matching__ArgY1_20)));
                }
                backend_libs__matching__succeeded = (backend_libs__matching__Var_8 == (MR_Integer) 0);
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
              }
          }
        if (backend_libs__matching__succeeded)
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__ArgX2_6, backend_libs__matching__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
    if (backend_libs__matching__succeeded)
      backend_libs__matching__succeeded = MR_TRUE;
    else
      {
        MR_Word backend_libs__matching__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer backend_libs__matching__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer backend_libs__matching__CastX_13 = (MR_Integer) backend_libs__matching__ArgX1_3;
        MR_Integer backend_libs__matching__CastY_14 = (MR_Integer) backend_libs__matching__ArgY1_4;

        backend_libs__matching__succeeded = (backend_libs__matching__CastX_13 == backend_libs__matching__CastY_14);
        if (backend_libs__matching__succeeded)
          backend_libs__matching__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) backend_libs__matching__ArgX1_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word backend_libs__matching__TypeInfo_9_15;
            MR_Word backend_libs__matching__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__ArgX1_3, (MR_Integer) 0)));
            MR_Word backend_libs__matching__ArgY1_10;

            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__ArgY1_4)) == (MR_mktag((MR_Integer) 0)));
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__ArgY1_4, (MR_Integer) 0)));
                backend_libs__matching__TypeInfo_9_15 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
                {
                  backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_15, ((MR_Box) (backend_libs__matching__ArgX1_9)), ((MR_Box) (backend_libs__matching__ArgY1_10)));
                }
              }
          }
        else
          {
            MR_Word backend_libs__matching__TypeInfo_10_16;
            MR_Word backend_libs__matching__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgX1_3, (MR_Integer) 0)));
            MR_Word backend_libs__matching__ArgY1_12;

            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__ArgY1_4)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__ArgY1_4, (MR_Integer) 0)));
                backend_libs__matching__TypeInfo_10_16 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
                {
                  backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_16, ((MR_Box) (backend_libs__matching__ArgX1_11)), ((MR_Box) (backend_libs__matching__ArgY1_12)));
                }
              }
          }
        if (backend_libs__matching__succeeded)
          backend_libs__matching__succeeded = (backend_libs__matching__ArgX2_5 == backend_libs__matching__ArgY2_6);
      }
    return backend_libs__matching__succeeded;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__CostOp_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer backend_libs__matching___CopyNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

    return backend_libs__matching__CostOp_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__BenefitOp_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer backend_libs__matching___CopyNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

    return backend_libs__matching__BenefitOp_3;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
  MR_Word backend_libs__matching__ViaCellOccurringVars_3,
  MR_Word backend_libs__matching__FieldCostsBenefits_4)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__FieldVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 0)));
    MR_Word backend_libs__matching__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 1)));
    MR_Word backend_libs__matching__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 2)));

    {
      backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__ViaCellOccurringVars_3, backend_libs__matching__FieldVar_5);
    }
    return backend_libs__matching__succeeded;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
  MR_Word backend_libs__matching__CostToBenefitMap_4,
  MR_Word backend_libs__matching__CostNode_5)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__Match_6;
    MR_Word backend_libs__matching__BenefitNode_7;
    MR_Box backend_libs__matching__conv0_BenefitNode_7;

    {
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__CostToBenefitMap_4, ((MR_Box) (backend_libs__matching__CostNode_5)), &backend_libs__matching__conv0_BenefitNode_7);
    }
    if (backend_libs__matching__succeeded)
      {
        backend_libs__matching__BenefitNode_7 = ((MR_Word) backend_libs__matching__conv0_BenefitNode_7);
        backend_libs__matching__succeeded = MR_TRUE;
      }
    if (backend_libs__matching__succeeded)
      {
        MR_Word backend_libs__matching__Var_8;

        {
          backend_libs__matching__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__matching__Var_8, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_7));
        }
        {
          backend_libs__matching__Match_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 0) = ((MR_Box) (backend_libs__matching__CostNode_5));
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 1) = ((MR_Box) (backend_libs__matching__Var_8));
        }
      }
    else
      {
        {
          backend_libs__matching__Match_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 0) = ((MR_Box) (backend_libs__matching__CostNode_5));
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    return backend_libs__matching__Match_6;
  }
}

static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
  MR_Word backend_libs__matching__CostToBenefitsMap_5,
  MR_Word backend_libs__matching__CostNode_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_10)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__AdjBenefitNodes_8;
    MR_Box backend_libs__matching__conv0_AdjBenefitNodes_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__CostToBenefitsMap_5, ((MR_Box) (backend_libs__matching__CostNode_6)), &backend_libs__matching__conv0_AdjBenefitNodes_8);
    }
    backend_libs__matching__AdjBenefitNodes_8 = ((MR_Word) backend_libs__matching__conv0_AdjBenefitNodes_8);
    {
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__AdjBenefitNodes_8, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9, backend_libs__matching__STATE_VARIABLE_BenefitNodes_10);
    }
  }
}

static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
  MR_Word backend_libs__matching__Costs_5,
  MR_Word backend_libs__matching__Benefit_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__BenefitCosts0_8;
    MR_Box backend_libs__matching__conv0_BenefitCosts0_8;

    {
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, ((MR_Box) (backend_libs__matching__Benefit_6)), &backend_libs__matching__conv0_BenefitCosts0_8);
    }
    if (backend_libs__matching__succeeded)
      {
        backend_libs__matching__BenefitCosts0_8 = ((MR_Word) backend_libs__matching__conv0_BenefitCosts0_8);
        backend_libs__matching__succeeded = MR_TRUE;
      }
    if (backend_libs__matching__succeeded)
      {
        MR_Word backend_libs__matching__BenefitCosts_9;

        {
          mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__BenefitCosts0_8, backend_libs__matching__Costs_5, &backend_libs__matching__BenefitCosts_9);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], ((MR_Box) (backend_libs__matching__Benefit_6)), ((MR_Box) (backend_libs__matching__BenefitCosts_9)), backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);
        }
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], ((MR_Box) (backend_libs__matching__Benefit_6)), ((MR_Box) (backend_libs__matching__Costs_5)), backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);
        }
      }
  }
}

static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
  MR_Word backend_libs__matching__Benefits_5,
  MR_Word backend_libs__matching__Cost_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10,
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__CostBenefits0_8;
    MR_Box backend_libs__matching__conv0_CostBenefits0_8;

    {
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, ((MR_Box) (backend_libs__matching__Cost_6)), &backend_libs__matching__conv0_CostBenefits0_8);
    }
    if (backend_libs__matching__succeeded)
      {
        backend_libs__matching__CostBenefits0_8 = ((MR_Word) backend_libs__matching__conv0_CostBenefits0_8);
        backend_libs__matching__succeeded = MR_TRUE;
      }
    if (backend_libs__matching__succeeded)
      {
        MR_Word backend_libs__matching__CostBenefits_9;

        {
          mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__CostBenefits0_8, backend_libs__matching__Benefits_5, &backend_libs__matching__CostBenefits_9);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], ((MR_Box) (backend_libs__matching__Cost_6)), ((MR_Box) (backend_libs__matching__CostBenefits_9)), backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);
        }
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], ((MR_Box) (backend_libs__matching__Cost_6)), ((MR_Box) (backend_libs__matching__Benefits_5)), backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);
        }
      }
  }
}

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11;

    {
      backend_libs__matching__add_benefit_cost_links_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11));
  }
}

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11;

    {
      backend_libs__matching__add_cost_benefit_links_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11));
  }
}

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11,
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__TypeCtorInfo_24_24;
    MR_Word backend_libs__matching__TypeCtorInfo_29_29;
    MR_Word backend_libs__matching__Costs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word backend_libs__matching__Benefits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word backend_libs__matching__Var_15;
    MR_Word backend_libs__matching__Var_16;
    MR_Word backend_libs__matching__Var_18;
    MR_Word backend_libs__matching__Var_19;
    MR_Word backend_libs__matching___FieldVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
    MR_Box backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12;
    MR_Box backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14;

    {
      backend_libs__matching__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_15, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_15, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_15, 3) = ((MR_Box) (backend_libs__matching__Benefits_8));
    }
    backend_libs__matching__TypeCtorInfo_24_24 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
    {
      backend_libs__matching__Var_16 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_24_24, backend_libs__matching__Costs_7);
    }
    {
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_24_24, (MR_Word) &backend_libs__matching_scalar_common_2[0], backend_libs__matching__Var_15, backend_libs__matching__Var_16, ((MR_Box) (backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11)), &backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12);
    }
    *backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12 = ((MR_Word) backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12);
    {
      backend_libs__matching__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_18, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_18, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_2));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_18, 3) = ((MR_Box) (backend_libs__matching__Costs_7));
    }
    backend_libs__matching__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
    {
      backend_libs__matching__Var_19 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_29_29, backend_libs__matching__Benefits_8);
    }
    {
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_29_29, (MR_Word) &backend_libs__matching_scalar_common_2[1], backend_libs__matching__Var_18, backend_libs__matching__Var_19, ((MR_Box) (backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13)), &backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14);
    }
    *backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14 = ((MR_Word) backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14);
  }
}

static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_Costs_0_8,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Costs_9)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__FieldCosts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word backend_libs__matching__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word backend_libs__matching__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));

    {
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__FieldCosts_5, backend_libs__matching__STATE_VARIABLE_Costs_0_8, backend_libs__matching__STATE_VARIABLE_Costs_9);
    }
  }
}

static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_Benefits_0_8,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Benefits_9)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__FieldBenefits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word backend_libs__matching__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word backend_libs__matching__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__FieldBenefits_6, backend_libs__matching__STATE_VARIABLE_Benefits_0_8, backend_libs__matching__STATE_VARIABLE_Benefits_9);
    }
  }
}

static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
  MR_Integer backend_libs__matching__HeadVar__1_1,
  MR_Integer backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__HeadVar__4_4;

    if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__HeadVar__2_2, backend_libs__matching__HeadVar__3_3);
      }
    else
      {
        backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__HeadVar__3_3);
      }
    return backend_libs__matching__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
  MR_Integer backend_libs__matching__Cur_4,
  MR_Word backend_libs__matching__Op_5)
{
  {
    MR_bool backend_libs__matching__succeeded = (backend_libs__matching__Cur_4 > (MR_Integer) 0);
    MR_Word backend_libs__matching__HeadVar__3_3;

    if (backend_libs__matching__succeeded)
      {
        MR_Word backend_libs__matching__Var_7;
        MR_Word backend_libs__matching__Var_8;
        MR_Integer backend_libs__matching__Var_9;

        {
          backend_libs__matching__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__matching__Var_7, 0) = ((MR_Box) (backend_libs__matching__Op_5));
          MR_hl_field(MR_mktag(0), backend_libs__matching__Var_7, 1) = ((MR_Box) (backend_libs__matching__Cur_4));
        }
        backend_libs__matching__Var_9 = (backend_libs__matching__Cur_4 - (MR_Integer) 1);
        {
          backend_libs__matching__Var_8 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__Var_9, backend_libs__matching__Op_5);
        }
        {
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Var_7));
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__Var_8));
        }
      }
    else
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return backend_libs__matching__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
  MR_Integer backend_libs__matching__HeadVar__1_1,
  MR_Integer backend_libs__matching__HeadVar__2_2,
  MR_Word backend_libs__matching__HeadVar__3_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__HeadVar__4_4;

    if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
      }
    else
      {
        backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__HeadVar__2_2, backend_libs__matching__HeadVar__3_3);
      }
    return backend_libs__matching__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
  MR_Integer backend_libs__matching__Cur_4,
  MR_Word backend_libs__matching__Op_5)
{
  {
    MR_bool backend_libs__matching__succeeded = (backend_libs__matching__Cur_4 > (MR_Integer) 0);
    MR_Word backend_libs__matching__HeadVar__3_3;

    if (backend_libs__matching__succeeded)
      {
        MR_Word backend_libs__matching__Var_7;
        MR_Word backend_libs__matching__Var_8;
        MR_Integer backend_libs__matching__Var_9;

        {
          backend_libs__matching__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__matching__Var_7, 0) = ((MR_Box) (backend_libs__matching__Op_5));
          MR_hl_field(MR_mktag(0), backend_libs__matching__Var_7, 1) = ((MR_Box) (backend_libs__matching__Cur_4));
        }
        backend_libs__matching__Var_9 = (backend_libs__matching__Cur_4 - (MR_Integer) 1);
        {
          backend_libs__matching__Var_8 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__Var_9, backend_libs__matching__Op_5);
        }
        {
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Var_7));
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__Var_8));
        }
      }
    else
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return backend_libs__matching__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_Box backend_libs__matching__wrapper_arg_2;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv1_HeadVar__4_4;

    {
      backend_libs__matching__conv1_HeadVar__4_4 = backend_libs__matching__replicate_benefit_op_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv1_HeadVar__4_4));
    return backend_libs__matching__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_Box backend_libs__matching__wrapper_arg_2;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv0_HeadVar__4_4;

    {
      backend_libs__matching__conv0_HeadVar__4_4 = backend_libs__matching__replicate_cost_op_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__4_4));
    return backend_libs__matching__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
  MR_Word backend_libs__matching__CellVar_8,
  MR_Word backend_libs__matching__BeforeFlush_9,
  MR_Word backend_libs__matching__AfterFlush_10,
  MR_Word backend_libs__matching__CellVarFlushedLater_11,
  MR_Word backend_libs__matching__MatchingParams_12,
  MR_Word backend_libs__matching__FieldVar_13)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__FieldCostsBenefits_14;
    MR_Word backend_libs__matching__TypeCtorInfo_65_65;
    MR_Word backend_libs__matching__TypeCtorInfo_70_70;
    MR_Word backend_libs__matching__CostOps0_15;
    MR_Word backend_libs__matching__CostOps_16;
    MR_Word backend_libs__matching__BenefitOps0_17;
    MR_Word backend_libs__matching__BenefitOps_18;
    MR_Integer backend_libs__matching__CellVarStoreCost_19;
    MR_Integer backend_libs__matching__CellVarLoadCost_20;
    MR_Word backend_libs__matching__CostNodeLists_21;
    MR_Word backend_libs__matching__CostNodes_22;
    MR_Word backend_libs__matching__CostNodeSet_23;
    MR_Integer backend_libs__matching__FieldVarStoreCost_24;
    MR_Integer backend_libs__matching__FieldVarLoadCost_25;
    MR_Word backend_libs__matching__BenefitNodeLists_26;
    MR_Word backend_libs__matching__BenefitNodes_27;
    MR_Word backend_libs__matching__BenefitNodeSet_28;
    MR_Word backend_libs__matching__Var_31;
    MR_Word backend_libs__matching__Var_34;
    MR_Word backend_libs__matching__Var_35;
    MR_Integer backend_libs__matching__Var_37;
    MR_Integer backend_libs__matching__Var_38;
    MR_Integer backend_libs__matching__Var_39;
    MR_Integer backend_libs__matching__Var_40;
    MR_Word backend_libs__matching__Var_41;
    MR_Integer backend_libs__matching__Var_48;
    MR_Integer backend_libs__matching__Var_49;
    MR_Integer backend_libs__matching__Var_51;
    MR_Integer backend_libs__matching__Var_52;
    MR_Word backend_libs__matching__Var_53;

    {
      backend_libs__matching__find_cell_var_loads_for_field_4_p_0(backend_libs__matching__AfterFlush_10, backend_libs__matching__FieldVar_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__matching__CostOps0_15);
    }
    switch (backend_libs__matching__CellVarFlushedLater_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            backend_libs__matching__CostOps_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__matching__CostOps_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(1), backend_libs__matching__CostOps_16, 1) = ((MR_Box) (backend_libs__matching__CostOps0_15));
          }
        }
        break;
      case (MR_Integer) 1:
        backend_libs__matching__CostOps_16 = backend_libs__matching__CostOps0_15;
        break;
    }
    {
      backend_libs__matching__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__matching__Var_31, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
    }
    {
      backend_libs__matching__BenefitOps0_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps0_17, 0) = ((MR_Box) (backend_libs__matching__Var_31));
      MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps0_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__BeforeFlush_9, backend_libs__matching__CellVar_8);
    }
    if (backend_libs__matching__succeeded)
      backend_libs__matching__BenefitOps_18 = backend_libs__matching__BenefitOps0_17;
    else
      {
        MR_Word backend_libs__matching__Var_33;

        {
          backend_libs__matching__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__matching__Var_33, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
        }
        {
          backend_libs__matching__BenefitOps_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps_18, 0) = ((MR_Box) (backend_libs__matching__Var_33));
          MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps_18, 1) = ((MR_Box) (backend_libs__matching__BenefitOps0_17));
        }
      }
    backend_libs__matching__CellVarStoreCost_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 0)));
    backend_libs__matching__CellVarLoadCost_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 1)));
    backend_libs__matching__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 2)));
    backend_libs__matching__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 3)));
    backend_libs__matching__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 4)));
    backend_libs__matching__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 5)));
    backend_libs__matching__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 6)));
    {
      backend_libs__matching__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_34, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_34, 1) = ((MR_Box) (backend_libs__matching__find_costs_benefits_6_f_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_34, 3) = ((MR_Box) (backend_libs__matching__CellVarStoreCost_19));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_34, 4) = ((MR_Box) (backend_libs__matching__CellVarLoadCost_20));
    }
    {
      backend_libs__matching__CostNodeLists_21 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0, (MR_Word) &backend_libs__matching_scalar_common_1[4], backend_libs__matching__Var_34, backend_libs__matching__CostOps_16);
    }
    backend_libs__matching__TypeCtorInfo_65_65 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
    {
      mercury__list__condense_2_p_0(backend_libs__matching__TypeCtorInfo_65_65, backend_libs__matching__CostNodeLists_21, &backend_libs__matching__CostNodes_22);
    }
    {
      mercury__set__list_to_set_2_p_0(backend_libs__matching__TypeCtorInfo_65_65, backend_libs__matching__CostNodes_22, &backend_libs__matching__CostNodeSet_23);
    }
    backend_libs__matching__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 0)));
    backend_libs__matching__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 1)));
    backend_libs__matching__FieldVarStoreCost_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 2)));
    backend_libs__matching__FieldVarLoadCost_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 3)));
    backend_libs__matching__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 4)));
    backend_libs__matching__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 5)));
    backend_libs__matching__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 6)));
    {
      backend_libs__matching__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_35, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_35, 1) = ((MR_Box) (backend_libs__matching__find_costs_benefits_6_f_0_2));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_35, 3) = ((MR_Box) (backend_libs__matching__FieldVarStoreCost_24));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_35, 4) = ((MR_Box) (backend_libs__matching__FieldVarLoadCost_25));
    }
    {
      backend_libs__matching__BenefitNodeLists_26 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0, (MR_Word) &backend_libs__matching_scalar_common_1[5], backend_libs__matching__Var_35, backend_libs__matching__BenefitOps_18);
    }
    backend_libs__matching__TypeCtorInfo_70_70 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
    {
      mercury__list__condense_2_p_0(backend_libs__matching__TypeCtorInfo_70_70, backend_libs__matching__BenefitNodeLists_26, &backend_libs__matching__BenefitNodes_27);
    }
    {
      mercury__set__list_to_set_2_p_0(backend_libs__matching__TypeCtorInfo_70_70, backend_libs__matching__BenefitNodes_27, &backend_libs__matching__BenefitNodeSet_28);
    }
    {
      backend_libs__matching__FieldCostsBenefits_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 1) = ((MR_Box) (backend_libs__matching__CostNodeSet_23));
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 2) = ((MR_Box) (backend_libs__matching__BenefitNodeSet_28));
    }
    return backend_libs__matching__FieldCostsBenefits_14;
  }
}

static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__FieldVar_2,
  MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0_3,
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostOps_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded;

        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__matching__STATE_VARIABLE_CostOps_4 = backend_libs__matching__STATE_VARIABLE_CostOps_0_3;
        else
          {
            MR_Integer backend_libs__matching__SegmentNum_9;
            MR_Word backend_libs__matching__SegmentVars_10;
            MR_Word backend_libs__matching__AfterFlush_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word backend_libs__matching__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_17_17;

            backend_libs__matching__SegmentNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__Var_16, (MR_Integer) 0)));
            backend_libs__matching__SegmentVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Var_16, (MR_Integer) 1)));
            {
              backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__SegmentVars_10, backend_libs__matching__FieldVar_2);
            }
            if (backend_libs__matching__succeeded)
              {
                MR_Word backend_libs__matching__Var_18;

                {
                  backend_libs__matching__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__matching__Var_18, 0) = ((MR_Box) (backend_libs__matching__SegmentNum_9));
                }
                {
                  backend_libs__matching__STATE_VARIABLE_CostOps_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_CostOps_17_17, 0) = ((MR_Box) (backend_libs__matching__Var_18));
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_CostOps_17_17, 1) = ((MR_Box) (backend_libs__matching__STATE_VARIABLE_CostOps_0_3));
                }
              }
            else
              backend_libs__matching__STATE_VARIABLE_CostOps_17_17 = backend_libs__matching__STATE_VARIABLE_CostOps_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__matching__next_value_of_HeadVar__1_1 = backend_libs__matching__AfterFlush_11;
              MR_Word backend_libs__matching__next_value_of_STATE_VARIABLE_CostOps_0_3 = backend_libs__matching__STATE_VARIABLE_CostOps_17_17;

              backend_libs__matching__STATE_VARIABLE_CostOps_0_3 = backend_libs__matching__next_value_of_STATE_VARIABLE_CostOps_0_3;
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
  MR_Word backend_libs__matching__CellVar_5,
  MR_Word backend_libs__matching__CandidateArgVars_6,
  MR_Word backend_libs__matching__SegmentVars0_7,
  MR_Word * backend_libs__matching__SegmentVars_8)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__TypeCtorInfo_10_10;

    {
      backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__SegmentVars0_7, backend_libs__matching__CellVar_5);
    }
    backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
    if (backend_libs__matching__succeeded)
      {
        backend_libs__matching__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          *backend_libs__matching__SegmentVars_8 = parse_tree__set_of_var__intersect_2_f_0(backend_libs__matching__TypeCtorInfo_10_10, backend_libs__matching__SegmentVars0_7, backend_libs__matching__CandidateArgVars_6);
        }
        backend_libs__matching__succeeded = MR_TRUE;
      }
    return backend_libs__matching__succeeded;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_9(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_Box backend_libs__matching__wrapper_arg_2;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv11_CostOp_3;

    {
      backend_libs__matching__conv11_CostOp_3 = backend_libs__matching__project_cost_op_1_f_0(((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv11_CostOp_3));
    return backend_libs__matching__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_8(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_Box backend_libs__matching__wrapper_arg_2;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv10_BenefitOp_3;

    {
      backend_libs__matching__conv10_BenefitOp_3 = backend_libs__matching__project_benefit_op_1_f_0(((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv10_BenefitOp_3));
    return backend_libs__matching__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_7(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv8_STATE_VARIABLE_Costs_9;

    {
      backend_libs__matching__gather_costs_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv8_STATE_VARIABLE_Costs_9);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv8_STATE_VARIABLE_Costs_9));
  }
}

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_6(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9;

    {
      backend_libs__matching__gather_benefits_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9));
  }
}

static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_5(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;

    {
      backend_libs__matching__succeeded = backend_libs__matching__realized_costs_benefits_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_4(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv4_STATE_VARIABLE_Costs_9;

    {
      backend_libs__matching__gather_costs_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv4_STATE_VARIABLE_Costs_9);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv4_STATE_VARIABLE_Costs_9));
  }
}

static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_3(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9;

    {
      backend_libs__matching__gather_benefits_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9));
  }
}

static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_Box backend_libs__matching__wrapper_arg_2;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv1_FieldCostsBenefits_14;

    {
      backend_libs__matching__conv1_FieldCostsBenefits_14 = backend_libs__matching__find_costs_benefits_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 7))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv1_FieldCostsBenefits_14));
    return backend_libs__matching__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box * backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv0_SegmentVars_8;

    {
      backend_libs__matching__succeeded = backend_libs__matching__simplify_segment_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__matching__wrapper_arg_1), &backend_libs__matching__conv0_SegmentVars_8);
    }
    if (backend_libs__matching__succeeded)
      {
        *backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv0_SegmentVars_8));
        backend_libs__matching__succeeded = MR_TRUE;
      }
    return backend_libs__matching__succeeded;
  }
}

void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0(
  MR_Word backend_libs__matching__CellVar_10,
  MR_Word backend_libs__matching__CandidateFieldVars_11,
  MR_Word backend_libs__matching__CellVarFlushedLater_12,
  MR_Word backend_libs__matching__BeforeFlush_13,
  MR_Word backend_libs__matching__AfterFlush_14,
  MR_Word backend_libs__matching__MatchingParams_15,
  MR_Word * backend_libs__matching__RealizedBenefitNodes_16,
  MR_Word * backend_libs__matching__RealizedCostNodes_17,
  MR_Word * backend_libs__matching__ViaCellVars_18)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__TypeCtorInfo_97_97;
    MR_Word backend_libs__matching__TypeInfo_100_100;
    MR_Word backend_libs__matching__TypeCtorInfo_102_102;
    MR_Word backend_libs__matching__TypeCtorInfo_108_108;
    MR_Word backend_libs__matching__TypeInfo_109_109;
    MR_Word backend_libs__matching__TypeCtorInfo_113_113;
    MR_Word backend_libs__matching__TypeInfo_114_114;
    MR_Word backend_libs__matching__TypeCtorInfo_122_122;
    MR_Word backend_libs__matching__TypeCtorInfo_125_125;
    MR_Word backend_libs__matching__InclAllCand_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 6)));
    MR_Word backend_libs__matching__OccurringCandidateFieldVars_21;
    MR_Word backend_libs__matching__NonOccurringCandidateFieldVars_22;
    MR_Word backend_libs__matching__OccurringCandidateFieldVarList_23;
    MR_Word backend_libs__matching__FilteredAfterFlush_24;
    MR_Word backend_libs__matching__NumberedAfterFlush_25;
    MR_Word backend_libs__matching__CostsBenefits_26;
    MR_Word backend_libs__matching__BenefitNodes_27;
    MR_Word backend_libs__matching__CostNodes_28;
    MR_Word backend_libs__matching__BenefitNodeList_29;
    MR_Word backend_libs__matching__CostNodeList_30;
    MR_Word backend_libs__matching__Graph_31;
    MR_Word backend_libs__matching__MaximalMatching_32;
    MR_Word backend_libs__matching__MaximalMatchingCostToBenefit_33;
    MR_Word backend_libs__matching__UnMatchedCostNodes_35;
    MR_Word backend_libs__matching__MarkedBenefitNodes_36;
    MR_Word backend_libs__matching__ViaCellOccurringVars0_37;
    MR_Word backend_libs__matching__RealizedCostsBenefits_38;
    MR_Word backend_libs__matching__RealizedBenefitOps_39;
    MR_Word backend_libs__matching__RealizedCostOps_40;
    MR_Word backend_libs__matching__RealizedBenefitNodeList_41;
    MR_Word backend_libs__matching__RealizedCostNodeList_42;
    MR_Word backend_libs__matching__RealizedBenefitOpList_43;
    MR_Word backend_libs__matching__RealizedCostOpList_44;
    MR_Integer backend_libs__matching__RealizedBenefitNodeCount_45;
    MR_Integer backend_libs__matching__RealizedBenefitOpCount_46;
    MR_Integer backend_libs__matching__RealizedCostNodeCount_47;
    MR_Integer backend_libs__matching__RealizedCostOpCount_48;
    MR_Integer backend_libs__matching__OpRatio_49;
    MR_Integer backend_libs__matching__NodeRatio_50;
    MR_Word backend_libs__matching__ViaCellOccurringVars_51;
    MR_Word backend_libs__matching__Var_55;
    MR_Word backend_libs__matching__Var_57;
    MR_Word backend_libs__matching__Var_59;
    MR_Word backend_libs__matching__Var_61;
    MR_Word backend_libs__matching__Var_62;
    MR_Word backend_libs__matching__Var_64;
    MR_Word backend_libs__matching__Var_66;
    MR_Integer backend_libs__matching__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 0)));
    MR_Integer backend_libs__matching__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 1)));
    MR_Integer backend_libs__matching__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 2)));
    MR_Integer backend_libs__matching__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 3)));
    MR_Integer backend_libs__matching__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 4)));
    MR_Integer backend_libs__matching__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 5)));
    MR_Box backend_libs__matching__conv3_BenefitNodes_27;
    MR_Box backend_libs__matching__conv5_CostNodes_28;
    MR_Word backend_libs__matching__Var_34;
    MR_Box backend_libs__matching__conv7_RealizedBenefitNodes_16;
    MR_Box backend_libs__matching__conv9_RealizedCostNodes_17;
    MR_Integer backend_libs__matching__Var_83;
    MR_Integer backend_libs__matching__Var_84;
    MR_Integer backend_libs__matching__Var_85;
    MR_Integer backend_libs__matching__Var_86;
    MR_Word backend_libs__matching__Var_88;
    MR_Integer backend_libs__matching__Var_69;
    MR_Integer backend_libs__matching__Var_70;
    MR_Integer backend_libs__matching__Var_72;
    MR_Integer backend_libs__matching__Var_73;
    MR_Integer backend_libs__matching__Var_74;

    switch (backend_libs__matching__InclAllCand_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word backend_libs__matching__TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word backend_libs__matching__AllSegmentVars_20;
          MR_Word backend_libs__matching__Var_54;

          {
            backend_libs__matching__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__matching__Var_54, 0) = ((MR_Box) (backend_libs__matching__BeforeFlush_13));
            MR_hl_field(MR_mktag(1), backend_libs__matching__Var_54, 1) = ((MR_Box) (backend_libs__matching__AfterFlush_14));
          }
          {
            backend_libs__matching__AllSegmentVars_20 = parse_tree__set_of_var__union_list_1_f_0(backend_libs__matching__TypeCtorInfo_95_95, backend_libs__matching__Var_54);
          }
          {
            parse_tree__set_of_var__intersect_3_p_0(backend_libs__matching__TypeCtorInfo_95_95, backend_libs__matching__CandidateFieldVars_11, backend_libs__matching__AllSegmentVars_20, &backend_libs__matching__OccurringCandidateFieldVars_21);
          }
          {
            parse_tree__set_of_var__difference_3_p_0(backend_libs__matching__TypeCtorInfo_95_95, backend_libs__matching__CandidateFieldVars_11, backend_libs__matching__OccurringCandidateFieldVars_21, &backend_libs__matching__NonOccurringCandidateFieldVars_22);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__matching__OccurringCandidateFieldVars_21 = backend_libs__matching__CandidateFieldVars_11;
          {
            backend_libs__matching__NonOccurringCandidateFieldVars_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
    }
    backend_libs__matching__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      backend_libs__matching__OccurringCandidateFieldVarList_23 = parse_tree__set_of_var__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_97_97, backend_libs__matching__OccurringCandidateFieldVars_21);
    }
    {
      backend_libs__matching__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_55, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_55, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_55, 3) = ((MR_Box) (backend_libs__matching__CellVar_10));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_55, 4) = ((MR_Box) (backend_libs__matching__OccurringCandidateFieldVars_21));
    }
    backend_libs__matching__TypeInfo_100_100 = (MR_Word) &backend_libs__matching_scalar_common_1[1];
    {
      mercury__list__filter_map_3_p_0(backend_libs__matching__TypeInfo_100_100, backend_libs__matching__TypeInfo_100_100, backend_libs__matching__Var_55, backend_libs__matching__AfterFlush_14, &backend_libs__matching__FilteredAfterFlush_24);
    }
    {
      backend_libs__matching__NumberedAfterFlush_25 = backend_libs__matching__number_segments_2_f_0((MR_Integer) 2, backend_libs__matching__FilteredAfterFlush_24);
    }
    backend_libs__matching__TypeCtorInfo_102_102 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0;
    {
      backend_libs__matching__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_2));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 3) = ((MR_Box) (backend_libs__matching__CellVar_10));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 4) = ((MR_Box) (backend_libs__matching__BeforeFlush_13));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 5) = ((MR_Box) (backend_libs__matching__NumberedAfterFlush_25));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 6) = ((MR_Box) (backend_libs__matching__CellVarFlushedLater_12));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_57, 7) = ((MR_Box) (backend_libs__matching__MatchingParams_15));
    }
    {
      backend_libs__matching__CostsBenefits_26 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching_scalar_common_1[0], backend_libs__matching__TypeCtorInfo_102_102, backend_libs__matching__Var_57, backend_libs__matching__OccurringCandidateFieldVarList_23);
    }
    backend_libs__matching__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
    {
      backend_libs__matching__Var_59 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_108_108);
    }
    backend_libs__matching__TypeInfo_109_109 = (MR_Word) &backend_libs__matching_scalar_common_1[2];
    {
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_102_102, backend_libs__matching__TypeInfo_109_109, (MR_Word) &backend_libs__matching_scalar_common_2[7], backend_libs__matching__CostsBenefits_26, ((MR_Box) (backend_libs__matching__Var_59)), &backend_libs__matching__conv3_BenefitNodes_27);
    }
    backend_libs__matching__BenefitNodes_27 = ((MR_Word) backend_libs__matching__conv3_BenefitNodes_27);
    backend_libs__matching__TypeCtorInfo_113_113 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
    {
      backend_libs__matching__Var_61 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_113_113);
    }
    backend_libs__matching__TypeInfo_114_114 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
    {
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_102_102, backend_libs__matching__TypeInfo_114_114, (MR_Word) &backend_libs__matching_scalar_common_2[8], backend_libs__matching__CostsBenefits_26, ((MR_Box) (backend_libs__matching__Var_61)), &backend_libs__matching__conv5_CostNodes_28);
    }
    backend_libs__matching__CostNodes_28 = ((MR_Word) backend_libs__matching__conv5_CostNodes_28);
    {
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_108_108, backend_libs__matching__BenefitNodes_27, &backend_libs__matching__BenefitNodeList_29);
    }
    {
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_113_113, backend_libs__matching__CostNodes_28, &backend_libs__matching__CostNodeList_30);
    }
    {
      backend_libs__matching__Graph_31 = backend_libs__matching__create_graph_1_f_0(backend_libs__matching__CostsBenefits_26);
    }
    {
      backend_libs__matching__MaximalMatching_32 = backend_libs__matching__maximal_matching_2_f_0(backend_libs__matching__BenefitNodeList_29, backend_libs__matching__Graph_31);
    }
    backend_libs__matching__MaximalMatchingCostToBenefit_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MaximalMatching_32, (MR_Integer) 0)));
    backend_libs__matching__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MaximalMatching_32, (MR_Integer) 1)));
    {
      backend_libs__matching__UnMatchedCostNodes_35 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(backend_libs__matching__CostNodeList_30, backend_libs__matching__MaximalMatchingCostToBenefit_33);
    }
    {
      backend_libs__matching__MarkedBenefitNodes_36 = backend_libs__matching__reachable_by_alternating_path_3_f_0(backend_libs__matching__UnMatchedCostNodes_35, backend_libs__matching__Graph_31, backend_libs__matching__MaximalMatching_32);
    }
    {
      backend_libs__matching__ViaCellOccurringVars0_37 = backend_libs__matching__compute_via_cell_vars_2_f_0(backend_libs__matching__CostsBenefits_26, backend_libs__matching__MarkedBenefitNodes_36);
    }
    {
      backend_libs__matching__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_62, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_62, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_5));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Var_62, 3) = ((MR_Box) (backend_libs__matching__ViaCellOccurringVars0_37));
    }
    {
      mercury__list__filter_3_p_0(backend_libs__matching__TypeCtorInfo_102_102, backend_libs__matching__Var_62, backend_libs__matching__CostsBenefits_26, &backend_libs__matching__RealizedCostsBenefits_38);
    }
    {
      backend_libs__matching__Var_64 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_108_108);
    }
    {
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_102_102, backend_libs__matching__TypeInfo_109_109, (MR_Word) &backend_libs__matching_scalar_common_2[9], backend_libs__matching__RealizedCostsBenefits_38, ((MR_Box) (backend_libs__matching__Var_64)), &backend_libs__matching__conv7_RealizedBenefitNodes_16);
    }
    *backend_libs__matching__RealizedBenefitNodes_16 = ((MR_Word) backend_libs__matching__conv7_RealizedBenefitNodes_16);
    {
      backend_libs__matching__Var_66 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_113_113);
    }
    {
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_102_102, backend_libs__matching__TypeInfo_114_114, (MR_Word) &backend_libs__matching_scalar_common_2[10], backend_libs__matching__RealizedCostsBenefits_38, ((MR_Box) (backend_libs__matching__Var_66)), &backend_libs__matching__conv9_RealizedCostNodes_17);
    }
    *backend_libs__matching__RealizedCostNodes_17 = ((MR_Word) backend_libs__matching__conv9_RealizedCostNodes_17);
    backend_libs__matching__TypeCtorInfo_122_122 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0;
    {
      backend_libs__matching__RealizedBenefitOps_39 = mercury__set__map_2_f_0(backend_libs__matching__TypeCtorInfo_108_108, backend_libs__matching__TypeCtorInfo_122_122, (MR_Word) &backend_libs__matching_scalar_common_2[11], *backend_libs__matching__RealizedBenefitNodes_16);
    }
    backend_libs__matching__TypeCtorInfo_125_125 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0;
    {
      backend_libs__matching__RealizedCostOps_40 = mercury__set__map_2_f_0(backend_libs__matching__TypeCtorInfo_113_113, backend_libs__matching__TypeCtorInfo_125_125, (MR_Word) &backend_libs__matching_scalar_common_2[12], *backend_libs__matching__RealizedCostNodes_17);
    }
    {
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_108_108, *backend_libs__matching__RealizedBenefitNodes_16, &backend_libs__matching__RealizedBenefitNodeList_41);
    }
    {
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_113_113, *backend_libs__matching__RealizedCostNodes_17, &backend_libs__matching__RealizedCostNodeList_42);
    }
    {
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_122_122, backend_libs__matching__RealizedBenefitOps_39, &backend_libs__matching__RealizedBenefitOpList_43);
    }
    {
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_125_125, backend_libs__matching__RealizedCostOps_40, &backend_libs__matching__RealizedCostOpList_44);
    }
    {
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_108_108, backend_libs__matching__RealizedBenefitNodeList_41, &backend_libs__matching__RealizedBenefitNodeCount_45);
    }
    {
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_122_122, backend_libs__matching__RealizedBenefitOpList_43, &backend_libs__matching__RealizedBenefitOpCount_46);
    }
    {
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_113_113, backend_libs__matching__RealizedCostNodeList_42, &backend_libs__matching__RealizedCostNodeCount_47);
    }
    {
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_125_125, backend_libs__matching__RealizedCostOpList_44, &backend_libs__matching__RealizedCostOpCount_48);
    }
    backend_libs__matching__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 0)));
    backend_libs__matching__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 1)));
    backend_libs__matching__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 2)));
    backend_libs__matching__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 3)));
    backend_libs__matching__OpRatio_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 4)));
    backend_libs__matching__NodeRatio_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 5)));
    backend_libs__matching__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 6)));
    backend_libs__matching__Var_69 = (backend_libs__matching__RealizedBenefitOpCount_46 * (MR_Integer) 100);
    backend_libs__matching__Var_70 = (backend_libs__matching__RealizedCostOpCount_48 * backend_libs__matching__OpRatio_49);
    backend_libs__matching__succeeded = (backend_libs__matching__Var_69 >= backend_libs__matching__Var_70);
    if (backend_libs__matching__succeeded)
      {
        backend_libs__matching__Var_74 = (MR_Integer) 100;
        backend_libs__matching__Var_72 = (backend_libs__matching__RealizedBenefitNodeCount_45 * backend_libs__matching__Var_74);
        backend_libs__matching__Var_73 = (backend_libs__matching__RealizedCostNodeCount_47 * backend_libs__matching__NodeRatio_50);
        backend_libs__matching__succeeded = (backend_libs__matching__Var_72 >= backend_libs__matching__Var_73);
      }
    if (backend_libs__matching__succeeded)
      backend_libs__matching__ViaCellOccurringVars_51 = backend_libs__matching__ViaCellOccurringVars0_37;
    else
      {
        backend_libs__matching__ViaCellOccurringVars_51 = parse_tree__set_of_var__init_0_f_0(backend_libs__matching__TypeCtorInfo_97_97);
      }
    {
      *backend_libs__matching__ViaCellVars_18 = parse_tree__set_of_var__union_2_f_0(backend_libs__matching__TypeCtorInfo_97_97, backend_libs__matching__ViaCellOccurringVars_51, backend_libs__matching__NonOccurringCandidateFieldVars_22);
    }
  }
}

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__MatchingCB_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__HeadVar__3_3;

    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__matching__Node_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__Nodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__matching__UnmatchedNodes1_9;
        MR_Word backend_libs__matching___Match_10;
        MR_Box backend_libs__matching__conv0__Match_10;

        {
          backend_libs__matching__UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(backend_libs__matching__Nodes_6, backend_libs__matching__MatchingCB_2);
        }
        {
          backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__MatchingCB_2, ((MR_Box) (backend_libs__matching__Node_5)), &backend_libs__matching__conv0__Match_10);
        }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching___Match_10 = ((MR_Word) backend_libs__matching__conv0__Match_10);
            backend_libs__matching__succeeded = MR_TRUE;
          }
        if (backend_libs__matching__succeeded)
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__UnmatchedNodes1_9;
        else
          {
            backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Node_5));
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__UnmatchedNodes1_9));
          }
      }
    return backend_libs__matching__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__HeadVar__3_3;

    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          backend_libs__matching__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
      }
    else
      {
        MR_Word backend_libs__matching__TypeCtorInfo_18_18;
        MR_Word backend_libs__matching__FieldCostsBenefits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__FieldsCostsBenefits_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__matching__ViaCellVars1_9;
        MR_Word backend_libs__matching__FieldVar_10;
        MR_Word backend_libs__matching__FieldBenefits_12;
        MR_Word backend_libs__matching__MarkedFieldBenefits_13;
        MR_Word backend_libs__matching__Var_11;

        {
          backend_libs__matching__ViaCellVars1_9 = backend_libs__matching__compute_via_cell_vars_2_f_0(backend_libs__matching__FieldsCostsBenefits_6, backend_libs__matching__HeadVar__2_2);
        }
        backend_libs__matching__FieldVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 0)));
        backend_libs__matching__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 1)));
        backend_libs__matching__FieldBenefits_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 2)));
        backend_libs__matching__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
        {
          mercury__set__intersect_3_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__FieldBenefits_12, backend_libs__matching__HeadVar__2_2, &backend_libs__matching__MarkedFieldBenefits_13);
        }
        {
          backend_libs__matching__succeeded = mercury__set__is_empty_1_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__MarkedFieldBenefits_13);
        }
        if (backend_libs__matching__succeeded)
          {
            {
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__FieldVar_10, backend_libs__matching__ViaCellVars1_9, &backend_libs__matching__HeadVar__3_3);
            }
          }
        else
          {
            {
              backend_libs__matching__succeeded = mercury__set__equal_2_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__MarkedFieldBenefits_13, backend_libs__matching__FieldBenefits_12);
            }
            if (backend_libs__matching__succeeded)
              backend_libs__matching__HeadVar__3_3 = backend_libs__matching__ViaCellVars1_9;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.matching", (MR_String) "function \140backend_libs.matching.compute_via_cell_vars\'/2", (MR_String) "theorem violation: intersection neither empty nor full");
                }
              }
          }
      }
    return backend_libs__matching__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
  MR_Word backend_libs__matching__SelectedCostNodes_5,
  MR_Word backend_libs__matching__Graph_6,
  MR_Word backend_libs__matching__Matching_7)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__ReachableBenefitNodes_8;
    MR_Word backend_libs__matching__Var_9;

    {
      backend_libs__matching__Var_9 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
    }
    {
      backend_libs__matching__reachable_by_alternating_path_5_p_0(backend_libs__matching__SelectedCostNodes_5, backend_libs__matching__Graph_6, backend_libs__matching__Matching_7, backend_libs__matching__Var_9, &backend_libs__matching__ReachableBenefitNodes_8);
    }
    return backend_libs__matching__ReachableBenefitNodes_8;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_Box backend_libs__matching__wrapper_arg_2;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv2_HeadVar__3_34;

    {
      backend_libs__matching__conv2_HeadVar__3_34 = backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__573__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv2_HeadVar__3_34));
    return backend_libs__matching__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10;

    {
      backend_libs__matching__adjacents_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10));
  }
}

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
  MR_Word backend_libs__matching__SelectedCostNodes_6,
  MR_Word backend_libs__matching__Graph_7,
  MR_Word backend_libs__matching__Matching_8,
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20,
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded;

        if ((backend_libs__matching__SelectedCostNodes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__matching__STATE_VARIABLE_BenefitNodes_21 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20;
        else
          {
            MR_Word backend_libs__matching__TypeCtorInfo_30_30;
            MR_Word backend_libs__matching__TypeCtorInfo_31_31;
            MR_Word backend_libs__matching__CostToBenefitsMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_7, (MR_Integer) 0)));
            MR_Word backend_libs__matching__AdjBenefitNodes_14;
            MR_Word backend_libs__matching__NewBenefitNodes_15;
            MR_Word backend_libs__matching__NewBenefitNodeList_16;
            MR_Word backend_libs__matching__BenefitToCostMap_18;
            MR_Word backend_libs__matching__LinkedCostNodes_19;
            MR_Word backend_libs__matching__Var_22;
            MR_Word backend_libs__matching__Var_23;
            MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24;
            MR_Word backend_libs__matching__Var_25;
            MR_Word backend_libs__matching__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_7, (MR_Integer) 1)));
            MR_Box backend_libs__matching__conv1_AdjBenefitNodes_14;
            MR_Word backend_libs__matching__Var_17;

            {
              backend_libs__matching__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_22, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_22, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_1));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_22, 3) = ((MR_Box) (backend_libs__matching__CostToBenefitsMap_12));
            }
            backend_libs__matching__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
            {
              backend_libs__matching__Var_23 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_30_30);
            }
            backend_libs__matching__TypeCtorInfo_31_31 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
            {
              mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_31_31, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__Var_22, backend_libs__matching__SelectedCostNodes_6, ((MR_Box) (backend_libs__matching__Var_23)), &backend_libs__matching__conv1_AdjBenefitNodes_14);
            }
            backend_libs__matching__AdjBenefitNodes_14 = ((MR_Word) backend_libs__matching__conv1_AdjBenefitNodes_14);
            {
              mercury__set__difference_3_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20, backend_libs__matching__AdjBenefitNodes_14, &backend_libs__matching__NewBenefitNodes_15);
            }
            {
              mercury__set__union_3_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__AdjBenefitNodes_14, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20, &backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24);
            }
            {
              mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__NewBenefitNodes_15, &backend_libs__matching__NewBenefitNodeList_16);
            }
            backend_libs__matching__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_8, (MR_Integer) 0)));
            backend_libs__matching__BenefitToCostMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_8, (MR_Integer) 1)));
            {
              backend_libs__matching__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_25, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_25, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_2));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_25, 3) = ((MR_Box) (backend_libs__matching__BenefitToCostMap_18));
            }
            {
              backend_libs__matching__LinkedCostNodes_19 = mercury__list__map_2_f_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__TypeCtorInfo_31_31, backend_libs__matching__Var_25, backend_libs__matching__NewBenefitNodeList_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__matching__next_value_of_SelectedCostNodes_6 = backend_libs__matching__LinkedCostNodes_19;
              MR_Word backend_libs__matching__next_value_of_STATE_VARIABLE_BenefitNodes_0_20 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24;

              backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20 = backend_libs__matching__next_value_of_STATE_VARIABLE_BenefitNodes_0_20;
              backend_libs__matching__SelectedCostNodes_6 = backend_libs__matching__next_value_of_SelectedCostNodes_6;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
  MR_Word backend_libs__matching__BenefitNodes_4,
  MR_Word backend_libs__matching__Graph_5)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__Matching_6;
    MR_Word backend_libs__matching__TypeCtorInfo_10_10 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
    MR_Word backend_libs__matching__TypeCtorInfo_11_11 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
    MR_Word backend_libs__matching__Matching0_7;
    MR_Word backend_libs__matching__Var_8;
    MR_Word backend_libs__matching__Var_9;

    {
      backend_libs__matching__Var_8 = mercury__map__init_0_f_0(backend_libs__matching__TypeCtorInfo_10_10, backend_libs__matching__TypeCtorInfo_11_11);
    }
    {
      backend_libs__matching__Var_9 = mercury__map__init_0_f_0(backend_libs__matching__TypeCtorInfo_11_11, backend_libs__matching__TypeCtorInfo_10_10);
    }
    {
      backend_libs__matching__Matching0_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_7, 0) = ((MR_Box) (backend_libs__matching__Var_8));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_7, 1) = ((MR_Box) (backend_libs__matching__Var_9));
    }
    {
      backend_libs__matching__maximize_matching_4_p_0(backend_libs__matching__BenefitNodes_4, backend_libs__matching__Graph_5, backend_libs__matching__Matching0_7, &backend_libs__matching__Matching_6);
    }
    return backend_libs__matching__Matching_6;
  }
}

static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
  MR_Word backend_libs__matching__BenefitNodes_5,
  MR_Word backend_libs__matching__Graph_6,
  MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0_9,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Matching_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded;
        MR_Word backend_libs__matching__Path_8;
        MR_Word backend_libs__matching__MatchingBenefitToCost_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__STATE_VARIABLE_Matching_0_9, (MR_Integer) 1)));
        MR_Word backend_libs__matching__UnMatchedBenefitNodes_19;
        MR_Word backend_libs__matching__Queue_24;
        MR_Word backend_libs__matching__Var_25;
        MR_Word backend_libs__matching__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__STATE_VARIABLE_Matching_0_9, (MR_Integer) 0)));

        {
          backend_libs__matching__UnMatchedBenefitNodes_19 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(backend_libs__matching__BenefitNodes_5, backend_libs__matching__MatchingBenefitToCost_18);
        }
        {
          backend_libs__matching__Var_25 = mercury__queue__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0);
        }
        {
          backend_libs__matching__Queue_24 = backend_libs__matching__initial_queue_2_f_0(backend_libs__matching__UnMatchedBenefitNodes_19, backend_libs__matching__Var_25);
        }
        {
          backend_libs__matching__succeeded = backend_libs__matching__augpath_bf_4_f_0(backend_libs__matching__Queue_24, backend_libs__matching__UnMatchedBenefitNodes_19, backend_libs__matching__Graph_6, backend_libs__matching__STATE_VARIABLE_Matching_0_9, &backend_libs__matching__Path_8);
        }
        if (backend_libs__matching__succeeded)
          {
            MR_Word backend_libs__matching__STATE_VARIABLE_Matching_11_11;

            {
              backend_libs__matching__STATE_VARIABLE_Matching_11_11 = backend_libs__matching__update_matches_2_f_0(backend_libs__matching__Path_8, backend_libs__matching__STATE_VARIABLE_Matching_0_9);
            }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__matching__next_value_of_STATE_VARIABLE_Matching_0_9 = backend_libs__matching__STATE_VARIABLE_Matching_11_11;

              backend_libs__matching__STATE_VARIABLE_Matching_0_9 = backend_libs__matching__next_value_of_STATE_VARIABLE_Matching_0_9;
            }
            continue;
          }
        else
          *backend_libs__matching__STATE_VARIABLE_Matching_10 = backend_libs__matching__STATE_VARIABLE_Matching_0_9;
      }
      break;
    }
}

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__MatchingBC_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__HeadVar__3_3;

    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__matching__Node_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__matching__Nodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__matching__UnmatchedNodes1_9;
        MR_Word backend_libs__matching___Match_10;
        MR_Box backend_libs__matching__conv0__Match_10;

        {
          backend_libs__matching__UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(backend_libs__matching__Nodes_6, backend_libs__matching__MatchingBC_2);
        }
        {
          backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__MatchingBC_2, ((MR_Box) (backend_libs__matching__Node_5)), &backend_libs__matching__conv0__Match_10);
        }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching___Match_10 = ((MR_Word) backend_libs__matching__conv0__Match_10);
            backend_libs__matching__succeeded = MR_TRUE;
          }
        if (backend_libs__matching__succeeded)
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__UnmatchedNodes1_9;
        else
          {
            backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Node_5));
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__UnmatchedNodes1_9));
          }
      }
    return backend_libs__matching__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1)
{
  {
    MR_Box backend_libs__matching__wrapper_arg_2;
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv2_Match_6;

    {
      backend_libs__matching__conv2_Match_6 = backend_libs__matching__adj_to_matched_cost_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv2_Match_6));
    return backend_libs__matching__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
  MR_Word backend_libs__matching__Queue0_6,
  MR_Word backend_libs__matching__Seen0_7,
  MR_Word backend_libs__matching__Graph_8,
  MR_Word backend_libs__matching__Matching_9,
  MR_Word * backend_libs__matching__Path_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded;
        MR_Word backend_libs__matching__TypeCtorInfo_27_27;
        MR_Word backend_libs__matching__TypeInfo_28_28;
        MR_Word backend_libs__matching__TypeCtorInfo_29_29;
        MR_Word backend_libs__matching__TypeCtorInfo_8_34;
        MR_Word backend_libs__matching__TypeInfo_9_35;
        MR_Word backend_libs__matching__NodePath_11;
        MR_Word backend_libs__matching__Queue1_12;
        MR_Word backend_libs__matching__BenefitNode_13;
        MR_Word backend_libs__matching__Path0_14;
        MR_Word backend_libs__matching__BenefitToCostsMap_16;
        MR_Word backend_libs__matching__AdjCostNodes_17;
        MR_Word backend_libs__matching__CostToBenefitMap_18;
        MR_Word backend_libs__matching__CostMatches_20;
        MR_Word backend_libs__matching__Var_24;
        MR_Word backend_libs__matching__Var_33;
        MR_Box backend_libs__matching__conv0_NodePath_11;
        MR_Word backend_libs__matching__Var_15;
        MR_Box backend_libs__matching__conv1_AdjCostNodes_17;
        MR_Word backend_libs__matching__Var_19;
        MR_Word backend_libs__matching__UnmatchedCostNode_21;

        {
          backend_libs__matching__succeeded = mercury__queue__get_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, &backend_libs__matching__conv0_NodePath_11, backend_libs__matching__Queue0_6, &backend_libs__matching__Queue1_12);
        }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__NodePath_11 = ((MR_Word) backend_libs__matching__conv0_NodePath_11);
            backend_libs__matching__succeeded = MR_TRUE;
          }
        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__BenefitNode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__NodePath_11, (MR_Integer) 0)));
            backend_libs__matching__Path0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__NodePath_11, (MR_Integer) 1)));
            backend_libs__matching__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_8, (MR_Integer) 0)));
            backend_libs__matching__BenefitToCostsMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_8, (MR_Integer) 1)));
            backend_libs__matching__TypeCtorInfo_27_27 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
            backend_libs__matching__TypeInfo_28_28 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
            {
              mercury__map__lookup_3_p_0(backend_libs__matching__TypeCtorInfo_27_27, backend_libs__matching__TypeInfo_28_28, backend_libs__matching__BenefitToCostsMap_16, ((MR_Box) (backend_libs__matching__BenefitNode_13)), &backend_libs__matching__conv1_AdjCostNodes_17);
            }
            backend_libs__matching__AdjCostNodes_17 = ((MR_Word) backend_libs__matching__conv1_AdjCostNodes_17);
            backend_libs__matching__CostToBenefitMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_9, (MR_Integer) 0)));
            backend_libs__matching__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_9, (MR_Integer) 1)));
            backend_libs__matching__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
            {
              backend_libs__matching__Var_24 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_29_29, backend_libs__matching__AdjCostNodes_17);
            }
            backend_libs__matching__TypeCtorInfo_8_34 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
            backend_libs__matching__TypeInfo_9_35 = (MR_Word) &backend_libs__matching_scalar_common_2[2];
            {
              backend_libs__matching__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_33, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_33, 1) = ((MR_Box) (backend_libs__matching__augpath_bf_4_f_0_1));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_33, 3) = ((MR_Box) (backend_libs__matching__CostToBenefitMap_18));
            }
            {
              backend_libs__matching__CostMatches_20 = mercury__list__map_2_f_0(backend_libs__matching__TypeCtorInfo_8_34, backend_libs__matching__TypeInfo_9_35, backend_libs__matching__Var_33, backend_libs__matching__Var_24);
            }
            {
              backend_libs__matching__succeeded = backend_libs__matching__find_unmatched_cost_1_f_0(backend_libs__matching__CostMatches_20, &backend_libs__matching__UnmatchedCostNode_21);
            }
            if (backend_libs__matching__succeeded)
              {
                MR_Word backend_libs__matching__Var_25;

                {
                  backend_libs__matching__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), backend_libs__matching__Var_25, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_13));
                  MR_hl_field(MR_mktag(0), backend_libs__matching__Var_25, 1) = ((MR_Box) (backend_libs__matching__UnmatchedCostNode_21));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *backend_libs__matching__Path_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__matching__Var_25));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__matching__Path0_14));
                }
                backend_libs__matching__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word backend_libs__matching__Seen_22;
                MR_Word backend_libs__matching__Queue2_23;

                {
                  backend_libs__matching__add_alternates_7_p_0(backend_libs__matching__CostMatches_20, backend_libs__matching__Seen0_7, &backend_libs__matching__Seen_22, backend_libs__matching__BenefitNode_13, backend_libs__matching__Path0_14, backend_libs__matching__Queue1_12, &backend_libs__matching__Queue2_23);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word backend_libs__matching__next_value_of_Queue0_6 = backend_libs__matching__Queue2_23;
                  MR_Word backend_libs__matching__next_value_of_Seen0_7 = backend_libs__matching__Seen_22;

                  backend_libs__matching__Seen0_7 = backend_libs__matching__next_value_of_Seen0_7;
                  backend_libs__matching__Queue0_6 = backend_libs__matching__next_value_of_Queue0_6;
                }
                continue;
              }
          }
        return backend_libs__matching__succeeded;
      }
      break;
    }
}

static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0_2,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Seen_3,
  MR_Word backend_libs__matching__BenefitNode_4,
  MR_Word backend_libs__matching__Path_5,
  MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0_6,
  MR_Word * backend_libs__matching__STATE_VARIABLE_Queue_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded;

        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *backend_libs__matching__STATE_VARIABLE_Queue_7 = backend_libs__matching__STATE_VARIABLE_Queue_0_6;
            *backend_libs__matching__STATE_VARIABLE_Seen_3 = backend_libs__matching__STATE_VARIABLE_Seen_0_2;
          }
        else
          {
            MR_Word backend_libs__matching__CostMatch_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__matching__CostMatches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word backend_libs__matching__CostNode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__CostMatch_16, (MR_Integer) 0)));
            MR_Word backend_libs__matching__MaybeAdjBenefitNode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__CostMatch_16, (MR_Integer) 1)));
            MR_Word backend_libs__matching__STATE_VARIABLE_Seen_31_31;
            MR_Word backend_libs__matching__STATE_VARIABLE_Queue_33_33;
            MR_Word backend_libs__matching__AdjBenefitNode_24;
            MR_Word backend_libs__matching__TypeCtorInfo_36_36;

            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__MaybeAdjBenefitNode_23)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__matching__succeeded)
              {
                backend_libs__matching__AdjBenefitNode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__MaybeAdjBenefitNode_23, (MR_Integer) 0)));
                backend_libs__matching__TypeCtorInfo_36_36 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
                {
                  backend_libs__matching__succeeded = mercury__list__member_2_p_0(backend_libs__matching__TypeCtorInfo_36_36, ((MR_Box) (backend_libs__matching__AdjBenefitNode_24)), backend_libs__matching__STATE_VARIABLE_Seen_0_2);
                }
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
              }
            if (backend_libs__matching__succeeded)
              {
                MR_Word backend_libs__matching__NewPath_25;
                MR_Word backend_libs__matching__BenefitNodeAndEdgeList_26;
                MR_Word backend_libs__matching__Var_32;

                {
                  backend_libs__matching__STATE_VARIABLE_Seen_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_Seen_31_31, 0) = ((MR_Box) (backend_libs__matching__AdjBenefitNode_24));
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_Seen_31_31, 1) = ((MR_Box) (backend_libs__matching__STATE_VARIABLE_Seen_0_2));
                }
                {
                  backend_libs__matching__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), backend_libs__matching__Var_32, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_4));
                  MR_hl_field(MR_mktag(0), backend_libs__matching__Var_32, 1) = ((MR_Box) (backend_libs__matching__CostNode_22));
                }
                {
                  backend_libs__matching__NewPath_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), backend_libs__matching__NewPath_25, 0) = ((MR_Box) (backend_libs__matching__Var_32));
                  MR_hl_field(MR_mktag(1), backend_libs__matching__NewPath_25, 1) = ((MR_Box) (backend_libs__matching__Path_5));
                }
                {
                  backend_libs__matching__BenefitNodeAndEdgeList_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), backend_libs__matching__BenefitNodeAndEdgeList_26, 0) = ((MR_Box) (backend_libs__matching__AdjBenefitNode_24));
                  MR_hl_field(MR_mktag(0), backend_libs__matching__BenefitNodeAndEdgeList_26, 1) = ((MR_Box) (backend_libs__matching__NewPath_25));
                }
                {
                  mercury__queue__put_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, ((MR_Box) (backend_libs__matching__BenefitNodeAndEdgeList_26)), backend_libs__matching__STATE_VARIABLE_Queue_0_6, &backend_libs__matching__STATE_VARIABLE_Queue_33_33);
                }
              }
            else
              {
                backend_libs__matching__STATE_VARIABLE_Queue_33_33 = backend_libs__matching__STATE_VARIABLE_Queue_0_6;
                backend_libs__matching__STATE_VARIABLE_Seen_31_31 = backend_libs__matching__STATE_VARIABLE_Seen_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__matching__next_value_of_HeadVar__1_1 = backend_libs__matching__CostMatches_17;
              MR_Word backend_libs__matching__next_value_of_STATE_VARIABLE_Seen_0_2 = backend_libs__matching__STATE_VARIABLE_Seen_31_31;
              MR_Word backend_libs__matching__next_value_of_STATE_VARIABLE_Queue_0_6 = backend_libs__matching__STATE_VARIABLE_Queue_33_33;

              backend_libs__matching__STATE_VARIABLE_Queue_0_6 = backend_libs__matching__next_value_of_STATE_VARIABLE_Queue_0_6;
              backend_libs__matching__STATE_VARIABLE_Seen_0_2 = backend_libs__matching__next_value_of_STATE_VARIABLE_Seen_0_2;
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word * backend_libs__matching__Unmatched_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word backend_libs__matching__CostNode_3;
        MR_Word backend_libs__matching__MaybeBenefitNode_4;
        MR_Word backend_libs__matching__Matches_5;
        MR_Word backend_libs__matching__Var_8;

        if (backend_libs__matching__succeeded)
          {
            backend_libs__matching__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
            backend_libs__matching__Matches_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
            backend_libs__matching__CostNode_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Var_8, (MR_Integer) 0)));
            backend_libs__matching__MaybeBenefitNode_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Var_8, (MR_Integer) 1)));
            if ((backend_libs__matching__MaybeBenefitNode_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *backend_libs__matching__Unmatched_6 = backend_libs__matching__CostNode_3;
                backend_libs__matching__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word backend_libs__matching__next_value_of_HeadVar__1_1 = backend_libs__matching__Matches_5;

                  backend_libs__matching__HeadVar__1_1 = backend_libs__matching__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return backend_libs__matching__succeeded;
      }
      break;
    }
}

static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded;
        MR_Word backend_libs__matching__Q_3;

        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          backend_libs__matching__Q_3 = backend_libs__matching__HeadVar__2_2;
        else
          {
            MR_Word backend_libs__matching__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__matching__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word backend_libs__matching__Q1_9;
            MR_Word backend_libs__matching__Var_10;

            {
              backend_libs__matching__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_10, 0) = ((MR_Box) (backend_libs__matching__N_5));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              backend_libs__matching__Q1_9 = mercury__queue__put_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, backend_libs__matching__HeadVar__2_2, ((MR_Box) (backend_libs__matching__Var_10)));
            }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__matching__next_value_of_HeadVar__1_1 = backend_libs__matching__Ns_6;
              MR_Word backend_libs__matching__next_value_of_HeadVar__2_2 = backend_libs__matching__Q1_9;

              backend_libs__matching__HeadVar__2_2 = backend_libs__matching__next_value_of_HeadVar__2_2;
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        return backend_libs__matching__Q_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
  MR_Word backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__Matching0_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__matching__succeeded;
        MR_Word backend_libs__matching__HeadVar__3_3;

        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__Matching0_2;
        else
          {
            MR_Word backend_libs__matching__TypeCtorInfo_16_16;
            MR_Word backend_libs__matching__TypeCtorInfo_17_17;
            MR_Word backend_libs__matching__BenefitNode_5;
            MR_Word backend_libs__matching__CostNode_6;
            MR_Word backend_libs__matching__Path_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word backend_libs__matching__CostToBenefitMap0_10;
            MR_Word backend_libs__matching__BenefitToCostMap0_11;
            MR_Word backend_libs__matching__CostToBenefitMap1_12;
            MR_Word backend_libs__matching__BenefitToCostMap1_13;
            MR_Word backend_libs__matching__Matching1_14;
            MR_Word backend_libs__matching__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));

            backend_libs__matching__BenefitNode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Var_15, (MR_Integer) 0)));
            backend_libs__matching__CostNode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Var_15, (MR_Integer) 1)));
            backend_libs__matching__CostToBenefitMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_2, (MR_Integer) 0)));
            backend_libs__matching__BenefitToCostMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_2, (MR_Integer) 1)));
            backend_libs__matching__TypeCtorInfo_16_16 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
            backend_libs__matching__TypeCtorInfo_17_17 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
            {
              mercury__map__set_4_p_0(backend_libs__matching__TypeCtorInfo_16_16, backend_libs__matching__TypeCtorInfo_17_17, ((MR_Box) (backend_libs__matching__CostNode_6)), ((MR_Box) (backend_libs__matching__BenefitNode_5)), backend_libs__matching__CostToBenefitMap0_10, &backend_libs__matching__CostToBenefitMap1_12);
            }
            {
              mercury__map__set_4_p_0(backend_libs__matching__TypeCtorInfo_17_17, backend_libs__matching__TypeCtorInfo_16_16, ((MR_Box) (backend_libs__matching__BenefitNode_5)), ((MR_Box) (backend_libs__matching__CostNode_6)), backend_libs__matching__BenefitToCostMap0_11, &backend_libs__matching__BenefitToCostMap1_13);
            }
            {
              backend_libs__matching__Matching1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__matching__Matching1_14, 0) = ((MR_Box) (backend_libs__matching__CostToBenefitMap1_12));
              MR_hl_field(MR_mktag(0), backend_libs__matching__Matching1_14, 1) = ((MR_Box) (backend_libs__matching__BenefitToCostMap1_13));
            }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__matching__next_value_of_HeadVar__1_1 = backend_libs__matching__Path_7;
              MR_Word backend_libs__matching__next_value_of_Matching0_2 = backend_libs__matching__Matching1_14;

              backend_libs__matching__Matching0_2 = backend_libs__matching__next_value_of_Matching0_2;
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        return backend_libs__matching__HeadVar__3_3;
      }
      break;
    }
}

static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
  MR_Box backend_libs__matching__closure_arg,
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box * backend_libs__matching__wrapper_arg_3,
  MR_Box backend_libs__matching__wrapper_arg_4,
  MR_Box * backend_libs__matching__wrapper_arg_5)
{
  {
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
    MR_Word backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12;
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14;

    {
      backend_libs__matching__create_graph_links_5_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12, ((MR_Word) backend_libs__matching__wrapper_arg_4), &backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14);
    }
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12));
    *backend_libs__matching__wrapper_arg_5 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14));
  }
}

static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
  MR_Word backend_libs__matching__CostsBenefits_3)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__Graph_4;
    MR_Word backend_libs__matching__CostToBenefitsMap_5;
    MR_Word backend_libs__matching__BenefitToCostsMap_6;
    MR_Word backend_libs__matching__Var_8;
    MR_Word backend_libs__matching__Var_9;
    MR_Box backend_libs__matching__conv3_CostToBenefitsMap_5;
    MR_Box backend_libs__matching__conv2_BenefitToCostsMap_6;

    {
      backend_libs__matching__Var_8 = mercury__map__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2]);
    }
    {
      backend_libs__matching__Var_9 = mercury__map__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3]);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0, (MR_Word) &backend_libs__matching_scalar_common_2[0], (MR_Word) &backend_libs__matching_scalar_common_2[1], (MR_Word) &backend_libs__matching_scalar_common_2[6], backend_libs__matching__CostsBenefits_3, ((MR_Box) (backend_libs__matching__Var_8)), &backend_libs__matching__conv3_CostToBenefitsMap_5, ((MR_Box) (backend_libs__matching__Var_9)), &backend_libs__matching__conv2_BenefitToCostsMap_6);
    }
    backend_libs__matching__CostToBenefitsMap_5 = ((MR_Word) backend_libs__matching__conv3_CostToBenefitsMap_5);
    backend_libs__matching__BenefitToCostsMap_6 = ((MR_Word) backend_libs__matching__conv2_BenefitToCostsMap_6);
    {
      backend_libs__matching__Graph_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_4, 0) = ((MR_Box) (backend_libs__matching__CostToBenefitsMap_5));
      MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_4, 1) = ((MR_Box) (backend_libs__matching__BenefitToCostsMap_6));
    }
    return backend_libs__matching__Graph_4;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
  MR_Integer backend_libs__matching__HeadVar__1_1,
  MR_Word backend_libs__matching__HeadVar__2_2)
{
  {
    MR_bool backend_libs__matching__succeeded;
    MR_Word backend_libs__matching__HeadVar__3_3;

    if ((backend_libs__matching__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__matching__Segment_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__matching__Segments_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__matching__Var_8;
        MR_Word backend_libs__matching__Var_9;
        MR_Integer backend_libs__matching__Var_10;

        {
          backend_libs__matching__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__matching__Var_8, 0) = ((MR_Box) (backend_libs__matching__HeadVar__1_1));
          MR_hl_field(MR_mktag(0), backend_libs__matching__Var_8, 1) = ((MR_Box) (backend_libs__matching__Segment_6));
        }
        backend_libs__matching__Var_10 = (backend_libs__matching__HeadVar__1_1 + (MR_Integer) 1);
        {
          backend_libs__matching__Var_9 = backend_libs__matching__number_segments_2_f_0(backend_libs__matching__Var_10, backend_libs__matching__Segments_7);
        }
        {
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Var_8));
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__Var_9));
        }
      }
    return backend_libs__matching__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____benefit_node_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_operation_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____benefit_operation_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____cost_node_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____cost_node_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____cost_operation_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____cost_operation_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____edge_list_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____edge_list_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____field_costs_benefits_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____field_costs_benefits_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____matching_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____matching_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____matching_params_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____matching_params_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
  MR_Box backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2)
{
  {
    MR_bool backend_libs__matching__succeeded;

    {
      backend_libs__matching__succeeded = backend_libs__matching____Unify____stack_slot_graph_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
    return backend_libs__matching__succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
  MR_Box * backend_libs__matching__wrapper_arg_1,
  MR_Box backend_libs__matching__wrapper_arg_2,
  MR_Box backend_libs__matching__wrapper_arg_3)
{
  {
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

    {
      backend_libs__matching____Compare____stack_slot_graph_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
  }
}

void mercury__backend_libs__matching__init(void)
{
}

void mercury__backend_libs__matching__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_edge_list_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_matching_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0);
	MR_register_type_ctor_info(&backend_libs__matching__backend_libs__matching__type_ctor_info_stack_slot_graph_0);
}

void mercury__backend_libs__matching__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__matching__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.matching. */
