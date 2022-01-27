/*
** Automatically generated from `matching.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 100 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 103 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 106 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 109 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 112 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 115 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 118 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 121 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 124 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 127 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 130 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 133 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 136 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

#line 139 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

#line 142 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0;

#line 145 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 148 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 151 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0;

#line 154 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0[2];

#line 157 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0;

#line 160 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0[1];

#line 163 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0[1];

#line 166 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0[1];

#line 169 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0[1];

#line 172 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

#line 175 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

#line 178 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[2];

#line 181 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0;

#line 184 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[1];

#line 187 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[1];

#line 190 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0[1];

#line 193 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0[1];

#line 196 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0[1];

#line 199 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0;

#line 202 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1[1];

#line 205 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1;

#line 208 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0[1];

#line 211 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1[1];

#line 214 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_operation_0[2];

#line 217 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0[2];

#line 220 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0[2];

#line 223 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0[2];

#line 226 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0;

#line 229 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0[1];

#line 232 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0[1];

#line 235 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0[1];

#line 238 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0[1];

#line 241 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0[1];

#line 244 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0;

#line 247 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1;

#line 250 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0[1];

#line 253 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1[1];

#line 256 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_operation_0[2];

#line 259 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0[2];

#line 262 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0[2];

#line 265 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0[3];

#line 268 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0;

#line 271 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[1];

#line 274 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[1];

#line 277 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0[1];

#line 280 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0[1];

#line 283 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0;

#line 286 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0;

#line 289 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_0_0[2];

#line 292 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0;

#line 295 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0[1];

#line 298 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0[1];

#line 301 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0[1];

#line 304 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_0[1];

#line 307 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0[7];

#line 310 "backend_libs.matching.c"
static const MR_ConstString backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0[7];

#line 313 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0;

#line 316 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0[1];

#line 319 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0[1];

#line 322 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0[1];

#line 325 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0[1];

#line 328 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0;

#line 331 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0;

#line 334 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0[2];

#line 337 "backend_libs.matching.c"
static const MR_DuFunctorDesc backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0;

#line 340 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[1];

#line 343 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[1];

#line 346 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0[1];

#line 349 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0[1];

#line 352 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
#line 355 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 357 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 360 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
#line 363 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 365 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 367 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 370 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
#line 373 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 375 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 378 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
#line 381 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 383 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 385 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 388 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
#line 391 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 393 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 396 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
#line 399 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 401 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 403 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 406 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
#line 409 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 411 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 414 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
#line 417 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 419 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 421 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 424 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
#line 427 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 429 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 432 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
#line 435 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 437 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 439 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 442 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
#line 445 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 447 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 450 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
#line 453 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 455 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 457 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 460 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
#line 463 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 465 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 468 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
#line 471 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 473 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 475 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 478 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
#line 481 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 483 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 486 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
#line 489 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 491 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 493 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 496 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
#line 499 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 501 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 504 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
#line 507 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 509 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 511 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 514 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
#line 517 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 519 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2);

#line 522 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
#line 525 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 527 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 529 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3);

#line 579 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__579__1_2_f_0(
#line 579 "matching.m"
  MR_Word backend_libs__matching__BenefitToCostMap_18,
#line 579 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_33);

#line 108 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
#line 108 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 108 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 141 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0(
#line 141 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 141 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 129 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
#line 129 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 129 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 452 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
#line 452 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 452 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 114 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
#line 114 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 114 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0(
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 118 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
#line 118 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 118 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 454 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
#line 454 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 454 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 758 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
#line 758 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1);

#line 754 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
#line 754 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1);

#line 747 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
#line 747 "matching.m"
  MR_Word backend_libs__matching__ViaCellOccurringVars_3,
#line 747 "matching.m"
  MR_Word backend_libs__matching__FieldCostsBenefits_4);

#line 655 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
#line 655 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 655 "matching.m"
  MR_Word backend_libs__matching__MatchingCB_2);

#line 640 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
#line 640 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 640 "matching.m"
  MR_Word backend_libs__matching__MatchingBC_2);

#line 617 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
#line 617 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 617 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 605 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
#line 605 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitMap_4,
#line 605 "matching.m"
  MR_Word backend_libs__matching__CostNode_5);

#line 585 "matching.m"
static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
#line 585 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitsMap_5,
#line 585 "matching.m"
  MR_Word backend_libs__matching__CostNode_6,
#line 585 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9,
#line 585 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_10);

#line 579 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
#line 579 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 579 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 573 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
#line 573 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 573 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 573 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 573 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 562 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
#line 562 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_6,
#line 562 "matching.m"
  MR_Word backend_libs__matching__Graph_7,
#line 562 "matching.m"
  MR_Word backend_libs__matching__Matching_8,
#line 562 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20,
#line 562 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_21);

#line 554 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
#line 554 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_5,
#line 554 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 554 "matching.m"
  MR_Word backend_libs__matching__Matching_7);

#line 519 "matching.m"
static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
#line 519 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 519 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0_2,
#line 519 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Seen_3,
#line 519 "matching.m"
  MR_Word backend_libs__matching__BenefitNode_4,
#line 519 "matching.m"
  MR_Word backend_libs__matching__Path_5,
#line 519 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0_6,
#line 519 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Queue_7);

#line 501 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
#line 501 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 501 "matching.m"
  MR_Word * backend_libs__matching__Unmatched_6);

#line 602 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
#line 602 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 602 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 482 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
#line 482 "matching.m"
  MR_Word backend_libs__matching__Queue0_6,
#line 482 "matching.m"
  MR_Word backend_libs__matching__Seen0_7,
#line 482 "matching.m"
  MR_Word backend_libs__matching__Graph_8,
#line 482 "matching.m"
  MR_Word backend_libs__matching__Matching_9,
#line 482 "matching.m"
  MR_Word * backend_libs__matching__Path_10);

#line 474 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
#line 474 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 474 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 431 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
#line 431 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 431 "matching.m"
  MR_Word backend_libs__matching__Matching0_2);

#line 420 "matching.m"
static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
#line 420 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_5,
#line 420 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 420 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0_9,
#line 420 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Matching_10);

#line 414 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
#line 414 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_4,
#line 414 "matching.m"
  MR_Word backend_libs__matching__Graph_5);

#line 398 "matching.m"
static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
#line 398 "matching.m"
  MR_Word backend_libs__matching__Costs_5,
#line 398 "matching.m"
  MR_Word backend_libs__matching__Benefit_6,
#line 398 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10,
#line 398 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);

#line 386 "matching.m"
static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
#line 386 "matching.m"
  MR_Word backend_libs__matching__Benefits_5,
#line 386 "matching.m"
  MR_Word backend_libs__matching__Cost_6,
#line 386 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10,
#line 386 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);

#line 383 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
#line 383 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 383 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 383 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 383 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 381 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
#line 381 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 381 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 381 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 381 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 373 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
#line 373 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 373 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11,
#line 373 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12,
#line 373 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13,
#line 373 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14);

#line 369 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
#line 369 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 369 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 369 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 369 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3,
#line 369 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_4,
#line 369 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_5);

#line 366 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
#line 366 "matching.m"
  MR_Word backend_libs__matching__CostsBenefits_3);

#line 356 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
#line 356 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 356 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Costs_0_8,
#line 356 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Costs_9);

#line 348 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
#line 348 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 348 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Benefits_0_8,
#line 348 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Benefits_9);

#line 335 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
#line 335 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 335 "matching.m"
  MR_Word backend_libs__matching__Op_5);

#line 328 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
#line 328 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 328 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 328 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 319 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
#line 319 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 319 "matching.m"
  MR_Word backend_libs__matching__Op_5);

#line 312 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
#line 312 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 312 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 312 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3);

#line 297 "matching.m"
static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
#line 297 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 297 "matching.m"
  MR_Word backend_libs__matching__FieldVar_2,
#line 297 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0_3,
#line 297 "matching.m"
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

#line 259 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
#line 259 "matching.m"
  MR_Word backend_libs__matching__CellVar_8,
#line 259 "matching.m"
  MR_Word backend_libs__matching__BeforeFlush_9,
#line 259 "matching.m"
  MR_Word backend_libs__matching__AfterFlush_10,
#line 259 "matching.m"
  MR_Word backend_libs__matching__CellVarFlushedLater_11,
#line 259 "matching.m"
  MR_Word backend_libs__matching__MatchingParams_12,
#line 259 "matching.m"
  MR_Word backend_libs__matching__FieldVar_13);

#line 247 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
#line 247 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 247 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2);

#line 240 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
#line 240 "matching.m"
  MR_Word backend_libs__matching__CellVar_5,
#line 240 "matching.m"
  MR_Word backend_libs__matching__CandidateArgVars_6,
#line 240 "matching.m"
  MR_Word backend_libs__matching__SegmentVars0_7,
#line 240 "matching.m"
  MR_Word * backend_libs__matching__SegmentVars_8);

#line 197 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_9(
#line 197 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 197 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 196 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_8(
#line 196 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 196 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 194 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_7(
#line 194 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 194 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 194 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 194 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 192 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_6(
#line 192 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 192 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 192 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 192 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 190 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_5(
#line 190 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 190 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 178 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_4(
#line 178 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 178 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 178 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 178 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 177 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_3(
#line 177 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 177 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 177 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 177 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3);

#line 174 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_2(
#line 174 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 174 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1);

#line 170 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_1(
#line 170 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 170 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 170 "matching.m"
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
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1462 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1470 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1478 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1486 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1494 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__matching__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1503 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__pair__ti_pair_2builtin__type_ctor_info_int_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1511 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1519 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__set_ordlist__pti_set_ordlist_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1527 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1535 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__matching__list__pti_list_1__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1543 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1551 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1560 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1568 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1577 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1586 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1594 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__pair__pti_pair_2__plain_backend_libs__matching__type_ctor_info_cost_node_0__plain_maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__maybe__ti_maybe_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 1603 "backend_libs.matching.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__matching__tree234__pti_tree234_2__plain_backend_libs__matching__type_ctor_info_benefit_node_0__plain_backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1612 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1618 "backend_libs.matching.c"
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

#line 1633 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0
};

#line 1638 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_0_0
  }
};

#line 1647 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_0_0
};

#line 1652 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_0[1] = {
  (MR_Integer) 0
};

#line 1657 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1674 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1683 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__matching__pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 1691 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

#line 1697 "backend_libs.matching.c"
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

#line 1712 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

#line 1717 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0
  }
};

#line 1726 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

#line 1731 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0[1] = {
  (MR_Integer) 0
};

#line 1736 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1753 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1758 "backend_libs.matching.c"
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

#line 1773 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_benefit_operation_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1778 "backend_libs.matching.c"
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

#line 1793 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0
};

#line 1798 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_benefit_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

#line 1803 "backend_libs.matching.c"
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

#line 1817 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_benefit_operation_0[2] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_0,
  &backend_libs__matching__backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

#line 1823 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_benefit_operation_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1829 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1846 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_node_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1852 "backend_libs.matching.c"
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

#line 1867 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0
};

#line 1872 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_cost_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_node_0_0
  }
};

#line 1881 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_node_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_node_0_0
};

#line 1886 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_node_0[1] = {
  (MR_Integer) 0
};

#line 1891 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1908 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_cost_operation_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1913 "backend_libs.matching.c"
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

#line 1928 "backend_libs.matching.c"
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

#line 1943 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1
};

#line 1948 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_cost_operation_0_1[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0
};

#line 1953 "backend_libs.matching.c"
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

#line 1967 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_cost_operation_0[2] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_0,
  &backend_libs__matching__backend_libs__matching__du_functor_desc_cost_operation_0_1
};

#line 1973 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_cost_operation_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1979 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1996 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_edge_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 2013 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_field_costs_benefits_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
};

#line 2020 "backend_libs.matching.c"
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

#line 2035 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

#line 2040 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0
  }
};

#line 2049 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_field_costs_benefits_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

#line 2054 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_field_costs_benefits_0[1] = {
  (MR_Integer) 0
};

#line 2059 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2076 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2085 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2094 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

#line 2100 "backend_libs.matching.c"
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

#line 2115 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0
};

#line 2120 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_0_0
  }
};

#line 2129 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_0_0
};

#line 2134 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_0[1] = {
  (MR_Integer) 0
};

#line 2139 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_matching_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2156 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_matching_params_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2167 "backend_libs.matching.c"
static const MR_ConstString backend_libs__matching__backend_libs__matching__field_names_matching_params_0_0[7] = {
  (MR_String) "cell_var_store_cost",
  (MR_String) "cell_var_load_cost",
  (MR_String) "field_var_store_cost",
  (MR_String) "field_var_load_cost",
  (MR_String) "one_path_op_ratio",
  (MR_String) "one_path_node_ratio",
  (MR_String) "include_all_candidates"
};

#line 2178 "backend_libs.matching.c"
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

#line 2193 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0
};

#line 2198 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_matching_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_matching_params_0_0
  }
};

#line 2207 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_matching_params_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_matching_params_0_0
};

#line 2212 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_matching_params_0[1] = {
  (MR_Integer) 0
};

#line 2217 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_matching_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2234 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0,
    (MR_TypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
  }
};

#line 2243 "backend_libs.matching.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0,
    (MR_TypeInfo) &backend_libs__matching__set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
  }
};

#line 2252 "backend_libs.matching.c"
static const MR_PseudoTypeInfo backend_libs__matching__backend_libs__matching__field_types_stack_slot_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0,
  (MR_PseudoTypeInfo) &backend_libs__matching__tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
};

#line 2258 "backend_libs.matching.c"
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

#line 2273 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

#line 2278 "backend_libs.matching.c"
static const MR_DuPtagLayout backend_libs__matching__backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__matching__backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0
  }
};

#line 2287 "backend_libs.matching.c"
static const MR_DuFunctorDescPtr backend_libs__matching__backend_libs__matching__du_name_ordered_stack_slot_graph_0[1] = {
  &backend_libs__matching__backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

#line 2292 "backend_libs.matching.c"
static const MR_Integer backend_libs__matching__backend_libs__matching__functor_number_map_stack_slot_graph_0[1] = {
  (MR_Integer) 0
};

#line 2297 "backend_libs.matching.c"
const MR_TypeCtorInfo_Struct backend_libs__matching__backend_libs__matching__type_ctor_info_stack_slot_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2314 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_0_0_10001(
#line 2317 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2319 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2321 "backend_libs.matching.c"
{
#line 2323 "backend_libs.matching.c"
  {
#line 2325 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2328 "backend_libs.matching.c"
    {
#line 2330 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2333 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2335 "backend_libs.matching.c"
  }
#line 2337 "backend_libs.matching.c"
}

#line 2340 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0_10001(
#line 2343 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2345 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2347 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2349 "backend_libs.matching.c"
{
#line 2351 "backend_libs.matching.c"
  {
#line 2353 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2356 "backend_libs.matching.c"
    {
#line 2358 "backend_libs.matching.c"
      backend_libs__matching____Compare____benefit_node_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2361 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2363 "backend_libs.matching.c"
  }
#line 2365 "backend_libs.matching.c"
}

#line 2368 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0_10001(
#line 2371 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2373 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2375 "backend_libs.matching.c"
{
#line 2377 "backend_libs.matching.c"
  {
#line 2379 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2382 "backend_libs.matching.c"
    {
#line 2384 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2387 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2389 "backend_libs.matching.c"
  }
#line 2391 "backend_libs.matching.c"
}

#line 2394 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0_10001(
#line 2397 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2399 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2401 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2403 "backend_libs.matching.c"
{
#line 2405 "backend_libs.matching.c"
  {
#line 2407 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2410 "backend_libs.matching.c"
    {
#line 2412 "backend_libs.matching.c"
      backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2415 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2417 "backend_libs.matching.c"
  }
#line 2419 "backend_libs.matching.c"
}

#line 2422 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0_10001(
#line 2425 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2427 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2429 "backend_libs.matching.c"
{
#line 2431 "backend_libs.matching.c"
  {
#line 2433 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2436 "backend_libs.matching.c"
    {
#line 2438 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_operation_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2441 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2443 "backend_libs.matching.c"
  }
#line 2445 "backend_libs.matching.c"
}

#line 2448 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0_10001(
#line 2451 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2453 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2455 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2457 "backend_libs.matching.c"
{
#line 2459 "backend_libs.matching.c"
  {
#line 2461 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2464 "backend_libs.matching.c"
    {
#line 2466 "backend_libs.matching.c"
      backend_libs__matching____Compare____benefit_operation_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2469 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2471 "backend_libs.matching.c"
  }
#line 2473 "backend_libs.matching.c"
}

#line 2476 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0_10001(
#line 2479 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2481 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2483 "backend_libs.matching.c"
{
#line 2485 "backend_libs.matching.c"
  {
#line 2487 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2490 "backend_libs.matching.c"
    {
#line 2492 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____cost_node_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2495 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2497 "backend_libs.matching.c"
  }
#line 2499 "backend_libs.matching.c"
}

#line 2502 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0_10001(
#line 2505 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2507 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2509 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2511 "backend_libs.matching.c"
{
#line 2513 "backend_libs.matching.c"
  {
#line 2515 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2518 "backend_libs.matching.c"
    {
#line 2520 "backend_libs.matching.c"
      backend_libs__matching____Compare____cost_node_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2523 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2525 "backend_libs.matching.c"
  }
#line 2527 "backend_libs.matching.c"
}

#line 2530 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0_10001(
#line 2533 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2535 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2537 "backend_libs.matching.c"
{
#line 2539 "backend_libs.matching.c"
  {
#line 2541 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2544 "backend_libs.matching.c"
    {
#line 2546 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____cost_operation_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2549 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2551 "backend_libs.matching.c"
  }
#line 2553 "backend_libs.matching.c"
}

#line 2556 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0_10001(
#line 2559 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2561 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2563 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2565 "backend_libs.matching.c"
{
#line 2567 "backend_libs.matching.c"
  {
#line 2569 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2572 "backend_libs.matching.c"
    {
#line 2574 "backend_libs.matching.c"
      backend_libs__matching____Compare____cost_operation_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2577 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2579 "backend_libs.matching.c"
  }
#line 2581 "backend_libs.matching.c"
}

#line 2584 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0_10001(
#line 2587 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2589 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2591 "backend_libs.matching.c"
{
#line 2593 "backend_libs.matching.c"
  {
#line 2595 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2598 "backend_libs.matching.c"
    {
#line 2600 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____edge_list_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2603 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2605 "backend_libs.matching.c"
  }
#line 2607 "backend_libs.matching.c"
}

#line 2610 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0_10001(
#line 2613 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2615 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2617 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2619 "backend_libs.matching.c"
{
#line 2621 "backend_libs.matching.c"
  {
#line 2623 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2626 "backend_libs.matching.c"
    {
#line 2628 "backend_libs.matching.c"
      backend_libs__matching____Compare____edge_list_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2631 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2633 "backend_libs.matching.c"
  }
#line 2635 "backend_libs.matching.c"
}

#line 2638 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0_10001(
#line 2641 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2643 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2645 "backend_libs.matching.c"
{
#line 2647 "backend_libs.matching.c"
  {
#line 2649 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2652 "backend_libs.matching.c"
    {
#line 2654 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____field_costs_benefits_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2657 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2659 "backend_libs.matching.c"
  }
#line 2661 "backend_libs.matching.c"
}

#line 2664 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0_10001(
#line 2667 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2669 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2671 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2673 "backend_libs.matching.c"
{
#line 2675 "backend_libs.matching.c"
  {
#line 2677 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2680 "backend_libs.matching.c"
    {
#line 2682 "backend_libs.matching.c"
      backend_libs__matching____Compare____field_costs_benefits_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2685 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2687 "backend_libs.matching.c"
  }
#line 2689 "backend_libs.matching.c"
}

#line 2692 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0_10001(
#line 2695 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2697 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2699 "backend_libs.matching.c"
{
#line 2701 "backend_libs.matching.c"
  {
#line 2703 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2706 "backend_libs.matching.c"
    {
#line 2708 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____matching_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2711 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2713 "backend_libs.matching.c"
  }
#line 2715 "backend_libs.matching.c"
}

#line 2718 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0_10001(
#line 2721 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2723 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2725 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2727 "backend_libs.matching.c"
{
#line 2729 "backend_libs.matching.c"
  {
#line 2731 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2734 "backend_libs.matching.c"
    {
#line 2736 "backend_libs.matching.c"
      backend_libs__matching____Compare____matching_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2739 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2741 "backend_libs.matching.c"
  }
#line 2743 "backend_libs.matching.c"
}

#line 2746 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_params_0_0_10001(
#line 2749 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2751 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2753 "backend_libs.matching.c"
{
#line 2755 "backend_libs.matching.c"
  {
#line 2757 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2760 "backend_libs.matching.c"
    {
#line 2762 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____matching_params_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2765 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2767 "backend_libs.matching.c"
  }
#line 2769 "backend_libs.matching.c"
}

#line 2772 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____matching_params_0_0_10001(
#line 2775 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2777 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2779 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2781 "backend_libs.matching.c"
{
#line 2783 "backend_libs.matching.c"
  {
#line 2785 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2788 "backend_libs.matching.c"
    {
#line 2790 "backend_libs.matching.c"
      backend_libs__matching____Compare____matching_params_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2793 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2795 "backend_libs.matching.c"
  }
#line 2797 "backend_libs.matching.c"
}

#line 2800 "backend_libs.matching.c"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0_10001(
#line 2803 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 2805 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2)
#line 2807 "backend_libs.matching.c"
{
#line 2809 "backend_libs.matching.c"
  {
#line 2811 "backend_libs.matching.c"
    MR_bool backend_libs__matching__succeeded;

#line 2814 "backend_libs.matching.c"
    {
#line 2816 "backend_libs.matching.c"
      backend_libs__matching__succeeded = backend_libs__matching____Unify____stack_slot_graph_0_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2));
    }
#line 2819 "backend_libs.matching.c"
    return backend_libs__matching__succeeded;
#line 2821 "backend_libs.matching.c"
  }
#line 2823 "backend_libs.matching.c"
}

#line 2826 "backend_libs.matching.c"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0_10001(
#line 2829 "backend_libs.matching.c"
  MR_Box * backend_libs__matching__wrapper_arg_1,
#line 2831 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 2833 "backend_libs.matching.c"
  MR_Box backend_libs__matching__wrapper_arg_3)
#line 2835 "backend_libs.matching.c"
{
#line 2837 "backend_libs.matching.c"
  {
#line 2839 "backend_libs.matching.c"
    MR_Word backend_libs__matching__conv0_HeadVar__1_1;

#line 2842 "backend_libs.matching.c"
    {
#line 2844 "backend_libs.matching.c"
      backend_libs__matching____Compare____stack_slot_graph_0_0(&backend_libs__matching__conv0_HeadVar__1_1, ((MR_Word) backend_libs__matching__wrapper_arg_2), ((MR_Word) backend_libs__matching__wrapper_arg_3));
    }
#line 2847 "backend_libs.matching.c"
    *backend_libs__matching__wrapper_arg_1 = ((MR_Box) (backend_libs__matching__conv0_HeadVar__1_1));
#line 2849 "backend_libs.matching.c"
  }
#line 2851 "backend_libs.matching.c"
}

#line 579 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__579__1_2_f_0(
#line 579 "matching.m"
  MR_Word backend_libs__matching__BenefitToCostMap_18,
#line 579 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_33)
#line 579 "matching.m"
{
#line 579 "matching.m"
  {
#line 579 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 579 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_34;
#line 579 "matching.m"
    MR_Box backend_libs__matching__conv0_HeadVar__3_34;

#line 579 "matching.m"
    {
#line 579 "matching.m"
      backend_libs__matching__conv0_HeadVar__3_34 = mercury__map__lookup_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__BenefitToCostMap_18, ((MR_Box) (backend_libs__matching__HeadVar__2_33)));
    }
#line 579 "matching.m"
    backend_libs__matching__HeadVar__3_34 = ((MR_Word) backend_libs__matching__conv0_HeadVar__3_34);
#line 579 "matching.m"
    return backend_libs__matching__HeadVar__3_34;
#line 579 "matching.m"
  }
#line 579 "matching.m"
}

#line 108 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____stack_slot_graph_0_0(
#line 108 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 108 "matching.m"
{
#line 108 "matching.m"
  {
#line 108 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 108 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 108 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 108 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 108 "matching.m"
    if (backend_libs__matching__succeeded)
#line 2910 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "matching.m"
    else
#line 108 "matching.m"
      {
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 108 "matching.m"
        {
#line 108 "matching.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[0], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
        }
#line 2932 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 108 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 108 "matching.m"
        if (backend_libs__matching__succeeded)
#line 108 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 108 "matching.m"
        else
#line 108 "matching.m"
          {
#line 108 "matching.m"
            {
#line 108 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[1], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_7_7)));
#line 108 "matching.m"
              return;
            }
#line 108 "matching.m"
          }
#line 108 "matching.m"
      }
#line 108 "matching.m"
  }
#line 108 "matching.m"
}

#line 108 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____stack_slot_graph_0_0(
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 108 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 108 "matching.m"
{
#line 108 "matching.m"
  {
#line 108 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 108 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 108 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 108 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 108 "matching.m"
    if (backend_libs__matching__succeeded)
#line 108 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 108 "matching.m"
    else
#line 108 "matching.m"
      {
#line 108 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_10_10;
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

#line 2999 "backend_libs.matching.c"
        {
#line 3001 "backend_libs.matching.c"
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_2[0], ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_5_5)));
        }
#line 108 "matching.m"
        if (backend_libs__matching__succeeded)
#line 108 "matching.m"
          {
#line 3008 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_2[1];
#line 3010 "backend_libs.matching.c"
            {
#line 3012 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
            }
#line 108 "matching.m"
          }
#line 108 "matching.m"
      }
#line 108 "matching.m"
    return backend_libs__matching__succeeded;
#line 108 "matching.m"
  }
#line 108 "matching.m"
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
#line 3050 "backend_libs.matching.c"
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
#line 3092 "backend_libs.matching.c"
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
#line 3112 "backend_libs.matching.c"
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
#line 3132 "backend_libs.matching.c"
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
#line 3152 "backend_libs.matching.c"
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
#line 3172 "backend_libs.matching.c"
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
#line 3192 "backend_libs.matching.c"
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

#line 3292 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_3_3 == backend_libs__matching__V_10_10);
#line 50 "matching.m"
        if (backend_libs__matching__succeeded)
#line 50 "matching.m"
          {
#line 3298 "backend_libs.matching.c"
            backend_libs__matching__succeeded = (backend_libs__matching__V_4_4 == backend_libs__matching__V_11_11);
#line 50 "matching.m"
            if (backend_libs__matching__succeeded)
#line 50 "matching.m"
              {
#line 3304 "backend_libs.matching.c"
                backend_libs__matching__succeeded = (backend_libs__matching__V_5_5 == backend_libs__matching__V_12_12);
#line 50 "matching.m"
                if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                  {
#line 3310 "backend_libs.matching.c"
                    backend_libs__matching__succeeded = (backend_libs__matching__V_6_6 == backend_libs__matching__V_13_13);
#line 50 "matching.m"
                    if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                      {
#line 3316 "backend_libs.matching.c"
                        backend_libs__matching__succeeded = (backend_libs__matching__V_7_7 == backend_libs__matching__V_14_14);
#line 50 "matching.m"
                        if (backend_libs__matching__succeeded)
#line 50 "matching.m"
                          {
#line 3322 "backend_libs.matching.c"
                            backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == backend_libs__matching__V_15_15);
#line 50 "matching.m"
                            if (backend_libs__matching__succeeded)
#line 3326 "backend_libs.matching.c"
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

#line 141 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____matching_0_0(
#line 141 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 141 "matching.m"
{
#line 141 "matching.m"
  {
#line 141 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 141 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 141 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 141 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 141 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3371 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 141 "matching.m"
    else
#line 141 "matching.m"
      {
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 141 "matching.m"
        {
#line 141 "matching.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[4], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
        }
#line 3393 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 141 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 141 "matching.m"
        if (backend_libs__matching__succeeded)
#line 141 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 141 "matching.m"
        else
#line 141 "matching.m"
          {
#line 141 "matching.m"
            {
#line 141 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_2[5], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_7_7)));
#line 141 "matching.m"
              return;
            }
#line 141 "matching.m"
          }
#line 141 "matching.m"
      }
#line 141 "matching.m"
  }
#line 141 "matching.m"
}

#line 141 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____matching_0_0(
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 141 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 141 "matching.m"
{
#line 141 "matching.m"
  {
#line 141 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 141 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 141 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 141 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 141 "matching.m"
    if (backend_libs__matching__succeeded)
#line 141 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 141 "matching.m"
    else
#line 141 "matching.m"
      {
#line 141 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_10_10;
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

#line 3460 "backend_libs.matching.c"
        {
#line 3462 "backend_libs.matching.c"
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_2[4], ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_5_5)));
        }
#line 141 "matching.m"
        if (backend_libs__matching__succeeded)
#line 141 "matching.m"
          {
#line 3469 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_2[5];
#line 3471 "backend_libs.matching.c"
            {
#line 3473 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
            }
#line 141 "matching.m"
          }
#line 141 "matching.m"
      }
#line 141 "matching.m"
    return backend_libs__matching__succeeded;
#line 141 "matching.m"
  }
#line 141 "matching.m"
}

#line 129 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____field_costs_benefits_0_0(
#line 129 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 129 "matching.m"
{
#line 129 "matching.m"
  {
#line 129 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 129 "matching.m"
    MR_Integer backend_libs__matching__CastX_12 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 129 "matching.m"
    MR_Integer backend_libs__matching__CastY_13 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 129 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_12 == backend_libs__matching__CastY_13);
#line 129 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3511 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "matching.m"
    else
#line 129 "matching.m"
      {
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 2)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_10_10;

#line 129 "matching.m"
        {
#line 129 "matching.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], &backend_libs__matching__V_10_10, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_7_7)));
        }
#line 3537 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_10_10 == (MR_Integer) 0);
#line 129 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 129 "matching.m"
        if (backend_libs__matching__succeeded)
#line 129 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_10_10;
#line 129 "matching.m"
        else
#line 129 "matching.m"
          {
#line 129 "matching.m"
            MR_Word backend_libs__matching__V_11_11;

#line 129 "matching.m"
            {
#line 129 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[3], &backend_libs__matching__V_11_11, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_8_8)));
            }
#line 3557 "backend_libs.matching.c"
            backend_libs__matching__succeeded = (backend_libs__matching__V_11_11 == (MR_Integer) 0);
#line 129 "matching.m"
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 129 "matching.m"
            if (backend_libs__matching__succeeded)
#line 129 "matching.m"
              *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_11_11;
#line 129 "matching.m"
            else
#line 129 "matching.m"
              {
#line 129 "matching.m"
                {
#line 129 "matching.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_6_6)), ((MR_Box) (backend_libs__matching__V_9_9)));
#line 129 "matching.m"
                  return;
                }
#line 129 "matching.m"
              }
#line 129 "matching.m"
          }
#line 129 "matching.m"
      }
#line 129 "matching.m"
  }
#line 129 "matching.m"
}

#line 129 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____field_costs_benefits_0_0(
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 129 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 129 "matching.m"
{
#line 129 "matching.m"
  {
#line 129 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 129 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 129 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 129 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 129 "matching.m"
    if (backend_libs__matching__succeeded)
#line 129 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 129 "matching.m"
    else
#line 129 "matching.m"
      {
#line 129 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_12_12;
#line 129 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_13_13;
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "matching.m"
        MR_Word backend_libs__matching__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 2)));

#line 3632 "backend_libs.matching.c"
        {
#line 3634 "backend_libs.matching.c"
          backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_6_6)));
        }
#line 129 "matching.m"
        if (backend_libs__matching__succeeded)
#line 129 "matching.m"
          {
#line 3641 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_12_12 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
#line 3643 "backend_libs.matching.c"
            {
#line 3645 "backend_libs.matching.c"
              backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_12_12, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_7_7)));
            }
#line 129 "matching.m"
            if (backend_libs__matching__succeeded)
#line 129 "matching.m"
              {
#line 3652 "backend_libs.matching.c"
                backend_libs__matching__TypeInfo_13_13 = (MR_Word) &backend_libs__matching_scalar_common_1[2];
#line 3654 "backend_libs.matching.c"
                {
#line 3656 "backend_libs.matching.c"
                  return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_13_13, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_8_8)));
                }
#line 129 "matching.m"
              }
#line 129 "matching.m"
          }
#line 129 "matching.m"
      }
#line 129 "matching.m"
    return backend_libs__matching__succeeded;
#line 129 "matching.m"
  }
#line 129 "matching.m"
}

#line 452 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____edge_list_0_0(
#line 452 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 452 "matching.m"
{
#line 452 "matching.m"
  {
#line 452 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 452 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar1_4 = backend_libs__matching__HeadVar__2_2;
#line 452 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar2_5 = backend_libs__matching__HeadVar__3_3;

#line 452 "matching.m"
    {
#line 452 "matching.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__matching__Cast_HeadVar2_5)));
#line 452 "matching.m"
      return;
    }
#line 452 "matching.m"
  }
#line 452 "matching.m"
}

#line 452 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____edge_list_0_0(
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 452 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 452 "matching.m"
{
#line 452 "matching.m"
  {
#line 452 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 452 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar1_3 = backend_libs__matching__HeadVar__1_1;
#line 452 "matching.m"
    MR_Word backend_libs__matching__Cast_HeadVar2_4 = backend_libs__matching__HeadVar__2_2;

#line 452 "matching.m"
    {
#line 452 "matching.m"
      return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], ((MR_Box) (backend_libs__matching__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__matching__Cast_HeadVar2_4)));
    }
#line 452 "matching.m"
    return backend_libs__matching__succeeded;
#line 452 "matching.m"
  }
#line 452 "matching.m"
}

#line 114 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____cost_operation_0_0(
#line 114 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 114 "matching.m"
{
#line 114 "matching.m"
  {
#line 114 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 114 "matching.m"
    MR_Integer backend_libs__matching__CastX_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 114 "matching.m"
    MR_Integer backend_libs__matching__CastY_9 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 114 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_8 == backend_libs__matching__CastY_9);
#line 114 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3758 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "matching.m"
    else
#line 114 "matching.m"
    if ((backend_libs__matching__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "matching.m"
      if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "matching.m"
        *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "matching.m"
      else
#line 3770 "backend_libs.matching.c"
        *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 2;
#line 114 "matching.m"
    else
#line 114 "matching.m"
      {
#line 114 "matching.m"
        MR_Integer backend_libs__matching__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

#line 114 "matching.m"
        if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3781 "backend_libs.matching.c"
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 1;
#line 114 "matching.m"
        else
#line 114 "matching.m"
          {
#line 114 "matching.m"
            MR_Integer backend_libs__matching__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

#line 114 "matching.m"
            {
#line 114 "matching.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__V_11_11, backend_libs__matching__V_5_5);
#line 114 "matching.m"
              return;
            }
#line 114 "matching.m"
          }
#line 114 "matching.m"
      }
#line 114 "matching.m"
  }
#line 114 "matching.m"
}

#line 114 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____cost_operation_0_0(
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 114 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 114 "matching.m"
{
#line 114 "matching.m"
  {
#line 114 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 114 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 114 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 114 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 114 "matching.m"
    if (backend_libs__matching__succeeded)
#line 114 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 114 "matching.m"
    else
#line 114 "matching.m"
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "matching.m"
      {
#line 114 "matching.m"
        MR_Integer backend_libs__matching__CastX_5 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 114 "matching.m"
        MR_Integer backend_libs__matching__CastY_6 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 114 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastY_6 == backend_libs__matching__CastX_5);
#line 114 "matching.m"
      }
#line 114 "matching.m"
    else
#line 114 "matching.m"
      {
#line 114 "matching.m"
        MR_Integer backend_libs__matching__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 114 "matching.m"
        MR_Integer backend_libs__matching__V_4_4;

#line 114 "matching.m"
        backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 114 "matching.m"
        if (backend_libs__matching__succeeded)
#line 114 "matching.m"
          {
#line 114 "matching.m"
            backend_libs__matching__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 3862 "backend_libs.matching.c"
            backend_libs__matching__succeeded = (backend_libs__matching__V_3_3 == backend_libs__matching__V_4_4);
#line 114 "matching.m"
          }
#line 114 "matching.m"
      }
#line 114 "matching.m"
    return backend_libs__matching__succeeded;
#line 114 "matching.m"
  }
#line 114 "matching.m"
}

#line 123 "matching.m"
void MR_CALL 
backend_libs__matching____Compare____cost_node_0_0(
#line 123 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 123 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 123 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 123 "matching.m"
{
#line 123 "matching.m"
  {
#line 123 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 123 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 123 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 123 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 123 "matching.m"
    if (backend_libs__matching__succeeded)
#line 3899 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 123 "matching.m"
    else
#line 123 "matching.m"
      {
#line 123 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 123 "matching.m"
        MR_Integer backend_libs__matching__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 123 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 123 "matching.m"
        MR_Integer backend_libs__matching__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 123 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 114 "matching.m"
        MR_Integer backend_libs__matching__CastX_17 = (MR_Integer) backend_libs__matching__V_4_4;
#line 114 "matching.m"
        MR_Integer backend_libs__matching__CastY_18 = (MR_Integer) backend_libs__matching__V_6_6;

#line 114 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_17 == backend_libs__matching__CastY_18);
#line 114 "matching.m"
        if (backend_libs__matching__succeeded)
#line 3924 "backend_libs.matching.c"
          {
#line 3926 "backend_libs.matching.c"
            backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 123 "matching.m"
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 3930 "backend_libs.matching.c"
            if (backend_libs__matching__succeeded)
#line 3932 "backend_libs.matching.c"
              {
#line 3934 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 0;
#line 3936 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 3938 "backend_libs.matching.c"
              }
#line 3940 "backend_libs.matching.c"
          }
#line 114 "matching.m"
        else
#line 114 "matching.m"
        if ((backend_libs__matching__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "matching.m"
          if ((backend_libs__matching__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "matching.m"
            {
#line 3950 "backend_libs.matching.c"
              backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 123 "matching.m"
              backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 114 "matching.m"
              if (backend_libs__matching__succeeded)
#line 114 "matching.m"
                {
#line 114 "matching.m"
                  backend_libs__matching__V_8_8 = (MR_Integer) 0;
#line 114 "matching.m"
                  backend_libs__matching__succeeded = MR_TRUE;
#line 114 "matching.m"
                }
#line 114 "matching.m"
            }
#line 114 "matching.m"
          else
#line 3968 "backend_libs.matching.c"
            {
#line 3970 "backend_libs.matching.c"
              backend_libs__matching__V_8_8 = (MR_Integer) 2;
#line 3972 "backend_libs.matching.c"
              backend_libs__matching__succeeded = MR_TRUE;
#line 3974 "backend_libs.matching.c"
            }
#line 114 "matching.m"
        else
#line 114 "matching.m"
          {
#line 114 "matching.m"
            MR_Integer backend_libs__matching__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_4_4, (MR_Integer) 0)));

#line 114 "matching.m"
            if ((backend_libs__matching__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3985 "backend_libs.matching.c"
              {
#line 3987 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 1;
#line 3989 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 3991 "backend_libs.matching.c"
              }
#line 114 "matching.m"
            else
#line 114 "matching.m"
              {
#line 114 "matching.m"
                MR_Integer backend_libs__matching__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_6_6, (MR_Integer) 0)));

#line 114 "matching.m"
                {
#line 114 "matching.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__matching__V_8_8, backend_libs__matching__V_20_20, backend_libs__matching__V_14_14);
                }
#line 4005 "backend_libs.matching.c"
                backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 123 "matching.m"
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 114 "matching.m"
              }
#line 114 "matching.m"
          }
#line 123 "matching.m"
        if (backend_libs__matching__succeeded)
#line 123 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 123 "matching.m"
        else
#line 123 "matching.m"
          {
#line 123 "matching.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__V_5_5, backend_libs__matching__V_7_7);
#line 123 "matching.m"
            return;
          }
#line 123 "matching.m"
      }
#line 123 "matching.m"
  }
#line 123 "matching.m"
}

#line 123 "matching.m"
MR_bool MR_CALL 
backend_libs__matching____Unify____cost_node_0_0(
#line 123 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 123 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 123 "matching.m"
{
#line 123 "matching.m"
  {
#line 123 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 123 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 123 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 123 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 123 "matching.m"
    if (backend_libs__matching__succeeded)
#line 123 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 123 "matching.m"
    else
#line 123 "matching.m"
      {
#line 123 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 123 "matching.m"
        MR_Integer backend_libs__matching__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 123 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 123 "matching.m"
        MR_Integer backend_libs__matching__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "matching.m"
        MR_Integer backend_libs__matching__CastX_13 = (MR_Integer) backend_libs__matching__V_3_3;
#line 114 "matching.m"
        MR_Integer backend_libs__matching__CastY_14 = (MR_Integer) backend_libs__matching__V_5_5;

#line 114 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_13 == backend_libs__matching__CastY_14);
#line 114 "matching.m"
        if (backend_libs__matching__succeeded)
#line 114 "matching.m"
          backend_libs__matching__succeeded = MR_TRUE;
#line 114 "matching.m"
        else
#line 114 "matching.m"
        if ((backend_libs__matching__V_3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "matching.m"
          {
#line 114 "matching.m"
            MR_Integer backend_libs__matching__CastX_11 = (MR_Integer) backend_libs__matching__V_3_3;
#line 114 "matching.m"
            MR_Integer backend_libs__matching__CastY_12 = (MR_Integer) backend_libs__matching__V_5_5;

#line 114 "matching.m"
            backend_libs__matching__succeeded = (backend_libs__matching__CastY_12 == backend_libs__matching__CastX_11);
#line 114 "matching.m"
          }
#line 114 "matching.m"
        else
#line 114 "matching.m"
          {
#line 114 "matching.m"
            MR_Integer backend_libs__matching__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_3_3, (MR_Integer) 0)));
#line 114 "matching.m"
            MR_Integer backend_libs__matching__V_10_10;

#line 114 "matching.m"
            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 114 "matching.m"
            if (backend_libs__matching__succeeded)
#line 114 "matching.m"
              {
#line 114 "matching.m"
                backend_libs__matching__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_5_5, (MR_Integer) 0)));
#line 4112 "backend_libs.matching.c"
                backend_libs__matching__succeeded = (backend_libs__matching__V_9_9 == backend_libs__matching__V_10_10);
#line 114 "matching.m"
              }
#line 114 "matching.m"
          }
#line 123 "matching.m"
        if (backend_libs__matching__succeeded)
#line 4120 "backend_libs.matching.c"
          backend_libs__matching__succeeded = (backend_libs__matching__V_4_4 == backend_libs__matching__V_6_6);
#line 123 "matching.m"
      }
#line 123 "matching.m"
    return backend_libs__matching__succeeded;
#line 123 "matching.m"
  }
#line 123 "matching.m"
}

#line 118 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_operation_0_0(
#line 118 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 118 "matching.m"
{
#line 118 "matching.m"
  {
#line 118 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 118 "matching.m"
    MR_Integer backend_libs__matching__CastX_12 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 118 "matching.m"
    MR_Integer backend_libs__matching__CastY_13 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 118 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_12 == backend_libs__matching__CastY_13);
#line 118 "matching.m"
    if (backend_libs__matching__succeeded)
#line 4155 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 118 "matching.m"
    else
#line 118 "matching.m"
    if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 118 "matching.m"
      {
#line 118 "matching.m"
        MR_Word backend_libs__matching__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

#line 118 "matching.m"
        if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 118 "matching.m"
          {
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "matching.m"
            {
#line 118 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_16_16)), ((MR_Box) (backend_libs__matching__V_5_5)));
#line 118 "matching.m"
              return;
            }
#line 118 "matching.m"
          }
#line 118 "matching.m"
        else
#line 4184 "backend_libs.matching.c"
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 1;
#line 118 "matching.m"
      }
#line 118 "matching.m"
    else
#line 118 "matching.m"
      {
#line 118 "matching.m"
        MR_Word backend_libs__matching__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));

#line 118 "matching.m"
        if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4197 "backend_libs.matching.c"
          *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 2;
#line 118 "matching.m"
        else
#line 118 "matching.m"
          {
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "matching.m"
            {
#line 118 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_17_17)), ((MR_Box) (backend_libs__matching__V_11_11)));
#line 118 "matching.m"
              return;
            }
#line 118 "matching.m"
          }
#line 118 "matching.m"
      }
#line 118 "matching.m"
  }
#line 118 "matching.m"
}

#line 118 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_operation_0_0(
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 118 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 118 "matching.m"
{
#line 118 "matching.m"
  {
#line 118 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 118 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 118 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 118 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 118 "matching.m"
    if (backend_libs__matching__succeeded)
#line 118 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 118 "matching.m"
    else
#line 118 "matching.m"
    if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 118 "matching.m"
      {
#line 118 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_9_9;
#line 118 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "matching.m"
        MR_Word backend_libs__matching__V_4_4;

#line 118 "matching.m"
        backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 118 "matching.m"
        if (backend_libs__matching__succeeded)
#line 118 "matching.m"
          {
#line 118 "matching.m"
            backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 4267 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_9_9 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
#line 4269 "backend_libs.matching.c"
            {
#line 4271 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_9, ((MR_Box) (backend_libs__matching__V_3_3)), ((MR_Box) (backend_libs__matching__V_4_4)));
            }
#line 118 "matching.m"
          }
#line 118 "matching.m"
      }
#line 118 "matching.m"
    else
#line 118 "matching.m"
      {
#line 118 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_10_10;
#line 118 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "matching.m"
        MR_Word backend_libs__matching__V_6_6;

#line 118 "matching.m"
        backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 118 "matching.m"
        if (backend_libs__matching__succeeded)
#line 118 "matching.m"
          {
#line 118 "matching.m"
            backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 4297 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_10_10 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
#line 4299 "backend_libs.matching.c"
            {
#line 4301 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_10, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_6_6)));
            }
#line 118 "matching.m"
          }
#line 118 "matching.m"
      }
#line 118 "matching.m"
    return backend_libs__matching__succeeded;
#line 118 "matching.m"
  }
#line 118 "matching.m"
}

#line 454 "matching.m"
static void MR_CALL 
backend_libs__matching____Compare____benefit_node_and_edge_list_0_0(
#line 454 "matching.m"
  MR_Word * backend_libs__matching__HeadVar__1_1,
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2,
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 454 "matching.m"
{
#line 454 "matching.m"
  {
#line 454 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 454 "matching.m"
    MR_Integer backend_libs__matching__CastX_9 = (MR_Integer) backend_libs__matching__HeadVar__2_2;
#line 454 "matching.m"
    MR_Integer backend_libs__matching__CastY_10 = (MR_Integer) backend_libs__matching__HeadVar__3_3;

#line 454 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_9 == backend_libs__matching__CastY_10);
#line 454 "matching.m"
    if (backend_libs__matching__succeeded)
#line 4339 "backend_libs.matching.c"
      *backend_libs__matching__HeadVar__1_1 = (MR_Integer) 0;
#line 454 "matching.m"
    else
#line 454 "matching.m"
      {
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 0)));
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__3_3, (MR_Integer) 1)));
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 454 "matching.m"
        {
#line 454 "matching.m"
          backend_libs__matching____Compare____benefit_node_0_0(&backend_libs__matching__V_8_8, backend_libs__matching__V_4_4, backend_libs__matching__V_6_6);
        }
#line 4361 "backend_libs.matching.c"
        backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 454 "matching.m"
        backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 454 "matching.m"
        if (backend_libs__matching__succeeded)
#line 454 "matching.m"
          *backend_libs__matching__HeadVar__1_1 = backend_libs__matching__V_8_8;
#line 454 "matching.m"
        else
#line 454 "matching.m"
          {
#line 454 "matching.m"
            {
#line 454 "matching.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[7], backend_libs__matching__HeadVar__1_1, ((MR_Box) (backend_libs__matching__V_5_5)), ((MR_Box) (backend_libs__matching__V_7_7)));
#line 454 "matching.m"
              return;
            }
#line 454 "matching.m"
          }
#line 454 "matching.m"
      }
#line 454 "matching.m"
  }
#line 454 "matching.m"
}

#line 454 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching____Unify____benefit_node_and_edge_list_0_0(
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 454 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 454 "matching.m"
{
#line 454 "matching.m"
  {
#line 454 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 454 "matching.m"
    MR_Integer backend_libs__matching__CastX_7 = (MR_Integer) backend_libs__matching__HeadVar__1_1;
#line 454 "matching.m"
    MR_Integer backend_libs__matching__CastY_8 = (MR_Integer) backend_libs__matching__HeadVar__2_2;

#line 454 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__CastX_7 == backend_libs__matching__CastY_8);
#line 454 "matching.m"
    if (backend_libs__matching__succeeded)
#line 454 "matching.m"
      backend_libs__matching__succeeded = MR_TRUE;
#line 454 "matching.m"
    else
#line 454 "matching.m"
      {
#line 454 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_9_9;
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 454 "matching.m"
        MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));

#line 4428 "backend_libs.matching.c"
        {
#line 4430 "backend_libs.matching.c"
          backend_libs__matching__succeeded = backend_libs__matching____Unify____benefit_node_0_0(backend_libs__matching__V_3_3, backend_libs__matching__V_5_5);
        }
#line 454 "matching.m"
        if (backend_libs__matching__succeeded)
#line 454 "matching.m"
          {
#line 4437 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_9_9 = (MR_Word) &backend_libs__matching_scalar_common_1[7];
#line 4439 "backend_libs.matching.c"
            {
#line 4441 "backend_libs.matching.c"
              return backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_9, ((MR_Box) (backend_libs__matching__V_4_4)), ((MR_Box) (backend_libs__matching__V_6_6)));
            }
#line 454 "matching.m"
          }
#line 454 "matching.m"
      }
#line 454 "matching.m"
    return backend_libs__matching__succeeded;
#line 454 "matching.m"
  }
#line 454 "matching.m"
}

#line 124 "matching.m"
void MR_CALL 
backend_libs__matching____Compare____benefit_node_0_0(
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
#line 4479 "backend_libs.matching.c"
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
#line 118 "matching.m"
        MR_Integer backend_libs__matching__CastX_21 = (MR_Integer) backend_libs__matching__V_4_4;
#line 118 "matching.m"
        MR_Integer backend_libs__matching__CastY_22 = (MR_Integer) backend_libs__matching__V_6_6;

#line 118 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_21 == backend_libs__matching__CastY_22);
#line 118 "matching.m"
        if (backend_libs__matching__succeeded)
#line 4504 "backend_libs.matching.c"
          {
#line 4506 "backend_libs.matching.c"
            backend_libs__matching__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 124 "matching.m"
            backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 4510 "backend_libs.matching.c"
            if (backend_libs__matching__succeeded)
#line 4512 "backend_libs.matching.c"
              {
#line 4514 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 0;
#line 4516 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 4518 "backend_libs.matching.c"
              }
#line 4520 "backend_libs.matching.c"
          }
#line 118 "matching.m"
        else
#line 118 "matching.m"
        if (((MR_tag((MR_Word) backend_libs__matching__V_4_4)) == (MR_mktag((MR_Integer) 0))))
#line 118 "matching.m"
          {
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_4_4, (MR_Integer) 0)));

#line 118 "matching.m"
            if (((MR_tag((MR_Word) backend_libs__matching__V_6_6)) == (MR_mktag((MR_Integer) 0))))
#line 118 "matching.m"
              {
#line 118 "matching.m"
                MR_Word backend_libs__matching__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_6_6, (MR_Integer) 0)));

#line 118 "matching.m"
                {
#line 118 "matching.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_25_25)), ((MR_Box) (backend_libs__matching__V_14_14)));
                }
#line 4543 "backend_libs.matching.c"
                backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 124 "matching.m"
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 118 "matching.m"
              }
#line 118 "matching.m"
            else
#line 4551 "backend_libs.matching.c"
              {
#line 4553 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 1;
#line 4555 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 4557 "backend_libs.matching.c"
              }
#line 118 "matching.m"
          }
#line 118 "matching.m"
        else
#line 118 "matching.m"
          {
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_4_4, (MR_Integer) 0)));

#line 118 "matching.m"
            if (((MR_tag((MR_Word) backend_libs__matching__V_6_6)) == (MR_mktag((MR_Integer) 0))))
#line 4570 "backend_libs.matching.c"
              {
#line 4572 "backend_libs.matching.c"
                backend_libs__matching__V_8_8 = (MR_Integer) 2;
#line 4574 "backend_libs.matching.c"
                backend_libs__matching__succeeded = MR_TRUE;
#line 4576 "backend_libs.matching.c"
              }
#line 118 "matching.m"
            else
#line 118 "matching.m"
              {
#line 118 "matching.m"
                MR_Word backend_libs__matching__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_6_6, (MR_Integer) 0)));

#line 118 "matching.m"
                {
#line 118 "matching.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__matching_scalar_common_1[0], &backend_libs__matching__V_8_8, ((MR_Box) (backend_libs__matching__V_26_26)), ((MR_Box) (backend_libs__matching__V_20_20)));
                }
#line 4590 "backend_libs.matching.c"
                backend_libs__matching__succeeded = (backend_libs__matching__V_8_8 == (MR_Integer) 0);
#line 124 "matching.m"
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 118 "matching.m"
              }
#line 118 "matching.m"
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
backend_libs__matching____Unify____benefit_node_0_0(
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
#line 118 "matching.m"
        MR_Integer backend_libs__matching__CastX_13 = (MR_Integer) backend_libs__matching__V_3_3;
#line 118 "matching.m"
        MR_Integer backend_libs__matching__CastY_14 = (MR_Integer) backend_libs__matching__V_5_5;

#line 118 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__CastX_13 == backend_libs__matching__CastY_14);
#line 118 "matching.m"
        if (backend_libs__matching__succeeded)
#line 118 "matching.m"
          backend_libs__matching__succeeded = MR_TRUE;
#line 118 "matching.m"
        else
#line 118 "matching.m"
        if (((MR_tag((MR_Word) backend_libs__matching__V_3_3)) == (MR_mktag((MR_Integer) 0))))
#line 118 "matching.m"
          {
#line 118 "matching.m"
            MR_Word backend_libs__matching__TypeInfo_9_15;
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_3_3, (MR_Integer) 0)));
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_10_10;

#line 118 "matching.m"
            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 118 "matching.m"
            if (backend_libs__matching__succeeded)
#line 118 "matching.m"
              {
#line 118 "matching.m"
                backend_libs__matching__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_5_5, (MR_Integer) 0)));
#line 4686 "backend_libs.matching.c"
                backend_libs__matching__TypeInfo_9_15 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
#line 4688 "backend_libs.matching.c"
                {
#line 4690 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_9_15, ((MR_Box) (backend_libs__matching__V_9_9)), ((MR_Box) (backend_libs__matching__V_10_10)));
                }
#line 118 "matching.m"
              }
#line 118 "matching.m"
          }
#line 118 "matching.m"
        else
#line 118 "matching.m"
          {
#line 118 "matching.m"
            MR_Word backend_libs__matching__TypeInfo_10_16;
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_3_3, (MR_Integer) 0)));
#line 118 "matching.m"
            MR_Word backend_libs__matching__V_12_12;

#line 118 "matching.m"
            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 118 "matching.m"
            if (backend_libs__matching__succeeded)
#line 118 "matching.m"
              {
#line 118 "matching.m"
                backend_libs__matching__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__V_5_5, (MR_Integer) 0)));
#line 4716 "backend_libs.matching.c"
                backend_libs__matching__TypeInfo_10_16 = (MR_Word) &backend_libs__matching_scalar_common_1[0];
#line 4718 "backend_libs.matching.c"
                {
#line 4720 "backend_libs.matching.c"
                  backend_libs__matching__succeeded = mercury__builtin__unify_2_p_0(backend_libs__matching__TypeInfo_10_16, ((MR_Box) (backend_libs__matching__V_11_11)), ((MR_Box) (backend_libs__matching__V_12_12)));
                }
#line 118 "matching.m"
              }
#line 118 "matching.m"
          }
#line 124 "matching.m"
        if (backend_libs__matching__succeeded)
#line 4729 "backend_libs.matching.c"
          backend_libs__matching__succeeded = (backend_libs__matching__V_4_4 == backend_libs__matching__V_6_6);
#line 124 "matching.m"
      }
#line 124 "matching.m"
    return backend_libs__matching__succeeded;
#line 124 "matching.m"
  }
#line 124 "matching.m"
}

#line 758 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_cost_op_1_f_0(
#line 758 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1)
#line 758 "matching.m"
{
#line 760 "matching.m"
  {
#line 760 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 760 "matching.m"
    MR_Word backend_libs__matching__CostOp_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "matching.m"
    MR_Integer backend_libs__matching___CopyNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

#line 760 "matching.m"
    return backend_libs__matching__CostOp_3;
#line 760 "matching.m"
  }
#line 758 "matching.m"
}

#line 754 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__project_benefit_op_1_f_0(
#line 754 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1)
#line 754 "matching.m"
{
#line 756 "matching.m"
  {
#line 756 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 756 "matching.m"
    MR_Word backend_libs__matching__BenefitOp_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 756 "matching.m"
    MR_Integer backend_libs__matching___CopyNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

#line 756 "matching.m"
    return backend_libs__matching__BenefitOp_3;
#line 756 "matching.m"
  }
#line 754 "matching.m"
}

#line 747 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__realized_costs_benefits_2_p_0(
#line 747 "matching.m"
  MR_Word backend_libs__matching__ViaCellOccurringVars_3,
#line 747 "matching.m"
  MR_Word backend_libs__matching__FieldCostsBenefits_4)
#line 747 "matching.m"
{
#line 750 "matching.m"
  {
#line 750 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 750 "matching.m"
    MR_Word backend_libs__matching__FieldVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 0)));
#line 751 "matching.m"
    MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 1)));
#line 751 "matching.m"
    MR_Word backend_libs__matching__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_4, (MR_Integer) 2)));

#line 752 "matching.m"
    {
#line 752 "matching.m"
      return backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__ViaCellOccurringVars_3, backend_libs__matching__FieldVar_5);
    }
#line 750 "matching.m"
    return backend_libs__matching__succeeded;
#line 750 "matching.m"
  }
#line 747 "matching.m"
}

#line 655 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_cost_nodes_2_f_0(
#line 655 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 655 "matching.m"
  MR_Word backend_libs__matching__MatchingCB_2)
#line 655 "matching.m"
{
#line 658 "matching.m"
  {
#line 658 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 658 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 658 "matching.m"
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 658 "matching.m"
    else
#line 659 "matching.m"
      {
#line 659 "matching.m"
        MR_Word backend_libs__matching__Node_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 659 "matching.m"
        MR_Word backend_libs__matching__Nodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 659 "matching.m"
        MR_Word backend_libs__matching__UnmatchedNodes1_9;
#line 661 "matching.m"
        MR_Word backend_libs__matching___Match_10;
#line 661 "matching.m"
        MR_Box backend_libs__matching__conv0__Match_10;

#line 660 "matching.m"
        {
#line 660 "matching.m"
          backend_libs__matching__UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(backend_libs__matching__Nodes_6, backend_libs__matching__MatchingCB_2);
        }
#line 661 "matching.m"
        {
#line 661 "matching.m"
          backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__MatchingCB_2, ((MR_Box) (backend_libs__matching__Node_5)), &backend_libs__matching__conv0__Match_10);
        }
#line 661 "matching.m"
        if (backend_libs__matching__succeeded)
#line 661 "matching.m"
          {
#line 661 "matching.m"
            backend_libs__matching___Match_10 = ((MR_Word) backend_libs__matching__conv0__Match_10);
#line 661 "matching.m"
            backend_libs__matching__succeeded = MR_TRUE;
#line 661 "matching.m"
          }
#line 663 "matching.m"
        if (backend_libs__matching__succeeded)
#line 662 "matching.m"
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__UnmatchedNodes1_9;
#line 663 "matching.m"
        else
#line 664 "matching.m"
          {
#line 664 "matching.m"
            backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Node_5));
#line 664 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__UnmatchedNodes1_9));
#line 664 "matching.m"
          }
#line 659 "matching.m"
      }
#line 658 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 658 "matching.m"
  }
#line 655 "matching.m"
}

#line 640 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(
#line 640 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 640 "matching.m"
  MR_Word backend_libs__matching__MatchingBC_2)
#line 640 "matching.m"
{
#line 643 "matching.m"
  {
#line 643 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 643 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 643 "matching.m"
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "matching.m"
    else
#line 644 "matching.m"
      {
#line 644 "matching.m"
        MR_Word backend_libs__matching__Node_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 644 "matching.m"
        MR_Word backend_libs__matching__Nodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 644 "matching.m"
        MR_Word backend_libs__matching__UnmatchedNodes1_9;
#line 646 "matching.m"
        MR_Word backend_libs__matching___Match_10;
#line 646 "matching.m"
        MR_Box backend_libs__matching__conv0__Match_10;

#line 645 "matching.m"
        {
#line 645 "matching.m"
          backend_libs__matching__UnmatchedNodes1_9 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(backend_libs__matching__Nodes_6, backend_libs__matching__MatchingBC_2);
        }
#line 646 "matching.m"
        {
#line 646 "matching.m"
          backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__MatchingBC_2, ((MR_Box) (backend_libs__matching__Node_5)), &backend_libs__matching__conv0__Match_10);
        }
#line 646 "matching.m"
        if (backend_libs__matching__succeeded)
#line 646 "matching.m"
          {
#line 646 "matching.m"
            backend_libs__matching___Match_10 = ((MR_Word) backend_libs__matching__conv0__Match_10);
#line 646 "matching.m"
            backend_libs__matching__succeeded = MR_TRUE;
#line 646 "matching.m"
          }
#line 648 "matching.m"
        if (backend_libs__matching__succeeded)
#line 647 "matching.m"
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__UnmatchedNodes1_9;
#line 648 "matching.m"
        else
#line 649 "matching.m"
          {
#line 649 "matching.m"
            backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__Node_5));
#line 649 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__UnmatchedNodes1_9));
#line 649 "matching.m"
          }
#line 644 "matching.m"
      }
#line 643 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 643 "matching.m"
  }
#line 640 "matching.m"
}

#line 617 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__compute_via_cell_vars_2_f_0(
#line 617 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 617 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 617 "matching.m"
{
#line 620 "matching.m"
  {
#line 620 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 620 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 620 "matching.m"
    if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "matching.m"
      {
#line 620 "matching.m"
        {
#line 620 "matching.m"
          backend_libs__matching__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 620 "matching.m"
      }
#line 620 "matching.m"
    else
#line 622 "matching.m"
      {
#line 622 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_18_18;
#line 622 "matching.m"
        MR_Word backend_libs__matching__FieldCostsBenefits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "matching.m"
        MR_Word backend_libs__matching__FieldsCostsBenefits_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 622 "matching.m"
        MR_Word backend_libs__matching__ViaCellVars1_9;
#line 622 "matching.m"
        MR_Word backend_libs__matching__FieldVar_10;
#line 622 "matching.m"
        MR_Word backend_libs__matching__FieldBenefits_12;
#line 622 "matching.m"
        MR_Word backend_libs__matching__MarkedFieldBenefits_13;
#line 624 "matching.m"
        MR_Word backend_libs__matching__V_11_11;

#line 623 "matching.m"
        {
#line 623 "matching.m"
          backend_libs__matching__ViaCellVars1_9 = backend_libs__matching__compute_via_cell_vars_2_f_0(backend_libs__matching__FieldsCostsBenefits_6, backend_libs__matching__HeadVar__2_2);
        }
#line 624 "matching.m"
        backend_libs__matching__FieldVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 0)));
#line 624 "matching.m"
        backend_libs__matching__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 1)));
#line 624 "matching.m"
        backend_libs__matching__FieldBenefits_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_5, (MR_Integer) 2)));
#line 5037 "backend_libs.matching.c"
        backend_libs__matching__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 625 "matching.m"
        {
#line 625 "matching.m"
          mercury__set__intersect_3_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__FieldBenefits_12, backend_libs__matching__HeadVar__2_2, &backend_libs__matching__MarkedFieldBenefits_13);
        }
#line 626 "matching.m"
        {
#line 626 "matching.m"
          backend_libs__matching__succeeded = mercury__set__is_empty_1_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__MarkedFieldBenefits_13);
        }
#line 628 "matching.m"
        if (backend_libs__matching__succeeded)
#line 627 "matching.m"
          {
#line 627 "matching.m"
            {
#line 627 "matching.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__FieldVar_10, backend_libs__matching__ViaCellVars1_9, &backend_libs__matching__HeadVar__3_3);
            }
#line 627 "matching.m"
          }
#line 628 "matching.m"
        else
#line 630 "matching.m"
          {
#line 628 "matching.m"
            {
#line 628 "matching.m"
              backend_libs__matching__succeeded = mercury__set__equal_2_p_0(backend_libs__matching__TypeCtorInfo_18_18, backend_libs__matching__MarkedFieldBenefits_13, backend_libs__matching__FieldBenefits_12);
            }
#line 630 "matching.m"
            if (backend_libs__matching__succeeded)
#line 629 "matching.m"
              backend_libs__matching__HeadVar__3_3 = backend_libs__matching__ViaCellVars1_9;
#line 630 "matching.m"
            else
#line 631 "matching.m"
              {
#line 631 "matching.m"
                {
#line 631 "matching.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.matching", (MR_String) "function \140backend_libs.matching.compute_via_cell_vars\'/2", (MR_String) "theorem violation: intersection neither empty nor full");
                }
#line 631 "matching.m"
              }
#line 630 "matching.m"
          }
#line 622 "matching.m"
      }
#line 620 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 620 "matching.m"
  }
#line 617 "matching.m"
}

#line 605 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__adj_to_matched_cost_2_f_0(
#line 605 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitMap_4,
#line 605 "matching.m"
  MR_Word backend_libs__matching__CostNode_5)
#line 605 "matching.m"
{
#line 611 "matching.m"
  {
#line 611 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 611 "matching.m"
    MR_Word backend_libs__matching__Match_6;
#line 611 "matching.m"
    MR_Word backend_libs__matching__BenefitNode_7;
#line 609 "matching.m"
    MR_Box backend_libs__matching__conv0_BenefitNode_7;

#line 609 "matching.m"
    {
#line 609 "matching.m"
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__CostToBenefitMap_4, ((MR_Box) (backend_libs__matching__CostNode_5)), &backend_libs__matching__conv0_BenefitNode_7);
    }
#line 609 "matching.m"
    if (backend_libs__matching__succeeded)
#line 609 "matching.m"
      {
#line 609 "matching.m"
        backend_libs__matching__BenefitNode_7 = ((MR_Word) backend_libs__matching__conv0_BenefitNode_7);
#line 609 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 609 "matching.m"
      }
#line 611 "matching.m"
    if (backend_libs__matching__succeeded)
#line 610 "matching.m"
      {
#line 610 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 610 "matching.m"
        {
#line 610 "matching.m"
          backend_libs__matching__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 610 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__V_8_8, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_7));
#line 610 "matching.m"
        }
#line 610 "matching.m"
        {
#line 610 "matching.m"
          backend_libs__matching__Match_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 610 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 0) = ((MR_Box) (backend_libs__matching__CostNode_5));
#line 610 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 1) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 610 "matching.m"
        }
#line 610 "matching.m"
      }
#line 611 "matching.m"
    else
#line 612 "matching.m"
      {
#line 612 "matching.m"
        {
#line 612 "matching.m"
          backend_libs__matching__Match_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 0) = ((MR_Box) (backend_libs__matching__CostNode_5));
#line 612 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__Match_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "matching.m"
        }
#line 612 "matching.m"
      }
#line 611 "matching.m"
    return backend_libs__matching__Match_6;
#line 611 "matching.m"
  }
#line 605 "matching.m"
}

#line 585 "matching.m"
static void MR_CALL 
backend_libs__matching__adjacents_4_p_0(
#line 585 "matching.m"
  MR_Word backend_libs__matching__CostToBenefitsMap_5,
#line 585 "matching.m"
  MR_Word backend_libs__matching__CostNode_6,
#line 585 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9,
#line 585 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_10)
#line 585 "matching.m"
{
#line 588 "matching.m"
  {
#line 588 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 588 "matching.m"
    MR_Word backend_libs__matching__AdjBenefitNodes_8;
#line 589 "matching.m"
    MR_Box backend_libs__matching__conv0_AdjBenefitNodes_8;

#line 589 "matching.m"
    {
#line 589 "matching.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__CostToBenefitsMap_5, ((MR_Box) (backend_libs__matching__CostNode_6)), &backend_libs__matching__conv0_AdjBenefitNodes_8);
    }
#line 589 "matching.m"
    backend_libs__matching__AdjBenefitNodes_8 = ((MR_Word) backend_libs__matching__conv0_AdjBenefitNodes_8);
#line 590 "matching.m"
    {
#line 590 "matching.m"
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__AdjBenefitNodes_8, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_9, backend_libs__matching__STATE_VARIABLE_BenefitNodes_10);
#line 590 "matching.m"
      return;
    }
#line 588 "matching.m"
  }
#line 585 "matching.m"
}

#line 579 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_2(
#line 579 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 579 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 579 "matching.m"
{
#line 579 "matching.m"
  {
#line 579 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 579 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 579 "matching.m"
    MR_Word backend_libs__matching__conv2_HeadVar__3_34;

#line 579 "matching.m"
    {
#line 579 "matching.m"
      backend_libs__matching__conv2_HeadVar__3_34 = backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__579__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 579 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv2_HeadVar__3_34));
#line 579 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 579 "matching.m"
  }
#line 579 "matching.m"
}

#line 573 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0_1(
#line 573 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 573 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 573 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 573 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 573 "matching.m"
{
#line 573 "matching.m"
  {
#line 573 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 573 "matching.m"
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10;

#line 573 "matching.m"
    {
#line 573 "matching.m"
      backend_libs__matching__adjacents_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10);
    }
#line 573 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_BenefitNodes_10));
#line 573 "matching.m"
  }
#line 573 "matching.m"
}

#line 562 "matching.m"
static void MR_CALL 
backend_libs__matching__reachable_by_alternating_path_5_p_0(
#line 562 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_6,
#line 562 "matching.m"
  MR_Word backend_libs__matching__Graph_7,
#line 562 "matching.m"
  MR_Word backend_libs__matching__Matching_8,
#line 562 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20,
#line 562 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitNodes_21)
#line 562 "matching.m"
{
#line 569 "matching.m"
  while (MR_TRUE)
#line 569 "matching.m"
    {
#line 569 "matching.m"
      /* tailcall optimized into a loop */
#line 569 "matching.m"
      {
#line 569 "matching.m"
        MR_bool backend_libs__matching__succeeded;

#line 569 "matching.m"
        if ((backend_libs__matching__SelectedCostNodes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "matching.m"
          *backend_libs__matching__STATE_VARIABLE_BenefitNodes_21 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20;
#line 569 "matching.m"
        else
#line 571 "matching.m"
          {
#line 571 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_30_30;
#line 571 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_31_31;
#line 571 "matching.m"
            MR_Word backend_libs__matching__CostToBenefitsMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_7, (MR_Integer) 0)));
#line 571 "matching.m"
            MR_Word backend_libs__matching__AdjBenefitNodes_14;
#line 571 "matching.m"
            MR_Word backend_libs__matching__NewBenefitNodes_15;
#line 571 "matching.m"
            MR_Word backend_libs__matching__NewBenefitNodeList_16;
#line 571 "matching.m"
            MR_Word backend_libs__matching__BenefitToCostMap_18;
#line 571 "matching.m"
            MR_Word backend_libs__matching__LinkedCostNodes_19;
#line 571 "matching.m"
            MR_Word backend_libs__matching__V_22_22;
#line 571 "matching.m"
            MR_Word backend_libs__matching__V_23_23;
#line 571 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24;
#line 571 "matching.m"
            MR_Word backend_libs__matching__V_25_25;
#line 572 "matching.m"
            MR_Word backend_libs__matching__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_7, (MR_Integer) 1)));
#line 573 "matching.m"
            MR_Box backend_libs__matching__conv1_AdjBenefitNodes_14;
#line 578 "matching.m"
            MR_Word backend_libs__matching__V_17_17;

#line 573 "matching.m"
            {
#line 573 "matching.m"
              backend_libs__matching__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 573 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[5]));
#line 573 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_1));
#line 573 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 573 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_22_22, 3) = ((MR_Box) (backend_libs__matching__CostToBenefitsMap_12));
#line 573 "matching.m"
            }
#line 5364 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_30_30 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 574 "matching.m"
            {
#line 574 "matching.m"
              backend_libs__matching__V_23_23 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_30_30);
            }
#line 5371 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_31_31 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 573 "matching.m"
            {
#line 573 "matching.m"
              mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_31_31, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__V_22_22, backend_libs__matching__SelectedCostNodes_6, ((MR_Box) (backend_libs__matching__V_23_23)), &backend_libs__matching__conv1_AdjBenefitNodes_14);
            }
#line 573 "matching.m"
            backend_libs__matching__AdjBenefitNodes_14 = ((MR_Word) backend_libs__matching__conv1_AdjBenefitNodes_14);
#line 575 "matching.m"
            {
#line 575 "matching.m"
              mercury__set__difference_3_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20, backend_libs__matching__AdjBenefitNodes_14, &backend_libs__matching__NewBenefitNodes_15);
            }
#line 576 "matching.m"
            {
#line 576 "matching.m"
              mercury__set__union_3_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__AdjBenefitNodes_14, backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20, &backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24);
            }
#line 577 "matching.m"
            {
#line 577 "matching.m"
              mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__NewBenefitNodes_15, &backend_libs__matching__NewBenefitNodeList_16);
            }
#line 578 "matching.m"
            backend_libs__matching__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_8, (MR_Integer) 0)));
#line 578 "matching.m"
            backend_libs__matching__BenefitToCostMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_8, (MR_Integer) 1)));
#line 579 "matching.m"
            {
#line 579 "matching.m"
              backend_libs__matching__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 579 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[3]));
#line 579 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 1) = ((MR_Box) (backend_libs__matching__reachable_by_alternating_path_5_p_0_2));
#line 579 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 579 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 3) = ((MR_Box) (backend_libs__matching__BenefitToCostMap_18));
#line 579 "matching.m"
            }
#line 579 "matching.m"
            {
#line 579 "matching.m"
              backend_libs__matching__LinkedCostNodes_19 = mercury__list__map_2_f_0(backend_libs__matching__TypeCtorInfo_30_30, backend_libs__matching__TypeCtorInfo_31_31, backend_libs__matching__V_25_25, backend_libs__matching__NewBenefitNodeList_16);
            }
#line 581 "matching.m"
            /* direct tailcall eliminated */
#line 581 "matching.m"
            {
#line 581 "matching.m"
              MR_Word backend_libs__matching__SelectedCostNodes__tmp_copy_6 = backend_libs__matching__LinkedCostNodes_19;
#line 581 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_BenefitNodes_0__tmp_copy_20 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_24_24;

#line 581 "matching.m"
              backend_libs__matching__STATE_VARIABLE_BenefitNodes_0_20 = backend_libs__matching__STATE_VARIABLE_BenefitNodes_0__tmp_copy_20;
#line 581 "matching.m"
              backend_libs__matching__SelectedCostNodes_6 = backend_libs__matching__SelectedCostNodes__tmp_copy_6;
#line 581 "matching.m"
            }
#line 581 "matching.m"
            continue;
#line 571 "matching.m"
          }
#line 569 "matching.m"
      }
#line 569 "matching.m"
      break;
#line 569 "matching.m"
    }
#line 562 "matching.m"
}

#line 554 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__reachable_by_alternating_path_3_f_0(
#line 554 "matching.m"
  MR_Word backend_libs__matching__SelectedCostNodes_5,
#line 554 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 554 "matching.m"
  MR_Word backend_libs__matching__Matching_7)
#line 554 "matching.m"
{
#line 558 "matching.m"
  {
#line 558 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 558 "matching.m"
    MR_Word backend_libs__matching__ReachableBenefitNodes_8;
#line 558 "matching.m"
    MR_Word backend_libs__matching__V_9_9;

#line 560 "matching.m"
    {
#line 560 "matching.m"
      backend_libs__matching__V_9_9 = mercury__set__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0);
    }
#line 559 "matching.m"
    {
#line 559 "matching.m"
      backend_libs__matching__reachable_by_alternating_path_5_p_0(backend_libs__matching__SelectedCostNodes_5, backend_libs__matching__Graph_6, backend_libs__matching__Matching_7, backend_libs__matching__V_9_9, &backend_libs__matching__ReachableBenefitNodes_8);
    }
#line 558 "matching.m"
    return backend_libs__matching__ReachableBenefitNodes_8;
#line 558 "matching.m"
  }
#line 554 "matching.m"
}

#line 519 "matching.m"
static void MR_CALL 
backend_libs__matching__add_alternates_7_p_0(
#line 519 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 519 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0_2,
#line 519 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Seen_3,
#line 519 "matching.m"
  MR_Word backend_libs__matching__BenefitNode_4,
#line 519 "matching.m"
  MR_Word backend_libs__matching__Path_5,
#line 519 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0_6,
#line 519 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Queue_7)
#line 519 "matching.m"
{
#line 525 "matching.m"
  while (MR_TRUE)
#line 525 "matching.m"
    {
#line 525 "matching.m"
      /* tailcall optimized into a loop */
#line 525 "matching.m"
      {
#line 525 "matching.m"
        MR_bool backend_libs__matching__succeeded;

#line 525 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "matching.m"
          {
#line 525 "matching.m"
            *backend_libs__matching__STATE_VARIABLE_Queue_7 = backend_libs__matching__STATE_VARIABLE_Queue_0_6;
#line 525 "matching.m"
            *backend_libs__matching__STATE_VARIABLE_Seen_3 = backend_libs__matching__STATE_VARIABLE_Seen_0_2;
#line 525 "matching.m"
          }
#line 525 "matching.m"
        else
#line 526 "matching.m"
          {
#line 526 "matching.m"
            MR_Word backend_libs__matching__CostMatch_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 526 "matching.m"
            MR_Word backend_libs__matching__CostMatches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 526 "matching.m"
            MR_Word backend_libs__matching__CostNode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__CostMatch_16, (MR_Integer) 0)));
#line 526 "matching.m"
            MR_Word backend_libs__matching__MaybeAdjBenefitNode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__CostMatch_16, (MR_Integer) 1)));
#line 526 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_Seen_31_31;
#line 526 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_Queue_33_33;
#line 537 "matching.m"
            MR_Word backend_libs__matching__AdjBenefitNode_24;
#line 530 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_36_36;

#line 529 "matching.m"
            backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__MaybeAdjBenefitNode_23)) == (MR_mktag((MR_Integer) 1)));
#line 529 "matching.m"
            if (backend_libs__matching__succeeded)
#line 529 "matching.m"
              {
#line 529 "matching.m"
                backend_libs__matching__AdjBenefitNode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__MaybeAdjBenefitNode_23, (MR_Integer) 0)));
#line 5552 "backend_libs.matching.c"
                backend_libs__matching__TypeCtorInfo_36_36 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 530 "matching.m"
                {
#line 530 "matching.m"
                  backend_libs__matching__succeeded = mercury__list__member_2_p_0(backend_libs__matching__TypeCtorInfo_36_36, ((MR_Box) (backend_libs__matching__AdjBenefitNode_24)), backend_libs__matching__STATE_VARIABLE_Seen_0_2);
                }
#line 530 "matching.m"
                backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 529 "matching.m"
              }
#line 537 "matching.m"
            if (backend_libs__matching__succeeded)
#line 532 "matching.m"
              {
#line 532 "matching.m"
                MR_Word backend_libs__matching__NewPath_25;
#line 532 "matching.m"
                MR_Word backend_libs__matching__BenefitNodeAndEdgeList_26;
#line 532 "matching.m"
                MR_Word backend_libs__matching__V_32_32;

#line 532 "matching.m"
                {
#line 532 "matching.m"
                  backend_libs__matching__STATE_VARIABLE_Seen_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_Seen_31_31, 0) = ((MR_Box) (backend_libs__matching__AdjBenefitNode_24));
#line 532 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_Seen_31_31, 1) = ((MR_Box) (backend_libs__matching__STATE_VARIABLE_Seen_0_2));
#line 532 "matching.m"
                }
#line 533 "matching.m"
                {
#line 533 "matching.m"
                  backend_libs__matching__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_32_32, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_4));
#line 533 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_32_32, 1) = ((MR_Box) (backend_libs__matching__CostNode_22));
#line 533 "matching.m"
                }
#line 533 "matching.m"
                {
#line 533 "matching.m"
                  backend_libs__matching__NewPath_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__NewPath_25, 0) = ((MR_Box) (backend_libs__matching__V_32_32));
#line 533 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__NewPath_25, 1) = ((MR_Box) (backend_libs__matching__Path_5));
#line 533 "matching.m"
                }
#line 534 "matching.m"
                {
#line 534 "matching.m"
                  backend_libs__matching__BenefitNodeAndEdgeList_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__BenefitNodeAndEdgeList_26, 0) = ((MR_Box) (backend_libs__matching__AdjBenefitNode_24));
#line 534 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__BenefitNodeAndEdgeList_26, 1) = ((MR_Box) (backend_libs__matching__NewPath_25));
#line 534 "matching.m"
                }
#line 536 "matching.m"
                {
#line 536 "matching.m"
                  mercury__queue__put_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, ((MR_Box) (backend_libs__matching__BenefitNodeAndEdgeList_26)), backend_libs__matching__STATE_VARIABLE_Queue_0_6, &backend_libs__matching__STATE_VARIABLE_Queue_33_33);
                }
#line 532 "matching.m"
              }
#line 537 "matching.m"
            else
#line 538 "matching.m"
              {
#line 538 "matching.m"
                backend_libs__matching__STATE_VARIABLE_Queue_33_33 = backend_libs__matching__STATE_VARIABLE_Queue_0_6;
#line 538 "matching.m"
                backend_libs__matching__STATE_VARIABLE_Seen_31_31 = backend_libs__matching__STATE_VARIABLE_Seen_0_2;
#line 538 "matching.m"
              }
#line 540 "matching.m"
            /* direct tailcall eliminated */
#line 540 "matching.m"
            {
#line 540 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__CostMatches_17;
#line 540 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_Seen_0__tmp_copy_2 = backend_libs__matching__STATE_VARIABLE_Seen_31_31;
#line 540 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_Queue_0__tmp_copy_6 = backend_libs__matching__STATE_VARIABLE_Queue_33_33;

#line 540 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Queue_0_6 = backend_libs__matching__STATE_VARIABLE_Queue_0__tmp_copy_6;
#line 540 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Seen_0_2 = backend_libs__matching__STATE_VARIABLE_Seen_0__tmp_copy_2;
#line 540 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 540 "matching.m"
            }
#line 540 "matching.m"
            continue;
#line 526 "matching.m"
          }
#line 525 "matching.m"
      }
#line 525 "matching.m"
      break;
#line 525 "matching.m"
    }
#line 519 "matching.m"
}

#line 501 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_unmatched_cost_1_f_0(
#line 501 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 501 "matching.m"
  MR_Word * backend_libs__matching__Unmatched_6)
#line 501 "matching.m"
{
#line 504 "matching.m"
  while (MR_TRUE)
#line 504 "matching.m"
    {
#line 504 "matching.m"
      /* tailcall optimized into a loop */
#line 504 "matching.m"
      {
#line 504 "matching.m"
        MR_bool backend_libs__matching__succeeded = ((MR_tag((MR_Word) backend_libs__matching__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 504 "matching.m"
        MR_Word backend_libs__matching__CostNode_3;
#line 504 "matching.m"
        MR_Word backend_libs__matching__MaybeBenefitNode_4;
#line 504 "matching.m"
        MR_Word backend_libs__matching__Matches_5;
#line 504 "matching.m"
        MR_Word backend_libs__matching__V_8_8;

#line 504 "matching.m"
        if (backend_libs__matching__succeeded)
#line 504 "matching.m"
          {
#line 504 "matching.m"
            backend_libs__matching__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "matching.m"
            backend_libs__matching__Matches_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "matching.m"
            backend_libs__matching__CostNode_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, (MR_Integer) 0)));
#line 504 "matching.m"
            backend_libs__matching__MaybeBenefitNode_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, (MR_Integer) 1)));
#line 508 "matching.m"
            if ((backend_libs__matching__MaybeBenefitNode_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "matching.m"
              {
#line 507 "matching.m"
                *backend_libs__matching__Unmatched_6 = backend_libs__matching__CostNode_3;
#line 507 "matching.m"
                backend_libs__matching__succeeded = MR_TRUE;
#line 507 "matching.m"
              }
#line 508 "matching.m"
            else
#line 510 "matching.m"
              {
#line 510 "matching.m"
                /* direct tailcall eliminated */
#line 510 "matching.m"
                {
#line 510 "matching.m"
                  MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__Matches_5;

#line 510 "matching.m"
                  backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 510 "matching.m"
                }
#line 510 "matching.m"
                continue;
#line 510 "matching.m"
              }
#line 504 "matching.m"
          }
#line 504 "matching.m"
        return backend_libs__matching__succeeded;
#line 504 "matching.m"
      }
#line 504 "matching.m"
      break;
#line 504 "matching.m"
    }
#line 501 "matching.m"
}

#line 602 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__augpath_bf_4_f_0_1(
#line 602 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 602 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 602 "matching.m"
{
#line 602 "matching.m"
  {
#line 602 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 602 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 602 "matching.m"
    MR_Word backend_libs__matching__conv2_Match_6;

#line 602 "matching.m"
    {
#line 602 "matching.m"
      backend_libs__matching__conv2_Match_6 = backend_libs__matching__adj_to_matched_cost_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 602 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv2_Match_6));
#line 602 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 602 "matching.m"
  }
#line 602 "matching.m"
}

#line 482 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__augpath_bf_4_f_0(
#line 482 "matching.m"
  MR_Word backend_libs__matching__Queue0_6,
#line 482 "matching.m"
  MR_Word backend_libs__matching__Seen0_7,
#line 482 "matching.m"
  MR_Word backend_libs__matching__Graph_8,
#line 482 "matching.m"
  MR_Word backend_libs__matching__Matching_9,
#line 482 "matching.m"
  MR_Word * backend_libs__matching__Path_10)
#line 482 "matching.m"
{
#line 485 "matching.m"
  while (MR_TRUE)
#line 485 "matching.m"
    {
#line 485 "matching.m"
      /* tailcall optimized into a loop */
#line 485 "matching.m"
      {
#line 485 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 485 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_27_27;
#line 485 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_28_28;
#line 485 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_29_29;
#line 485 "matching.m"
        MR_Word backend_libs__matching__TypeCtorInfo_8_34;
#line 485 "matching.m"
        MR_Word backend_libs__matching__TypeInfo_9_35;
#line 485 "matching.m"
        MR_Word backend_libs__matching__NodePath_11;
#line 485 "matching.m"
        MR_Word backend_libs__matching__Queue1_12;
#line 485 "matching.m"
        MR_Word backend_libs__matching__BenefitNode_13;
#line 485 "matching.m"
        MR_Word backend_libs__matching__Path0_14;
#line 485 "matching.m"
        MR_Word backend_libs__matching__BenefitToCostsMap_16;
#line 485 "matching.m"
        MR_Word backend_libs__matching__AdjCostNodes_17;
#line 485 "matching.m"
        MR_Word backend_libs__matching__CostToBenefitMap_18;
#line 485 "matching.m"
        MR_Word backend_libs__matching__CostMatches_20;
#line 485 "matching.m"
        MR_Word backend_libs__matching__V_24_24;
#line 485 "matching.m"
        MR_Word backend_libs__matching__V_33_33;
#line 486 "matching.m"
        MR_Box backend_libs__matching__conv0_NodePath_11;
#line 488 "matching.m"
        MR_Word backend_libs__matching__V_15_15;
#line 489 "matching.m"
        MR_Box backend_libs__matching__conv1_AdjCostNodes_17;
#line 490 "matching.m"
        MR_Word backend_libs__matching__V_19_19;
#line 495 "matching.m"
        MR_Word backend_libs__matching__UnmatchedCostNode_21;

#line 486 "matching.m"
        {
#line 486 "matching.m"
          backend_libs__matching__succeeded = mercury__queue__get_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, &backend_libs__matching__conv0_NodePath_11, backend_libs__matching__Queue0_6, &backend_libs__matching__Queue1_12);
        }
#line 486 "matching.m"
        if (backend_libs__matching__succeeded)
#line 486 "matching.m"
          {
#line 486 "matching.m"
            backend_libs__matching__NodePath_11 = ((MR_Word) backend_libs__matching__conv0_NodePath_11);
#line 486 "matching.m"
            backend_libs__matching__succeeded = MR_TRUE;
#line 486 "matching.m"
          }
#line 485 "matching.m"
        if (backend_libs__matching__succeeded)
#line 485 "matching.m"
          {
#line 487 "matching.m"
            backend_libs__matching__BenefitNode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__NodePath_11, (MR_Integer) 0)));
#line 487 "matching.m"
            backend_libs__matching__Path0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__NodePath_11, (MR_Integer) 1)));
#line 488 "matching.m"
            backend_libs__matching__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_8, (MR_Integer) 0)));
#line 488 "matching.m"
            backend_libs__matching__BenefitToCostsMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_8, (MR_Integer) 1)));
#line 5870 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_27_27 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 5872 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_28_28 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
#line 489 "matching.m"
            {
#line 489 "matching.m"
              mercury__map__lookup_3_p_0(backend_libs__matching__TypeCtorInfo_27_27, backend_libs__matching__TypeInfo_28_28, backend_libs__matching__BenefitToCostsMap_16, ((MR_Box) (backend_libs__matching__BenefitNode_13)), &backend_libs__matching__conv1_AdjCostNodes_17);
            }
#line 489 "matching.m"
            backend_libs__matching__AdjCostNodes_17 = ((MR_Word) backend_libs__matching__conv1_AdjCostNodes_17);
#line 490 "matching.m"
            backend_libs__matching__CostToBenefitMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_9, (MR_Integer) 0)));
#line 490 "matching.m"
            backend_libs__matching__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching_9, (MR_Integer) 1)));
#line 5885 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 492 "matching.m"
            {
#line 492 "matching.m"
              backend_libs__matching__V_24_24 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_29_29, backend_libs__matching__AdjCostNodes_17);
            }
#line 5892 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_8_34 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 5894 "backend_libs.matching.c"
            backend_libs__matching__TypeInfo_9_35 = (MR_Word) &backend_libs__matching_scalar_common_2[2];
#line 602 "matching.m"
            {
#line 602 "matching.m"
              backend_libs__matching__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 602 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_5[2]));
#line 602 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 1) = ((MR_Box) (backend_libs__matching__augpath_bf_4_f_0_1));
#line 602 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 602 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 3) = ((MR_Box) (backend_libs__matching__CostToBenefitMap_18));
#line 602 "matching.m"
            }
#line 602 "matching.m"
            {
#line 602 "matching.m"
              backend_libs__matching__CostMatches_20 = mercury__list__map_2_f_0(backend_libs__matching__TypeCtorInfo_8_34, backend_libs__matching__TypeInfo_9_35, backend_libs__matching__V_33_33, backend_libs__matching__V_24_24);
            }
#line 493 "matching.m"
            {
#line 493 "matching.m"
              backend_libs__matching__succeeded = backend_libs__matching__find_unmatched_cost_1_f_0(backend_libs__matching__CostMatches_20, &backend_libs__matching__UnmatchedCostNode_21);
            }
#line 495 "matching.m"
            if (backend_libs__matching__succeeded)
#line 494 "matching.m"
              {
#line 494 "matching.m"
                MR_Word backend_libs__matching__V_25_25;

#line 494 "matching.m"
                {
#line 494 "matching.m"
                  backend_libs__matching__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 0) = ((MR_Box) (backend_libs__matching__BenefitNode_13));
#line 494 "matching.m"
                  MR_hl_field(MR_mktag(0), backend_libs__matching__V_25_25, 1) = ((MR_Box) (backend_libs__matching__UnmatchedCostNode_21));
#line 494 "matching.m"
                }
#line 494 "matching.m"
                {
#line 494 "matching.m"
                  MR_Word base;
#line 494 "matching.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "matching.m"
                  *backend_libs__matching__Path_10 = base;
#line 494 "matching.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__matching__V_25_25));
#line 494 "matching.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__matching__Path0_14));
#line 494 "matching.m"
                }
#line 494 "matching.m"
                backend_libs__matching__succeeded = MR_TRUE;
#line 494 "matching.m"
              }
#line 495 "matching.m"
            else
#line 497 "matching.m"
              {
#line 497 "matching.m"
                MR_Word backend_libs__matching__Seen_22;
#line 497 "matching.m"
                MR_Word backend_libs__matching__Queue2_23;

#line 496 "matching.m"
                {
#line 496 "matching.m"
                  backend_libs__matching__add_alternates_7_p_0(backend_libs__matching__CostMatches_20, backend_libs__matching__Seen0_7, &backend_libs__matching__Seen_22, backend_libs__matching__BenefitNode_13, backend_libs__matching__Path0_14, backend_libs__matching__Queue1_12, &backend_libs__matching__Queue2_23);
                }
#line 498 "matching.m"
                /* direct tailcall eliminated */
#line 498 "matching.m"
                {
#line 498 "matching.m"
                  MR_Word backend_libs__matching__Queue0__tmp_copy_6 = backend_libs__matching__Queue2_23;
#line 498 "matching.m"
                  MR_Word backend_libs__matching__Seen0__tmp_copy_7 = backend_libs__matching__Seen_22;

#line 498 "matching.m"
                  backend_libs__matching__Seen0_7 = backend_libs__matching__Seen0__tmp_copy_7;
#line 498 "matching.m"
                  backend_libs__matching__Queue0_6 = backend_libs__matching__Queue0__tmp_copy_6;
#line 498 "matching.m"
                }
#line 498 "matching.m"
                continue;
#line 497 "matching.m"
              }
#line 485 "matching.m"
          }
#line 485 "matching.m"
        return backend_libs__matching__succeeded;
#line 485 "matching.m"
      }
#line 485 "matching.m"
      break;
#line 485 "matching.m"
    }
#line 482 "matching.m"
}

#line 474 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__initial_queue_2_f_0(
#line 474 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 474 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 474 "matching.m"
{
#line 477 "matching.m"
  while (MR_TRUE)
#line 477 "matching.m"
    {
#line 477 "matching.m"
      /* tailcall optimized into a loop */
#line 477 "matching.m"
      {
#line 477 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 477 "matching.m"
        MR_Word backend_libs__matching__Q_3;

#line 477 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "matching.m"
          backend_libs__matching__Q_3 = backend_libs__matching__HeadVar__2_2;
#line 477 "matching.m"
        else
#line 478 "matching.m"
          {
#line 478 "matching.m"
            MR_Word backend_libs__matching__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 478 "matching.m"
            MR_Word backend_libs__matching__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 478 "matching.m"
            MR_Word backend_libs__matching__Q1_9;
#line 478 "matching.m"
            MR_Word backend_libs__matching__V_10_10;

#line 479 "matching.m"
            {
#line 479 "matching.m"
              backend_libs__matching__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_10_10, 0) = ((MR_Box) (backend_libs__matching__N_5));
#line 479 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "matching.m"
            }
#line 479 "matching.m"
            {
#line 479 "matching.m"
              backend_libs__matching__Q1_9 = mercury__queue__put_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0, backend_libs__matching__HeadVar__2_2, ((MR_Box) (backend_libs__matching__V_10_10)));
            }
#line 480 "matching.m"
            /* direct tailcall eliminated */
#line 480 "matching.m"
            {
#line 480 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__Ns_6;
#line 480 "matching.m"
              MR_Word backend_libs__matching__HeadVar__2__tmp_copy_2 = backend_libs__matching__Q1_9;

#line 480 "matching.m"
              backend_libs__matching__HeadVar__2_2 = backend_libs__matching__HeadVar__2__tmp_copy_2;
#line 480 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 480 "matching.m"
            }
#line 480 "matching.m"
            continue;
#line 478 "matching.m"
          }
#line 477 "matching.m"
        return backend_libs__matching__Q_3;
#line 477 "matching.m"
      }
#line 477 "matching.m"
      break;
#line 477 "matching.m"
    }
#line 474 "matching.m"
}

#line 431 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__update_matches_2_f_0(
#line 431 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 431 "matching.m"
  MR_Word backend_libs__matching__Matching0_2)
#line 431 "matching.m"
{
#line 433 "matching.m"
  while (MR_TRUE)
#line 433 "matching.m"
    {
#line 433 "matching.m"
      /* tailcall optimized into a loop */
#line 433 "matching.m"
      {
#line 433 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 433 "matching.m"
        MR_Word backend_libs__matching__HeadVar__3_3;

#line 433 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 433 "matching.m"
          backend_libs__matching__HeadVar__3_3 = backend_libs__matching__Matching0_2;
#line 433 "matching.m"
        else
#line 434 "matching.m"
          {
#line 434 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_16_16;
#line 434 "matching.m"
            MR_Word backend_libs__matching__TypeCtorInfo_17_17;
#line 434 "matching.m"
            MR_Word backend_libs__matching__BenefitNode_5;
#line 434 "matching.m"
            MR_Word backend_libs__matching__CostNode_6;
#line 434 "matching.m"
            MR_Word backend_libs__matching__Path_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "matching.m"
            MR_Word backend_libs__matching__CostToBenefitMap0_10;
#line 434 "matching.m"
            MR_Word backend_libs__matching__BenefitToCostMap0_11;
#line 434 "matching.m"
            MR_Word backend_libs__matching__CostToBenefitMap1_12;
#line 434 "matching.m"
            MR_Word backend_libs__matching__BenefitToCostMap1_13;
#line 434 "matching.m"
            MR_Word backend_libs__matching__Matching1_14;
#line 434 "matching.m"
            MR_Word backend_libs__matching__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));

#line 434 "matching.m"
            backend_libs__matching__BenefitNode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, (MR_Integer) 0)));
#line 434 "matching.m"
            backend_libs__matching__CostNode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, (MR_Integer) 1)));
#line 435 "matching.m"
            backend_libs__matching__CostToBenefitMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_2, (MR_Integer) 0)));
#line 435 "matching.m"
            backend_libs__matching__BenefitToCostMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_2, (MR_Integer) 1)));
#line 6146 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_16_16 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 6148 "backend_libs.matching.c"
            backend_libs__matching__TypeCtorInfo_17_17 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 436 "matching.m"
            {
#line 436 "matching.m"
              mercury__map__set_4_p_0(backend_libs__matching__TypeCtorInfo_16_16, backend_libs__matching__TypeCtorInfo_17_17, ((MR_Box) (backend_libs__matching__CostNode_6)), ((MR_Box) (backend_libs__matching__BenefitNode_5)), backend_libs__matching__CostToBenefitMap0_10, &backend_libs__matching__CostToBenefitMap1_12);
            }
#line 437 "matching.m"
            {
#line 437 "matching.m"
              mercury__map__set_4_p_0(backend_libs__matching__TypeCtorInfo_17_17, backend_libs__matching__TypeCtorInfo_16_16, ((MR_Box) (backend_libs__matching__BenefitNode_5)), ((MR_Box) (backend_libs__matching__CostNode_6)), backend_libs__matching__BenefitToCostMap0_11, &backend_libs__matching__BenefitToCostMap1_13);
            }
#line 438 "matching.m"
            {
#line 438 "matching.m"
              backend_libs__matching__Matching1_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__Matching1_14, 0) = ((MR_Box) (backend_libs__matching__CostToBenefitMap1_12));
#line 438 "matching.m"
              MR_hl_field(MR_mktag(0), backend_libs__matching__Matching1_14, 1) = ((MR_Box) (backend_libs__matching__BenefitToCostMap1_13));
#line 438 "matching.m"
            }
#line 439 "matching.m"
            /* direct tailcall eliminated */
#line 439 "matching.m"
            {
#line 439 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__Path_7;
#line 439 "matching.m"
              MR_Word backend_libs__matching__Matching0__tmp_copy_2 = backend_libs__matching__Matching1_14;

#line 439 "matching.m"
              backend_libs__matching__Matching0_2 = backend_libs__matching__Matching0__tmp_copy_2;
#line 439 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 439 "matching.m"
            }
#line 439 "matching.m"
            continue;
#line 434 "matching.m"
          }
#line 433 "matching.m"
        return backend_libs__matching__HeadVar__3_3;
#line 433 "matching.m"
      }
#line 433 "matching.m"
      break;
#line 433 "matching.m"
    }
#line 431 "matching.m"
}

#line 420 "matching.m"
static void MR_CALL 
backend_libs__matching__maximize_matching_4_p_0(
#line 420 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_5,
#line 420 "matching.m"
  MR_Word backend_libs__matching__Graph_6,
#line 420 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0_9,
#line 420 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Matching_10)
#line 420 "matching.m"
{
#line 427 "matching.m"
  while (MR_TRUE)
#line 427 "matching.m"
    {
#line 427 "matching.m"
      /* tailcall optimized into a loop */
#line 427 "matching.m"
      {
#line 427 "matching.m"
        MR_bool backend_libs__matching__succeeded;
#line 427 "matching.m"
        MR_Word backend_libs__matching__Path_8;
#line 444 "matching.m"
        MR_Word backend_libs__matching__MatchingBenefitToCost_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__STATE_VARIABLE_Matching_0_9, (MR_Integer) 1)));
#line 444 "matching.m"
        MR_Word backend_libs__matching__UnMatchedBenefitNodes_19;
#line 444 "matching.m"
        MR_Word backend_libs__matching__Queue_24;
#line 444 "matching.m"
        MR_Word backend_libs__matching__V_25_25;
#line 445 "matching.m"
        MR_Word backend_libs__matching__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__STATE_VARIABLE_Matching_0_9, (MR_Integer) 0)));

#line 446 "matching.m"
        {
#line 446 "matching.m"
          backend_libs__matching__UnMatchedBenefitNodes_19 = backend_libs__matching__get_unmatched_benefit_nodes_2_f_0(backend_libs__matching__BenefitNodes_5, backend_libs__matching__MatchingBenefitToCost_18);
        }
#line 471 "matching.m"
        {
#line 471 "matching.m"
          backend_libs__matching__V_25_25 = mercury__queue__init_0_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0);
        }
#line 471 "matching.m"
        {
#line 471 "matching.m"
          backend_libs__matching__Queue_24 = backend_libs__matching__initial_queue_2_f_0(backend_libs__matching__UnMatchedBenefitNodes_19, backend_libs__matching__V_25_25);
        }
#line 472 "matching.m"
        {
#line 472 "matching.m"
          backend_libs__matching__succeeded = backend_libs__matching__augpath_bf_4_f_0(backend_libs__matching__Queue_24, backend_libs__matching__UnMatchedBenefitNodes_19, backend_libs__matching__Graph_6, backend_libs__matching__STATE_VARIABLE_Matching_0_9, &backend_libs__matching__Path_8);
        }
#line 427 "matching.m"
        if (backend_libs__matching__succeeded)
#line 425 "matching.m"
          {
#line 425 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_Matching_11_11;

#line 425 "matching.m"
            {
#line 425 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Matching_11_11 = backend_libs__matching__update_matches_2_f_0(backend_libs__matching__Path_8, backend_libs__matching__STATE_VARIABLE_Matching_0_9);
            }
#line 426 "matching.m"
            /* direct tailcall eliminated */
#line 426 "matching.m"
            {
#line 426 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_Matching_0__tmp_copy_9 = backend_libs__matching__STATE_VARIABLE_Matching_11_11;

#line 426 "matching.m"
              backend_libs__matching__STATE_VARIABLE_Matching_0_9 = backend_libs__matching__STATE_VARIABLE_Matching_0__tmp_copy_9;
#line 426 "matching.m"
            }
#line 426 "matching.m"
            continue;
#line 425 "matching.m"
          }
#line 427 "matching.m"
        else
#line 427 "matching.m"
          *backend_libs__matching__STATE_VARIABLE_Matching_10 = backend_libs__matching__STATE_VARIABLE_Matching_0_9;
#line 427 "matching.m"
      }
#line 427 "matching.m"
      break;
#line 427 "matching.m"
    }
#line 420 "matching.m"
}

#line 414 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__maximal_matching_2_f_0(
#line 414 "matching.m"
  MR_Word backend_libs__matching__BenefitNodes_4,
#line 414 "matching.m"
  MR_Word backend_libs__matching__Graph_5)
#line 414 "matching.m"
{
#line 416 "matching.m"
  {
#line 416 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 416 "matching.m"
    MR_Word backend_libs__matching__Matching_6;
#line 416 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_10_10 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 416 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_11_11 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 416 "matching.m"
    MR_Word backend_libs__matching__Matching0_7;
#line 416 "matching.m"
    MR_Word backend_libs__matching__V_8_8;
#line 416 "matching.m"
    MR_Word backend_libs__matching__V_9_9;

#line 417 "matching.m"
    {
#line 417 "matching.m"
      backend_libs__matching__V_8_8 = mercury__map__init_0_f_0(backend_libs__matching__TypeCtorInfo_10_10, backend_libs__matching__TypeCtorInfo_11_11);
    }
#line 417 "matching.m"
    {
#line 417 "matching.m"
      backend_libs__matching__V_9_9 = mercury__map__init_0_f_0(backend_libs__matching__TypeCtorInfo_11_11, backend_libs__matching__TypeCtorInfo_10_10);
    }
#line 417 "matching.m"
    {
#line 417 "matching.m"
      backend_libs__matching__Matching0_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_7, 0) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 417 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Matching0_7, 1) = ((MR_Box) (backend_libs__matching__V_9_9));
#line 417 "matching.m"
    }
#line 418 "matching.m"
    {
#line 418 "matching.m"
      backend_libs__matching__maximize_matching_4_p_0(backend_libs__matching__BenefitNodes_4, backend_libs__matching__Graph_5, backend_libs__matching__Matching0_7, &backend_libs__matching__Matching_6);
    }
#line 416 "matching.m"
    return backend_libs__matching__Matching_6;
#line 416 "matching.m"
  }
#line 414 "matching.m"
}

#line 398 "matching.m"
static void MR_CALL 
backend_libs__matching__add_benefit_cost_links_4_p_0(
#line 398 "matching.m"
  MR_Word backend_libs__matching__Costs_5,
#line 398 "matching.m"
  MR_Word backend_libs__matching__Benefit_6,
#line 398 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10,
#line 398 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11)
#line 398 "matching.m"
{
#line 406 "matching.m"
  {
#line 406 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 406 "matching.m"
    MR_Word backend_libs__matching__BenefitCosts0_8;
#line 403 "matching.m"
    MR_Box backend_libs__matching__conv0_BenefitCosts0_8;

#line 403 "matching.m"
    {
#line 403 "matching.m"
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, ((MR_Box) (backend_libs__matching__Benefit_6)), &backend_libs__matching__conv0_BenefitCosts0_8);
    }
#line 403 "matching.m"
    if (backend_libs__matching__succeeded)
#line 403 "matching.m"
      {
#line 403 "matching.m"
        backend_libs__matching__BenefitCosts0_8 = ((MR_Word) backend_libs__matching__conv0_BenefitCosts0_8);
#line 403 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 403 "matching.m"
      }
#line 406 "matching.m"
    if (backend_libs__matching__succeeded)
#line 404 "matching.m"
      {
#line 404 "matching.m"
        MR_Word backend_libs__matching__BenefitCosts_9;

#line 404 "matching.m"
        {
#line 404 "matching.m"
          mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__BenefitCosts0_8, backend_libs__matching__Costs_5, &backend_libs__matching__BenefitCosts_9);
        }
#line 405 "matching.m"
        {
#line 405 "matching.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], ((MR_Box) (backend_libs__matching__Benefit_6)), ((MR_Box) (backend_libs__matching__BenefitCosts_9)), backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);
#line 405 "matching.m"
          return;
        }
#line 404 "matching.m"
      }
#line 406 "matching.m"
    else
#line 407 "matching.m"
      {
#line 407 "matching.m"
        {
#line 407 "matching.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[3], ((MR_Box) (backend_libs__matching__Benefit_6)), ((MR_Box) (backend_libs__matching__Costs_5)), backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_10, backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_11);
#line 407 "matching.m"
          return;
        }
#line 407 "matching.m"
      }
#line 406 "matching.m"
  }
#line 398 "matching.m"
}

#line 386 "matching.m"
static void MR_CALL 
backend_libs__matching__add_cost_benefit_links_4_p_0(
#line 386 "matching.m"
  MR_Word backend_libs__matching__Benefits_5,
#line 386 "matching.m"
  MR_Word backend_libs__matching__Cost_6,
#line 386 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10,
#line 386 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11)
#line 386 "matching.m"
{
#line 394 "matching.m"
  {
#line 394 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 394 "matching.m"
    MR_Word backend_libs__matching__CostBenefits0_8;
#line 391 "matching.m"
    MR_Box backend_libs__matching__conv0_CostBenefits0_8;

#line 391 "matching.m"
    {
#line 391 "matching.m"
      backend_libs__matching__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, ((MR_Box) (backend_libs__matching__Cost_6)), &backend_libs__matching__conv0_CostBenefits0_8);
    }
#line 391 "matching.m"
    if (backend_libs__matching__succeeded)
#line 391 "matching.m"
      {
#line 391 "matching.m"
        backend_libs__matching__CostBenefits0_8 = ((MR_Word) backend_libs__matching__conv0_CostBenefits0_8);
#line 391 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 391 "matching.m"
      }
#line 394 "matching.m"
    if (backend_libs__matching__succeeded)
#line 392 "matching.m"
      {
#line 392 "matching.m"
        MR_Word backend_libs__matching__CostBenefits_9;

#line 392 "matching.m"
        {
#line 392 "matching.m"
          mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__CostBenefits0_8, backend_libs__matching__Benefits_5, &backend_libs__matching__CostBenefits_9);
        }
#line 393 "matching.m"
        {
#line 393 "matching.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], ((MR_Box) (backend_libs__matching__Cost_6)), ((MR_Box) (backend_libs__matching__CostBenefits_9)), backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);
#line 393 "matching.m"
          return;
        }
#line 392 "matching.m"
      }
#line 394 "matching.m"
    else
#line 395 "matching.m"
      {
#line 395 "matching.m"
        {
#line 395 "matching.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, (MR_Word) &backend_libs__matching_scalar_common_1[2], ((MR_Box) (backend_libs__matching__Cost_6)), ((MR_Box) (backend_libs__matching__Benefits_5)), backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_10, backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_11);
#line 395 "matching.m"
          return;
        }
#line 395 "matching.m"
      }
#line 394 "matching.m"
  }
#line 386 "matching.m"
}

#line 383 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_2(
#line 383 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 383 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 383 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 383 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 383 "matching.m"
{
#line 383 "matching.m"
  {
#line 383 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 383 "matching.m"
    MR_Word backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11;

#line 383 "matching.m"
    {
#line 383 "matching.m"
      backend_libs__matching__add_benefit_cost_links_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11);
    }
#line 383 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv2_STATE_VARIABLE_BenefitToCostsMap_11));
#line 383 "matching.m"
  }
#line 383 "matching.m"
}

#line 381 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0_1(
#line 381 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 381 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 381 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 381 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 381 "matching.m"
{
#line 381 "matching.m"
  {
#line 381 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 381 "matching.m"
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11;

#line 381 "matching.m"
    {
#line 381 "matching.m"
      backend_libs__matching__add_cost_benefit_links_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11);
    }
#line 381 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_CostToBenefitsMap_11));
#line 381 "matching.m"
  }
#line 381 "matching.m"
}

#line 373 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_links_5_p_0(
#line 373 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 373 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11,
#line 373 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12,
#line 373 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13,
#line 373 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14)
#line 373 "matching.m"
{
#line 380 "matching.m"
  {
#line 380 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 380 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_24_24;
#line 380 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_29_29;
#line 380 "matching.m"
    MR_Word backend_libs__matching__Costs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "matching.m"
    MR_Word backend_libs__matching__Benefits_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
#line 380 "matching.m"
    MR_Word backend_libs__matching__V_15_15;
#line 380 "matching.m"
    MR_Word backend_libs__matching__V_16_16;
#line 380 "matching.m"
    MR_Word backend_libs__matching__V_18_18;
#line 380 "matching.m"
    MR_Word backend_libs__matching__V_19_19;
#line 379 "matching.m"
    MR_Word backend_libs__matching___FieldVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 381 "matching.m"
    MR_Box backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12;
#line 383 "matching.m"
    MR_Box backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14;

#line 381 "matching.m"
    {
#line 381 "matching.m"
      backend_libs__matching__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 381 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[3]));
#line 381 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_1));
#line 381 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 381 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_15_15, 3) = ((MR_Box) (backend_libs__matching__Benefits_8));
#line 381 "matching.m"
    }
#line 6626 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_24_24 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 382 "matching.m"
    {
#line 382 "matching.m"
      backend_libs__matching__V_16_16 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_24_24, backend_libs__matching__Costs_7);
    }
#line 381 "matching.m"
    {
#line 381 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_24_24, (MR_Word) &backend_libs__matching_scalar_common_2[0], backend_libs__matching__V_15_15, backend_libs__matching__V_16_16, ((MR_Box) (backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_0_11)), &backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12);
    }
#line 381 "matching.m"
    *backend_libs__matching__STATE_VARIABLE_CostToBenefitsMap_12 = ((MR_Word) backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12);
#line 383 "matching.m"
    {
#line 383 "matching.m"
      backend_libs__matching__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[4]));
#line 383 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 1) = ((MR_Box) (backend_libs__matching__create_graph_links_5_p_0_2));
#line 383 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 383 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_18_18, 3) = ((MR_Box) (backend_libs__matching__Costs_7));
#line 383 "matching.m"
    }
#line 6654 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 384 "matching.m"
    {
#line 384 "matching.m"
      backend_libs__matching__V_19_19 = mercury__set__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_29_29, backend_libs__matching__Benefits_8);
    }
#line 383 "matching.m"
    {
#line 383 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_29_29, (MR_Word) &backend_libs__matching_scalar_common_2[1], backend_libs__matching__V_18_18, backend_libs__matching__V_19_19, ((MR_Box) (backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_0_13)), &backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14);
    }
#line 383 "matching.m"
    *backend_libs__matching__STATE_VARIABLE_BenefitToCostsMap_14 = ((MR_Word) backend_libs__matching__conv3_STATE_VARIABLE_BenefitToCostsMap_14);
#line 380 "matching.m"
  }
#line 373 "matching.m"
}

#line 369 "matching.m"
static void MR_CALL 
backend_libs__matching__create_graph_1_f_0_1(
#line 369 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 369 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 369 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 369 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3,
#line 369 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_4,
#line 369 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_5)
#line 369 "matching.m"
{
#line 369 "matching.m"
  {
#line 369 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 369 "matching.m"
    MR_Word backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12;
#line 369 "matching.m"
    MR_Word backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14;

#line 369 "matching.m"
    {
#line 369 "matching.m"
      backend_libs__matching__create_graph_links_5_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12, ((MR_Word) backend_libs__matching__wrapper_arg_4), &backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14);
    }
#line 369 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv1_STATE_VARIABLE_CostToBenefitsMap_12));
#line 369 "matching.m"
    *backend_libs__matching__wrapper_arg_5 = ((MR_Box) (backend_libs__matching__conv0_STATE_VARIABLE_BenefitToCostsMap_14));
#line 369 "matching.m"
  }
#line 369 "matching.m"
}

#line 366 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__create_graph_1_f_0(
#line 366 "matching.m"
  MR_Word backend_libs__matching__CostsBenefits_3)
#line 366 "matching.m"
{
#line 368 "matching.m"
  {
#line 368 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 368 "matching.m"
    MR_Word backend_libs__matching__Graph_4;
#line 368 "matching.m"
    MR_Word backend_libs__matching__CostToBenefitsMap_5;
#line 368 "matching.m"
    MR_Word backend_libs__matching__BenefitToCostsMap_6;
#line 368 "matching.m"
    MR_Word backend_libs__matching__V_8_8;
#line 368 "matching.m"
    MR_Word backend_libs__matching__V_9_9;
#line 369 "matching.m"
    MR_Box backend_libs__matching__conv3_CostToBenefitsMap_5;
#line 369 "matching.m"
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
#line 369 "matching.m"
    {
#line 369 "matching.m"
      mercury__list__foldl2_6_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_field_costs_benefits_0, (MR_Word) &backend_libs__matching_scalar_common_2[0], (MR_Word) &backend_libs__matching_scalar_common_2[1], (MR_Word) &backend_libs__matching_scalar_common_2[12], backend_libs__matching__CostsBenefits_3, ((MR_Box) (backend_libs__matching__V_8_8)), &backend_libs__matching__conv3_CostToBenefitsMap_5, ((MR_Box) (backend_libs__matching__V_9_9)), &backend_libs__matching__conv2_BenefitToCostsMap_6);
    }
#line 369 "matching.m"
    backend_libs__matching__CostToBenefitsMap_5 = ((MR_Word) backend_libs__matching__conv3_CostToBenefitsMap_5);
#line 369 "matching.m"
    backend_libs__matching__BenefitToCostsMap_6 = ((MR_Word) backend_libs__matching__conv2_BenefitToCostsMap_6);
#line 371 "matching.m"
    {
#line 371 "matching.m"
      backend_libs__matching__Graph_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_4, 0) = ((MR_Box) (backend_libs__matching__CostToBenefitsMap_5));
#line 371 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__Graph_4, 1) = ((MR_Box) (backend_libs__matching__BenefitToCostsMap_6));
#line 371 "matching.m"
    }
#line 368 "matching.m"
    return backend_libs__matching__Graph_4;
#line 368 "matching.m"
  }
#line 366 "matching.m"
}

#line 356 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_costs_3_p_0(
#line 356 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 356 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Costs_0_8,
#line 356 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Costs_9)
#line 356 "matching.m"
{
#line 359 "matching.m"
  {
#line 359 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 359 "matching.m"
    MR_Word backend_libs__matching__FieldCosts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 359 "matching.m"
    MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 359 "matching.m"
    MR_Word backend_libs__matching__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));

#line 360 "matching.m"
    {
#line 360 "matching.m"
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0, backend_libs__matching__FieldCosts_5, backend_libs__matching__STATE_VARIABLE_Costs_0_8, backend_libs__matching__STATE_VARIABLE_Costs_9);
#line 360 "matching.m"
      return;
    }
#line 359 "matching.m"
  }
#line 356 "matching.m"
}

#line 348 "matching.m"
static void MR_CALL 
backend_libs__matching__gather_benefits_3_p_0(
#line 348 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 348 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_Benefits_0_8,
#line 348 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_Benefits_9)
#line 348 "matching.m"
{
#line 351 "matching.m"
  {
#line 351 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 351 "matching.m"
    MR_Word backend_libs__matching__FieldBenefits_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 2)));
#line 351 "matching.m"
    MR_Word backend_libs__matching__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 351 "matching.m"
    MR_Word backend_libs__matching__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));

#line 352 "matching.m"
    {
#line 352 "matching.m"
      mercury__set__union_3_p_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0, backend_libs__matching__FieldBenefits_6, backend_libs__matching__STATE_VARIABLE_Benefits_0_8, backend_libs__matching__STATE_VARIABLE_Benefits_9);
#line 352 "matching.m"
      return;
    }
#line 351 "matching.m"
  }
#line 348 "matching.m"
}

#line 335 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_benefit_op_copies_2_f_0(
#line 335 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 335 "matching.m"
  MR_Word backend_libs__matching__Op_5)
#line 335 "matching.m"
{
#line 337 "matching.m"
  {
#line 337 "matching.m"
    MR_bool backend_libs__matching__succeeded = (backend_libs__matching__Cur_4 > (MR_Integer) 0);
#line 337 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 337 "matching.m"
    if (backend_libs__matching__succeeded)
#line 339 "matching.m"
      {
#line 339 "matching.m"
        MR_Word backend_libs__matching__V_7_7;
#line 339 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 339 "matching.m"
        MR_Integer backend_libs__matching__V_9_9;

#line 339 "matching.m"
        {
#line 339 "matching.m"
          backend_libs__matching__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 0) = ((MR_Box) (backend_libs__matching__Op_5));
#line 339 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 1) = ((MR_Box) (backend_libs__matching__Cur_4));
#line 339 "matching.m"
        }
#line 339 "matching.m"
        backend_libs__matching__V_9_9 = (backend_libs__matching__Cur_4 - (MR_Integer) 1);
#line 339 "matching.m"
        {
#line 339 "matching.m"
          backend_libs__matching__V_8_8 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__V_9_9, backend_libs__matching__Op_5);
        }
#line 339 "matching.m"
        {
#line 339 "matching.m"
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__V_7_7));
#line 339 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 339 "matching.m"
        }
#line 339 "matching.m"
      }
#line 337 "matching.m"
    else
#line 341 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 337 "matching.m"
  }
#line 335 "matching.m"
}

#line 328 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_benefit_op_3_f_0(
#line 328 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 328 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 328 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 328 "matching.m"
{
#line 330 "matching.m"
  {
#line 330 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 330 "matching.m"
    MR_Word backend_libs__matching__HeadVar__4_4;

#line 330 "matching.m"
    if (((MR_tag((MR_Word) backend_libs__matching__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 331 "matching.m"
      {
#line 331 "matching.m"
        return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__HeadVar__2_2, backend_libs__matching__HeadVar__3_3);
      }
#line 330 "matching.m"
    else
#line 333 "matching.m"
      {
#line 333 "matching.m"
        return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_benefit_op_copies_2_f_0(backend_libs__matching__HeadVar__1_1, backend_libs__matching__HeadVar__3_3);
      }
#line 330 "matching.m"
    return backend_libs__matching__HeadVar__4_4;
#line 330 "matching.m"
  }
#line 328 "matching.m"
}

#line 319 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__make_cost_op_copies_2_f_0(
#line 319 "matching.m"
  MR_Integer backend_libs__matching__Cur_4,
#line 319 "matching.m"
  MR_Word backend_libs__matching__Op_5)
#line 319 "matching.m"
{
#line 321 "matching.m"
  {
#line 321 "matching.m"
    MR_bool backend_libs__matching__succeeded = (backend_libs__matching__Cur_4 > (MR_Integer) 0);
#line 321 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 321 "matching.m"
    if (backend_libs__matching__succeeded)
#line 323 "matching.m"
      {
#line 323 "matching.m"
        MR_Word backend_libs__matching__V_7_7;
#line 323 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 323 "matching.m"
        MR_Integer backend_libs__matching__V_9_9;

#line 323 "matching.m"
        {
#line 323 "matching.m"
          backend_libs__matching__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 0) = ((MR_Box) (backend_libs__matching__Op_5));
#line 323 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_7_7, 1) = ((MR_Box) (backend_libs__matching__Cur_4));
#line 323 "matching.m"
        }
#line 323 "matching.m"
        backend_libs__matching__V_9_9 = (backend_libs__matching__Cur_4 - (MR_Integer) 1);
#line 323 "matching.m"
        {
#line 323 "matching.m"
          backend_libs__matching__V_8_8 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__V_9_9, backend_libs__matching__Op_5);
        }
#line 323 "matching.m"
        {
#line 323 "matching.m"
          backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 0) = ((MR_Box) (backend_libs__matching__V_7_7));
#line 323 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__3_3, 1) = ((MR_Box) (backend_libs__matching__V_8_8));
#line 323 "matching.m"
        }
#line 323 "matching.m"
      }
#line 321 "matching.m"
    else
#line 325 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 321 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 321 "matching.m"
  }
#line 319 "matching.m"
}

#line 312 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__replicate_cost_op_3_f_0(
#line 312 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 312 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__2_2,
#line 312 "matching.m"
  MR_Word backend_libs__matching__HeadVar__3_3)
#line 312 "matching.m"
{
#line 314 "matching.m"
  {
#line 314 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 314 "matching.m"
    MR_Word backend_libs__matching__HeadVar__4_4;

#line 314 "matching.m"
    if ((backend_libs__matching__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "matching.m"
      {
#line 317 "matching.m"
        {
#line 317 "matching.m"
          return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 316 "matching.m"
      }
#line 314 "matching.m"
    else
#line 315 "matching.m"
      {
#line 315 "matching.m"
        return backend_libs__matching__HeadVar__4_4 = backend_libs__matching__make_cost_op_copies_2_f_0(backend_libs__matching__HeadVar__2_2, backend_libs__matching__HeadVar__3_3);
      }
#line 314 "matching.m"
    return backend_libs__matching__HeadVar__4_4;
#line 314 "matching.m"
  }
#line 312 "matching.m"
}

#line 297 "matching.m"
static void MR_CALL 
backend_libs__matching__find_cell_var_loads_for_field_4_p_0(
#line 297 "matching.m"
  MR_Word backend_libs__matching__HeadVar__1_1,
#line 297 "matching.m"
  MR_Word backend_libs__matching__FieldVar_2,
#line 297 "matching.m"
  MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0_3,
#line 297 "matching.m"
  MR_Word * backend_libs__matching__STATE_VARIABLE_CostOps_4)
#line 297 "matching.m"
{
#line 300 "matching.m"
  while (MR_TRUE)
#line 300 "matching.m"
    {
#line 300 "matching.m"
      /* tailcall optimized into a loop */
#line 300 "matching.m"
      {
#line 300 "matching.m"
        MR_bool backend_libs__matching__succeeded;

#line 300 "matching.m"
        if ((backend_libs__matching__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "matching.m"
          *backend_libs__matching__STATE_VARIABLE_CostOps_4 = backend_libs__matching__STATE_VARIABLE_CostOps_0_3;
#line 300 "matching.m"
        else
#line 302 "matching.m"
          {
#line 302 "matching.m"
            MR_Integer backend_libs__matching__SegmentNum_9;
#line 302 "matching.m"
            MR_Word backend_libs__matching__SegmentVars_10;
#line 302 "matching.m"
            MR_Word backend_libs__matching__AfterFlush_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 1)));
#line 302 "matching.m"
            MR_Word backend_libs__matching__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__1_1, (MR_Integer) 0)));
#line 302 "matching.m"
            MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_17_17;

#line 301 "matching.m"
            backend_libs__matching__SegmentNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_16_16, (MR_Integer) 0)));
#line 301 "matching.m"
            backend_libs__matching__SegmentVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__V_16_16, (MR_Integer) 1)));
#line 303 "matching.m"
            {
#line 303 "matching.m"
              backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__SegmentVars_10, backend_libs__matching__FieldVar_2);
            }
#line 305 "matching.m"
            if (backend_libs__matching__succeeded)
#line 304 "matching.m"
              {
#line 304 "matching.m"
                MR_Word backend_libs__matching__V_18_18;

#line 304 "matching.m"
                {
#line 304 "matching.m"
                  backend_libs__matching__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 304 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__V_18_18, 0) = ((MR_Box) (backend_libs__matching__SegmentNum_9));
#line 304 "matching.m"
                }
#line 304 "matching.m"
                {
#line 304 "matching.m"
                  backend_libs__matching__STATE_VARIABLE_CostOps_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_CostOps_17_17, 0) = ((MR_Box) (backend_libs__matching__V_18_18));
#line 304 "matching.m"
                  MR_hl_field(MR_mktag(1), backend_libs__matching__STATE_VARIABLE_CostOps_17_17, 1) = ((MR_Box) (backend_libs__matching__STATE_VARIABLE_CostOps_0_3));
#line 304 "matching.m"
                }
#line 304 "matching.m"
              }
#line 305 "matching.m"
            else
#line 305 "matching.m"
              backend_libs__matching__STATE_VARIABLE_CostOps_17_17 = backend_libs__matching__STATE_VARIABLE_CostOps_0_3;
#line 308 "matching.m"
            /* direct tailcall eliminated */
#line 308 "matching.m"
            {
#line 308 "matching.m"
              MR_Word backend_libs__matching__HeadVar__1__tmp_copy_1 = backend_libs__matching__AfterFlush_11;
#line 308 "matching.m"
              MR_Word backend_libs__matching__STATE_VARIABLE_CostOps_0__tmp_copy_3 = backend_libs__matching__STATE_VARIABLE_CostOps_17_17;

#line 308 "matching.m"
              backend_libs__matching__STATE_VARIABLE_CostOps_0_3 = backend_libs__matching__STATE_VARIABLE_CostOps_0__tmp_copy_3;
#line 308 "matching.m"
              backend_libs__matching__HeadVar__1_1 = backend_libs__matching__HeadVar__1__tmp_copy_1;
#line 308 "matching.m"
            }
#line 308 "matching.m"
            continue;
#line 302 "matching.m"
          }
#line 300 "matching.m"
      }
#line 300 "matching.m"
      break;
#line 300 "matching.m"
    }
#line 297 "matching.m"
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

#line 259 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__find_costs_benefits_6_f_0(
#line 259 "matching.m"
  MR_Word backend_libs__matching__CellVar_8,
#line 259 "matching.m"
  MR_Word backend_libs__matching__BeforeFlush_9,
#line 259 "matching.m"
  MR_Word backend_libs__matching__AfterFlush_10,
#line 259 "matching.m"
  MR_Word backend_libs__matching__CellVarFlushedLater_11,
#line 259 "matching.m"
  MR_Word backend_libs__matching__MatchingParams_12,
#line 259 "matching.m"
  MR_Word backend_libs__matching__FieldVar_13)
#line 259 "matching.m"
{
#line 264 "matching.m"
  {
#line 264 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 264 "matching.m"
    MR_Word backend_libs__matching__FieldCostsBenefits_14;
#line 264 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_65_65;
#line 264 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_70_70;
#line 264 "matching.m"
    MR_Word backend_libs__matching__CostOps0_15;
#line 264 "matching.m"
    MR_Word backend_libs__matching__CostOps_16;
#line 264 "matching.m"
    MR_Word backend_libs__matching__BenefitOps0_17;
#line 264 "matching.m"
    MR_Word backend_libs__matching__BenefitOps_18;
#line 264 "matching.m"
    MR_Integer backend_libs__matching__CellVarStoreCost_19;
#line 264 "matching.m"
    MR_Integer backend_libs__matching__CellVarLoadCost_20;
#line 264 "matching.m"
    MR_Word backend_libs__matching__CostNodeLists_21;
#line 264 "matching.m"
    MR_Word backend_libs__matching__CostNodes_22;
#line 264 "matching.m"
    MR_Word backend_libs__matching__CostNodeSet_23;
#line 264 "matching.m"
    MR_Integer backend_libs__matching__FieldVarStoreCost_24;
#line 264 "matching.m"
    MR_Integer backend_libs__matching__FieldVarLoadCost_25;
#line 264 "matching.m"
    MR_Word backend_libs__matching__BenefitNodeLists_26;
#line 264 "matching.m"
    MR_Word backend_libs__matching__BenefitNodes_27;
#line 264 "matching.m"
    MR_Word backend_libs__matching__BenefitNodeSet_28;
#line 264 "matching.m"
    MR_Word backend_libs__matching__V_31_31;
#line 264 "matching.m"
    MR_Word backend_libs__matching__V_34_34;
#line 264 "matching.m"
    MR_Word backend_libs__matching__V_35_35;
#line 280 "matching.m"
    MR_Integer backend_libs__matching__V_37_37;
#line 280 "matching.m"
    MR_Integer backend_libs__matching__V_38_38;
#line 280 "matching.m"
    MR_Integer backend_libs__matching__V_39_39;
#line 280 "matching.m"
    MR_Integer backend_libs__matching__V_40_40;
#line 280 "matching.m"
    MR_Word backend_libs__matching__V_41_41;
#line 287 "matching.m"
    MR_Integer backend_libs__matching__V_48_48;
#line 287 "matching.m"
    MR_Integer backend_libs__matching__V_49_49;
#line 287 "matching.m"
    MR_Integer backend_libs__matching__V_51_51;
#line 287 "matching.m"
    MR_Integer backend_libs__matching__V_52_52;
#line 287 "matching.m"
    MR_Word backend_libs__matching__V_53_53;

#line 265 "matching.m"
    {
#line 265 "matching.m"
      backend_libs__matching__find_cell_var_loads_for_field_4_p_0(backend_libs__matching__AfterFlush_10, backend_libs__matching__FieldVar_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__matching__CostOps0_15);
    }
#line 269 "matching.m"
#line 269 "matching.m"
    switch (backend_libs__matching__CellVarFlushedLater_11) {
#line 269 "matching.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 269 "matching.m"
      case (MR_Integer) 0:
#line 270 "matching.m"
        {
#line 271 "matching.m"
          {
#line 271 "matching.m"
            backend_libs__matching__CostOps_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__CostOps_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__CostOps_16, 1) = ((MR_Box) (backend_libs__matching__CostOps0_15));
#line 271 "matching.m"
          }
#line 270 "matching.m"
        }
#line 269 "matching.m"
        break;
#line 269 "matching.m"
      case (MR_Integer) 1:
#line 268 "matching.m"
        backend_libs__matching__CostOps_16 = backend_libs__matching__CostOps0_15;
#line 269 "matching.m"
        break;
#line 269 "matching.m"
    }
#line 273 "matching.m"
    {
#line 273 "matching.m"
      backend_libs__matching__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 273 "matching.m"
      MR_hl_field(MR_mktag(1), backend_libs__matching__V_31_31, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
#line 273 "matching.m"
    }
#line 273 "matching.m"
    {
#line 273 "matching.m"
      backend_libs__matching__BenefitOps0_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "matching.m"
      MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps0_17, 0) = ((MR_Box) (backend_libs__matching__V_31_31));
#line 273 "matching.m"
      MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps0_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "matching.m"
    }
#line 274 "matching.m"
    {
#line 274 "matching.m"
      backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__BeforeFlush_9, backend_libs__matching__CellVar_8);
    }
#line 276 "matching.m"
    if (backend_libs__matching__succeeded)
#line 275 "matching.m"
      backend_libs__matching__BenefitOps_18 = backend_libs__matching__BenefitOps0_17;
#line 276 "matching.m"
    else
#line 277 "matching.m"
      {
#line 277 "matching.m"
        MR_Word backend_libs__matching__V_33_33;

#line 277 "matching.m"
        {
#line 277 "matching.m"
          backend_libs__matching__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_33_33, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
#line 277 "matching.m"
        }
#line 277 "matching.m"
        {
#line 277 "matching.m"
          backend_libs__matching__BenefitOps_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps_18, 0) = ((MR_Box) (backend_libs__matching__V_33_33));
#line 277 "matching.m"
          MR_hl_field(MR_mktag(1), backend_libs__matching__BenefitOps_18, 1) = ((MR_Box) (backend_libs__matching__BenefitOps0_17));
#line 277 "matching.m"
        }
#line 277 "matching.m"
      }
#line 280 "matching.m"
    backend_libs__matching__CellVarStoreCost_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 0)));
#line 280 "matching.m"
    backend_libs__matching__CellVarLoadCost_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 1)));
#line 280 "matching.m"
    backend_libs__matching__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 2)));
#line 280 "matching.m"
    backend_libs__matching__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 3)));
#line 280 "matching.m"
    backend_libs__matching__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 4)));
#line 280 "matching.m"
    backend_libs__matching__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 5)));
#line 280 "matching.m"
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
#line 282 "matching.m"
    {
#line 282 "matching.m"
      backend_libs__matching__CostNodeLists_21 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0, (MR_Word) &backend_libs__matching_scalar_common_1[4], backend_libs__matching__V_34_34, backend_libs__matching__CostOps_16);
    }
#line 7441 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_65_65 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 285 "matching.m"
    {
#line 285 "matching.m"
      mercury__list__condense_2_p_0(backend_libs__matching__TypeCtorInfo_65_65, backend_libs__matching__CostNodeLists_21, &backend_libs__matching__CostNodes_22);
    }
#line 286 "matching.m"
    {
#line 286 "matching.m"
      mercury__set__list_to_set_2_p_0(backend_libs__matching__TypeCtorInfo_65_65, backend_libs__matching__CostNodes_22, &backend_libs__matching__CostNodeSet_23);
    }
#line 287 "matching.m"
    backend_libs__matching__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 0)));
#line 287 "matching.m"
    backend_libs__matching__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 1)));
#line 287 "matching.m"
    backend_libs__matching__FieldVarStoreCost_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 2)));
#line 287 "matching.m"
    backend_libs__matching__FieldVarLoadCost_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 3)));
#line 287 "matching.m"
    backend_libs__matching__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 4)));
#line 287 "matching.m"
    backend_libs__matching__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_12, (MR_Integer) 5)));
#line 287 "matching.m"
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
#line 289 "matching.m"
    {
#line 289 "matching.m"
      backend_libs__matching__BenefitNodeLists_26 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0, (MR_Word) &backend_libs__matching_scalar_common_1[5], backend_libs__matching__V_35_35, backend_libs__matching__BenefitOps_18);
    }
#line 7488 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_70_70 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 292 "matching.m"
    {
#line 292 "matching.m"
      mercury__list__condense_2_p_0(backend_libs__matching__TypeCtorInfo_70_70, backend_libs__matching__BenefitNodeLists_26, &backend_libs__matching__BenefitNodes_27);
    }
#line 293 "matching.m"
    {
#line 293 "matching.m"
      mercury__set__list_to_set_2_p_0(backend_libs__matching__TypeCtorInfo_70_70, backend_libs__matching__BenefitNodes_27, &backend_libs__matching__BenefitNodeSet_28);
    }
#line 294 "matching.m"
    {
#line 294 "matching.m"
      backend_libs__matching__FieldCostsBenefits_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 294 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 0) = ((MR_Box) (backend_libs__matching__FieldVar_13));
#line 294 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 1) = ((MR_Box) (backend_libs__matching__CostNodeSet_23));
#line 294 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__FieldCostsBenefits_14, 2) = ((MR_Box) (backend_libs__matching__BenefitNodeSet_28));
#line 294 "matching.m"
    }
#line 264 "matching.m"
    return backend_libs__matching__FieldCostsBenefits_14;
#line 264 "matching.m"
  }
#line 259 "matching.m"
}

#line 247 "matching.m"
static MR_Word MR_CALL 
backend_libs__matching__number_segments_2_f_0(
#line 247 "matching.m"
  MR_Integer backend_libs__matching__HeadVar__1_1,
#line 247 "matching.m"
  MR_Word backend_libs__matching__HeadVar__2_2)
#line 247 "matching.m"
{
#line 250 "matching.m"
  {
#line 250 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 250 "matching.m"
    MR_Word backend_libs__matching__HeadVar__3_3;

#line 250 "matching.m"
    if ((backend_libs__matching__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "matching.m"
      backend_libs__matching__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "matching.m"
    else
#line 251 "matching.m"
      {
#line 251 "matching.m"
        MR_Word backend_libs__matching__Segment_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "matching.m"
        MR_Word backend_libs__matching__Segments_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__matching__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "matching.m"
        MR_Word backend_libs__matching__V_8_8;
#line 251 "matching.m"
        MR_Word backend_libs__matching__V_9_9;
#line 251 "matching.m"
        MR_Integer backend_libs__matching__V_10_10;

#line 252 "matching.m"
        {
#line 252 "matching.m"
          backend_libs__matching__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, 0) = ((MR_Box) (backend_libs__matching__HeadVar__1_1));
#line 252 "matching.m"
          MR_hl_field(MR_mktag(0), backend_libs__matching__V_8_8, 1) = ((MR_Box) (backend_libs__matching__Segment_6));
#line 252 "matching.m"
        }
#line 252 "matching.m"
        backend_libs__matching__V_10_10 = (backend_libs__matching__HeadVar__1_1 + (MR_Integer) 1);
#line 252 "matching.m"
        {
#line 252 "matching.m"
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
#line 251 "matching.m"
      }
#line 250 "matching.m"
    return backend_libs__matching__HeadVar__3_3;
#line 250 "matching.m"
  }
#line 247 "matching.m"
}

#line 240 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__simplify_segment_4_p_0(
#line 240 "matching.m"
  MR_Word backend_libs__matching__CellVar_5,
#line 240 "matching.m"
  MR_Word backend_libs__matching__CandidateArgVars_6,
#line 240 "matching.m"
  MR_Word backend_libs__matching__SegmentVars0_7,
#line 240 "matching.m"
  MR_Word * backend_libs__matching__SegmentVars_8)
#line 240 "matching.m"
{
#line 243 "matching.m"
  {
#line 243 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 243 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_10_10;

#line 244 "matching.m"
    {
#line 244 "matching.m"
      backend_libs__matching__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__matching__SegmentVars0_7, backend_libs__matching__CellVar_5);
    }
#line 244 "matching.m"
    backend_libs__matching__succeeded = !(backend_libs__matching__succeeded);
#line 243 "matching.m"
    if (backend_libs__matching__succeeded)
#line 243 "matching.m"
      {
#line 7621 "backend_libs.matching.c"
        backend_libs__matching__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 245 "matching.m"
        {
#line 245 "matching.m"
          *backend_libs__matching__SegmentVars_8 = parse_tree__set_of_var__intersect_2_f_0(backend_libs__matching__TypeCtorInfo_10_10, backend_libs__matching__SegmentVars0_7, backend_libs__matching__CandidateArgVars_6);
        }
#line 245 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 243 "matching.m"
      }
#line 243 "matching.m"
    return backend_libs__matching__succeeded;
#line 243 "matching.m"
  }
#line 240 "matching.m"
}

#line 197 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_9(
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
    MR_Word backend_libs__matching__conv11_CostOp_3;

#line 197 "matching.m"
    {
#line 197 "matching.m"
      backend_libs__matching__conv11_CostOp_3 = backend_libs__matching__project_cost_op_1_f_0(((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 197 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv11_CostOp_3));
#line 197 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 197 "matching.m"
  }
#line 197 "matching.m"
}

#line 196 "matching.m"
static MR_Box MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_8(
#line 196 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 196 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 196 "matching.m"
{
#line 196 "matching.m"
  {
#line 196 "matching.m"
    MR_Box backend_libs__matching__wrapper_arg_2;
#line 196 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 196 "matching.m"
    MR_Word backend_libs__matching__conv10_BenefitOp_3;

#line 196 "matching.m"
    {
#line 196 "matching.m"
      backend_libs__matching__conv10_BenefitOp_3 = backend_libs__matching__project_benefit_op_1_f_0(((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 196 "matching.m"
    backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv10_BenefitOp_3));
#line 196 "matching.m"
    return backend_libs__matching__wrapper_arg_2;
#line 196 "matching.m"
  }
#line 196 "matching.m"
}

#line 194 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_7(
#line 194 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 194 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 194 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 194 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 194 "matching.m"
{
#line 194 "matching.m"
  {
#line 194 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 194 "matching.m"
    MR_Word backend_libs__matching__conv8_STATE_VARIABLE_Costs_9;

#line 194 "matching.m"
    {
#line 194 "matching.m"
      backend_libs__matching__gather_costs_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv8_STATE_VARIABLE_Costs_9);
    }
#line 194 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv8_STATE_VARIABLE_Costs_9));
#line 194 "matching.m"
  }
#line 194 "matching.m"
}

#line 192 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_6(
#line 192 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 192 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 192 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 192 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 192 "matching.m"
{
#line 192 "matching.m"
  {
#line 192 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 192 "matching.m"
    MR_Word backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9;

#line 192 "matching.m"
    {
#line 192 "matching.m"
      backend_libs__matching__gather_benefits_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9);
    }
#line 192 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv6_STATE_VARIABLE_Benefits_9));
#line 192 "matching.m"
  }
#line 192 "matching.m"
}

#line 190 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_5(
#line 190 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 190 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1)
#line 190 "matching.m"
{
#line 190 "matching.m"
  {
#line 190 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 190 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;

#line 190 "matching.m"
    {
#line 190 "matching.m"
      return backend_libs__matching__succeeded = backend_libs__matching__realized_costs_benefits_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__matching__wrapper_arg_1));
    }
#line 190 "matching.m"
    return backend_libs__matching__succeeded;
#line 190 "matching.m"
  }
#line 190 "matching.m"
}

#line 178 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_4(
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
    MR_Word backend_libs__matching__conv4_STATE_VARIABLE_Costs_9;

#line 178 "matching.m"
    {
#line 178 "matching.m"
      backend_libs__matching__gather_costs_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv4_STATE_VARIABLE_Costs_9);
    }
#line 178 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv4_STATE_VARIABLE_Costs_9));
#line 178 "matching.m"
  }
#line 178 "matching.m"
}

#line 177 "matching.m"
static void MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_3(
#line 177 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 177 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 177 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_2,
#line 177 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_3)
#line 177 "matching.m"
{
#line 177 "matching.m"
  {
#line 177 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 177 "matching.m"
    MR_Word backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9;

#line 177 "matching.m"
    {
#line 177 "matching.m"
      backend_libs__matching__gather_benefits_3_p_0(((MR_Word) backend_libs__matching__wrapper_arg_1), ((MR_Word) backend_libs__matching__wrapper_arg_2), &backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9);
    }
#line 177 "matching.m"
    *backend_libs__matching__wrapper_arg_3 = ((MR_Box) (backend_libs__matching__conv2_STATE_VARIABLE_Benefits_9));
#line 177 "matching.m"
  }
#line 177 "matching.m"
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

#line 170 "matching.m"
static MR_bool MR_CALL 
backend_libs__matching__find_via_cell_vars_9_p_0_1(
#line 170 "matching.m"
  MR_Box backend_libs__matching__closure_arg,
#line 170 "matching.m"
  MR_Box backend_libs__matching__wrapper_arg_1,
#line 170 "matching.m"
  MR_Box * backend_libs__matching__wrapper_arg_2)
#line 170 "matching.m"
{
#line 170 "matching.m"
  {
#line 170 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 170 "matching.m"
    MR_Box backend_libs__matching__closure = backend_libs__matching__closure_arg;
#line 170 "matching.m"
    MR_Word backend_libs__matching__conv0_SegmentVars_8;

#line 170 "matching.m"
    {
#line 170 "matching.m"
      backend_libs__matching__succeeded = backend_libs__matching__simplify_segment_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__matching__wrapper_arg_1), &backend_libs__matching__conv0_SegmentVars_8);
    }
#line 170 "matching.m"
    if (backend_libs__matching__succeeded)
#line 170 "matching.m"
      {
#line 170 "matching.m"
        *backend_libs__matching__wrapper_arg_2 = ((MR_Box) (backend_libs__matching__conv0_SegmentVars_8));
#line 170 "matching.m"
        backend_libs__matching__succeeded = MR_TRUE;
#line 170 "matching.m"
      }
#line 170 "matching.m"
    return backend_libs__matching__succeeded;
#line 170 "matching.m"
  }
#line 170 "matching.m"
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
#line 154 "matching.m"
  {
#line 154 "matching.m"
    MR_bool backend_libs__matching__succeeded;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_93_93;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeInfo_96_96;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_98_98;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_104_104;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeInfo_105_105;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_109_109;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeInfo_110_110;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_118_118;
#line 154 "matching.m"
    MR_Word backend_libs__matching__TypeCtorInfo_121_121;
#line 154 "matching.m"
    MR_Word backend_libs__matching__InclAllCand_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 6)));
#line 154 "matching.m"
    MR_Word backend_libs__matching__OccurringCandidateFieldVars_21;
#line 154 "matching.m"
    MR_Word backend_libs__matching__NonOccurringCandidateFieldVars_22;
#line 154 "matching.m"
    MR_Word backend_libs__matching__OccurringCandidateFieldVarList_23;
#line 154 "matching.m"
    MR_Word backend_libs__matching__FilteredAfterFlush_24;
#line 154 "matching.m"
    MR_Word backend_libs__matching__NumberedAfterFlush_25;
#line 154 "matching.m"
    MR_Word backend_libs__matching__CostsBenefits_26;
#line 154 "matching.m"
    MR_Word backend_libs__matching__BenefitNodes_27;
#line 154 "matching.m"
    MR_Word backend_libs__matching__CostNodes_28;
#line 154 "matching.m"
    MR_Word backend_libs__matching__BenefitNodeList_29;
#line 154 "matching.m"
    MR_Word backend_libs__matching__CostNodeList_30;
#line 154 "matching.m"
    MR_Word backend_libs__matching__Graph_31;
#line 154 "matching.m"
    MR_Word backend_libs__matching__MaximalMatching_32;
#line 154 "matching.m"
    MR_Word backend_libs__matching__MaximalMatchingCostToBenefit_33;
#line 154 "matching.m"
    MR_Word backend_libs__matching__UnMatchedCostNodes_35;
#line 154 "matching.m"
    MR_Word backend_libs__matching__MarkedBenefitNodes_36;
#line 154 "matching.m"
    MR_Word backend_libs__matching__ViaCellOccurringVars0_37;
#line 154 "matching.m"
    MR_Word backend_libs__matching__RealizedCostsBenefits_38;
#line 154 "matching.m"
    MR_Word backend_libs__matching__RealizedBenefitOps_39;
#line 154 "matching.m"
    MR_Word backend_libs__matching__RealizedCostOps_40;
#line 154 "matching.m"
    MR_Word backend_libs__matching__RealizedBenefitNodeList_41;
#line 154 "matching.m"
    MR_Word backend_libs__matching__RealizedCostNodeList_42;
#line 154 "matching.m"
    MR_Word backend_libs__matching__RealizedBenefitOpList_43;
#line 154 "matching.m"
    MR_Word backend_libs__matching__RealizedCostOpList_44;
#line 154 "matching.m"
    MR_Integer backend_libs__matching__RealizedBenefitNodeCount_45;
#line 154 "matching.m"
    MR_Integer backend_libs__matching__RealizedBenefitOpCount_46;
#line 154 "matching.m"
    MR_Integer backend_libs__matching__RealizedCostNodeCount_47;
#line 154 "matching.m"
    MR_Integer backend_libs__matching__RealizedCostOpCount_48;
#line 154 "matching.m"
    MR_Integer backend_libs__matching__OpRatio_49;
#line 154 "matching.m"
    MR_Integer backend_libs__matching__NodeRatio_50;
#line 154 "matching.m"
    MR_Word backend_libs__matching__ViaCellOccurringVars_51;
#line 154 "matching.m"
    MR_Word backend_libs__matching__V_53_53;
#line 154 "matching.m"
    MR_Word backend_libs__matching__V_55_55;
#line 154 "matching.m"
    MR_Word backend_libs__matching__V_57_57;
#line 154 "matching.m"
    MR_Word backend_libs__matching__V_59_59;
#line 154 "matching.m"
    MR_Word backend_libs__matching__V_60_60;
#line 154 "matching.m"
    MR_Word backend_libs__matching__V_62_62;
#line 154 "matching.m"
    MR_Word backend_libs__matching__V_64_64;
#line 155 "matching.m"
    MR_Integer backend_libs__matching__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 0)));
#line 155 "matching.m"
    MR_Integer backend_libs__matching__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 1)));
#line 155 "matching.m"
    MR_Integer backend_libs__matching__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 2)));
#line 155 "matching.m"
    MR_Integer backend_libs__matching__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 3)));
#line 155 "matching.m"
    MR_Integer backend_libs__matching__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 4)));
#line 155 "matching.m"
    MR_Integer backend_libs__matching__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 5)));
#line 177 "matching.m"
    MR_Box backend_libs__matching__conv3_BenefitNodes_27;
#line 178 "matching.m"
    MR_Box backend_libs__matching__conv5_CostNodes_28;
#line 183 "matching.m"
    MR_Word backend_libs__matching__V_34_34;
#line 192 "matching.m"
    MR_Box backend_libs__matching__conv7_RealizedBenefitNodes_16;
#line 194 "matching.m"
    MR_Box backend_libs__matching__conv9_RealizedCostNodes_17;
#line 206 "matching.m"
    MR_Integer backend_libs__matching__V_79_79;
#line 206 "matching.m"
    MR_Integer backend_libs__matching__V_80_80;
#line 206 "matching.m"
    MR_Integer backend_libs__matching__V_81_81;
#line 206 "matching.m"
    MR_Integer backend_libs__matching__V_82_82;
#line 206 "matching.m"
    MR_Word backend_libs__matching__V_84_84;
#line 209 "matching.m"
    MR_Integer backend_libs__matching__V_67_67;
#line 209 "matching.m"
    MR_Integer backend_libs__matching__V_68_68;
#line 209 "matching.m"
    MR_Integer backend_libs__matching__V_70_70;
#line 209 "matching.m"
    MR_Integer backend_libs__matching__V_71_71;
#line 209 "matching.m"
    MR_Integer backend_libs__matching__V_72_72;

#line 163 "matching.m"
#line 163 "matching.m"
    switch (backend_libs__matching__InclAllCand_19) {
#line 163 "matching.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 163 "matching.m"
      case (MR_Integer) 0:
#line 157 "matching.m"
        {
#line 157 "matching.m"
          MR_Word backend_libs__matching__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 157 "matching.m"
          MR_Word backend_libs__matching__AllSegmentVars_20;
#line 157 "matching.m"
          MR_Word backend_libs__matching__V_52_52;

#line 158 "matching.m"
          {
#line 158 "matching.m"
            backend_libs__matching__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__V_52_52, 0) = ((MR_Box) (backend_libs__matching__BeforeFlush_13));
#line 158 "matching.m"
            MR_hl_field(MR_mktag(1), backend_libs__matching__V_52_52, 1) = ((MR_Box) (backend_libs__matching__AfterFlush_14));
#line 158 "matching.m"
          }
#line 158 "matching.m"
          {
#line 158 "matching.m"
            backend_libs__matching__AllSegmentVars_20 = parse_tree__set_of_var__union_list_1_f_0(backend_libs__matching__TypeCtorInfo_91_91, backend_libs__matching__V_52_52);
          }
#line 159 "matching.m"
          {
#line 159 "matching.m"
            parse_tree__set_of_var__intersect_3_p_0(backend_libs__matching__TypeCtorInfo_91_91, backend_libs__matching__CandidateFieldVars_11, backend_libs__matching__AllSegmentVars_20, &backend_libs__matching__OccurringCandidateFieldVars_21);
          }
#line 161 "matching.m"
          {
#line 161 "matching.m"
            parse_tree__set_of_var__difference_3_p_0(backend_libs__matching__TypeCtorInfo_91_91, backend_libs__matching__CandidateFieldVars_11, backend_libs__matching__OccurringCandidateFieldVars_21, &backend_libs__matching__NonOccurringCandidateFieldVars_22);
          }
#line 157 "matching.m"
        }
#line 163 "matching.m"
        break;
#line 163 "matching.m"
      case (MR_Integer) 1:
#line 164 "matching.m"
        {
#line 165 "matching.m"
          backend_libs__matching__OccurringCandidateFieldVars_21 = backend_libs__matching__CandidateFieldVars_11;
#line 166 "matching.m"
          {
#line 166 "matching.m"
            backend_libs__matching__NonOccurringCandidateFieldVars_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 164 "matching.m"
        }
#line 163 "matching.m"
        break;
#line 163 "matching.m"
    }
#line 8159 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_93_93 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 168 "matching.m"
    {
#line 168 "matching.m"
      backend_libs__matching__OccurringCandidateFieldVarList_23 = parse_tree__set_of_var__to_sorted_list_1_f_0(backend_libs__matching__TypeCtorInfo_93_93, backend_libs__matching__OccurringCandidateFieldVars_21);
    }
#line 170 "matching.m"
    {
#line 170 "matching.m"
      backend_libs__matching__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 170 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_3[0]));
#line 170 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_1));
#line 170 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 170 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 3) = ((MR_Box) (backend_libs__matching__CellVar_10));
#line 170 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_53_53, 4) = ((MR_Box) (backend_libs__matching__OccurringCandidateFieldVars_21));
#line 170 "matching.m"
    }
#line 8182 "backend_libs.matching.c"
    backend_libs__matching__TypeInfo_96_96 = (MR_Word) &backend_libs__matching_scalar_common_1[1];
#line 170 "matching.m"
    {
#line 170 "matching.m"
      mercury__list__filter_map_3_p_0(backend_libs__matching__TypeInfo_96_96, backend_libs__matching__TypeInfo_96_96, backend_libs__matching__V_53_53, backend_libs__matching__AfterFlush_14, &backend_libs__matching__FilteredAfterFlush_24);
    }
#line 172 "matching.m"
    {
#line 172 "matching.m"
      backend_libs__matching__NumberedAfterFlush_25 = backend_libs__matching__number_segments_2_f_0((MR_Integer) 2, backend_libs__matching__FilteredAfterFlush_24);
    }
#line 8194 "backend_libs.matching.c"
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
#line 173 "matching.m"
    {
#line 173 "matching.m"
      backend_libs__matching__CostsBenefits_26 = mercury__list__map_2_f_0((MR_Word) &backend_libs__matching_scalar_common_1[0], backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__V_55_55, backend_libs__matching__OccurringCandidateFieldVarList_23);
    }
#line 8223 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_104_104 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_node_0;
#line 177 "matching.m"
    {
#line 177 "matching.m"
      backend_libs__matching__V_57_57 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_104_104);
    }
#line 8230 "backend_libs.matching.c"
    backend_libs__matching__TypeInfo_105_105 = (MR_Word) &backend_libs__matching_scalar_common_1[2];
#line 177 "matching.m"
    {
#line 177 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_105_105, (MR_Word) &backend_libs__matching_scalar_common_2[6], backend_libs__matching__CostsBenefits_26, ((MR_Box) (backend_libs__matching__V_57_57)), &backend_libs__matching__conv3_BenefitNodes_27);
    }
#line 177 "matching.m"
    backend_libs__matching__BenefitNodes_27 = ((MR_Word) backend_libs__matching__conv3_BenefitNodes_27);
#line 8239 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_node_0;
#line 178 "matching.m"
    {
#line 178 "matching.m"
      backend_libs__matching__V_59_59 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_109_109);
    }
#line 8246 "backend_libs.matching.c"
    backend_libs__matching__TypeInfo_110_110 = (MR_Word) &backend_libs__matching_scalar_common_1[3];
#line 178 "matching.m"
    {
#line 178 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_110_110, (MR_Word) &backend_libs__matching_scalar_common_2[7], backend_libs__matching__CostsBenefits_26, ((MR_Box) (backend_libs__matching__V_59_59)), &backend_libs__matching__conv5_CostNodes_28);
    }
#line 178 "matching.m"
    backend_libs__matching__CostNodes_28 = ((MR_Word) backend_libs__matching__conv5_CostNodes_28);
#line 179 "matching.m"
    {
#line 179 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_104_104, backend_libs__matching__BenefitNodes_27, &backend_libs__matching__BenefitNodeList_29);
    }
#line 180 "matching.m"
    {
#line 180 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_109_109, backend_libs__matching__CostNodes_28, &backend_libs__matching__CostNodeList_30);
    }
#line 181 "matching.m"
    {
#line 181 "matching.m"
      backend_libs__matching__Graph_31 = backend_libs__matching__create_graph_1_f_0(backend_libs__matching__CostsBenefits_26);
    }
#line 182 "matching.m"
    {
#line 182 "matching.m"
      backend_libs__matching__MaximalMatching_32 = backend_libs__matching__maximal_matching_2_f_0(backend_libs__matching__BenefitNodeList_29, backend_libs__matching__Graph_31);
    }
#line 183 "matching.m"
    backend_libs__matching__MaximalMatchingCostToBenefit_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MaximalMatching_32, (MR_Integer) 0)));
#line 183 "matching.m"
    backend_libs__matching__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MaximalMatching_32, (MR_Integer) 1)));
#line 184 "matching.m"
    {
#line 184 "matching.m"
      backend_libs__matching__UnMatchedCostNodes_35 = backend_libs__matching__get_unmatched_cost_nodes_2_f_0(backend_libs__matching__CostNodeList_30, backend_libs__matching__MaximalMatchingCostToBenefit_33);
    }
#line 186 "matching.m"
    {
#line 186 "matching.m"
      backend_libs__matching__MarkedBenefitNodes_36 = backend_libs__matching__reachable_by_alternating_path_3_f_0(backend_libs__matching__UnMatchedCostNodes_35, backend_libs__matching__Graph_31, backend_libs__matching__MaximalMatching_32);
    }
#line 188 "matching.m"
    {
#line 188 "matching.m"
      backend_libs__matching__ViaCellOccurringVars0_37 = backend_libs__matching__compute_via_cell_vars_2_f_0(backend_libs__matching__CostsBenefits_26, backend_libs__matching__MarkedBenefitNodes_36);
    }
#line 190 "matching.m"
    {
#line 190 "matching.m"
      backend_libs__matching__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 190 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 0) = ((MR_Box) (&backend_libs__matching_scalar_common_6[0]));
#line 190 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 1) = ((MR_Box) (backend_libs__matching__find_via_cell_vars_9_p_0_5));
#line 190 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 190 "matching.m"
      MR_hl_field(MR_mktag(0), backend_libs__matching__V_60_60, 3) = ((MR_Box) (backend_libs__matching__ViaCellOccurringVars0_37));
#line 190 "matching.m"
    }
#line 190 "matching.m"
    {
#line 190 "matching.m"
      mercury__list__filter_3_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__V_60_60, backend_libs__matching__CostsBenefits_26, &backend_libs__matching__RealizedCostsBenefits_38);
    }
#line 193 "matching.m"
    {
#line 193 "matching.m"
      backend_libs__matching__V_62_62 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_104_104);
    }
#line 192 "matching.m"
    {
#line 192 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_105_105, (MR_Word) &backend_libs__matching_scalar_common_2[8], backend_libs__matching__RealizedCostsBenefits_38, ((MR_Box) (backend_libs__matching__V_62_62)), &backend_libs__matching__conv7_RealizedBenefitNodes_16);
    }
#line 192 "matching.m"
    *backend_libs__matching__RealizedBenefitNodes_16 = ((MR_Word) backend_libs__matching__conv7_RealizedBenefitNodes_16);
#line 195 "matching.m"
    {
#line 195 "matching.m"
      backend_libs__matching__V_64_64 = mercury__set__init_0_f_0(backend_libs__matching__TypeCtorInfo_109_109);
    }
#line 194 "matching.m"
    {
#line 194 "matching.m"
      mercury__list__foldl_4_p_0(backend_libs__matching__TypeCtorInfo_98_98, backend_libs__matching__TypeInfo_110_110, (MR_Word) &backend_libs__matching_scalar_common_2[9], backend_libs__matching__RealizedCostsBenefits_38, ((MR_Box) (backend_libs__matching__V_64_64)), &backend_libs__matching__conv9_RealizedCostNodes_17);
    }
#line 194 "matching.m"
    *backend_libs__matching__RealizedCostNodes_17 = ((MR_Word) backend_libs__matching__conv9_RealizedCostNodes_17);
#line 8337 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_118_118 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_benefit_operation_0;
#line 196 "matching.m"
    {
#line 196 "matching.m"
      backend_libs__matching__RealizedBenefitOps_39 = mercury__set__map_2_f_0(backend_libs__matching__TypeCtorInfo_104_104, backend_libs__matching__TypeCtorInfo_118_118, (MR_Word) &backend_libs__matching_scalar_common_2[10], *backend_libs__matching__RealizedBenefitNodes_16);
    }
#line 8344 "backend_libs.matching.c"
    backend_libs__matching__TypeCtorInfo_121_121 = (MR_Word) &backend_libs__matching__backend_libs__matching__type_ctor_info_cost_operation_0;
#line 197 "matching.m"
    {
#line 197 "matching.m"
      backend_libs__matching__RealizedCostOps_40 = mercury__set__map_2_f_0(backend_libs__matching__TypeCtorInfo_109_109, backend_libs__matching__TypeCtorInfo_121_121, (MR_Word) &backend_libs__matching_scalar_common_2[11], *backend_libs__matching__RealizedCostNodes_17);
    }
#line 198 "matching.m"
    {
#line 198 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_104_104, *backend_libs__matching__RealizedBenefitNodes_16, &backend_libs__matching__RealizedBenefitNodeList_41);
    }
#line 199 "matching.m"
    {
#line 199 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_109_109, *backend_libs__matching__RealizedCostNodes_17, &backend_libs__matching__RealizedCostNodeList_42);
    }
#line 200 "matching.m"
    {
#line 200 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_118_118, backend_libs__matching__RealizedBenefitOps_39, &backend_libs__matching__RealizedBenefitOpList_43);
    }
#line 201 "matching.m"
    {
#line 201 "matching.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__matching__TypeCtorInfo_121_121, backend_libs__matching__RealizedCostOps_40, &backend_libs__matching__RealizedCostOpList_44);
    }
#line 202 "matching.m"
    {
#line 202 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_104_104, backend_libs__matching__RealizedBenefitNodeList_41, &backend_libs__matching__RealizedBenefitNodeCount_45);
    }
#line 203 "matching.m"
    {
#line 203 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_118_118, backend_libs__matching__RealizedBenefitOpList_43, &backend_libs__matching__RealizedBenefitOpCount_46);
    }
#line 204 "matching.m"
    {
#line 204 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_109_109, backend_libs__matching__RealizedCostNodeList_42, &backend_libs__matching__RealizedCostNodeCount_47);
    }
#line 205 "matching.m"
    {
#line 205 "matching.m"
      mercury__list__length_2_p_0(backend_libs__matching__TypeCtorInfo_121_121, backend_libs__matching__RealizedCostOpList_44, &backend_libs__matching__RealizedCostOpCount_48);
    }
#line 206 "matching.m"
    backend_libs__matching__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 0)));
#line 206 "matching.m"
    backend_libs__matching__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 1)));
#line 206 "matching.m"
    backend_libs__matching__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 2)));
#line 206 "matching.m"
    backend_libs__matching__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 3)));
#line 206 "matching.m"
    backend_libs__matching__OpRatio_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 4)));
#line 206 "matching.m"
    backend_libs__matching__NodeRatio_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 5)));
#line 206 "matching.m"
    backend_libs__matching__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__matching__MatchingParams_15, (MR_Integer) 6)));
#line 209 "matching.m"
    backend_libs__matching__V_67_67 = (backend_libs__matching__RealizedBenefitOpCount_46 * (MR_Integer) 100);
#line 209 "matching.m"
    backend_libs__matching__V_68_68 = (backend_libs__matching__RealizedCostOpCount_48 * backend_libs__matching__OpRatio_49);
#line 209 "matching.m"
    backend_libs__matching__succeeded = (backend_libs__matching__V_67_67 >= backend_libs__matching__V_68_68);
#line 209 "matching.m"
    if (backend_libs__matching__succeeded)
#line 209 "matching.m"
      {
#line 210 "matching.m"
        backend_libs__matching__V_72_72 = (MR_Integer) 100;
#line 210 "matching.m"
        backend_libs__matching__V_70_70 = (backend_libs__matching__RealizedBenefitNodeCount_45 * backend_libs__matching__V_72_72);
#line 210 "matching.m"
        backend_libs__matching__V_71_71 = (backend_libs__matching__RealizedCostNodeCount_47 * backend_libs__matching__NodeRatio_50);
#line 210 "matching.m"
        backend_libs__matching__succeeded = (backend_libs__matching__V_70_70 >= backend_libs__matching__V_71_71);
#line 209 "matching.m"
      }
#line 216 "matching.m"
    if (backend_libs__matching__succeeded)
#line 212 "matching.m"
      backend_libs__matching__ViaCellOccurringVars_51 = backend_libs__matching__ViaCellOccurringVars0_37;
#line 216 "matching.m"
    else
#line 217 "matching.m"
      {
#line 217 "matching.m"
        backend_libs__matching__ViaCellOccurringVars_51 = parse_tree__set_of_var__init_0_f_0(backend_libs__matching__TypeCtorInfo_93_93);
      }
#line 222 "matching.m"
    {
#line 222 "matching.m"
      *backend_libs__matching__ViaCellVars_18 = parse_tree__set_of_var__union_2_f_0(backend_libs__matching__TypeCtorInfo_93_93, backend_libs__matching__ViaCellOccurringVars_51, backend_libs__matching__NonOccurringCandidateFieldVars_22);
    }
#line 154 "matching.m"
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
