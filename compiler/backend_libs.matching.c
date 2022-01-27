/*
** Automatically generated from `matching.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 131 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 134 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 137 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 152 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 155 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 158 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 161 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 164 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 167 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

#line 170 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

#line 173 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 176 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 179 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 182 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 185 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0[2];

#line 188 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0;

#line 191 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0[1];

#line 194 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0[1];

#line 197 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0[1];

#line 200 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0[1];

#line 203 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

#line 206 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

#line 209 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[2];

#line 212 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0;

#line 215 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[1];

#line 218 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[1];

#line 221 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0[1];

#line 224 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0[1];

#line 227 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0[1];

#line 230 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0;

#line 233 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1[1];

#line 236 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1;

#line 239 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0[1];

#line 242 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1[1];

#line 245 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0[2];

#line 248 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0[2];

#line 251 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0[2];

#line 254 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0[2];

#line 257 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0;

#line 260 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0[1];

#line 263 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0[1];

#line 266 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0[1];

#line 269 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0[1];

#line 272 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0[1];

#line 275 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0;

#line 278 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1;

#line 281 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0[1];

#line 284 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1[1];

#line 287 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0[2];

#line 290 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0[2];

#line 293 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0[2];

#line 296 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0[3];

#line 299 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0;

#line 302 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[1];

#line 305 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[1];

#line 308 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0[1];

#line 311 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0[1];

#line 314 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0;

#line 317 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

#line 320 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_0_0[2];

#line 323 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0;

#line 326 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0[1];

#line 329 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0[1];

#line 332 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0[1];

#line 335 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_0[1];

#line 338 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0[7];

#line 341 "backend_libs.matching.c"
static const MR_ConstString backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0[7];

#line 344 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0;

#line 347 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0[1];

#line 350 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0[1];

#line 353 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0[1];

#line 356 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0[1];

#line 359 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 362 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

#line 365 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0[2];

#line 368 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0;

#line 371 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[1];

#line 374 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[1];

#line 377 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0[1];

#line 380 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0[1];

#line 383 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
#line 386 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 388 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 391 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
#line 394 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 396 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 398 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 401 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
#line 404 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 406 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 409 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
#line 412 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 414 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 416 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 419 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
#line 422 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 424 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 427 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
#line 430 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 432 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 434 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 437 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
#line 440 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 442 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 445 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
#line 448 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 450 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 452 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 455 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
#line 458 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 460 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 463 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
#line 466 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 468 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 470 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 473 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
#line 476 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 478 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 481 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
#line 484 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 486 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 488 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 491 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
#line 494 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 496 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 499 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
#line 502 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 504 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 506 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 509 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
#line 512 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 514 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 517 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
#line 520 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 522 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 524 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 527 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
#line 530 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 532 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 535 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
#line 538 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 540 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 542 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 545 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
#line 548 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 550 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 553 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
#line 556 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 558 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 560 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 580 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_f_0(
#line 580 "matching.m"
  MR_Word backend_libs__matching__BenefitToCostMap_18,
#line 580 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_33);

#line 109 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
#line 109 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 109 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 142 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0(
#line 142 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 142 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 130 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
#line 130 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 130 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 453 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
#line 453 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 453 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 115 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
#line 115 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 115 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0(
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 119 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
#line 119 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 119 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 455 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
#line 455 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 455 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 759 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
#line 759 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1);

#line 755 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
#line 755 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1);

#line 748 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
#line 748 "matching.m"
  MR_Word backend_libs__matching__ViaCellOccurringVars_3,
#line 748 "matching.m"
  MR_Word backend_libs__matching__FieldCostsBenefits_4);

#line 656 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
#line 656 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 656 "matching.m"
  MR_Word backend_libs__matching__MatchingCB_2);

#line 641 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
#line 641 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 641 "matching.m"
  MR_Word backend_libs__matching__MatchingBC_2);

#line 618 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
#line 618 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 618 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 606 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
#line 606 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitMap_4,
#line 606 "matching.m"
  MR_Word backend_libs__matching__CostNode_5);

#line 586 "matching.m"
static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
#line 586 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitsMap_5,
#line 586 "matching.m"
  MR_Word backend_libs__matching__CostNode_6,
#line 586 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9,
#line 586 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_10);

#line 580 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
#line 580 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 580 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 574 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
#line 574 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 574 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 574 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 574 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 563 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
#line 563 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_6,
#line 563 "matching.m"
  MR_Word backend_libs__matching__Graph_7,
#line 563 "matching.m"
  MR_Word backend_libs__matching__Matching_8,
#line 563 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20,
#line 563 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_21);

#line 555 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
#line 555 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_5,
#line 555 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 555 "matching.m"
  MR_Word backend_libs__matching__Matching_7);

#line 520 "matching.m"
static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
#line 520 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 520 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0_2,
#line 520 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Seen_3,
#line 520 "matching.m"
  MR_Word backend_libs__matching__BenefitNode_4,
#line 520 "matching.m"
  MR_Word backend_libs__matching__Path_5,
#line 520 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0_6,
#line 520 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Queue_7);

#line 502 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
#line 502 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 502 "matching.m"
  MR_Word * backend_libs__matching__Unmatched_6);

#line 603 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
#line 603 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 603 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 483 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
#line 483 "matching.m"
  MR_Word backend_libs__matching__Queue0_6,
#line 483 "matching.m"
  MR_Word backend_libs__matching__Seen0_7,
#line 483 "matching.m"
  MR_Word backend_libs__matching__Graph_8,
#line 483 "matching.m"
  MR_Word backend_libs__matching__Matching_9,
#line 483 "matching.m"
  MR_Word * backend_libs__matching__Path_10);

#line 475 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
#line 475 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 475 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 432 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
#line 432 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 432 "matching.m"
  MR_Word backend_libs__matching__Matching0_2);

#line 421 "matching.m"
static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
#line 421 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_5,
#line 421 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 421 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0_9,
#line 421 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Matching_10);

#line 415 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
#line 415 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_4,
#line 415 "matching.m"
  MR_Word backend_libs__matching__Graph_5);

#line 399 "matching.m"
static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
#line 399 "matching.m"
  MR_Word backend_libs__matching__Costs_5,
#line 399 "matching.m"
  MR_Word backend_libs__matching__Benefit_6,
#line 399 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10,
#line 399 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);

#line 387 "matching.m"
static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
#line 387 "matching.m"
  MR_Word backend_libs__matching__Benefits_5,
#line 387 "matching.m"
  MR_Word backend_libs__matching__Cost_6,
#line 387 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10,
#line 387 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);

#line 384 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
#line 384 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 384 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 384 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 384 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 382 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
#line 382 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 382 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 382 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 382 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 374 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
#line 374 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 374 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11,
#line 374 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12,
#line 374 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13,
#line 374 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14);

#line 370 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
#line 370 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 370 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 370 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 370 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3,
#line 370 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_4,
#line 370 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_5);

#line 367 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
#line 367 "matching.m"
  MR_Word backend_libs__matching__CostsBenefits_3);

#line 357 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
#line 357 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 357 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Costs_0_8,
#line 357 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Costs_9);

#line 349 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
#line 349 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 349 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Benefits_0_8,
#line 349 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Benefits_9);

#line 336 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
#line 336 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 336 "matching.m"
  MR_Word backend_libs__matching__Op_5);

#line 329 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
#line 329 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 329 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 329 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 320 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
#line 320 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 320 "matching.m"
  MR_Word backend_libs__matching__Op_5);

#line 313 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
#line 313 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 313 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 313 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 298 "matching.m"
static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
#line 298 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 298 "matching.m"
  MR_Word backend_libs__matching__FieldVar_2,
#line 298 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0_3,
#line 298 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostOps_4);

#line 290 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_2(
#line 290 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 290 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 283 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_1(
#line 283 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 283 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 260 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
#line 260 "matching.m"
  MR_Word backend_libs__matching__CellVar_8,
#line 260 "matching.m"
  MR_Word backend_libs__matching__BeforeFlush_9,
#line 260 "matching.m"
  MR_Word backend_libs__matching__AfterFlush_10,
#line 260 "matching.m"
  MR_Word backend_libs__matching__CellVarFlushedLater_11,
#line 260 "matching.m"
  MR_Word backend_libs__matching__MatchingParams_12,
#line 260 "matching.m"
  MR_Word backend_libs__matching__FieldVar_13);

#line 248 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
#line 248 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 248 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 241 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
#line 241 "matching.m"
  MR_Word backend_libs__matching__CellVar_5,
#line 241 "matching.m"
  MR_Word backend_libs__matching__CandidateArgVars_6,
#line 241 "matching.m"
  MR_Word backend_libs__matching__SegmentVars0_7,
#line 241 "matching.m"
  MR_Word * backend_libs__matching__SegmentVars_8);

#line 198 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_9(
#line 198 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 198 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 197 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_8(
#line 197 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 197 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 195 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_7(
#line 195 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 195 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 195 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 195 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 193 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_6(
#line 193 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 193 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 193 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 193 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 191 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_5(
#line 191 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 191 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 179 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_4(
#line 179 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 179 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 179 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 179 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 178 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_3(
#line 178 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 178 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 178 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 178 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 174 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_2(
#line 174 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 174 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 171 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_1(
#line 171 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 171 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 171 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_2);


static /* final */ const MR_Box backend_libs__matching_scalar_common_1[8][2];

static /* final */ const MR_Box backend_libs__matching_scalar_common_2[13][3];

static /* final */ const MR_Box backend_libs__matching_scalar_common_3[6][7];

static /* final */ const MR_Box backend_libs__matching_scalar_common_4[1][10];

static /* final */ const MR_Box backend_libs__matching_scalar_common_5[4][6];

static /* final */ const MR_Box backend_libs__matching_scalar_common_6[3][5];

static /* final */ const MR_Box backend_libs__matching_scalar_common_7[1][8];




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
    ((MR_Box) (&backend_libs__matching_scalar_common_5[0])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_5[1])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_5[0])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_5[1])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_6[1])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_6[2])),
    ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__matching_scalar_common_7[0])),
    ((MR_Box) (backend_libs__matching__create_graph_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_3[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0)),
    ((MR_Box) (&backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0)),
    ((MR_Box) (&backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0))
  },
};

static /* final */ const MR_Box backend_libs__matching_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__matching__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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

static /* final */ const MR_Box backend_libs__matching_scalar_common_7[1][8] = {
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1501 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1509 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1517 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1525 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1533 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__matching__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1542 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1550 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1558 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1566 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1574 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1582 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1590 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1599 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1607 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1616 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1625 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1633 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1642 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1651 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1657 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0 = {
  (MR_String) "benefit_node",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0,
  NULL,
  NULL,
  NULL
};

#line 1672 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0
};

#line 1677 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0
  }
};

#line 1686 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0
};

#line 1691 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0[1] = {
  (MR_Integer) 0
};

#line 1696 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_node_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_node_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_node",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0
};

#line 1717 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1726 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1734 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

#line 1740 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0 = {
  (MR_String) "benefit_node_and_edge_list",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0,
  NULL,
  NULL,
  NULL
};

#line 1755 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

#line 1760 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0
  }
};

#line 1769 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

#line 1774 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0[1] = {
  (MR_Integer) 0
};

#line 1779 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_node_and_edge_list",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0
};

#line 1800 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1805 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0 = {
  (MR_String) "field_var_load",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0,
  NULL,
  NULL,
  NULL
};

#line 1820 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1825 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1 = {
  (MR_String) "field_var_store",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1,
  NULL,
  NULL,
  NULL
};

#line 1840 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0
};

#line 1845 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

#line 1850 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1
  }
};

#line 1864 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0[2] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0,
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

#line 1870 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1876 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____benefit_operation_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____benefit_operation_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "benefit_operation",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0
};

#line 1897 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1903 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0 = {
  (MR_String) "cost_node",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0,
  NULL,
  NULL,
  NULL
};

#line 1918 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0
};

#line 1923 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0
  }
};

#line 1932 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0
};

#line 1937 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0[1] = {
  (MR_Integer) 0
};

#line 1942 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____cost_node_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____cost_node_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "cost_node",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0
};

#line 1963 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1968 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0 = {
  (MR_String) "cell_var_load",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0,
  NULL,
  NULL,
  NULL
};

#line 1983 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1 = {
  (MR_String) "cell_var_store",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1998 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1
};

#line 2003 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0
};

#line 2008 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1
  }
};

#line 2022 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0[2] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0,
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1
};

#line 2028 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2034 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____cost_operation_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____cost_operation_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "cost_operation",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0
};

#line 2055 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_edge_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__matching____Unify____edge_list_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____edge_list_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "edge_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2076 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
};

#line 2083 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0 = {
  (MR_String) "field_costs_benefits",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0,
  NULL,
  NULL,
  NULL
};

#line 2098 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

#line 2103 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0
  }
};

#line 2112 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

#line 2117 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0[1] = {
  (MR_Integer) 0
};

#line 2122 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____field_costs_benefits_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____field_costs_benefits_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "field_costs_benefits",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0
};

#line 2143 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2152 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2161 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

#line 2167 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0 = {
  (MR_String) "matching",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_matching_0_0,
  NULL,
  NULL,
  NULL
};

#line 2182 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0
};

#line 2187 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0
  }
};

#line 2196 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0
};

#line 2201 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_0[1] = {
  (MR_Integer) 0
};

#line 2206 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_matching_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____matching_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____matching_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "matching",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_matching_0
};

#line 2227 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2238 "backend_libs.matching.c"
static const MR_ConstString backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0[7] = {
  (MR_String) "cell_var_store_cost",
  (MR_String) "cell_var_load_cost",
  (MR_String) "field_var_store_cost",
  (MR_String) "field_var_load_cost",
  (MR_String) "one_path_op_ratio",
  (MR_String) "one_path_node_ratio",
  (MR_String) "include_all_candidates"
};

#line 2249 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0 = {
  (MR_String) "matching_params",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0,
  backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0,
  NULL,
  NULL
};

#line 2264 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0
};

#line 2269 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0
  }
};

#line 2278 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0
};

#line 2283 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0[1] = {
  (MR_Integer) 0
};

#line 2288 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____matching_params_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____matching_params_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "matching_params",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0
};

#line 2309 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_TypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2318 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2327 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
};

#line 2333 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0 = {
  (MR_String) "stack_slot_graph",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0,
  NULL,
  NULL,
  NULL
};

#line 2348 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

#line 2353 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0
  }
};

#line 2362 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

#line 2367 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0[1] = {
  (MR_Integer) 0
};

#line 2372 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_stack_slot_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__matching____Unify____stack_slot_graph_0_0_10001)),
  ((MR_Box) (backend_libs__matching____Compare____stack_slot_graph_0_0_10001)),
  (MR_String) "backend_libs.matching",
  (MR_String) "stack_slot_graph",
  {
    backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0
  },
  {
    backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0
};

#line 2393 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
#line 2396 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2398 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2400 "backend_libs.matching.c"
{
#line 2402 "backend_libs.matching.c"
  {
#line 2404 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2407 "backend_libs.matching.c"
    {
#line 2409 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2412 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2414 "backend_libs.matching.c"
  }
#line 2416 "backend_libs.matching.c"
}

#line 2419 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
#line 2422 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2424 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2426 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2428 "backend_libs.matching.c"
{
#line 2430 "backend_libs.matching.c"
  {
#line 2432 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2435 "backend_libs.matching.c"
    {
#line 2437 "backend_libs.matching.c"
      backend_libs__matching____Compare____benefit_node_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2440 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2442 "backend_libs.matching.c"
  }
#line 2444 "backend_libs.matching.c"
}

#line 2447 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
#line 2450 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2452 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2454 "backend_libs.matching.c"
{
#line 2456 "backend_libs.matching.c"
  {
#line 2458 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2461 "backend_libs.matching.c"
    {
#line 2463 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2466 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2468 "backend_libs.matching.c"
  }
#line 2470 "backend_libs.matching.c"
}

#line 2473 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
#line 2476 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2478 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2480 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2482 "backend_libs.matching.c"
{
#line 2484 "backend_libs.matching.c"
  {
#line 2486 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2489 "backend_libs.matching.c"
    {
#line 2491 "backend_libs.matching.c"
      backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2494 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2496 "backend_libs.matching.c"
  }
#line 2498 "backend_libs.matching.c"
}

#line 2501 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
#line 2504 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2506 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2508 "backend_libs.matching.c"
{
#line 2510 "backend_libs.matching.c"
  {
#line 2512 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2515 "backend_libs.matching.c"
    {
#line 2517 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_operation_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2520 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2522 "backend_libs.matching.c"
  }
#line 2524 "backend_libs.matching.c"
}

#line 2527 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
#line 2530 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2532 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2534 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2536 "backend_libs.matching.c"
{
#line 2538 "backend_libs.matching.c"
  {
#line 2540 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2543 "backend_libs.matching.c"
    {
#line 2545 "backend_libs.matching.c"
      backend_libs__matching____Compare____benefit_operation_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2548 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2550 "backend_libs.matching.c"
  }
#line 2552 "backend_libs.matching.c"
}

#line 2555 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
#line 2558 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2560 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2562 "backend_libs.matching.c"
{
#line 2564 "backend_libs.matching.c"
  {
#line 2566 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2569 "backend_libs.matching.c"
    {
#line 2571 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____cost_node_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2574 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2576 "backend_libs.matching.c"
  }
#line 2578 "backend_libs.matching.c"
}

#line 2581 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
#line 2584 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2586 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2588 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2590 "backend_libs.matching.c"
{
#line 2592 "backend_libs.matching.c"
  {
#line 2594 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2597 "backend_libs.matching.c"
    {
#line 2599 "backend_libs.matching.c"
      backend_libs__matching____Compare____cost_node_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2602 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2604 "backend_libs.matching.c"
  }
#line 2606 "backend_libs.matching.c"
}

#line 2609 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
#line 2612 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2614 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2616 "backend_libs.matching.c"
{
#line 2618 "backend_libs.matching.c"
  {
#line 2620 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2623 "backend_libs.matching.c"
    {
#line 2625 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____cost_operation_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2628 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2630 "backend_libs.matching.c"
  }
#line 2632 "backend_libs.matching.c"
}

#line 2635 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
#line 2638 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2640 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2642 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2644 "backend_libs.matching.c"
{
#line 2646 "backend_libs.matching.c"
  {
#line 2648 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2651 "backend_libs.matching.c"
    {
#line 2653 "backend_libs.matching.c"
      backend_libs__matching____Compare____cost_operation_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2656 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2658 "backend_libs.matching.c"
  }
#line 2660 "backend_libs.matching.c"
}

#line 2663 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
#line 2666 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2668 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2670 "backend_libs.matching.c"
{
#line 2672 "backend_libs.matching.c"
  {
#line 2674 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2677 "backend_libs.matching.c"
    {
#line 2679 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____edge_list_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2682 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2684 "backend_libs.matching.c"
  }
#line 2686 "backend_libs.matching.c"
}

#line 2689 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
#line 2692 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2694 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2696 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2698 "backend_libs.matching.c"
{
#line 2700 "backend_libs.matching.c"
  {
#line 2702 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2705 "backend_libs.matching.c"
    {
#line 2707 "backend_libs.matching.c"
      backend_libs__matching____Compare____edge_list_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2710 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2712 "backend_libs.matching.c"
  }
#line 2714 "backend_libs.matching.c"
}

#line 2717 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
#line 2720 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2722 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2724 "backend_libs.matching.c"
{
#line 2726 "backend_libs.matching.c"
  {
#line 2728 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2731 "backend_libs.matching.c"
    {
#line 2733 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____field_costs_benefits_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2736 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2738 "backend_libs.matching.c"
  }
#line 2740 "backend_libs.matching.c"
}

#line 2743 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
#line 2746 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2748 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2750 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2752 "backend_libs.matching.c"
{
#line 2754 "backend_libs.matching.c"
  {
#line 2756 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2759 "backend_libs.matching.c"
    {
#line 2761 "backend_libs.matching.c"
      backend_libs__matching____Compare____field_costs_benefits_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2764 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2766 "backend_libs.matching.c"
  }
#line 2768 "backend_libs.matching.c"
}

#line 2771 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
#line 2774 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2776 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2778 "backend_libs.matching.c"
{
#line 2780 "backend_libs.matching.c"
  {
#line 2782 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2785 "backend_libs.matching.c"
    {
#line 2787 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____matching_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2790 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2792 "backend_libs.matching.c"
  }
#line 2794 "backend_libs.matching.c"
}

#line 2797 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
#line 2800 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2802 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2804 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2806 "backend_libs.matching.c"
{
#line 2808 "backend_libs.matching.c"
  {
#line 2810 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2813 "backend_libs.matching.c"
    {
#line 2815 "backend_libs.matching.c"
      backend_libs__matching____Compare____matching_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2818 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2820 "backend_libs.matching.c"
  }
#line 2822 "backend_libs.matching.c"
}

#line 2825 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
#line 2828 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2830 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2832 "backend_libs.matching.c"
{
#line 2834 "backend_libs.matching.c"
  {
#line 2836 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2839 "backend_libs.matching.c"
    {
#line 2841 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____matching_params_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2844 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2846 "backend_libs.matching.c"
  }
#line 2848 "backend_libs.matching.c"
}

#line 2851 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
#line 2854 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2856 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2858 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2860 "backend_libs.matching.c"
{
#line 2862 "backend_libs.matching.c"
  {
#line 2864 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2867 "backend_libs.matching.c"
    {
#line 2869 "backend_libs.matching.c"
      backend_libs__matching____Compare____matching_params_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2872 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2874 "backend_libs.matching.c"
  }
#line 2876 "backend_libs.matching.c"
}

#line 2879 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
#line 2882 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2884 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2886 "backend_libs.matching.c"
{
#line 2888 "backend_libs.matching.c"
  {
#line 2890 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2893 "backend_libs.matching.c"
    {
#line 2895 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____stack_slot_graph_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2898 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2900 "backend_libs.matching.c"
  }
#line 2902 "backend_libs.matching.c"
}

#line 2905 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
#line 2908 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2910 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2912 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2914 "backend_libs.matching.c"
{
#line 2916 "backend_libs.matching.c"
  {
#line 2918 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2921 "backend_libs.matching.c"
    {
#line 2923 "backend_libs.matching.c"
      backend_libs__matching____Compare____stack_slot_graph_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2926 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2928 "backend_libs.matching.c"
  }
#line 2930 "backend_libs.matching.c"
}

#line 580 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_f_0(
#line 580 "matching.m"
  MR_Word backend_libs__matching__BenefitToCostMap_18,
#line 580 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_33)
#line 580 "matching.m"
{
#line 580 "matching.m"
  {
#line 580 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 580 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_34;
#line 580 "matching.m"
    MR_Box backend_libs__matching__conv0_HeadVar__3_34;

#line 580 "matching.m"
    {
#line 580 "matching.m"
      backend_libs__matching__conv0_HeadVar__3_34 = mercury__map__lookup_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__BenefitToCostMap_18, ((MR_Box) (backend_libs__matching__HeadVar__2_33)));
    }
#line 580 "matching.m"
    backend_libs__matching__HeadVar__3_34 = ((MR_Word) backend_libs__matching__conv0_HeadVar__3_34);
#line 580 "matching.m"
    return backend_libs__matching__HeadVar__3_34;
#line 580 "matching.m"
  }
#line 580 "matching.m"
}

#line 109 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
#line 109 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 109 "matching.m"
{
#line 109 "matching.m"
  {
#line 109 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 109 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 109 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 109 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 109 "matching.m"
    if (backend_libs__matching__succeeded)
#line 2989 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "matching.m"
    else
#line 109 "matching.m"
      {
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 109 "matching.m"
        {
#line 109 "matching.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[0], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
        }
#line 3011 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 109 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 109 "matching.m"
        if (backend_libs__matching__succeeded)
#line 109 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 109 "matching.m"
        else
#line 109 "matching.m"
          {
#line 109 "matching.m"
            {
#line 109 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[1], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_7_7)));
#line 109 "matching.m"
              return;
            }
#line 109 "matching.m"
          }
#line 109 "matching.m"
      }
#line 109 "matching.m"
  }
#line 109 "matching.m"
}

#line 109 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 109 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 109 "matching.m"
{
#line 109 "matching.m"
  {
#line 109 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 109 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 109 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 109 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 109 "matching.m"
    if (backend_libs__matching__succeeded)
#line 109 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 109 "matching.m"
    else
#line 109 "matching.m"
      {
#line 109 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_10_10;
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

#line 3078 "backend_libs.matching.c"
        {
#line 3080 "backend_libs.matching.c"
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_2[0], ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_5_5)));
        }
#line 109 "matching.m"
        if (backend_libs__matching__succeeded)
#line 109 "matching.m"
          {
#line 3087 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_2[1];
#line 3089 "backend_libs.matching.c"
            {
#line 3091 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
            }
#line 109 "matching.m"
          }
#line 109 "matching.m"
      }
#line 109 "matching.m"
    return backend_libs__matching__succeeded;
#line 109 "matching.m"
  }
#line 109 "matching.m"
}

#line 50 "matching.m"
void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0(
#line 50 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 50 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 50 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 50 "matching.m"
{
#line 50 "matching.m"
  {
#line 50 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 50 "matching.m"
    MR_Integer backend_libs__matching__CastX_24 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 50 "matching.m"
    MR_Integer backend_libs__matching__CastY_25 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 50 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_24 == backend_libs__matching__CastY_25);
#line 50 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3129 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "matching.m"
    else
#line 50 "matching.m"
      {
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 5)));
#line 50 "matching.m"
        MR_Word backend_libs__matching__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 6)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 3)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 4)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 5)));
#line 50 "matching.m"
        MR_Word backend_libs__matching__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 6)));
#line 50 "matching.m"
        MR_Word backend_libs__matching__V_18_18;

#line 50 "matching.m"
        {
#line 50 "matching.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_18_18, backend_libs__matching__V_4_4, backend_libs__matching__V_11_11);
        }
#line 3171 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_18_18 == (MR_Integer) 0);
#line 50 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 50 "matching.m"
        if (backend_libs__matching__succeeded)
#line 50 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_18_18;
#line 50 "matching.m"
        else
#line 50 "matching.m"
          {
#line 50 "matching.m"
            MR_Word backend_libs__matching__V_19_19;

#line 50 "matching.m"
            {
#line 50 "matching.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_19_19, backend_libs__matching__V_5_5, backend_libs__matching__V_12_12);
            }
#line 3191 "backend_libs.matching.c"
            backend_libs__matching__succeeded = (backend_libs__matching__V_19_19 == (MR_Integer) 0);
#line 50 "matching.m"
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 50 "matching.m"
            if (backend_libs__matching__succeeded)
#line 50 "matching.m"
              *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_19_19;
#line 50 "matching.m"
            else
#line 50 "matching.m"
              {
#line 50 "matching.m"
                MR_Word backend_libs__matching__V_20_20;

#line 50 "matching.m"
                {
#line 50 "matching.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_20_20, backend_libs__matching__V_6_6, backend_libs__matching__V_13_13);
                }
#line 3211 "backend_libs.matching.c"
                backend_libs__matching__succeeded = (backend_libs__matching__V_20_20 == (MR_Integer) 0);
#line 50 "matching.m"
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 50 "matching.m"
                if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                  *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_20_20;
#line 50 "matching.m"
                else
#line 50 "matching.m"
                  {
#line 50 "matching.m"
                    MR_Word backend_libs__matching__V_21_21;

#line 50 "matching.m"
                    {
#line 50 "matching.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_21_21, backend_libs__matching__V_7_7, backend_libs__matching__V_14_14);
                    }
#line 3231 "backend_libs.matching.c"
                    backend_libs__matching__succeeded = (backend_libs__matching__V_21_21 == (MR_Integer) 0);
#line 50 "matching.m"
                    backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 50 "matching.m"
                    if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                      *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_21_21;
#line 50 "matching.m"
                    else
#line 50 "matching.m"
                      {
#line 50 "matching.m"
                        MR_Word backend_libs__matching__V_22_22;

#line 50 "matching.m"
                        {
#line 50 "matching.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_22_22, backend_libs__matching__V_8_8, backend_libs__matching__V_15_15);
                        }
#line 3251 "backend_libs.matching.c"
                        backend_libs__matching__succeeded = (backend_libs__matching__V_22_22 == (MR_Integer) 0);
#line 50 "matching.m"
                        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 50 "matching.m"
                        if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_22_22;
#line 50 "matching.m"
                        else
#line 50 "matching.m"
                          {
#line 50 "matching.m"
                            MR_Word backend_libs__matching__V_23_23;

#line 50 "matching.m"
                            {
#line 50 "matching.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_23_23, backend_libs__matching__V_9_9, backend_libs__matching__V_16_16);
                            }
#line 3271 "backend_libs.matching.c"
                            backend_libs__matching__succeeded = (backend_libs__matching__V_23_23 == (MR_Integer) 0);
#line 50 "matching.m"
                            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 50 "matching.m"
                            if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                              *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_23_23;
#line 50 "matching.m"
                            else
#line 50 "matching.m"
                              {
#line 50 "matching.m"
                                MR_Integer backend_libs__matching__V_33_33 = (MR_Integer) backend_libs__matching__V_10_10;
#line 50 "matching.m"
                                MR_Integer backend_libs__matching__V_34_34 = (MR_Integer) backend_libs__matching__V_17_17;

#line 50 "matching.m"
                                {
#line 50 "matching.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__V_33_33, backend_libs__matching__V_34_34);
#line 50 "matching.m"
                                  return;
                                }
#line 50 "matching.m"
                              }
#line 50 "matching.m"
                          }
#line 50 "matching.m"
                      }
#line 50 "matching.m"
                  }
#line 50 "matching.m"
              }
#line 50 "matching.m"
          }
#line 50 "matching.m"
      }
#line 50 "matching.m"
  }
#line 50 "matching.m"
}

#line 50 "matching.m"
MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0(
#line 50 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 50 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 50 "matching.m"
{
#line 50 "matching.m"
  {
#line 50 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 50 "matching.m"
    MR_Integer backend_libs__matching__CastX_17 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 50 "matching.m"
    MR_Integer backend_libs__matching__CastY_18 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 50 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_17 == backend_libs__matching__CastY_18);
#line 50 "matching.m"
    if (backend_libs__matching__succeeded)
#line 50 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 50 "matching.m"
    else
#line 50 "matching.m"
      {
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 3)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 4)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 5)));
#line 50 "matching.m"
        MR_Word backend_libs__matching__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 6)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 3)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 4)));
#line 50 "matching.m"
        MR_Integer backend_libs__matching__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 5)));
#line 50 "matching.m"
        MR_Word backend_libs__matching__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 6)));

#line 3371 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_3_3 == backend_libs__matching__V_10_10);
#line 50 "matching.m"
        if (backend_libs__matching__succeeded)
#line 50 "matching.m"
          {
#line 3377 "backend_libs.matching.c"
            backend_libs__matching__succeeded = (backend_libs__matching__V_4_4 == backend_libs__matching__V_11_11);
#line 50 "matching.m"
            if (backend_libs__matching__succeeded)
#line 50 "matching.m"
              {
#line 3383 "backend_libs.matching.c"
                backend_libs__matching__succeeded = (backend_libs__matching__V_5_5 == backend_libs__matching__V_12_12);
#line 50 "matching.m"
                if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                  {
#line 3389 "backend_libs.matching.c"
                    backend_libs__matching__succeeded = (backend_libs__matching__V_6_6 == backend_libs__matching__V_13_13);
#line 50 "matching.m"
                    if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                      {
#line 3395 "backend_libs.matching.c"
                        backend_libs__matching__succeeded = (backend_libs__matching__V_7_7 == backend_libs__matching__V_14_14);
#line 50 "matching.m"
                        if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                          {
#line 3401 "backend_libs.matching.c"
                            backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == backend_libs__matching__V_15_15);
#line 50 "matching.m"
                            if (backend_libs__matching__succeeded)
#line 3405 "backend_libs.matching.c"
                              backend_libs__matching__succeeded = (backend_libs__matching__V_9_9 == backend_libs__matching__V_16_16);
#line 50 "matching.m"
                          }
#line 50 "matching.m"
                      }
#line 50 "matching.m"
                  }
#line 50 "matching.m"
              }
#line 50 "matching.m"
          }
#line 50 "matching.m"
      }
#line 50 "matching.m"
    return backend_libs__matching__succeeded;
#line 50 "matching.m"
  }
#line 50 "matching.m"
}

#line 142 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0(
#line 142 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 142 "matching.m"
{
#line 142 "matching.m"
  {
#line 142 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 142 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 142 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 142 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 142 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3450 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 142 "matching.m"
    else
#line 142 "matching.m"
      {
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 142 "matching.m"
        {
#line 142 "matching.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[4], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
        }
#line 3472 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 142 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 142 "matching.m"
        if (backend_libs__matching__succeeded)
#line 142 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 142 "matching.m"
        else
#line 142 "matching.m"
          {
#line 142 "matching.m"
            {
#line 142 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[5], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_7_7)));
#line 142 "matching.m"
              return;
            }
#line 142 "matching.m"
          }
#line 142 "matching.m"
      }
#line 142 "matching.m"
  }
#line 142 "matching.m"
}

#line 142 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 142 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 142 "matching.m"
{
#line 142 "matching.m"
  {
#line 142 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 142 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 142 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 142 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 142 "matching.m"
    if (backend_libs__matching__succeeded)
#line 142 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 142 "matching.m"
    else
#line 142 "matching.m"
      {
#line 142 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_10_10;
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

#line 3539 "backend_libs.matching.c"
        {
#line 3541 "backend_libs.matching.c"
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_2[4], ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_5_5)));
        }
#line 142 "matching.m"
        if (backend_libs__matching__succeeded)
#line 142 "matching.m"
          {
#line 3548 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_2[5];
#line 3550 "backend_libs.matching.c"
            {
#line 3552 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
            }
#line 142 "matching.m"
          }
#line 142 "matching.m"
      }
#line 142 "matching.m"
    return backend_libs__matching__succeeded;
#line 142 "matching.m"
  }
#line 142 "matching.m"
}

#line 130 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
#line 130 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 130 "matching.m"
{
#line 130 "matching.m"
  {
#line 130 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 130 "matching.m"
    MR_Integer backend_libs__matching__CastX_12 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 130 "matching.m"
    MR_Integer backend_libs__matching__CastY_13 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 130 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_12 == backend_libs__matching__CastY_13);
#line 130 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3590 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "matching.m"
    else
#line 130 "matching.m"
      {
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 2)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_10_10;

#line 130 "matching.m"
        {
#line 130 "matching.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[1], &backend_libs__matching__V_10_10, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_7_7)));
        }
#line 3616 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_10_10 == (MR_Integer) 0);
#line 130 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 130 "matching.m"
        if (backend_libs__matching__succeeded)
#line 130 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_10_10;
#line 130 "matching.m"
        else
#line 130 "matching.m"
          {
#line 130 "matching.m"
            MR_Word backend_libs__matching__V_11_11;

#line 130 "matching.m"
            {
#line 130 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[3], &backend_libs__matching__V_11_11, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_8_8)));
            }
#line 3636 "backend_libs.matching.c"
            backend_libs__matching__succeeded = (backend_libs__matching__V_11_11 == (MR_Integer) 0);
#line 130 "matching.m"
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 130 "matching.m"
            if (backend_libs__matching__succeeded)
#line 130 "matching.m"
              *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_11_11;
#line 130 "matching.m"
            else
#line 130 "matching.m"
              {
#line 130 "matching.m"
                {
#line 130 "matching.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_6_6)), ((MR_Box) (backend_libs__matching__V_9_9)));
#line 130 "matching.m"
                  return;
                }
#line 130 "matching.m"
              }
#line 130 "matching.m"
          }
#line 130 "matching.m"
      }
#line 130 "matching.m"
  }
#line 130 "matching.m"
}

#line 130 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 130 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 130 "matching.m"
{
#line 130 "matching.m"
  {
#line 130 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 130 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 130 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 130 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 130 "matching.m"
    if (backend_libs__matching__succeeded)
#line 130 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 130 "matching.m"
    else
#line 130 "matching.m"
      {
#line 130 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_12_12;
#line 130 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_13_13;
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "matching.m"
        MR_Word backend_libs__matching__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));

#line 3711 "backend_libs.matching.c"
        {
#line 3713 "backend_libs.matching.c"
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_1[1], ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_6_6)));
        }
#line 130 "matching.m"
        if (backend_libs__matching__succeeded)
#line 130 "matching.m"
          {
#line 3720 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_12_12 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
#line 3722 "backend_libs.matching.c"
            {
#line 3724 "backend_libs.matching.c"
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_12_12, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_7_7)));
            }
#line 130 "matching.m"
            if (backend_libs__matching__succeeded)
#line 130 "matching.m"
              {
#line 3731 "backend_libs.matching.c"
                backend_libs__matching__TypeInfo_13_13 = (MR_Word) &backend_libs__matching_scalar_common_1[2];
#line 3733 "backend_libs.matching.c"
                {
#line 3735 "backend_libs.matching.c"
                  return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_13_13, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_8_8)));
                }
#line 130 "matching.m"
              }
#line 130 "matching.m"
          }
#line 130 "matching.m"
      }
#line 130 "matching.m"
    return backend_libs__matching__succeeded;
#line 130 "matching.m"
  }
#line 130 "matching.m"
}

#line 453 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
#line 453 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 453 "matching.m"
{
#line 453 "matching.m"
  {
#line 453 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 453 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar1_4 = backend_libs__matching__HeadVar__2_2;
#line 453 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar2_5 = backend_libs__matching__HeadVar__3_3;

#line 453 "matching.m"
    {
#line 453 "matching.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__matching__Cast_HeadVar2_5)));
#line 453 "matching.m"
      return;
    }
#line 453 "matching.m"
  }
#line 453 "matching.m"
}

#line 453 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 453 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 453 "matching.m"
{
#line 453 "matching.m"
  {
#line 453 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 453 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar1_3 = backend_libs__matching__HeadVar__1_1;
#line 453 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar2_4 = backend_libs__matching__HeadVar__2_2;

#line 453 "matching.m"
    {
#line 453 "matching.m"
      return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], ((MR_Box) (backend_libs__matching__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__matching__Cast_HeadVar2_4)));
    }
#line 453 "matching.m"
    return backend_libs__matching__succeeded;
#line 453 "matching.m"
  }
#line 453 "matching.m"
}

#line 115 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
#line 115 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 115 "matching.m"
{
#line 115 "matching.m"
  {
#line 115 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 115 "matching.m"
    MR_Integer backend_libs__matching__CastX_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 115 "matching.m"
    MR_Integer backend_libs__matching__CastY_9 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 115 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_8 == backend_libs__matching__CastY_9);
#line 115 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3837 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 115 "matching.m"
    else
#line 115 "matching.m"
      if ((backend_libs__matching__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "matching.m"
        if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 115 "matching.m"
        else
#line 3849 "backend_libs.matching.c"
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 2;
#line 115 "matching.m"
      else
#line 115 "matching.m"
        {
#line 115 "matching.m"
          MR_Integer backend_libs__matching__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

#line 115 "matching.m"
          if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3860 "backend_libs.matching.c"
            *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 1;
#line 115 "matching.m"
          else
#line 115 "matching.m"
            {
#line 115 "matching.m"
              MR_Integer backend_libs__matching__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

#line 115 "matching.m"
              {
#line 115 "matching.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__V_11_11, backend_libs__matching__V_5_5);
#line 115 "matching.m"
                return;
              }
#line 115 "matching.m"
            }
#line 115 "matching.m"
        }
#line 115 "matching.m"
  }
#line 115 "matching.m"
}

#line 115 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0(
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 115 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 115 "matching.m"
{
#line 115 "matching.m"
  {
#line 115 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 115 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 115 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 115 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 115 "matching.m"
    if (backend_libs__matching__succeeded)
#line 115 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 115 "matching.m"
    else
#line 115 "matching.m"
      if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "matching.m"
        {
#line 115 "matching.m"
          MR_Integer backend_libs__matching__CastX_5 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 115 "matching.m"
          MR_Integer backend_libs__matching__CastY_6 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 115 "matching.m"
          backend_libs__matching__succeeded = (backend_libs__matching__CastY_6 == backend_libs__matching__CastX_5);
#line 115 "matching.m"
        }
#line 115 "matching.m"
      else
#line 115 "matching.m"
        {
#line 115 "matching.m"
          MR_Integer backend_libs__matching__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 115 "matching.m"
          MR_Integer backend_libs__matching__V_4_4;

#line 115 "matching.m"
          backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 115 "matching.m"
          if (backend_libs__matching__succeeded)
#line 115 "matching.m"
            {
#line 115 "matching.m"
              backend_libs__matching__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 3941 "backend_libs.matching.c"
              backend_libs__matching__succeeded = (backend_libs__matching__V_3_3 == backend_libs__matching__V_4_4);
#line 115 "matching.m"
            }
#line 115 "matching.m"
        }
#line 115 "matching.m"
    return backend_libs__matching__succeeded;
#line 115 "matching.m"
  }
#line 115 "matching.m"
}

#line 124 "matching.m"
void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0(
#line 124 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 124 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 124 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 124 "matching.m"
{
#line 124 "matching.m"
  {
#line 124 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 124 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 124 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 124 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 124 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3978 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "matching.m"
    else
#line 124 "matching.m"
      {
#line 124 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "matching.m"
        MR_Integer backend_libs__matching__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 124 "matching.m"
        MR_Integer backend_libs__matching__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 124 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 115 "matching.m"
        MR_Integer backend_libs__matching__CastX_17 = (MR_Integer) backend_libs__matching__V_4_4;
#line 115 "matching.m"
        MR_Integer backend_libs__matching__CastY_18 = (MR_Integer) backend_libs__matching__V_6_6;

#line 115 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_17 == backend_libs__matching__CastY_18);
#line 115 "matching.m"
        if (backend_libs__matching__succeeded)
#line 4003 "backend_libs.matching.c"
          {
#line 4005 "backend_libs.matching.c"
            backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 124 "matching.m"
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 4009 "backend_libs.matching.c"
            if (backend_libs__matching__succeeded)
#line 4011 "backend_libs.matching.c"
              {
#line 4013 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 0;
#line 4015 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 4017 "backend_libs.matching.c"
              }
#line 4019 "backend_libs.matching.c"
          }
#line 115 "matching.m"
        else
#line 115 "matching.m"
          if ((backend_libs__matching__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "matching.m"
            if ((backend_libs__matching__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "matching.m"
              {
#line 4029 "backend_libs.matching.c"
                backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 124 "matching.m"
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 115 "matching.m"
                if (backend_libs__matching__succeeded)
#line 115 "matching.m"
                  {
#line 115 "matching.m"
                    backend_libs__matching__V_8_8 = (MR_Integer) 0;
#line 115 "matching.m"
                    backend_libs__matching__succeeded = MR_TRUE;
#line 115 "matching.m"
                  }
#line 115 "matching.m"
              }
#line 115 "matching.m"
            else
#line 4047 "backend_libs.matching.c"
              {
#line 4049 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 2;
#line 4051 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 4053 "backend_libs.matching.c"
              }
#line 115 "matching.m"
          else
#line 115 "matching.m"
            {
#line 115 "matching.m"
              MR_Integer backend_libs__matching__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_4_4, (MR_Integer) 0)));

#line 115 "matching.m"
              if ((backend_libs__matching__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4064 "backend_libs.matching.c"
                {
#line 4066 "backend_libs.matching.c"
                  backend_libs__matching__V_8_8 = (MR_Integer) 1;
#line 4068 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = MR_TRUE;
#line 4070 "backend_libs.matching.c"
                }
#line 115 "matching.m"
              else
#line 115 "matching.m"
                {
#line 115 "matching.m"
                  MR_Integer backend_libs__matching__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_6_6, (MR_Integer) 0)));

#line 115 "matching.m"
                  {
#line 115 "matching.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_8_8, backend_libs__matching__V_20_20, backend_libs__matching__V_14_14);
                  }
#line 4084 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 124 "matching.m"
                  backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 115 "matching.m"
                }
#line 115 "matching.m"
            }
#line 124 "matching.m"
        if (backend_libs__matching__succeeded)
#line 124 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 124 "matching.m"
        else
#line 124 "matching.m"
          {
#line 124 "matching.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__V_5_5, backend_libs__matching__V_7_7);
#line 124 "matching.m"
            return;
          }
#line 124 "matching.m"
      }
#line 124 "matching.m"
  }
#line 124 "matching.m"
}

#line 124 "matching.m"
MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0(
#line 124 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 124 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 124 "matching.m"
{
#line 124 "matching.m"
  {
#line 124 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 124 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 124 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 124 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 124 "matching.m"
    if (backend_libs__matching__succeeded)
#line 124 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 124 "matching.m"
    else
#line 124 "matching.m"
      {
#line 124 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "matching.m"
        MR_Integer backend_libs__matching__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 124 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "matching.m"
        MR_Integer backend_libs__matching__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 115 "matching.m"
        MR_Integer backend_libs__matching__CastX_13 = (MR_Integer) backend_libs__matching__V_3_3;
#line 115 "matching.m"
        MR_Integer backend_libs__matching__CastY_14 = (MR_Integer) backend_libs__matching__V_5_5;

#line 115 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_13 == backend_libs__matching__CastY_14);
#line 115 "matching.m"
        if (backend_libs__matching__succeeded)
#line 115 "matching.m"
          backend_libs__matching__succeeded = MR_TRUE;
#line 115 "matching.m"
        else
#line 115 "matching.m"
          if ((backend_libs__matching__V_3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "matching.m"
            {
#line 115 "matching.m"
              MR_Integer backend_libs__matching__CastX_11 = (MR_Integer) backend_libs__matching__V_3_3;
#line 115 "matching.m"
              MR_Integer backend_libs__matching__CastY_12 = (MR_Integer) backend_libs__matching__V_5_5;

#line 115 "matching.m"
              backend_libs__matching__succeeded = (backend_libs__matching__CastY_12 == backend_libs__matching__CastX_11);
#line 115 "matching.m"
            }
#line 115 "matching.m"
          else
#line 115 "matching.m"
            {
#line 115 "matching.m"
              MR_Integer backend_libs__matching__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_3_3, (MR_Integer) 0)));
#line 115 "matching.m"
              MR_Integer backend_libs__matching__V_10_10;

#line 115 "matching.m"
              backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 115 "matching.m"
              if (backend_libs__matching__succeeded)
#line 115 "matching.m"
                {
#line 115 "matching.m"
                  backend_libs__matching__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_5_5, (MR_Integer) 0)));
#line 4191 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = (backend_libs__matching__V_9_9 == backend_libs__matching__V_10_10);
#line 115 "matching.m"
                }
#line 115 "matching.m"
            }
#line 124 "matching.m"
        if (backend_libs__matching__succeeded)
#line 4199 "backend_libs.matching.c"
          backend_libs__matching__succeeded = (backend_libs__matching__V_4_4 == backend_libs__matching__V_6_6);
#line 124 "matching.m"
      }
#line 124 "matching.m"
    return backend_libs__matching__succeeded;
#line 124 "matching.m"
  }
#line 124 "matching.m"
}

#line 119 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
#line 119 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 119 "matching.m"
{
#line 119 "matching.m"
  {
#line 119 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 119 "matching.m"
    MR_Integer backend_libs__matching__CastX_12 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 119 "matching.m"
    MR_Integer backend_libs__matching__CastY_13 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 119 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_12 == backend_libs__matching__CastY_13);
#line 119 "matching.m"
    if (backend_libs__matching__succeeded)
#line 4234 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "matching.m"
    else
#line 119 "matching.m"
      if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 119 "matching.m"
        {
#line 119 "matching.m"
          MR_Word backend_libs__matching__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

#line 119 "matching.m"
          if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 119 "matching.m"
            {
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

#line 119 "matching.m"
              {
#line 119 "matching.m"
                mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[1], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_16_16)), ((MR_Box) (backend_libs__matching__V_5_5)));
#line 119 "matching.m"
                return;
              }
#line 119 "matching.m"
            }
#line 119 "matching.m"
          else
#line 4263 "backend_libs.matching.c"
            *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 1;
#line 119 "matching.m"
        }
#line 119 "matching.m"
      else
#line 119 "matching.m"
        {
#line 119 "matching.m"
          MR_Word backend_libs__matching__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

#line 119 "matching.m"
          if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4276 "backend_libs.matching.c"
            *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 2;
#line 119 "matching.m"
          else
#line 119 "matching.m"
            {
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

#line 119 "matching.m"
              {
#line 119 "matching.m"
                mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[1], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_17_17)), ((MR_Box) (backend_libs__matching__V_11_11)));
#line 119 "matching.m"
                return;
              }
#line 119 "matching.m"
            }
#line 119 "matching.m"
        }
#line 119 "matching.m"
  }
#line 119 "matching.m"
}

#line 119 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 119 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 119 "matching.m"
{
#line 119 "matching.m"
  {
#line 119 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 119 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 119 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 119 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 119 "matching.m"
    if (backend_libs__matching__succeeded)
#line 119 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 119 "matching.m"
    else
#line 119 "matching.m"
      if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 119 "matching.m"
        {
#line 119 "matching.m"
          MR_Word backend_libs__matching__TypeInfo_9_9;
#line 119 "matching.m"
          MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "matching.m"
          MR_Word backend_libs__matching__V_4_4;

#line 119 "matching.m"
          backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 119 "matching.m"
          if (backend_libs__matching__succeeded)
#line 119 "matching.m"
            {
#line 119 "matching.m"
              backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 4346 "backend_libs.matching.c"
              backend_libs__matching__TypeInfo_9_9 = (MR_Word) &backend_libs__matching_scalar_common_1[1];
#line 4348 "backend_libs.matching.c"
              {
#line 4350 "backend_libs.matching.c"
                return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_9, ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_4_4)));
              }
#line 119 "matching.m"
            }
#line 119 "matching.m"
        }
#line 119 "matching.m"
      else
#line 119 "matching.m"
        {
#line 119 "matching.m"
          MR_Word backend_libs__matching__TypeInfo_10_10;
#line 119 "matching.m"
          MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "matching.m"
          MR_Word backend_libs__matching__V_6_6;

#line 119 "matching.m"
          backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 119 "matching.m"
          if (backend_libs__matching__succeeded)
#line 119 "matching.m"
            {
#line 119 "matching.m"
              backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 4376 "backend_libs.matching.c"
              backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_1[1];
#line 4378 "backend_libs.matching.c"
              {
#line 4380 "backend_libs.matching.c"
                return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_6_6)));
              }
#line 119 "matching.m"
            }
#line 119 "matching.m"
        }
#line 119 "matching.m"
    return backend_libs__matching__succeeded;
#line 119 "matching.m"
  }
#line 119 "matching.m"
}

#line 455 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
#line 455 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 455 "matching.m"
{
#line 455 "matching.m"
  {
#line 455 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 455 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 455 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 455 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 455 "matching.m"
    if (backend_libs__matching__succeeded)
#line 4418 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 455 "matching.m"
    else
#line 455 "matching.m"
      {
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 455 "matching.m"
        {
#line 455 "matching.m"
          backend_libs__matching____Compare____benefit_node_0_0(&backend_libs__matching__V_8_8, backend_libs__matching__V_4_4, backend_libs__matching__V_6_6);
        }
#line 4440 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 455 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 455 "matching.m"
        if (backend_libs__matching__succeeded)
#line 455 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 455 "matching.m"
        else
#line 455 "matching.m"
          {
#line 455 "matching.m"
            {
#line 455 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_7_7)));
#line 455 "matching.m"
              return;
            }
#line 455 "matching.m"
          }
#line 455 "matching.m"
      }
#line 455 "matching.m"
  }
#line 455 "matching.m"
}

#line 455 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 455 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 455 "matching.m"
{
#line 455 "matching.m"
  {
#line 455 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 455 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 455 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 455 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 455 "matching.m"
    if (backend_libs__matching__succeeded)
#line 455 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 455 "matching.m"
    else
#line 455 "matching.m"
      {
#line 455 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_9_9;
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 455 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

#line 4507 "backend_libs.matching.c"
        {
#line 4509 "backend_libs.matching.c"
          backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_0_0(backend_libs__matching__V_3_3, backend_libs__matching__V_5_5);
        }
#line 455 "matching.m"
        if (backend_libs__matching__succeeded)
#line 455 "matching.m"
          {
#line 4516 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_9_9 = (MR_Word) &backend_libs__matching_scalar_common_1[7];
#line 4518 "backend_libs.matching.c"
            {
#line 4520 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_9, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
            }
#line 455 "matching.m"
          }
#line 455 "matching.m"
      }
#line 455 "matching.m"
    return backend_libs__matching__succeeded;
#line 455 "matching.m"
  }
#line 455 "matching.m"
}

#line 125 "matching.m"
void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0(
#line 125 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 125 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 125 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 125 "matching.m"
{
#line 125 "matching.m"
  {
#line 125 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 125 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 125 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 125 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 125 "matching.m"
    if (backend_libs__matching__succeeded)
#line 4558 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 125 "matching.m"
    else
#line 125 "matching.m"
      {
#line 125 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 125 "matching.m"
        MR_Integer backend_libs__matching__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 125 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 125 "matching.m"
        MR_Integer backend_libs__matching__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 125 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 119 "matching.m"
        MR_Integer backend_libs__matching__CastX_21 = (MR_Integer) backend_libs__matching__V_4_4;
#line 119 "matching.m"
        MR_Integer backend_libs__matching__CastY_22 = (MR_Integer) backend_libs__matching__V_6_6;

#line 119 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_21 == backend_libs__matching__CastY_22);
#line 119 "matching.m"
        if (backend_libs__matching__succeeded)
#line 4583 "backend_libs.matching.c"
          {
#line 4585 "backend_libs.matching.c"
            backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 125 "matching.m"
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 4589 "backend_libs.matching.c"
            if (backend_libs__matching__succeeded)
#line 4591 "backend_libs.matching.c"
              {
#line 4593 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 0;
#line 4595 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 4597 "backend_libs.matching.c"
              }
#line 4599 "backend_libs.matching.c"
          }
#line 119 "matching.m"
        else
#line 119 "matching.m"
          if (((MR_tag((MR_Word) backend_libs__matching__V_4_4)) == (MR_mktag((MR_Integer) 0))))
#line 119 "matching.m"
            {
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_4_4, (MR_Integer) 0)));

#line 119 "matching.m"
              if (((MR_tag((MR_Word) backend_libs__matching__V_6_6)) == (MR_mktag((MR_Integer) 0))))
#line 119 "matching.m"
                {
#line 119 "matching.m"
                  MR_Word backend_libs__matching__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_6_6, (MR_Integer) 0)));

#line 119 "matching.m"
                  {
#line 119 "matching.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[1], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_25_25)), ((MR_Box) (backend_libs__matching__V_14_14)));
                  }
#line 4622 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 125 "matching.m"
                  backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 119 "matching.m"
                }
#line 119 "matching.m"
              else
#line 4630 "backend_libs.matching.c"
                {
#line 4632 "backend_libs.matching.c"
                  backend_libs__matching__V_8_8 = (MR_Integer) 1;
#line 4634 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = MR_TRUE;
#line 4636 "backend_libs.matching.c"
                }
#line 119 "matching.m"
            }
#line 119 "matching.m"
          else
#line 119 "matching.m"
            {
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_4_4, (MR_Integer) 0)));

#line 119 "matching.m"
              if (((MR_tag((MR_Word) backend_libs__matching__V_6_6)) == (MR_mktag((MR_Integer) 0))))
#line 4649 "backend_libs.matching.c"
                {
#line 4651 "backend_libs.matching.c"
                  backend_libs__matching__V_8_8 = (MR_Integer) 2;
#line 4653 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = MR_TRUE;
#line 4655 "backend_libs.matching.c"
                }
#line 119 "matching.m"
              else
#line 119 "matching.m"
                {
#line 119 "matching.m"
                  MR_Word backend_libs__matching__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_6_6, (MR_Integer) 0)));

#line 119 "matching.m"
                  {
#line 119 "matching.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[1], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_26_26)), ((MR_Box) (backend_libs__matching__V_20_20)));
                  }
#line 4669 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 125 "matching.m"
                  backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 119 "matching.m"
                }
#line 119 "matching.m"
            }
#line 125 "matching.m"
        if (backend_libs__matching__succeeded)
#line 125 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 125 "matching.m"
        else
#line 125 "matching.m"
          {
#line 125 "matching.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__V_5_5, backend_libs__matching__V_7_7);
#line 125 "matching.m"
            return;
          }
#line 125 "matching.m"
      }
#line 125 "matching.m"
  }
#line 125 "matching.m"
}

#line 125 "matching.m"
MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0(
#line 125 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 125 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 125 "matching.m"
{
#line 125 "matching.m"
  {
#line 125 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 125 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 125 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 125 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 125 "matching.m"
    if (backend_libs__matching__succeeded)
#line 125 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 125 "matching.m"
    else
#line 125 "matching.m"
      {
#line 125 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "matching.m"
        MR_Integer backend_libs__matching__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 125 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 125 "matching.m"
        MR_Integer backend_libs__matching__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "matching.m"
        MR_Integer backend_libs__matching__CastX_13 = (MR_Integer) backend_libs__matching__V_3_3;
#line 119 "matching.m"
        MR_Integer backend_libs__matching__CastY_14 = (MR_Integer) backend_libs__matching__V_5_5;

#line 119 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_13 == backend_libs__matching__CastY_14);
#line 119 "matching.m"
        if (backend_libs__matching__succeeded)
#line 119 "matching.m"
          backend_libs__matching__succeeded = MR_TRUE;
#line 119 "matching.m"
        else
#line 119 "matching.m"
          if (((MR_tag((MR_Word) backend_libs__matching__V_3_3)) == (MR_mktag((MR_Integer) 0))))
#line 119 "matching.m"
            {
#line 119 "matching.m"
              MR_Word backend_libs__matching__TypeInfo_9_15;
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_3_3, (MR_Integer) 0)));
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_10_10;

#line 119 "matching.m"
              backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 119 "matching.m"
              if (backend_libs__matching__succeeded)
#line 119 "matching.m"
                {
#line 119 "matching.m"
                  backend_libs__matching__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_5_5, (MR_Integer) 0)));
#line 4765 "backend_libs.matching.c"
                  backend_libs__matching__TypeInfo_9_15 = (MR_Word) &backend_libs__matching_scalar_common_1[1];
#line 4767 "backend_libs.matching.c"
                  {
#line 4769 "backend_libs.matching.c"
                    backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_15, ((MR_Box) (backend_libs__matching__V_9_9)), ((MR_Box) (backend_libs__matching__V_10_10)));
                  }
#line 119 "matching.m"
                }
#line 119 "matching.m"
            }
#line 119 "matching.m"
          else
#line 119 "matching.m"
            {
#line 119 "matching.m"
              MR_Word backend_libs__matching__TypeInfo_10_16;
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_3_3, (MR_Integer) 0)));
#line 119 "matching.m"
              MR_Word backend_libs__matching__V_12_12;

#line 119 "matching.m"
              backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 119 "matching.m"
              if (backend_libs__matching__succeeded)
#line 119 "matching.m"
                {
#line 119 "matching.m"
                  backend_libs__matching__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_5_5, (MR_Integer) 0)));
#line 4795 "backend_libs.matching.c"
                  backend_libs__matching__TypeInfo_10_16 = (MR_Word) &backend_libs__matching_scalar_common_1[1];
#line 4797 "backend_libs.matching.c"
                  {
#line 4799 "backend_libs.matching.c"
                    backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_16, ((MR_Box) (backend_libs__matching__V_11_11)), ((MR_Box) (backend_libs__matching__V_12_12)));
                  }
#line 119 "matching.m"
                }
#line 119 "matching.m"
            }
#line 125 "matching.m"
        if (backend_libs__matching__succeeded)
#line 4808 "backend_libs.matching.c"
          backend_libs__matching__succeeded = (backend_libs__matching__V_4_4 == backend_libs__matching__V_6_6);
#line 125 "matching.m"
      }
#line 125 "matching.m"
    return backend_libs__matching__succeeded;
#line 125 "matching.m"
  }
#line 125 "matching.m"
}

#line 759 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
#line 759 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1)
#line 759 "matching.m"
{
#line 761 "matching.m"
  {
#line 761 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 761 "matching.m"
    MR_Word backend_libs__matching__CostOp_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 761 "matching.m"
    MR_Integer backend_libs__matching___CopyNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

#line 761 "matching.m"
    return backend_libs__matching__CostOp_3;
#line 761 "matching.m"
  }
#line 759 "matching.m"
}

#line 755 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
#line 755 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1)
#line 755 "matching.m"
{
#line 757 "matching.m"
  {
#line 757 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 757 "matching.m"
    MR_Word backend_libs__matching__BenefitOp_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "matching.m"
    MR_Integer backend_libs__matching___CopyNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

#line 757 "matching.m"
    return backend_libs__matching__BenefitOp_3;
#line 757 "matching.m"
  }
#line 755 "matching.m"
}

#line 748 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
#line 748 "matching.m"
  MR_Word backend_libs__matching__ViaCellOccurringVars_3,
#line 748 "matching.m"
  MR_Word backend_libs__matching__FieldCostsBenefits_4)
#line 748 "matching.m"
{
#line 751 "matching.m"
  {
#line 751 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 751 "matching.m"
    MR_Word backend_libs__matching__FieldVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 0)));
#line 752 "matching.m"
    MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 1)));
#line 752 "matching.m"
    MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 2)));

#line 753 "matching.m"
    {
#line 753 "matching.m"
      return backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__ViaCellOccurringVars_3, backend_libs__matching__FieldVar_5);
    }
#line 751 "matching.m"
    return backend_libs__matching__succeeded;
#line 751 "matching.m"
  }
#line 748 "matching.m"
}

#line 656 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
#line 656 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 656 "matching.m"
  MR_Word backend_libs__matching__MatchingCB_2)
#line 656 "matching.m"
{
#line 659 "matching.m"
  {
#line 659 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 659 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 659 "matching.m"
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "matching.m"
    else
#line 660 "matching.m"
      {
#line 660 "matching.m"
        MR_Word backend_libs__matching__Node_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 660 "matching.m"
        MR_Word backend_libs__matching__Nodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 660 "matching.m"
        MR_Word backend_libs__matching__UnmatchedNodes1_9;
#line 662 "matching.m"
        MR_Word backend_libs__matching___Match_10;
#line 662 "matching.m"
        MR_Box backend_libs__matching__conv0__Match_10;

#line 661 "matching.m"
        {
#line 661 "matching.m"
          backend_libs__matching__UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(backend_libs__matching__Nodes_6, backend_libs__matching__MatchingCB_2);
        }
#line 662 "matching.m"
        {
#line 662 "matching.m"
          backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__MatchingCB_2, ((MR_Box) (backend_libs__matching__Node_5)), &backend_libs__matching__conv0__Match_10);
        }
#line 662 "matching.m"
        if (backend_libs__matching__succeeded)
#line 662 "matching.m"
          {
#line 662 "matching.m"
            backend_libs__matching___Match_10 = ((MR_Word) backend_libs__matching__conv0__Match_10);
#line 662 "matching.m"
            backend_libs__matching__succeeded = MR_TRUE;
#line 662 "matching.m"
          }
#line 664 "matching.m"
        if (backend_libs__matching__succeeded)
#line 663 "matching.m"
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__UnmatchedNodes1_9;
#line 664 "matching.m"
        else
#line 665 "matching.m"
          {
#line 665 "matching.m"
            backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Node_5));
#line 665 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__UnmatchedNodes1_9));
#line 665 "matching.m"
          }
#line 660 "matching.m"
      }
#line 659 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 659 "matching.m"
  }
#line 656 "matching.m"
}

#line 641 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
#line 641 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 641 "matching.m"
  MR_Word backend_libs__matching__MatchingBC_2)
#line 641 "matching.m"
{
#line 644 "matching.m"
  {
#line 644 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 644 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 644 "matching.m"
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "matching.m"
    else
#line 645 "matching.m"
      {
#line 645 "matching.m"
        MR_Word backend_libs__matching__Node_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 645 "matching.m"
        MR_Word backend_libs__matching__Nodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "matching.m"
        MR_Word backend_libs__matching__UnmatchedNodes1_9;
#line 647 "matching.m"
        MR_Word backend_libs__matching___Match_10;
#line 647 "matching.m"
        MR_Box backend_libs__matching__conv0__Match_10;

#line 646 "matching.m"
        {
#line 646 "matching.m"
          backend_libs__matching__UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(backend_libs__matching__Nodes_6, backend_libs__matching__MatchingBC_2);
        }
#line 647 "matching.m"
        {
#line 647 "matching.m"
          backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__MatchingBC_2, ((MR_Box) (backend_libs__matching__Node_5)), &backend_libs__matching__conv0__Match_10);
        }
#line 647 "matching.m"
        if (backend_libs__matching__succeeded)
#line 647 "matching.m"
          {
#line 647 "matching.m"
            backend_libs__matching___Match_10 = ((MR_Word) backend_libs__matching__conv0__Match_10);
#line 647 "matching.m"
            backend_libs__matching__succeeded = MR_TRUE;
#line 647 "matching.m"
          }
#line 649 "matching.m"
        if (backend_libs__matching__succeeded)
#line 648 "matching.m"
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__UnmatchedNodes1_9;
#line 649 "matching.m"
        else
#line 650 "matching.m"
          {
#line 650 "matching.m"
            backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Node_5));
#line 650 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__UnmatchedNodes1_9));
#line 650 "matching.m"
          }
#line 645 "matching.m"
      }
#line 644 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 644 "matching.m"
  }
#line 641 "matching.m"
}

#line 618 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
#line 618 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 618 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 618 "matching.m"
{
#line 621 "matching.m"
  {
#line 621 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 621 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 621 "matching.m"
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "matching.m"
      {
#line 621 "matching.m"
        {
#line 621 "matching.m"
          backend_libs__matching__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 621 "matching.m"
      }
#line 621 "matching.m"
    else
#line 623 "matching.m"
      {
#line 623 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_18_18;
#line 623 "matching.m"
        MR_Word backend_libs__matching__FieldCostsBenefits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "matching.m"
        MR_Word backend_libs__matching__FieldsCostsBenefits_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "matching.m"
        MR_Word backend_libs__matching__ViaCellVars1_9;
#line 623 "matching.m"
        MR_Word backend_libs__matching__FieldVar_10;
#line 623 "matching.m"
        MR_Word backend_libs__matching__FieldBenefits_12;
#line 623 "matching.m"
        MR_Word backend_libs__matching__MarkedFieldBenefits_13;
#line 625 "matching.m"
        MR_Word backend_libs__matching__V_11_11;

#line 624 "matching.m"
        {
#line 624 "matching.m"
          backend_libs__matching__ViaCellVars1_9 = backend_libs__matching__compute_via_cell_vars_2_f_0(backend_libs__matching__FieldsCostsBenefits_6, backend_libs__matching__HeadVar__2_2);
        }
#line 625 "matching.m"
        backend_libs__matching__FieldVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 0)));
#line 625 "matching.m"
        backend_libs__matching__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 1)));
#line 625 "matching.m"
        backend_libs__matching__FieldBenefits_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 2)));
#line 5116 "backend_libs.matching.c"
        backend_libs__matching__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 626 "matching.m"
        {
#line 626 "matching.m"
          mercury__set__intersect_3_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__FieldBenefits_12, backend_libs__matching__HeadVar__2_2, &backend_libs__matching__MarkedFieldBenefits_13);
        }
#line 627 "matching.m"
        {
#line 627 "matching.m"
          backend_libs__matching__succeeded = mercury__set__is_empty_1_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__MarkedFieldBenefits_13);
        }
#line 629 "matching.m"
        if (backend_libs__matching__succeeded)
#line 628 "matching.m"
          {
#line 628 "matching.m"
            {
#line 628 "matching.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__FieldVar_10, backend_libs__matching__ViaCellVars1_9, &backend_libs__matching__HeadVar__3_3);
            }
#line 628 "matching.m"
          }
#line 629 "matching.m"
        else
#line 631 "matching.m"
          {
#line 629 "matching.m"
            {
#line 629 "matching.m"
              backend_libs__matching__succeeded = mercury__set__equal_2_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__MarkedFieldBenefits_13, backend_libs__matching__FieldBenefits_12);
            }
#line 631 "matching.m"
            if (backend_libs__matching__succeeded)
#line 630 "matching.m"
              backend_libs__matching__HeadVar__3_3 = backend_libs__matching__ViaCellVars1_9;
#line 631 "matching.m"
            else
#line 632 "matching.m"
              {
#line 632 "matching.m"
                {
#line 632 "matching.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.matching", (MR_String) "function \140backend_libs.matching.compute_via_cell_vars\'/2", (MR_String) "theorem violation: intersection neither empty nor full");
                }
#line 632 "matching.m"
              }
#line 631 "matching.m"
          }
#line 623 "matching.m"
      }
#line 621 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 621 "matching.m"
  }
#line 618 "matching.m"
}

#line 606 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
#line 606 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitMap_4,
#line 606 "matching.m"
  MR_Word backend_libs__matching__CostNode_5)
#line 606 "matching.m"
{
#line 612 "matching.m"
  {
#line 612 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 612 "matching.m"
    MR_Word backend_libs__matching__Match_6;
#line 612 "matching.m"
    MR_Word backend_libs__matching__BenefitNode_7;
#line 610 "matching.m"
    MR_Box backend_libs__matching__conv0_BenefitNode_7;

#line 610 "matching.m"
    {
#line 610 "matching.m"
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__CostToBenefitMap_4, ((MR_Box) (backend_libs__matching__CostNode_5)), &backend_libs__matching__conv0_BenefitNode_7);
    }
#line 610 "matching.m"
    if (backend_libs__matching__succeeded)
#line 610 "matching.m"
      {
#line 610 "matching.m"
        backend_libs__matching__BenefitNode_7 = ((MR_Word) backend_libs__matching__conv0_BenefitNode_7);
#line 610 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 610 "matching.m"
      }
#line 612 "matching.m"
    if (backend_libs__matching__succeeded)
#line 611 "matching.m"
      {
#line 611 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 611 "matching.m"
        {
#line 611 "matching.m"
          backend_libs__matching__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 611 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__V_8_8, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_7));
#line 611 "matching.m"
        }
#line 611 "matching.m"
        {
#line 611 "matching.m"
          backend_libs__matching__Match_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 611 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 0) = ((MR_Box) (backend_libs__matching__CostNode_5));
#line 611 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 1) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 611 "matching.m"
        }
#line 611 "matching.m"
      }
#line 612 "matching.m"
    else
#line 613 "matching.m"
      {
#line 613 "matching.m"
        {
#line 613 "matching.m"
          backend_libs__matching__Match_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 0) = ((MR_Box) (backend_libs__matching__CostNode_5));
#line 613 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "matching.m"
        }
#line 613 "matching.m"
      }
#line 612 "matching.m"
    return backend_libs__matching__Match_6;
#line 612 "matching.m"
  }
#line 606 "matching.m"
}

#line 586 "matching.m"
static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
#line 586 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitsMap_5,
#line 586 "matching.m"
  MR_Word backend_libs__matching__CostNode_6,
#line 586 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9,
#line 586 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_10)
#line 586 "matching.m"
{
#line 589 "matching.m"
  {
#line 589 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 589 "matching.m"
    MR_Word backend_libs__matching__AdjBenefitNodes_8;
#line 590 "matching.m"
    MR_Box backend_libs__matching__conv0_AdjBenefitNodes_8;

#line 590 "matching.m"
    {
#line 590 "matching.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__CostToBenefitsMap_5, ((MR_Box) (backend_libs__matching__CostNode_6)), &backend_libs__matching__conv0_AdjBenefitNodes_8);
    }
#line 590 "matching.m"
    backend_libs__matching__AdjBenefitNodes_8 = ((MR_Word) backend_libs__matching__conv0_AdjBenefitNodes_8);
#line 591 "matching.m"
    {
#line 591 "matching.m"
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__AdjBenefitNodes_8, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9, backend_libs__matching__STATE_VARIABLE_BenefitNodes_10);
#line 591 "matching.m"
      return;
    }
#line 589 "matching.m"
  }
#line 586 "matching.m"
}

#line 580 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
#line 580 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 580 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 580 "matching.m"
{
#line 580 "matching.m"
  {
#line 580 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 580 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 580 "matching.m"
    MR_Word backend_libs__matching__conv2_HeadVar__3_34;

#line 580 "matching.m"
    {
#line 580 "matching.m"
      backend_libs__matching__conv2_HeadVar__3_34 = backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 580 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv2_HeadVar__3_34));
#line 580 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 580 "matching.m"
  }
#line 580 "matching.m"
}

#line 574 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
#line 574 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 574 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 574 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 574 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 574 "matching.m"
{
#line 574 "matching.m"
  {
#line 574 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 574 "matching.m"
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10;

#line 574 "matching.m"
    {
#line 574 "matching.m"
      backend_libs__matching__adjacents_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10);
    }
#line 574 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10));
#line 574 "matching.m"
  }
#line 574 "matching.m"
}

#line 563 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
#line 563 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_6,
#line 563 "matching.m"
  MR_Word backend_libs__matching__Graph_7,
#line 563 "matching.m"
  MR_Word backend_libs__matching__Matching_8,
#line 563 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20,
#line 563 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_21)
#line 563 "matching.m"
{
#line 570 "matching.m"
  while (MR_TRUE)
#line 570 "matching.m"
    {
#line 570 "matching.m"
      /* tailcall optimized into a loop */
#line 570 "matching.m"
      {
#line 570 "matching.m"
        MR_bool backend_libs__matching__succeeded;

#line 570 "matching.m"
        if ((backend_libs__matching__SelectedCostNodes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "matching.m"
          *backend_libs__matching__STATE_VARIABLE_BenefitNodes_21 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20;
#line 570 "matching.m"
        else
#line 572 "matching.m"
          {
#line 572 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_30_30;
#line 572 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_31_31;
#line 572 "matching.m"
            MR_Word backend_libs__matching__CostToBenefitsMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_7, (MR_Integer) 0)));
#line 572 "matching.m"
            MR_Word backend_libs__matching__AdjBenefitNodes_14;
#line 572 "matching.m"
            MR_Word backend_libs__matching__NewBenefitNodes_15;
#line 572 "matching.m"
            MR_Word backend_libs__matching__NewBenefitNodeList_16;
#line 572 "matching.m"
            MR_Word backend_libs__matching__BenefitToCostMap_18;
#line 572 "matching.m"
            MR_Word backend_libs__matching__LinkedCostNodes_19;
#line 572 "matching.m"
            MR_Word backend_libs__matching__V_22_22;
#line 572 "matching.m"
            MR_Word backend_libs__matching__V_23_23;
#line 572 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24;
#line 572 "matching.m"
            MR_Word backend_libs__matching__V_25_25;
#line 573 "matching.m"
            MR_Word backend_libs__matching__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_7, (MR_Integer) 1)));
#line 574 "matching.m"
            MR_Box backend_libs__matching__conv1_AdjBenefitNodes_14;
#line 579 "matching.m"
            MR_Word backend_libs__matching__V_17_17;

#line 574 "matching.m"
            {
#line 574 "matching.m"
              backend_libs__matching__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 574 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[5]));
#line 574 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_1));
#line 574 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 574 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 3) = ((MR_Box) (backend_libs__matching__CostToBenefitsMap_12));
#line 574 "matching.m"
            }
#line 5443 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 574 "matching.m"
            {
#line 574 "matching.m"
              backend_libs__matching__V_23_23 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_30_30);
            }
#line 5450 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_31_31 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 574 "matching.m"
            {
#line 574 "matching.m"
              mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_31_31, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__V_22_22, backend_libs__matching__SelectedCostNodes_6, ((MR_Box) (backend_libs__matching__V_23_23)), &backend_libs__matching__conv1_AdjBenefitNodes_14);
            }
#line 574 "matching.m"
            backend_libs__matching__AdjBenefitNodes_14 = ((MR_Word) backend_libs__matching__conv1_AdjBenefitNodes_14);
#line 576 "matching.m"
            {
#line 576 "matching.m"
              mercury__set__difference_3_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20, backend_libs__matching__AdjBenefitNodes_14, &backend_libs__matching__NewBenefitNodes_15);
            }
#line 577 "matching.m"
            {
#line 577 "matching.m"
              mercury__set__union_3_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__AdjBenefitNodes_14, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20, &backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24);
            }
#line 578 "matching.m"
            {
#line 578 "matching.m"
              mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__NewBenefitNodes_15, &backend_libs__matching__NewBenefitNodeList_16);
            }
#line 579 "matching.m"
            backend_libs__matching__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_8, (MR_Integer) 0)));
#line 579 "matching.m"
            backend_libs__matching__BenefitToCostMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_8, (MR_Integer) 1)));
#line 580 "matching.m"
            {
#line 580 "matching.m"
              backend_libs__matching__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 580 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[3]));
#line 580 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_2));
#line 580 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 3) = ((MR_Box) (backend_libs__matching__BenefitToCostMap_18));
#line 580 "matching.m"
            }
#line 580 "matching.m"
            {
#line 580 "matching.m"
              backend_libs__matching__LinkedCostNodes_19 = mercury__list__map_2_f_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__TypeCtorInfo_31_31, backend_libs__matching__V_25_25, backend_libs__matching__NewBenefitNodeList_16);
            }
#line 582 "matching.m"
            /* direct tailcall eliminated */
#line 582 "matching.m"
            {
#line 582 "matching.m"
              MR_Word backend_libs__matching__SelectedCostNodes__tmp_copy_6 = backend_libs__matching__LinkedCostNodes_19;
#line 582 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0__tmp_copy_20 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24;

#line 582 "matching.m"
              backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_0__tmp_copy_20;
#line 582 "matching.m"
              backend_libs__matching__SelectedCostNodes_6 = backend_libs__matching__SelectedCostNodes__tmp_copy_6;
#line 582 "matching.m"
            }
#line 582 "matching.m"
            continue;
#line 572 "matching.m"
          }
#line 570 "matching.m"
      }
#line 570 "matching.m"
      break;
#line 570 "matching.m"
    }
#line 563 "matching.m"
}

#line 555 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
#line 555 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_5,
#line 555 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 555 "matching.m"
  MR_Word backend_libs__matching__Matching_7)
#line 555 "matching.m"
{
#line 559 "matching.m"
  {
#line 559 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 559 "matching.m"
    MR_Word backend_libs__matching__ReachableBenefitNodes_8;
#line 559 "matching.m"
    MR_Word backend_libs__matching__V_9_9;

#line 560 "matching.m"
    {
#line 560 "matching.m"
      backend_libs__matching__V_9_9 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
    }
#line 560 "matching.m"
    {
#line 560 "matching.m"
      backend_libs__matching__reachable_by_alternating_path_5_p_0(backend_libs__matching__SelectedCostNodes_5, backend_libs__matching__Graph_6, backend_libs__matching__Matching_7, backend_libs__matching__V_9_9, &backend_libs__matching__ReachableBenefitNodes_8);
    }
#line 559 "matching.m"
    return backend_libs__matching__ReachableBenefitNodes_8;
#line 559 "matching.m"
  }
#line 555 "matching.m"
}

#line 520 "matching.m"
static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
#line 520 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 520 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0_2,
#line 520 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Seen_3,
#line 520 "matching.m"
  MR_Word backend_libs__matching__BenefitNode_4,
#line 520 "matching.m"
  MR_Word backend_libs__matching__Path_5,
#line 520 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0_6,
#line 520 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Queue_7)
#line 520 "matching.m"
{
#line 526 "matching.m"
  while (MR_TRUE)
#line 526 "matching.m"
    {
#line 526 "matching.m"
      /* tailcall optimized into a loop */
#line 526 "matching.m"
      {
#line 526 "matching.m"
        MR_bool backend_libs__matching__succeeded;

#line 526 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "matching.m"
          {
#line 526 "matching.m"
            *backend_libs__matching__STATE_VARIABLE_Queue_7 = backend_libs__matching__STATE_VARIABLE_Queue_0_6;
#line 526 "matching.m"
            *backend_libs__matching__STATE_VARIABLE_Seen_3 = backend_libs__matching__STATE_VARIABLE_Seen_0_2;
#line 526 "matching.m"
          }
#line 526 "matching.m"
        else
#line 527 "matching.m"
          {
#line 527 "matching.m"
            MR_Word backend_libs__matching__CostMatch_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 527 "matching.m"
            MR_Word backend_libs__matching__CostMatches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 527 "matching.m"
            MR_Word backend_libs__matching__CostNode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__CostMatch_16, (MR_Integer) 0)));
#line 527 "matching.m"
            MR_Word backend_libs__matching__MaybeAdjBenefitNode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__CostMatch_16, (MR_Integer) 1)));
#line 527 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_Seen_31_31;
#line 527 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_Queue_33_33;
#line 538 "matching.m"
            MR_Word backend_libs__matching__AdjBenefitNode_24;
#line 531 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_36_36;

#line 530 "matching.m"
            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__MaybeAdjBenefitNode_23)) == (MR_mktag((MR_Integer) 1)));
#line 530 "matching.m"
            if (backend_libs__matching__succeeded)
#line 530 "matching.m"
              {
#line 530 "matching.m"
                backend_libs__matching__AdjBenefitNode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__MaybeAdjBenefitNode_23, (MR_Integer) 0)));
#line 5631 "backend_libs.matching.c"
                backend_libs__matching__TypeCtorInfo_36_36 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 531 "matching.m"
                {
#line 531 "matching.m"
                  backend_libs__matching__succeeded = mercury__list__member_2_p_0(backend_libs__matching__TypeCtorInfo_36_36, ((MR_Box) (backend_libs__matching__AdjBenefitNode_24)), backend_libs__matching__STATE_VARIABLE_Seen_0_2);
                }
#line 531 "matching.m"
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 530 "matching.m"
              }
#line 538 "matching.m"
            if (backend_libs__matching__succeeded)
#line 533 "matching.m"
              {
#line 533 "matching.m"
                MR_Word backend_libs__matching__NewPath_25;
#line 533 "matching.m"
                MR_Word backend_libs__matching__BenefitNodeAndEdgeList_26;
#line 533 "matching.m"
                MR_Word backend_libs__matching__V_32_32;

#line 533 "matching.m"
                {
#line 533 "matching.m"
                  backend_libs__matching__STATE_VARIABLE_Seen_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_Seen_31_31, 0) = ((MR_Box) (backend_libs__matching__AdjBenefitNode_24));
#line 533 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_Seen_31_31, 1) = ((MR_Box) (backend_libs__matching__STATE_VARIABLE_Seen_0_2));
#line 533 "matching.m"
                }
#line 534 "matching.m"
                {
#line 534 "matching.m"
                  backend_libs__matching__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_32_32, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_4));
#line 534 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_32_32, 1) = ((MR_Box) (backend_libs__matching__CostNode_22));
#line 534 "matching.m"
                }
#line 534 "matching.m"
                {
#line 534 "matching.m"
                  backend_libs__matching__NewPath_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__NewPath_25, 0) = ((MR_Box) (backend_libs__matching__V_32_32));
#line 534 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__NewPath_25, 1) = ((MR_Box) (backend_libs__matching__Path_5));
#line 534 "matching.m"
                }
#line 535 "matching.m"
                {
#line 535 "matching.m"
                  backend_libs__matching__BenefitNodeAndEdgeList_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__BenefitNodeAndEdgeList_26, 0) = ((MR_Box) (backend_libs__matching__AdjBenefitNode_24));
#line 535 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__BenefitNodeAndEdgeList_26, 1) = ((MR_Box) (backend_libs__matching__NewPath_25));
#line 535 "matching.m"
                }
#line 537 "matching.m"
                {
#line 537 "matching.m"
                  mercury__queue__put_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, ((MR_Box) (backend_libs__matching__BenefitNodeAndEdgeList_26)), backend_libs__matching__STATE_VARIABLE_Queue_0_6, &backend_libs__matching__STATE_VARIABLE_Queue_33_33);
                }
#line 533 "matching.m"
              }
#line 538 "matching.m"
            else
#line 539 "matching.m"
              {
#line 539 "matching.m"
                backend_libs__matching__STATE_VARIABLE_Queue_33_33 = backend_libs__matching__STATE_VARIABLE_Queue_0_6;
#line 539 "matching.m"
                backend_libs__matching__STATE_VARIABLE_Seen_31_31 = backend_libs__matching__STATE_VARIABLE_Seen_0_2;
#line 539 "matching.m"
              }
#line 541 "matching.m"
            /* direct tailcall eliminated */
#line 541 "matching.m"
            {
#line 541 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__CostMatches_17;
#line 541 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0__tmp_copy_2 = backend_libs__matching__STATE_VARIABLE_Seen_31_31;
#line 541 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0__tmp_copy_6 = backend_libs__matching__STATE_VARIABLE_Queue_33_33;

#line 541 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Queue_0_6 = backend_libs__matching__STATE_VARIABLE_Queue_0__tmp_copy_6;
#line 541 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Seen_0_2 = backend_libs__matching__STATE_VARIABLE_Seen_0__tmp_copy_2;
#line 541 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 541 "matching.m"
            }
#line 541 "matching.m"
            continue;
#line 527 "matching.m"
          }
#line 526 "matching.m"
      }
#line 526 "matching.m"
      break;
#line 526 "matching.m"
    }
#line 520 "matching.m"
}

#line 502 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
#line 502 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 502 "matching.m"
  MR_Word * backend_libs__matching__Unmatched_6)
#line 502 "matching.m"
{
#line 505 "matching.m"
  while (MR_TRUE)
#line 505 "matching.m"
    {
#line 505 "matching.m"
      /* tailcall optimized into a loop */
#line 505 "matching.m"
      {
#line 505 "matching.m"
        MR_bool backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 505 "matching.m"
        MR_Word backend_libs__matching__CostNode_3;
#line 505 "matching.m"
        MR_Word backend_libs__matching__MaybeBenefitNode_4;
#line 505 "matching.m"
        MR_Word backend_libs__matching__Matches_5;
#line 505 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 505 "matching.m"
        if (backend_libs__matching__succeeded)
#line 505 "matching.m"
          {
#line 505 "matching.m"
            backend_libs__matching__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "matching.m"
            backend_libs__matching__Matches_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "matching.m"
            backend_libs__matching__CostNode_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, (MR_Integer) 0)));
#line 505 "matching.m"
            backend_libs__matching__MaybeBenefitNode_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, (MR_Integer) 1)));
#line 509 "matching.m"
            if ((backend_libs__matching__MaybeBenefitNode_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "matching.m"
              {
#line 508 "matching.m"
                *backend_libs__matching__Unmatched_6 = backend_libs__matching__CostNode_3;
#line 508 "matching.m"
                backend_libs__matching__succeeded = MR_TRUE;
#line 508 "matching.m"
              }
#line 509 "matching.m"
            else
#line 511 "matching.m"
              {
#line 511 "matching.m"
                /* direct tailcall eliminated */
#line 511 "matching.m"
                {
#line 511 "matching.m"
                  MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__Matches_5;

#line 511 "matching.m"
                  backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 511 "matching.m"
                }
#line 511 "matching.m"
                continue;
#line 511 "matching.m"
              }
#line 505 "matching.m"
          }
#line 505 "matching.m"
        return backend_libs__matching__succeeded;
#line 505 "matching.m"
      }
#line 505 "matching.m"
      break;
#line 505 "matching.m"
    }
#line 502 "matching.m"
}

#line 603 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
#line 603 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 603 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 603 "matching.m"
{
#line 603 "matching.m"
  {
#line 603 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 603 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 603 "matching.m"
    MR_Word backend_libs__matching__conv2_Match_6;

#line 603 "matching.m"
    {
#line 603 "matching.m"
      backend_libs__matching__conv2_Match_6 = backend_libs__matching__adj_to_matched_cost_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 603 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv2_Match_6));
#line 603 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 603 "matching.m"
  }
#line 603 "matching.m"
}

#line 483 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
#line 483 "matching.m"
  MR_Word backend_libs__matching__Queue0_6,
#line 483 "matching.m"
  MR_Word backend_libs__matching__Seen0_7,
#line 483 "matching.m"
  MR_Word backend_libs__matching__Graph_8,
#line 483 "matching.m"
  MR_Word backend_libs__matching__Matching_9,
#line 483 "matching.m"
  MR_Word * backend_libs__matching__Path_10)
#line 483 "matching.m"
{
#line 486 "matching.m"
  while (MR_TRUE)
#line 486 "matching.m"
    {
#line 486 "matching.m"
      /* tailcall optimized into a loop */
#line 486 "matching.m"
      {
#line 486 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 486 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_27_27;
#line 486 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_28_28;
#line 486 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_29_29;
#line 486 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_8_34;
#line 486 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_9_35;
#line 486 "matching.m"
        MR_Word backend_libs__matching__NodePath_11;
#line 486 "matching.m"
        MR_Word backend_libs__matching__Queue1_12;
#line 486 "matching.m"
        MR_Word backend_libs__matching__BenefitNode_13;
#line 486 "matching.m"
        MR_Word backend_libs__matching__Path0_14;
#line 486 "matching.m"
        MR_Word backend_libs__matching__BenefitToCostsMap_16;
#line 486 "matching.m"
        MR_Word backend_libs__matching__AdjCostNodes_17;
#line 486 "matching.m"
        MR_Word backend_libs__matching__CostToBenefitMap_18;
#line 486 "matching.m"
        MR_Word backend_libs__matching__CostMatches_20;
#line 486 "matching.m"
        MR_Word backend_libs__matching__V_24_24;
#line 486 "matching.m"
        MR_Word backend_libs__matching__V_33_33;
#line 487 "matching.m"
        MR_Box backend_libs__matching__conv0_NodePath_11;
#line 489 "matching.m"
        MR_Word backend_libs__matching__V_15_15;
#line 490 "matching.m"
        MR_Box backend_libs__matching__conv1_AdjCostNodes_17;
#line 491 "matching.m"
        MR_Word backend_libs__matching__V_19_19;
#line 496 "matching.m"
        MR_Word backend_libs__matching__UnmatchedCostNode_21;

#line 487 "matching.m"
        {
#line 487 "matching.m"
          backend_libs__matching__succeeded = mercury__queue__get_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, &backend_libs__matching__conv0_NodePath_11, backend_libs__matching__Queue0_6, &backend_libs__matching__Queue1_12);
        }
#line 487 "matching.m"
        if (backend_libs__matching__succeeded)
#line 487 "matching.m"
          {
#line 487 "matching.m"
            backend_libs__matching__NodePath_11 = ((MR_Word) backend_libs__matching__conv0_NodePath_11);
#line 487 "matching.m"
            backend_libs__matching__succeeded = MR_TRUE;
#line 487 "matching.m"
          }
#line 486 "matching.m"
        if (backend_libs__matching__succeeded)
#line 486 "matching.m"
          {
#line 488 "matching.m"
            backend_libs__matching__BenefitNode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__NodePath_11, (MR_Integer) 0)));
#line 488 "matching.m"
            backend_libs__matching__Path0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__NodePath_11, (MR_Integer) 1)));
#line 489 "matching.m"
            backend_libs__matching__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_8, (MR_Integer) 0)));
#line 489 "matching.m"
            backend_libs__matching__BenefitToCostsMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_8, (MR_Integer) 1)));
#line 5949 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_27_27 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 5951 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_28_28 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
#line 490 "matching.m"
            {
#line 490 "matching.m"
              mercury__map__lookup_3_p_0(backend_libs__matching__TypeCtorInfo_27_27, backend_libs__matching__TypeInfo_28_28, backend_libs__matching__BenefitToCostsMap_16, ((MR_Box) (backend_libs__matching__BenefitNode_13)), &backend_libs__matching__conv1_AdjCostNodes_17);
            }
#line 490 "matching.m"
            backend_libs__matching__AdjCostNodes_17 = ((MR_Word) backend_libs__matching__conv1_AdjCostNodes_17);
#line 491 "matching.m"
            backend_libs__matching__CostToBenefitMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_9, (MR_Integer) 0)));
#line 491 "matching.m"
            backend_libs__matching__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_9, (MR_Integer) 1)));
#line 5964 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 492 "matching.m"
            {
#line 492 "matching.m"
              backend_libs__matching__V_24_24 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_29_29, backend_libs__matching__AdjCostNodes_17);
            }
#line 5971 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_8_34 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 5973 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_9_35 = (MR_Word) &backend_libs__matching_scalar_common_2[2];
#line 603 "matching.m"
            {
#line 603 "matching.m"
              backend_libs__matching__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 603 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[2]));
#line 603 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 1) = ((MR_Box) (backend_libs__matching__augpath_bf_4_f_0_1));
#line 603 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 603 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 3) = ((MR_Box) (backend_libs__matching__CostToBenefitMap_18));
#line 603 "matching.m"
            }
#line 603 "matching.m"
            {
#line 603 "matching.m"
              backend_libs__matching__CostMatches_20 = mercury__list__map_2_f_0(backend_libs__matching__TypeCtorInfo_8_34, backend_libs__matching__TypeInfo_9_35, backend_libs__matching__V_33_33, backend_libs__matching__V_24_24);
            }
#line 494 "matching.m"
            {
#line 494 "matching.m"
              backend_libs__matching__succeeded = backend_libs__matching__find_unmatched_cost_1_f_0(backend_libs__matching__CostMatches_20, &backend_libs__matching__UnmatchedCostNode_21);
            }
#line 496 "matching.m"
            if (backend_libs__matching__succeeded)
#line 495 "matching.m"
              {
#line 495 "matching.m"
                MR_Word backend_libs__matching__V_25_25;

#line 495 "matching.m"
                {
#line 495 "matching.m"
                  backend_libs__matching__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_13));
#line 495 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 1) = ((MR_Box) (backend_libs__matching__UnmatchedCostNode_21));
#line 495 "matching.m"
                }
#line 495 "matching.m"
                {
#line 495 "matching.m"
                  MR_Word base;
#line 495 "matching.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "matching.m"
                  *backend_libs__matching__Path_10 = base;
#line 495 "matching.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__matching__V_25_25));
#line 495 "matching.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__matching__Path0_14));
#line 495 "matching.m"
                }
#line 495 "matching.m"
                backend_libs__matching__succeeded = MR_TRUE;
#line 495 "matching.m"
              }
#line 496 "matching.m"
            else
#line 498 "matching.m"
              {
#line 498 "matching.m"
                MR_Word backend_libs__matching__Seen_22;
#line 498 "matching.m"
                MR_Word backend_libs__matching__Queue2_23;

#line 497 "matching.m"
                {
#line 497 "matching.m"
                  backend_libs__matching__add_alternates_7_p_0(backend_libs__matching__CostMatches_20, backend_libs__matching__Seen0_7, &backend_libs__matching__Seen_22, backend_libs__matching__BenefitNode_13, backend_libs__matching__Path0_14, backend_libs__matching__Queue1_12, &backend_libs__matching__Queue2_23);
                }
#line 499 "matching.m"
                /* direct tailcall eliminated */
#line 499 "matching.m"
                {
#line 499 "matching.m"
                  MR_Word backend_libs__matching__Queue0__tmp_copy_6 = backend_libs__matching__Queue2_23;
#line 499 "matching.m"
                  MR_Word backend_libs__matching__Seen0__tmp_copy_7 = backend_libs__matching__Seen_22;

#line 499 "matching.m"
                  backend_libs__matching__Seen0_7 = backend_libs__matching__Seen0__tmp_copy_7;
#line 499 "matching.m"
                  backend_libs__matching__Queue0_6 = backend_libs__matching__Queue0__tmp_copy_6;
#line 499 "matching.m"
                }
#line 499 "matching.m"
                continue;
#line 498 "matching.m"
              }
#line 486 "matching.m"
          }
#line 486 "matching.m"
        return backend_libs__matching__succeeded;
#line 486 "matching.m"
      }
#line 486 "matching.m"
      break;
#line 486 "matching.m"
    }
#line 483 "matching.m"
}

#line 475 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
#line 475 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 475 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 475 "matching.m"
{
#line 478 "matching.m"
  while (MR_TRUE)
#line 478 "matching.m"
    {
#line 478 "matching.m"
      /* tailcall optimized into a loop */
#line 478 "matching.m"
      {
#line 478 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 478 "matching.m"
        MR_Word backend_libs__matching__Q_3;

#line 478 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "matching.m"
          backend_libs__matching__Q_3 = backend_libs__matching__HeadVar__2_2;
#line 478 "matching.m"
        else
#line 479 "matching.m"
          {
#line 479 "matching.m"
            MR_Word backend_libs__matching__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 479 "matching.m"
            MR_Word backend_libs__matching__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 479 "matching.m"
            MR_Word backend_libs__matching__Q1_9;
#line 479 "matching.m"
            MR_Word backend_libs__matching__V_10_10;

#line 480 "matching.m"
            {
#line 480 "matching.m"
              backend_libs__matching__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_10_10, 0) = ((MR_Box) (backend_libs__matching__N_5));
#line 480 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "matching.m"
            }
#line 480 "matching.m"
            {
#line 480 "matching.m"
              backend_libs__matching__Q1_9 = mercury__queue__put_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, backend_libs__matching__HeadVar__2_2, ((MR_Box) (backend_libs__matching__V_10_10)));
            }
#line 481 "matching.m"
            /* direct tailcall eliminated */
#line 481 "matching.m"
            {
#line 481 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__Ns_6;
#line 481 "matching.m"
              MR_Word backend_libs__matching__HeadVar__2__tmp_copy_2 = backend_libs__matching__Q1_9;

#line 481 "matching.m"
              backend_libs__matching__HeadVar__2_2 = backend_libs__matching__HeadVar__2__tmp_copy_2;
#line 481 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 481 "matching.m"
            }
#line 481 "matching.m"
            continue;
#line 479 "matching.m"
          }
#line 478 "matching.m"
        return backend_libs__matching__Q_3;
#line 478 "matching.m"
      }
#line 478 "matching.m"
      break;
#line 478 "matching.m"
    }
#line 475 "matching.m"
}

#line 432 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
#line 432 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 432 "matching.m"
  MR_Word backend_libs__matching__Matching0_2)
#line 432 "matching.m"
{
#line 434 "matching.m"
  while (MR_TRUE)
#line 434 "matching.m"
    {
#line 434 "matching.m"
      /* tailcall optimized into a loop */
#line 434 "matching.m"
      {
#line 434 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 434 "matching.m"
        MR_Word backend_libs__matching__HeadVar__3_3;

#line 434 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "matching.m"
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__Matching0_2;
#line 434 "matching.m"
        else
#line 435 "matching.m"
          {
#line 435 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_16_16;
#line 435 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_17_17;
#line 435 "matching.m"
            MR_Word backend_libs__matching__BenefitNode_5;
#line 435 "matching.m"
            MR_Word backend_libs__matching__CostNode_6;
#line 435 "matching.m"
            MR_Word backend_libs__matching__Path_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "matching.m"
            MR_Word backend_libs__matching__CostToBenefitMap0_10;
#line 435 "matching.m"
            MR_Word backend_libs__matching__BenefitToCostMap0_11;
#line 435 "matching.m"
            MR_Word backend_libs__matching__CostToBenefitMap1_12;
#line 435 "matching.m"
            MR_Word backend_libs__matching__BenefitToCostMap1_13;
#line 435 "matching.m"
            MR_Word backend_libs__matching__Matching1_14;
#line 435 "matching.m"
            MR_Word backend_libs__matching__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));

#line 435 "matching.m"
            backend_libs__matching__BenefitNode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, (MR_Integer) 0)));
#line 435 "matching.m"
            backend_libs__matching__CostNode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, (MR_Integer) 1)));
#line 436 "matching.m"
            backend_libs__matching__CostToBenefitMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_2, (MR_Integer) 0)));
#line 436 "matching.m"
            backend_libs__matching__BenefitToCostMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_2, (MR_Integer) 1)));
#line 6225 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_16_16 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 6227 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_17_17 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 437 "matching.m"
            {
#line 437 "matching.m"
              mercury__map__set_4_p_0(backend_libs__matching__TypeCtorInfo_16_16, backend_libs__matching__TypeCtorInfo_17_17, ((MR_Box) (backend_libs__matching__CostNode_6)), ((MR_Box) (backend_libs__matching__BenefitNode_5)), backend_libs__matching__CostToBenefitMap0_10, &backend_libs__matching__CostToBenefitMap1_12);
            }
#line 438 "matching.m"
            {
#line 438 "matching.m"
              mercury__map__set_4_p_0(backend_libs__matching__TypeCtorInfo_17_17, backend_libs__matching__TypeCtorInfo_16_16, ((MR_Box) (backend_libs__matching__BenefitNode_5)), ((MR_Box) (backend_libs__matching__CostNode_6)), backend_libs__matching__BenefitToCostMap0_11, &backend_libs__matching__BenefitToCostMap1_13);
            }
#line 439 "matching.m"
            {
#line 439 "matching.m"
              backend_libs__matching__Matching1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__Matching1_14, 0) = ((MR_Box) (backend_libs__matching__CostToBenefitMap1_12));
#line 439 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__Matching1_14, 1) = ((MR_Box) (backend_libs__matching__BenefitToCostMap1_13));
#line 439 "matching.m"
            }
#line 440 "matching.m"
            /* direct tailcall eliminated */
#line 440 "matching.m"
            {
#line 440 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__Path_7;
#line 440 "matching.m"
              MR_Word backend_libs__matching__Matching0__tmp_copy_2 = backend_libs__matching__Matching1_14;

#line 440 "matching.m"
              backend_libs__matching__Matching0_2 = backend_libs__matching__Matching0__tmp_copy_2;
#line 440 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 440 "matching.m"
            }
#line 440 "matching.m"
            continue;
#line 435 "matching.m"
          }
#line 434 "matching.m"
        return backend_libs__matching__HeadVar__3_3;
#line 434 "matching.m"
      }
#line 434 "matching.m"
      break;
#line 434 "matching.m"
    }
#line 432 "matching.m"
}

#line 421 "matching.m"
static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
#line 421 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_5,
#line 421 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 421 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0_9,
#line 421 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Matching_10)
#line 421 "matching.m"
{
#line 428 "matching.m"
  while (MR_TRUE)
#line 428 "matching.m"
    {
#line 428 "matching.m"
      /* tailcall optimized into a loop */
#line 428 "matching.m"
      {
#line 428 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 428 "matching.m"
        MR_Word backend_libs__matching__Path_8;
#line 445 "matching.m"
        MR_Word backend_libs__matching__MatchingBenefitToCost_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__STATE_VARIABLE_Matching_0_9, (MR_Integer) 1)));
#line 445 "matching.m"
        MR_Word backend_libs__matching__UnMatchedBenefitNodes_19;
#line 445 "matching.m"
        MR_Word backend_libs__matching__Queue_24;
#line 445 "matching.m"
        MR_Word backend_libs__matching__V_25_25;
#line 446 "matching.m"
        MR_Word backend_libs__matching__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__STATE_VARIABLE_Matching_0_9, (MR_Integer) 0)));

#line 447 "matching.m"
        {
#line 447 "matching.m"
          backend_libs__matching__UnMatchedBenefitNodes_19 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(backend_libs__matching__BenefitNodes_5, backend_libs__matching__MatchingBenefitToCost_18);
        }
#line 472 "matching.m"
        {
#line 472 "matching.m"
          backend_libs__matching__V_25_25 = mercury__queue__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0);
        }
#line 472 "matching.m"
        {
#line 472 "matching.m"
          backend_libs__matching__Queue_24 = backend_libs__matching__initial_queue_2_f_0(backend_libs__matching__UnMatchedBenefitNodes_19, backend_libs__matching__V_25_25);
        }
#line 473 "matching.m"
        {
#line 473 "matching.m"
          backend_libs__matching__succeeded = backend_libs__matching__augpath_bf_4_f_0(backend_libs__matching__Queue_24, backend_libs__matching__UnMatchedBenefitNodes_19, backend_libs__matching__Graph_6, backend_libs__matching__STATE_VARIABLE_Matching_0_9, &backend_libs__matching__Path_8);
        }
#line 428 "matching.m"
        if (backend_libs__matching__succeeded)
#line 426 "matching.m"
          {
#line 426 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_Matching_11_11;

#line 426 "matching.m"
            {
#line 426 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Matching_11_11 = backend_libs__matching__update_matches_2_f_0(backend_libs__matching__Path_8, backend_libs__matching__STATE_VARIABLE_Matching_0_9);
            }
#line 427 "matching.m"
            /* direct tailcall eliminated */
#line 427 "matching.m"
            {
#line 427 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0__tmp_copy_9 = backend_libs__matching__STATE_VARIABLE_Matching_11_11;

#line 427 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Matching_0_9 = backend_libs__matching__STATE_VARIABLE_Matching_0__tmp_copy_9;
#line 427 "matching.m"
            }
#line 427 "matching.m"
            continue;
#line 426 "matching.m"
          }
#line 428 "matching.m"
        else
#line 427 "matching.m"
          *backend_libs__matching__STATE_VARIABLE_Matching_10 = backend_libs__matching__STATE_VARIABLE_Matching_0_9;
#line 428 "matching.m"
      }
#line 428 "matching.m"
      break;
#line 428 "matching.m"
    }
#line 421 "matching.m"
}

#line 415 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
#line 415 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_4,
#line 415 "matching.m"
  MR_Word backend_libs__matching__Graph_5)
#line 415 "matching.m"
{
#line 417 "matching.m"
  {
#line 417 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 417 "matching.m"
    MR_Word backend_libs__matching__Matching_6;
#line 417 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_10_10 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 417 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_11_11 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 417 "matching.m"
    MR_Word backend_libs__matching__Matching0_7;
#line 417 "matching.m"
    MR_Word backend_libs__matching__V_8_8;
#line 417 "matching.m"
    MR_Word backend_libs__matching__V_9_9;

#line 418 "matching.m"
    {
#line 418 "matching.m"
      backend_libs__matching__V_8_8 = mercury__map__init_0_f_0(backend_libs__matching__TypeCtorInfo_10_10, backend_libs__matching__TypeCtorInfo_11_11);
    }
#line 418 "matching.m"
    {
#line 418 "matching.m"
      backend_libs__matching__V_9_9 = mercury__map__init_0_f_0(backend_libs__matching__TypeCtorInfo_11_11, backend_libs__matching__TypeCtorInfo_10_10);
    }
#line 418 "matching.m"
    {
#line 418 "matching.m"
      backend_libs__matching__Matching0_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_7, 0) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 418 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_7, 1) = ((MR_Box) (backend_libs__matching__V_9_9));
#line 418 "matching.m"
    }
#line 419 "matching.m"
    {
#line 419 "matching.m"
      backend_libs__matching__maximize_matching_4_p_0(backend_libs__matching__BenefitNodes_4, backend_libs__matching__Graph_5, backend_libs__matching__Matching0_7, &backend_libs__matching__Matching_6);
    }
#line 417 "matching.m"
    return backend_libs__matching__Matching_6;
#line 417 "matching.m"
  }
#line 415 "matching.m"
}

#line 399 "matching.m"
static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
#line 399 "matching.m"
  MR_Word backend_libs__matching__Costs_5,
#line 399 "matching.m"
  MR_Word backend_libs__matching__Benefit_6,
#line 399 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10,
#line 399 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11)
#line 399 "matching.m"
{
#line 407 "matching.m"
  {
#line 407 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 407 "matching.m"
    MR_Word backend_libs__matching__BenefitCosts0_8;
#line 404 "matching.m"
    MR_Box backend_libs__matching__conv0_BenefitCosts0_8;

#line 404 "matching.m"
    {
#line 404 "matching.m"
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, ((MR_Box) (backend_libs__matching__Benefit_6)), &backend_libs__matching__conv0_BenefitCosts0_8);
    }
#line 404 "matching.m"
    if (backend_libs__matching__succeeded)
#line 404 "matching.m"
      {
#line 404 "matching.m"
        backend_libs__matching__BenefitCosts0_8 = ((MR_Word) backend_libs__matching__conv0_BenefitCosts0_8);
#line 404 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 404 "matching.m"
      }
#line 407 "matching.m"
    if (backend_libs__matching__succeeded)
#line 405 "matching.m"
      {
#line 405 "matching.m"
        MR_Word backend_libs__matching__BenefitCosts_9;

#line 405 "matching.m"
        {
#line 405 "matching.m"
          mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__BenefitCosts0_8, backend_libs__matching__Costs_5, &backend_libs__matching__BenefitCosts_9);
        }
#line 406 "matching.m"
        {
#line 406 "matching.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], ((MR_Box) (backend_libs__matching__Benefit_6)), ((MR_Box) (backend_libs__matching__BenefitCosts_9)), backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);
#line 406 "matching.m"
          return;
        }
#line 405 "matching.m"
      }
#line 407 "matching.m"
    else
#line 408 "matching.m"
      {
#line 408 "matching.m"
        {
#line 408 "matching.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], ((MR_Box) (backend_libs__matching__Benefit_6)), ((MR_Box) (backend_libs__matching__Costs_5)), backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);
#line 408 "matching.m"
          return;
        }
#line 408 "matching.m"
      }
#line 407 "matching.m"
  }
#line 399 "matching.m"
}

#line 387 "matching.m"
static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
#line 387 "matching.m"
  MR_Word backend_libs__matching__Benefits_5,
#line 387 "matching.m"
  MR_Word backend_libs__matching__Cost_6,
#line 387 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10,
#line 387 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11)
#line 387 "matching.m"
{
#line 395 "matching.m"
  {
#line 395 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 395 "matching.m"
    MR_Word backend_libs__matching__CostBenefits0_8;
#line 392 "matching.m"
    MR_Box backend_libs__matching__conv0_CostBenefits0_8;

#line 392 "matching.m"
    {
#line 392 "matching.m"
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, ((MR_Box) (backend_libs__matching__Cost_6)), &backend_libs__matching__conv0_CostBenefits0_8);
    }
#line 392 "matching.m"
    if (backend_libs__matching__succeeded)
#line 392 "matching.m"
      {
#line 392 "matching.m"
        backend_libs__matching__CostBenefits0_8 = ((MR_Word) backend_libs__matching__conv0_CostBenefits0_8);
#line 392 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 392 "matching.m"
      }
#line 395 "matching.m"
    if (backend_libs__matching__succeeded)
#line 393 "matching.m"
      {
#line 393 "matching.m"
        MR_Word backend_libs__matching__CostBenefits_9;

#line 393 "matching.m"
        {
#line 393 "matching.m"
          mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__CostBenefits0_8, backend_libs__matching__Benefits_5, &backend_libs__matching__CostBenefits_9);
        }
#line 394 "matching.m"
        {
#line 394 "matching.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], ((MR_Box) (backend_libs__matching__Cost_6)), ((MR_Box) (backend_libs__matching__CostBenefits_9)), backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);
#line 394 "matching.m"
          return;
        }
#line 393 "matching.m"
      }
#line 395 "matching.m"
    else
#line 396 "matching.m"
      {
#line 396 "matching.m"
        {
#line 396 "matching.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], ((MR_Box) (backend_libs__matching__Cost_6)), ((MR_Box) (backend_libs__matching__Benefits_5)), backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);
#line 396 "matching.m"
          return;
        }
#line 396 "matching.m"
      }
#line 395 "matching.m"
  }
#line 387 "matching.m"
}

#line 384 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
#line 384 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 384 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 384 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 384 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 384 "matching.m"
{
#line 384 "matching.m"
  {
#line 384 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 384 "matching.m"
    MR_Word backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11;

#line 384 "matching.m"
    {
#line 384 "matching.m"
      backend_libs__matching__add_benefit_cost_links_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11);
    }
#line 384 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11));
#line 384 "matching.m"
  }
#line 384 "matching.m"
}

#line 382 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
#line 382 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 382 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 382 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 382 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 382 "matching.m"
{
#line 382 "matching.m"
  {
#line 382 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 382 "matching.m"
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11;

#line 382 "matching.m"
    {
#line 382 "matching.m"
      backend_libs__matching__add_cost_benefit_links_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11);
    }
#line 382 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11));
#line 382 "matching.m"
  }
#line 382 "matching.m"
}

#line 374 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
#line 374 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 374 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11,
#line 374 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12,
#line 374 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13,
#line 374 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14)
#line 374 "matching.m"
{
#line 381 "matching.m"
  {
#line 381 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 381 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_24_24;
#line 381 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_29_29;
#line 381 "matching.m"
    MR_Word backend_libs__matching__Costs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 381 "matching.m"
    MR_Word backend_libs__matching__Benefits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
#line 381 "matching.m"
    MR_Word backend_libs__matching__V_15_15;
#line 381 "matching.m"
    MR_Word backend_libs__matching__V_16_16;
#line 381 "matching.m"
    MR_Word backend_libs__matching__V_18_18;
#line 381 "matching.m"
    MR_Word backend_libs__matching__V_19_19;
#line 381 "matching.m"
    MR_Word backend_libs__matching___FieldVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "matching.m"
    MR_Box backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12;
#line 384 "matching.m"
    MR_Box backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14;

#line 382 "matching.m"
    {
#line 382 "matching.m"
      backend_libs__matching__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 382 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[3]));
#line 382 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_1));
#line 382 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 382 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 3) = ((MR_Box) (backend_libs__matching__Benefits_8));
#line 382 "matching.m"
    }
#line 6705 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_24_24 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 382 "matching.m"
    {
#line 382 "matching.m"
      backend_libs__matching__V_16_16 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_24_24, backend_libs__matching__Costs_7);
    }
#line 382 "matching.m"
    {
#line 382 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_24_24, (MR_Word) &backend_libs__matching_scalar_common_2[0], backend_libs__matching__V_15_15, backend_libs__matching__V_16_16, ((MR_Box) (backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11)), &backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12);
    }
#line 382 "matching.m"
    *backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12 = ((MR_Word) backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12);
#line 384 "matching.m"
    {
#line 384 "matching.m"
      backend_libs__matching__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 384 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[4]));
#line 384 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_2));
#line 384 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 384 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 3) = ((MR_Box) (backend_libs__matching__Costs_7));
#line 384 "matching.m"
    }
#line 6733 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 384 "matching.m"
    {
#line 384 "matching.m"
      backend_libs__matching__V_19_19 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_29_29, backend_libs__matching__Benefits_8);
    }
#line 384 "matching.m"
    {
#line 384 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_29_29, (MR_Word) &backend_libs__matching_scalar_common_2[1], backend_libs__matching__V_18_18, backend_libs__matching__V_19_19, ((MR_Box) (backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13)), &backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14);
    }
#line 384 "matching.m"
    *backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14 = ((MR_Word) backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14);
#line 381 "matching.m"
  }
#line 374 "matching.m"
}

#line 370 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
#line 370 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 370 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 370 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 370 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3,
#line 370 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_4,
#line 370 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_5)
#line 370 "matching.m"
{
#line 370 "matching.m"
  {
#line 370 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 370 "matching.m"
    MR_Word backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12;
#line 370 "matching.m"
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14;

#line 370 "matching.m"
    {
#line 370 "matching.m"
      backend_libs__matching__create_graph_links_5_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12, ((MR_Word) backend_libs__matching__wrapper_arg_4), &backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14);
    }
#line 370 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12));
#line 370 "matching.m"
    *backend_libs__matching__wrapper_arg_5 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14));
#line 370 "matching.m"
  }
#line 370 "matching.m"
}

#line 367 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
#line 367 "matching.m"
  MR_Word backend_libs__matching__CostsBenefits_3)
#line 367 "matching.m"
{
#line 369 "matching.m"
  {
#line 369 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 369 "matching.m"
    MR_Word backend_libs__matching__Graph_4;
#line 369 "matching.m"
    MR_Word backend_libs__matching__CostToBenefitsMap_5;
#line 369 "matching.m"
    MR_Word backend_libs__matching__BenefitToCostsMap_6;
#line 369 "matching.m"
    MR_Word backend_libs__matching__V_8_8;
#line 369 "matching.m"
    MR_Word backend_libs__matching__V_9_9;
#line 370 "matching.m"
    MR_Box backend_libs__matching__conv3_CostToBenefitsMap_5;
#line 370 "matching.m"
    MR_Box backend_libs__matching__conv2_BenefitToCostsMap_6;

#line 370 "matching.m"
    {
#line 370 "matching.m"
      backend_libs__matching__V_8_8 = mercury__map__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2]);
    }
#line 370 "matching.m"
    {
#line 370 "matching.m"
      backend_libs__matching__V_9_9 = mercury__map__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3]);
    }
#line 370 "matching.m"
    {
#line 370 "matching.m"
      mercury__list__foldl2_6_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0, (MR_Word) &backend_libs__matching_scalar_common_2[0], (MR_Word) &backend_libs__matching_scalar_common_2[1], (MR_Word) &backend_libs__matching_scalar_common_2[12], backend_libs__matching__CostsBenefits_3, ((MR_Box) (backend_libs__matching__V_8_8)), &backend_libs__matching__conv3_CostToBenefitsMap_5, ((MR_Box) (backend_libs__matching__V_9_9)), &backend_libs__matching__conv2_BenefitToCostsMap_6);
    }
#line 370 "matching.m"
    backend_libs__matching__CostToBenefitsMap_5 = ((MR_Word) backend_libs__matching__conv3_CostToBenefitsMap_5);
#line 370 "matching.m"
    backend_libs__matching__BenefitToCostsMap_6 = ((MR_Word) backend_libs__matching__conv2_BenefitToCostsMap_6);
#line 372 "matching.m"
    {
#line 372 "matching.m"
      backend_libs__matching__Graph_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_4, 0) = ((MR_Box) (backend_libs__matching__CostToBenefitsMap_5));
#line 372 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_4, 1) = ((MR_Box) (backend_libs__matching__BenefitToCostsMap_6));
#line 372 "matching.m"
    }
#line 369 "matching.m"
    return backend_libs__matching__Graph_4;
#line 369 "matching.m"
  }
#line 367 "matching.m"
}

#line 357 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
#line 357 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 357 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Costs_0_8,
#line 357 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Costs_9)
#line 357 "matching.m"
{
#line 360 "matching.m"
  {
#line 360 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 360 "matching.m"
    MR_Word backend_libs__matching__FieldCosts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "matching.m"
    MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 360 "matching.m"
    MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));

#line 361 "matching.m"
    {
#line 361 "matching.m"
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__FieldCosts_5, backend_libs__matching__STATE_VARIABLE_Costs_0_8, backend_libs__matching__STATE_VARIABLE_Costs_9);
#line 361 "matching.m"
      return;
    }
#line 360 "matching.m"
  }
#line 357 "matching.m"
}

#line 349 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
#line 349 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 349 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Benefits_0_8,
#line 349 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Benefits_9)
#line 349 "matching.m"
{
#line 352 "matching.m"
  {
#line 352 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 352 "matching.m"
    MR_Word backend_libs__matching__FieldBenefits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
#line 352 "matching.m"
    MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "matching.m"
    MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

#line 353 "matching.m"
    {
#line 353 "matching.m"
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__FieldBenefits_6, backend_libs__matching__STATE_VARIABLE_Benefits_0_8, backend_libs__matching__STATE_VARIABLE_Benefits_9);
#line 353 "matching.m"
      return;
    }
#line 352 "matching.m"
  }
#line 349 "matching.m"
}

#line 336 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
#line 336 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 336 "matching.m"
  MR_Word backend_libs__matching__Op_5)
#line 336 "matching.m"
{
#line 338 "matching.m"
  {
#line 338 "matching.m"
    MR_bool backend_libs__matching__succeeded = (backend_libs__matching__Cur_4 > (MR_Integer) 0);
#line 338 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 338 "matching.m"
    if (backend_libs__matching__succeeded)
#line 340 "matching.m"
      {
#line 340 "matching.m"
        MR_Word backend_libs__matching__V_7_7;
#line 340 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 340 "matching.m"
        MR_Integer backend_libs__matching__V_9_9;

#line 340 "matching.m"
        {
#line 340 "matching.m"
          backend_libs__matching__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 0) = ((MR_Box) (backend_libs__matching__Op_5));
#line 340 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 1) = ((MR_Box) (backend_libs__matching__Cur_4));
#line 340 "matching.m"
        }
#line 340 "matching.m"
        backend_libs__matching__V_9_9 = (backend_libs__matching__Cur_4 - (MR_Integer) 1);
#line 340 "matching.m"
        {
#line 340 "matching.m"
          backend_libs__matching__V_8_8 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__V_9_9, backend_libs__matching__Op_5);
        }
#line 338 "matching.m"
        {
#line 338 "matching.m"
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__V_7_7));
#line 338 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 338 "matching.m"
        }
#line 340 "matching.m"
      }
#line 338 "matching.m"
    else
#line 338 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 338 "matching.m"
  }
#line 336 "matching.m"
}

#line 329 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
#line 329 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 329 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 329 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 329 "matching.m"
{
#line 331 "matching.m"
  {
#line 331 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 331 "matching.m"
    MR_Word backend_libs__matching__HeadVar__4_4;

#line 331 "matching.m"
    if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 331 "matching.m"
      {
#line 331 "matching.m"
        return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__HeadVar__2_2, backend_libs__matching__HeadVar__3_3);
      }
#line 331 "matching.m"
    else
#line 333 "matching.m"
      {
#line 333 "matching.m"
        return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__HeadVar__3_3);
      }
#line 331 "matching.m"
    return backend_libs__matching__HeadVar__4_4;
#line 331 "matching.m"
  }
#line 329 "matching.m"
}

#line 320 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
#line 320 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 320 "matching.m"
  MR_Word backend_libs__matching__Op_5)
#line 320 "matching.m"
{
#line 322 "matching.m"
  {
#line 322 "matching.m"
    MR_bool backend_libs__matching__succeeded = (backend_libs__matching__Cur_4 > (MR_Integer) 0);
#line 322 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 322 "matching.m"
    if (backend_libs__matching__succeeded)
#line 324 "matching.m"
      {
#line 324 "matching.m"
        MR_Word backend_libs__matching__V_7_7;
#line 324 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 324 "matching.m"
        MR_Integer backend_libs__matching__V_9_9;

#line 324 "matching.m"
        {
#line 324 "matching.m"
          backend_libs__matching__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 0) = ((MR_Box) (backend_libs__matching__Op_5));
#line 324 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 1) = ((MR_Box) (backend_libs__matching__Cur_4));
#line 324 "matching.m"
        }
#line 324 "matching.m"
        backend_libs__matching__V_9_9 = (backend_libs__matching__Cur_4 - (MR_Integer) 1);
#line 324 "matching.m"
        {
#line 324 "matching.m"
          backend_libs__matching__V_8_8 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__V_9_9, backend_libs__matching__Op_5);
        }
#line 322 "matching.m"
        {
#line 322 "matching.m"
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__V_7_7));
#line 322 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 322 "matching.m"
        }
#line 324 "matching.m"
      }
#line 322 "matching.m"
    else
#line 322 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 322 "matching.m"
  }
#line 320 "matching.m"
}

#line 313 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
#line 313 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 313 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 313 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 313 "matching.m"
{
#line 315 "matching.m"
  {
#line 315 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 315 "matching.m"
    MR_Word backend_libs__matching__HeadVar__4_4;

#line 315 "matching.m"
    if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "matching.m"
      {
#line 317 "matching.m"
        {
#line 317 "matching.m"
          return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 317 "matching.m"
      }
#line 315 "matching.m"
    else
#line 315 "matching.m"
      {
#line 315 "matching.m"
        return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__HeadVar__2_2, backend_libs__matching__HeadVar__3_3);
      }
#line 315 "matching.m"
    return backend_libs__matching__HeadVar__4_4;
#line 315 "matching.m"
  }
#line 313 "matching.m"
}

#line 298 "matching.m"
static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
#line 298 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 298 "matching.m"
  MR_Word backend_libs__matching__FieldVar_2,
#line 298 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0_3,
#line 298 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostOps_4)
#line 298 "matching.m"
{
#line 301 "matching.m"
  while (MR_TRUE)
#line 301 "matching.m"
    {
#line 301 "matching.m"
      /* tailcall optimized into a loop */
#line 301 "matching.m"
      {
#line 301 "matching.m"
        MR_bool backend_libs__matching__succeeded;

#line 301 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "matching.m"
          *backend_libs__matching__STATE_VARIABLE_CostOps_4 = backend_libs__matching__STATE_VARIABLE_CostOps_0_3;
#line 301 "matching.m"
        else
#line 303 "matching.m"
          {
#line 303 "matching.m"
            MR_Integer backend_libs__matching__SegmentNum_9;
#line 303 "matching.m"
            MR_Word backend_libs__matching__SegmentVars_10;
#line 303 "matching.m"
            MR_Word backend_libs__matching__AfterFlush_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 303 "matching.m"
            MR_Word backend_libs__matching__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 303 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_17_17;

#line 302 "matching.m"
            backend_libs__matching__SegmentNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_16_16, (MR_Integer) 0)));
#line 302 "matching.m"
            backend_libs__matching__SegmentVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_16_16, (MR_Integer) 1)));
#line 304 "matching.m"
            {
#line 304 "matching.m"
              backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__SegmentVars_10, backend_libs__matching__FieldVar_2);
            }
#line 306 "matching.m"
            if (backend_libs__matching__succeeded)
#line 305 "matching.m"
              {
#line 305 "matching.m"
                MR_Word backend_libs__matching__V_18_18;

#line 305 "matching.m"
                {
#line 305 "matching.m"
                  backend_libs__matching__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__V_18_18, 0) = ((MR_Box) (backend_libs__matching__SegmentNum_9));
#line 305 "matching.m"
                }
#line 305 "matching.m"
                {
#line 305 "matching.m"
                  backend_libs__matching__STATE_VARIABLE_CostOps_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_CostOps_17_17, 0) = ((MR_Box) (backend_libs__matching__V_18_18));
#line 305 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_CostOps_17_17, 1) = ((MR_Box) (backend_libs__matching__STATE_VARIABLE_CostOps_0_3));
#line 305 "matching.m"
                }
#line 305 "matching.m"
              }
#line 306 "matching.m"
            else
#line 305 "matching.m"
              backend_libs__matching__STATE_VARIABLE_CostOps_17_17 = backend_libs__matching__STATE_VARIABLE_CostOps_0_3;
#line 309 "matching.m"
            /* direct tailcall eliminated */
#line 309 "matching.m"
            {
#line 309 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__AfterFlush_11;
#line 309 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0__tmp_copy_3 = backend_libs__matching__STATE_VARIABLE_CostOps_17_17;

#line 309 "matching.m"
              backend_libs__matching__STATE_VARIABLE_CostOps_0_3 = backend_libs__matching__STATE_VARIABLE_CostOps_0__tmp_copy_3;
#line 309 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 309 "matching.m"
            }
#line 309 "matching.m"
            continue;
#line 303 "matching.m"
          }
#line 301 "matching.m"
      }
#line 301 "matching.m"
      break;
#line 301 "matching.m"
    }
#line 298 "matching.m"
}

#line 290 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_2(
#line 290 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 290 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 290 "matching.m"
{
#line 290 "matching.m"
  {
#line 290 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 290 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 290 "matching.m"
    MR_Word backend_libs__matching__conv1_HeadVar__4_4;

#line 290 "matching.m"
    {
#line 290 "matching.m"
      backend_libs__matching__conv1_HeadVar__4_4 = backend_libs__matching__replicate_benefit_op_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 290 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv1_HeadVar__4_4));
#line 290 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 290 "matching.m"
  }
#line 290 "matching.m"
}

#line 283 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0_1(
#line 283 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 283 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 283 "matching.m"
{
#line 283 "matching.m"
  {
#line 283 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 283 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 283 "matching.m"
    MR_Word backend_libs__matching__conv0_HeadVar__4_4;

#line 283 "matching.m"
    {
#line 283 "matching.m"
      backend_libs__matching__conv0_HeadVar__4_4 = backend_libs__matching__replicate_cost_op_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 283 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__4_4));
#line 283 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 283 "matching.m"
  }
#line 283 "matching.m"
}

#line 260 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
#line 260 "matching.m"
  MR_Word backend_libs__matching__CellVar_8,
#line 260 "matching.m"
  MR_Word backend_libs__matching__BeforeFlush_9,
#line 260 "matching.m"
  MR_Word backend_libs__matching__AfterFlush_10,
#line 260 "matching.m"
  MR_Word backend_libs__matching__CellVarFlushedLater_11,
#line 260 "matching.m"
  MR_Word backend_libs__matching__MatchingParams_12,
#line 260 "matching.m"
  MR_Word backend_libs__matching__FieldVar_13)
#line 260 "matching.m"
{
#line 265 "matching.m"
  {
#line 265 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 265 "matching.m"
    MR_Word backend_libs__matching__FieldCostsBenefits_14;
#line 265 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_65_65;
#line 265 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_70_70;
#line 265 "matching.m"
    MR_Word backend_libs__matching__CostOps0_15;
#line 265 "matching.m"
    MR_Word backend_libs__matching__CostOps_16;
#line 265 "matching.m"
    MR_Word backend_libs__matching__BenefitOps0_17;
#line 265 "matching.m"
    MR_Word backend_libs__matching__BenefitOps_18;
#line 265 "matching.m"
    MR_Integer backend_libs__matching__CellVarStoreCost_19;
#line 265 "matching.m"
    MR_Integer backend_libs__matching__CellVarLoadCost_20;
#line 265 "matching.m"
    MR_Word backend_libs__matching__CostNodeLists_21;
#line 265 "matching.m"
    MR_Word backend_libs__matching__CostNodes_22;
#line 265 "matching.m"
    MR_Word backend_libs__matching__CostNodeSet_23;
#line 265 "matching.m"
    MR_Integer backend_libs__matching__FieldVarStoreCost_24;
#line 265 "matching.m"
    MR_Integer backend_libs__matching__FieldVarLoadCost_25;
#line 265 "matching.m"
    MR_Word backend_libs__matching__BenefitNodeLists_26;
#line 265 "matching.m"
    MR_Word backend_libs__matching__BenefitNodes_27;
#line 265 "matching.m"
    MR_Word backend_libs__matching__BenefitNodeSet_28;
#line 265 "matching.m"
    MR_Word backend_libs__matching__V_31_31;
#line 265 "matching.m"
    MR_Word backend_libs__matching__V_34_34;
#line 265 "matching.m"
    MR_Word backend_libs__matching__V_35_35;
#line 281 "matching.m"
    MR_Integer backend_libs__matching__V_37_37;
#line 281 "matching.m"
    MR_Integer backend_libs__matching__V_38_38;
#line 281 "matching.m"
    MR_Integer backend_libs__matching__V_39_39;
#line 281 "matching.m"
    MR_Integer backend_libs__matching__V_40_40;
#line 281 "matching.m"
    MR_Word backend_libs__matching__V_41_41;
#line 288 "matching.m"
    MR_Integer backend_libs__matching__V_48_48;
#line 288 "matching.m"
    MR_Integer backend_libs__matching__V_49_49;
#line 288 "matching.m"
    MR_Integer backend_libs__matching__V_51_51;
#line 288 "matching.m"
    MR_Integer backend_libs__matching__V_52_52;
#line 288 "matching.m"
    MR_Word backend_libs__matching__V_53_53;

#line 266 "matching.m"
    {
#line 266 "matching.m"
      backend_libs__matching__find_cell_var_loads_for_field_4_p_0(backend_libs__matching__AfterFlush_10, backend_libs__matching__FieldVar_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__matching__CostOps0_15);
    }
#line 270 "matching.m"
    if ((backend_libs__matching__CellVarFlushedLater_11 == (MR_Integer) 0))
#line 271 "matching.m"
      {
#line 272 "matching.m"
        {
#line 272 "matching.m"
          backend_libs__matching__CostOps_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__CostOps_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__CostOps_16, 1) = ((MR_Box) (backend_libs__matching__CostOps0_15));
#line 272 "matching.m"
        }
#line 271 "matching.m"
      }
#line 270 "matching.m"
    else
#line 269 "matching.m"
      backend_libs__matching__CostOps_16 = backend_libs__matching__CostOps0_15;
#line 274 "matching.m"
    {
#line 274 "matching.m"
      backend_libs__matching__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 274 "matching.m"
      MR_hl_field(MR_mktag(1), backend_libs__matching__V_31_31, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
#line 274 "matching.m"
    }
#line 274 "matching.m"
    {
#line 274 "matching.m"
      backend_libs__matching__BenefitOps0_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "matching.m"
      MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps0_17, 0) = ((MR_Box) (backend_libs__matching__V_31_31));
#line 274 "matching.m"
      MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps0_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "matching.m"
    }
#line 275 "matching.m"
    {
#line 275 "matching.m"
      backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__BeforeFlush_9, backend_libs__matching__CellVar_8);
    }
#line 277 "matching.m"
    if (backend_libs__matching__succeeded)
#line 276 "matching.m"
      backend_libs__matching__BenefitOps_18 = backend_libs__matching__BenefitOps0_17;
#line 277 "matching.m"
    else
#line 278 "matching.m"
      {
#line 278 "matching.m"
        MR_Word backend_libs__matching__V_33_33;

#line 278 "matching.m"
        {
#line 278 "matching.m"
          backend_libs__matching__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
#line 278 "matching.m"
        }
#line 278 "matching.m"
        {
#line 278 "matching.m"
          backend_libs__matching__BenefitOps_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps_18, 0) = ((MR_Box) (backend_libs__matching__V_33_33));
#line 278 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps_18, 1) = ((MR_Box) (backend_libs__matching__BenefitOps0_17));
#line 278 "matching.m"
        }
#line 278 "matching.m"
      }
#line 281 "matching.m"
    backend_libs__matching__CellVarStoreCost_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 0)));
#line 281 "matching.m"
    backend_libs__matching__CellVarLoadCost_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 1)));
#line 281 "matching.m"
    backend_libs__matching__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 2)));
#line 281 "matching.m"
    backend_libs__matching__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 3)));
#line 281 "matching.m"
    backend_libs__matching__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 4)));
#line 281 "matching.m"
    backend_libs__matching__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 5)));
#line 281 "matching.m"
    backend_libs__matching__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 6)));
#line 283 "matching.m"
    {
#line 283 "matching.m"
      backend_libs__matching__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 283 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_34_34, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[1]));
#line 283 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_34_34, 1) = ((MR_Box) (backend_libs__matching__find_costs_benefits_6_f_0_1));
#line 283 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 283 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_34_34, 3) = ((MR_Box) (backend_libs__matching__CellVarStoreCost_19));
#line 283 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_34_34, 4) = ((MR_Box) (backend_libs__matching__CellVarLoadCost_20));
#line 283 "matching.m"
    }
#line 283 "matching.m"
    {
#line 283 "matching.m"
      backend_libs__matching__CostNodeLists_21 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0, (MR_Word) &backend_libs__matching_scalar_common_1[4], backend_libs__matching__V_34_34, backend_libs__matching__CostOps_16);
    }
#line 7509 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_65_65 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 286 "matching.m"
    {
#line 286 "matching.m"
      mercury__list__condense_2_p_0(backend_libs__matching__TypeCtorInfo_65_65, backend_libs__matching__CostNodeLists_21, &backend_libs__matching__CostNodes_22);
    }
#line 287 "matching.m"
    {
#line 287 "matching.m"
      mercury__set__list_to_set_2_p_0(backend_libs__matching__TypeCtorInfo_65_65, backend_libs__matching__CostNodes_22, &backend_libs__matching__CostNodeSet_23);
    }
#line 288 "matching.m"
    backend_libs__matching__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 0)));
#line 288 "matching.m"
    backend_libs__matching__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 1)));
#line 288 "matching.m"
    backend_libs__matching__FieldVarStoreCost_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 2)));
#line 288 "matching.m"
    backend_libs__matching__FieldVarLoadCost_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 3)));
#line 288 "matching.m"
    backend_libs__matching__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 4)));
#line 288 "matching.m"
    backend_libs__matching__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 5)));
#line 288 "matching.m"
    backend_libs__matching__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 6)));
#line 290 "matching.m"
    {
#line 290 "matching.m"
      backend_libs__matching__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 290 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_35_35, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[2]));
#line 290 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_35_35, 1) = ((MR_Box) (backend_libs__matching__find_costs_benefits_6_f_0_2));
#line 290 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 290 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_35_35, 3) = ((MR_Box) (backend_libs__matching__FieldVarStoreCost_24));
#line 290 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_35_35, 4) = ((MR_Box) (backend_libs__matching__FieldVarLoadCost_25));
#line 290 "matching.m"
    }
#line 290 "matching.m"
    {
#line 290 "matching.m"
      backend_libs__matching__BenefitNodeLists_26 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0, (MR_Word) &backend_libs__matching_scalar_common_1[5], backend_libs__matching__V_35_35, backend_libs__matching__BenefitOps_18);
    }
#line 7556 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_70_70 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 293 "matching.m"
    {
#line 293 "matching.m"
      mercury__list__condense_2_p_0(backend_libs__matching__TypeCtorInfo_70_70, backend_libs__matching__BenefitNodeLists_26, &backend_libs__matching__BenefitNodes_27);
    }
#line 294 "matching.m"
    {
#line 294 "matching.m"
      mercury__set__list_to_set_2_p_0(backend_libs__matching__TypeCtorInfo_70_70, backend_libs__matching__BenefitNodes_27, &backend_libs__matching__BenefitNodeSet_28);
    }
#line 295 "matching.m"
    {
#line 295 "matching.m"
      backend_libs__matching__FieldCostsBenefits_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 295 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
#line 295 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 1) = ((MR_Box) (backend_libs__matching__CostNodeSet_23));
#line 295 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 2) = ((MR_Box) (backend_libs__matching__BenefitNodeSet_28));
#line 295 "matching.m"
    }
#line 265 "matching.m"
    return backend_libs__matching__FieldCostsBenefits_14;
#line 265 "matching.m"
  }
#line 260 "matching.m"
}

#line 248 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
#line 248 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 248 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 248 "matching.m"
{
#line 251 "matching.m"
  {
#line 251 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 251 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 251 "matching.m"
    if ((backend_libs__matching__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "matching.m"
    else
#line 252 "matching.m"
      {
#line 252 "matching.m"
        MR_Word backend_libs__matching__Segment_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "matching.m"
        MR_Word backend_libs__matching__Segments_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 252 "matching.m"
        MR_Word backend_libs__matching__V_9_9;
#line 252 "matching.m"
        MR_Integer backend_libs__matching__V_10_10;

#line 253 "matching.m"
        {
#line 253 "matching.m"
          backend_libs__matching__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, 0) = ((MR_Box) (backend_libs__matching__HeadVar__1_1));
#line 253 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, 1) = ((MR_Box) (backend_libs__matching__Segment_6));
#line 253 "matching.m"
        }
#line 253 "matching.m"
        backend_libs__matching__V_10_10 = (backend_libs__matching__HeadVar__1_1 + (MR_Integer) 1);
#line 253 "matching.m"
        {
#line 253 "matching.m"
          backend_libs__matching__V_9_9 = backend_libs__matching__number_segments_2_f_0(backend_libs__matching__V_10_10, backend_libs__matching__Segments_7);
        }
#line 252 "matching.m"
        {
#line 252 "matching.m"
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 252 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__V_9_9));
#line 252 "matching.m"
        }
#line 252 "matching.m"
      }
#line 251 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 251 "matching.m"
  }
#line 248 "matching.m"
}

#line 241 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
#line 241 "matching.m"
  MR_Word backend_libs__matching__CellVar_5,
#line 241 "matching.m"
  MR_Word backend_libs__matching__CandidateArgVars_6,
#line 241 "matching.m"
  MR_Word backend_libs__matching__SegmentVars0_7,
#line 241 "matching.m"
  MR_Word * backend_libs__matching__SegmentVars_8)
#line 241 "matching.m"
{
#line 244 "matching.m"
  {
#line 244 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 244 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_10_10;

#line 245 "matching.m"
    {
#line 245 "matching.m"
      backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__SegmentVars0_7, backend_libs__matching__CellVar_5);
    }
#line 245 "matching.m"
    backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 244 "matching.m"
    if (backend_libs__matching__succeeded)
#line 244 "matching.m"
      {
#line 7689 "backend_libs.matching.c"
        backend_libs__matching__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 246 "matching.m"
        {
#line 246 "matching.m"
          *backend_libs__matching__SegmentVars_8 = parse_tree__set_of_var__intersect_2_f_0(backend_libs__matching__TypeCtorInfo_10_10, backend_libs__matching__SegmentVars0_7, backend_libs__matching__CandidateArgVars_6);
        }
#line 246 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 244 "matching.m"
      }
#line 244 "matching.m"
    return backend_libs__matching__succeeded;
#line 244 "matching.m"
  }
#line 241 "matching.m"
}

#line 198 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_9(
#line 198 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 198 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 198 "matching.m"
{
#line 198 "matching.m"
  {
#line 198 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 198 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 198 "matching.m"
    MR_Word backend_libs__matching__conv11_CostOp_3;

#line 198 "matching.m"
    {
#line 198 "matching.m"
      backend_libs__matching__conv11_CostOp_3 = backend_libs__matching__project_cost_op_1_f_0(((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 198 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv11_CostOp_3));
#line 198 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 198 "matching.m"
  }
#line 198 "matching.m"
}

#line 197 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_8(
#line 197 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 197 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 197 "matching.m"
{
#line 197 "matching.m"
  {
#line 197 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 197 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 197 "matching.m"
    MR_Word backend_libs__matching__conv10_BenefitOp_3;

#line 197 "matching.m"
    {
#line 197 "matching.m"
      backend_libs__matching__conv10_BenefitOp_3 = backend_libs__matching__project_benefit_op_1_f_0(((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 197 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv10_BenefitOp_3));
#line 197 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 197 "matching.m"
  }
#line 197 "matching.m"
}

#line 195 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_7(
#line 195 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 195 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 195 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 195 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 195 "matching.m"
{
#line 195 "matching.m"
  {
#line 195 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 195 "matching.m"
    MR_Word backend_libs__matching__conv8_STATE_VARIABLE_Costs_9;

#line 195 "matching.m"
    {
#line 195 "matching.m"
      backend_libs__matching__gather_costs_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv8_STATE_VARIABLE_Costs_9);
    }
#line 195 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv8_STATE_VARIABLE_Costs_9));
#line 195 "matching.m"
  }
#line 195 "matching.m"
}

#line 193 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_6(
#line 193 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 193 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 193 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 193 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 193 "matching.m"
{
#line 193 "matching.m"
  {
#line 193 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 193 "matching.m"
    MR_Word backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9;

#line 193 "matching.m"
    {
#line 193 "matching.m"
      backend_libs__matching__gather_benefits_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9);
    }
#line 193 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9));
#line 193 "matching.m"
  }
#line 193 "matching.m"
}

#line 191 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_5(
#line 191 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 191 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 191 "matching.m"
{
#line 191 "matching.m"
  {
#line 191 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 191 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;

#line 191 "matching.m"
    {
#line 191 "matching.m"
      return backend_libs__matching__succeeded = backend_libs__matching__realized_costs_benefits_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 191 "matching.m"
    return backend_libs__matching__succeeded;
#line 191 "matching.m"
  }
#line 191 "matching.m"
}

#line 179 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_4(
#line 179 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 179 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 179 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 179 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 179 "matching.m"
{
#line 179 "matching.m"
  {
#line 179 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 179 "matching.m"
    MR_Word backend_libs__matching__conv4_STATE_VARIABLE_Costs_9;

#line 179 "matching.m"
    {
#line 179 "matching.m"
      backend_libs__matching__gather_costs_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv4_STATE_VARIABLE_Costs_9);
    }
#line 179 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv4_STATE_VARIABLE_Costs_9));
#line 179 "matching.m"
  }
#line 179 "matching.m"
}

#line 178 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_3(
#line 178 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 178 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 178 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 178 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 178 "matching.m"
{
#line 178 "matching.m"
  {
#line 178 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 178 "matching.m"
    MR_Word backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9;

#line 178 "matching.m"
    {
#line 178 "matching.m"
      backend_libs__matching__gather_benefits_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9);
    }
#line 178 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9));
#line 178 "matching.m"
  }
#line 178 "matching.m"
}

#line 174 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_2(
#line 174 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 174 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 174 "matching.m"
{
#line 174 "matching.m"
  {
#line 174 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 174 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 174 "matching.m"
    MR_Word backend_libs__matching__conv1_FieldCostsBenefits_14;

#line 174 "matching.m"
    {
#line 174 "matching.m"
      backend_libs__matching__conv1_FieldCostsBenefits_14 = backend_libs__matching__find_costs_benefits_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 7))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 174 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv1_FieldCostsBenefits_14));
#line 174 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 174 "matching.m"
  }
#line 174 "matching.m"
}

#line 171 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_1(
#line 171 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 171 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 171 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_2)
#line 171 "matching.m"
{
#line 171 "matching.m"
  {
#line 171 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 171 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 171 "matching.m"
    MR_Word backend_libs__matching__conv0_SegmentVars_8;

#line 171 "matching.m"
    {
#line 171 "matching.m"
      backend_libs__matching__succeeded = backend_libs__matching__simplify_segment_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__matching__wrapper_arg_1), &backend_libs__matching__conv0_SegmentVars_8);
    }
#line 171 "matching.m"
    if (backend_libs__matching__succeeded)
#line 171 "matching.m"
      {
#line 171 "matching.m"
        *backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv0_SegmentVars_8));
#line 171 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 171 "matching.m"
      }
#line 171 "matching.m"
    return backend_libs__matching__succeeded;
#line 171 "matching.m"
  }
#line 171 "matching.m"
}

#line 80 "matching.m"
void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0(
#line 80 "matching.m"
  MR_Word backend_libs__matching__CellVar_10,
#line 80 "matching.m"
  MR_Word backend_libs__matching__CandidateFieldVars_11,
#line 80 "matching.m"
  MR_Word backend_libs__matching__CellVarFlushedLater_12,
#line 80 "matching.m"
  MR_Word backend_libs__matching__BeforeFlush_13,
#line 80 "matching.m"
  MR_Word backend_libs__matching__AfterFlush_14,
#line 80 "matching.m"
  MR_Word backend_libs__matching__MatchingParams_15,
#line 80 "matching.m"
  MR_Word * backend_libs__matching__RealizedBenefitNodes_16,
#line 80 "matching.m"
  MR_Word * backend_libs__matching__RealizedCostNodes_17,
#line 80 "matching.m"
  MR_Word * backend_libs__matching__ViaCellVars_18)
#line 80 "matching.m"
{
#line 155 "matching.m"
  {
#line 155 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_93_93;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeInfo_96_96;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_98_98;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_104_104;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeInfo_105_105;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_109_109;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeInfo_110_110;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_118_118;
#line 155 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_121_121;
#line 155 "matching.m"
    MR_Word backend_libs__matching__InclAllCand_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 6)));
#line 155 "matching.m"
    MR_Word backend_libs__matching__OccurringCandidateFieldVars_21;
#line 155 "matching.m"
    MR_Word backend_libs__matching__NonOccurringCandidateFieldVars_22;
#line 155 "matching.m"
    MR_Word backend_libs__matching__OccurringCandidateFieldVarList_23;
#line 155 "matching.m"
    MR_Word backend_libs__matching__FilteredAfterFlush_24;
#line 155 "matching.m"
    MR_Word backend_libs__matching__NumberedAfterFlush_25;
#line 155 "matching.m"
    MR_Word backend_libs__matching__CostsBenefits_26;
#line 155 "matching.m"
    MR_Word backend_libs__matching__BenefitNodes_27;
#line 155 "matching.m"
    MR_Word backend_libs__matching__CostNodes_28;
#line 155 "matching.m"
    MR_Word backend_libs__matching__BenefitNodeList_29;
#line 155 "matching.m"
    MR_Word backend_libs__matching__CostNodeList_30;
#line 155 "matching.m"
    MR_Word backend_libs__matching__Graph_31;
#line 155 "matching.m"
    MR_Word backend_libs__matching__MaximalMatching_32;
#line 155 "matching.m"
    MR_Word backend_libs__matching__MaximalMatchingCostToBenefit_33;
#line 155 "matching.m"
    MR_Word backend_libs__matching__UnMatchedCostNodes_35;
#line 155 "matching.m"
    MR_Word backend_libs__matching__MarkedBenefitNodes_36;
#line 155 "matching.m"
    MR_Word backend_libs__matching__ViaCellOccurringVars0_37;
#line 155 "matching.m"
    MR_Word backend_libs__matching__RealizedCostsBenefits_38;
#line 155 "matching.m"
    MR_Word backend_libs__matching__RealizedBenefitOps_39;
#line 155 "matching.m"
    MR_Word backend_libs__matching__RealizedCostOps_40;
#line 155 "matching.m"
    MR_Word backend_libs__matching__RealizedBenefitNodeList_41;
#line 155 "matching.m"
    MR_Word backend_libs__matching__RealizedCostNodeList_42;
#line 155 "matching.m"
    MR_Word backend_libs__matching__RealizedBenefitOpList_43;
#line 155 "matching.m"
    MR_Word backend_libs__matching__RealizedCostOpList_44;
#line 155 "matching.m"
    MR_Integer backend_libs__matching__RealizedBenefitNodeCount_45;
#line 155 "matching.m"
    MR_Integer backend_libs__matching__RealizedBenefitOpCount_46;
#line 155 "matching.m"
    MR_Integer backend_libs__matching__RealizedCostNodeCount_47;
#line 155 "matching.m"
    MR_Integer backend_libs__matching__RealizedCostOpCount_48;
#line 155 "matching.m"
    MR_Integer backend_libs__matching__OpRatio_49;
#line 155 "matching.m"
    MR_Integer backend_libs__matching__NodeRatio_50;
#line 155 "matching.m"
    MR_Word backend_libs__matching__ViaCellOccurringVars_51;
#line 155 "matching.m"
    MR_Word backend_libs__matching__V_53_53;
#line 155 "matching.m"
    MR_Word backend_libs__matching__V_55_55;
#line 155 "matching.m"
    MR_Word backend_libs__matching__V_57_57;
#line 155 "matching.m"
    MR_Word backend_libs__matching__V_59_59;
#line 155 "matching.m"
    MR_Word backend_libs__matching__V_60_60;
#line 155 "matching.m"
    MR_Word backend_libs__matching__V_62_62;
#line 155 "matching.m"
    MR_Word backend_libs__matching__V_64_64;
#line 156 "matching.m"
    MR_Integer backend_libs__matching__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 0)));
#line 156 "matching.m"
    MR_Integer backend_libs__matching__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 1)));
#line 156 "matching.m"
    MR_Integer backend_libs__matching__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 2)));
#line 156 "matching.m"
    MR_Integer backend_libs__matching__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 3)));
#line 156 "matching.m"
    MR_Integer backend_libs__matching__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 4)));
#line 156 "matching.m"
    MR_Integer backend_libs__matching__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 5)));
#line 178 "matching.m"
    MR_Box backend_libs__matching__conv3_BenefitNodes_27;
#line 179 "matching.m"
    MR_Box backend_libs__matching__conv5_CostNodes_28;
#line 184 "matching.m"
    MR_Word backend_libs__matching__V_34_34;
#line 193 "matching.m"
    MR_Box backend_libs__matching__conv7_RealizedBenefitNodes_16;
#line 195 "matching.m"
    MR_Box backend_libs__matching__conv9_RealizedCostNodes_17;
#line 207 "matching.m"
    MR_Integer backend_libs__matching__V_79_79;
#line 207 "matching.m"
    MR_Integer backend_libs__matching__V_80_80;
#line 207 "matching.m"
    MR_Integer backend_libs__matching__V_81_81;
#line 207 "matching.m"
    MR_Integer backend_libs__matching__V_82_82;
#line 207 "matching.m"
    MR_Word backend_libs__matching__V_84_84;
#line 210 "matching.m"
    MR_Integer backend_libs__matching__V_67_67;
#line 210 "matching.m"
    MR_Integer backend_libs__matching__V_68_68;
#line 210 "matching.m"
    MR_Integer backend_libs__matching__V_70_70;
#line 210 "matching.m"
    MR_Integer backend_libs__matching__V_71_71;
#line 210 "matching.m"
    MR_Integer backend_libs__matching__V_72_72;

#line 164 "matching.m"
    if ((backend_libs__matching__InclAllCand_19 == (MR_Integer) 0))
#line 158 "matching.m"
      {
#line 158 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 158 "matching.m"
        MR_Word backend_libs__matching__AllSegmentVars_20;
#line 158 "matching.m"
        MR_Word backend_libs__matching__V_52_52;

#line 159 "matching.m"
        {
#line 159 "matching.m"
          backend_libs__matching__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__V_52_52, 0) = ((MR_Box) (backend_libs__matching__BeforeFlush_13));
#line 159 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__V_52_52, 1) = ((MR_Box) (backend_libs__matching__AfterFlush_14));
#line 159 "matching.m"
        }
#line 159 "matching.m"
        {
#line 159 "matching.m"
          backend_libs__matching__AllSegmentVars_20 = parse_tree__set_of_var__union_list_1_f_0(backend_libs__matching__TypeCtorInfo_91_91, backend_libs__matching__V_52_52);
        }
#line 160 "matching.m"
        {
#line 160 "matching.m"
          parse_tree__set_of_var__intersect_3_p_0(backend_libs__matching__TypeCtorInfo_91_91, backend_libs__matching__CandidateFieldVars_11, backend_libs__matching__AllSegmentVars_20, &backend_libs__matching__OccurringCandidateFieldVars_21);
        }
#line 162 "matching.m"
        {
#line 162 "matching.m"
          parse_tree__set_of_var__difference_3_p_0(backend_libs__matching__TypeCtorInfo_91_91, backend_libs__matching__CandidateFieldVars_11, backend_libs__matching__OccurringCandidateFieldVars_21, &backend_libs__matching__NonOccurringCandidateFieldVars_22);
        }
#line 158 "matching.m"
      }
#line 164 "matching.m"
    else
#line 165 "matching.m"
      {
#line 166 "matching.m"
        backend_libs__matching__OccurringCandidateFieldVars_21 = backend_libs__matching__CandidateFieldVars_11;
#line 167 "matching.m"
        {
#line 167 "matching.m"
          backend_libs__matching__NonOccurringCandidateFieldVars_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 165 "matching.m"
      }
#line 8216 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_93_93 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 169 "matching.m"
    {
#line 169 "matching.m"
      backend_libs__matching__OccurringCandidateFieldVarList_23 = parse_tree__set_of_var__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_93_93, backend_libs__matching__OccurringCandidateFieldVars_21);
    }
#line 171 "matching.m"
    {
#line 171 "matching.m"
      backend_libs__matching__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 171 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[0]));
#line 171 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_1));
#line 171 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 171 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 3) = ((MR_Box) (backend_libs__matching__CellVar_10));
#line 171 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 4) = ((MR_Box) (backend_libs__matching__OccurringCandidateFieldVars_21));
#line 171 "matching.m"
    }
#line 8239 "backend_libs.matching.c"
    backend_libs__matching__TypeInfo_96_96 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
#line 171 "matching.m"
    {
#line 171 "matching.m"
      mercury__list__filter_map_3_p_0(backend_libs__matching__TypeInfo_96_96, backend_libs__matching__TypeInfo_96_96, backend_libs__matching__V_53_53, backend_libs__matching__AfterFlush_14, &backend_libs__matching__FilteredAfterFlush_24);
    }
#line 173 "matching.m"
    {
#line 173 "matching.m"
      backend_libs__matching__NumberedAfterFlush_25 = backend_libs__matching__number_segments_2_f_0((MR_Integer) 2, backend_libs__matching__FilteredAfterFlush_24);
    }
#line 8251 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_98_98 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0;
#line 174 "matching.m"
    {
#line 174 "matching.m"
      backend_libs__matching__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_4[0]));
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_2));
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 3) = ((MR_Box) (backend_libs__matching__CellVar_10));
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 4) = ((MR_Box) (backend_libs__matching__BeforeFlush_13));
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 5) = ((MR_Box) (backend_libs__matching__NumberedAfterFlush_25));
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 6) = ((MR_Box) (backend_libs__matching__CellVarFlushedLater_12));
#line 174 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_55_55, 7) = ((MR_Box) (backend_libs__matching__MatchingParams_15));
#line 174 "matching.m"
    }
#line 174 "matching.m"
    {
#line 174 "matching.m"
      backend_libs__matching__CostsBenefits_26 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching_scalar_common_1[1], backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__V_55_55, backend_libs__matching__OccurringCandidateFieldVarList_23);
    }
#line 8280 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_104_104 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 178 "matching.m"
    {
#line 178 "matching.m"
      backend_libs__matching__V_57_57 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_104_104);
    }
#line 8287 "backend_libs.matching.c"
    backend_libs__matching__TypeInfo_105_105 = (MR_Word) &backend_libs__matching_scalar_common_1[2];
#line 178 "matching.m"
    {
#line 178 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_105_105, (MR_Word) &backend_libs__matching_scalar_common_2[6], backend_libs__matching__CostsBenefits_26, ((MR_Box) (backend_libs__matching__V_57_57)), &backend_libs__matching__conv3_BenefitNodes_27);
    }
#line 178 "matching.m"
    backend_libs__matching__BenefitNodes_27 = ((MR_Word) backend_libs__matching__conv3_BenefitNodes_27);
#line 8296 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 179 "matching.m"
    {
#line 179 "matching.m"
      backend_libs__matching__V_59_59 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_109_109);
    }
#line 8303 "backend_libs.matching.c"
    backend_libs__matching__TypeInfo_110_110 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
#line 179 "matching.m"
    {
#line 179 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_110_110, (MR_Word) &backend_libs__matching_scalar_common_2[7], backend_libs__matching__CostsBenefits_26, ((MR_Box) (backend_libs__matching__V_59_59)), &backend_libs__matching__conv5_CostNodes_28);
    }
#line 179 "matching.m"
    backend_libs__matching__CostNodes_28 = ((MR_Word) backend_libs__matching__conv5_CostNodes_28);
#line 180 "matching.m"
    {
#line 180 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_104_104, backend_libs__matching__BenefitNodes_27, &backend_libs__matching__BenefitNodeList_29);
    }
#line 181 "matching.m"
    {
#line 181 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_109_109, backend_libs__matching__CostNodes_28, &backend_libs__matching__CostNodeList_30);
    }
#line 182 "matching.m"
    {
#line 182 "matching.m"
      backend_libs__matching__Graph_31 = backend_libs__matching__create_graph_1_f_0(backend_libs__matching__CostsBenefits_26);
    }
#line 183 "matching.m"
    {
#line 183 "matching.m"
      backend_libs__matching__MaximalMatching_32 = backend_libs__matching__maximal_matching_2_f_0(backend_libs__matching__BenefitNodeList_29, backend_libs__matching__Graph_31);
    }
#line 184 "matching.m"
    backend_libs__matching__MaximalMatchingCostToBenefit_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MaximalMatching_32, (MR_Integer) 0)));
#line 184 "matching.m"
    backend_libs__matching__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MaximalMatching_32, (MR_Integer) 1)));
#line 185 "matching.m"
    {
#line 185 "matching.m"
      backend_libs__matching__UnMatchedCostNodes_35 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(backend_libs__matching__CostNodeList_30, backend_libs__matching__MaximalMatchingCostToBenefit_33);
    }
#line 187 "matching.m"
    {
#line 187 "matching.m"
      backend_libs__matching__MarkedBenefitNodes_36 = backend_libs__matching__reachable_by_alternating_path_3_f_0(backend_libs__matching__UnMatchedCostNodes_35, backend_libs__matching__Graph_31, backend_libs__matching__MaximalMatching_32);
    }
#line 189 "matching.m"
    {
#line 189 "matching.m"
      backend_libs__matching__ViaCellOccurringVars0_37 = backend_libs__matching__compute_via_cell_vars_2_f_0(backend_libs__matching__CostsBenefits_26, backend_libs__matching__MarkedBenefitNodes_36);
    }
#line 191 "matching.m"
    {
#line 191 "matching.m"
      backend_libs__matching__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 191 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_6[0]));
#line 191 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_5));
#line 191 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 191 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 3) = ((MR_Box) (backend_libs__matching__ViaCellOccurringVars0_37));
#line 191 "matching.m"
    }
#line 191 "matching.m"
    {
#line 191 "matching.m"
      mercury__list__filter_3_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__V_60_60, backend_libs__matching__CostsBenefits_26, &backend_libs__matching__RealizedCostsBenefits_38);
    }
#line 193 "matching.m"
    {
#line 193 "matching.m"
      backend_libs__matching__V_62_62 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_104_104);
    }
#line 193 "matching.m"
    {
#line 193 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_105_105, (MR_Word) &backend_libs__matching_scalar_common_2[8], backend_libs__matching__RealizedCostsBenefits_38, ((MR_Box) (backend_libs__matching__V_62_62)), &backend_libs__matching__conv7_RealizedBenefitNodes_16);
    }
#line 193 "matching.m"
    *backend_libs__matching__RealizedBenefitNodes_16 = ((MR_Word) backend_libs__matching__conv7_RealizedBenefitNodes_16);
#line 195 "matching.m"
    {
#line 195 "matching.m"
      backend_libs__matching__V_64_64 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_109_109);
    }
#line 195 "matching.m"
    {
#line 195 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_110_110, (MR_Word) &backend_libs__matching_scalar_common_2[9], backend_libs__matching__RealizedCostsBenefits_38, ((MR_Box) (backend_libs__matching__V_64_64)), &backend_libs__matching__conv9_RealizedCostNodes_17);
    }
#line 195 "matching.m"
    *backend_libs__matching__RealizedCostNodes_17 = ((MR_Word) backend_libs__matching__conv9_RealizedCostNodes_17);
#line 8394 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_118_118 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0;
#line 197 "matching.m"
    {
#line 197 "matching.m"
      backend_libs__matching__RealizedBenefitOps_39 = mercury__set__map_2_f_0(backend_libs__matching__TypeCtorInfo_104_104, backend_libs__matching__TypeCtorInfo_118_118, (MR_Word) &backend_libs__matching_scalar_common_2[10], *backend_libs__matching__RealizedBenefitNodes_16);
    }
#line 8401 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_121_121 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0;
#line 198 "matching.m"
    {
#line 198 "matching.m"
      backend_libs__matching__RealizedCostOps_40 = mercury__set__map_2_f_0(backend_libs__matching__TypeCtorInfo_109_109, backend_libs__matching__TypeCtorInfo_121_121, (MR_Word) &backend_libs__matching_scalar_common_2[11], *backend_libs__matching__RealizedCostNodes_17);
    }
#line 199 "matching.m"
    {
#line 199 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_104_104, *backend_libs__matching__RealizedBenefitNodes_16, &backend_libs__matching__RealizedBenefitNodeList_41);
    }
#line 200 "matching.m"
    {
#line 200 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_109_109, *backend_libs__matching__RealizedCostNodes_17, &backend_libs__matching__RealizedCostNodeList_42);
    }
#line 201 "matching.m"
    {
#line 201 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_118_118, backend_libs__matching__RealizedBenefitOps_39, &backend_libs__matching__RealizedBenefitOpList_43);
    }
#line 202 "matching.m"
    {
#line 202 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_121_121, backend_libs__matching__RealizedCostOps_40, &backend_libs__matching__RealizedCostOpList_44);
    }
#line 203 "matching.m"
    {
#line 203 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_104_104, backend_libs__matching__RealizedBenefitNodeList_41, &backend_libs__matching__RealizedBenefitNodeCount_45);
    }
#line 204 "matching.m"
    {
#line 204 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_118_118, backend_libs__matching__RealizedBenefitOpList_43, &backend_libs__matching__RealizedBenefitOpCount_46);
    }
#line 205 "matching.m"
    {
#line 205 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_109_109, backend_libs__matching__RealizedCostNodeList_42, &backend_libs__matching__RealizedCostNodeCount_47);
    }
#line 206 "matching.m"
    {
#line 206 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_121_121, backend_libs__matching__RealizedCostOpList_44, &backend_libs__matching__RealizedCostOpCount_48);
    }
#line 207 "matching.m"
    backend_libs__matching__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 0)));
#line 207 "matching.m"
    backend_libs__matching__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 1)));
#line 207 "matching.m"
    backend_libs__matching__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 2)));
#line 207 "matching.m"
    backend_libs__matching__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 3)));
#line 207 "matching.m"
    backend_libs__matching__OpRatio_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 4)));
#line 207 "matching.m"
    backend_libs__matching__NodeRatio_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 5)));
#line 207 "matching.m"
    backend_libs__matching__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 6)));
#line 210 "matching.m"
    backend_libs__matching__V_67_67 = (backend_libs__matching__RealizedBenefitOpCount_46 * (MR_Integer) 100);
#line 210 "matching.m"
    backend_libs__matching__V_68_68 = (backend_libs__matching__RealizedCostOpCount_48 * backend_libs__matching__OpRatio_49);
#line 210 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__V_67_67 >= backend_libs__matching__V_68_68);
#line 210 "matching.m"
    if (backend_libs__matching__succeeded)
#line 210 "matching.m"
      {
#line 211 "matching.m"
        backend_libs__matching__V_72_72 = (MR_Integer) 100;
#line 211 "matching.m"
        backend_libs__matching__V_70_70 = (backend_libs__matching__RealizedBenefitNodeCount_45 * backend_libs__matching__V_72_72);
#line 211 "matching.m"
        backend_libs__matching__V_71_71 = (backend_libs__matching__RealizedCostNodeCount_47 * backend_libs__matching__NodeRatio_50);
#line 211 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__V_70_70 >= backend_libs__matching__V_71_71);
#line 210 "matching.m"
      }
#line 217 "matching.m"
    if (backend_libs__matching__succeeded)
#line 213 "matching.m"
      backend_libs__matching__ViaCellOccurringVars_51 = backend_libs__matching__ViaCellOccurringVars0_37;
#line 217 "matching.m"
    else
#line 218 "matching.m"
      {
#line 218 "matching.m"
        backend_libs__matching__ViaCellOccurringVars_51 = parse_tree__set_of_var__init_0_f_0(backend_libs__matching__TypeCtorInfo_93_93);
      }
#line 223 "matching.m"
    {
#line 223 "matching.m"
      *backend_libs__matching__ViaCellVars_18 = parse_tree__set_of_var__union_2_f_0(backend_libs__matching__TypeCtorInfo_93_93, backend_libs__matching__ViaCellOccurringVars_51, backend_libs__matching__NonOccurringCandidateFieldVars_22);
    }
#line 155 "matching.m"
  }
#line 80 "matching.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.matching. */
