/*
** Automatically generated from `inst_graph.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module hlds.inst_graph. */
/* :- implementation. */

/*
INIT mercury__hlds__inst_graph__init
ENDINIT
*/

#include "hlds.inst_graph.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 320 "inst_graph.m"
struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s {
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1;
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2;
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
#line 320 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7;
#line 320 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8;
#line 320 "inst_graph.m"
  MR_Cont hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont;
#line 320 "inst_graph.m"
  void * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr;
#line 324 "inst_graph.m"
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded;
#line 325 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41;
#line 325 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25;
#line 325 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27;
#line 325 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28;
#line 348 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29;
#line 348 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30;
#line 348 "inst_graph.m"
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0;
#line 337 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29;
#line 337 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30;
#line 339 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31;
#line 339 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31;
#line 343 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33;
#line 343 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37;
#line 344 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37;
#line 344 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33;
#line 349 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38;
#line 349 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39;
#line 349 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34;
#line 349 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34;
#line 349 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38;
#line 350 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39;
#line 320 "inst_graph.m"
};

#line 232 "inst_graph.m"
struct hlds__inst_graph__descendant_2_4_p_0_env_0_s {
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5;
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6;
#line 232 "inst_graph.m"
  MR_Word * hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8;
#line 232 "inst_graph.m"
  MR_Cont hlds__inst_graph__descendant_2_4_p_0_env_0__cont;
#line 232 "inst_graph.m"
  void * hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr;
#line 235 "inst_graph.m"
  MR_bool hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded;
#line 235 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16;
#line 235 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12;
#line 235 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
#line 237 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11;
#line 237 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11;
#line 237 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12;
#line 238 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13;
#line 232 "inst_graph.m"
};

#line 134 "inst_graph.m"
struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s {
#line 134 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7;
#line 134 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8;
#line 134 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11;
#line 134 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12;
#line 134 "inst_graph.m"
  MR_Cont hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont;
#line 134 "inst_graph.m"
  void * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr;
#line 355 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24;
#line 355 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13;
#line 355 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14;
#line 355 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22;
#line 355 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23;
#line 356 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13;
#line 356 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14;
#line 134 "inst_graph.m"
};

#line 95 "inst_graph.m"
struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s {
#line 95 "inst_graph.m"
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4;
#line 95 "inst_graph.m"
  MR_Word * hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6;
#line 95 "inst_graph.m"
  MR_Cont hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont;
#line 95 "inst_graph.m"
  void * hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr;
#line 253 "inst_graph.m"
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
#line 254 "inst_graph.m"
  MR_Box hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7;
#line 95 "inst_graph.m"
};


#line 277 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 280 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 283 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

#line 286 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1;

#line 289 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 292 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 295 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct5 hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

#line 298 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 301 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 304 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 307 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

#line 310 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 313 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 316 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4];

#line 319 "hlds.inst_graph.c"
static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4];

#line 322 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0;

#line 325 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1];

#line 328 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1];

#line 331 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1];

#line 334 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1];

#line 337 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0;

#line 340 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1];

#line 343 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1;

#line 346 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1];

#line 349 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1];

#line 352 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0[2];

#line 355 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2];

#line 358 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2];

#line 361 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 364 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2];

#line 367 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0;

#line 370 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1];

#line 373 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1];

#line 376 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1];

#line 379 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1];

#line 382 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
#line 385 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 387 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 390 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
#line 393 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 395 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 397 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 400 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
#line 403 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 405 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 408 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
#line 411 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 413 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 415 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 418 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
#line 421 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 423 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 426 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
#line 429 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 431 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 433 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 436 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
#line 439 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 441 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 444 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
#line 447 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 449 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 451 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 297 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 297 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 297 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5);

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_p_0(
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__7_39,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__8_40,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__9_41,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__10_42,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__11_43);

#line 269 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 269 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_p_0(
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_28,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__7_29,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__8_30);

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_p_0(
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_38,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__7_39,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__8_40,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__9_41,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__10_42,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__11_43);

#line 302 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_p_0(
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_45,
#line 302 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__7_46,
#line 302 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__8_47,
#line 302 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__9_48,
#line 302 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__10_49);

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_p_0(
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__5_27,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_28,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__7_29,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__8_30);

#line 272 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_p_0(
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__5_32,
#line 272 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__6_33,
#line 272 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__7_34);

#line 375 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_p_0_1(
#line 375 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 375 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 375 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_2);

#line 373 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_p_0(
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__Sub_14,
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_37,
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_38,
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__4_39,
#line 373 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__5_40);

#line 375 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_p_0(
#line 375 "inst_graph.m"
  MR_Word hlds__inst_graph__Sub_14,
#line 375 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_42,
#line 375 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__3_43);

#line 366 "inst_graph.m"
static MR_bool MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_p_0(
#line 366 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_31,
#line 366 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__2_32);

#line 438 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
#line 438 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_5,
#line 438 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_6);

#line 431 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
#line 431 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 431 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 431 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 431 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 422 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
#line 422 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 422 "inst_graph.m"
  MR_Word hlds__inst_graph__ConsId_7,
#line 422 "inst_graph.m"
  MR_Word hlds__inst_graph__Args_8);

#line 420 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 420 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 405 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
#line 405 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 405 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 405 "inst_graph.m"
  MR_Word hlds__inst_graph__Node_8);

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 339 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
#line 339 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 339 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
#line 339 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 344 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
#line 344 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 343 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
#line 343 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 342 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
#line 342 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 350 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
#line 350 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 320 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_1,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_2,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenA0_3,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenB0_4,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__A_5,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__B_6,
#line 320 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__7_7,
#line 320 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__8_8,
#line 320 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 320 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr);

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6);

#line 287 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_11,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 287 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
#line 287 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
#line 287 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
#line 287 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31);

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 262 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_9,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 262 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
#line 262 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22);

#line 237 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
#line 237 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 238 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
#line 238 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 235 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
#line 235 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 235 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
#line 235 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 232 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_6,
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 232 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_8,
#line 232 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 232 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr);

#line 203 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
#line 203 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_4,
#line 203 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
#line 203 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7);

#line 403 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 403 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 373 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__merge_7_p_0_2(
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 373 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 366 "inst_graph.m"
static MR_bool MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
#line 366 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 366 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 366 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_2);

#line 356 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
#line 356 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 355 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
#line 355 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 310 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 310 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 310 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5);

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6);

#line 280 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
#line 280 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 280 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 280 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 280 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 254 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
#line 254 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 253 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
#line 253 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 201 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
#line 201 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 201 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 201 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 201 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);


static /* final */ const MR_Box hlds__inst_graph_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_3[2][6];

static /* final */ const MR_Integer hlds__inst_graph_scalar_common_4[1][2];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_5[1][11];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_6[1][9];

static /* final */ const MR_Integer hlds__inst_graph_scalar_common_7[1][3];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_8[1][14];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_9[1][12];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_10[1][5];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_11[3][8];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_12[1][7];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_13[1][10];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_14[1][13];




static /* final */ const MR_Box hlds__inst_graph_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__inst_graph_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__inst_graph_scalar_common_1[0])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__inst_graph_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__inst_graph_scalar_common_3[0])),
    ((MR_Box) (hlds__inst_graph__init_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__inst_graph_scalar_common_10[0])),
    ((MR_Box) (hlds__inst_graph__merge_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Integer hlds__inst_graph_scalar_common_4[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Integer hlds__inst_graph_scalar_common_7[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_8[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_10[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__inst_graph__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_11[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_12[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_13[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_14[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1352 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1360 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1368 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1377 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1388 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1396 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1404 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct5 hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1417 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1425 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1434 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1442 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1451 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__inst_graph____Unify____inst_graph_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____inst_graph_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "inst_graph",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1472 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1480 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1488 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0
};

#line 1496 "hlds.inst_graph.c"
static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4] = {
  (MR_String) "interface_inst_graph",
  (MR_String) "interface_vars",
  (MR_String) "interface_varset",
  (MR_String) "implementation_inst_graph"
};

#line 1504 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0 = {
  (MR_String) "inst_graph_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0,
  hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0,
  NULL,
  NULL
};

#line 1519 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

#line 1524 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0
  }
};

#line 1533 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

#line 1538 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1] = {
  (MR_Integer) 0
};

#line 1543 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____inst_graph_info_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____inst_graph_info_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "inst_graph_info",
  {
    hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0
  },
  {
    hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0
};

#line 1564 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0 = {
  (MR_String) "top_level",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1579 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1584 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1 = {
  (MR_String) "parent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1,
  NULL,
  NULL,
  NULL
};

#line 1599 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

#line 1604 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1
};

#line 1609 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1
  }
};

#line 1623 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1,
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

#line 1629 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1635 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____maybe_parent_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____maybe_parent_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "maybe_parent",
  {
    hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0
  },
  {
    hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0
};

#line 1656 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1665 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0
};

#line 1671 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0 = {
  (MR_String) "node",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__inst_graph__hlds__inst_graph__field_types_node_0_0,
  NULL,
  NULL,
  NULL
};

#line 1686 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

#line 1691 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0
  }
};

#line 1700 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

#line 1705 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1] = {
  (MR_Integer) 0
};

#line 1710 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____node_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____node_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "node",
  {
    hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0
  },
  {
    hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0
};

#line 1731 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
#line 1734 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1736 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1738 "hlds.inst_graph.c"
{
#line 1740 "hlds.inst_graph.c"
  {
#line 1742 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1745 "hlds.inst_graph.c"
    {
#line 1747 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1750 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1752 "hlds.inst_graph.c"
  }
#line 1754 "hlds.inst_graph.c"
}

#line 1757 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
#line 1760 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1762 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1764 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1766 "hlds.inst_graph.c"
{
#line 1768 "hlds.inst_graph.c"
  {
#line 1770 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1773 "hlds.inst_graph.c"
    {
#line 1775 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____inst_graph_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1778 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1780 "hlds.inst_graph.c"
  }
#line 1782 "hlds.inst_graph.c"
}

#line 1785 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
#line 1788 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1790 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1792 "hlds.inst_graph.c"
{
#line 1794 "hlds.inst_graph.c"
  {
#line 1796 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1799 "hlds.inst_graph.c"
    {
#line 1801 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_info_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1804 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1806 "hlds.inst_graph.c"
  }
#line 1808 "hlds.inst_graph.c"
}

#line 1811 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
#line 1814 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1816 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1818 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1820 "hlds.inst_graph.c"
{
#line 1822 "hlds.inst_graph.c"
  {
#line 1824 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1827 "hlds.inst_graph.c"
    {
#line 1829 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____inst_graph_info_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1832 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1834 "hlds.inst_graph.c"
  }
#line 1836 "hlds.inst_graph.c"
}

#line 1839 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
#line 1842 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1844 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1846 "hlds.inst_graph.c"
{
#line 1848 "hlds.inst_graph.c"
  {
#line 1850 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1853 "hlds.inst_graph.c"
    {
#line 1855 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1858 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1860 "hlds.inst_graph.c"
  }
#line 1862 "hlds.inst_graph.c"
}

#line 1865 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
#line 1868 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1870 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1872 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1874 "hlds.inst_graph.c"
{
#line 1876 "hlds.inst_graph.c"
  {
#line 1878 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1881 "hlds.inst_graph.c"
    {
#line 1883 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____maybe_parent_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1886 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1888 "hlds.inst_graph.c"
  }
#line 1890 "hlds.inst_graph.c"
}

#line 1893 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
#line 1896 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1898 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1900 "hlds.inst_graph.c"
{
#line 1902 "hlds.inst_graph.c"
  {
#line 1904 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1907 "hlds.inst_graph.c"
    {
#line 1909 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____node_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1912 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1914 "hlds.inst_graph.c"
  }
#line 1916 "hlds.inst_graph.c"
}

#line 1919 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
#line 1922 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1924 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1926 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1928 "hlds.inst_graph.c"
{
#line 1930 "hlds.inst_graph.c"
  {
#line 1932 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1935 "hlds.inst_graph.c"
    {
#line 1937 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____node_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1940 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1942 "hlds.inst_graph.c"
  }
#line 1944 "hlds.inst_graph.c"
}

#line 297 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 297 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 297 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 297 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5)
#line 297 "inst_graph.m"
{
#line 297 "inst_graph.m"
  {
#line 297 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 297 "inst_graph.m"
    {
#line 297 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
#line 297 "inst_graph.m"
      return;
    }
#line 297 "inst_graph.m"
  }
#line 297 "inst_graph.m"
}

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_p_0(
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__7_39,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__8_40,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__9_41,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__10_42,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__11_43)
#line 295 "inst_graph.m"
{
#line 295 "inst_graph.m"
  {
#line 295 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 295 "inst_graph.m"
    MR_Word hlds__inst_graph__V_44_44;

#line 297 "inst_graph.m"
    {
#line 297 "inst_graph.m"
      hlds__inst_graph__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_14[0]));
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_p_0_1));
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 5) = ((MR_Box) (hlds__inst_graph__P_9));
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
#line 297 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
#line 297 "inst_graph.m"
    }
#line 297 "inst_graph.m"
    {
#line 297 "inst_graph.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_44_44, hlds__inst_graph__HeadVar__7_39, hlds__inst_graph__HeadVar__8_40, hlds__inst_graph__HeadVar__9_41, hlds__inst_graph__HeadVar__10_42, hlds__inst_graph__HeadVar__11_43);
#line 297 "inst_graph.m"
      return;
    }
#line 295 "inst_graph.m"
  }
#line 295 "inst_graph.m"
}

#line 269 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 269 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 269 "inst_graph.m"
{
#line 269 "inst_graph.m"
  {
#line 269 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 269 "inst_graph.m"
    {
#line 269 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
#line 269 "inst_graph.m"
      return;
    }
#line 269 "inst_graph.m"
  }
#line 269 "inst_graph.m"
}

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_p_0(
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_28,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__7_29,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__8_30)
#line 268 "inst_graph.m"
{
#line 268 "inst_graph.m"
  {
#line 268 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 268 "inst_graph.m"
    MR_Word hlds__inst_graph__V_31_31;

#line 269 "inst_graph.m"
    {
#line 269 "inst_graph.m"
      hlds__inst_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 269 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_13[0]));
#line 269 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_p_0_1));
#line 269 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 269 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
#line 269 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 4) = ((MR_Box) (hlds__inst_graph__P_7));
#line 269 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
#line 269 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
#line 269 "inst_graph.m"
    }
#line 269 "inst_graph.m"
    {
#line 269 "inst_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_31_31, hlds__inst_graph__HeadVar__6_28, hlds__inst_graph__HeadVar__7_29, hlds__inst_graph__HeadVar__8_30);
#line 269 "inst_graph.m"
      return;
    }
#line 268 "inst_graph.m"
  }
#line 268 "inst_graph.m"
}

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_p_0(
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_38,
#line 295 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__7_39,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__8_40,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__9_41,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__10_42,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__11_43)
#line 295 "inst_graph.m"
{
#line 295 "inst_graph.m"
  {
#line 295 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__Seen_12, hlds__inst_graph__HeadVar__7_39, hlds__inst_graph__HeadVar__8_40, hlds__inst_graph__HeadVar__9_41, hlds__inst_graph__HeadVar__10_42, hlds__inst_graph__HeadVar__11_43);
#line 295 "inst_graph.m"
      return;
    }
#line 295 "inst_graph.m"
  }
#line 295 "inst_graph.m"
}

#line 302 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_p_0(
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 302 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_45,
#line 302 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__7_46,
#line 302 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__8_47,
#line 302 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__9_48,
#line 302 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__10_49)
#line 302 "inst_graph.m"
{
#line 302 "inst_graph.m"
  {
#line 302 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 299 "inst_graph.m"
    {
#line 299 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__HeadVar__6_45)), hlds__inst_graph__Seen_12);
    }
#line 302 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 300 "inst_graph.m"
      {
#line 300 "inst_graph.m"
        *hlds__inst_graph__HeadVar__8_47 = hlds__inst_graph__HeadVar__7_46;
#line 301 "inst_graph.m"
        *hlds__inst_graph__HeadVar__10_49 = hlds__inst_graph__HeadVar__9_48;
#line 300 "inst_graph.m"
      }
#line 302 "inst_graph.m"
    else
#line 303 "inst_graph.m"
      {
#line 303 "inst_graph.m"
        MR_Word hlds__inst_graph__V_50_50;

#line 303 "inst_graph.m"
        {
#line 303 "inst_graph.m"
          hlds__inst_graph__V_50_50 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_12, ((MR_Box) (hlds__inst_graph__HeadVar__6_45)));
        }
#line 303 "inst_graph.m"
        {
#line 303 "inst_graph.m"
          hlds__inst_graph__foldl_reachable_aux2_8_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__HeadVar__6_45, hlds__inst_graph__V_50_50, hlds__inst_graph__HeadVar__7_46, hlds__inst_graph__HeadVar__8_47, hlds__inst_graph__HeadVar__9_48, hlds__inst_graph__HeadVar__10_49);
#line 303 "inst_graph.m"
          return;
        }
#line 303 "inst_graph.m"
      }
#line 302 "inst_graph.m"
  }
#line 302 "inst_graph.m"
}

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_p_0(
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__5_27,
#line 268 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__6_28,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__7_29,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__8_30)
#line 268 "inst_graph.m"
{
#line 268 "inst_graph.m"
  {
#line 268 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__Seen_10, hlds__inst_graph__HeadVar__6_28, hlds__inst_graph__HeadVar__7_29, hlds__inst_graph__HeadVar__8_30);
#line 268 "inst_graph.m"
      return;
    }
#line 268 "inst_graph.m"
  }
#line 268 "inst_graph.m"
}

#line 272 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_p_0(
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 272 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__5_32,
#line 272 "inst_graph.m"
  MR_Box hlds__inst_graph__HeadVar__6_33,
#line 272 "inst_graph.m"
  MR_Box * hlds__inst_graph__HeadVar__7_34)
#line 272 "inst_graph.m"
{
#line 272 "inst_graph.m"
  {
#line 272 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 270 "inst_graph.m"
    {
#line 270 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__HeadVar__5_32)), hlds__inst_graph__Seen_10);
    }
#line 272 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 271 "inst_graph.m"
      *hlds__inst_graph__HeadVar__7_34 = hlds__inst_graph__HeadVar__6_33;
#line 272 "inst_graph.m"
    else
#line 273 "inst_graph.m"
      {
#line 273 "inst_graph.m"
        MR_Word hlds__inst_graph__V_35_35;

#line 273 "inst_graph.m"
        {
#line 273 "inst_graph.m"
          hlds__inst_graph__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_10, ((MR_Box) (hlds__inst_graph__HeadVar__5_32)));
        }
#line 273 "inst_graph.m"
        {
#line 273 "inst_graph.m"
          hlds__inst_graph__foldl_reachable_aux_6_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__HeadVar__5_32, hlds__inst_graph__V_35_35, hlds__inst_graph__HeadVar__6_33, hlds__inst_graph__HeadVar__7_34);
#line 273 "inst_graph.m"
          return;
        }
#line 273 "inst_graph.m"
      }
#line 272 "inst_graph.m"
  }
#line 272 "inst_graph.m"
}

#line 375 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_p_0_1(
#line 375 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 375 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 375 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_2)
#line 375 "inst_graph.m"
{
#line 375 "inst_graph.m"
  {
#line 375 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 375 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_HeadVar__3_43;

#line 375 "inst_graph.m"
    {
#line 375 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), &hlds__inst_graph__conv0_HeadVar__3_43);
    }
#line 375 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_2 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__3_43));
#line 375 "inst_graph.m"
  }
#line 375 "inst_graph.m"
}

#line 373 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_p_0(
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__Sub_14,
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_37,
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_38,
#line 373 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__4_39,
#line 373 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__5_40)
#line 373 "inst_graph.m"
{
#line 373 "inst_graph.m"
  {
#line 373 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_57_57;
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_59_59;
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_38, (MR_Integer) 0)));
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_38, (MR_Integer) 1)));
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_27;
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__Node_28;
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__Var_29;
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__V_41_41;
#line 380 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_Var_29;

#line 375 "inst_graph.m"
    {
#line 375 "inst_graph.m"
      hlds__inst_graph__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 375 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_41_41, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_3[1]));
#line 375 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_41_41, 1) = ((MR_Box) (hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_p_0_1));
#line 375 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 375 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_41_41, 3) = ((MR_Box) (hlds__inst_graph__Sub_14));
#line 375 "inst_graph.m"
    }
#line 2429 "hlds.inst_graph.c"
    hlds__inst_graph__TypeInfo_57_57 = (MR_Word) &hlds__inst_graph_scalar_common_1[2];
#line 375 "inst_graph.m"
    {
#line 375 "inst_graph.m"
      mercury__map__map_values_only_3_p_0(hlds__inst_graph__TypeInfo_57_57, hlds__inst_graph__TypeInfo_57_57, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__inst_graph__V_41_41, hlds__inst_graph__Functors0_23, &hlds__inst_graph__Functors_27);
    }
#line 379 "inst_graph.m"
    {
#line 379 "inst_graph.m"
      hlds__inst_graph__Node_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_28, 0) = ((MR_Box) (hlds__inst_graph__Functors_27));
#line 379 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_28, 1) = ((MR_Box) (hlds__inst_graph__MaybeParent_24));
#line 379 "inst_graph.m"
    }
#line 2446 "hlds.inst_graph.c"
    hlds__inst_graph__TypeInfo_59_59 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 380 "inst_graph.m"
    {
#line 380 "inst_graph.m"
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_59_59, hlds__inst_graph__TypeInfo_59_59, hlds__inst_graph__Sub_14, ((MR_Box) (hlds__inst_graph__HeadVar__2_37)), &hlds__inst_graph__conv1_Var_29);
    }
#line 380 "inst_graph.m"
    hlds__inst_graph__Var_29 = ((MR_Word) hlds__inst_graph__conv1_Var_29);
#line 381 "inst_graph.m"
    {
#line 381 "inst_graph.m"
      mercury__map__det_insert_4_p_0(hlds__inst_graph__TypeInfo_59_59, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_29)), ((MR_Box) (hlds__inst_graph__Node_28)), hlds__inst_graph__HeadVar__4_39, hlds__inst_graph__HeadVar__5_40);
#line 381 "inst_graph.m"
      return;
    }
#line 373 "inst_graph.m"
  }
#line 373 "inst_graph.m"
}

#line 375 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_p_0(
#line 375 "inst_graph.m"
  MR_Word hlds__inst_graph__Sub_14,
#line 375 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_42,
#line 375 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__3_43)
#line 375 "inst_graph.m"
{
#line 375 "inst_graph.m"
  {
#line 375 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 375 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_56_56 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

#line 377 "inst_graph.m"
    {
#line 377 "inst_graph.m"
      mercury__map__apply_to_list_3_p_0(hlds__inst_graph__TypeInfo_56_56, hlds__inst_graph__TypeInfo_56_56, hlds__inst_graph__HeadVar__2_42, hlds__inst_graph__Sub_14, hlds__inst_graph__HeadVar__3_43);
#line 377 "inst_graph.m"
      return;
    }
#line 375 "inst_graph.m"
  }
#line 375 "inst_graph.m"
}

#line 366 "inst_graph.m"
static MR_bool MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_p_0(
#line 366 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_31,
#line 366 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__2_32)
#line 366 "inst_graph.m"
{
#line 366 "inst_graph.m"
  {
#line 366 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__1_31)) == (MR_mktag((MR_Integer) 1)));
#line 366 "inst_graph.m"
    MR_Word hlds__inst_graph__V_44_44;

#line 366 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 366 "inst_graph.m"
      {
#line 366 "inst_graph.m"
        *hlds__inst_graph__HeadVar__2_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_31, (MR_Integer) 0)));
#line 366 "inst_graph.m"
        hlds__inst_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_31, (MR_Integer) 1)));
#line 366 "inst_graph.m"
      }
#line 366 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 366 "inst_graph.m"
  }
#line 366 "inst_graph.m"
}

#line 31 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____node_0_0(
#line 31 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 31 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 31 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 31 "inst_graph.m"
{
#line 31 "inst_graph.m"
  {
#line 31 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 31 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_9 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
#line 31 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_10 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

#line 31 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_9 == hlds__inst_graph__CastY_10);
#line 31 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 2554 "hlds.inst_graph.c"
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "inst_graph.m"
    else
#line 31 "inst_graph.m"
      {
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8;

#line 31 "inst_graph.m"
        {
#line 31 "inst_graph.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[1], &hlds__inst_graph__V_8_8, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_6_6)));
        }
#line 2576 "hlds.inst_graph.c"
        hlds__inst_graph__succeeded = (hlds__inst_graph__V_8_8 == (MR_Integer) 0);
#line 31 "inst_graph.m"
        hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 31 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 31 "inst_graph.m"
          *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_8_8;
#line 31 "inst_graph.m"
        else
#line 31 "inst_graph.m"
          {
#line 31 "inst_graph.m"
            hlds__inst_graph____Compare____maybe_parent_0_0(hlds__inst_graph__HeadVar__1_1, hlds__inst_graph__V_5_5, hlds__inst_graph__V_7_7);
#line 31 "inst_graph.m"
            return;
          }
#line 31 "inst_graph.m"
      }
#line 31 "inst_graph.m"
  }
#line 31 "inst_graph.m"
}

#line 31 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0(
#line 31 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 31 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 31 "inst_graph.m"
{
#line 31 "inst_graph.m"
  {
#line 31 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 31 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_7 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 31 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 31 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_7 == hlds__inst_graph__CastY_8);
#line 31 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 31 "inst_graph.m"
      hlds__inst_graph__succeeded = MR_TRUE;
#line 31 "inst_graph.m"
    else
#line 31 "inst_graph.m"
      {
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));

#line 2637 "hlds.inst_graph.c"
        {
#line 2639 "hlds.inst_graph.c"
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[1], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_5_5)));
        }
#line 31 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 2644 "hlds.inst_graph.c"
          {
#line 2646 "hlds.inst_graph.c"
            return hlds__inst_graph__succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(hlds__inst_graph__V_4_4, hlds__inst_graph__V_6_6);
          }
#line 31 "inst_graph.m"
      }
#line 31 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 31 "inst_graph.m"
  }
#line 31 "inst_graph.m"
}

#line 46 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0(
#line 46 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 46 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 46 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 46 "inst_graph.m"
{
#line 46 "inst_graph.m"
  {
#line 46 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 46 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
#line 46 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_9 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

#line 46 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_8 == hlds__inst_graph__CastY_9);
#line 46 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 2682 "hlds.inst_graph.c"
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "inst_graph.m"
    else
#line 46 "inst_graph.m"
      if ((hlds__inst_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "inst_graph.m"
        if ((hlds__inst_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "inst_graph.m"
          *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "inst_graph.m"
        else
#line 2694 "hlds.inst_graph.c"
          *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "inst_graph.m"
      else
#line 46 "inst_graph.m"
        {
#line 46 "inst_graph.m"
          MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "inst_graph.m"
          if ((hlds__inst_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2705 "hlds.inst_graph.c"
            *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "inst_graph.m"
          else
#line 46 "inst_graph.m"
            {
#line 46 "inst_graph.m"
              MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));

#line 46 "inst_graph.m"
              {
#line 46 "inst_graph.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__V_11_11)), ((MR_Box) (hlds__inst_graph__V_7_7)));
#line 46 "inst_graph.m"
                return;
              }
#line 46 "inst_graph.m"
            }
#line 46 "inst_graph.m"
        }
#line 46 "inst_graph.m"
  }
#line 46 "inst_graph.m"
}

#line 46 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0(
#line 46 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 46 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 46 "inst_graph.m"
{
#line 46 "inst_graph.m"
  {
#line 46 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 46 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_7 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 46 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 46 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_7 == hlds__inst_graph__CastY_8);
#line 46 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 46 "inst_graph.m"
      hlds__inst_graph__succeeded = MR_TRUE;
#line 46 "inst_graph.m"
    else
#line 46 "inst_graph.m"
      if ((hlds__inst_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "inst_graph.m"
        {
#line 46 "inst_graph.m"
          MR_Integer hlds__inst_graph__CastX_3 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 46 "inst_graph.m"
          MR_Integer hlds__inst_graph__CastY_4 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 46 "inst_graph.m"
          hlds__inst_graph__succeeded = (hlds__inst_graph__CastY_4 == hlds__inst_graph__CastX_3);
#line 46 "inst_graph.m"
        }
#line 46 "inst_graph.m"
      else
#line 46 "inst_graph.m"
        {
#line 46 "inst_graph.m"
          MR_Word hlds__inst_graph__TypeInfo_9_9;
#line 46 "inst_graph.m"
          MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "inst_graph.m"
          MR_Word hlds__inst_graph__V_6_6;

#line 46 "inst_graph.m"
          hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 46 "inst_graph.m"
          if (hlds__inst_graph__succeeded)
#line 46 "inst_graph.m"
            {
#line 46 "inst_graph.m"
              hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 2788 "hlds.inst_graph.c"
              hlds__inst_graph__TypeInfo_9_9 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 2790 "hlds.inst_graph.c"
              {
#line 2792 "hlds.inst_graph.c"
                return hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_9_9, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_6_6)));
              }
#line 46 "inst_graph.m"
            }
#line 46 "inst_graph.m"
        }
#line 46 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 46 "inst_graph.m"
  }
#line 46 "inst_graph.m"
}

#line 445 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0(
#line 445 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 445 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 445 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 445 "inst_graph.m"
{
#line 445 "inst_graph.m"
  {
#line 445 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 445 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_15 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
#line 445 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_16 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

#line 445 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_15 == hlds__inst_graph__CastY_16);
#line 445 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 2830 "hlds.inst_graph.c"
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 445 "inst_graph.m"
    else
#line 445 "inst_graph.m"
      {
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 2)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 3)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_12_12;

#line 445 "inst_graph.m"
        {
#line 445 "inst_graph.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], &hlds__inst_graph__V_12_12, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
        }
#line 2860 "hlds.inst_graph.c"
        hlds__inst_graph__succeeded = (hlds__inst_graph__V_12_12 == (MR_Integer) 0);
#line 445 "inst_graph.m"
        hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 445 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 445 "inst_graph.m"
          *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_12_12;
#line 445 "inst_graph.m"
        else
#line 445 "inst_graph.m"
          {
#line 445 "inst_graph.m"
            MR_Word hlds__inst_graph__V_13_13;

#line 445 "inst_graph.m"
            {
#line 445 "inst_graph.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[2], &hlds__inst_graph__V_13_13, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
            }
#line 2880 "hlds.inst_graph.c"
            hlds__inst_graph__succeeded = (hlds__inst_graph__V_13_13 == (MR_Integer) 0);
#line 445 "inst_graph.m"
            hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 445 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 445 "inst_graph.m"
              *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_13_13;
#line 445 "inst_graph.m"
            else
#line 445 "inst_graph.m"
              {
#line 445 "inst_graph.m"
                MR_Word hlds__inst_graph__V_14_14;

#line 445 "inst_graph.m"
                {
#line 445 "inst_graph.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[3], &hlds__inst_graph__V_14_14, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                }
#line 2900 "hlds.inst_graph.c"
                hlds__inst_graph__succeeded = (hlds__inst_graph__V_14_14 == (MR_Integer) 0);
#line 445 "inst_graph.m"
                hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 445 "inst_graph.m"
                if (hlds__inst_graph__succeeded)
#line 445 "inst_graph.m"
                  *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_14_14;
#line 445 "inst_graph.m"
                else
#line 445 "inst_graph.m"
                  {
#line 445 "inst_graph.m"
                    {
#line 445 "inst_graph.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__V_7_7)), ((MR_Box) (hlds__inst_graph__V_11_11)));
#line 445 "inst_graph.m"
                      return;
                    }
#line 445 "inst_graph.m"
                  }
#line 445 "inst_graph.m"
              }
#line 445 "inst_graph.m"
          }
#line 445 "inst_graph.m"
      }
#line 445 "inst_graph.m"
  }
#line 445 "inst_graph.m"
}

#line 445 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0(
#line 445 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 445 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 445 "inst_graph.m"
{
#line 445 "inst_graph.m"
  {
#line 445 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 445 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_11 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 445 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_12 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 445 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_11 == hlds__inst_graph__CastY_12);
#line 445 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 445 "inst_graph.m"
      hlds__inst_graph__succeeded = MR_TRUE;
#line 445 "inst_graph.m"
    else
#line 445 "inst_graph.m"
      {
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_14_14;
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_15_15;
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_16_16;
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 445 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));

#line 2983 "hlds.inst_graph.c"
        {
#line 2985 "hlds.inst_graph.c"
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_7_7)));
        }
#line 445 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 445 "inst_graph.m"
          {
#line 2992 "hlds.inst_graph.c"
            hlds__inst_graph__TypeInfo_14_14 = (MR_Word) &hlds__inst_graph_scalar_common_1[2];
#line 2994 "hlds.inst_graph.c"
            {
#line 2996 "hlds.inst_graph.c"
              hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_14_14, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
            }
#line 445 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 445 "inst_graph.m"
              {
#line 3003 "hlds.inst_graph.c"
                hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[3];
#line 3005 "hlds.inst_graph.c"
                {
#line 3007 "hlds.inst_graph.c"
                  hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_15_15, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
                }
#line 445 "inst_graph.m"
                if (hlds__inst_graph__succeeded)
#line 445 "inst_graph.m"
                  {
#line 3014 "hlds.inst_graph.c"
                    hlds__inst_graph__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_2[0];
#line 3016 "hlds.inst_graph.c"
                    {
#line 3018 "hlds.inst_graph.c"
                      return hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_16_16, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                    }
#line 445 "inst_graph.m"
                  }
#line 445 "inst_graph.m"
              }
#line 445 "inst_graph.m"
          }
#line 445 "inst_graph.m"
      }
#line 445 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 445 "inst_graph.m"
  }
#line 445 "inst_graph.m"
}

#line 29 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0(
#line 29 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 29 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 29 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 29 "inst_graph.m"
{
#line 29 "inst_graph.m"
  {
#line 29 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 29 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar1_4 = hlds__inst_graph__HeadVar__2_2;
#line 29 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar2_5 = hlds__inst_graph__HeadVar__3_3;

#line 29 "inst_graph.m"
    {
#line 29 "inst_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__Cast_HeadVar1_4)), ((MR_Box) (hlds__inst_graph__Cast_HeadVar2_5)));
#line 29 "inst_graph.m"
      return;
    }
#line 29 "inst_graph.m"
  }
#line 29 "inst_graph.m"
}

#line 29 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0(
#line 29 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 29 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 29 "inst_graph.m"
{
#line 29 "inst_graph.m"
  {
#line 29 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 29 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar1_3 = hlds__inst_graph__HeadVar__1_1;
#line 29 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar2_4 = hlds__inst_graph__HeadVar__2_2;

#line 29 "inst_graph.m"
    {
#line 29 "inst_graph.m"
      return hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], ((MR_Box) (hlds__inst_graph__Cast_HeadVar1_3)), ((MR_Box) (hlds__inst_graph__Cast_HeadVar2_4)));
    }
#line 29 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 29 "inst_graph.m"
  }
#line 29 "inst_graph.m"
}

#line 438 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
#line 438 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_5,
#line 438 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_6)
#line 438 "inst_graph.m"
{
#line 441 "inst_graph.m"
  {
#line 441 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 441 "inst_graph.m"
    {
#line 441 "inst_graph.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__Var_6, hlds__inst_graph__VarSet_5);
#line 441 "inst_graph.m"
      return;
    }
#line 441 "inst_graph.m"
  }
#line 438 "inst_graph.m"
}

#line 431 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
#line 431 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 431 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 431 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 431 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 431 "inst_graph.m"
{
#line 431 "inst_graph.m"
  {
#line 431 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 431 "inst_graph.m"
    {
#line 431 "inst_graph.m"
      hlds__inst_graph__dump_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1));
#line 431 "inst_graph.m"
      return;
    }
#line 431 "inst_graph.m"
  }
#line 431 "inst_graph.m"
}

#line 422 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
#line 422 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 422 "inst_graph.m"
  MR_Word hlds__inst_graph__ConsId_7,
#line 422 "inst_graph.m"
  MR_Word hlds__inst_graph__Args_8)
#line 422 "inst_graph.m"
{
#line 425 "inst_graph.m"
  {
#line 425 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 426 "inst_graph.m"
    {
#line 426 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "%%\t");
    }
#line 427 "inst_graph.m"
    {
#line 427 "inst_graph.m"
      hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(hlds__inst_graph__ConsId_7);
    }
#line 433 "inst_graph.m"
    if ((hlds__inst_graph__Args_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "inst_graph.m"
      {
#line 434 "inst_graph.m"
      }
#line 433 "inst_graph.m"
    else
#line 429 "inst_graph.m"
      {
#line 429 "inst_graph.m"
        MR_Word hlds__inst_graph__V_20_20;

#line 430 "inst_graph.m"
        {
#line 430 "inst_graph.m"
          mercury__io__write_char_3_p_0((MR_Char) 40);
        }
#line 431 "inst_graph.m"
        {
#line 431 "inst_graph.m"
          hlds__inst_graph__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 431 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_20_20, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_12[0]));
#line 431 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_20_20, 1) = ((MR_Box) (hlds__inst_graph__dump_functor_5_p_0_1));
#line 431 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_20_20, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 431 "inst_graph.m"
        }
#line 431 "inst_graph.m"
        {
#line 431 "inst_graph.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Args_8, (MR_String) ", ", hlds__inst_graph__V_20_20);
        }
#line 432 "inst_graph.m"
        {
#line 432 "inst_graph.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
#line 429 "inst_graph.m"
      }
#line 436 "inst_graph.m"
    {
#line 436 "inst_graph.m"
      mercury__io__nl_2_p_0();
#line 436 "inst_graph.m"
      return;
    }
#line 425 "inst_graph.m"
  }
#line 422 "inst_graph.m"
}

#line 420 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 420 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 420 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 420 "inst_graph.m"
{
#line 420 "inst_graph.m"
  {
#line 420 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 420 "inst_graph.m"
    {
#line 420 "inst_graph.m"
      hlds__inst_graph__dump_functor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
#line 420 "inst_graph.m"
      return;
    }
#line 420 "inst_graph.m"
  }
#line 420 "inst_graph.m"
}

#line 405 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
#line 405 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 405 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 405 "inst_graph.m"
  MR_Word hlds__inst_graph__Node_8)
#line 405 "inst_graph.m"
{
#line 408 "inst_graph.m"
  {
#line 408 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 408 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeCtorInfo_24_24;
#line 408 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 0)));
#line 408 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 1)));
#line 408 "inst_graph.m"
    MR_Word hlds__inst_graph__V_22_22;
#line 420 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_14;

#line 410 "inst_graph.m"
    {
#line 410 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "%% ");
    }
#line 3299 "hlds.inst_graph.c"
    hlds__inst_graph__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 411 "inst_graph.m"
    {
#line 411 "inst_graph.m"
      mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Var_7, hlds__inst_graph__VarSet_6);
    }
#line 412 "inst_graph.m"
    {
#line 412 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 416 "inst_graph.m"
    if ((hlds__inst_graph__MaybeParent_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "inst_graph.m"
      {
#line 417 "inst_graph.m"
      }
#line 416 "inst_graph.m"
    else
#line 414 "inst_graph.m"
      {
#line 414 "inst_graph.m"
        MR_Word hlds__inst_graph__Parent_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_11, (MR_Integer) 0)));

#line 415 "inst_graph.m"
        {
#line 415 "inst_graph.m"
          mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Parent_12, hlds__inst_graph__VarSet_6);
        }
#line 414 "inst_graph.m"
      }
#line 419 "inst_graph.m"
    {
#line 419 "inst_graph.m"
      mercury__io__nl_2_p_0();
    }
#line 420 "inst_graph.m"
    {
#line 420 "inst_graph.m"
      hlds__inst_graph__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 420 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_11[2]));
#line 420 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 1) = ((MR_Box) (hlds__inst_graph__dump_node_5_p_0_1));
#line 420 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 420 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 420 "inst_graph.m"
    }
#line 420 "inst_graph.m"
    {
#line 420 "inst_graph.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_22_22, hlds__inst_graph__Functors_10, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_14);
    }
#line 408 "inst_graph.m"
  }
#line 405 "inst_graph.m"
}

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 337 "inst_graph.m"
{
#line 337 "inst_graph.m"
  {
#line 337 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 337 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29);
#line 337 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30);
#line 337 "inst_graph.m"
    {
#line 337 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_1(hlds__inst_graph__env_ptr);
#line 337 "inst_graph.m"
      return;
    }
#line 337 "inst_graph.m"
  }
#line 337 "inst_graph.m"
}

#line 339 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
#line 339 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 339 "inst_graph.m"
{
#line 339 "inst_graph.m"
  {
#line 339 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 339 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31);
#line 339 "inst_graph.m"
    {
#line 339 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_3(hlds__inst_graph__env_ptr);
#line 339 "inst_graph.m"
      return;
    }
#line 339 "inst_graph.m"
  }
#line 339 "inst_graph.m"
}

#line 339 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
#line 339 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 339 "inst_graph.m"
{
#line 339 "inst_graph.m"
  {
#line 339 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 340 "inst_graph.m"
    {
#line 340 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
#line 340 "inst_graph.m"
      return;
    }
#line 339 "inst_graph.m"
  }
#line 339 "inst_graph.m"
}

#line 344 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
#line 344 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 344 "inst_graph.m"
{
#line 344 "inst_graph.m"
  {
#line 344 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 344 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37);
#line 344 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33);
#line 344 "inst_graph.m"
    {
#line 344 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_5(hlds__inst_graph__env_ptr);
#line 344 "inst_graph.m"
      return;
    }
#line 344 "inst_graph.m"
  }
#line 344 "inst_graph.m"
}

#line 343 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
#line 343 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 343 "inst_graph.m"
{
#line 343 "inst_graph.m"
  {
#line 343 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 345 "inst_graph.m"
    {
#line 345 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
#line 345 "inst_graph.m"
      return;
    }
#line 343 "inst_graph.m"
  }
#line 343 "inst_graph.m"
}

#line 342 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
#line 342 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 342 "inst_graph.m"
{
#line 342 "inst_graph.m"
  {
#line 342 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 342 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_TRUE;
#line 342 "inst_graph.m"
    {
#line 338 "inst_graph.m"
      {
#line 338 "inst_graph.m"
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25);
      }
#line 342 "inst_graph.m"
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 339 "inst_graph.m"
        {
#line 339 "inst_graph.m"
          {
#line 339 "inst_graph.m"
            mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_4, hlds__inst_graph__env_ptr);
          }
#line 339 "inst_graph.m"
        }
#line 342 "inst_graph.m"
      else
#line 343 "inst_graph.m"
        {
#line 343 "inst_graph.m"
          MR_Word hlds__inst_graph__ArgsB_32;
#line 343 "inst_graph.m"
          MR_Box hlds__inst_graph__conv5_ArgsB_32;

#line 343 "inst_graph.m"
          {
#line 343 "inst_graph.m"
            (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29)), &hlds__inst_graph__conv5_ArgsB_32);
          }
#line 343 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 343 "inst_graph.m"
            {
#line 343 "inst_graph.m"
              hlds__inst_graph__ArgsB_32 = ((MR_Word) hlds__inst_graph__conv5_ArgsB_32);
#line 343 "inst_graph.m"
              (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 343 "inst_graph.m"
            }
#line 343 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 344 "inst_graph.m"
            {
#line 344 "inst_graph.m"
              hlds__inst_graph__corresponding_members_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__ArgsB_32, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33, hlds__inst_graph__corresponding_nodes_2_8_p_0_6, hlds__inst_graph__env_ptr);
            }
#line 343 "inst_graph.m"
        }
#line 342 "inst_graph.m"
    }
#line 342 "inst_graph.m"
  }
#line 342 "inst_graph.m"
}

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 349 "inst_graph.m"
{
#line 349 "inst_graph.m"
  {
#line 349 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 349 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34);
#line 349 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38);
#line 349 "inst_graph.m"
    {
#line 349 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_7(hlds__inst_graph__env_ptr);
#line 349 "inst_graph.m"
      return;
    }
#line 349 "inst_graph.m"
  }
#line 349 "inst_graph.m"
}

#line 350 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
#line 350 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 350 "inst_graph.m"
{
#line 350 "inst_graph.m"
  {
#line 350 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 350 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39);
#line 350 "inst_graph.m"
    {
#line 350 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_9(hlds__inst_graph__env_ptr);
#line 350 "inst_graph.m"
      return;
    }
#line 350 "inst_graph.m"
  }
#line 350 "inst_graph.m"
}

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 349 "inst_graph.m"
{
#line 349 "inst_graph.m"
  {
#line 349 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 351 "inst_graph.m"
    {
#line 351 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
#line 351 "inst_graph.m"
      return;
    }
#line 349 "inst_graph.m"
  }
#line 349 "inst_graph.m"
}

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 349 "inst_graph.m"
{
#line 349 "inst_graph.m"
  {
#line 349 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 350 "inst_graph.m"
    {
#line 350 "inst_graph.m"
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_10, hlds__inst_graph__env_ptr);
    }
#line 349 "inst_graph.m"
  }
#line 349 "inst_graph.m"
}

#line 320 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_1,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_2,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenA0_3,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenB0_4,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__A_5,
#line 320 "inst_graph.m"
  MR_Word hlds__inst_graph__B_6,
#line 320 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__7_7,
#line 320 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__8_8,
#line 320 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 320 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 320 "inst_graph.m"
{
#line 320 "inst_graph.m"
  {
#line 320 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s hlds__inst_graph__env;

#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1 = hlds__inst_graph__InstGraphA_1;
#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2 = hlds__inst_graph__InstGraphB_2;
#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5 = hlds__inst_graph__A_5;
#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6 = hlds__inst_graph__B_6;
#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7 = hlds__inst_graph__HeadVar__7_7;
#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8 = hlds__inst_graph__HeadVar__8_8;
#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont = hlds__inst_graph__cont;
#line 320 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 324 "inst_graph.m"
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
#line 324 "inst_graph.m"
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
#line 324 "inst_graph.m"
    {
#line 324 "inst_graph.m"
      ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont)((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
#line 325 "inst_graph.m"
    {
#line 325 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeCtorInfo_42_42;
#line 325 "inst_graph.m"
      MR_Word hlds__inst_graph__FunctorsA_23;
#line 325 "inst_graph.m"
      MR_Word hlds__inst_graph__V_35_35;
#line 325 "inst_graph.m"
      MR_Word hlds__inst_graph__V_36_36;
#line 327 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_40_40 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 331 "inst_graph.m"
      MR_Box hlds__inst_graph__conv0_V_35_35;
#line 331 "inst_graph.m"
      MR_Word hlds__inst_graph__V_24_24;
#line 332 "inst_graph.m"
      MR_Box hlds__inst_graph__conv1_V_36_36;
#line 332 "inst_graph.m"
      MR_Word hlds__inst_graph__V_26_26;
#line 337 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeCtorInfo_43_43;
#line 337 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_44_44;

#line 327 "inst_graph.m"
      {
#line 327 "inst_graph.m"
        (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), hlds__inst_graph__SeenA0_3);
      }
#line 327 "inst_graph.m"
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 328 "inst_graph.m"
        {
#line 328 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), hlds__inst_graph__SeenB0_4);
        }
#line 326 "inst_graph.m"
      (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = !((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded);
#line 325 "inst_graph.m"
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 325 "inst_graph.m"
        {
#line 3760 "hlds.inst_graph.c"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 3762 "hlds.inst_graph.c"
          hlds__inst_graph__TypeCtorInfo_42_42 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 331 "inst_graph.m"
          {
#line 331 "inst_graph.m"
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), &hlds__inst_graph__conv0_V_35_35);
          }
#line 331 "inst_graph.m"
          hlds__inst_graph__V_35_35 = ((MR_Word) hlds__inst_graph__conv0_V_35_35);
#line 331 "inst_graph.m"
          hlds__inst_graph__FunctorsA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 0)));
#line 331 "inst_graph.m"
          hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 1)));
#line 332 "inst_graph.m"
          {
#line 332 "inst_graph.m"
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), &hlds__inst_graph__conv1_V_36_36);
          }
#line 332 "inst_graph.m"
          hlds__inst_graph__V_36_36 = ((MR_Word) hlds__inst_graph__conv1_V_36_36);
#line 332 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 0)));
#line 332 "inst_graph.m"
          hlds__inst_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 1)));
#line 334 "inst_graph.m"
          {
#line 334 "inst_graph.m"
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenA0_3, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)));
          }
#line 335 "inst_graph.m"
          {
#line 335 "inst_graph.m"
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenB0_4, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)));
          }
#line 348 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_FALSE;
#line 3798 "hlds.inst_graph.c"
          hlds__inst_graph__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 3800 "hlds.inst_graph.c"
          hlds__inst_graph__TypeInfo_44_44 = (MR_Word) &hlds__inst_graph_scalar_common_1[2];
#line 337 "inst_graph.m"
          {
#line 337 "inst_graph.m"
            mercury__map__member_3_p_0(hlds__inst_graph__TypeCtorInfo_43_43, hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__FunctorsA_23, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_2, &hlds__inst_graph__env);
          }
#line 348 "inst_graph.m"
          if (!((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0))
#line 349 "inst_graph.m"
            {
#line 349 "inst_graph.m"
              {
#line 349 "inst_graph.m"
                mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_8, &hlds__inst_graph__env);
              }
#line 349 "inst_graph.m"
            }
#line 325 "inst_graph.m"
        }
#line 325 "inst_graph.m"
    }
#line 320 "inst_graph.m"
  }
#line 320 "inst_graph.m"
}

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6)
#line 295 "inst_graph.m"
{
#line 295 "inst_graph.m"
  {
#line 295 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
#line 295 "inst_graph.m"
      return;
    }
#line 295 "inst_graph.m"
  }
#line 295 "inst_graph.m"
}

#line 287 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_11,
#line 287 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 287 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
#line 287 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
#line 287 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
#line 287 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31)
#line 287 "inst_graph.m"
{
#line 292 "inst_graph.m"
  {
#line 292 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 292 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_15;
#line 292 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_32;
#line 292 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_33;
#line 292 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;
#line 292 "inst_graph.m"
    MR_Word hlds__inst_graph__V_35_35;
#line 293 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_9, (MR_Integer) 1)));
#line 294 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_34_34;
#line 294 "inst_graph.m"
    MR_Word hlds__inst_graph__V_16_16;

#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_9), ((MR_Box) (hlds__inst_graph__Var_11)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_28, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc2_0_30, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_33);
    }
#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_10, ((MR_Box) (hlds__inst_graph__Var_11)), &hlds__inst_graph__conv1_V_34_34);
    }
#line 294 "inst_graph.m"
    hlds__inst_graph__V_34_34 = ((MR_Word) hlds__inst_graph__conv1_V_34_34);
#line 294 "inst_graph.m"
    hlds__inst_graph__Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 0)));
#line 294 "inst_graph.m"
    hlds__inst_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 1)));
#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      hlds__inst_graph__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux2_8_p_0_1));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 5) = ((MR_Box) (hlds__inst_graph__P_9));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
#line 295 "inst_graph.m"
    }
#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_35_35, hlds__inst_graph__Functors_15, hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc1_29, hlds__inst_graph__STATE_VARIABLE_Acc2_33_33, hlds__inst_graph__STATE_VARIABLE_Acc2_31);
#line 295 "inst_graph.m"
      return;
    }
#line 292 "inst_graph.m"
  }
#line 287 "inst_graph.m"
}

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 268 "inst_graph.m"
{
#line 268 "inst_graph.m"
  {
#line 268 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
#line 268 "inst_graph.m"
      return;
    }
#line 268 "inst_graph.m"
  }
#line 268 "inst_graph.m"
}

#line 262 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_9,
#line 262 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 262 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
#line 262 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22)
#line 262 "inst_graph.m"
{
#line 265 "inst_graph.m"
  {
#line 265 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 265 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_12;
#line 265 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_23;
#line 265 "inst_graph.m"
    MR_Word hlds__inst_graph__V_24_24;
#line 265 "inst_graph.m"
    MR_Word hlds__inst_graph__V_25_25;
#line 266 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_7, (MR_Integer) 1)));
#line 267 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_24_24;
#line 267 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;

#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_7), ((MR_Box) (hlds__inst_graph__Var_9)), hlds__inst_graph__STATE_VARIABLE_Acc_0_21, &hlds__inst_graph__STATE_VARIABLE_Acc_23_23);
    }
#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_8, ((MR_Box) (hlds__inst_graph__Var_9)), &hlds__inst_graph__conv1_V_24_24);
    }
#line 267 "inst_graph.m"
    hlds__inst_graph__V_24_24 = ((MR_Word) hlds__inst_graph__conv1_V_24_24);
#line 267 "inst_graph.m"
    hlds__inst_graph__Functors_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 0)));
#line 267 "inst_graph.m"
    hlds__inst_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 1)));
#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux_6_p_0_1));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 4) = ((MR_Box) (hlds__inst_graph__P_7));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
#line 268 "inst_graph.m"
    }
#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_25_25, hlds__inst_graph__Functors_12, hlds__inst_graph__STATE_VARIABLE_Acc_23_23, hlds__inst_graph__STATE_VARIABLE_Acc_22);
#line 268 "inst_graph.m"
      return;
    }
#line 265 "inst_graph.m"
  }
#line 262 "inst_graph.m"
}

#line 237 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
#line 237 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 237 "inst_graph.m"
{
#line 237 "inst_graph.m"
  {
#line 237 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 237 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11);
#line 237 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12);
#line 237 "inst_graph.m"
    {
#line 237 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0_1(hlds__inst_graph__env_ptr);
#line 237 "inst_graph.m"
      return;
    }
#line 237 "inst_graph.m"
  }
#line 237 "inst_graph.m"
}

#line 238 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
#line 238 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 238 "inst_graph.m"
{
#line 238 "inst_graph.m"
  {
#line 238 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 238 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13);
#line 238 "inst_graph.m"
    {
#line 238 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0_3(hlds__inst_graph__env_ptr);
#line 238 "inst_graph.m"
      return;
    }
#line 238 "inst_graph.m"
  }
#line 238 "inst_graph.m"
}

#line 235 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
#line 235 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 235 "inst_graph.m"
{
#line 235 "inst_graph.m"
  {
#line 235 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 240 "inst_graph.m"
    {
#line 240 "inst_graph.m"
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
#line 240 "inst_graph.m"
      {
#line 240 "inst_graph.m"
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
      }
#line 240 "inst_graph.m"
    }
#line 244 "inst_graph.m"
    {
#line 242 "inst_graph.m"
      {
#line 242 "inst_graph.m"
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)), (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6);
      }
#line 244 "inst_graph.m"
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
#line 243 "inst_graph.m"
        {
#line 243 "inst_graph.m"
          (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 243 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
#line 243 "inst_graph.m"
            {
#line 243 "inst_graph.m"
              ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
#line 243 "inst_graph.m"
              return;
            }
#line 243 "inst_graph.m"
        }
#line 244 "inst_graph.m"
      else
#line 245 "inst_graph.m"
        {
#line 245 "inst_graph.m"
          MR_Word hlds__inst_graph__V_15_15;

#line 245 "inst_graph.m"
          {
#line 245 "inst_graph.m"
            hlds__inst_graph__V_15_15 = mercury__set__insert_2_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)));
          }
#line 245 "inst_graph.m"
          {
#line 245 "inst_graph.m"
            hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, hlds__inst_graph__V_15_15, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
#line 245 "inst_graph.m"
            return;
          }
#line 245 "inst_graph.m"
        }
#line 244 "inst_graph.m"
    }
#line 235 "inst_graph.m"
  }
#line 235 "inst_graph.m"
}

#line 235 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
#line 235 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 235 "inst_graph.m"
{
#line 235 "inst_graph.m"
  {
#line 235 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 238 "inst_graph.m"
    {
#line 238 "inst_graph.m"
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12, hlds__inst_graph__descendant_2_4_p_0_4, hlds__inst_graph__env_ptr);
    }
#line 235 "inst_graph.m"
  }
#line 235 "inst_graph.m"
}

#line 232 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_6,
#line 232 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 232 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_8,
#line 232 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 232 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 232 "inst_graph.m"
{
#line 232 "inst_graph.m"
  {
#line 232 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s hlds__inst_graph__env;

#line 232 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5 = hlds__inst_graph__InstGraph_5;
#line 232 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6 = hlds__inst_graph__Seen_6;
#line 232 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8 = hlds__inst_graph__Descendant_8;
#line 232 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont = hlds__inst_graph__cont;
#line 232 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 235 "inst_graph.m"
    {
#line 235 "inst_graph.m"
      MR_Word hlds__inst_graph__Functors_9;
#line 235 "inst_graph.m"
      MR_Word hlds__inst_graph__V_14_14;
#line 236 "inst_graph.m"
      MR_Box hlds__inst_graph__conv0_V_14_14;
#line 236 "inst_graph.m"
      MR_Word hlds__inst_graph__V_10_10;

#line 4271 "hlds.inst_graph.c"
      (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 236 "inst_graph.m"
      {
#line 236 "inst_graph.m"
        mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, ((MR_Box) (hlds__inst_graph__Var_7)), &hlds__inst_graph__conv0_V_14_14);
      }
#line 236 "inst_graph.m"
      hlds__inst_graph__V_14_14 = ((MR_Word) hlds__inst_graph__conv0_V_14_14);
#line 236 "inst_graph.m"
      hlds__inst_graph__Functors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 0)));
#line 236 "inst_graph.m"
      hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 1)));
#line 237 "inst_graph.m"
      {
#line 237 "inst_graph.m"
        mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], hlds__inst_graph__Functors_9, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12, hlds__inst_graph__descendant_2_4_p_0_2, &hlds__inst_graph__env);
      }
#line 235 "inst_graph.m"
    }
#line 232 "inst_graph.m"
  }
#line 232 "inst_graph.m"
}

#line 203 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
#line 203 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_4,
#line 203 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
#line 203 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7)
#line 203 "inst_graph.m"
{
#line 205 "inst_graph.m"
  {
#line 205 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 205 "inst_graph.m"
    MR_Word hlds__inst_graph__V_8_8;
#line 205 "inst_graph.m"
    MR_Word hlds__inst_graph__V_10_10;

#line 206 "inst_graph.m"
    {
#line 206 "inst_graph.m"
      hlds__inst_graph__V_10_10 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2]);
    }
#line 206 "inst_graph.m"
    {
#line 206 "inst_graph.m"
      hlds__inst_graph__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 0) = ((MR_Box) (hlds__inst_graph__V_10_10));
#line 206 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "inst_graph.m"
    }
#line 206 "inst_graph.m"
    {
#line 206 "inst_graph.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_4)), ((MR_Box) (hlds__inst_graph__V_8_8)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6, hlds__inst_graph__STATE_VARIABLE_InstGraph_7);
#line 206 "inst_graph.m"
      return;
    }
#line 205 "inst_graph.m"
  }
#line 203 "inst_graph.m"
}

#line 180 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
#line 180 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 180 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 180 "inst_graph.m"
{
#line 180 "inst_graph.m"
  {
#line 180 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 180 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 180 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 180 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 180 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 180 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 180 "inst_graph.m"
    {
#line 180 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 180 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
#line 180 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
#line 180 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
#line 180 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 180 "inst_graph.m"
    }
#line 180 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 180 "inst_graph.m"
  }
#line 180 "inst_graph.m"
}

#line 179 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__implementation_inst_graph_1_f_0(
#line 179 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 179 "inst_graph.m"
{
#line 179 "inst_graph.m"
  {
#line 179 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));

#line 179 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 179 "inst_graph.m"
  }
#line 179 "inst_graph.m"
}

#line 177 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(
#line 177 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 177 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 177 "inst_graph.m"
{
#line 177 "inst_graph.m"
  {
#line 177 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 177 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 177 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 177 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));

#line 177 "inst_graph.m"
    {
#line 177 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 177 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
#line 177 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
#line 177 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 177 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
#line 177 "inst_graph.m"
    }
#line 177 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 177 "inst_graph.m"
  }
#line 177 "inst_graph.m"
}

#line 176 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__interface_varset_1_f_0(
#line 176 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 176 "inst_graph.m"
{
#line 176 "inst_graph.m"
  {
#line 176 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 176 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 176 "inst_graph.m"
  }
#line 176 "inst_graph.m"
}

#line 174 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(
#line 174 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 174 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 174 "inst_graph.m"
{
#line 174 "inst_graph.m"
  {
#line 174 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 174 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 174 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 174 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 174 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));

#line 174 "inst_graph.m"
    {
#line 174 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 174 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
#line 174 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 174 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
#line 174 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
#line 174 "inst_graph.m"
    }
#line 174 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 174 "inst_graph.m"
  }
#line 174 "inst_graph.m"
}

#line 173 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__interface_vars_1_f_0(
#line 173 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 173 "inst_graph.m"
{
#line 173 "inst_graph.m"
  {
#line 173 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 173 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 173 "inst_graph.m"
  }
#line 173 "inst_graph.m"
}

#line 170 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
#line 170 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 170 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 170 "inst_graph.m"
{
#line 170 "inst_graph.m"
  {
#line 170 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 170 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 170 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 170 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));

#line 170 "inst_graph.m"
    {
#line 170 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 170 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 170 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
#line 170 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
#line 170 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
#line 170 "inst_graph.m"
    }
#line 170 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 170 "inst_graph.m"
  }
#line 170 "inst_graph.m"
}

#line 169 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__interface_inst_graph_1_f_0(
#line 169 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 169 "inst_graph.m"
{
#line 169 "inst_graph.m"
  {
#line 169 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 169 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 169 "inst_graph.m"
  }
#line 169 "inst_graph.m"
}

#line 167 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__inst_graph_info_init_0_f_0(void)
#line 167 "inst_graph.m"
{
#line 466 "inst_graph.m"
  {
#line 466 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 466 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__1_1;
#line 466 "inst_graph.m"
    MR_Word hlds__inst_graph__InstGraph_2;
#line 466 "inst_graph.m"
    MR_Word hlds__inst_graph__VarSet_3;

#line 467 "inst_graph.m"
    {
#line 467 "inst_graph.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__inst_graph__VarSet_3);
    }
#line 468 "inst_graph.m"
    {
#line 468 "inst_graph.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph_2);
    }
#line 466 "inst_graph.m"
    {
#line 466 "inst_graph.m"
      hlds__inst_graph__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 466 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 0) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
#line 466 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 2) = ((MR_Box) (hlds__inst_graph__VarSet_3));
#line 466 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 3) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
#line 466 "inst_graph.m"
    }
#line 466 "inst_graph.m"
    return hlds__inst_graph__HeadVar__1_1;
#line 466 "inst_graph.m"
  }
#line 167 "inst_graph.m"
}

#line 158 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__corresponding_members_4_p_0(
#line 158 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_15,
#line 158 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_16,
#line 158 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 158 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 158 "inst_graph.m"
  MR_Box * hlds__inst_graph__A_3,
#line 158 "inst_graph.m"
  MR_Box * hlds__inst_graph__B_4,
#line 158 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 158 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 158 "inst_graph.m"
{
#line 359 "inst_graph.m"
  while (MR_TRUE)
#line 359 "inst_graph.m"
    {
#line 359 "inst_graph.m"
      /* tailcall optimized into a loop */
#line 359 "inst_graph.m"
      {
#line 359 "inst_graph.m"
        MR_bool hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 359 "inst_graph.m"
        MR_Word hlds__inst_graph__V_17_17;
#line 359 "inst_graph.m"
        MR_Box hlds__inst_graph__V_18_18;
#line 359 "inst_graph.m"
        MR_Word hlds__inst_graph__V_19_19;
#line 359 "inst_graph.m"
        MR_Box hlds__inst_graph__V_20_20;

#line 359 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 359 "inst_graph.m"
          {
#line 359 "inst_graph.m"
            hlds__inst_graph__V_18_18 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0));
#line 359 "inst_graph.m"
            hlds__inst_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 359 "inst_graph.m"
            hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 359 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 359 "inst_graph.m"
              {
#line 359 "inst_graph.m"
                hlds__inst_graph__V_20_20 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0));
#line 359 "inst_graph.m"
                hlds__inst_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 359 "inst_graph.m"
                *hlds__inst_graph__A_3 = hlds__inst_graph__V_18_18;
#line 359 "inst_graph.m"
                *hlds__inst_graph__B_4 = hlds__inst_graph__V_20_20;
#line 359 "inst_graph.m"
                {
#line 359 "inst_graph.m"
                  hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
                }
#line 361 "inst_graph.m"
                {
#line 361 "inst_graph.m"
                  /* direct tailcall eliminated */
#line 361 "inst_graph.m"
                  {
#line 361 "inst_graph.m"
                    MR_Word hlds__inst_graph__HeadVar__1__tmp_copy_1 = hlds__inst_graph__V_17_17;
#line 361 "inst_graph.m"
                    MR_Word hlds__inst_graph__HeadVar__2__tmp_copy_2 = hlds__inst_graph__V_19_19;

#line 361 "inst_graph.m"
                    hlds__inst_graph__HeadVar__2_2 = hlds__inst_graph__HeadVar__2__tmp_copy_2;
#line 361 "inst_graph.m"
                    hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__HeadVar__1__tmp_copy_1;
#line 361 "inst_graph.m"
                  }
#line 361 "inst_graph.m"
                  continue;
#line 361 "inst_graph.m"
                }
#line 359 "inst_graph.m"
              }
#line 359 "inst_graph.m"
          }
#line 359 "inst_graph.m"
      }
#line 359 "inst_graph.m"
      break;
#line 359 "inst_graph.m"
    }
#line 158 "inst_graph.m"
}

#line 403 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 403 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 403 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 403 "inst_graph.m"
{
#line 403 "inst_graph.m"
  {
#line 403 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 403 "inst_graph.m"
    {
#line 403 "inst_graph.m"
      hlds__inst_graph__dump_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
#line 403 "inst_graph.m"
      return;
    }
#line 403 "inst_graph.m"
  }
#line 403 "inst_graph.m"
}

#line 154 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__dump_4_p_0(
#line 154 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 154 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6)
#line 154 "inst_graph.m"
{
#line 402 "inst_graph.m"
  {
#line 402 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 402 "inst_graph.m"
    MR_Word hlds__inst_graph__V_10_10;
#line 403 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_9;

#line 403 "inst_graph.m"
    {
#line 403 "inst_graph.m"
      hlds__inst_graph__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 403 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_11[1]));
#line 403 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 1) = ((MR_Box) (hlds__inst_graph__dump_4_p_0_1));
#line 403 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 403 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 403 "inst_graph.m"
    }
#line 403 "inst_graph.m"
    {
#line 403 "inst_graph.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_10_10, hlds__inst_graph__InstGraph_5, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_9);
    }
#line 402 "inst_graph.m"
  }
#line 154 "inst_graph.m"
}

#line 373 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__merge_7_p_0_2(
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 373 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 373 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 373 "inst_graph.m"
{
#line 373 "inst_graph.m"
  {
#line 373 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 373 "inst_graph.m"
    MR_Word hlds__inst_graph__conv1_HeadVar__5_40;

#line 373 "inst_graph.m"
    {
#line 373 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3), &hlds__inst_graph__conv1_HeadVar__5_40);
    }
#line 373 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_4 = ((MR_Box) (hlds__inst_graph__conv1_HeadVar__5_40));
#line 373 "inst_graph.m"
  }
#line 373 "inst_graph.m"
}

#line 366 "inst_graph.m"
static MR_bool MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
#line 366 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 366 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 366 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_2)
#line 366 "inst_graph.m"
{
#line 366 "inst_graph.m"
  {
#line 366 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 366 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 366 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_HeadVar__2_32;

#line 366 "inst_graph.m"
    {
#line 366 "inst_graph.m"
      hlds__inst_graph__succeeded = hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_p_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), &hlds__inst_graph__conv0_HeadVar__2_32);
    }
#line 366 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 366 "inst_graph.m"
      {
#line 366 "inst_graph.m"
        *hlds__inst_graph__wrapper_arg_2 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__2_32));
#line 366 "inst_graph.m"
        hlds__inst_graph__succeeded = MR_TRUE;
#line 366 "inst_graph.m"
      }
#line 366 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 366 "inst_graph.m"
  }
#line 366 "inst_graph.m"
}

#line 141 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__merge_7_p_0(
#line 141 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph0_8,
#line 141 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet0_9,
#line 141 "inst_graph.m"
  MR_Word hlds__inst_graph__NewInstGraph_10,
#line 141 "inst_graph.m"
  MR_Word hlds__inst_graph__NewVarSet_11,
#line 141 "inst_graph.m"
  MR_Word * hlds__inst_graph__InstGraph_12,
#line 141 "inst_graph.m"
  MR_Word * hlds__inst_graph__VarSet_13,
#line 141 "inst_graph.m"
  MR_Word * hlds__inst_graph__Sub_14)
#line 141 "inst_graph.m"
{
#line 363 "inst_graph.m"
  {
#line 363 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 363 "inst_graph.m"
    MR_Word hlds__inst_graph__Sub0_15;
#line 363 "inst_graph.m"
    MR_Word hlds__inst_graph__V_36_36;
#line 370 "inst_graph.m"
    MR_Word hlds__inst_graph__Sub1_18;
#line 366 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_55_55;
#line 373 "inst_graph.m"
    MR_Box hlds__inst_graph__conv2_InstGraph_12;

#line 364 "inst_graph.m"
    {
#line 364 "inst_graph.m"
      mercury__varset__merge_subst_without_names_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__VarSet0_9, hlds__inst_graph__NewVarSet_11, hlds__inst_graph__VarSet_13, &hlds__inst_graph__Sub0_15);
    }
#line 4968 "hlds.inst_graph.c"
    hlds__inst_graph__TypeInfo_55_55 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 366 "inst_graph.m"
    {
#line 366 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__map__map_values_only_3_p_1((MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_55_55, hlds__inst_graph__TypeInfo_55_55, (MR_Word) &hlds__inst_graph_scalar_common_2[3], hlds__inst_graph__Sub0_15, &hlds__inst_graph__Sub1_18);
    }
#line 370 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 369 "inst_graph.m"
      *hlds__inst_graph__Sub_14 = hlds__inst_graph__Sub1_18;
#line 370 "inst_graph.m"
    else
#line 371 "inst_graph.m"
      {
#line 371 "inst_graph.m"
        {
#line 371 "inst_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.inst_graph", (MR_String) "predicate \140hlds.inst_graph.merge\'/7", (MR_String) "non-variable terms in substitution");
#line 371 "inst_graph.m"
          return;
        }
#line 371 "inst_graph.m"
      }
#line 373 "inst_graph.m"
    {
#line 373 "inst_graph.m"
      hlds__inst_graph__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 373 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_11[0]));
#line 373 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, 1) = ((MR_Box) (hlds__inst_graph__merge_7_p_0_2));
#line 373 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 373 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, 3) = ((MR_Box) (*hlds__inst_graph__Sub_14));
#line 373 "inst_graph.m"
    }
#line 373 "inst_graph.m"
    {
#line 373 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__V_36_36, hlds__inst_graph__NewInstGraph_10, ((MR_Box) (hlds__inst_graph__InstGraph0_8)), &hlds__inst_graph__conv2_InstGraph_12);
    }
#line 373 "inst_graph.m"
    *hlds__inst_graph__InstGraph_12 = ((MR_Word) hlds__inst_graph__conv2_InstGraph_12);
#line 363 "inst_graph.m"
  }
#line 141 "inst_graph.m"
}

#line 356 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
#line 356 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 356 "inst_graph.m"
{
#line 356 "inst_graph.m"
  {
#line 356 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 356 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13);
#line 356 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14);
#line 356 "inst_graph.m"
    {
#line 356 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(hlds__inst_graph__env_ptr);
#line 356 "inst_graph.m"
      return;
    }
#line 356 "inst_graph.m"
  }
#line 356 "inst_graph.m"
}

#line 355 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
#line 355 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 355 "inst_graph.m"
{
#line 355 "inst_graph.m"
  {
#line 355 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 5058 "hlds.inst_graph.c"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22 = mercury__set__init_0_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    }
#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23 = mercury__set__init_0_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    }
#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr);
#line 317 "inst_graph.m"
      return;
    }
#line 355 "inst_graph.m"
  }
#line 355 "inst_graph.m"
}

#line 134 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(
#line 134 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_7,
#line 134 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_8,
#line 134 "inst_graph.m"
  MR_Word hlds__inst_graph__VarsA_9,
#line 134 "inst_graph.m"
  MR_Word hlds__inst_graph__VarsB_10,
#line 134 "inst_graph.m"
  MR_Word * hlds__inst_graph__V_11,
#line 134 "inst_graph.m"
  MR_Word * hlds__inst_graph__W_12,
#line 134 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 134 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 134 "inst_graph.m"
{
#line 134 "inst_graph.m"
  {
#line 134 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s hlds__inst_graph__env;

#line 134 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7 = hlds__inst_graph__InstGraphA_7;
#line 134 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8 = hlds__inst_graph__InstGraphB_8;
#line 134 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11 = hlds__inst_graph__V_11;
#line 134 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12 = hlds__inst_graph__W_12;
#line 134 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont = hlds__inst_graph__cont;
#line 134 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 355 "inst_graph.m"
    {
#line 355 "inst_graph.m"
      MR_bool hlds__inst_graph__succeeded;
#line 355 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

#line 356 "inst_graph.m"
      {
#line 356 "inst_graph.m"
        hlds__inst_graph__corresponding_members_4_p_0(hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__VarsA_9, hlds__inst_graph__VarsB_10, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14, hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2, &hlds__inst_graph__env);
      }
#line 355 "inst_graph.m"
    }
#line 134 "inst_graph.m"
  }
#line 134 "inst_graph.m"
}

#line 131 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__two_graphs_corresponding_nodes_6_p_0(
#line 131 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_7,
#line 131 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_8,
#line 131 "inst_graph.m"
  MR_Word hlds__inst_graph__A_9,
#line 131 "inst_graph.m"
  MR_Word hlds__inst_graph__B_10,
#line 131 "inst_graph.m"
  MR_Word * hlds__inst_graph__V_11,
#line 131 "inst_graph.m"
  MR_Word * hlds__inst_graph__W_12,
#line 131 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 131 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 131 "inst_graph.m"
{
#line 316 "inst_graph.m"
  {
#line 316 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 316 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 316 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;
#line 316 "inst_graph.m"
    MR_Word hlds__inst_graph__V_14_14;

#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      hlds__inst_graph__V_13_13 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_15);
    }
#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      hlds__inst_graph__V_14_14 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_15);
    }
#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraphA_7, hlds__inst_graph__InstGraphB_8, hlds__inst_graph__V_13_13, hlds__inst_graph__V_14_14, hlds__inst_graph__A_9, hlds__inst_graph__B_10, hlds__inst_graph__V_11, hlds__inst_graph__W_12, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 317 "inst_graph.m"
      return;
    }
#line 316 "inst_graph.m"
  }
#line 131 "inst_graph.m"
}

#line 128 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(
#line 128 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_6,
#line 128 "inst_graph.m"
  MR_Word hlds__inst_graph__A_7,
#line 128 "inst_graph.m"
  MR_Word hlds__inst_graph__B_8,
#line 128 "inst_graph.m"
  MR_Word * hlds__inst_graph__V_9,
#line 128 "inst_graph.m"
  MR_Word * hlds__inst_graph__W_10,
#line 128 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 128 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 128 "inst_graph.m"
{
#line 316 "inst_graph.m"
  {
#line 316 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 316 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_15_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 316 "inst_graph.m"
    MR_Word hlds__inst_graph__V_18_18;
#line 316 "inst_graph.m"
    MR_Word hlds__inst_graph__V_19_19;

#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      hlds__inst_graph__V_18_18 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_20);
    }
#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      hlds__inst_graph__V_19_19 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_20);
    }
#line 317 "inst_graph.m"
    {
#line 317 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraph_6, hlds__inst_graph__InstGraph_6, hlds__inst_graph__V_18_18, hlds__inst_graph__V_19_19, hlds__inst_graph__A_7, hlds__inst_graph__B_8, hlds__inst_graph__V_9, hlds__inst_graph__W_10, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 317 "inst_graph.m"
      return;
    }
#line 316 "inst_graph.m"
  }
#line 128 "inst_graph.m"
}

#line 310 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 310 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 310 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 310 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5)
#line 310 "inst_graph.m"
{
#line 310 "inst_graph.m"
  {
#line 310 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 310 "inst_graph.m"
    {
#line 310 "inst_graph.m"
      hlds__inst_graph__foldl_reachable2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
#line 310 "inst_graph.m"
      return;
    }
#line 310 "inst_graph.m"
  }
#line 310 "inst_graph.m"
}

#line 123 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0(
#line 123 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_20,
#line 123 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_21,
#line 123 "inst_graph.m"
  MR_Word hlds__inst_graph__P_8,
#line 123 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_9,
#line 123 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_10,
#line 123 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_13,
#line 123 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_14,
#line 123 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_15,
#line 123 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_16)
#line 123 "inst_graph.m"
{
#line 309 "inst_graph.m"
  {
#line 309 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 309 "inst_graph.m"
    MR_Word hlds__inst_graph__V_17_17;

#line 310 "inst_graph.m"
    {
#line 310 "inst_graph.m"
      hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 310 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_9[0]));
#line 310 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1));
#line 310 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 310 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
#line 310 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
#line 310 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 5) = ((MR_Box) (hlds__inst_graph__P_8));
#line 310 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
#line 310 "inst_graph.m"
    }
#line 310 "inst_graph.m"
    {
#line 310 "inst_graph.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_17_17, hlds__inst_graph__Vars_10, hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
#line 310 "inst_graph.m"
      return;
    }
#line 309 "inst_graph.m"
  }
#line 123 "inst_graph.m"
}

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6)
#line 295 "inst_graph.m"
{
#line 295 "inst_graph.m"
  {
#line 295 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
#line 295 "inst_graph.m"
      return;
    }
#line 295 "inst_graph.m"
  }
#line 295 "inst_graph.m"
}

#line 117 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0(
#line 117 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_20,
#line 117 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_21,
#line 117 "inst_graph.m"
  MR_Word hlds__inst_graph__P_8,
#line 117 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_9,
#line 117 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_10,
#line 117 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_13,
#line 117 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_14,
#line 117 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_15,
#line 117 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_16)
#line 117 "inst_graph.m"
{
#line 282 "inst_graph.m"
  {
#line 282 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 282 "inst_graph.m"
    MR_Word hlds__inst_graph__V_17_17;
#line 282 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_33;
#line 282 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_46;
#line 282 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_47;
#line 282 "inst_graph.m"
    MR_Word hlds__inst_graph__V_48_48;
#line 282 "inst_graph.m"
    MR_Word hlds__inst_graph__V_49_49;
#line 293 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 294 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_48_48;
#line 294 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;

#line 285 "inst_graph.m"
    {
#line 285 "inst_graph.m"
      hlds__inst_graph__V_17_17 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
#line 293 "inst_graph.m"
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_8, (MR_Integer) 1)));
#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_8), ((MR_Box) (hlds__inst_graph__Var_10)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_47);
    }
#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_9, ((MR_Box) (hlds__inst_graph__Var_10)), &hlds__inst_graph__conv1_V_48_48);
    }
#line 294 "inst_graph.m"
    hlds__inst_graph__V_48_48 = ((MR_Word) hlds__inst_graph__conv1_V_48_48);
#line 294 "inst_graph.m"
    hlds__inst_graph__Functors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 0)));
#line 294 "inst_graph.m"
    hlds__inst_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 1)));
#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      hlds__inst_graph__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable2_7_p_0_1));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 5) = ((MR_Box) (hlds__inst_graph__P_8));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 7) = ((MR_Box) (hlds__inst_graph__V_17_17));
#line 295 "inst_graph.m"
    }
#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_49_49, hlds__inst_graph__Functors_33, hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_33_47, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
#line 295 "inst_graph.m"
      return;
    }
#line 282 "inst_graph.m"
  }
#line 117 "inst_graph.m"
}

#line 280 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
#line 280 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 280 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 280 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 280 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 280 "inst_graph.m"
{
#line 280 "inst_graph.m"
  {
#line 280 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 280 "inst_graph.m"
    {
#line 280 "inst_graph.m"
      hlds__inst_graph__foldl_reachable_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
#line 280 "inst_graph.m"
      return;
    }
#line 280 "inst_graph.m"
  }
#line 280 "inst_graph.m"
}

#line 111 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0(
#line 111 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_14,
#line 111 "inst_graph.m"
  MR_Word hlds__inst_graph__P_6,
#line 111 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_7,
#line 111 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_8,
#line 111 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_10,
#line 111 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_11)
#line 111 "inst_graph.m"
{
#line 279 "inst_graph.m"
  {
#line 279 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 279 "inst_graph.m"
    MR_Word hlds__inst_graph__V_12_12;

#line 280 "inst_graph.m"
    {
#line 280 "inst_graph.m"
      hlds__inst_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 280 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_6[0]));
#line 280 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list_5_p_0_1));
#line 280 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 280 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
#line 280 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 4) = ((MR_Box) (hlds__inst_graph__P_6));
#line 280 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
#line 280 "inst_graph.m"
    }
#line 280 "inst_graph.m"
    {
#line 280 "inst_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_12_12, hlds__inst_graph__Vars_8, hlds__inst_graph__STATE_VARIABLE_Acc_0_10, hlds__inst_graph__STATE_VARIABLE_Acc_11);
#line 280 "inst_graph.m"
      return;
    }
#line 279 "inst_graph.m"
  }
#line 111 "inst_graph.m"
}

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 268 "inst_graph.m"
{
#line 268 "inst_graph.m"
  {
#line 268 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
#line 268 "inst_graph.m"
      return;
    }
#line 268 "inst_graph.m"
  }
#line 268 "inst_graph.m"
}

#line 103 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0(
#line 103 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_14,
#line 103 "inst_graph.m"
  MR_Word hlds__inst_graph__P_6,
#line 103 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_7,
#line 103 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_8,
#line 103 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_10,
#line 103 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_11)
#line 103 "inst_graph.m"
{
#line 257 "inst_graph.m"
  {
#line 257 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 257 "inst_graph.m"
    MR_Word hlds__inst_graph__V_12_12;
#line 257 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_23;
#line 257 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_32;
#line 257 "inst_graph.m"
    MR_Word hlds__inst_graph__V_33_33;
#line 257 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;
#line 266 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 267 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_33_33;
#line 267 "inst_graph.m"
    MR_Word hlds__inst_graph__V_24_24;

#line 260 "inst_graph.m"
    {
#line 260 "inst_graph.m"
      hlds__inst_graph__V_12_12 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
#line 266 "inst_graph.m"
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_6, (MR_Integer) 1)));
#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_6), ((MR_Box) (hlds__inst_graph__Var_8)), hlds__inst_graph__STATE_VARIABLE_Acc_0_10, &hlds__inst_graph__STATE_VARIABLE_Acc_23_32);
    }
#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_7, ((MR_Box) (hlds__inst_graph__Var_8)), &hlds__inst_graph__conv1_V_33_33);
    }
#line 267 "inst_graph.m"
    hlds__inst_graph__V_33_33 = ((MR_Word) hlds__inst_graph__conv1_V_33_33);
#line 267 "inst_graph.m"
    hlds__inst_graph__Functors_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 0)));
#line 267 "inst_graph.m"
    hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 1)));
#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_5_p_0_1));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 4) = ((MR_Box) (hlds__inst_graph__P_6));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 6) = ((MR_Box) (hlds__inst_graph__V_12_12));
#line 268 "inst_graph.m"
    }
#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[2], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_34_34, hlds__inst_graph__Functors_23, hlds__inst_graph__STATE_VARIABLE_Acc_23_32, hlds__inst_graph__STATE_VARIABLE_Acc_11);
#line 268 "inst_graph.m"
      return;
    }
#line 257 "inst_graph.m"
  }
#line 103 "inst_graph.m"
}

#line 254 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
#line 254 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 254 "inst_graph.m"
{
#line 254 "inst_graph.m"
  {
#line 254 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 254 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7);
#line 254 "inst_graph.m"
    {
#line 254 "inst_graph.m"
      hlds__inst_graph__reachable_from_list_3_p_0_1(hlds__inst_graph__env_ptr);
#line 254 "inst_graph.m"
      return;
    }
#line 254 "inst_graph.m"
  }
#line 254 "inst_graph.m"
}

#line 253 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
#line 253 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 253 "inst_graph.m"
{
#line 253 "inst_graph.m"
  {
#line 253 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 249 "inst_graph.m"
    {
#line 249 "inst_graph.m"
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
#line 249 "inst_graph.m"
      {
#line 249 "inst_graph.m"
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
      }
#line 249 "inst_graph.m"
    }
#line 228 "inst_graph.m"
    {
#line 228 "inst_graph.m"
      MR_Word hlds__inst_graph__Seen_17;

#line 229 "inst_graph.m"
      {
#line 229 "inst_graph.m"
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_17);
      }
#line 230 "inst_graph.m"
      {
#line 230 "inst_graph.m"
        hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4, hlds__inst_graph__Seen_17, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
#line 230 "inst_graph.m"
        return;
      }
#line 228 "inst_graph.m"
    }
#line 253 "inst_graph.m"
  }
#line 253 "inst_graph.m"
}

#line 95 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0(
#line 95 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_4,
#line 95 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_5,
#line 95 "inst_graph.m"
  MR_Word * hlds__inst_graph__Reachable_6,
#line 95 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 95 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 95 "inst_graph.m"
{
#line 95 "inst_graph.m"
  {
#line 95 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s hlds__inst_graph__env;

#line 95 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4 = hlds__inst_graph__InstGraph_4;
#line 95 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6 = hlds__inst_graph__Reachable_6;
#line 95 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont = hlds__inst_graph__cont;
#line 95 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 253 "inst_graph.m"
    {
#line 253 "inst_graph.m"
      MR_bool hlds__inst_graph__succeeded;

#line 254 "inst_graph.m"
      {
#line 254 "inst_graph.m"
        mercury__list__member_2_p_1((MR_Word) &hlds__inst_graph_scalar_common_1[0], &(hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7, hlds__inst_graph__Vars_5, hlds__inst_graph__reachable_from_list_3_p_0_2, &hlds__inst_graph__env);
      }
#line 253 "inst_graph.m"
    }
#line 95 "inst_graph.m"
  }
#line 95 "inst_graph.m"
}

#line 89 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__reachable_3_p_0(
#line 89 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 89 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_2,
#line 89 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__3_3,
#line 89 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 89 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 89 "inst_graph.m"
{
#line 249 "inst_graph.m"
  {
#line 249 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 249 "inst_graph.m"
    *hlds__inst_graph__HeadVar__3_3 = hlds__inst_graph__Var_2;
#line 249 "inst_graph.m"
    {
#line 249 "inst_graph.m"
      hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
    }
#line 228 "inst_graph.m"
    {
#line 228 "inst_graph.m"
      MR_Word hlds__inst_graph__Seen_12;

#line 229 "inst_graph.m"
      {
#line 229 "inst_graph.m"
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_12);
      }
#line 230 "inst_graph.m"
      {
#line 230 "inst_graph.m"
        hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__HeadVar__1_1, hlds__inst_graph__Seen_12, hlds__inst_graph__Var_2, hlds__inst_graph__HeadVar__3_3, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 230 "inst_graph.m"
        return;
      }
#line 228 "inst_graph.m"
    }
#line 249 "inst_graph.m"
  }
#line 89 "inst_graph.m"
}

#line 82 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__descendant_3_p_0(
#line 82 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_4,
#line 82 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_5,
#line 82 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_6,
#line 82 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 82 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 82 "inst_graph.m"
{
#line 228 "inst_graph.m"
  {
#line 228 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 228 "inst_graph.m"
    MR_Word hlds__inst_graph__Seen_7;

#line 229 "inst_graph.m"
    {
#line 229 "inst_graph.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_7);
    }
#line 230 "inst_graph.m"
    {
#line 230 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__InstGraph_4, hlds__inst_graph__Seen_7, hlds__inst_graph__Var_5, hlds__inst_graph__Descendant_6, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 230 "inst_graph.m"
      return;
    }
#line 228 "inst_graph.m"
  }
#line 82 "inst_graph.m"
}

#line 76 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__top_level_node_3_p_0(
#line 76 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_4,
#line 76 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_5,
#line 76 "inst_graph.m"
  MR_Word * hlds__inst_graph__TopLevel_6)
#line 76 "inst_graph.m"
{
#line 218 "inst_graph.m"
  while (MR_TRUE)
#line 218 "inst_graph.m"
    {
#line 218 "inst_graph.m"
      /* tailcall optimized into a loop */
#line 218 "inst_graph.m"
      {
#line 218 "inst_graph.m"
        MR_bool hlds__inst_graph__succeeded;
#line 218 "inst_graph.m"
        MR_Word hlds__inst_graph__MaybeParent_8;
#line 218 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10;
#line 219 "inst_graph.m"
        MR_Box hlds__inst_graph__conv0_V_10_10;
#line 219 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7;

#line 219 "inst_graph.m"
        {
#line 219 "inst_graph.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_4, ((MR_Box) (hlds__inst_graph__Var_5)), &hlds__inst_graph__conv0_V_10_10);
        }
#line 219 "inst_graph.m"
        hlds__inst_graph__V_10_10 = ((MR_Word) hlds__inst_graph__conv0_V_10_10);
#line 219 "inst_graph.m"
        hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 0)));
#line 219 "inst_graph.m"
        hlds__inst_graph__MaybeParent_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 1)));
#line 223 "inst_graph.m"
        if ((hlds__inst_graph__MaybeParent_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "inst_graph.m"
          *hlds__inst_graph__TopLevel_6 = hlds__inst_graph__Var_5;
#line 223 "inst_graph.m"
        else
#line 221 "inst_graph.m"
          {
#line 221 "inst_graph.m"
            MR_Word hlds__inst_graph__Parent_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_8, (MR_Integer) 0)));

#line 222 "inst_graph.m"
            /* direct tailcall eliminated */
#line 222 "inst_graph.m"
            {
#line 222 "inst_graph.m"
              MR_Word hlds__inst_graph__Var__tmp_copy_5 = hlds__inst_graph__Parent_9;

#line 222 "inst_graph.m"
              hlds__inst_graph__Var_5 = hlds__inst_graph__Var__tmp_copy_5;
#line 222 "inst_graph.m"
            }
#line 222 "inst_graph.m"
            continue;
#line 221 "inst_graph.m"
          }
#line 218 "inst_graph.m"
      }
#line 218 "inst_graph.m"
      break;
#line 218 "inst_graph.m"
    }
#line 76 "inst_graph.m"
}

#line 69 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__set_parent_4_p_0(
#line 69 "inst_graph.m"
  MR_Word hlds__inst_graph__Parent_5,
#line 69 "inst_graph.m"
  MR_Word hlds__inst_graph__Child_6,
#line 69 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11,
#line 69 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_12)
#line 69 "inst_graph.m"
{
#line 208 "inst_graph.m"
  {
#line 208 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 208 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_20_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 208 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 208 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_8;
#line 208 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent0_9;
#line 208 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;
#line 209 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_V_13_13;

#line 209 "inst_graph.m"
    {
#line 209 "inst_graph.m"
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, ((MR_Box) (hlds__inst_graph__Child_6)), &hlds__inst_graph__conv0_V_13_13);
    }
#line 209 "inst_graph.m"
    hlds__inst_graph__V_13_13 = ((MR_Word) hlds__inst_graph__conv0_V_13_13);
#line 209 "inst_graph.m"
    hlds__inst_graph__Functors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 0)));
#line 209 "inst_graph.m"
    hlds__inst_graph__MaybeParent0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 1)));
#line 213 "inst_graph.m"
    if ((hlds__inst_graph__MaybeParent0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "inst_graph.m"
      {
#line 211 "inst_graph.m"
        MR_Word hlds__inst_graph__V_17_17;
#line 211 "inst_graph.m"
        MR_Word hlds__inst_graph__V_19_19;

#line 212 "inst_graph.m"
        {
#line 212 "inst_graph.m"
          hlds__inst_graph__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "inst_graph.m"
          MR_hl_field(MR_mktag(1), hlds__inst_graph__V_19_19, 0) = ((MR_Box) (hlds__inst_graph__Parent_5));
#line 212 "inst_graph.m"
        }
#line 212 "inst_graph.m"
        {
#line 212 "inst_graph.m"
          hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (hlds__inst_graph__Functors_8));
#line 212 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__V_19_19));
#line 212 "inst_graph.m"
        }
#line 212 "inst_graph.m"
        {
#line 212 "inst_graph.m"
          mercury__map__det_update_4_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, ((MR_Box) (hlds__inst_graph__Child_6)), ((MR_Box) (hlds__inst_graph__V_17_17)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, hlds__inst_graph__STATE_VARIABLE_InstGraph_12);
#line 212 "inst_graph.m"
          return;
        }
#line 211 "inst_graph.m"
      }
#line 213 "inst_graph.m"
    else
#line 214 "inst_graph.m"
      {
#line 215 "inst_graph.m"
        {
#line 215 "inst_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.inst_graph", (MR_String) "predicate \140hlds.inst_graph.set_parent\'/4", (MR_String) "node already has parent");
#line 215 "inst_graph.m"
          return;
        }
#line 214 "inst_graph.m"
      }
#line 208 "inst_graph.m"
  }
#line 69 "inst_graph.m"
}

#line 201 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
#line 201 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 201 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 201 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 201 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 201 "inst_graph.m"
{
#line 201 "inst_graph.m"
  {
#line 201 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 201 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7;

#line 201 "inst_graph.m"
    {
#line 201 "inst_graph.m"
      hlds__inst_graph__init_var_3_p_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), &hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7);
    }
#line 201 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_3 = ((MR_Box) (hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7));
#line 201 "inst_graph.m"
  }
#line 201 "inst_graph.m"
}

#line 62 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__init_2_p_0(
#line 62 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_3,
#line 62 "inst_graph.m"
  MR_Word * hlds__inst_graph__InstGraph_4)
#line 62 "inst_graph.m"
{
#line 199 "inst_graph.m"
  {
#line 199 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 199 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_7_7 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 199 "inst_graph.m"
    MR_Word hlds__inst_graph__InstGraph0_5;
#line 201 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_InstGraph_4;

#line 200 "inst_graph.m"
    {
#line 200 "inst_graph.m"
      mercury__map__init_1_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph0_5);
    }
#line 201 "inst_graph.m"
    {
#line 201 "inst_graph.m"
      mercury__list__foldl_4_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph_scalar_common_2[0], (MR_Word) &hlds__inst_graph_scalar_common_2[2], hlds__inst_graph__Vars_3, ((MR_Box) (hlds__inst_graph__InstGraph0_5)), &hlds__inst_graph__conv1_InstGraph_4);
    }
#line 201 "inst_graph.m"
    *hlds__inst_graph__InstGraph_4 = ((MR_Word) hlds__inst_graph__conv1_InstGraph_4);
#line 199 "inst_graph.m"
  }
#line 62 "inst_graph.m"
}

void mercury__hlds__inst_graph__init(void)
{
}

void mercury__hlds__inst_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_0);
	MR_register_type_ctor_info(&hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_info_0);
	MR_register_type_ctor_info(&hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0);
	MR_register_type_ctor_info(&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0);
}

void mercury__hlds__inst_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.inst_graph. */
