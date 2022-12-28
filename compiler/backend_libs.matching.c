/*
** Automatically generated from `matching.m'
** by the Mercury compiler,
** version 22.01.5-beta-2022-12-28
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


// :- module backend_libs.matching.
// :- implementation.

/*
INIT mercury__backend_libs__matching__init
ENDINIT
*/

#include "backend_libs.matching.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "require.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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

static const MR_DuArgLocn backend_libs__matching__backend_libs__matching__field_locns_matching_params_0_0[7];

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
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__586__1_2_f_0(
  MR_Word BenefitToCostMap_18,
  MR_Word HeadVar__2_33);

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____matching_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
  MR_Word ViaCellOccurringVars_3,
  MR_Word FieldCostsBenefits_4);

static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
  MR_Word CostToBenefitMap_4,
  MR_Word CostNode_5);

static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
  MR_Word CostToBenefitsMap_5,
  MR_Word CostNode_6,
  MR_Word STATE_VARIABLE_BenefitNodes_0_9,
  MR_Word * STATE_VARIABLE_BenefitNodes_10);

static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
  MR_Word Costs_5,
  MR_Word Benefit_6,
  MR_Word STATE_VARIABLE_BenefitToCostsMap_0_10,
  MR_Word * STATE_VARIABLE_BenefitToCostsMap_11);

static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
  MR_Word Benefits_5,
  MR_Word Cost_6,
  MR_Word STATE_VARIABLE_CostToBenefitsMap_0_10,
  MR_Word * STATE_VARIABLE_CostToBenefitsMap_11);

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CostToBenefitsMap_0_11,
  MR_Word * STATE_VARIABLE_CostToBenefitsMap_12,
  MR_Word STATE_VARIABLE_BenefitToCostsMap_0_13,
  MR_Word * STATE_VARIABLE_BenefitToCostsMap_14);

static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Costs_0_8,
  MR_Word * STATE_VARIABLE_Costs_9);

static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Benefits_0_8,
  MR_Word * STATE_VARIABLE_Benefits_9);

static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
  MR_Integer Cur_4,
  MR_Word Op_5);

static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
  MR_Integer Cur_4,
  MR_Word Op_5);

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
  MR_Word CellVar_8,
  MR_Word BeforeFlush_9,
  MR_Word AfterFlush_10,
  MR_Word CellVarFlushedLater_11,
  MR_Word MatchingParams_12,
  MR_Word FieldVar_13);

static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FieldVar_2,
  MR_Word STATE_VARIABLE_CostOps_0_3,
  MR_Word * STATE_VARIABLE_CostOps_4);

static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
  MR_Word CellVar_5,
  MR_Word CandidateArgVars_6,
  MR_Word SegmentVars0_7,
  MR_Word * SegmentVars_8);

static MR_Box MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MatchingCB_2);

static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
  MR_Word SelectedCostNodes_5,
  MR_Word Graph_6,
  MR_Word Matching_7);

static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
  MR_Word SelectedCostNodes_6,
  MR_Word Graph_7,
  MR_Word Matching_8,
  MR_Word STATE_VARIABLE_BenefitNodes_0_20,
  MR_Word * STATE_VARIABLE_BenefitNodes_21);

static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
  MR_Word BenefitNodes_4,
  MR_Word Graph_5);

static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
  MR_Word BenefitNodes_5,
  MR_Word Graph_6,
  MR_Word STATE_VARIABLE_Matching_0_9,
  MR_Word * STATE_VARIABLE_Matching_10);

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MatchingBC_2);

static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
  MR_Word Queue0_6,
  MR_Word Seen0_7,
  MR_Word Graph_8,
  MR_Word Matching_9,
  MR_Word * Path_10);

static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_2,
  MR_Word * STATE_VARIABLE_Seen_3,
  MR_Word BenefitNode_4,
  MR_Word Path_5,
  MR_Word STATE_VARIABLE_Queue_0_6,
  MR_Word * STATE_VARIABLE_Queue_7);

static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
  MR_Word HeadVar__1_1,
  MR_Word * Unmatched_6);

static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Matching0_2);

static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
  MR_Word CostsBenefits_3);

static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[2])),
    ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[3])),
    ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[2])),
    ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_4[3])),
    ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_7[1])),
    ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_7[2])),
    ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0),
    (MR_PseudoTypeInfo) (&backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0),
    (MR_PseudoTypeInfo) (&backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0),
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0),
    (MR_PseudoTypeInfo) (&backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0),
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0 = {
  (MR_String) "benefit_node",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_node_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_node_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_node",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0,

};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0),
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0),
  (MR_PseudoTypeInfo) (&backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0 = {
  (MR_String) "benefit_node_and_edge_list",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_node_and_edge_list",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0,

};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0 = {
  (MR_String) "field_var_load",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1 = {
  (MR_String) "field_var_store",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_operation_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_operation_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_operation",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0,

};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0 = {
  (MR_String) "cost_node",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____cost_node_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____cost_node_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "cost_node",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0,

};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0 = {
  (MR_String) "cell_var_load",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1 = {
  (MR_String) "cell_var_store",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____cost_operation_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____cost_operation_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "cost_operation",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0,

};

const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_edge_list_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__matching____Unify____edge_list_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____edge_list_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "edge_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0),
  (MR_PseudoTypeInfo) (&backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0 = {
  (MR_String) "field_costs_benefits",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____field_costs_benefits_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____field_costs_benefits_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "field_costs_benefits",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0,

};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0),
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0),
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0),
  (MR_PseudoTypeInfo) (&backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0 = {
  (MR_String) "matching",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_matching_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____matching_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____matching_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "matching",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_matching_0,

};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_svcell_all_candidates_0)
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

static const MR_DuArgLocn backend_libs__matching__backend_libs__matching__field_locns_matching_params_0_0[7] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0 = {
  (MR_String) "matching_params",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0,
  backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0,
  backend_libs__matching__backend_libs__matching__field_locns_matching_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____matching_params_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____matching_params_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "matching_params",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0,

};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0),
    (MR_TypeInfo) (&backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0),
    (MR_TypeInfo) (&backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0),
  (MR_PseudoTypeInfo) (&backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0)
};

static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0 = {
  (MR_String) "stack_slot_graph",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____stack_slot_graph_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____stack_slot_graph_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "stack_slot_graph",
  {     backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0 },
  {     backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0,

};

static MR_Word MR_CALL 
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__586__1_2_f_0(
  MR_Word BenefitToCostMap_18,
  MR_Word HeadVar__2_33)
{
  {
    MR_Word HeadVar__3_34;
    MR_Box conv0_HeadVar__3_34;

    conv0_HeadVar__3_34 = mercury__map__lookup_2_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), BenefitToCostMap_18, ((MR_Box) (HeadVar__2_33)));
    HeadVar__3_34 = ((MR_Word) (conv0_HeadVar__3_34));
    return HeadVar__3_34;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__matching_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&backend_libs__matching_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
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

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
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

              succeeded = (ArgX5_16 < ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX5_16 > ArgY5_17);
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

                succeeded = (ArgX6_19 < ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX6_19 > ArgY6_20);
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
                  MR_Integer Var_33 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_34 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_33 < Var_34);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_33 > Var_34);
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
      }
    }
  }
}

MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);

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
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
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
backend_libs__matching____Compare____matching_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__matching_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&backend_libs__matching_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&backend_libs__matching_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&backend_libs__matching_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_11 < ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_11 > ArgY1_5);
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
backend_libs__matching____Unify____cost_operation_0_0(
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
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0(
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
      MR_Integer CastX_17 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_18 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_17 == CastY_18);
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
      if ((ArgX1_4 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgY1_5 == (MR_Word) ((MR_Unsigned) 0U)))
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
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      else
      {
        MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgX1_4, (MR_Integer) 0))));

        if ((ArgY1_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgY1_5, (MR_Integer) 0))));

          succeeded = (Var_20 < ArgY1_14);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_20 > ArgY1_14);
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
        }
      }
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

MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0(
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
      MR_Integer CastX_13 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_14 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_13 == CastY_14);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      if ((ArgX1_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer CastX_11 = (MR_Integer) (ArgX1_3);
        MR_Integer CastY_12 = (MR_Integer) (ArgY1_4);

        succeeded = (CastY_12 == CastX_11);
      }
      else
      {
        MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgX1_3, (MR_Integer) 0))));
        MR_Integer ArgY1_10;

        succeeded = (ArgY1_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgY1_4, (MR_Integer) 0))));
          succeeded = (ArgX1_9 == ArgY1_10);
        }
      }
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
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
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
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
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&backend_libs__matching_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_10_10 = (MR_Word) (&backend_libs__matching_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      backend_libs__matching____Compare____benefit_node_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
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
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = backend_libs__matching____Unify____benefit_node_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&backend_libs__matching_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0(
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
      MR_Integer CastX_21 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_22 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_21 == CastY_22);
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
      if (((MR_tag((MR_Word) ArgX1_4)) == (MR_Integer) 0))
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ArgY1_5)) == (MR_Integer) 0))
        {
          MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 0))));

          mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_14)));
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
        else
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX1_4, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ArgY1_5)) == (MR_Integer) 0))
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY1_5, (MR_Integer) 0))));

          mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (Var_26)), ((MR_Box) (ArgY1_20)));
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
      }
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

MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0(
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
      MR_Integer CastX_13 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_14 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_13 == CastY_14);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) ArgX1_3)) == (MR_Integer) 0))
      {
        MR_Word TypeInfo_9_15;
        MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0))));
        MR_Word ArgY1_10;

        succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 0);
        if (succeeded)
        {
          ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0))));
          TypeInfo_9_15 = (MR_Word) (&backend_libs__matching_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_15, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
        }
      }
      else
      {
        MR_Word TypeInfo_10_16;
        MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX1_3, (MR_Integer) 0))));
        MR_Word ArgY1_12;

        succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY1_4, (MR_Integer) 0))));
          TypeInfo_10_16 = (MR_Word) (&backend_libs__matching_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_16, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
        }
      }
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word CostOp_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return CostOp_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word BenefitOp_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return BenefitOp_3;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
  MR_Word ViaCellOccurringVars_3,
  MR_Word FieldCostsBenefits_4)
{
  {
    MR_bool succeeded;
    MR_Word FieldVar_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldCostsBenefits_4, (MR_Integer) 0))));

    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ViaCellOccurringVars_3, FieldVar_5);
    return succeeded;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
  MR_Word CostToBenefitMap_4,
  MR_Word CostNode_5)
{
  {
    MR_bool succeeded;
    MR_Word Match_6;
    MR_Word BenefitNode_7;
    MR_Box conv0_BenefitNode_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), CostToBenefitMap_4, ((MR_Box) (CostNode_5)), &conv0_BenefitNode_7);
    if (succeeded)
    {
      BenefitNode_7 = ((MR_Word) (conv0_BenefitNode_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_8;

      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (BenefitNode_7));
      }
      {
        Match_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Match_6, 0) = ((MR_Box) (CostNode_5));
        MR_hl_field(MR_mktag(0), Match_6, 1) = ((MR_Box) (Var_8));
      }
    }
    else
      {
        Match_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Match_6, 0) = ((MR_Box) (CostNode_5));
        MR_hl_field(MR_mktag(0), Match_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    return Match_6;
  }
}

static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
  MR_Word CostToBenefitsMap_5,
  MR_Word CostNode_6,
  MR_Word STATE_VARIABLE_BenefitNodes_0_9,
  MR_Word * STATE_VARIABLE_BenefitNodes_10)
{
  {
    MR_Word AdjBenefitNodes_8;
    MR_Box conv0_AdjBenefitNodes_8;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]), CostToBenefitsMap_5, ((MR_Box) (CostNode_6)), &conv0_AdjBenefitNodes_8);
    AdjBenefitNodes_8 = ((MR_Word) (conv0_AdjBenefitNodes_8));
    mercury__set__union_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), AdjBenefitNodes_8, STATE_VARIABLE_BenefitNodes_0_9, STATE_VARIABLE_BenefitNodes_10);
  }
}

static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
  MR_Word Costs_5,
  MR_Word Benefit_6,
  MR_Word STATE_VARIABLE_BenefitToCostsMap_0_10,
  MR_Word * STATE_VARIABLE_BenefitToCostsMap_11)
{
  {
    MR_bool succeeded;
    MR_Word BenefitCosts0_8;
    MR_Box conv0_BenefitCosts0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[3]), STATE_VARIABLE_BenefitToCostsMap_0_10, ((MR_Box) (Benefit_6)), &conv0_BenefitCosts0_8);
    if (succeeded)
    {
      BenefitCosts0_8 = ((MR_Word) (conv0_BenefitCosts0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word BenefitCosts_9;

      mercury__set__union_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), BenefitCosts0_8, Costs_5, &BenefitCosts_9);
      mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[3]), ((MR_Box) (Benefit_6)), ((MR_Box) (BenefitCosts_9)), STATE_VARIABLE_BenefitToCostsMap_0_10, STATE_VARIABLE_BenefitToCostsMap_11);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[3]), ((MR_Box) (Benefit_6)), ((MR_Box) (Costs_5)), STATE_VARIABLE_BenefitToCostsMap_0_10, STATE_VARIABLE_BenefitToCostsMap_11);
  }
}

static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
  MR_Word Benefits_5,
  MR_Word Cost_6,
  MR_Word STATE_VARIABLE_CostToBenefitsMap_0_10,
  MR_Word * STATE_VARIABLE_CostToBenefitsMap_11)
{
  {
    MR_bool succeeded;
    MR_Word CostBenefits0_8;
    MR_Box conv0_CostBenefits0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]), STATE_VARIABLE_CostToBenefitsMap_0_10, ((MR_Box) (Cost_6)), &conv0_CostBenefits0_8);
    if (succeeded)
    {
      CostBenefits0_8 = ((MR_Word) (conv0_CostBenefits0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word CostBenefits_9;

      mercury__set__union_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), CostBenefits0_8, Benefits_5, &CostBenefits_9);
      mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]), ((MR_Box) (Cost_6)), ((MR_Box) (CostBenefits_9)), STATE_VARIABLE_CostToBenefitsMap_0_10, STATE_VARIABLE_CostToBenefitsMap_11);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]), ((MR_Box) (Cost_6)), ((MR_Box) (Benefits_5)), STATE_VARIABLE_CostToBenefitsMap_0_10, STATE_VARIABLE_CostToBenefitsMap_11);
  }
}

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_BenefitToCostsMap_11;

    backend_libs__matching__add_benefit_cost_links_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_BenefitToCostsMap_11);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_BenefitToCostsMap_11));
  }
}

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CostToBenefitsMap_11;

    backend_libs__matching__add_cost_benefit_links_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CostToBenefitsMap_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CostToBenefitsMap_11));
  }
}

static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CostToBenefitsMap_0_11,
  MR_Word * STATE_VARIABLE_CostToBenefitsMap_12,
  MR_Word STATE_VARIABLE_BenefitToCostsMap_0_13,
  MR_Word * STATE_VARIABLE_BenefitToCostsMap_14)
{
  {
    MR_Word Costs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Benefits_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv1_STATE_VARIABLE_CostToBenefitsMap_12;
    MR_Box conv3_STATE_VARIABLE_BenefitToCostsMap_14;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Benefits_8));
    }
    Var_16 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), Costs_7);
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching_scalar_common_2[0]), Var_15, Var_16, ((MR_Box) (STATE_VARIABLE_CostToBenefitsMap_0_11)), &conv1_STATE_VARIABLE_CostToBenefitsMap_12);
    *STATE_VARIABLE_CostToBenefitsMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_CostToBenefitsMap_12));
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Costs_7));
    }
    Var_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), Benefits_8);
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching_scalar_common_2[1]), Var_18, Var_19, ((MR_Box) (STATE_VARIABLE_BenefitToCostsMap_0_13)), &conv3_STATE_VARIABLE_BenefitToCostsMap_14);
    *STATE_VARIABLE_BenefitToCostsMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_BenefitToCostsMap_14));
  }
}

static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Costs_0_8,
  MR_Word * STATE_VARIABLE_Costs_9)
{
  {
    MR_Word FieldCosts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    mercury__set__union_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), FieldCosts_5, STATE_VARIABLE_Costs_0_8, STATE_VARIABLE_Costs_9);
  }
}

static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Benefits_0_8,
  MR_Word * STATE_VARIABLE_Benefits_9)
{
  {
    MR_Word FieldBenefits_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    mercury__set__union_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), FieldBenefits_6, STATE_VARIABLE_Benefits_0_8, STATE_VARIABLE_Benefits_9);
  }
}

static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(HeadVar__2_2, HeadVar__3_3);
    else
      HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(HeadVar__1_1, HeadVar__3_3);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
  MR_Integer Cur_4,
  MR_Word Op_5)
{
  {
    MR_bool succeeded = (Cur_4 > (MR_Integer) 0);
    MR_Word HeadVar__3_3;

    if (succeeded)
    {
      MR_Word Var_7;
      MR_Word Var_8;
      MR_Integer Var_9;

      {
        Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Op_5));
        MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Cur_4));
      }
      Var_9 = (MR_Integer) ((MR_Unsigned) Cur_4 - (MR_Unsigned) 1);
      Var_8 = backend_libs__matching__make_benefit_op_copies_2_f_0(Var_9, Op_5);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_8));
      }
    }
    else
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U));
    else
      HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(HeadVar__2_2, HeadVar__3_3);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
  MR_Integer Cur_4,
  MR_Word Op_5)
{
  {
    MR_bool succeeded = (Cur_4 > (MR_Integer) 0);
    MR_Word HeadVar__3_3;

    if (succeeded)
    {
      MR_Word Var_7;
      MR_Word Var_8;
      MR_Integer Var_9;

      {
        Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Op_5));
        MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Cur_4));
      }
      Var_9 = (MR_Integer) ((MR_Unsigned) Cur_4 - (MR_Unsigned) 1);
      Var_8 = backend_libs__matching__make_cost_op_copies_2_f_0(Var_9, Op_5);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_8));
      }
    }
    else
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = backend_libs__matching__replicate_benefit_op_3_f_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = backend_libs__matching__replicate_cost_op_3_f_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
  MR_Word CellVar_8,
  MR_Word BeforeFlush_9,
  MR_Word AfterFlush_10,
  MR_Word CellVarFlushedLater_11,
  MR_Word MatchingParams_12,
  MR_Word FieldVar_13)
{
  {
    MR_bool succeeded;
    MR_Word FieldCostsBenefits_14;
    MR_Word CostOps0_15;
    MR_Word CostOps_16;
    MR_Word BenefitOps0_17;
    MR_Word BenefitOps_18;
    MR_Integer CellVarStoreCost_19;
    MR_Integer CellVarLoadCost_20;
    MR_Word CostNodeLists_21;
    MR_Word CostNodes_22;
    MR_Word CostNodeSet_23;
    MR_Integer FieldVarStoreCost_24;
    MR_Integer FieldVarLoadCost_25;
    MR_Word BenefitNodeLists_26;
    MR_Word BenefitNodes_27;
    MR_Word BenefitNodeSet_28;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;

    backend_libs__matching__find_cell_var_loads_for_field_4_p_0(AfterFlush_10, FieldVar_13, (MR_Word) ((MR_Unsigned) 0U), &CostOps0_15);
    switch (CellVarFlushedLater_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          CostOps_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CostOps_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), CostOps_16, 1) = ((MR_Box) (CostOps0_15));
        }
        break;
      case (MR_Integer) 1:
        CostOps_16 = CostOps0_15;
        break;
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (FieldVar_13));
    }
    {
      BenefitOps0_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), BenefitOps0_17, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), BenefitOps0_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BeforeFlush_9, CellVar_8);
    if (succeeded)
      BenefitOps_18 = BenefitOps0_17;
    else
    {
      MR_Word Var_33;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (FieldVar_13));
      }
      {
        BenefitOps_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BenefitOps_18, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), BenefitOps_18, 1) = ((MR_Box) (BenefitOps0_17));
      }
    }
    CellVarStoreCost_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MatchingParams_12, (MR_Integer) 0))));
    CellVarLoadCost_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MatchingParams_12, (MR_Integer) 1))));
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (backend_libs__matching__find_costs_benefits_6_f_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (CellVarStoreCost_19));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (CellVarLoadCost_20));
    }
    CostNodeLists_21 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0), (MR_Word) (&backend_libs__matching_scalar_common_1[4]), Var_34, CostOps_16);
    mercury__list__condense_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), CostNodeLists_21, &CostNodes_22);
    mercury__set__list_to_set_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), CostNodes_22, &CostNodeSet_23);
    FieldVarStoreCost_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MatchingParams_12, (MR_Integer) 2))));
    FieldVarLoadCost_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MatchingParams_12, (MR_Integer) 3))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (backend_libs__matching__find_costs_benefits_6_f_0_2));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (FieldVarStoreCost_24));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (FieldVarLoadCost_25));
    }
    BenefitNodeLists_26 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0), (MR_Word) (&backend_libs__matching_scalar_common_1[5]), Var_35, BenefitOps_18);
    mercury__list__condense_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), BenefitNodeLists_26, &BenefitNodes_27);
    mercury__set__list_to_set_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), BenefitNodes_27, &BenefitNodeSet_28);
    {
      FieldCostsBenefits_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldCostsBenefits_14, 0) = ((MR_Box) (FieldVar_13));
      MR_hl_field(MR_mktag(0), FieldCostsBenefits_14, 1) = ((MR_Box) (CostNodeSet_23));
      MR_hl_field(MR_mktag(0), FieldCostsBenefits_14, 2) = ((MR_Box) (BenefitNodeSet_28));
    }
    return FieldCostsBenefits_14;
  }
}

static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FieldVar_2,
  MR_Word STATE_VARIABLE_CostOps_0_3,
  MR_Word * STATE_VARIABLE_CostOps_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CostOps_4 = STATE_VARIABLE_CostOps_0_3;
    else
    {
      MR_Integer SegmentNum_9;
      MR_Word SegmentVars_10;
      MR_Word AfterFlush_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_CostOps_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CostOps_0_3;

      SegmentNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      SegmentVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SegmentVars_10, FieldVar_2);
      if (succeeded)
      {
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (SegmentNum_9));
        }
        {
          STATE_VARIABLE_CostOps_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_CostOps_17_17, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_CostOps_17_17, 1) = ((MR_Box) (STATE_VARIABLE_CostOps_0_3));
        }
      }
      else
        STATE_VARIABLE_CostOps_17_17 = STATE_VARIABLE_CostOps_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AfterFlush_11;
      next_value_of_STATE_VARIABLE_CostOps_0_3 = STATE_VARIABLE_CostOps_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CostOps_0_3 = next_value_of_STATE_VARIABLE_CostOps_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
  MR_Word CellVar_5,
  MR_Word CandidateArgVars_6,
  MR_Word SegmentVars0_7,
  MR_Word * SegmentVars_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_10_10;

    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SegmentVars0_7, CellVar_5);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeCtorInfo_10_10 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      *SegmentVars_8 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_10_10, SegmentVars0_7, CandidateArgVars_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__matching__find_via_cell_vars_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word MatchingParams_14,
  MR_Word CellVar_15,
  MR_Word CandidateFieldVars_16,
  MR_Word CellVarFlushedLater_17,
  MR_Word BeforeFlush_18,
  MR_Word AfterFlush_19,
  MR_Word * RealizedBenefitNodes_20,
  MR_Word * RealizedCostNodes_21,
  MR_Word * ViaCellVars_22)
{
  backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0(MatchingParams_14, CellVar_15, CandidateFieldVars_16, CellVarFlushedLater_17, BeforeFlush_18, AfterFlush_19, RealizedBenefitNodes_20, RealizedCostNodes_21, ViaCellVars_22);
}

static MR_Box MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv11_CostOp_3;

    conv11_CostOp_3 = backend_libs__matching__project_cost_op_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_CostOp_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_BenefitOp_3;

    conv10_BenefitOp_3 = backend_libs__matching__project_benefit_op_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_BenefitOp_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Costs_9;

    backend_libs__matching__gather_costs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Costs_9);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Costs_9));
  }
}

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Benefits_9;

    backend_libs__matching__gather_benefits_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Benefits_9);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Benefits_9));
  }
}

static MR_bool MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__matching__realized_costs_benefits_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Costs_9;

    backend_libs__matching__gather_costs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Costs_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Costs_9));
  }
}

static void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Benefits_9;

    backend_libs__matching__gather_benefits_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Benefits_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Benefits_9));
  }
}

static MR_Box MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_FieldCostsBenefits_14;

    conv1_FieldCostsBenefits_14 = backend_libs__matching__find_costs_benefits_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_FieldCostsBenefits_14));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_SegmentVars_8;

    succeeded = backend_libs__matching__simplify_segment_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_SegmentVars_8);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_SegmentVars_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word MatchingParams_14,
  MR_Word CellVar_15,
  MR_Word CandidateFieldVars_16,
  MR_Word CellVarFlushedLater_17,
  MR_Word BeforeFlush_18,
  MR_Word AfterFlush_19,
  MR_Word * RealizedBenefitNodes_20,
  MR_Word * RealizedCostNodes_21,
  MR_Word * ViaCellVars_22)
{
  {
    MR_bool succeeded;
    MR_Word InclAllCand_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MatchingParams_14, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word OccurringCandidateFieldVars_25;
    MR_Word NonOccurringCandidateFieldVars_26;
    MR_Word OccurringCandidateFieldVarList_27;
    MR_Word FilteredAfterFlush_28;
    MR_Word NumberedAfterFlush_29;
    MR_Word CostsBenefits_30;
    MR_Word BenefitNodes_31;
    MR_Word CostNodes_32;
    MR_Word BenefitNodeList_33;
    MR_Word CostNodeList_34;
    MR_Word Graph_35;
    MR_Word MaximalMatching_36;
    MR_Word MaximalMatchingCostToBenefit_37;
    MR_Word UnMatchedCostNodes_39;
    MR_Word MarkedBenefitNodes_40;
    MR_Word ViaCellOccurringVars0_41;
    MR_Word RealizedCostsBenefits_42;
    MR_Word RealizedBenefitOps_43;
    MR_Word RealizedCostOps_44;
    MR_Word RealizedBenefitNodeList_45;
    MR_Word RealizedCostNodeList_46;
    MR_Word RealizedBenefitOpList_47;
    MR_Word RealizedCostOpList_48;
    MR_Integer RealizedBenefitNodeCount_49;
    MR_Integer RealizedBenefitOpCount_50;
    MR_Integer RealizedCostNodeCount_51;
    MR_Integer RealizedCostOpCount_52;
    MR_Integer OpRatio_53;
    MR_Integer NodeRatio_54;
    MR_Word ViaCellOccurringVars_55;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Box conv3_BenefitNodes_31;
    MR_Box conv5_CostNodes_32;
    MR_Box conv7_RealizedBenefitNodes_20;
    MR_Box conv9_RealizedCostNodes_21;
    MR_Integer Var_74;
    MR_Integer Var_75;
    MR_Integer Var_77;
    MR_Integer Var_78;
    MR_Integer Var_79;

    switch (InclAllCand_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word AllSegmentVars_24;
          MR_Word Var_59;

          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (BeforeFlush_18));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (AfterFlush_19));
          }
          AllSegmentVars_24 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_59);
          parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CandidateFieldVars_16, AllSegmentVars_24, &OccurringCandidateFieldVars_25);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CandidateFieldVars_16, OccurringCandidateFieldVars_25, &NonOccurringCandidateFieldVars_26);
        }
        break;
      case (MR_Integer) 0:
        {
          OccurringCandidateFieldVars_25 = CandidateFieldVars_16;
          NonOccurringCandidateFieldVars_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        }
        break;
    }
    OccurringCandidateFieldVarList_27 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OccurringCandidateFieldVars_25);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (CellVar_15));
      MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (OccurringCandidateFieldVars_25));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&backend_libs__matching_scalar_common_1[0]), (MR_Word) (&backend_libs__matching_scalar_common_1[0]), Var_60, AfterFlush_19, &FilteredAfterFlush_28);
    NumberedAfterFlush_29 = backend_libs__matching__number_segments_2_f_0((MR_Integer) 2, FilteredAfterFlush_28);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (CellVar_15));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (BeforeFlush_18));
      MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (NumberedAfterFlush_29));
      MR_hl_field(MR_mktag(0), Var_62, 6) = ((MR_Box) (CellVarFlushedLater_17));
      MR_hl_field(MR_mktag(0), Var_62, 7) = ((MR_Box) (MatchingParams_14));
    }
    CostsBenefits_30 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__matching_scalar_common_1[1]), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0), Var_62, OccurringCandidateFieldVarList_27);
    Var_64 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0));
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]), (MR_Word) (&backend_libs__matching_scalar_common_2[7]), CostsBenefits_30, ((MR_Box) (Var_64)), &conv3_BenefitNodes_31);
    BenefitNodes_31 = ((MR_Word) (conv3_BenefitNodes_31));
    Var_66 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0));
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0), (MR_Word) (&backend_libs__matching_scalar_common_1[3]), (MR_Word) (&backend_libs__matching_scalar_common_2[8]), CostsBenefits_30, ((MR_Box) (Var_66)), &conv5_CostNodes_32);
    CostNodes_32 = ((MR_Word) (conv5_CostNodes_32));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), BenefitNodes_31, &BenefitNodeList_33);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), CostNodes_32, &CostNodeList_34);
    Graph_35 = backend_libs__matching__create_graph_1_f_0(CostsBenefits_30);
    MaximalMatching_36 = backend_libs__matching__maximal_matching_2_f_0(BenefitNodeList_33, Graph_35);
    MaximalMatchingCostToBenefit_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaximalMatching_36, (MR_Integer) 0))));
    UnMatchedCostNodes_39 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(CostNodeList_34, MaximalMatchingCostToBenefit_37);
    MarkedBenefitNodes_40 = backend_libs__matching__reachable_by_alternating_path_3_f_0(UnMatchedCostNodes_39, Graph_35, MaximalMatching_36);
    ViaCellOccurringVars0_41 = backend_libs__matching__compute_via_cell_vars_2_f_0(CostsBenefits_30, MarkedBenefitNodes_40);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (backend_libs__matching__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_118_105_97_95_99_101_108_108_95_118_97_114_115_95_95_91_49_44_32_50_93_95_48_11_p_0_5));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (ViaCellOccurringVars0_41));
    }
    mercury__list__filter_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0), Var_67, CostsBenefits_30, &RealizedCostsBenefits_42);
    Var_69 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0));
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]), (MR_Word) (&backend_libs__matching_scalar_common_2[9]), RealizedCostsBenefits_42, ((MR_Box) (Var_69)), &conv7_RealizedBenefitNodes_20);
    *RealizedBenefitNodes_20 = ((MR_Word) (conv7_RealizedBenefitNodes_20));
    Var_71 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0));
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0), (MR_Word) (&backend_libs__matching_scalar_common_1[3]), (MR_Word) (&backend_libs__matching_scalar_common_2[10]), RealizedCostsBenefits_42, ((MR_Box) (Var_71)), &conv9_RealizedCostNodes_21);
    *RealizedCostNodes_21 = ((MR_Word) (conv9_RealizedCostNodes_21));
    RealizedBenefitOps_43 = mercury__set__map_2_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0), (MR_Word) (&backend_libs__matching_scalar_common_2[11]), *RealizedBenefitNodes_20);
    RealizedCostOps_44 = mercury__set__map_2_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0), (MR_Word) (&backend_libs__matching_scalar_common_2[12]), *RealizedCostNodes_21);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), *RealizedBenefitNodes_20, &RealizedBenefitNodeList_45);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), *RealizedCostNodes_21, &RealizedCostNodeList_46);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0), RealizedBenefitOps_43, &RealizedBenefitOpList_47);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0), RealizedCostOps_44, &RealizedCostOpList_48);
    mercury__list__length_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), RealizedBenefitNodeList_45, &RealizedBenefitNodeCount_49);
    mercury__list__length_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0), RealizedBenefitOpList_47, &RealizedBenefitOpCount_50);
    mercury__list__length_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), RealizedCostNodeList_46, &RealizedCostNodeCount_51);
    mercury__list__length_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0), RealizedCostOpList_48, &RealizedCostOpCount_52);
    OpRatio_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MatchingParams_14, (MR_Integer) 4))));
    NodeRatio_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MatchingParams_14, (MR_Integer) 5))));
    Var_74 = (MR_Integer) ((MR_Unsigned) RealizedBenefitOpCount_50 * (MR_Unsigned) 100);
    Var_75 = (MR_Integer) ((MR_Unsigned) RealizedCostOpCount_52 * (MR_Unsigned) OpRatio_53);
    succeeded = (Var_74 >= Var_75);
    if (succeeded)
    {
      Var_79 = (MR_Integer) 100;
      Var_77 = (MR_Integer) ((MR_Unsigned) RealizedBenefitNodeCount_49 * (MR_Unsigned) Var_79);
      Var_78 = (MR_Integer) ((MR_Unsigned) RealizedCostNodeCount_51 * (MR_Unsigned) NodeRatio_54);
      succeeded = (Var_77 >= Var_78);
    }
    if (succeeded)
      ViaCellOccurringVars_55 = ViaCellOccurringVars0_41;
    else
      ViaCellOccurringVars_55 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    *ViaCellVars_22 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ViaCellOccurringVars_55, NonOccurringCandidateFieldVars_26);
  }
}

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MatchingCB_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Node_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Nodes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnmatchedNodes1_9;
      MR_Box conv0__Match_10;

      UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(Nodes_6, MatchingCB_2);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), MatchingCB_2, ((MR_Box) (Node_5)), &conv0__Match_10);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        HeadVar__3_3 = UnmatchedNodes1_9;
      else
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Node_5));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (UnmatchedNodes1_9));
        }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    else
    {
      MR_Word FieldCostsBenefits_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FieldsCostsBenefits_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ViaCellVars1_9;
      MR_Word FieldVar_10;
      MR_Word FieldBenefits_12;
      MR_Word MarkedFieldBenefits_13;

      ViaCellVars1_9 = backend_libs__matching__compute_via_cell_vars_2_f_0(FieldsCostsBenefits_6, HeadVar__2_2);
      FieldVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldCostsBenefits_5, (MR_Integer) 0))));
      FieldBenefits_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldCostsBenefits_5, (MR_Integer) 2))));
      mercury__set__intersect_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), FieldBenefits_12, HeadVar__2_2, &MarkedFieldBenefits_13);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), MarkedFieldBenefits_13);
      if (succeeded)
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldVar_10, ViaCellVars1_9, &HeadVar__3_3);
      else
      {
        succeeded = mercury__set__equal_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), MarkedFieldBenefits_13, FieldBenefits_12);
        if (succeeded)
          HeadVar__3_3 = ViaCellVars1_9;
        else
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.matching.compute_via_cell_vars\'/2", (MR_String) "theorem violation: intersection neither empty nor full");
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
  MR_Word SelectedCostNodes_5,
  MR_Word Graph_6,
  MR_Word Matching_7)
{
  {
    MR_Word ReachableBenefitNodes_8;
    MR_Word Var_9;

    Var_9 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0));
    backend_libs__matching__reachable_by_alternating_path_5_p_0(SelectedCostNodes_5, Graph_6, Matching_7, Var_9, &ReachableBenefitNodes_8);
    return ReachableBenefitNodes_8;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_34;

    conv2_HeadVar__3_34 = backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__586__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_34));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_BenefitNodes_10;

    backend_libs__matching__adjacents_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BenefitNodes_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BenefitNodes_10));
  }
}

static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
  MR_Word SelectedCostNodes_6,
  MR_Word Graph_7,
  MR_Word Matching_8,
  MR_Word STATE_VARIABLE_BenefitNodes_0_20,
  MR_Word * STATE_VARIABLE_BenefitNodes_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((SelectedCostNodes_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BenefitNodes_21 = STATE_VARIABLE_BenefitNodes_0_20;
    else
    {
      MR_Word CostToBenefitsMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Graph_7, (MR_Integer) 0))));
      MR_Word AdjBenefitNodes_14;
      MR_Word NewBenefitNodes_15;
      MR_Word NewBenefitNodeList_16;
      MR_Word BenefitToCostMap_18;
      MR_Word LinkedCostNodes_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_BenefitNodes_24_24;
      MR_Word Var_25;
      MR_Box conv1_AdjBenefitNodes_14;
      MR_Word next_value_of_SelectedCostNodes_6;
      MR_Word next_value_of_STATE_VARIABLE_BenefitNodes_0_20;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (CostToBenefitsMap_12));
      }
      Var_23 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0));
      mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]), Var_22, SelectedCostNodes_6, ((MR_Box) (Var_23)), &conv1_AdjBenefitNodes_14);
      AdjBenefitNodes_14 = ((MR_Word) (conv1_AdjBenefitNodes_14));
      mercury__set__difference_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), STATE_VARIABLE_BenefitNodes_0_20, AdjBenefitNodes_14, &NewBenefitNodes_15);
      mercury__set__union_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), AdjBenefitNodes_14, STATE_VARIABLE_BenefitNodes_0_20, &STATE_VARIABLE_BenefitNodes_24_24);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), NewBenefitNodes_15, &NewBenefitNodeList_16);
      BenefitToCostMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Matching_8, (MR_Integer) 1))));
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (BenefitToCostMap_18));
      }
      LinkedCostNodes_19 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), Var_25, NewBenefitNodeList_16);
      // direct tailcall eliminated
      ;
      next_value_of_SelectedCostNodes_6 = LinkedCostNodes_19;
      next_value_of_STATE_VARIABLE_BenefitNodes_0_20 = STATE_VARIABLE_BenefitNodes_24_24;
      SelectedCostNodes_6 = next_value_of_SelectedCostNodes_6;
      STATE_VARIABLE_BenefitNodes_0_20 = next_value_of_STATE_VARIABLE_BenefitNodes_0_20;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
  MR_Word BenefitNodes_4,
  MR_Word Graph_5)
{
  {
    MR_Word Matching_6;
    MR_Word Matching0_7;
    MR_Word Var_8;
    MR_Word Var_9;

    Var_8 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0));
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0));
    {
      Matching0_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Matching0_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), Matching0_7, 1) = ((MR_Box) (Var_9));
    }
    backend_libs__matching__maximize_matching_4_p_0(BenefitNodes_4, Graph_5, Matching0_7, &Matching_6);
    return Matching_6;
  }
}

static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
  MR_Word BenefitNodes_5,
  MR_Word Graph_6,
  MR_Word STATE_VARIABLE_Matching_0_9,
  MR_Word * STATE_VARIABLE_Matching_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Path_8;
    MR_Word MatchingBenefitToCost_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Matching_0_9, (MR_Integer) 1))));
    MR_Word UnMatchedBenefitNodes_19;
    MR_Word Queue_24;
    MR_Word Var_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    UnMatchedBenefitNodes_19 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(BenefitNodes_5, MatchingBenefitToCost_18);
    Var_25 = mercury__queue__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0));
    Queue_24 = backend_libs__matching__initial_queue_2_f_0(UnMatchedBenefitNodes_19, Var_25);
    succeeded = backend_libs__matching__augpath_bf_4_f_0(Queue_24, UnMatchedBenefitNodes_19, Graph_6, STATE_VARIABLE_Matching_0_9, &Path_8);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Matching_11_11;
      MR_Word next_value_of_STATE_VARIABLE_Matching_0_9;

      STATE_VARIABLE_Matching_11_11 = backend_libs__matching__update_matches_2_f_0(Path_8, STATE_VARIABLE_Matching_0_9);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Matching_0_9 = STATE_VARIABLE_Matching_11_11;
      STATE_VARIABLE_Matching_0_9 = next_value_of_STATE_VARIABLE_Matching_0_9;
      continue;
    }
    else
      *STATE_VARIABLE_Matching_10 = STATE_VARIABLE_Matching_0_9;
    break;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MatchingBC_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Node_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Nodes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnmatchedNodes1_9;
      MR_Box conv0__Match_10;

      UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(Nodes_6, MatchingBC_2);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), MatchingBC_2, ((MR_Box) (Node_5)), &conv0__Match_10);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        HeadVar__3_3 = UnmatchedNodes1_9;
      else
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Node_5));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (UnmatchedNodes1_9));
        }
    }
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Match_6;

    conv2_Match_6 = backend_libs__matching__adj_to_matched_cost_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Match_6));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
  MR_Word Queue0_6,
  MR_Word Seen0_7,
  MR_Word Graph_8,
  MR_Word Matching_9,
  MR_Word * Path_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeCtorInfo_29_29;
    MR_Word TypeCtorInfo_8_34;
    MR_Word TypeInfo_9_35;
    MR_Word NodePath_11;
    MR_Word Queue1_12;
    MR_Word BenefitNode_13;
    MR_Word Path0_14;
    MR_Word BenefitToCostsMap_16;
    MR_Word AdjCostNodes_17;
    MR_Word CostToBenefitMap_18;
    MR_Word CostMatches_20;
    MR_Word Var_24;
    MR_Word Var_33;
    MR_Box conv0_NodePath_11;
    MR_Box conv1_AdjCostNodes_17;
    MR_Word UnmatchedCostNode_21;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0), &conv0_NodePath_11, Queue0_6, &Queue1_12);
    if (succeeded)
    {
      NodePath_11 = ((MR_Word) (conv0_NodePath_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      BenefitNode_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NodePath_11, (MR_Integer) 0))));
      Path0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NodePath_11, (MR_Integer) 1))));
      BenefitToCostsMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Graph_8, (MR_Integer) 1))));
      TypeCtorInfo_27_27 = (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
      TypeInfo_28_28 = (MR_Word) (&backend_libs__matching_scalar_common_1[3]);
      mercury__map__lookup_3_p_0(TypeCtorInfo_27_27, TypeInfo_28_28, BenefitToCostsMap_16, ((MR_Box) (BenefitNode_13)), &conv1_AdjCostNodes_17);
      AdjCostNodes_17 = ((MR_Word) (conv1_AdjCostNodes_17));
      CostToBenefitMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Matching_9, (MR_Integer) 0))));
      TypeCtorInfo_29_29 = (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0);
      Var_24 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_29_29, AdjCostNodes_17);
      TypeCtorInfo_8_34 = (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0);
      TypeInfo_9_35 = (MR_Word) (&backend_libs__matching_scalar_common_2[2]);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (backend_libs__matching__augpath_bf_4_f_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (CostToBenefitMap_18));
      }
      CostMatches_20 = mercury__list__map_2_f_0(TypeCtorInfo_8_34, TypeInfo_9_35, Var_33, Var_24);
      succeeded = backend_libs__matching__find_unmatched_cost_1_f_0(CostMatches_20, &UnmatchedCostNode_21);
      if (succeeded)
      {
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (BenefitNode_13));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (UnmatchedCostNode_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Path_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Path0_14));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Seen_22;
        MR_Word Queue2_23;
        MR_Word next_value_of_Queue0_6;
        MR_Word next_value_of_Seen0_7;

        backend_libs__matching__add_alternates_7_p_0(CostMatches_20, Seen0_7, &Seen_22, BenefitNode_13, Path0_14, Queue1_12, &Queue2_23);
        // direct tailcall eliminated
        ;
        next_value_of_Queue0_6 = Queue2_23;
        next_value_of_Seen0_7 = Seen_22;
        Queue0_6 = next_value_of_Queue0_6;
        Seen0_7 = next_value_of_Seen0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Seen_0_2,
  MR_Word * STATE_VARIABLE_Seen_3,
  MR_Word BenefitNode_4,
  MR_Word Path_5,
  MR_Word STATE_VARIABLE_Queue_0_6,
  MR_Word * STATE_VARIABLE_Queue_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Queue_7 = STATE_VARIABLE_Queue_0_6;
      *STATE_VARIABLE_Seen_3 = STATE_VARIABLE_Seen_0_2;
    }
    else
    {
      MR_Word CostMatch_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CostMatches_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CostNode_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CostMatch_16, (MR_Integer) 0))));
      MR_Word MaybeAdjBenefitNode_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CostMatch_16, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Seen_31_31;
      MR_Word STATE_VARIABLE_Queue_33_33;
      MR_Word AdjBenefitNode_24;
      MR_Word TypeCtorInfo_36_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Seen_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_6;

      succeeded = (MaybeAdjBenefitNode_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        AdjBenefitNode_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAdjBenefitNode_23, (MR_Integer) 0))));
        TypeCtorInfo_36_36 = (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_36_36, ((MR_Box) (AdjBenefitNode_24)), STATE_VARIABLE_Seen_0_2);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word NewPath_25;
        MR_Word BenefitNodeAndEdgeList_26;
        MR_Word Var_32;

        {
          STATE_VARIABLE_Seen_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Seen_31_31, 0) = ((MR_Box) (AdjBenefitNode_24));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Seen_31_31, 1) = ((MR_Box) (STATE_VARIABLE_Seen_0_2));
        }
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (BenefitNode_4));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (CostNode_22));
        }
        {
          NewPath_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewPath_25, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), NewPath_25, 1) = ((MR_Box) (Path_5));
        }
        {
          BenefitNodeAndEdgeList_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BenefitNodeAndEdgeList_26, 0) = ((MR_Box) (AdjBenefitNode_24));
          MR_hl_field(MR_mktag(0), BenefitNodeAndEdgeList_26, 1) = ((MR_Box) (NewPath_25));
        }
        mercury__queue__put_3_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0), ((MR_Box) (BenefitNodeAndEdgeList_26)), STATE_VARIABLE_Queue_0_6, &STATE_VARIABLE_Queue_33_33);
      }
      else
      {
        STATE_VARIABLE_Queue_33_33 = STATE_VARIABLE_Queue_0_6;
        STATE_VARIABLE_Seen_31_31 = STATE_VARIABLE_Seen_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CostMatches_17;
      next_value_of_STATE_VARIABLE_Seen_0_2 = STATE_VARIABLE_Seen_31_31;
      next_value_of_STATE_VARIABLE_Queue_0_6 = STATE_VARIABLE_Queue_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Seen_0_2 = next_value_of_STATE_VARIABLE_Seen_0_2;
      STATE_VARIABLE_Queue_0_6 = next_value_of_STATE_VARIABLE_Queue_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
  MR_Word HeadVar__1_1,
  MR_Word * Unmatched_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word CostNode_3;
    MR_Word MaybeBenefitNode_4;
    MR_Word Matches_5;
    MR_Word Var_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Matches_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      CostNode_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      MaybeBenefitNode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
      if ((MaybeBenefitNode_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Unmatched_6 = CostNode_3;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Matches_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word Q_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      Q_3 = HeadVar__2_2;
    else
    {
      MR_Word N_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Q1_9;
      MR_Word Var_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (N_5));
        MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Q1_9 = mercury__queue__put_2_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0), HeadVar__2_2, ((MR_Box) (Var_10)));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ns_6;
      next_value_of_HeadVar__2_2 = Q1_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    return Q_3;
    break;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Matching0_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = Matching0_2;
    else
    {
      MR_Word BenefitNode_5;
      MR_Word CostNode_6;
      MR_Word Path_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CostToBenefitMap0_10;
      MR_Word BenefitToCostMap0_11;
      MR_Word CostToBenefitMap1_12;
      MR_Word BenefitToCostMap1_13;
      MR_Word Matching1_14;
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Matching0_2;

      BenefitNode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      CostNode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
      CostToBenefitMap0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Matching0_2, (MR_Integer) 0))));
      BenefitToCostMap0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Matching0_2, (MR_Integer) 1))));
      mercury__map__set_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), ((MR_Box) (CostNode_6)), ((MR_Box) (BenefitNode_5)), CostToBenefitMap0_10, &CostToBenefitMap1_12);
      mercury__map__set_4_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), ((MR_Box) (BenefitNode_5)), ((MR_Box) (CostNode_6)), BenefitToCostMap0_11, &BenefitToCostMap1_13);
      {
        Matching1_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Matching1_14, 0) = ((MR_Box) (CostToBenefitMap1_12));
        MR_hl_field(MR_mktag(0), Matching1_14, 1) = ((MR_Box) (BenefitToCostMap1_13));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Path_7;
      next_value_of_Matching0_2 = Matching1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Matching0_2 = next_value_of_Matching0_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_CostToBenefitsMap_12;
    MR_Word conv0_STATE_VARIABLE_BenefitToCostsMap_14;

    backend_libs__matching__create_graph_links_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CostToBenefitsMap_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_BenefitToCostsMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CostToBenefitsMap_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_BenefitToCostsMap_14));
  }
}

static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
  MR_Word CostsBenefits_3)
{
  {
    MR_Word Graph_4;
    MR_Word CostToBenefitsMap_5;
    MR_Word BenefitToCostsMap_6;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Box conv3_CostToBenefitsMap_5;
    MR_Box conv2_BenefitToCostsMap_6;

    Var_8 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[2]));
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0), (MR_Word) (&backend_libs__matching_scalar_common_1[3]));
    mercury__list__foldl2_6_p_0((MR_Word) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0), (MR_Word) (&backend_libs__matching_scalar_common_2[0]), (MR_Word) (&backend_libs__matching_scalar_common_2[1]), (MR_Word) (&backend_libs__matching_scalar_common_2[6]), CostsBenefits_3, ((MR_Box) (Var_8)), &conv3_CostToBenefitsMap_5, ((MR_Box) (Var_9)), &conv2_BenefitToCostsMap_6);
    CostToBenefitsMap_5 = ((MR_Word) (conv3_CostToBenefitsMap_5));
    BenefitToCostsMap_6 = ((MR_Word) (conv2_BenefitToCostsMap_6));
    {
      Graph_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Graph_4, 0) = ((MR_Box) (CostToBenefitsMap_5));
      MR_hl_field(MR_mktag(0), Graph_4, 1) = ((MR_Box) (BenefitToCostsMap_6));
    }
    return Graph_4;
  }
}

static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Segment_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Segments_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Integer Var_10;

      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (Segment_6));
      }
      Var_10 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
      Var_9 = backend_libs__matching__number_segments_2_f_0(Var_10, Segments_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____benefit_node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____benefit_node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____benefit_operation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____benefit_operation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____cost_node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____cost_node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____cost_operation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____cost_operation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____edge_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____edge_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____field_costs_benefits_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____field_costs_benefits_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____matching_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____matching_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____matching_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____matching_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__matching____Unify____stack_slot_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__matching____Compare____stack_slot_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module backend_libs.matching.
