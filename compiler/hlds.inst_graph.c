/*
** Automatically generated from `inst_graph.m'
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


/* :- module hlds.inst_graph. */
/* :- implementation. */

/*
INIT mercury__hlds__inst_graph__init
ENDINIT
*/

#include "hlds.inst_graph.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 318 "inst_graph.m"
struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s {
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1;
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2;
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
#line 318 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7;
#line 318 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8;
#line 318 "inst_graph.m"
  MR_Cont hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont;
#line 318 "inst_graph.m"
  void * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr;
#line 322 "inst_graph.m"
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded;
#line 323 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41;
#line 323 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25;
#line 323 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27;
#line 323 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28;
#line 346 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29;
#line 346 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30;
#line 346 "inst_graph.m"
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0;
#line 335 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29;
#line 335 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30;
#line 337 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31;
#line 337 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31;
#line 341 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33;
#line 341 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37;
#line 342 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37;
#line 342 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33;
#line 347 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38;
#line 347 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39;
#line 347 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34;
#line 347 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34;
#line 347 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38;
#line 348 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39;
#line 318 "inst_graph.m"
};

#line 230 "inst_graph.m"
struct hlds__inst_graph__descendant_2_4_p_0_env_0_s {
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5;
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6;
#line 230 "inst_graph.m"
  MR_Word * hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8;
#line 230 "inst_graph.m"
  MR_Cont hlds__inst_graph__descendant_2_4_p_0_env_0__cont;
#line 230 "inst_graph.m"
  void * hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr;
#line 233 "inst_graph.m"
  MR_bool hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded;
#line 233 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16;
#line 233 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12;
#line 233 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
#line 235 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11;
#line 235 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11;
#line 235 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12;
#line 236 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13;
#line 230 "inst_graph.m"
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
#line 353 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24;
#line 353 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13;
#line 353 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14;
#line 353 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22;
#line 353 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23;
#line 354 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13;
#line 354 "inst_graph.m"
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
#line 251 "inst_graph.m"
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
#line 252 "inst_graph.m"
  MR_Box hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7;
#line 95 "inst_graph.m"
};


#line 244 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 247 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 250 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

#line 253 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1;

#line 256 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 259 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 262 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct5 hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

#line 265 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 268 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 271 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

#line 274 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 277 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 280 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4];

#line 283 "hlds.inst_graph.c"
static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4];

#line 286 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0;

#line 289 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1];

#line 292 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1];

#line 295 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1];

#line 298 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1];

#line 301 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0;

#line 304 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1];

#line 307 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1;

#line 310 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1];

#line 313 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1];

#line 316 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0[2];

#line 319 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2];

#line 322 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2];

#line 325 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 328 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2];

#line 331 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0;

#line 334 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1];

#line 337 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1];

#line 340 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1];

#line 343 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1];

#line 346 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
#line 349 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 351 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 354 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
#line 357 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 359 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 361 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 364 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
#line 367 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 369 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 372 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
#line 375 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 377 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 379 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 382 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
#line 385 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 387 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 390 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
#line 393 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 395 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 397 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 400 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
#line 403 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 405 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 408 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
#line 411 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 413 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 415 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_51_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5);

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_51_95_95_49_95_95_91_54_93_95_48_11_p_0(
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43);

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_54_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_54_95_95_49_95_95_91_53_93_95_48_8_p_0(
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30);

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__293__1_11_p_0(
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_38,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43);

#line 300 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__300__1_10_p_0(
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_45,
#line 300 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_46,
#line 300 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_47,
#line 300 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__4_48,
#line 300 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__5_49);

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__266__1_8_p_0(
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30);

#line 270 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__270__1_7_p_0(
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 270 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_33,
#line 270 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_34);

#line 366 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__364__1_5_p_0_1(
#line 366 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 366 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 366 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_2);

#line 364 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__364__1_5_p_0(
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__3_29,
#line 364 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__4_30);

#line 366 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__366__1_3_p_0(
#line 366 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 366 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 366 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__2_33);

#line 429 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
#line 429 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_5,
#line 429 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_6);

#line 422 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
#line 422 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 422 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 422 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 422 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 413 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
#line 413 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 413 "inst_graph.m"
  MR_Word hlds__inst_graph__ConsId_7,
#line 413 "inst_graph.m"
  MR_Word hlds__inst_graph__Args_8);

#line 411 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 411 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 396 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
#line 396 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 396 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 396 "inst_graph.m"
  MR_Word hlds__inst_graph__Node_8);

#line 335 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
#line 335 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 342 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
#line 342 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 341 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
#line 341 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 340 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
#line 340 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 347 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
#line 347 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 347 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
#line 347 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 347 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
#line 347 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 318 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_1,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_2,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenA0_3,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenB0_4,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__A_5,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__B_6,
#line 318 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__7_7,
#line 318 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__8_8,
#line 318 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 318 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr);

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6);

#line 285 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_11,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 285 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
#line 285 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
#line 285 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
#line 285 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31);

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 260 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_9,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 260 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
#line 260 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22);

#line 235 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
#line 235 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 236 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
#line 236 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 233 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
#line 233 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 233 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
#line 233 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 230 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_6,
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 230 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_8,
#line 230 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 230 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr);

#line 201 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
#line 201 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_4,
#line 201 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
#line 201 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7);

#line 394 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 394 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 364 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 364 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 354 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
#line 354 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 353 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
#line 353 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 308 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 308 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 308 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5);

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6);

#line 278 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
#line 278 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 278 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 278 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 278 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 252 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
#line 252 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 251 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
#line 251 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 199 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
#line 199 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 199 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 199 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 199 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);


static /* final */ const MR_Box hlds__inst_graph_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_3[2][6];

static /* final */ const MR_Integer hlds__inst_graph_scalar_common_4[1][2];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_5[1][11];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_6[1][9];

static /* final */ const MR_Integer hlds__inst_graph_scalar_common_7[1][3];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_8[1][14];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_9[1][12];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_10[3][8];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_11[1][7];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_12[1][10];

static /* final */ const MR_Box hlds__inst_graph_scalar_common_13[1][13];




static /* final */ const MR_Box hlds__inst_graph_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__inst_graph_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_2[3][3] = {
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
    ((MR_Box) (&hlds__inst_graph_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__inst_graph_scalar_common_3[0])),
    ((MR_Box) (hlds__inst_graph__init_2_p_0_1)),
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

static /* final */ const MR_Box hlds__inst_graph_scalar_common_10[3][8] = {
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

static /* final */ const MR_Box hlds__inst_graph_scalar_common_11[1][7] = {
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

static /* final */ const MR_Box hlds__inst_graph_scalar_common_12[1][10] = {
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

static /* final */ const MR_Box hlds__inst_graph_scalar_common_13[1][13] = {
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1266 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1274 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1282 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1291 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1302 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1310 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1318 "hlds.inst_graph.c"
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

#line 1331 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1340 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1348 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1357 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__inst_graph____Unify____inst_graph_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____inst_graph_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "inst_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1374 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1382 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1390 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0
};

#line 1398 "hlds.inst_graph.c"
static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4] = {
  (MR_String) "interface_inst_graph",
  (MR_String) "interface_vars",
  (MR_String) "interface_varset",
  (MR_String) "implementation_inst_graph"
};

#line 1406 "hlds.inst_graph.c"
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

#line 1421 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

#line 1426 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0
  }
};

#line 1435 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

#line 1440 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1] = {
  (MR_Integer) 0
};

#line 1445 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____inst_graph_info_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____inst_graph_info_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "inst_graph_info",
  {     hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0 },
  {     hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0
};

#line 1462 "hlds.inst_graph.c"
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

#line 1477 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1482 "hlds.inst_graph.c"
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

#line 1497 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

#line 1502 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1
};

#line 1507 "hlds.inst_graph.c"
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

#line 1521 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1,
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

#line 1527 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1533 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____maybe_parent_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____maybe_parent_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "maybe_parent",
  {     hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0 },
  {     hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0
};

#line 1550 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1559 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0
};

#line 1565 "hlds.inst_graph.c"
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

#line 1580 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

#line 1585 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0
  }
};

#line 1594 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

#line 1599 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1] = {
  (MR_Integer) 0
};

#line 1604 "hlds.inst_graph.c"
const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____node_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____node_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "node",
  {     hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0 },
  {     hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0
};

#line 1621 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
#line 1624 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1626 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1628 "hlds.inst_graph.c"
{
#line 1630 "hlds.inst_graph.c"
  {
#line 1632 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1635 "hlds.inst_graph.c"
    {
#line 1637 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1640 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1642 "hlds.inst_graph.c"
  }
#line 1644 "hlds.inst_graph.c"
}

#line 1647 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
#line 1650 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1652 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1654 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1656 "hlds.inst_graph.c"
{
#line 1658 "hlds.inst_graph.c"
  {
#line 1660 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1663 "hlds.inst_graph.c"
    {
#line 1665 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____inst_graph_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1668 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1670 "hlds.inst_graph.c"
  }
#line 1672 "hlds.inst_graph.c"
}

#line 1675 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
#line 1678 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1680 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1682 "hlds.inst_graph.c"
{
#line 1684 "hlds.inst_graph.c"
  {
#line 1686 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1689 "hlds.inst_graph.c"
    {
#line 1691 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_info_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1694 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1696 "hlds.inst_graph.c"
  }
#line 1698 "hlds.inst_graph.c"
}

#line 1701 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
#line 1704 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1706 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1708 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1710 "hlds.inst_graph.c"
{
#line 1712 "hlds.inst_graph.c"
  {
#line 1714 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1717 "hlds.inst_graph.c"
    {
#line 1719 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____inst_graph_info_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1722 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1724 "hlds.inst_graph.c"
  }
#line 1726 "hlds.inst_graph.c"
}

#line 1729 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
#line 1732 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1734 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1736 "hlds.inst_graph.c"
{
#line 1738 "hlds.inst_graph.c"
  {
#line 1740 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1743 "hlds.inst_graph.c"
    {
#line 1745 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1748 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1750 "hlds.inst_graph.c"
  }
#line 1752 "hlds.inst_graph.c"
}

#line 1755 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
#line 1758 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1760 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1762 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1764 "hlds.inst_graph.c"
{
#line 1766 "hlds.inst_graph.c"
  {
#line 1768 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1771 "hlds.inst_graph.c"
    {
#line 1773 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____maybe_parent_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1776 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1778 "hlds.inst_graph.c"
  }
#line 1780 "hlds.inst_graph.c"
}

#line 1783 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
#line 1786 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1788 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1790 "hlds.inst_graph.c"
{
#line 1792 "hlds.inst_graph.c"
  {
#line 1794 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1797 "hlds.inst_graph.c"
    {
#line 1799 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____node_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1802 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1804 "hlds.inst_graph.c"
  }
#line 1806 "hlds.inst_graph.c"
}

#line 1809 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
#line 1812 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1814 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1816 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1818 "hlds.inst_graph.c"
{
#line 1820 "hlds.inst_graph.c"
  {
#line 1822 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1825 "hlds.inst_graph.c"
    {
#line 1827 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____node_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1830 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1832 "hlds.inst_graph.c"
  }
#line 1834 "hlds.inst_graph.c"
}

#line 295 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_51_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 295 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 295 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5)
#line 295 "inst_graph.m"
{
#line 295 "inst_graph.m"
  {
#line 295 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__300__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
#line 295 "inst_graph.m"
      return;
    }
#line 295 "inst_graph.m"
  }
#line 295 "inst_graph.m"
}

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_51_95_95_49_95_95_91_54_93_95_48_11_p_0(
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43)
#line 293 "inst_graph.m"
{
#line 293 "inst_graph.m"
  {
#line 293 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 293 "inst_graph.m"
    MR_Word hlds__inst_graph__V_44_44;

#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      hlds__inst_graph__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_13[0]));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_51_95_95_49_95_95_91_54_93_95_48_11_p_0_1));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 5) = ((MR_Box) (hlds__inst_graph__P_9));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
#line 295 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
#line 295 "inst_graph.m"
    }
#line 295 "inst_graph.m"
    {
#line 295 "inst_graph.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_44_44, hlds__inst_graph__LambdaHeadVar__2_39, hlds__inst_graph__LambdaHeadVar__3_40, hlds__inst_graph__LambdaHeadVar__4_41, hlds__inst_graph__LambdaHeadVar__5_42, hlds__inst_graph__LambdaHeadVar__6_43);
#line 295 "inst_graph.m"
      return;
    }
#line 293 "inst_graph.m"
  }
#line 293 "inst_graph.m"
}

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_54_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 267 "inst_graph.m"
{
#line 267 "inst_graph.m"
  {
#line 267 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__270__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
#line 267 "inst_graph.m"
      return;
    }
#line 267 "inst_graph.m"
  }
#line 267 "inst_graph.m"
}

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_54_95_95_49_95_95_91_53_93_95_48_8_p_0(
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30)
#line 266 "inst_graph.m"
{
#line 266 "inst_graph.m"
  {
#line 266 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 266 "inst_graph.m"
    MR_Word hlds__inst_graph__V_31_31;

#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      hlds__inst_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_12[0]));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_54_95_95_49_95_95_91_53_93_95_48_8_p_0_1));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 4) = ((MR_Box) (hlds__inst_graph__P_7));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
#line 267 "inst_graph.m"
    }
#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_31_31, hlds__inst_graph__LambdaHeadVar__2_28, hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
#line 267 "inst_graph.m"
      return;
    }
#line 266 "inst_graph.m"
  }
#line 266 "inst_graph.m"
}

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__293__1_11_p_0(
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_38,
#line 293 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43)
#line 293 "inst_graph.m"
{
#line 293 "inst_graph.m"
  {
#line 293 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_51_95_95_49_95_95_91_54_93_95_48_11_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__Seen_12, hlds__inst_graph__LambdaHeadVar__2_39, hlds__inst_graph__LambdaHeadVar__3_40, hlds__inst_graph__LambdaHeadVar__4_41, hlds__inst_graph__LambdaHeadVar__5_42, hlds__inst_graph__LambdaHeadVar__6_43);
#line 293 "inst_graph.m"
      return;
    }
#line 293 "inst_graph.m"
  }
#line 293 "inst_graph.m"
}

#line 300 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__300__1_10_p_0(
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 300 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_45,
#line 300 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_46,
#line 300 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_47,
#line 300 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__4_48,
#line 300 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__5_49)
#line 300 "inst_graph.m"
{
#line 300 "inst_graph.m"
  {
#line 300 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 297 "inst_graph.m"
    {
#line 297 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_45)), hlds__inst_graph__Seen_12);
    }
#line 300 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 298 "inst_graph.m"
      {
#line 298 "inst_graph.m"
        *hlds__inst_graph__LambdaHeadVar__3_47 = hlds__inst_graph__LambdaHeadVar__2_46;
#line 299 "inst_graph.m"
        *hlds__inst_graph__LambdaHeadVar__5_49 = hlds__inst_graph__LambdaHeadVar__4_48;
#line 298 "inst_graph.m"
      }
#line 300 "inst_graph.m"
    else
#line 301 "inst_graph.m"
      {
#line 301 "inst_graph.m"
        MR_Word hlds__inst_graph__V_50_50;

#line 301 "inst_graph.m"
        {
#line 301 "inst_graph.m"
          hlds__inst_graph__V_50_50 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_12, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_45)));
        }
#line 301 "inst_graph.m"
        {
#line 301 "inst_graph.m"
          hlds__inst_graph__foldl_reachable_aux2_8_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__LambdaHeadVar__1_45, hlds__inst_graph__V_50_50, hlds__inst_graph__LambdaHeadVar__2_46, hlds__inst_graph__LambdaHeadVar__3_47, hlds__inst_graph__LambdaHeadVar__4_48, hlds__inst_graph__LambdaHeadVar__5_49);
#line 301 "inst_graph.m"
          return;
        }
#line 301 "inst_graph.m"
      }
#line 300 "inst_graph.m"
  }
#line 300 "inst_graph.m"
}

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__266__1_8_p_0(
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 266 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30)
#line 266 "inst_graph.m"
{
#line 266 "inst_graph.m"
  {
#line 266 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_54_95_95_49_95_95_91_53_93_95_48_8_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__Seen_10, hlds__inst_graph__LambdaHeadVar__2_28, hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
#line 266 "inst_graph.m"
      return;
    }
#line 266 "inst_graph.m"
  }
#line 266 "inst_graph.m"
}

#line 270 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__270__1_7_p_0(
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 270 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 270 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_33,
#line 270 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_34)
#line 270 "inst_graph.m"
{
#line 270 "inst_graph.m"
  {
#line 270 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_32)), hlds__inst_graph__Seen_10);
    }
#line 270 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 269 "inst_graph.m"
      *hlds__inst_graph__LambdaHeadVar__3_34 = hlds__inst_graph__LambdaHeadVar__2_33;
#line 270 "inst_graph.m"
    else
#line 271 "inst_graph.m"
      {
#line 271 "inst_graph.m"
        MR_Word hlds__inst_graph__V_35_35;

#line 271 "inst_graph.m"
        {
#line 271 "inst_graph.m"
          hlds__inst_graph__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_10, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_32)));
        }
#line 271 "inst_graph.m"
        {
#line 271 "inst_graph.m"
          hlds__inst_graph__foldl_reachable_aux_6_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__LambdaHeadVar__1_32, hlds__inst_graph__V_35_35, hlds__inst_graph__LambdaHeadVar__2_33, hlds__inst_graph__LambdaHeadVar__3_34);
#line 271 "inst_graph.m"
          return;
        }
#line 271 "inst_graph.m"
      }
#line 270 "inst_graph.m"
  }
#line 270 "inst_graph.m"
}

#line 366 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__364__1_5_p_0_1(
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
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 366 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_LambdaHeadVar__2_33;

#line 366 "inst_graph.m"
    {
#line 366 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__merge__366__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), &hlds__inst_graph__conv0_LambdaHeadVar__2_33);
    }
#line 366 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_2 = ((MR_Box) (hlds__inst_graph__conv0_LambdaHeadVar__2_33));
#line 366 "inst_graph.m"
  }
#line 366 "inst_graph.m"
}

#line 364 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__364__1_5_p_0(
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 364 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__3_29,
#line 364 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__4_30)
#line 364 "inst_graph.m"
{
#line 364 "inst_graph.m"
  {
#line 364 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_42_42;
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_44_44;
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__LambdaHeadVar__2_28, (MR_Integer) 0)));
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__LambdaHeadVar__2_28, (MR_Integer) 1)));
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_23;
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__Node_24;
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__Var_25;
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__V_31_31;
#line 371 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_Var_25;

#line 366 "inst_graph.m"
    {
#line 366 "inst_graph.m"
      hlds__inst_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_3[1]));
#line 366 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 1) = ((MR_Box) (hlds__inst_graph__IntroducedFrom__pred__merge__364__1_5_p_0_1));
#line 366 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 366 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 3) = ((MR_Box) (hlds__inst_graph__Renaming_14));
#line 366 "inst_graph.m"
    }
#line 2319 "hlds.inst_graph.c"
    hlds__inst_graph__TypeInfo_42_42 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
#line 366 "inst_graph.m"
    {
#line 366 "inst_graph.m"
      mercury__map__map_values_only_3_p_0(hlds__inst_graph__TypeInfo_42_42, hlds__inst_graph__TypeInfo_42_42, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__inst_graph__V_31_31, hlds__inst_graph__Functors0_19, &hlds__inst_graph__Functors_23);
    }
#line 370 "inst_graph.m"
    {
#line 370 "inst_graph.m"
      hlds__inst_graph__Node_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_24, 0) = ((MR_Box) (hlds__inst_graph__Functors_23));
#line 370 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_24, 1) = ((MR_Box) (hlds__inst_graph__MaybeParent_20));
#line 370 "inst_graph.m"
    }
#line 2336 "hlds.inst_graph.c"
    hlds__inst_graph__TypeInfo_44_44 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 371 "inst_graph.m"
    {
#line 371 "inst_graph.m"
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__Renaming_14, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_27)), &hlds__inst_graph__conv1_Var_25);
    }
#line 371 "inst_graph.m"
    hlds__inst_graph__Var_25 = ((MR_Word) hlds__inst_graph__conv1_Var_25);
#line 372 "inst_graph.m"
    {
#line 372 "inst_graph.m"
      mercury__map__det_insert_4_p_0(hlds__inst_graph__TypeInfo_44_44, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_25)), ((MR_Box) (hlds__inst_graph__Node_24)), hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
#line 372 "inst_graph.m"
      return;
    }
#line 364 "inst_graph.m"
  }
#line 364 "inst_graph.m"
}

#line 366 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__366__1_3_p_0(
#line 366 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 366 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 366 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__2_33)
#line 366 "inst_graph.m"
{
#line 366 "inst_graph.m"
  {
#line 366 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 366 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_41_41 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

#line 368 "inst_graph.m"
    {
#line 368 "inst_graph.m"
      mercury__map__apply_to_list_3_p_0(hlds__inst_graph__TypeInfo_41_41, hlds__inst_graph__TypeInfo_41_41, hlds__inst_graph__LambdaHeadVar__1_32, hlds__inst_graph__Renaming_14, hlds__inst_graph__LambdaHeadVar__2_33);
#line 368 "inst_graph.m"
      return;
    }
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
#line 2411 "hlds.inst_graph.c"
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
#line 2433 "hlds.inst_graph.c"
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

#line 2494 "hlds.inst_graph.c"
        {
#line 2496 "hlds.inst_graph.c"
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[1], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_5_5)));
        }
#line 31 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 2501 "hlds.inst_graph.c"
          {
#line 2503 "hlds.inst_graph.c"
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
#line 2539 "hlds.inst_graph.c"
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
#line 2551 "hlds.inst_graph.c"
        *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "inst_graph.m"
    else
#line 46 "inst_graph.m"
      {
#line 46 "inst_graph.m"
        MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "inst_graph.m"
        if ((hlds__inst_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2562 "hlds.inst_graph.c"
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
#line 2645 "hlds.inst_graph.c"
            hlds__inst_graph__TypeInfo_9_9 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 2647 "hlds.inst_graph.c"
            {
#line 2649 "hlds.inst_graph.c"
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

#line 436 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0(
#line 436 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 436 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 436 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 436 "inst_graph.m"
{
#line 436 "inst_graph.m"
  {
#line 436 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 436 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_15 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
#line 436 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_16 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

#line 436 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_15 == hlds__inst_graph__CastY_16);
#line 436 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 2687 "hlds.inst_graph.c"
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 436 "inst_graph.m"
    else
#line 436 "inst_graph.m"
      {
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 2)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 3)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_12_12;

#line 436 "inst_graph.m"
        {
#line 436 "inst_graph.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], &hlds__inst_graph__V_12_12, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
        }
#line 2717 "hlds.inst_graph.c"
        hlds__inst_graph__succeeded = (hlds__inst_graph__V_12_12 == (MR_Integer) 0);
#line 436 "inst_graph.m"
        hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 436 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 436 "inst_graph.m"
          *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_12_12;
#line 436 "inst_graph.m"
        else
#line 436 "inst_graph.m"
          {
#line 436 "inst_graph.m"
            MR_Word hlds__inst_graph__V_13_13;

#line 436 "inst_graph.m"
            {
#line 436 "inst_graph.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[1], &hlds__inst_graph__V_13_13, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
            }
#line 2737 "hlds.inst_graph.c"
            hlds__inst_graph__succeeded = (hlds__inst_graph__V_13_13 == (MR_Integer) 0);
#line 436 "inst_graph.m"
            hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 436 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 436 "inst_graph.m"
              *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_13_13;
#line 436 "inst_graph.m"
            else
#line 436 "inst_graph.m"
              {
#line 436 "inst_graph.m"
                MR_Word hlds__inst_graph__V_14_14;

#line 436 "inst_graph.m"
                {
#line 436 "inst_graph.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[2], &hlds__inst_graph__V_14_14, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                }
#line 2757 "hlds.inst_graph.c"
                hlds__inst_graph__succeeded = (hlds__inst_graph__V_14_14 == (MR_Integer) 0);
#line 436 "inst_graph.m"
                hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 436 "inst_graph.m"
                if (hlds__inst_graph__succeeded)
#line 436 "inst_graph.m"
                  *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_14_14;
#line 436 "inst_graph.m"
                else
#line 436 "inst_graph.m"
                  {
#line 436 "inst_graph.m"
                    {
#line 436 "inst_graph.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__V_7_7)), ((MR_Box) (hlds__inst_graph__V_11_11)));
#line 436 "inst_graph.m"
                      return;
                    }
#line 436 "inst_graph.m"
                  }
#line 436 "inst_graph.m"
              }
#line 436 "inst_graph.m"
          }
#line 436 "inst_graph.m"
      }
#line 436 "inst_graph.m"
  }
#line 436 "inst_graph.m"
}

#line 436 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0(
#line 436 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 436 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 436 "inst_graph.m"
{
#line 436 "inst_graph.m"
  {
#line 436 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 436 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_11 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 436 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_12 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 436 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_11 == hlds__inst_graph__CastY_12);
#line 436 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 436 "inst_graph.m"
      hlds__inst_graph__succeeded = MR_TRUE;
#line 436 "inst_graph.m"
    else
#line 436 "inst_graph.m"
      {
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_14_14;
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_15_15;
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_16_16;
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 436 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));

#line 2840 "hlds.inst_graph.c"
        {
#line 2842 "hlds.inst_graph.c"
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_7_7)));
        }
#line 436 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 436 "inst_graph.m"
          {
#line 2849 "hlds.inst_graph.c"
            hlds__inst_graph__TypeInfo_14_14 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
#line 2851 "hlds.inst_graph.c"
            {
#line 2853 "hlds.inst_graph.c"
              hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_14_14, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
            }
#line 436 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 436 "inst_graph.m"
              {
#line 2860 "hlds.inst_graph.c"
                hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[2];
#line 2862 "hlds.inst_graph.c"
                {
#line 2864 "hlds.inst_graph.c"
                  hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_15_15, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
                }
#line 436 "inst_graph.m"
                if (hlds__inst_graph__succeeded)
#line 436 "inst_graph.m"
                  {
#line 2871 "hlds.inst_graph.c"
                    hlds__inst_graph__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_2[0];
#line 2873 "hlds.inst_graph.c"
                    {
#line 2875 "hlds.inst_graph.c"
                      return hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_16_16, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                    }
#line 436 "inst_graph.m"
                  }
#line 436 "inst_graph.m"
              }
#line 436 "inst_graph.m"
          }
#line 436 "inst_graph.m"
      }
#line 436 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 436 "inst_graph.m"
  }
#line 436 "inst_graph.m"
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

#line 429 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
#line 429 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_5,
#line 429 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_6)
#line 429 "inst_graph.m"
{
#line 432 "inst_graph.m"
  {
#line 432 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 432 "inst_graph.m"
    {
#line 432 "inst_graph.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__Var_6, hlds__inst_graph__VarSet_5);
#line 432 "inst_graph.m"
      return;
    }
#line 432 "inst_graph.m"
  }
#line 429 "inst_graph.m"
}

#line 422 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
#line 422 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 422 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 422 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 422 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 422 "inst_graph.m"
{
#line 422 "inst_graph.m"
  {
#line 422 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 422 "inst_graph.m"
    {
#line 422 "inst_graph.m"
      hlds__inst_graph__dump_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1));
#line 422 "inst_graph.m"
      return;
    }
#line 422 "inst_graph.m"
  }
#line 422 "inst_graph.m"
}

#line 413 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
#line 413 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 413 "inst_graph.m"
  MR_Word hlds__inst_graph__ConsId_7,
#line 413 "inst_graph.m"
  MR_Word hlds__inst_graph__Args_8)
#line 413 "inst_graph.m"
{
#line 416 "inst_graph.m"
  {
#line 416 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 416 "inst_graph.m"
    MR_String hlds__inst_graph__V_16_16;

#line 417 "inst_graph.m"
    {
#line 417 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "%%\t");
    }
#line 418 "inst_graph.m"
    {
#line 418 "inst_graph.m"
      hlds__inst_graph__V_16_16 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__inst_graph__ConsId_7);
    }
#line 418 "inst_graph.m"
    {
#line 418 "inst_graph.m"
      mercury__io__write_string_3_p_0(hlds__inst_graph__V_16_16);
    }
#line 424 "inst_graph.m"
    if ((hlds__inst_graph__Args_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "inst_graph.m"
      {
#line 425 "inst_graph.m"
      }
#line 424 "inst_graph.m"
    else
#line 420 "inst_graph.m"
      {
#line 420 "inst_graph.m"
        MR_Word hlds__inst_graph__V_21_21;

#line 421 "inst_graph.m"
        {
#line 421 "inst_graph.m"
          mercury__io__write_char_3_p_0((MR_Char) 40);
        }
#line 422 "inst_graph.m"
        {
#line 422 "inst_graph.m"
          hlds__inst_graph__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 422 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_11[0]));
#line 422 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 1) = ((MR_Box) (hlds__inst_graph__dump_functor_5_p_0_1));
#line 422 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 422 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 422 "inst_graph.m"
        }
#line 422 "inst_graph.m"
        {
#line 422 "inst_graph.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Args_8, (MR_String) ", ", hlds__inst_graph__V_21_21);
        }
#line 423 "inst_graph.m"
        {
#line 423 "inst_graph.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
#line 420 "inst_graph.m"
      }
#line 427 "inst_graph.m"
    {
#line 427 "inst_graph.m"
      mercury__io__nl_2_p_0();
#line 427 "inst_graph.m"
      return;
    }
#line 416 "inst_graph.m"
  }
#line 413 "inst_graph.m"
}

#line 411 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 411 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 411 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 411 "inst_graph.m"
{
#line 411 "inst_graph.m"
  {
#line 411 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 411 "inst_graph.m"
    {
#line 411 "inst_graph.m"
      hlds__inst_graph__dump_functor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
#line 411 "inst_graph.m"
      return;
    }
#line 411 "inst_graph.m"
  }
#line 411 "inst_graph.m"
}

#line 396 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
#line 396 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 396 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 396 "inst_graph.m"
  MR_Word hlds__inst_graph__Node_8)
#line 396 "inst_graph.m"
{
#line 399 "inst_graph.m"
  {
#line 399 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 399 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeCtorInfo_24_24;
#line 399 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 0)));
#line 399 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 1)));
#line 399 "inst_graph.m"
    MR_Word hlds__inst_graph__V_22_22;
#line 411 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_14;

#line 401 "inst_graph.m"
    {
#line 401 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "%% ");
    }
#line 3163 "hlds.inst_graph.c"
    hlds__inst_graph__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 402 "inst_graph.m"
    {
#line 402 "inst_graph.m"
      mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Var_7, hlds__inst_graph__VarSet_6);
    }
#line 403 "inst_graph.m"
    {
#line 403 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 407 "inst_graph.m"
    if ((hlds__inst_graph__MaybeParent_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 408 "inst_graph.m"
      {
#line 408 "inst_graph.m"
      }
#line 407 "inst_graph.m"
    else
#line 405 "inst_graph.m"
      {
#line 405 "inst_graph.m"
        MR_Word hlds__inst_graph__Parent_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_11, (MR_Integer) 0)));

#line 406 "inst_graph.m"
        {
#line 406 "inst_graph.m"
          mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Parent_12, hlds__inst_graph__VarSet_6);
        }
#line 405 "inst_graph.m"
      }
#line 410 "inst_graph.m"
    {
#line 410 "inst_graph.m"
      mercury__io__nl_2_p_0();
    }
#line 411 "inst_graph.m"
    {
#line 411 "inst_graph.m"
      hlds__inst_graph__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 411 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[2]));
#line 411 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 1) = ((MR_Box) (hlds__inst_graph__dump_node_5_p_0_1));
#line 411 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 411 "inst_graph.m"
    }
#line 411 "inst_graph.m"
    {
#line 411 "inst_graph.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_22_22, hlds__inst_graph__Functors_10, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_14);
    }
#line 399 "inst_graph.m"
  }
#line 396 "inst_graph.m"
}

#line 335 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
#line 335 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 335 "inst_graph.m"
{
#line 335 "inst_graph.m"
  {
#line 335 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 335 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29);
#line 335 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30);
#line 335 "inst_graph.m"
    {
#line 335 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_1(hlds__inst_graph__env_ptr);
#line 335 "inst_graph.m"
      return;
    }
#line 335 "inst_graph.m"
  }
#line 335 "inst_graph.m"
}

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 337 "inst_graph.m"
{
#line 337 "inst_graph.m"
  {
#line 337 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 337 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31);
#line 337 "inst_graph.m"
    {
#line 337 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_3(hlds__inst_graph__env_ptr);
#line 337 "inst_graph.m"
      return;
    }
#line 337 "inst_graph.m"
  }
#line 337 "inst_graph.m"
}

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 337 "inst_graph.m"
{
#line 337 "inst_graph.m"
  {
#line 337 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 338 "inst_graph.m"
    {
#line 338 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
#line 338 "inst_graph.m"
      return;
    }
#line 337 "inst_graph.m"
  }
#line 337 "inst_graph.m"
}

#line 342 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
#line 342 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 342 "inst_graph.m"
{
#line 342 "inst_graph.m"
  {
#line 342 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 342 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37);
#line 342 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33);
#line 342 "inst_graph.m"
    {
#line 342 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_5(hlds__inst_graph__env_ptr);
#line 342 "inst_graph.m"
      return;
    }
#line 342 "inst_graph.m"
  }
#line 342 "inst_graph.m"
}

#line 341 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
#line 341 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 341 "inst_graph.m"
{
#line 341 "inst_graph.m"
  {
#line 341 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 343 "inst_graph.m"
    {
#line 343 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
#line 343 "inst_graph.m"
      return;
    }
#line 341 "inst_graph.m"
  }
#line 341 "inst_graph.m"
}

#line 340 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
#line 340 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 340 "inst_graph.m"
{
#line 340 "inst_graph.m"
  {
#line 340 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 340 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_TRUE;
#line 340 "inst_graph.m"
    {
#line 336 "inst_graph.m"
      {
#line 336 "inst_graph.m"
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25);
      }
#line 340 "inst_graph.m"
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 337 "inst_graph.m"
        {
#line 337 "inst_graph.m"
          {
#line 337 "inst_graph.m"
            mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_4, hlds__inst_graph__env_ptr);
          }
#line 337 "inst_graph.m"
        }
#line 340 "inst_graph.m"
      else
#line 341 "inst_graph.m"
        {
#line 341 "inst_graph.m"
          MR_Word hlds__inst_graph__ArgsB_32;
#line 341 "inst_graph.m"
          MR_Box hlds__inst_graph__conv5_ArgsB_32;

#line 341 "inst_graph.m"
          {
#line 341 "inst_graph.m"
            (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29)), &hlds__inst_graph__conv5_ArgsB_32);
          }
#line 341 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 341 "inst_graph.m"
            {
#line 341 "inst_graph.m"
              hlds__inst_graph__ArgsB_32 = ((MR_Word) hlds__inst_graph__conv5_ArgsB_32);
#line 341 "inst_graph.m"
              (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 341 "inst_graph.m"
            }
#line 341 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 342 "inst_graph.m"
            {
#line 342 "inst_graph.m"
              hlds__inst_graph__corresponding_members_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__ArgsB_32, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33, hlds__inst_graph__corresponding_nodes_2_8_p_0_6, hlds__inst_graph__env_ptr);
            }
#line 341 "inst_graph.m"
        }
#line 340 "inst_graph.m"
    }
#line 340 "inst_graph.m"
  }
#line 340 "inst_graph.m"
}

#line 347 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
#line 347 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 347 "inst_graph.m"
{
#line 347 "inst_graph.m"
  {
#line 347 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 347 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34);
#line 347 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38);
#line 347 "inst_graph.m"
    {
#line 347 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_7(hlds__inst_graph__env_ptr);
#line 347 "inst_graph.m"
      return;
    }
#line 347 "inst_graph.m"
  }
#line 347 "inst_graph.m"
}

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 348 "inst_graph.m"
{
#line 348 "inst_graph.m"
  {
#line 348 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 348 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39);
#line 348 "inst_graph.m"
    {
#line 348 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_9(hlds__inst_graph__env_ptr);
#line 348 "inst_graph.m"
      return;
    }
#line 348 "inst_graph.m"
  }
#line 348 "inst_graph.m"
}

#line 347 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
#line 347 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 347 "inst_graph.m"
{
#line 347 "inst_graph.m"
  {
#line 347 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 349 "inst_graph.m"
    {
#line 349 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
#line 349 "inst_graph.m"
      return;
    }
#line 347 "inst_graph.m"
  }
#line 347 "inst_graph.m"
}

#line 347 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
#line 347 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 347 "inst_graph.m"
{
#line 347 "inst_graph.m"
  {
#line 347 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 348 "inst_graph.m"
    {
#line 348 "inst_graph.m"
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_10, hlds__inst_graph__env_ptr);
    }
#line 347 "inst_graph.m"
  }
#line 347 "inst_graph.m"
}

#line 318 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_1,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_2,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenA0_3,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenB0_4,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__A_5,
#line 318 "inst_graph.m"
  MR_Word hlds__inst_graph__B_6,
#line 318 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__7_7,
#line 318 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__8_8,
#line 318 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 318 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 318 "inst_graph.m"
{
#line 318 "inst_graph.m"
  {
#line 318 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s hlds__inst_graph__env;

#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1 = hlds__inst_graph__InstGraphA_1;
#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2 = hlds__inst_graph__InstGraphB_2;
#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5 = hlds__inst_graph__A_5;
#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6 = hlds__inst_graph__B_6;
#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7 = hlds__inst_graph__HeadVar__7_7;
#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8 = hlds__inst_graph__HeadVar__8_8;
#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont = hlds__inst_graph__cont;
#line 318 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 322 "inst_graph.m"
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
#line 322 "inst_graph.m"
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
#line 322 "inst_graph.m"
    {
#line 322 "inst_graph.m"
      ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont)((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
#line 323 "inst_graph.m"
    {
#line 323 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeCtorInfo_42_42;
#line 323 "inst_graph.m"
      MR_Word hlds__inst_graph__FunctorsA_23;
#line 323 "inst_graph.m"
      MR_Word hlds__inst_graph__V_35_35;
#line 323 "inst_graph.m"
      MR_Word hlds__inst_graph__V_36_36;
#line 325 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_40_40 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 329 "inst_graph.m"
      MR_Box hlds__inst_graph__conv0_V_35_35;
#line 329 "inst_graph.m"
      MR_Word hlds__inst_graph__V_24_24;
#line 330 "inst_graph.m"
      MR_Box hlds__inst_graph__conv1_V_36_36;
#line 330 "inst_graph.m"
      MR_Word hlds__inst_graph__V_26_26;
#line 335 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeCtorInfo_43_43;
#line 335 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_44_44;

#line 325 "inst_graph.m"
      {
#line 325 "inst_graph.m"
        (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), hlds__inst_graph__SeenA0_3);
      }
#line 325 "inst_graph.m"
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 326 "inst_graph.m"
        {
#line 326 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), hlds__inst_graph__SeenB0_4);
        }
#line 324 "inst_graph.m"
      (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = !((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded);
#line 323 "inst_graph.m"
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 323 "inst_graph.m"
        {
#line 3624 "hlds.inst_graph.c"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 3626 "hlds.inst_graph.c"
          hlds__inst_graph__TypeCtorInfo_42_42 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 329 "inst_graph.m"
          {
#line 329 "inst_graph.m"
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), &hlds__inst_graph__conv0_V_35_35);
          }
#line 329 "inst_graph.m"
          hlds__inst_graph__V_35_35 = ((MR_Word) hlds__inst_graph__conv0_V_35_35);
#line 329 "inst_graph.m"
          hlds__inst_graph__FunctorsA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 0)));
#line 329 "inst_graph.m"
          hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 1)));
#line 330 "inst_graph.m"
          {
#line 330 "inst_graph.m"
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), &hlds__inst_graph__conv1_V_36_36);
          }
#line 330 "inst_graph.m"
          hlds__inst_graph__V_36_36 = ((MR_Word) hlds__inst_graph__conv1_V_36_36);
#line 330 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 0)));
#line 330 "inst_graph.m"
          hlds__inst_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 1)));
#line 332 "inst_graph.m"
          {
#line 332 "inst_graph.m"
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenA0_3, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)));
          }
#line 333 "inst_graph.m"
          {
#line 333 "inst_graph.m"
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenB0_4, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)));
          }
#line 346 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_FALSE;
#line 3662 "hlds.inst_graph.c"
          hlds__inst_graph__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 3664 "hlds.inst_graph.c"
          hlds__inst_graph__TypeInfo_44_44 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
#line 335 "inst_graph.m"
          {
#line 335 "inst_graph.m"
            mercury__map__member_3_p_0(hlds__inst_graph__TypeCtorInfo_43_43, hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__FunctorsA_23, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_2, &hlds__inst_graph__env);
          }
#line 346 "inst_graph.m"
          if (!((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0))
#line 347 "inst_graph.m"
            {
#line 347 "inst_graph.m"
              {
#line 347 "inst_graph.m"
                mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_8, &hlds__inst_graph__env);
              }
#line 347 "inst_graph.m"
            }
#line 323 "inst_graph.m"
        }
#line 323 "inst_graph.m"
    }
#line 318 "inst_graph.m"
  }
#line 318 "inst_graph.m"
}

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6)
#line 293 "inst_graph.m"
{
#line 293 "inst_graph.m"
  {
#line 293 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__293__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
#line 293 "inst_graph.m"
      return;
    }
#line 293 "inst_graph.m"
  }
#line 293 "inst_graph.m"
}

#line 285 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_11,
#line 285 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 285 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
#line 285 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
#line 285 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
#line 285 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31)
#line 285 "inst_graph.m"
{
#line 290 "inst_graph.m"
  {
#line 290 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 290 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_15;
#line 290 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_32;
#line 290 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_33;
#line 290 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;
#line 290 "inst_graph.m"
    MR_Word hlds__inst_graph__V_35_35;
#line 291 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_9, (MR_Integer) 1)));
#line 292 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_34_34;
#line 292 "inst_graph.m"
    MR_Word hlds__inst_graph__V_16_16;

#line 291 "inst_graph.m"
    {
#line 291 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_9), ((MR_Box) (hlds__inst_graph__Var_11)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_28, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc2_0_30, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_33);
    }
#line 292 "inst_graph.m"
    {
#line 292 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_10, ((MR_Box) (hlds__inst_graph__Var_11)), &hlds__inst_graph__conv1_V_34_34);
    }
#line 292 "inst_graph.m"
    hlds__inst_graph__V_34_34 = ((MR_Word) hlds__inst_graph__conv1_V_34_34);
#line 292 "inst_graph.m"
    hlds__inst_graph__Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 0)));
#line 292 "inst_graph.m"
    hlds__inst_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 1)));
#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      hlds__inst_graph__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux2_8_p_0_1));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 5) = ((MR_Box) (hlds__inst_graph__P_9));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
#line 293 "inst_graph.m"
    }
#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_35_35, hlds__inst_graph__Functors_15, hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc1_29, hlds__inst_graph__STATE_VARIABLE_Acc2_33_33, hlds__inst_graph__STATE_VARIABLE_Acc2_31);
#line 293 "inst_graph.m"
      return;
    }
#line 290 "inst_graph.m"
  }
#line 285 "inst_graph.m"
}

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 266 "inst_graph.m"
{
#line 266 "inst_graph.m"
  {
#line 266 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__266__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
#line 266 "inst_graph.m"
      return;
    }
#line 266 "inst_graph.m"
  }
#line 266 "inst_graph.m"
}

#line 260 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_9,
#line 260 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 260 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
#line 260 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22)
#line 260 "inst_graph.m"
{
#line 263 "inst_graph.m"
  {
#line 263 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 263 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_12;
#line 263 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_23;
#line 263 "inst_graph.m"
    MR_Word hlds__inst_graph__V_24_24;
#line 263 "inst_graph.m"
    MR_Word hlds__inst_graph__V_25_25;
#line 264 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_7, (MR_Integer) 1)));
#line 265 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_24_24;
#line 265 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;

#line 264 "inst_graph.m"
    {
#line 264 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_7), ((MR_Box) (hlds__inst_graph__Var_9)), hlds__inst_graph__STATE_VARIABLE_Acc_0_21, &hlds__inst_graph__STATE_VARIABLE_Acc_23_23);
    }
#line 265 "inst_graph.m"
    {
#line 265 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_8, ((MR_Box) (hlds__inst_graph__Var_9)), &hlds__inst_graph__conv1_V_24_24);
    }
#line 265 "inst_graph.m"
    hlds__inst_graph__V_24_24 = ((MR_Word) hlds__inst_graph__conv1_V_24_24);
#line 265 "inst_graph.m"
    hlds__inst_graph__Functors_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 0)));
#line 265 "inst_graph.m"
    hlds__inst_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 1)));
#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      hlds__inst_graph__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux_6_p_0_1));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 4) = ((MR_Box) (hlds__inst_graph__P_7));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
#line 266 "inst_graph.m"
    }
#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_25_25, hlds__inst_graph__Functors_12, hlds__inst_graph__STATE_VARIABLE_Acc_23_23, hlds__inst_graph__STATE_VARIABLE_Acc_22);
#line 266 "inst_graph.m"
      return;
    }
#line 263 "inst_graph.m"
  }
#line 260 "inst_graph.m"
}

#line 235 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
#line 235 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 235 "inst_graph.m"
{
#line 235 "inst_graph.m"
  {
#line 235 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 235 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11);
#line 235 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12);
#line 235 "inst_graph.m"
    {
#line 235 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0_1(hlds__inst_graph__env_ptr);
#line 235 "inst_graph.m"
      return;
    }
#line 235 "inst_graph.m"
  }
#line 235 "inst_graph.m"
}

#line 236 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
#line 236 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 236 "inst_graph.m"
{
#line 236 "inst_graph.m"
  {
#line 236 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 236 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13);
#line 236 "inst_graph.m"
    {
#line 236 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0_3(hlds__inst_graph__env_ptr);
#line 236 "inst_graph.m"
      return;
    }
#line 236 "inst_graph.m"
  }
#line 236 "inst_graph.m"
}

#line 233 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
#line 233 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 233 "inst_graph.m"
{
#line 233 "inst_graph.m"
  {
#line 233 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 238 "inst_graph.m"
    {
#line 238 "inst_graph.m"
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
#line 238 "inst_graph.m"
      {
#line 238 "inst_graph.m"
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
      }
#line 238 "inst_graph.m"
    }
#line 242 "inst_graph.m"
    {
#line 240 "inst_graph.m"
      {
#line 240 "inst_graph.m"
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)), (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6);
      }
#line 242 "inst_graph.m"
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
#line 241 "inst_graph.m"
        {
#line 241 "inst_graph.m"
          (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 241 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
#line 241 "inst_graph.m"
            {
#line 241 "inst_graph.m"
              ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
#line 241 "inst_graph.m"
              return;
            }
#line 241 "inst_graph.m"
        }
#line 242 "inst_graph.m"
      else
#line 243 "inst_graph.m"
        {
#line 243 "inst_graph.m"
          MR_Word hlds__inst_graph__V_15_15;

#line 243 "inst_graph.m"
          {
#line 243 "inst_graph.m"
            hlds__inst_graph__V_15_15 = mercury__set__insert_2_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)));
          }
#line 243 "inst_graph.m"
          {
#line 243 "inst_graph.m"
            hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, hlds__inst_graph__V_15_15, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
#line 243 "inst_graph.m"
            return;
          }
#line 243 "inst_graph.m"
        }
#line 242 "inst_graph.m"
    }
#line 233 "inst_graph.m"
  }
#line 233 "inst_graph.m"
}

#line 233 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
#line 233 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 233 "inst_graph.m"
{
#line 233 "inst_graph.m"
  {
#line 233 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 236 "inst_graph.m"
    {
#line 236 "inst_graph.m"
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12, hlds__inst_graph__descendant_2_4_p_0_4, hlds__inst_graph__env_ptr);
    }
#line 233 "inst_graph.m"
  }
#line 233 "inst_graph.m"
}

#line 230 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_6,
#line 230 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 230 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_8,
#line 230 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 230 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 230 "inst_graph.m"
{
#line 230 "inst_graph.m"
  {
#line 230 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s hlds__inst_graph__env;

#line 230 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5 = hlds__inst_graph__InstGraph_5;
#line 230 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6 = hlds__inst_graph__Seen_6;
#line 230 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8 = hlds__inst_graph__Descendant_8;
#line 230 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont = hlds__inst_graph__cont;
#line 230 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 233 "inst_graph.m"
    {
#line 233 "inst_graph.m"
      MR_Word hlds__inst_graph__Functors_9;
#line 233 "inst_graph.m"
      MR_Word hlds__inst_graph__V_14_14;
#line 234 "inst_graph.m"
      MR_Box hlds__inst_graph__conv0_V_14_14;
#line 234 "inst_graph.m"
      MR_Word hlds__inst_graph__V_10_10;

#line 4135 "hlds.inst_graph.c"
      (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 234 "inst_graph.m"
      {
#line 234 "inst_graph.m"
        mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, ((MR_Box) (hlds__inst_graph__Var_7)), &hlds__inst_graph__conv0_V_14_14);
      }
#line 234 "inst_graph.m"
      hlds__inst_graph__V_14_14 = ((MR_Word) hlds__inst_graph__conv0_V_14_14);
#line 234 "inst_graph.m"
      hlds__inst_graph__Functors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 0)));
#line 234 "inst_graph.m"
      hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 1)));
#line 235 "inst_graph.m"
      {
#line 235 "inst_graph.m"
        mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__Functors_9, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12, hlds__inst_graph__descendant_2_4_p_0_2, &hlds__inst_graph__env);
      }
#line 233 "inst_graph.m"
    }
#line 230 "inst_graph.m"
  }
#line 230 "inst_graph.m"
}

#line 201 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
#line 201 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_4,
#line 201 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
#line 201 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7)
#line 201 "inst_graph.m"
{
#line 203 "inst_graph.m"
  {
#line 203 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 203 "inst_graph.m"
    MR_Word hlds__inst_graph__V_8_8;
#line 203 "inst_graph.m"
    MR_Word hlds__inst_graph__V_10_10;

#line 204 "inst_graph.m"
    {
#line 204 "inst_graph.m"
      hlds__inst_graph__V_10_10 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1]);
    }
#line 204 "inst_graph.m"
    {
#line 204 "inst_graph.m"
      hlds__inst_graph__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 0) = ((MR_Box) (hlds__inst_graph__V_10_10));
#line 204 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "inst_graph.m"
    }
#line 204 "inst_graph.m"
    {
#line 204 "inst_graph.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_4)), ((MR_Box) (hlds__inst_graph__V_8_8)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6, hlds__inst_graph__STATE_VARIABLE_InstGraph_7);
#line 204 "inst_graph.m"
      return;
    }
#line 203 "inst_graph.m"
  }
#line 201 "inst_graph.m"
}

#line 179 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
#line 179 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 179 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 179 "inst_graph.m"
{
#line 179 "inst_graph.m"
  {
#line 179 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 179 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 179 "inst_graph.m"
    {
#line 179 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 179 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
#line 179 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
#line 179 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
#line 179 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 179 "inst_graph.m"
    }
#line 179 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 179 "inst_graph.m"
  }
#line 179 "inst_graph.m"
}

#line 178 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__implementation_inst_graph_1_f_0(
#line 178 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 178 "inst_graph.m"
{
#line 178 "inst_graph.m"
  {
#line 178 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 178 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 178 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));

#line 178 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 178 "inst_graph.m"
  }
#line 178 "inst_graph.m"
}

#line 176 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(
#line 176 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 176 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 176 "inst_graph.m"
{
#line 176 "inst_graph.m"
  {
#line 176 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 176 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));

#line 176 "inst_graph.m"
    {
#line 176 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 176 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
#line 176 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
#line 176 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 176 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
#line 176 "inst_graph.m"
    }
#line 176 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 176 "inst_graph.m"
  }
#line 176 "inst_graph.m"
}

#line 175 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__interface_varset_1_f_0(
#line 175 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 175 "inst_graph.m"
{
#line 175 "inst_graph.m"
  {
#line 175 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 175 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 175 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 175 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 175 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 175 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 175 "inst_graph.m"
  }
#line 175 "inst_graph.m"
}

#line 173 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(
#line 173 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 173 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 173 "inst_graph.m"
{
#line 173 "inst_graph.m"
  {
#line 173 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 173 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));

#line 173 "inst_graph.m"
    {
#line 173 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 173 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
#line 173 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 173 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
#line 173 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
#line 173 "inst_graph.m"
    }
#line 173 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 173 "inst_graph.m"
  }
#line 173 "inst_graph.m"
}

#line 172 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__interface_vars_1_f_0(
#line 172 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 172 "inst_graph.m"
{
#line 172 "inst_graph.m"
  {
#line 172 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 172 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 172 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 172 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 172 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 172 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 172 "inst_graph.m"
  }
#line 172 "inst_graph.m"
}

#line 169 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
#line 169 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 169 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 169 "inst_graph.m"
{
#line 169 "inst_graph.m"
  {
#line 169 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__3_3;
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 169 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));

#line 169 "inst_graph.m"
    {
#line 169 "inst_graph.m"
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
#line 169 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
#line 169 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
#line 169 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
#line 169 "inst_graph.m"
    }
#line 169 "inst_graph.m"
    return hlds__inst_graph__HeadVar__3_3;
#line 169 "inst_graph.m"
  }
#line 169 "inst_graph.m"
}

#line 168 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__interface_inst_graph_1_f_0(
#line 168 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1)
#line 168 "inst_graph.m"
{
#line 168 "inst_graph.m"
  {
#line 168 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 168 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "inst_graph.m"
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "inst_graph.m"
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 168 "inst_graph.m"
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

#line 168 "inst_graph.m"
    return hlds__inst_graph__HeadVar__2_2;
#line 168 "inst_graph.m"
  }
#line 168 "inst_graph.m"
}

#line 166 "inst_graph.m"
MR_Word MR_CALL 
hlds__inst_graph__inst_graph_info_init_0_f_0(void)
#line 166 "inst_graph.m"
{
#line 455 "inst_graph.m"
  {
#line 455 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 455 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__1_1;
#line 455 "inst_graph.m"
    MR_Word hlds__inst_graph__InstGraph_2;
#line 455 "inst_graph.m"
    MR_Word hlds__inst_graph__VarSet_3;

#line 456 "inst_graph.m"
    {
#line 456 "inst_graph.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__inst_graph__VarSet_3);
    }
#line 457 "inst_graph.m"
    {
#line 457 "inst_graph.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph_2);
    }
#line 455 "inst_graph.m"
    {
#line 455 "inst_graph.m"
      hlds__inst_graph__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 455 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 0) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
#line 455 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 2) = ((MR_Box) (hlds__inst_graph__VarSet_3));
#line 455 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 3) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
#line 455 "inst_graph.m"
    }
#line 455 "inst_graph.m"
    return hlds__inst_graph__HeadVar__1_1;
#line 455 "inst_graph.m"
  }
#line 166 "inst_graph.m"
}

#line 157 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__corresponding_members_4_p_0(
#line 157 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_15,
#line 157 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_16,
#line 157 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 157 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 157 "inst_graph.m"
  MR_Box * hlds__inst_graph__A_3,
#line 157 "inst_graph.m"
  MR_Box * hlds__inst_graph__B_4,
#line 157 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 157 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 157 "inst_graph.m"
{
#line 357 "inst_graph.m"
  while (MR_TRUE)
#line 357 "inst_graph.m"
    {
#line 357 "inst_graph.m"
      /* tailcall optimized into a loop */
#line 357 "inst_graph.m"
      {
#line 357 "inst_graph.m"
        MR_bool hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 357 "inst_graph.m"
        MR_Word hlds__inst_graph__V_17_17;
#line 357 "inst_graph.m"
        MR_Box hlds__inst_graph__V_18_18;
#line 357 "inst_graph.m"
        MR_Word hlds__inst_graph__V_19_19;
#line 357 "inst_graph.m"
        MR_Box hlds__inst_graph__V_20_20;

#line 357 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 357 "inst_graph.m"
          {
#line 357 "inst_graph.m"
            hlds__inst_graph__V_18_18 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0));
#line 357 "inst_graph.m"
            hlds__inst_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "inst_graph.m"
            hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 357 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 357 "inst_graph.m"
              {
#line 357 "inst_graph.m"
                hlds__inst_graph__V_20_20 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0));
#line 357 "inst_graph.m"
                hlds__inst_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 357 "inst_graph.m"
                *hlds__inst_graph__A_3 = hlds__inst_graph__V_18_18;
#line 357 "inst_graph.m"
                *hlds__inst_graph__B_4 = hlds__inst_graph__V_20_20;
#line 357 "inst_graph.m"
                {
#line 357 "inst_graph.m"
                  hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
                }
#line 359 "inst_graph.m"
                {
#line 359 "inst_graph.m"
                  /* direct tailcall eliminated */
#line 359 "inst_graph.m"
                  {
#line 359 "inst_graph.m"
                    MR_Word hlds__inst_graph__HeadVar__1__tmp_copy_1 = hlds__inst_graph__V_17_17;
#line 359 "inst_graph.m"
                    MR_Word hlds__inst_graph__HeadVar__2__tmp_copy_2 = hlds__inst_graph__V_19_19;

#line 359 "inst_graph.m"
                    hlds__inst_graph__HeadVar__2_2 = hlds__inst_graph__HeadVar__2__tmp_copy_2;
#line 359 "inst_graph.m"
                    hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__HeadVar__1__tmp_copy_1;
#line 359 "inst_graph.m"
                  }
#line 359 "inst_graph.m"
                  continue;
#line 359 "inst_graph.m"
                }
#line 357 "inst_graph.m"
              }
#line 357 "inst_graph.m"
          }
#line 357 "inst_graph.m"
      }
#line 357 "inst_graph.m"
      break;
#line 357 "inst_graph.m"
    }
#line 157 "inst_graph.m"
}

#line 394 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 394 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 394 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 394 "inst_graph.m"
{
#line 394 "inst_graph.m"
  {
#line 394 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 394 "inst_graph.m"
    {
#line 394 "inst_graph.m"
      hlds__inst_graph__dump_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
#line 394 "inst_graph.m"
      return;
    }
#line 394 "inst_graph.m"
  }
#line 394 "inst_graph.m"
}

#line 153 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__dump_4_p_0(
#line 153 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 153 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6)
#line 153 "inst_graph.m"
{
#line 393 "inst_graph.m"
  {
#line 393 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 393 "inst_graph.m"
    MR_Word hlds__inst_graph__V_10_10;
#line 394 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_9;

#line 394 "inst_graph.m"
    {
#line 394 "inst_graph.m"
      hlds__inst_graph__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 394 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[1]));
#line 394 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 1) = ((MR_Box) (hlds__inst_graph__dump_4_p_0_1));
#line 394 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 394 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 394 "inst_graph.m"
    }
#line 394 "inst_graph.m"
    {
#line 394 "inst_graph.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_10_10, hlds__inst_graph__InstGraph_5, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_9);
    }
#line 393 "inst_graph.m"
  }
#line 153 "inst_graph.m"
}

#line 364 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 364 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 364 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 364 "inst_graph.m"
{
#line 364 "inst_graph.m"
  {
#line 364 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 364 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_LambdaHeadVar__4_30;

#line 364 "inst_graph.m"
    {
#line 364 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__merge__364__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3), &hlds__inst_graph__conv0_LambdaHeadVar__4_30);
    }
#line 364 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_4 = ((MR_Box) (hlds__inst_graph__conv0_LambdaHeadVar__4_30));
#line 364 "inst_graph.m"
  }
#line 364 "inst_graph.m"
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
  MR_Word * hlds__inst_graph__Renaming_14)
#line 141 "inst_graph.m"
{
#line 362 "inst_graph.m"
  {
#line 362 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 362 "inst_graph.m"
    MR_Word hlds__inst_graph__V_26_26;
#line 364 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_InstGraph_12;

#line 363 "inst_graph.m"
    {
#line 363 "inst_graph.m"
      mercury__varset__merge_renaming_without_names_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__VarSet0_9, hlds__inst_graph__NewVarSet_11, hlds__inst_graph__VarSet_13, hlds__inst_graph__Renaming_14);
    }
#line 364 "inst_graph.m"
    {
#line 364 "inst_graph.m"
      hlds__inst_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 364 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[0]));
#line 364 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 1) = ((MR_Box) (hlds__inst_graph__merge_7_p_0_1));
#line 364 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 364 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 3) = ((MR_Box) (*hlds__inst_graph__Renaming_14));
#line 364 "inst_graph.m"
    }
#line 364 "inst_graph.m"
    {
#line 364 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__V_26_26, hlds__inst_graph__NewInstGraph_10, ((MR_Box) (hlds__inst_graph__InstGraph0_8)), &hlds__inst_graph__conv1_InstGraph_12);
    }
#line 364 "inst_graph.m"
    *hlds__inst_graph__InstGraph_12 = ((MR_Word) hlds__inst_graph__conv1_InstGraph_12);
#line 362 "inst_graph.m"
  }
#line 141 "inst_graph.m"
}

#line 354 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
#line 354 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 354 "inst_graph.m"
{
#line 354 "inst_graph.m"
  {
#line 354 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 354 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13);
#line 354 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14);
#line 354 "inst_graph.m"
    {
#line 354 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(hlds__inst_graph__env_ptr);
#line 354 "inst_graph.m"
      return;
    }
#line 354 "inst_graph.m"
  }
#line 354 "inst_graph.m"
}

#line 353 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
#line 353 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 353 "inst_graph.m"
{
#line 353 "inst_graph.m"
  {
#line 353 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 4850 "hlds.inst_graph.c"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22 = mercury__set__init_0_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    }
#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23 = mercury__set__init_0_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    }
#line 315 "inst_graph.m"
    {
#line 315 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr);
#line 315 "inst_graph.m"
      return;
    }
#line 353 "inst_graph.m"
  }
#line 353 "inst_graph.m"
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
#line 353 "inst_graph.m"
    {
#line 353 "inst_graph.m"
      MR_bool hlds__inst_graph__succeeded;
#line 353 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

#line 354 "inst_graph.m"
      {
#line 354 "inst_graph.m"
        hlds__inst_graph__corresponding_members_4_p_0(hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__VarsA_9, hlds__inst_graph__VarsB_10, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14, hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2, &hlds__inst_graph__env);
      }
#line 353 "inst_graph.m"
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
#line 314 "inst_graph.m"
  {
#line 314 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 314 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 314 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;
#line 314 "inst_graph.m"
    MR_Word hlds__inst_graph__V_14_14;

#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      hlds__inst_graph__V_13_13 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_15);
    }
#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      hlds__inst_graph__V_14_14 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_15);
    }
#line 315 "inst_graph.m"
    {
#line 315 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraphA_7, hlds__inst_graph__InstGraphB_8, hlds__inst_graph__V_13_13, hlds__inst_graph__V_14_14, hlds__inst_graph__A_9, hlds__inst_graph__B_10, hlds__inst_graph__V_11, hlds__inst_graph__W_12, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 315 "inst_graph.m"
      return;
    }
#line 314 "inst_graph.m"
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
#line 314 "inst_graph.m"
  {
#line 314 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 314 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_15_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 314 "inst_graph.m"
    MR_Word hlds__inst_graph__V_18_18;
#line 314 "inst_graph.m"
    MR_Word hlds__inst_graph__V_19_19;

#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      hlds__inst_graph__V_18_18 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_20);
    }
#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      hlds__inst_graph__V_19_19 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_20);
    }
#line 315 "inst_graph.m"
    {
#line 315 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraph_6, hlds__inst_graph__InstGraph_6, hlds__inst_graph__V_18_18, hlds__inst_graph__V_19_19, hlds__inst_graph__A_7, hlds__inst_graph__B_8, hlds__inst_graph__V_9, hlds__inst_graph__W_10, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 315 "inst_graph.m"
      return;
    }
#line 314 "inst_graph.m"
  }
#line 128 "inst_graph.m"
}

#line 308 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 308 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 308 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 308 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5)
#line 308 "inst_graph.m"
{
#line 308 "inst_graph.m"
  {
#line 308 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 308 "inst_graph.m"
    {
#line 308 "inst_graph.m"
      hlds__inst_graph__foldl_reachable2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
#line 308 "inst_graph.m"
      return;
    }
#line 308 "inst_graph.m"
  }
#line 308 "inst_graph.m"
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
#line 307 "inst_graph.m"
  {
#line 307 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 307 "inst_graph.m"
    MR_Word hlds__inst_graph__V_17_17;

#line 308 "inst_graph.m"
    {
#line 308 "inst_graph.m"
      hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 308 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_9[0]));
#line 308 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1));
#line 308 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 308 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
#line 308 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
#line 308 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 5) = ((MR_Box) (hlds__inst_graph__P_8));
#line 308 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
#line 308 "inst_graph.m"
    }
#line 308 "inst_graph.m"
    {
#line 308 "inst_graph.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_17_17, hlds__inst_graph__Vars_10, hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
#line 308 "inst_graph.m"
      return;
    }
#line 307 "inst_graph.m"
  }
#line 123 "inst_graph.m"
}

#line 293 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 293 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 293 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6)
#line 293 "inst_graph.m"
{
#line 293 "inst_graph.m"
  {
#line 293 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__293__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
#line 293 "inst_graph.m"
      return;
    }
#line 293 "inst_graph.m"
  }
#line 293 "inst_graph.m"
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
#line 280 "inst_graph.m"
  {
#line 280 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 280 "inst_graph.m"
    MR_Word hlds__inst_graph__V_17_17;
#line 280 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_33;
#line 280 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_46;
#line 280 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_47;
#line 280 "inst_graph.m"
    MR_Word hlds__inst_graph__V_48_48;
#line 280 "inst_graph.m"
    MR_Word hlds__inst_graph__V_49_49;
#line 291 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 292 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_48_48;
#line 292 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;

#line 283 "inst_graph.m"
    {
#line 283 "inst_graph.m"
      hlds__inst_graph__V_17_17 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
#line 291 "inst_graph.m"
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_8, (MR_Integer) 1)));
#line 291 "inst_graph.m"
    {
#line 291 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_8), ((MR_Box) (hlds__inst_graph__Var_10)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_47);
    }
#line 292 "inst_graph.m"
    {
#line 292 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_9, ((MR_Box) (hlds__inst_graph__Var_10)), &hlds__inst_graph__conv1_V_48_48);
    }
#line 292 "inst_graph.m"
    hlds__inst_graph__V_48_48 = ((MR_Word) hlds__inst_graph__conv1_V_48_48);
#line 292 "inst_graph.m"
    hlds__inst_graph__Functors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 0)));
#line 292 "inst_graph.m"
    hlds__inst_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 1)));
#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      hlds__inst_graph__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable2_7_p_0_1));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 5) = ((MR_Box) (hlds__inst_graph__P_8));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
#line 293 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 7) = ((MR_Box) (hlds__inst_graph__V_17_17));
#line 293 "inst_graph.m"
    }
#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_49_49, hlds__inst_graph__Functors_33, hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_33_47, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
#line 293 "inst_graph.m"
      return;
    }
#line 280 "inst_graph.m"
  }
#line 117 "inst_graph.m"
}

#line 278 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
#line 278 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 278 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 278 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 278 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 278 "inst_graph.m"
{
#line 278 "inst_graph.m"
  {
#line 278 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 278 "inst_graph.m"
    {
#line 278 "inst_graph.m"
      hlds__inst_graph__foldl_reachable_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
#line 278 "inst_graph.m"
      return;
    }
#line 278 "inst_graph.m"
  }
#line 278 "inst_graph.m"
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
#line 277 "inst_graph.m"
  {
#line 277 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 277 "inst_graph.m"
    MR_Word hlds__inst_graph__V_12_12;

#line 278 "inst_graph.m"
    {
#line 278 "inst_graph.m"
      hlds__inst_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 278 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_6[0]));
#line 278 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list_5_p_0_1));
#line 278 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 278 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
#line 278 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 4) = ((MR_Box) (hlds__inst_graph__P_6));
#line 278 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
#line 278 "inst_graph.m"
    }
#line 278 "inst_graph.m"
    {
#line 278 "inst_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_12_12, hlds__inst_graph__Vars_8, hlds__inst_graph__STATE_VARIABLE_Acc_0_10, hlds__inst_graph__STATE_VARIABLE_Acc_11);
#line 278 "inst_graph.m"
      return;
    }
#line 277 "inst_graph.m"
  }
#line 111 "inst_graph.m"
}

#line 266 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 266 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 266 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 266 "inst_graph.m"
{
#line 266 "inst_graph.m"
  {
#line 266 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__266__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
#line 266 "inst_graph.m"
      return;
    }
#line 266 "inst_graph.m"
  }
#line 266 "inst_graph.m"
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
#line 255 "inst_graph.m"
  {
#line 255 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 255 "inst_graph.m"
    MR_Word hlds__inst_graph__V_12_12;
#line 255 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_23;
#line 255 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_32;
#line 255 "inst_graph.m"
    MR_Word hlds__inst_graph__V_33_33;
#line 255 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;
#line 264 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 265 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_33_33;
#line 265 "inst_graph.m"
    MR_Word hlds__inst_graph__V_24_24;

#line 258 "inst_graph.m"
    {
#line 258 "inst_graph.m"
      hlds__inst_graph__V_12_12 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
#line 264 "inst_graph.m"
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_6, (MR_Integer) 1)));
#line 264 "inst_graph.m"
    {
#line 264 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_6), ((MR_Box) (hlds__inst_graph__Var_8)), hlds__inst_graph__STATE_VARIABLE_Acc_0_10, &hlds__inst_graph__STATE_VARIABLE_Acc_23_32);
    }
#line 265 "inst_graph.m"
    {
#line 265 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_7, ((MR_Box) (hlds__inst_graph__Var_8)), &hlds__inst_graph__conv1_V_33_33);
    }
#line 265 "inst_graph.m"
    hlds__inst_graph__V_33_33 = ((MR_Word) hlds__inst_graph__conv1_V_33_33);
#line 265 "inst_graph.m"
    hlds__inst_graph__Functors_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 0)));
#line 265 "inst_graph.m"
    hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 1)));
#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      hlds__inst_graph__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_5_p_0_1));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 4) = ((MR_Box) (hlds__inst_graph__P_6));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
#line 266 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 6) = ((MR_Box) (hlds__inst_graph__V_12_12));
#line 266 "inst_graph.m"
    }
#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_34_34, hlds__inst_graph__Functors_23, hlds__inst_graph__STATE_VARIABLE_Acc_23_32, hlds__inst_graph__STATE_VARIABLE_Acc_11);
#line 266 "inst_graph.m"
      return;
    }
#line 255 "inst_graph.m"
  }
#line 103 "inst_graph.m"
}

#line 252 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
#line 252 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 252 "inst_graph.m"
{
#line 252 "inst_graph.m"
  {
#line 252 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 252 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7);
#line 252 "inst_graph.m"
    {
#line 252 "inst_graph.m"
      hlds__inst_graph__reachable_from_list_3_p_0_1(hlds__inst_graph__env_ptr);
#line 252 "inst_graph.m"
      return;
    }
#line 252 "inst_graph.m"
  }
#line 252 "inst_graph.m"
}

#line 251 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
#line 251 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 251 "inst_graph.m"
{
#line 251 "inst_graph.m"
  {
#line 251 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 247 "inst_graph.m"
    {
#line 247 "inst_graph.m"
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
#line 247 "inst_graph.m"
      {
#line 247 "inst_graph.m"
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
      }
#line 247 "inst_graph.m"
    }
#line 226 "inst_graph.m"
    {
#line 226 "inst_graph.m"
      MR_Word hlds__inst_graph__Seen_17;

#line 227 "inst_graph.m"
      {
#line 227 "inst_graph.m"
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_17);
      }
#line 228 "inst_graph.m"
      {
#line 228 "inst_graph.m"
        hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4, hlds__inst_graph__Seen_17, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
#line 228 "inst_graph.m"
        return;
      }
#line 226 "inst_graph.m"
    }
#line 251 "inst_graph.m"
  }
#line 251 "inst_graph.m"
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
#line 251 "inst_graph.m"
    {
#line 251 "inst_graph.m"
      MR_bool hlds__inst_graph__succeeded;

#line 252 "inst_graph.m"
      {
#line 252 "inst_graph.m"
        mercury__list__member_2_p_1((MR_Word) &hlds__inst_graph_scalar_common_1[0], &(hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7, hlds__inst_graph__Vars_5, hlds__inst_graph__reachable_from_list_3_p_0_2, &hlds__inst_graph__env);
      }
#line 251 "inst_graph.m"
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
#line 247 "inst_graph.m"
  {
#line 247 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 247 "inst_graph.m"
    *hlds__inst_graph__HeadVar__3_3 = hlds__inst_graph__Var_2;
#line 247 "inst_graph.m"
    {
#line 247 "inst_graph.m"
      hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
    }
#line 226 "inst_graph.m"
    {
#line 226 "inst_graph.m"
      MR_Word hlds__inst_graph__Seen_12;

#line 227 "inst_graph.m"
      {
#line 227 "inst_graph.m"
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_12);
      }
#line 228 "inst_graph.m"
      {
#line 228 "inst_graph.m"
        hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__HeadVar__1_1, hlds__inst_graph__Seen_12, hlds__inst_graph__Var_2, hlds__inst_graph__HeadVar__3_3, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 228 "inst_graph.m"
        return;
      }
#line 226 "inst_graph.m"
    }
#line 247 "inst_graph.m"
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
#line 226 "inst_graph.m"
  {
#line 226 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 226 "inst_graph.m"
    MR_Word hlds__inst_graph__Seen_7;

#line 227 "inst_graph.m"
    {
#line 227 "inst_graph.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_7);
    }
#line 228 "inst_graph.m"
    {
#line 228 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__InstGraph_4, hlds__inst_graph__Seen_7, hlds__inst_graph__Var_5, hlds__inst_graph__Descendant_6, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
#line 228 "inst_graph.m"
      return;
    }
#line 226 "inst_graph.m"
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
#line 216 "inst_graph.m"
  while (MR_TRUE)
#line 216 "inst_graph.m"
    {
#line 216 "inst_graph.m"
      /* tailcall optimized into a loop */
#line 216 "inst_graph.m"
      {
#line 216 "inst_graph.m"
        MR_bool hlds__inst_graph__succeeded;
#line 216 "inst_graph.m"
        MR_Word hlds__inst_graph__MaybeParent_8;
#line 216 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10;
#line 217 "inst_graph.m"
        MR_Box hlds__inst_graph__conv0_V_10_10;
#line 217 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7;

#line 217 "inst_graph.m"
        {
#line 217 "inst_graph.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_4, ((MR_Box) (hlds__inst_graph__Var_5)), &hlds__inst_graph__conv0_V_10_10);
        }
#line 217 "inst_graph.m"
        hlds__inst_graph__V_10_10 = ((MR_Word) hlds__inst_graph__conv0_V_10_10);
#line 217 "inst_graph.m"
        hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 0)));
#line 217 "inst_graph.m"
        hlds__inst_graph__MaybeParent_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 1)));
#line 221 "inst_graph.m"
        if ((hlds__inst_graph__MaybeParent_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "inst_graph.m"
          *hlds__inst_graph__TopLevel_6 = hlds__inst_graph__Var_5;
#line 221 "inst_graph.m"
        else
#line 219 "inst_graph.m"
          {
#line 219 "inst_graph.m"
            MR_Word hlds__inst_graph__Parent_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_8, (MR_Integer) 0)));

#line 220 "inst_graph.m"
            /* direct tailcall eliminated */
#line 220 "inst_graph.m"
            {
#line 220 "inst_graph.m"
              MR_Word hlds__inst_graph__Var__tmp_copy_5 = hlds__inst_graph__Parent_9;

#line 220 "inst_graph.m"
              hlds__inst_graph__Var_5 = hlds__inst_graph__Var__tmp_copy_5;
#line 220 "inst_graph.m"
            }
#line 220 "inst_graph.m"
            continue;
#line 219 "inst_graph.m"
          }
#line 216 "inst_graph.m"
      }
#line 216 "inst_graph.m"
      break;
#line 216 "inst_graph.m"
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
#line 206 "inst_graph.m"
  {
#line 206 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 206 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_20_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 206 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 206 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_8;
#line 206 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent0_9;
#line 206 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;
#line 207 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_V_13_13;

#line 207 "inst_graph.m"
    {
#line 207 "inst_graph.m"
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, ((MR_Box) (hlds__inst_graph__Child_6)), &hlds__inst_graph__conv0_V_13_13);
    }
#line 207 "inst_graph.m"
    hlds__inst_graph__V_13_13 = ((MR_Word) hlds__inst_graph__conv0_V_13_13);
#line 207 "inst_graph.m"
    hlds__inst_graph__Functors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 0)));
#line 207 "inst_graph.m"
    hlds__inst_graph__MaybeParent0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 1)));
#line 211 "inst_graph.m"
    if ((hlds__inst_graph__MaybeParent0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "inst_graph.m"
      {
#line 209 "inst_graph.m"
        MR_Word hlds__inst_graph__V_17_17;
#line 209 "inst_graph.m"
        MR_Word hlds__inst_graph__V_19_19;

#line 210 "inst_graph.m"
        {
#line 210 "inst_graph.m"
          hlds__inst_graph__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 210 "inst_graph.m"
          MR_hl_field(MR_mktag(1), hlds__inst_graph__V_19_19, 0) = ((MR_Box) (hlds__inst_graph__Parent_5));
#line 210 "inst_graph.m"
        }
#line 210 "inst_graph.m"
        {
#line 210 "inst_graph.m"
          hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (hlds__inst_graph__Functors_8));
#line 210 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__V_19_19));
#line 210 "inst_graph.m"
        }
#line 210 "inst_graph.m"
        {
#line 210 "inst_graph.m"
          mercury__map__det_update_4_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, ((MR_Box) (hlds__inst_graph__Child_6)), ((MR_Box) (hlds__inst_graph__V_17_17)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, hlds__inst_graph__STATE_VARIABLE_InstGraph_12);
#line 210 "inst_graph.m"
          return;
        }
#line 209 "inst_graph.m"
      }
#line 211 "inst_graph.m"
    else
#line 212 "inst_graph.m"
      {
#line 213 "inst_graph.m"
        {
#line 213 "inst_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.inst_graph", (MR_String) "predicate \140hlds.inst_graph.set_parent\'/4", (MR_String) "node already has parent");
#line 213 "inst_graph.m"
          return;
        }
#line 212 "inst_graph.m"
      }
#line 206 "inst_graph.m"
  }
#line 69 "inst_graph.m"
}

#line 199 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
#line 199 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 199 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 199 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 199 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 199 "inst_graph.m"
{
#line 199 "inst_graph.m"
  {
#line 199 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 199 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7;

#line 199 "inst_graph.m"
    {
#line 199 "inst_graph.m"
      hlds__inst_graph__init_var_3_p_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), &hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7);
    }
#line 199 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_3 = ((MR_Box) (hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7));
#line 199 "inst_graph.m"
  }
#line 199 "inst_graph.m"
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
#line 197 "inst_graph.m"
  {
#line 197 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 197 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_7_7 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 197 "inst_graph.m"
    MR_Word hlds__inst_graph__InstGraph0_5;
#line 199 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_InstGraph_4;

#line 198 "inst_graph.m"
    {
#line 198 "inst_graph.m"
      mercury__map__init_1_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph0_5);
    }
#line 199 "inst_graph.m"
    {
#line 199 "inst_graph.m"
      mercury__list__foldl_4_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph_scalar_common_2[0], (MR_Word) &hlds__inst_graph_scalar_common_2[2], hlds__inst_graph__Vars_3, ((MR_Box) (hlds__inst_graph__InstGraph0_5)), &hlds__inst_graph__conv1_InstGraph_4);
    }
#line 199 "inst_graph.m"
    *hlds__inst_graph__InstGraph_4 = ((MR_Word) hlds__inst_graph__conv1_InstGraph_4);
#line 197 "inst_graph.m"
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
