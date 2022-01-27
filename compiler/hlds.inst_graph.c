/*
** Automatically generated from `inst_graph.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 319 "inst_graph.m"
struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s {
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1;
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2;
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
#line 319 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7;
#line 319 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8;
#line 319 "inst_graph.m"
  MR_Cont hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont;
#line 319 "inst_graph.m"
  void * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr;
#line 323 "inst_graph.m"
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded;
#line 324 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41;
#line 324 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25;
#line 324 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27;
#line 324 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28;
#line 336 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29;
#line 336 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30;
#line 336 "inst_graph.m"
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0;
#line 336 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29;
#line 336 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30;
#line 338 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31;
#line 338 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31;
#line 342 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33;
#line 342 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37;
#line 343 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37;
#line 343 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33;
#line 348 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38;
#line 348 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39;
#line 348 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34;
#line 348 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34;
#line 348 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38;
#line 349 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39;
#line 319 "inst_graph.m"
};

#line 231 "inst_graph.m"
struct hlds__inst_graph__descendant_2_4_p_0_env_0_s {
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5;
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6;
#line 231 "inst_graph.m"
  MR_Word * hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8;
#line 231 "inst_graph.m"
  MR_Cont hlds__inst_graph__descendant_2_4_p_0_env_0__cont;
#line 231 "inst_graph.m"
  void * hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr;
#line 234 "inst_graph.m"
  MR_bool hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded;
#line 234 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16;
#line 234 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12;
#line 234 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
#line 236 "inst_graph.m"
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11;
#line 236 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11;
#line 236 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12;
#line 237 "inst_graph.m"
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13;
#line 231 "inst_graph.m"
};

#line 135 "inst_graph.m"
struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s {
#line 135 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7;
#line 135 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8;
#line 135 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11;
#line 135 "inst_graph.m"
  MR_Word * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12;
#line 135 "inst_graph.m"
  MR_Cont hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont;
#line 135 "inst_graph.m"
  void * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr;
#line 354 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24;
#line 354 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13;
#line 354 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14;
#line 354 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22;
#line 354 "inst_graph.m"
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23;
#line 355 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13;
#line 355 "inst_graph.m"
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14;
#line 135 "inst_graph.m"
};

#line 96 "inst_graph.m"
struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s {
#line 96 "inst_graph.m"
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4;
#line 96 "inst_graph.m"
  MR_Word * hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6;
#line 96 "inst_graph.m"
  MR_Cont hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont;
#line 96 "inst_graph.m"
  void * hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr;
#line 252 "inst_graph.m"
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
#line 253 "inst_graph.m"
  MR_Box hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7;
#line 96 "inst_graph.m"
};


#line 243 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 246 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 249 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

#line 252 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1;

#line 255 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 258 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 261 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct5 hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

#line 264 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 267 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 270 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

#line 273 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 276 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 279 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4];

#line 282 "hlds.inst_graph.c"
static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4];

#line 285 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0;

#line 288 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1];

#line 291 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1];

#line 294 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1];

#line 297 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1];

#line 300 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0;

#line 303 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1];

#line 306 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1;

#line 309 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1];

#line 312 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1];

#line 315 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0[2];

#line 318 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2];

#line 321 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2];

#line 324 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 327 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2];

#line 330 "hlds.inst_graph.c"
static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0;

#line 333 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1];

#line 336 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1];

#line 339 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1];

#line 342 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1];

#line 345 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
#line 348 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 350 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 353 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
#line 356 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 358 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 360 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 363 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
#line 366 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 368 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 371 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
#line 374 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 376 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 378 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 381 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
#line 384 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 386 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 389 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
#line 392 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 394 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 396 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 399 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
#line 402 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 404 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2);

#line 407 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
#line 410 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 412 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 414 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3);

#line 296 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 296 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 296 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5);

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43);

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30);

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_38,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43);

#line 298 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_45,
#line 298 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_46,
#line 298 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_47,
#line 298 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__4_48,
#line 298 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__5_49);

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30);

#line 269 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_33,
#line 269 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_34);

#line 367 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1(
#line 367 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 367 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 367 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_2);

#line 365 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__3_29,
#line 365 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__4_30);

#line 367 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(
#line 367 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 367 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 367 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__2_33);

#line 430 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
#line 430 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_5,
#line 430 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_6);

#line 423 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
#line 423 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 423 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 423 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 423 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 414 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
#line 414 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 414 "inst_graph.m"
  MR_Word hlds__inst_graph__ConsId_7,
#line 414 "inst_graph.m"
  MR_Word hlds__inst_graph__Args_8);

#line 412 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 412 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 397 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
#line 397 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 397 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 397 "inst_graph.m"
  MR_Word hlds__inst_graph__Node_8);

#line 336 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
#line 336 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 338 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
#line 338 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 338 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
#line 338 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 343 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
#line 343 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 342 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
#line 342 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 319 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_1,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_2,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenA0_3,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenB0_4,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__A_5,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__B_6,
#line 319 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__7_7,
#line 319 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__8_8,
#line 319 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 319 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr);

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6);

#line 286 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_11,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 286 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
#line 286 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
#line 286 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
#line 286 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31);

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 261 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_9,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 261 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
#line 261 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22);

#line 236 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
#line 236 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 237 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
#line 237 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 234 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
#line 234 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 234 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
#line 234 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 231 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_6,
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 231 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_8,
#line 231 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 231 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr);

#line 202 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
#line 202 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_4,
#line 202 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
#line 202 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7);

#line 395 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 395 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 365 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 365 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 355 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
#line 355 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 354 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
#line 354 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 309 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 309 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 309 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5);

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6);

#line 279 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
#line 279 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 279 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 279 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 279 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3);

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4);

#line 253 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
#line 253 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 252 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
#line 252 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg);

#line 200 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
#line 200 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 200 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 200 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 200 "inst_graph.m"
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



#line 1265 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1273 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1281 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1290 "hlds.inst_graph.c"
static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1301 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1309 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1317 "hlds.inst_graph.c"
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

#line 1330 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1339 "hlds.inst_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1347 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1356 "hlds.inst_graph.c"
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

#line 1373 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1381 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1389 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0
};

#line 1397 "hlds.inst_graph.c"
static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4] = {
  (MR_String) "interface_inst_graph",
  (MR_String) "interface_vars",
  (MR_String) "interface_varset",
  (MR_String) "implementation_inst_graph"
};

#line 1405 "hlds.inst_graph.c"
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

#line 1420 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

#line 1425 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0
  }
};

#line 1434 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

#line 1439 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1] = {
  (MR_Integer) 0
};

#line 1444 "hlds.inst_graph.c"
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

#line 1461 "hlds.inst_graph.c"
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

#line 1476 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1481 "hlds.inst_graph.c"
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

#line 1496 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

#line 1501 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1
};

#line 1506 "hlds.inst_graph.c"
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

#line 1520 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1,
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

#line 1526 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1532 "hlds.inst_graph.c"
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

#line 1549 "hlds.inst_graph.c"
static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1558 "hlds.inst_graph.c"
static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0
};

#line 1564 "hlds.inst_graph.c"
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

#line 1579 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

#line 1584 "hlds.inst_graph.c"
static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0
  }
};

#line 1593 "hlds.inst_graph.c"
static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

#line 1598 "hlds.inst_graph.c"
static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1] = {
  (MR_Integer) 0
};

#line 1603 "hlds.inst_graph.c"
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

#line 1620 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
#line 1623 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1625 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1627 "hlds.inst_graph.c"
{
#line 1629 "hlds.inst_graph.c"
  {
#line 1631 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1634 "hlds.inst_graph.c"
    {
#line 1636 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1639 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1641 "hlds.inst_graph.c"
  }
#line 1643 "hlds.inst_graph.c"
}

#line 1646 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
#line 1649 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1651 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1653 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1655 "hlds.inst_graph.c"
{
#line 1657 "hlds.inst_graph.c"
  {
#line 1659 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1662 "hlds.inst_graph.c"
    {
#line 1664 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____inst_graph_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1667 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1669 "hlds.inst_graph.c"
  }
#line 1671 "hlds.inst_graph.c"
}

#line 1674 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
#line 1677 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1679 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1681 "hlds.inst_graph.c"
{
#line 1683 "hlds.inst_graph.c"
  {
#line 1685 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1688 "hlds.inst_graph.c"
    {
#line 1690 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_info_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1693 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1695 "hlds.inst_graph.c"
  }
#line 1697 "hlds.inst_graph.c"
}

#line 1700 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
#line 1703 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1705 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1707 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1709 "hlds.inst_graph.c"
{
#line 1711 "hlds.inst_graph.c"
  {
#line 1713 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1716 "hlds.inst_graph.c"
    {
#line 1718 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____inst_graph_info_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1721 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1723 "hlds.inst_graph.c"
  }
#line 1725 "hlds.inst_graph.c"
}

#line 1728 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
#line 1731 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1733 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1735 "hlds.inst_graph.c"
{
#line 1737 "hlds.inst_graph.c"
  {
#line 1739 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1742 "hlds.inst_graph.c"
    {
#line 1744 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1747 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1749 "hlds.inst_graph.c"
  }
#line 1751 "hlds.inst_graph.c"
}

#line 1754 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
#line 1757 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1759 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1761 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1763 "hlds.inst_graph.c"
{
#line 1765 "hlds.inst_graph.c"
  {
#line 1767 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1770 "hlds.inst_graph.c"
    {
#line 1772 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____maybe_parent_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1775 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1777 "hlds.inst_graph.c"
  }
#line 1779 "hlds.inst_graph.c"
}

#line 1782 "hlds.inst_graph.c"
static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
#line 1785 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 1787 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2)
#line 1789 "hlds.inst_graph.c"
{
#line 1791 "hlds.inst_graph.c"
  {
#line 1793 "hlds.inst_graph.c"
    MR_bool hlds__inst_graph__succeeded;

#line 1796 "hlds.inst_graph.c"
    {
#line 1798 "hlds.inst_graph.c"
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____node_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 1801 "hlds.inst_graph.c"
    return hlds__inst_graph__succeeded;
#line 1803 "hlds.inst_graph.c"
  }
#line 1805 "hlds.inst_graph.c"
}

#line 1808 "hlds.inst_graph.c"
static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
#line 1811 "hlds.inst_graph.c"
  MR_Box * hlds__inst_graph__wrapper_arg_1,
#line 1813 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 1815 "hlds.inst_graph.c"
  MR_Box hlds__inst_graph__wrapper_arg_3)
#line 1817 "hlds.inst_graph.c"
{
#line 1819 "hlds.inst_graph.c"
  {
#line 1821 "hlds.inst_graph.c"
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

#line 1824 "hlds.inst_graph.c"
    {
#line 1826 "hlds.inst_graph.c"
      hlds__inst_graph____Compare____node_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
#line 1829 "hlds.inst_graph.c"
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
#line 1831 "hlds.inst_graph.c"
  }
#line 1833 "hlds.inst_graph.c"
}

#line 296 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 296 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 296 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 296 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5)
#line 296 "inst_graph.m"
{
#line 296 "inst_graph.m"
  {
#line 296 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 296 "inst_graph.m"
    {
#line 296 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
    }
#line 296 "inst_graph.m"
  }
#line 296 "inst_graph.m"
}

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43)
#line 294 "inst_graph.m"
{
#line 294 "inst_graph.m"
  {
#line 294 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 294 "inst_graph.m"
    MR_Word hlds__inst_graph__V_44_44;

#line 296 "inst_graph.m"
    {
#line 296 "inst_graph.m"
      hlds__inst_graph__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_13[0]));
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1));
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 5) = ((MR_Box) (hlds__inst_graph__P_9));
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
#line 296 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
#line 296 "inst_graph.m"
    }
#line 296 "inst_graph.m"
    {
#line 296 "inst_graph.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_44_44, hlds__inst_graph__LambdaHeadVar__2_39, hlds__inst_graph__LambdaHeadVar__3_40, hlds__inst_graph__LambdaHeadVar__4_41, hlds__inst_graph__LambdaHeadVar__5_42, hlds__inst_graph__LambdaHeadVar__6_43);
    }
#line 294 "inst_graph.m"
  }
#line 294 "inst_graph.m"
}

#line 268 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 268 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 268 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 268 "inst_graph.m"
{
#line 268 "inst_graph.m"
  {
#line 268 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
    }
#line 268 "inst_graph.m"
  }
#line 268 "inst_graph.m"
}

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30)
#line 267 "inst_graph.m"
{
#line 267 "inst_graph.m"
  {
#line 267 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 267 "inst_graph.m"
    MR_Word hlds__inst_graph__V_31_31;

#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      hlds__inst_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_12[0]));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 4) = ((MR_Box) (hlds__inst_graph__P_7));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
#line 268 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
#line 268 "inst_graph.m"
    }
#line 268 "inst_graph.m"
    {
#line 268 "inst_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_31_31, hlds__inst_graph__LambdaHeadVar__2_28, hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
    }
#line 267 "inst_graph.m"
  }
#line 267 "inst_graph.m"
}

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_38,
#line 294 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43)
#line 294 "inst_graph.m"
{
#line 294 "inst_graph.m"
  {
#line 294 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__Seen_12, hlds__inst_graph__LambdaHeadVar__2_39, hlds__inst_graph__LambdaHeadVar__3_40, hlds__inst_graph__LambdaHeadVar__4_41, hlds__inst_graph__LambdaHeadVar__5_42, hlds__inst_graph__LambdaHeadVar__6_43);
    }
#line 294 "inst_graph.m"
  }
#line 294 "inst_graph.m"
}

#line 298 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 298 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_45,
#line 298 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_46,
#line 298 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_47,
#line 298 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__4_48,
#line 298 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__5_49)
#line 298 "inst_graph.m"
{
#line 298 "inst_graph.m"
  {
#line 298 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 298 "inst_graph.m"
    {
#line 298 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_45)), hlds__inst_graph__Seen_12);
    }
#line 298 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 299 "inst_graph.m"
      {
#line 299 "inst_graph.m"
        *hlds__inst_graph__LambdaHeadVar__3_47 = hlds__inst_graph__LambdaHeadVar__2_46;
#line 300 "inst_graph.m"
        *hlds__inst_graph__LambdaHeadVar__5_49 = hlds__inst_graph__LambdaHeadVar__4_48;
#line 299 "inst_graph.m"
      }
#line 298 "inst_graph.m"
    else
#line 302 "inst_graph.m"
      {
#line 302 "inst_graph.m"
        MR_Word hlds__inst_graph__V_50_50;

#line 302 "inst_graph.m"
        {
#line 302 "inst_graph.m"
          hlds__inst_graph__V_50_50 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_12, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_45)));
        }
#line 302 "inst_graph.m"
        {
#line 302 "inst_graph.m"
          hlds__inst_graph__foldl_reachable_aux2_8_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__LambdaHeadVar__1_45, hlds__inst_graph__V_50_50, hlds__inst_graph__LambdaHeadVar__2_46, hlds__inst_graph__LambdaHeadVar__3_47, hlds__inst_graph__LambdaHeadVar__4_48, hlds__inst_graph__LambdaHeadVar__5_49);
        }
#line 302 "inst_graph.m"
      }
#line 298 "inst_graph.m"
  }
#line 298 "inst_graph.m"
}

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 267 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30)
#line 267 "inst_graph.m"
{
#line 267 "inst_graph.m"
  {
#line 267 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__Seen_10, hlds__inst_graph__LambdaHeadVar__2_28, hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
    }
#line 267 "inst_graph.m"
  }
#line 267 "inst_graph.m"
}

#line 269 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 269 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 269 "inst_graph.m"
  MR_Box hlds__inst_graph__LambdaHeadVar__2_33,
#line 269 "inst_graph.m"
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_34)
#line 269 "inst_graph.m"
{
#line 269 "inst_graph.m"
  {
#line 269 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 269 "inst_graph.m"
    {
#line 269 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_32)), hlds__inst_graph__Seen_10);
    }
#line 269 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 270 "inst_graph.m"
      *hlds__inst_graph__LambdaHeadVar__3_34 = hlds__inst_graph__LambdaHeadVar__2_33;
#line 269 "inst_graph.m"
    else
#line 272 "inst_graph.m"
      {
#line 272 "inst_graph.m"
        MR_Word hlds__inst_graph__V_35_35;

#line 272 "inst_graph.m"
        {
#line 272 "inst_graph.m"
          hlds__inst_graph__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_10, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_32)));
        }
#line 272 "inst_graph.m"
        {
#line 272 "inst_graph.m"
          hlds__inst_graph__foldl_reachable_aux_6_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__LambdaHeadVar__1_32, hlds__inst_graph__V_35_35, hlds__inst_graph__LambdaHeadVar__2_33, hlds__inst_graph__LambdaHeadVar__3_34);
        }
#line 272 "inst_graph.m"
      }
#line 269 "inst_graph.m"
  }
#line 269 "inst_graph.m"
}

#line 367 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1(
#line 367 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 367 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 367 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_2)
#line 367 "inst_graph.m"
{
#line 367 "inst_graph.m"
  {
#line 367 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 367 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_LambdaHeadVar__2_33;

#line 367 "inst_graph.m"
    {
#line 367 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), &hlds__inst_graph__conv0_LambdaHeadVar__2_33);
    }
#line 367 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_2 = ((MR_Box) (hlds__inst_graph__conv0_LambdaHeadVar__2_33));
#line 367 "inst_graph.m"
  }
#line 367 "inst_graph.m"
}

#line 365 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
#line 365 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__3_29,
#line 365 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__4_30)
#line 365 "inst_graph.m"
{
#line 365 "inst_graph.m"
  {
#line 365 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_42_42;
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_44_44;
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__LambdaHeadVar__2_28, (MR_Integer) 0)));
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__LambdaHeadVar__2_28, (MR_Integer) 1)));
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_23;
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__Node_24;
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__Var_25;
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__V_31_31;
#line 372 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_Var_25;

#line 367 "inst_graph.m"
    {
#line 367 "inst_graph.m"
      hlds__inst_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 367 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_3[1]));
#line 367 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 1) = ((MR_Box) (hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1));
#line 367 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 367 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 3) = ((MR_Box) (hlds__inst_graph__Renaming_14));
#line 367 "inst_graph.m"
    }
#line 2302 "hlds.inst_graph.c"
    hlds__inst_graph__TypeInfo_42_42 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
#line 367 "inst_graph.m"
    {
#line 367 "inst_graph.m"
      mercury__map__map_values_only_3_p_0(hlds__inst_graph__TypeInfo_42_42, hlds__inst_graph__TypeInfo_42_42, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__inst_graph__V_31_31, hlds__inst_graph__Functors0_19, &hlds__inst_graph__Functors_23);
    }
#line 371 "inst_graph.m"
    {
#line 371 "inst_graph.m"
      hlds__inst_graph__Node_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_24, 0) = ((MR_Box) (hlds__inst_graph__Functors_23));
#line 371 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_24, 1) = ((MR_Box) (hlds__inst_graph__MaybeParent_20));
#line 371 "inst_graph.m"
    }
#line 2319 "hlds.inst_graph.c"
    hlds__inst_graph__TypeInfo_44_44 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 372 "inst_graph.m"
    {
#line 372 "inst_graph.m"
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__Renaming_14, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_27)), &hlds__inst_graph__conv1_Var_25);
    }
#line 372 "inst_graph.m"
    hlds__inst_graph__Var_25 = ((MR_Word) hlds__inst_graph__conv1_Var_25);
#line 373 "inst_graph.m"
    {
#line 373 "inst_graph.m"
      mercury__map__det_insert_4_p_0(hlds__inst_graph__TypeInfo_44_44, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_25)), ((MR_Box) (hlds__inst_graph__Node_24)), hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
    }
#line 365 "inst_graph.m"
  }
#line 365 "inst_graph.m"
}

#line 367 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(
#line 367 "inst_graph.m"
  MR_Word hlds__inst_graph__Renaming_14,
#line 367 "inst_graph.m"
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
#line 367 "inst_graph.m"
  MR_Word * hlds__inst_graph__LambdaHeadVar__2_33)
#line 367 "inst_graph.m"
{
#line 367 "inst_graph.m"
  {
#line 367 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 367 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_41_41 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

#line 369 "inst_graph.m"
    {
#line 369 "inst_graph.m"
      mercury__map__apply_to_list_3_p_0(hlds__inst_graph__TypeInfo_41_41, hlds__inst_graph__TypeInfo_41_41, hlds__inst_graph__LambdaHeadVar__1_32, hlds__inst_graph__Renaming_14, hlds__inst_graph__LambdaHeadVar__2_33);
    }
#line 367 "inst_graph.m"
  }
#line 367 "inst_graph.m"
}

#line 32 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____node_0_0(
#line 32 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 32 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 32 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 32 "inst_graph.m"
{
#line 32 "inst_graph.m"
  {
#line 32 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 32 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_9 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
#line 32 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_10 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

#line 32 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_9 == hlds__inst_graph__CastY_10);
#line 32 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 2390 "hlds.inst_graph.c"
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "inst_graph.m"
    else
#line 32 "inst_graph.m"
      {
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8;

#line 32 "inst_graph.m"
        {
#line 32 "inst_graph.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[1], &hlds__inst_graph__V_8_8, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_6_6)));
        }
#line 2412 "hlds.inst_graph.c"
        hlds__inst_graph__succeeded = (hlds__inst_graph__V_8_8 == (MR_Integer) 0);
#line 32 "inst_graph.m"
        hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 32 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 32 "inst_graph.m"
          *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_8_8;
#line 32 "inst_graph.m"
        else
#line 32 "inst_graph.m"
          {
#line 32 "inst_graph.m"
            hlds__inst_graph____Compare____maybe_parent_0_0(hlds__inst_graph__HeadVar__1_1, hlds__inst_graph__V_5_5, hlds__inst_graph__V_7_7);
          }
#line 32 "inst_graph.m"
      }
#line 32 "inst_graph.m"
  }
#line 32 "inst_graph.m"
}

#line 32 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0(
#line 32 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 32 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 32 "inst_graph.m"
{
#line 32 "inst_graph.m"
  {
#line 32 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 32 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_7 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 32 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 32 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_7 == hlds__inst_graph__CastY_8);
#line 32 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 32 "inst_graph.m"
      hlds__inst_graph__succeeded = MR_TRUE;
#line 32 "inst_graph.m"
    else
#line 32 "inst_graph.m"
      {
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));

#line 2471 "hlds.inst_graph.c"
        {
#line 2473 "hlds.inst_graph.c"
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[1], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_5_5)));
        }
#line 32 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 2478 "hlds.inst_graph.c"
          {
#line 2480 "hlds.inst_graph.c"
            hlds__inst_graph__succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(hlds__inst_graph__V_4_4, hlds__inst_graph__V_6_6);
          }
#line 32 "inst_graph.m"
      }
#line 32 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 32 "inst_graph.m"
  }
#line 32 "inst_graph.m"
}

#line 47 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0(
#line 47 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 47 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 47 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 47 "inst_graph.m"
{
#line 47 "inst_graph.m"
  {
#line 47 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 47 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
#line 47 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_9 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

#line 47 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_8 == hlds__inst_graph__CastY_9);
#line 47 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 2516 "hlds.inst_graph.c"
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "inst_graph.m"
    else
#line 47 "inst_graph.m"
    if ((hlds__inst_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "inst_graph.m"
      if ((hlds__inst_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "inst_graph.m"
        *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "inst_graph.m"
      else
#line 2528 "hlds.inst_graph.c"
        *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "inst_graph.m"
    else
#line 47 "inst_graph.m"
      {
#line 47 "inst_graph.m"
        MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));

#line 47 "inst_graph.m"
        if ((hlds__inst_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2539 "hlds.inst_graph.c"
          *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "inst_graph.m"
        else
#line 47 "inst_graph.m"
          {
#line 47 "inst_graph.m"
            MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));

#line 47 "inst_graph.m"
            {
#line 47 "inst_graph.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__V_11_11)), ((MR_Box) (hlds__inst_graph__V_7_7)));
            }
#line 47 "inst_graph.m"
          }
#line 47 "inst_graph.m"
      }
#line 47 "inst_graph.m"
  }
#line 47 "inst_graph.m"
}

#line 47 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0(
#line 47 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 47 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 47 "inst_graph.m"
{
#line 47 "inst_graph.m"
  {
#line 47 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 47 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_7 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 47 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 47 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_7 == hlds__inst_graph__CastY_8);
#line 47 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 47 "inst_graph.m"
      hlds__inst_graph__succeeded = MR_TRUE;
#line 47 "inst_graph.m"
    else
#line 47 "inst_graph.m"
    if ((hlds__inst_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "inst_graph.m"
      {
#line 47 "inst_graph.m"
        MR_Integer hlds__inst_graph__CastX_3 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 47 "inst_graph.m"
        MR_Integer hlds__inst_graph__CastY_4 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 47 "inst_graph.m"
        hlds__inst_graph__succeeded = (hlds__inst_graph__CastY_4 == hlds__inst_graph__CastX_3);
#line 47 "inst_graph.m"
      }
#line 47 "inst_graph.m"
    else
#line 47 "inst_graph.m"
      {
#line 47 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_9_9;
#line 47 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6;

#line 47 "inst_graph.m"
        hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 47 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 47 "inst_graph.m"
          {
#line 47 "inst_graph.m"
            hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 2620 "hlds.inst_graph.c"
            hlds__inst_graph__TypeInfo_9_9 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 2622 "hlds.inst_graph.c"
            {
#line 2624 "hlds.inst_graph.c"
              hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_9_9, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_6_6)));
            }
#line 47 "inst_graph.m"
          }
#line 47 "inst_graph.m"
      }
#line 47 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 47 "inst_graph.m"
  }
#line 47 "inst_graph.m"
}

#line 437 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0(
#line 437 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 437 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 437 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 437 "inst_graph.m"
{
#line 437 "inst_graph.m"
  {
#line 437 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 437 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_15 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
#line 437 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_16 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

#line 437 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_15 == hlds__inst_graph__CastY_16);
#line 437 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 2662 "hlds.inst_graph.c"
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 437 "inst_graph.m"
    else
#line 437 "inst_graph.m"
      {
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 2)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 3)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_12_12;

#line 437 "inst_graph.m"
        {
#line 437 "inst_graph.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], &hlds__inst_graph__V_12_12, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
        }
#line 2692 "hlds.inst_graph.c"
        hlds__inst_graph__succeeded = (hlds__inst_graph__V_12_12 == (MR_Integer) 0);
#line 437 "inst_graph.m"
        hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 437 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 437 "inst_graph.m"
          *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_12_12;
#line 437 "inst_graph.m"
        else
#line 437 "inst_graph.m"
          {
#line 437 "inst_graph.m"
            MR_Word hlds__inst_graph__V_13_13;

#line 437 "inst_graph.m"
            {
#line 437 "inst_graph.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[1], &hlds__inst_graph__V_13_13, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
            }
#line 2712 "hlds.inst_graph.c"
            hlds__inst_graph__succeeded = (hlds__inst_graph__V_13_13 == (MR_Integer) 0);
#line 437 "inst_graph.m"
            hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 437 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 437 "inst_graph.m"
              *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_13_13;
#line 437 "inst_graph.m"
            else
#line 437 "inst_graph.m"
              {
#line 437 "inst_graph.m"
                MR_Word hlds__inst_graph__V_14_14;

#line 437 "inst_graph.m"
                {
#line 437 "inst_graph.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[2], &hlds__inst_graph__V_14_14, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                }
#line 2732 "hlds.inst_graph.c"
                hlds__inst_graph__succeeded = (hlds__inst_graph__V_14_14 == (MR_Integer) 0);
#line 437 "inst_graph.m"
                hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
#line 437 "inst_graph.m"
                if (hlds__inst_graph__succeeded)
#line 437 "inst_graph.m"
                  *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_14_14;
#line 437 "inst_graph.m"
                else
#line 437 "inst_graph.m"
                  {
#line 437 "inst_graph.m"
                    {
#line 437 "inst_graph.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__V_7_7)), ((MR_Box) (hlds__inst_graph__V_11_11)));
                    }
#line 437 "inst_graph.m"
                  }
#line 437 "inst_graph.m"
              }
#line 437 "inst_graph.m"
          }
#line 437 "inst_graph.m"
      }
#line 437 "inst_graph.m"
  }
#line 437 "inst_graph.m"
}

#line 437 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0(
#line 437 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 437 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 437 "inst_graph.m"
{
#line 437 "inst_graph.m"
  {
#line 437 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 437 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastX_11 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
#line 437 "inst_graph.m"
    MR_Integer hlds__inst_graph__CastY_12 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

#line 437 "inst_graph.m"
    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_11 == hlds__inst_graph__CastY_12);
#line 437 "inst_graph.m"
    if (hlds__inst_graph__succeeded)
#line 437 "inst_graph.m"
      hlds__inst_graph__succeeded = MR_TRUE;
#line 437 "inst_graph.m"
    else
#line 437 "inst_graph.m"
      {
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_14_14;
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_15_15;
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__TypeInfo_16_16;
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 437 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));

#line 2813 "hlds.inst_graph.c"
        {
#line 2815 "hlds.inst_graph.c"
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_7_7)));
        }
#line 437 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 437 "inst_graph.m"
          {
#line 2822 "hlds.inst_graph.c"
            hlds__inst_graph__TypeInfo_14_14 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
#line 2824 "hlds.inst_graph.c"
            {
#line 2826 "hlds.inst_graph.c"
              hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_14_14, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
            }
#line 437 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 437 "inst_graph.m"
              {
#line 2833 "hlds.inst_graph.c"
                hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[2];
#line 2835 "hlds.inst_graph.c"
                {
#line 2837 "hlds.inst_graph.c"
                  hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_15_15, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
                }
#line 437 "inst_graph.m"
                if (hlds__inst_graph__succeeded)
#line 437 "inst_graph.m"
                  {
#line 2844 "hlds.inst_graph.c"
                    hlds__inst_graph__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_2[0];
#line 2846 "hlds.inst_graph.c"
                    {
#line 2848 "hlds.inst_graph.c"
                      hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_16_16, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                    }
#line 437 "inst_graph.m"
                  }
#line 437 "inst_graph.m"
              }
#line 437 "inst_graph.m"
          }
#line 437 "inst_graph.m"
      }
#line 437 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 437 "inst_graph.m"
  }
#line 437 "inst_graph.m"
}

#line 30 "inst_graph.m"
void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0(
#line 30 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__1_1,
#line 30 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2,
#line 30 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__3_3)
#line 30 "inst_graph.m"
{
#line 30 "inst_graph.m"
  {
#line 30 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 30 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar1_4 = hlds__inst_graph__HeadVar__2_2;
#line 30 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar2_5 = hlds__inst_graph__HeadVar__3_3;

#line 30 "inst_graph.m"
    {
#line 30 "inst_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__Cast_HeadVar1_4)), ((MR_Box) (hlds__inst_graph__Cast_HeadVar2_5)));
    }
#line 30 "inst_graph.m"
  }
#line 30 "inst_graph.m"
}

#line 30 "inst_graph.m"
MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0(
#line 30 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 30 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__2_2)
#line 30 "inst_graph.m"
{
#line 30 "inst_graph.m"
  {
#line 30 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 30 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar1_3 = hlds__inst_graph__HeadVar__1_1;
#line 30 "inst_graph.m"
    MR_Word hlds__inst_graph__Cast_HeadVar2_4 = hlds__inst_graph__HeadVar__2_2;

#line 30 "inst_graph.m"
    {
#line 30 "inst_graph.m"
      hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], ((MR_Box) (hlds__inst_graph__Cast_HeadVar1_3)), ((MR_Box) (hlds__inst_graph__Cast_HeadVar2_4)));
    }
#line 30 "inst_graph.m"
    return hlds__inst_graph__succeeded;
#line 30 "inst_graph.m"
  }
#line 30 "inst_graph.m"
}

#line 430 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
#line 430 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_5,
#line 430 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_6)
#line 430 "inst_graph.m"
{
#line 433 "inst_graph.m"
  {
#line 433 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 433 "inst_graph.m"
    {
#line 433 "inst_graph.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__Var_6, hlds__inst_graph__VarSet_5);
    }
#line 433 "inst_graph.m"
  }
#line 430 "inst_graph.m"
}

#line 423 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
#line 423 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 423 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 423 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 423 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 423 "inst_graph.m"
{
#line 423 "inst_graph.m"
  {
#line 423 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 423 "inst_graph.m"
    {
#line 423 "inst_graph.m"
      hlds__inst_graph__dump_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1));
    }
#line 423 "inst_graph.m"
  }
#line 423 "inst_graph.m"
}

#line 414 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
#line 414 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 414 "inst_graph.m"
  MR_Word hlds__inst_graph__ConsId_7,
#line 414 "inst_graph.m"
  MR_Word hlds__inst_graph__Args_8)
#line 414 "inst_graph.m"
{
#line 417 "inst_graph.m"
  {
#line 417 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 417 "inst_graph.m"
    MR_String hlds__inst_graph__V_16_16;

#line 418 "inst_graph.m"
    {
#line 418 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "%%\t");
    }
#line 419 "inst_graph.m"
    {
#line 419 "inst_graph.m"
      hlds__inst_graph__V_16_16 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__inst_graph__ConsId_7);
    }
#line 419 "inst_graph.m"
    {
#line 419 "inst_graph.m"
      mercury__io__write_string_3_p_0(hlds__inst_graph__V_16_16);
    }
#line 425 "inst_graph.m"
    if ((hlds__inst_graph__Args_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "inst_graph.m"
      {
#line 426 "inst_graph.m"
      }
#line 425 "inst_graph.m"
    else
#line 421 "inst_graph.m"
      {
#line 421 "inst_graph.m"
        MR_Word hlds__inst_graph__V_21_21;

#line 422 "inst_graph.m"
        {
#line 422 "inst_graph.m"
          mercury__io__write_char_3_p_0((MR_Char) 40);
        }
#line 423 "inst_graph.m"
        {
#line 423 "inst_graph.m"
          hlds__inst_graph__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 423 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_11[0]));
#line 423 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 1) = ((MR_Box) (hlds__inst_graph__dump_functor_5_p_0_1));
#line 423 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 423 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 423 "inst_graph.m"
        }
#line 423 "inst_graph.m"
        {
#line 423 "inst_graph.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Args_8, (MR_String) ", ", hlds__inst_graph__V_21_21);
        }
#line 424 "inst_graph.m"
        {
#line 424 "inst_graph.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
#line 421 "inst_graph.m"
      }
#line 428 "inst_graph.m"
    {
#line 428 "inst_graph.m"
      mercury__io__nl_2_p_0();
    }
#line 417 "inst_graph.m"
  }
#line 414 "inst_graph.m"
}

#line 412 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 412 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 412 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 412 "inst_graph.m"
{
#line 412 "inst_graph.m"
  {
#line 412 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 412 "inst_graph.m"
    {
#line 412 "inst_graph.m"
      hlds__inst_graph__dump_functor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 412 "inst_graph.m"
  }
#line 412 "inst_graph.m"
}

#line 397 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
#line 397 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet_6,
#line 397 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 397 "inst_graph.m"
  MR_Word hlds__inst_graph__Node_8)
#line 397 "inst_graph.m"
{
#line 400 "inst_graph.m"
  {
#line 400 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 400 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeCtorInfo_24_24;
#line 400 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 0)));
#line 400 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 1)));
#line 400 "inst_graph.m"
    MR_Word hlds__inst_graph__V_22_22;
#line 412 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_14;

#line 402 "inst_graph.m"
    {
#line 402 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "%% ");
    }
#line 3126 "hlds.inst_graph.c"
    hlds__inst_graph__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 403 "inst_graph.m"
    {
#line 403 "inst_graph.m"
      mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Var_7, hlds__inst_graph__VarSet_6);
    }
#line 404 "inst_graph.m"
    {
#line 404 "inst_graph.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 408 "inst_graph.m"
    if ((hlds__inst_graph__MaybeParent_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "inst_graph.m"
      {
#line 409 "inst_graph.m"
      }
#line 408 "inst_graph.m"
    else
#line 406 "inst_graph.m"
      {
#line 406 "inst_graph.m"
        MR_Word hlds__inst_graph__Parent_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_11, (MR_Integer) 0)));

#line 407 "inst_graph.m"
        {
#line 407 "inst_graph.m"
          mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Parent_12, hlds__inst_graph__VarSet_6);
        }
#line 406 "inst_graph.m"
      }
#line 411 "inst_graph.m"
    {
#line 411 "inst_graph.m"
      mercury__io__nl_2_p_0();
    }
#line 412 "inst_graph.m"
    {
#line 412 "inst_graph.m"
      hlds__inst_graph__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 412 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[2]));
#line 412 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 1) = ((MR_Box) (hlds__inst_graph__dump_node_5_p_0_1));
#line 412 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 412 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 412 "inst_graph.m"
    }
#line 412 "inst_graph.m"
    {
#line 412 "inst_graph.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_22_22, hlds__inst_graph__Functors_10, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_14);
    }
#line 400 "inst_graph.m"
  }
#line 397 "inst_graph.m"
}

#line 336 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
#line 336 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 336 "inst_graph.m"
{
#line 336 "inst_graph.m"
  {
#line 336 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 336 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29);
#line 336 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30);
#line 336 "inst_graph.m"
    {
#line 336 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_1(hlds__inst_graph__env_ptr);
    }
#line 336 "inst_graph.m"
  }
#line 336 "inst_graph.m"
}

#line 338 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
#line 338 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 338 "inst_graph.m"
{
#line 338 "inst_graph.m"
  {
#line 338 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 338 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31);
#line 338 "inst_graph.m"
    {
#line 338 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_3(hlds__inst_graph__env_ptr);
    }
#line 338 "inst_graph.m"
  }
#line 338 "inst_graph.m"
}

#line 338 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
#line 338 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 338 "inst_graph.m"
{
#line 338 "inst_graph.m"
  {
#line 338 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 339 "inst_graph.m"
    {
#line 339 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
#line 338 "inst_graph.m"
  }
#line 338 "inst_graph.m"
}

#line 343 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
#line 343 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 343 "inst_graph.m"
{
#line 343 "inst_graph.m"
  {
#line 343 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 343 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37);
#line 343 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33);
#line 343 "inst_graph.m"
    {
#line 343 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_5(hlds__inst_graph__env_ptr);
    }
#line 343 "inst_graph.m"
  }
#line 343 "inst_graph.m"
}

#line 342 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
#line 342 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 342 "inst_graph.m"
{
#line 342 "inst_graph.m"
  {
#line 342 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 344 "inst_graph.m"
    {
#line 344 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
#line 342 "inst_graph.m"
  }
#line 342 "inst_graph.m"
}

#line 337 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
#line 337 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 337 "inst_graph.m"
{
#line 337 "inst_graph.m"
  {
#line 337 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 337 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_TRUE;
#line 337 "inst_graph.m"
    {
#line 337 "inst_graph.m"
      {
#line 337 "inst_graph.m"
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25);
      }
#line 337 "inst_graph.m"
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 338 "inst_graph.m"
        {
#line 338 "inst_graph.m"
          {
#line 338 "inst_graph.m"
            mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_4, hlds__inst_graph__env_ptr);
          }
#line 338 "inst_graph.m"
        }
#line 337 "inst_graph.m"
      else
#line 342 "inst_graph.m"
        {
#line 342 "inst_graph.m"
          MR_Word hlds__inst_graph__ArgsB_32;
#line 342 "inst_graph.m"
          MR_Box hlds__inst_graph__conv5_ArgsB_32;

#line 342 "inst_graph.m"
          {
#line 342 "inst_graph.m"
            (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29)), &hlds__inst_graph__conv5_ArgsB_32);
          }
#line 342 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 342 "inst_graph.m"
            {
#line 342 "inst_graph.m"
              hlds__inst_graph__ArgsB_32 = ((MR_Word) hlds__inst_graph__conv5_ArgsB_32);
#line 342 "inst_graph.m"
              (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 342 "inst_graph.m"
            }
#line 342 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 343 "inst_graph.m"
            {
#line 343 "inst_graph.m"
              hlds__inst_graph__corresponding_members_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__ArgsB_32, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33, hlds__inst_graph__corresponding_nodes_2_8_p_0_6, hlds__inst_graph__env_ptr);
            }
#line 342 "inst_graph.m"
        }
#line 337 "inst_graph.m"
    }
#line 337 "inst_graph.m"
  }
#line 337 "inst_graph.m"
}

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 348 "inst_graph.m"
{
#line 348 "inst_graph.m"
  {
#line 348 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 348 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34);
#line 348 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38);
#line 348 "inst_graph.m"
    {
#line 348 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_7(hlds__inst_graph__env_ptr);
    }
#line 348 "inst_graph.m"
  }
#line 348 "inst_graph.m"
}

#line 349 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
#line 349 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 349 "inst_graph.m"
{
#line 349 "inst_graph.m"
  {
#line 349 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 349 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39);
#line 349 "inst_graph.m"
    {
#line 349 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0_9(hlds__inst_graph__env_ptr);
    }
#line 349 "inst_graph.m"
  }
#line 349 "inst_graph.m"
}

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 348 "inst_graph.m"
{
#line 348 "inst_graph.m"
  {
#line 348 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 350 "inst_graph.m"
    {
#line 350 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
#line 348 "inst_graph.m"
  }
#line 348 "inst_graph.m"
}

#line 348 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
#line 348 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 348 "inst_graph.m"
{
#line 348 "inst_graph.m"
  {
#line 348 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 349 "inst_graph.m"
    {
#line 349 "inst_graph.m"
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_10, hlds__inst_graph__env_ptr);
    }
#line 348 "inst_graph.m"
  }
#line 348 "inst_graph.m"
}

#line 319 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_1,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_2,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenA0_3,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__SeenB0_4,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__A_5,
#line 319 "inst_graph.m"
  MR_Word hlds__inst_graph__B_6,
#line 319 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__7_7,
#line 319 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__8_8,
#line 319 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 319 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 319 "inst_graph.m"
{
#line 319 "inst_graph.m"
  {
#line 319 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s hlds__inst_graph__env;

#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1 = hlds__inst_graph__InstGraphA_1;
#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2 = hlds__inst_graph__InstGraphB_2;
#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5 = hlds__inst_graph__A_5;
#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6 = hlds__inst_graph__B_6;
#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7 = hlds__inst_graph__HeadVar__7_7;
#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8 = hlds__inst_graph__HeadVar__8_8;
#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont = hlds__inst_graph__cont;
#line 319 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 323 "inst_graph.m"
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
#line 323 "inst_graph.m"
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
#line 323 "inst_graph.m"
    {
#line 323 "inst_graph.m"
      ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont)((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
#line 324 "inst_graph.m"
    {
#line 324 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeCtorInfo_42_42;
#line 324 "inst_graph.m"
      MR_Word hlds__inst_graph__FunctorsA_23;
#line 324 "inst_graph.m"
      MR_Word hlds__inst_graph__V_35_35;
#line 324 "inst_graph.m"
      MR_Word hlds__inst_graph__V_36_36;
#line 326 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_40_40 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 330 "inst_graph.m"
      MR_Box hlds__inst_graph__conv0_V_35_35;
#line 330 "inst_graph.m"
      MR_Word hlds__inst_graph__V_24_24;
#line 331 "inst_graph.m"
      MR_Box hlds__inst_graph__conv1_V_36_36;
#line 331 "inst_graph.m"
      MR_Word hlds__inst_graph__V_26_26;
#line 336 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeCtorInfo_43_43;
#line 336 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_44_44;

#line 326 "inst_graph.m"
      {
#line 326 "inst_graph.m"
        (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), hlds__inst_graph__SeenA0_3);
      }
#line 326 "inst_graph.m"
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 327 "inst_graph.m"
        {
#line 327 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), hlds__inst_graph__SeenB0_4);
        }
#line 325 "inst_graph.m"
      (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = !((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded);
#line 324 "inst_graph.m"
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
#line 324 "inst_graph.m"
        {
#line 3571 "hlds.inst_graph.c"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 3573 "hlds.inst_graph.c"
          hlds__inst_graph__TypeCtorInfo_42_42 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 330 "inst_graph.m"
          {
#line 330 "inst_graph.m"
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), &hlds__inst_graph__conv0_V_35_35);
          }
#line 330 "inst_graph.m"
          hlds__inst_graph__V_35_35 = ((MR_Word) hlds__inst_graph__conv0_V_35_35);
#line 330 "inst_graph.m"
          hlds__inst_graph__FunctorsA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 0)));
#line 330 "inst_graph.m"
          hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 1)));
#line 331 "inst_graph.m"
          {
#line 331 "inst_graph.m"
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), &hlds__inst_graph__conv1_V_36_36);
          }
#line 331 "inst_graph.m"
          hlds__inst_graph__V_36_36 = ((MR_Word) hlds__inst_graph__conv1_V_36_36);
#line 331 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 0)));
#line 331 "inst_graph.m"
          hlds__inst_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 1)));
#line 333 "inst_graph.m"
          {
#line 333 "inst_graph.m"
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenA0_3, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)));
          }
#line 334 "inst_graph.m"
          {
#line 334 "inst_graph.m"
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenB0_4, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)));
          }
#line 336 "inst_graph.m"
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_FALSE;
#line 3609 "hlds.inst_graph.c"
          hlds__inst_graph__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 3611 "hlds.inst_graph.c"
          hlds__inst_graph__TypeInfo_44_44 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
#line 336 "inst_graph.m"
          {
#line 336 "inst_graph.m"
            mercury__map__member_3_p_0(hlds__inst_graph__TypeCtorInfo_43_43, hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__FunctorsA_23, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_2, &hlds__inst_graph__env);
          }
#line 336 "inst_graph.m"
          if (!((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0))
#line 348 "inst_graph.m"
            {
#line 348 "inst_graph.m"
              {
#line 348 "inst_graph.m"
                mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_8, &hlds__inst_graph__env);
              }
#line 348 "inst_graph.m"
            }
#line 324 "inst_graph.m"
        }
#line 324 "inst_graph.m"
    }
#line 319 "inst_graph.m"
  }
#line 319 "inst_graph.m"
}

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6)
#line 294 "inst_graph.m"
{
#line 294 "inst_graph.m"
  {
#line 294 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
    }
#line 294 "inst_graph.m"
  }
#line 294 "inst_graph.m"
}

#line 286 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__P_9,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_10,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_11,
#line 286 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_12,
#line 286 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
#line 286 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
#line 286 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
#line 286 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31)
#line 286 "inst_graph.m"
{
#line 291 "inst_graph.m"
  {
#line 291 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 291 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_15;
#line 291 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_32;
#line 291 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_33;
#line 291 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;
#line 291 "inst_graph.m"
    MR_Word hlds__inst_graph__V_35_35;
#line 292 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_9, (MR_Integer) 1)));
#line 293 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_34_34;
#line 293 "inst_graph.m"
    MR_Word hlds__inst_graph__V_16_16;

#line 292 "inst_graph.m"
    {
#line 292 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_9), ((MR_Box) (hlds__inst_graph__Var_11)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_28, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc2_0_30, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_33);
    }
#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_10, ((MR_Box) (hlds__inst_graph__Var_11)), &hlds__inst_graph__conv1_V_34_34);
    }
#line 293 "inst_graph.m"
    hlds__inst_graph__V_34_34 = ((MR_Word) hlds__inst_graph__conv1_V_34_34);
#line 293 "inst_graph.m"
    hlds__inst_graph__Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 0)));
#line 293 "inst_graph.m"
    hlds__inst_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 1)));
#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      hlds__inst_graph__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux2_8_p_0_1));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 5) = ((MR_Box) (hlds__inst_graph__P_9));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
#line 294 "inst_graph.m"
    }
#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_35_35, hlds__inst_graph__Functors_15, hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc1_29, hlds__inst_graph__STATE_VARIABLE_Acc2_33_33, hlds__inst_graph__STATE_VARIABLE_Acc2_31);
    }
#line 291 "inst_graph.m"
  }
#line 286 "inst_graph.m"
}

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 267 "inst_graph.m"
{
#line 267 "inst_graph.m"
  {
#line 267 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
    }
#line 267 "inst_graph.m"
  }
#line 267 "inst_graph.m"
}

#line 261 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__P_7,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_8,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_9,
#line 261 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_10,
#line 261 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
#line 261 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22)
#line 261 "inst_graph.m"
{
#line 264 "inst_graph.m"
  {
#line 264 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 264 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_12;
#line 264 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_23;
#line 264 "inst_graph.m"
    MR_Word hlds__inst_graph__V_24_24;
#line 264 "inst_graph.m"
    MR_Word hlds__inst_graph__V_25_25;
#line 265 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_7, (MR_Integer) 1)));
#line 266 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_24_24;
#line 266 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;

#line 265 "inst_graph.m"
    {
#line 265 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_7), ((MR_Box) (hlds__inst_graph__Var_9)), hlds__inst_graph__STATE_VARIABLE_Acc_0_21, &hlds__inst_graph__STATE_VARIABLE_Acc_23_23);
    }
#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_8, ((MR_Box) (hlds__inst_graph__Var_9)), &hlds__inst_graph__conv1_V_24_24);
    }
#line 266 "inst_graph.m"
    hlds__inst_graph__V_24_24 = ((MR_Word) hlds__inst_graph__conv1_V_24_24);
#line 266 "inst_graph.m"
    hlds__inst_graph__Functors_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 0)));
#line 266 "inst_graph.m"
    hlds__inst_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 1)));
#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      hlds__inst_graph__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux_6_p_0_1));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 4) = ((MR_Box) (hlds__inst_graph__P_7));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
#line 267 "inst_graph.m"
    }
#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_25_25, hlds__inst_graph__Functors_12, hlds__inst_graph__STATE_VARIABLE_Acc_23_23, hlds__inst_graph__STATE_VARIABLE_Acc_22);
    }
#line 264 "inst_graph.m"
  }
#line 261 "inst_graph.m"
}

#line 236 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
#line 236 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 236 "inst_graph.m"
{
#line 236 "inst_graph.m"
  {
#line 236 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 236 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11);
#line 236 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12);
#line 236 "inst_graph.m"
    {
#line 236 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0_1(hlds__inst_graph__env_ptr);
    }
#line 236 "inst_graph.m"
  }
#line 236 "inst_graph.m"
}

#line 237 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
#line 237 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 237 "inst_graph.m"
{
#line 237 "inst_graph.m"
  {
#line 237 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 237 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13);
#line 237 "inst_graph.m"
    {
#line 237 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0_3(hlds__inst_graph__env_ptr);
    }
#line 237 "inst_graph.m"
  }
#line 237 "inst_graph.m"
}

#line 234 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
#line 234 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 234 "inst_graph.m"
{
#line 234 "inst_graph.m"
  {
#line 234 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 239 "inst_graph.m"
    {
#line 239 "inst_graph.m"
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
#line 239 "inst_graph.m"
      {
#line 239 "inst_graph.m"
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
      }
#line 239 "inst_graph.m"
    }
#line 241 "inst_graph.m"
    {
#line 241 "inst_graph.m"
      {
#line 241 "inst_graph.m"
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)), (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6);
      }
#line 241 "inst_graph.m"
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
#line 242 "inst_graph.m"
        {
#line 242 "inst_graph.m"
          (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 242 "inst_graph.m"
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
#line 242 "inst_graph.m"
            {
#line 242 "inst_graph.m"
              ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
            }
#line 242 "inst_graph.m"
        }
#line 241 "inst_graph.m"
      else
#line 244 "inst_graph.m"
        {
#line 244 "inst_graph.m"
          MR_Word hlds__inst_graph__V_15_15;

#line 244 "inst_graph.m"
          {
#line 244 "inst_graph.m"
            hlds__inst_graph__V_15_15 = mercury__set__insert_2_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)));
          }
#line 244 "inst_graph.m"
          {
#line 244 "inst_graph.m"
            hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, hlds__inst_graph__V_15_15, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
          }
#line 244 "inst_graph.m"
        }
#line 241 "inst_graph.m"
    }
#line 234 "inst_graph.m"
  }
#line 234 "inst_graph.m"
}

#line 234 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
#line 234 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 234 "inst_graph.m"
{
#line 234 "inst_graph.m"
  {
#line 234 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 237 "inst_graph.m"
    {
#line 237 "inst_graph.m"
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12, hlds__inst_graph__descendant_2_4_p_0_4, hlds__inst_graph__env_ptr);
    }
#line 234 "inst_graph.m"
  }
#line 234 "inst_graph.m"
}

#line 231 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_5,
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__Seen_6,
#line 231 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_7,
#line 231 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_8,
#line 231 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 231 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 231 "inst_graph.m"
{
#line 231 "inst_graph.m"
  {
#line 231 "inst_graph.m"
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s hlds__inst_graph__env;

#line 231 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5 = hlds__inst_graph__InstGraph_5;
#line 231 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6 = hlds__inst_graph__Seen_6;
#line 231 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8 = hlds__inst_graph__Descendant_8;
#line 231 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont = hlds__inst_graph__cont;
#line 231 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 234 "inst_graph.m"
    {
#line 234 "inst_graph.m"
      MR_Word hlds__inst_graph__Functors_9;
#line 234 "inst_graph.m"
      MR_Word hlds__inst_graph__V_14_14;
#line 235 "inst_graph.m"
      MR_Box hlds__inst_graph__conv0_V_14_14;
#line 235 "inst_graph.m"
      MR_Word hlds__inst_graph__V_10_10;

#line 4066 "hlds.inst_graph.c"
      (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 235 "inst_graph.m"
      {
#line 235 "inst_graph.m"
        mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, ((MR_Box) (hlds__inst_graph__Var_7)), &hlds__inst_graph__conv0_V_14_14);
      }
#line 235 "inst_graph.m"
      hlds__inst_graph__V_14_14 = ((MR_Word) hlds__inst_graph__conv0_V_14_14);
#line 235 "inst_graph.m"
      hlds__inst_graph__Functors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 0)));
#line 235 "inst_graph.m"
      hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 1)));
#line 236 "inst_graph.m"
      {
#line 236 "inst_graph.m"
        mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__Functors_9, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12, hlds__inst_graph__descendant_2_4_p_0_2, &hlds__inst_graph__env);
      }
#line 234 "inst_graph.m"
    }
#line 231 "inst_graph.m"
  }
#line 231 "inst_graph.m"
}

#line 202 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
#line 202 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_4,
#line 202 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
#line 202 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7)
#line 202 "inst_graph.m"
{
#line 204 "inst_graph.m"
  {
#line 204 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 204 "inst_graph.m"
    MR_Word hlds__inst_graph__V_8_8;
#line 204 "inst_graph.m"
    MR_Word hlds__inst_graph__V_10_10;

#line 205 "inst_graph.m"
    {
#line 205 "inst_graph.m"
      hlds__inst_graph__V_10_10 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1]);
    }
#line 205 "inst_graph.m"
    {
#line 205 "inst_graph.m"
      hlds__inst_graph__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 0) = ((MR_Box) (hlds__inst_graph__V_10_10));
#line 205 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "inst_graph.m"
    }
#line 205 "inst_graph.m"
    {
#line 205 "inst_graph.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_4)), ((MR_Box) (hlds__inst_graph__V_8_8)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6, hlds__inst_graph__STATE_VARIABLE_InstGraph_7);
    }
#line 204 "inst_graph.m"
  }
#line 202 "inst_graph.m"
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
#line 456 "inst_graph.m"
  {
#line 456 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 456 "inst_graph.m"
    MR_Word hlds__inst_graph__HeadVar__1_1;
#line 456 "inst_graph.m"
    MR_Word hlds__inst_graph__InstGraph_2;
#line 456 "inst_graph.m"
    MR_Word hlds__inst_graph__VarSet_3;

#line 457 "inst_graph.m"
    {
#line 457 "inst_graph.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__inst_graph__VarSet_3);
    }
#line 458 "inst_graph.m"
    {
#line 458 "inst_graph.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph_2);
    }
#line 456 "inst_graph.m"
    {
#line 456 "inst_graph.m"
      hlds__inst_graph__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 456 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 0) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
#line 456 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 2) = ((MR_Box) (hlds__inst_graph__VarSet_3));
#line 456 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 3) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
#line 456 "inst_graph.m"
    }
#line 456 "inst_graph.m"
    return hlds__inst_graph__HeadVar__1_1;
#line 456 "inst_graph.m"
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
#line 358 "inst_graph.m"
  while (MR_TRUE)
#line 358 "inst_graph.m"
    {
#line 358 "inst_graph.m"
      /* tailcall optimized into a loop */
#line 358 "inst_graph.m"
      {
#line 358 "inst_graph.m"
        MR_bool hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 358 "inst_graph.m"
        MR_Word hlds__inst_graph__V_17_17;
#line 358 "inst_graph.m"
        MR_Box hlds__inst_graph__V_18_18;
#line 358 "inst_graph.m"
        MR_Word hlds__inst_graph__V_19_19;
#line 358 "inst_graph.m"
        MR_Box hlds__inst_graph__V_20_20;

#line 358 "inst_graph.m"
        if (hlds__inst_graph__succeeded)
#line 358 "inst_graph.m"
          {
#line 358 "inst_graph.m"
            hlds__inst_graph__V_18_18 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0));
#line 358 "inst_graph.m"
            hlds__inst_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 358 "inst_graph.m"
            hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 358 "inst_graph.m"
            if (hlds__inst_graph__succeeded)
#line 358 "inst_graph.m"
              {
#line 358 "inst_graph.m"
                hlds__inst_graph__V_20_20 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0));
#line 358 "inst_graph.m"
                hlds__inst_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "inst_graph.m"
                *hlds__inst_graph__A_3 = hlds__inst_graph__V_18_18;
#line 358 "inst_graph.m"
                *hlds__inst_graph__B_4 = hlds__inst_graph__V_20_20;
#line 358 "inst_graph.m"
                {
#line 358 "inst_graph.m"
                  hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
                }
#line 360 "inst_graph.m"
                {
#line 360 "inst_graph.m"
                  /* direct tailcall eliminated */
#line 360 "inst_graph.m"
                  {
#line 360 "inst_graph.m"
                    MR_Word hlds__inst_graph__HeadVar__1__tmp_copy_1 = hlds__inst_graph__V_17_17;
#line 360 "inst_graph.m"
                    MR_Word hlds__inst_graph__HeadVar__2__tmp_copy_2 = hlds__inst_graph__V_19_19;

#line 360 "inst_graph.m"
                    hlds__inst_graph__HeadVar__2_2 = hlds__inst_graph__HeadVar__2__tmp_copy_2;
#line 360 "inst_graph.m"
                    hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__HeadVar__1__tmp_copy_1;
#line 360 "inst_graph.m"
                  }
#line 360 "inst_graph.m"
                  continue;
#line 360 "inst_graph.m"
                }
#line 358 "inst_graph.m"
              }
#line 358 "inst_graph.m"
          }
#line 358 "inst_graph.m"
      }
#line 358 "inst_graph.m"
      break;
#line 358 "inst_graph.m"
    }
#line 158 "inst_graph.m"
}

#line 395 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 395 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 395 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 395 "inst_graph.m"
{
#line 395 "inst_graph.m"
  {
#line 395 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 395 "inst_graph.m"
    {
#line 395 "inst_graph.m"
      hlds__inst_graph__dump_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
#line 395 "inst_graph.m"
  }
#line 395 "inst_graph.m"
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
#line 394 "inst_graph.m"
  {
#line 394 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 394 "inst_graph.m"
    MR_Word hlds__inst_graph__V_10_10;
#line 395 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_9;

#line 395 "inst_graph.m"
    {
#line 395 "inst_graph.m"
      hlds__inst_graph__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 395 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[1]));
#line 395 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 1) = ((MR_Box) (hlds__inst_graph__dump_4_p_0_1));
#line 395 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 395 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
#line 395 "inst_graph.m"
    }
#line 395 "inst_graph.m"
    {
#line 395 "inst_graph.m"
      mercury__map__foldl_4_p_2((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_10_10, hlds__inst_graph__InstGraph_5, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_9);
    }
#line 394 "inst_graph.m"
  }
#line 154 "inst_graph.m"
}

#line 365 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 365 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 365 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 365 "inst_graph.m"
{
#line 365 "inst_graph.m"
  {
#line 365 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 365 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_LambdaHeadVar__4_30;

#line 365 "inst_graph.m"
    {
#line 365 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3), &hlds__inst_graph__conv0_LambdaHeadVar__4_30);
    }
#line 365 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_4 = ((MR_Box) (hlds__inst_graph__conv0_LambdaHeadVar__4_30));
#line 365 "inst_graph.m"
  }
#line 365 "inst_graph.m"
}

#line 142 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__merge_7_p_0(
#line 142 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph0_8,
#line 142 "inst_graph.m"
  MR_Word hlds__inst_graph__VarSet0_9,
#line 142 "inst_graph.m"
  MR_Word hlds__inst_graph__NewInstGraph_10,
#line 142 "inst_graph.m"
  MR_Word hlds__inst_graph__NewVarSet_11,
#line 142 "inst_graph.m"
  MR_Word * hlds__inst_graph__InstGraph_12,
#line 142 "inst_graph.m"
  MR_Word * hlds__inst_graph__VarSet_13,
#line 142 "inst_graph.m"
  MR_Word * hlds__inst_graph__Renaming_14)
#line 142 "inst_graph.m"
{
#line 363 "inst_graph.m"
  {
#line 363 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 363 "inst_graph.m"
    MR_Word hlds__inst_graph__V_26_26;
#line 365 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_InstGraph_12;

#line 364 "inst_graph.m"
    {
#line 364 "inst_graph.m"
      mercury__varset__merge_renaming_without_names_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__VarSet0_9, hlds__inst_graph__NewVarSet_11, hlds__inst_graph__VarSet_13, hlds__inst_graph__Renaming_14);
    }
#line 365 "inst_graph.m"
    {
#line 365 "inst_graph.m"
      hlds__inst_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 365 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[0]));
#line 365 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 1) = ((MR_Box) (hlds__inst_graph__merge_7_p_0_1));
#line 365 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 365 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 3) = ((MR_Box) (*hlds__inst_graph__Renaming_14));
#line 365 "inst_graph.m"
    }
#line 365 "inst_graph.m"
    {
#line 365 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__V_26_26, hlds__inst_graph__NewInstGraph_10, ((MR_Box) (hlds__inst_graph__InstGraph0_8)), &hlds__inst_graph__conv1_InstGraph_12);
    }
#line 365 "inst_graph.m"
    *hlds__inst_graph__InstGraph_12 = ((MR_Word) hlds__inst_graph__conv1_InstGraph_12);
#line 363 "inst_graph.m"
  }
#line 142 "inst_graph.m"
}

#line 355 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
#line 355 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 355 "inst_graph.m"
{
#line 355 "inst_graph.m"
  {
#line 355 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 355 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13);
#line 355 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14);
#line 355 "inst_graph.m"
    {
#line 355 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(hlds__inst_graph__env_ptr);
    }
#line 355 "inst_graph.m"
  }
#line 355 "inst_graph.m"
}

#line 354 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
#line 354 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 354 "inst_graph.m"
{
#line 354 "inst_graph.m"
  {
#line 354 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 4775 "hlds.inst_graph.c"
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
#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr);
    }
#line 354 "inst_graph.m"
  }
#line 354 "inst_graph.m"
}

#line 135 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(
#line 135 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_7,
#line 135 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_8,
#line 135 "inst_graph.m"
  MR_Word hlds__inst_graph__VarsA_9,
#line 135 "inst_graph.m"
  MR_Word hlds__inst_graph__VarsB_10,
#line 135 "inst_graph.m"
  MR_Word * hlds__inst_graph__V_11,
#line 135 "inst_graph.m"
  MR_Word * hlds__inst_graph__W_12,
#line 135 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 135 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 135 "inst_graph.m"
{
#line 135 "inst_graph.m"
  {
#line 135 "inst_graph.m"
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s hlds__inst_graph__env;

#line 135 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7 = hlds__inst_graph__InstGraphA_7;
#line 135 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8 = hlds__inst_graph__InstGraphB_8;
#line 135 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11 = hlds__inst_graph__V_11;
#line 135 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12 = hlds__inst_graph__W_12;
#line 135 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont = hlds__inst_graph__cont;
#line 135 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 354 "inst_graph.m"
    {
#line 354 "inst_graph.m"
      MR_bool hlds__inst_graph__succeeded;
#line 354 "inst_graph.m"
      MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

#line 355 "inst_graph.m"
      {
#line 355 "inst_graph.m"
        hlds__inst_graph__corresponding_members_4_p_0(hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__VarsA_9, hlds__inst_graph__VarsB_10, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14, hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2, &hlds__inst_graph__env);
      }
#line 354 "inst_graph.m"
    }
#line 135 "inst_graph.m"
  }
#line 135 "inst_graph.m"
}

#line 132 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__two_graphs_corresponding_nodes_6_p_0(
#line 132 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphA_7,
#line 132 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraphB_8,
#line 132 "inst_graph.m"
  MR_Word hlds__inst_graph__A_9,
#line 132 "inst_graph.m"
  MR_Word hlds__inst_graph__B_10,
#line 132 "inst_graph.m"
  MR_Word * hlds__inst_graph__V_11,
#line 132 "inst_graph.m"
  MR_Word * hlds__inst_graph__W_12,
#line 132 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 132 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 132 "inst_graph.m"
{
#line 315 "inst_graph.m"
  {
#line 315 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 315 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 315 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;
#line 315 "inst_graph.m"
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
#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraphA_7, hlds__inst_graph__InstGraphB_8, hlds__inst_graph__V_13_13, hlds__inst_graph__V_14_14, hlds__inst_graph__A_9, hlds__inst_graph__B_10, hlds__inst_graph__V_11, hlds__inst_graph__W_12, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
    }
#line 315 "inst_graph.m"
  }
#line 132 "inst_graph.m"
}

#line 129 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(
#line 129 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_6,
#line 129 "inst_graph.m"
  MR_Word hlds__inst_graph__A_7,
#line 129 "inst_graph.m"
  MR_Word hlds__inst_graph__B_8,
#line 129 "inst_graph.m"
  MR_Word * hlds__inst_graph__V_9,
#line 129 "inst_graph.m"
  MR_Word * hlds__inst_graph__W_10,
#line 129 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 129 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 129 "inst_graph.m"
{
#line 315 "inst_graph.m"
  {
#line 315 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 315 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_15_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 315 "inst_graph.m"
    MR_Word hlds__inst_graph__V_18_18;
#line 315 "inst_graph.m"
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
#line 316 "inst_graph.m"
    {
#line 316 "inst_graph.m"
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraph_6, hlds__inst_graph__InstGraph_6, hlds__inst_graph__V_18_18, hlds__inst_graph__V_19_19, hlds__inst_graph__A_7, hlds__inst_graph__B_8, hlds__inst_graph__V_9, hlds__inst_graph__W_10, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
    }
#line 315 "inst_graph.m"
  }
#line 129 "inst_graph.m"
}

#line 309 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 309 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3,
#line 309 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_4,
#line 309 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_5)
#line 309 "inst_graph.m"
{
#line 309 "inst_graph.m"
  {
#line 309 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 309 "inst_graph.m"
    {
#line 309 "inst_graph.m"
      hlds__inst_graph__foldl_reachable2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
    }
#line 309 "inst_graph.m"
  }
#line 309 "inst_graph.m"
}

#line 124 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0(
#line 124 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_20,
#line 124 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_21,
#line 124 "inst_graph.m"
  MR_Word hlds__inst_graph__P_8,
#line 124 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_9,
#line 124 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_10,
#line 124 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_13,
#line 124 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_14,
#line 124 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_15,
#line 124 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_16)
#line 124 "inst_graph.m"
{
#line 308 "inst_graph.m"
  {
#line 308 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 308 "inst_graph.m"
    MR_Word hlds__inst_graph__V_17_17;

#line 309 "inst_graph.m"
    {
#line 309 "inst_graph.m"
      hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 309 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_9[0]));
#line 309 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1));
#line 309 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 309 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
#line 309 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
#line 309 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 5) = ((MR_Box) (hlds__inst_graph__P_8));
#line 309 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
#line 309 "inst_graph.m"
    }
#line 309 "inst_graph.m"
    {
#line 309 "inst_graph.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_17_17, hlds__inst_graph__Vars_10, hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
    }
#line 308 "inst_graph.m"
  }
#line 124 "inst_graph.m"
}

#line 294 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4,
#line 294 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_5,
#line 294 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_6)
#line 294 "inst_graph.m"
{
#line 294 "inst_graph.m"
  {
#line 294 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
    }
#line 294 "inst_graph.m"
  }
#line 294 "inst_graph.m"
}

#line 118 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0(
#line 118 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_20,
#line 118 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_U_21,
#line 118 "inst_graph.m"
  MR_Word hlds__inst_graph__P_8,
#line 118 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_9,
#line 118 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_10,
#line 118 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_13,
#line 118 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_14,
#line 118 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_15,
#line 118 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_16)
#line 118 "inst_graph.m"
{
#line 281 "inst_graph.m"
  {
#line 281 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 281 "inst_graph.m"
    MR_Word hlds__inst_graph__V_17_17;
#line 281 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_33;
#line 281 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_46;
#line 281 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_47;
#line 281 "inst_graph.m"
    MR_Word hlds__inst_graph__V_48_48;
#line 281 "inst_graph.m"
    MR_Word hlds__inst_graph__V_49_49;
#line 292 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 293 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_48_48;
#line 293 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;

#line 284 "inst_graph.m"
    {
#line 284 "inst_graph.m"
      hlds__inst_graph__V_17_17 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
#line 292 "inst_graph.m"
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_8, (MR_Integer) 1)));
#line 292 "inst_graph.m"
    {
#line 292 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_8), ((MR_Box) (hlds__inst_graph__Var_10)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_47);
    }
#line 293 "inst_graph.m"
    {
#line 293 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_9, ((MR_Box) (hlds__inst_graph__Var_10)), &hlds__inst_graph__conv1_V_48_48);
    }
#line 293 "inst_graph.m"
    hlds__inst_graph__V_48_48 = ((MR_Word) hlds__inst_graph__conv1_V_48_48);
#line 293 "inst_graph.m"
    hlds__inst_graph__Functors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 0)));
#line 293 "inst_graph.m"
    hlds__inst_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 1)));
#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      hlds__inst_graph__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable2_7_p_0_1));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 5) = ((MR_Box) (hlds__inst_graph__P_8));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
#line 294 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 7) = ((MR_Box) (hlds__inst_graph__V_17_17));
#line 294 "inst_graph.m"
    }
#line 294 "inst_graph.m"
    {
#line 294 "inst_graph.m"
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_49_49, hlds__inst_graph__Functors_33, hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_33_47, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
    }
#line 281 "inst_graph.m"
  }
#line 118 "inst_graph.m"
}

#line 279 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
#line 279 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 279 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 279 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 279 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 279 "inst_graph.m"
{
#line 279 "inst_graph.m"
  {
#line 279 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 279 "inst_graph.m"
    {
#line 279 "inst_graph.m"
      hlds__inst_graph__foldl_reachable_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
    }
#line 279 "inst_graph.m"
  }
#line 279 "inst_graph.m"
}

#line 112 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0(
#line 112 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_14,
#line 112 "inst_graph.m"
  MR_Word hlds__inst_graph__P_6,
#line 112 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_7,
#line 112 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_8,
#line 112 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_10,
#line 112 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_11)
#line 112 "inst_graph.m"
{
#line 278 "inst_graph.m"
  {
#line 278 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 278 "inst_graph.m"
    MR_Word hlds__inst_graph__V_12_12;

#line 279 "inst_graph.m"
    {
#line 279 "inst_graph.m"
      hlds__inst_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 279 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_6[0]));
#line 279 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list_5_p_0_1));
#line 279 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 279 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
#line 279 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 4) = ((MR_Box) (hlds__inst_graph__P_6));
#line 279 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
#line 279 "inst_graph.m"
    }
#line 279 "inst_graph.m"
    {
#line 279 "inst_graph.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_12_12, hlds__inst_graph__Vars_8, hlds__inst_graph__STATE_VARIABLE_Acc_0_10, hlds__inst_graph__STATE_VARIABLE_Acc_11);
    }
#line 278 "inst_graph.m"
  }
#line 112 "inst_graph.m"
}

#line 267 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 267 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_3,
#line 267 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_4)
#line 267 "inst_graph.m"
{
#line 267 "inst_graph.m"
  {
#line 267 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
    }
#line 267 "inst_graph.m"
  }
#line 267 "inst_graph.m"
}

#line 104 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0(
#line 104 "inst_graph.m"
  MR_Word hlds__inst_graph__TypeInfo_for_T_14,
#line 104 "inst_graph.m"
  MR_Word hlds__inst_graph__P_6,
#line 104 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_7,
#line 104 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_8,
#line 104 "inst_graph.m"
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_10,
#line 104 "inst_graph.m"
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_11)
#line 104 "inst_graph.m"
{
#line 256 "inst_graph.m"
  {
#line 256 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 256 "inst_graph.m"
    MR_Word hlds__inst_graph__V_12_12;
#line 256 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_23;
#line 256 "inst_graph.m"
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_32;
#line 256 "inst_graph.m"
    MR_Word hlds__inst_graph__V_33_33;
#line 256 "inst_graph.m"
    MR_Word hlds__inst_graph__V_34_34;
#line 265 "inst_graph.m"
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 266 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_V_33_33;
#line 266 "inst_graph.m"
    MR_Word hlds__inst_graph__V_24_24;

#line 259 "inst_graph.m"
    {
#line 259 "inst_graph.m"
      hlds__inst_graph__V_12_12 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
#line 265 "inst_graph.m"
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_6, (MR_Integer) 1)));
#line 265 "inst_graph.m"
    {
#line 265 "inst_graph.m"
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_6), ((MR_Box) (hlds__inst_graph__Var_8)), hlds__inst_graph__STATE_VARIABLE_Acc_0_10, &hlds__inst_graph__STATE_VARIABLE_Acc_23_32);
    }
#line 266 "inst_graph.m"
    {
#line 266 "inst_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_7, ((MR_Box) (hlds__inst_graph__Var_8)), &hlds__inst_graph__conv1_V_33_33);
    }
#line 266 "inst_graph.m"
    hlds__inst_graph__V_33_33 = ((MR_Word) hlds__inst_graph__conv1_V_33_33);
#line 266 "inst_graph.m"
    hlds__inst_graph__Functors_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 0)));
#line 266 "inst_graph.m"
    hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 1)));
#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      hlds__inst_graph__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_5_p_0_1));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 4) = ((MR_Box) (hlds__inst_graph__P_6));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
#line 267 "inst_graph.m"
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 6) = ((MR_Box) (hlds__inst_graph__V_12_12));
#line 267 "inst_graph.m"
    }
#line 267 "inst_graph.m"
    {
#line 267 "inst_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_34_34, hlds__inst_graph__Functors_23, hlds__inst_graph__STATE_VARIABLE_Acc_23_32, hlds__inst_graph__STATE_VARIABLE_Acc_11);
    }
#line 256 "inst_graph.m"
  }
#line 104 "inst_graph.m"
}

#line 253 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
#line 253 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 253 "inst_graph.m"
{
#line 253 "inst_graph.m"
  {
#line 253 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 253 "inst_graph.m"
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7);
#line 253 "inst_graph.m"
    {
#line 253 "inst_graph.m"
      hlds__inst_graph__reachable_from_list_3_p_0_1(hlds__inst_graph__env_ptr);
    }
#line 253 "inst_graph.m"
  }
#line 253 "inst_graph.m"
}

#line 252 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
#line 252 "inst_graph.m"
  void * hlds__inst_graph__env_ptr_arg)
#line 252 "inst_graph.m"
{
#line 252 "inst_graph.m"
  {
#line 252 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

#line 248 "inst_graph.m"
    {
#line 248 "inst_graph.m"
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
#line 248 "inst_graph.m"
      {
#line 248 "inst_graph.m"
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
      }
#line 248 "inst_graph.m"
    }
#line 227 "inst_graph.m"
    {
#line 227 "inst_graph.m"
      MR_Word hlds__inst_graph__Seen_17;

#line 228 "inst_graph.m"
      {
#line 228 "inst_graph.m"
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_17);
      }
#line 229 "inst_graph.m"
      {
#line 229 "inst_graph.m"
        hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4, hlds__inst_graph__Seen_17, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
      }
#line 227 "inst_graph.m"
    }
#line 252 "inst_graph.m"
  }
#line 252 "inst_graph.m"
}

#line 96 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0(
#line 96 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_4,
#line 96 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_5,
#line 96 "inst_graph.m"
  MR_Word * hlds__inst_graph__Reachable_6,
#line 96 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 96 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 96 "inst_graph.m"
{
#line 96 "inst_graph.m"
  {
#line 96 "inst_graph.m"
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s hlds__inst_graph__env;

#line 96 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4 = hlds__inst_graph__InstGraph_4;
#line 96 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6 = hlds__inst_graph__Reachable_6;
#line 96 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont = hlds__inst_graph__cont;
#line 96 "inst_graph.m"
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
#line 252 "inst_graph.m"
    {
#line 252 "inst_graph.m"
      MR_bool hlds__inst_graph__succeeded;

#line 253 "inst_graph.m"
      {
#line 253 "inst_graph.m"
        mercury__list__member_2_p_1((MR_Word) &hlds__inst_graph_scalar_common_1[0], &(hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7, hlds__inst_graph__Vars_5, hlds__inst_graph__reachable_from_list_3_p_0_2, &hlds__inst_graph__env);
      }
#line 252 "inst_graph.m"
    }
#line 96 "inst_graph.m"
  }
#line 96 "inst_graph.m"
}

#line 90 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__reachable_3_p_0(
#line 90 "inst_graph.m"
  MR_Word hlds__inst_graph__HeadVar__1_1,
#line 90 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_2,
#line 90 "inst_graph.m"
  MR_Word * hlds__inst_graph__HeadVar__3_3,
#line 90 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 90 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 90 "inst_graph.m"
{
#line 248 "inst_graph.m"
  {
#line 248 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;

#line 248 "inst_graph.m"
    *hlds__inst_graph__HeadVar__3_3 = hlds__inst_graph__Var_2;
#line 248 "inst_graph.m"
    {
#line 248 "inst_graph.m"
      hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
    }
#line 227 "inst_graph.m"
    {
#line 227 "inst_graph.m"
      MR_Word hlds__inst_graph__Seen_12;

#line 228 "inst_graph.m"
      {
#line 228 "inst_graph.m"
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_12);
      }
#line 229 "inst_graph.m"
      {
#line 229 "inst_graph.m"
        hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__HeadVar__1_1, hlds__inst_graph__Seen_12, hlds__inst_graph__Var_2, hlds__inst_graph__HeadVar__3_3, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
      }
#line 227 "inst_graph.m"
    }
#line 248 "inst_graph.m"
  }
#line 90 "inst_graph.m"
}

#line 83 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__descendant_3_p_0(
#line 83 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_4,
#line 83 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_5,
#line 83 "inst_graph.m"
  MR_Word * hlds__inst_graph__Descendant_6,
#line 83 "inst_graph.m"
  MR_Cont hlds__inst_graph__cont,
#line 83 "inst_graph.m"
  void * hlds__inst_graph__cont_env_ptr)
#line 83 "inst_graph.m"
{
#line 227 "inst_graph.m"
  {
#line 227 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 227 "inst_graph.m"
    MR_Word hlds__inst_graph__Seen_7;

#line 228 "inst_graph.m"
    {
#line 228 "inst_graph.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_7);
    }
#line 229 "inst_graph.m"
    {
#line 229 "inst_graph.m"
      hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__InstGraph_4, hlds__inst_graph__Seen_7, hlds__inst_graph__Var_5, hlds__inst_graph__Descendant_6, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
    }
#line 227 "inst_graph.m"
  }
#line 83 "inst_graph.m"
}

#line 77 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__top_level_node_3_p_0(
#line 77 "inst_graph.m"
  MR_Word hlds__inst_graph__InstGraph_4,
#line 77 "inst_graph.m"
  MR_Word hlds__inst_graph__Var_5,
#line 77 "inst_graph.m"
  MR_Word * hlds__inst_graph__TopLevel_6)
#line 77 "inst_graph.m"
{
#line 217 "inst_graph.m"
  while (MR_TRUE)
#line 217 "inst_graph.m"
    {
#line 217 "inst_graph.m"
      /* tailcall optimized into a loop */
#line 217 "inst_graph.m"
      {
#line 217 "inst_graph.m"
        MR_bool hlds__inst_graph__succeeded;
#line 217 "inst_graph.m"
        MR_Word hlds__inst_graph__MaybeParent_8;
#line 217 "inst_graph.m"
        MR_Word hlds__inst_graph__V_10_10;
#line 218 "inst_graph.m"
        MR_Box hlds__inst_graph__conv0_V_10_10;
#line 218 "inst_graph.m"
        MR_Word hlds__inst_graph__V_7_7;

#line 218 "inst_graph.m"
        {
#line 218 "inst_graph.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_4, ((MR_Box) (hlds__inst_graph__Var_5)), &hlds__inst_graph__conv0_V_10_10);
        }
#line 218 "inst_graph.m"
        hlds__inst_graph__V_10_10 = ((MR_Word) hlds__inst_graph__conv0_V_10_10);
#line 218 "inst_graph.m"
        hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 0)));
#line 218 "inst_graph.m"
        hlds__inst_graph__MaybeParent_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 1)));
#line 222 "inst_graph.m"
        if ((hlds__inst_graph__MaybeParent_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "inst_graph.m"
          *hlds__inst_graph__TopLevel_6 = hlds__inst_graph__Var_5;
#line 222 "inst_graph.m"
        else
#line 220 "inst_graph.m"
          {
#line 220 "inst_graph.m"
            MR_Word hlds__inst_graph__Parent_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_8, (MR_Integer) 0)));

#line 221 "inst_graph.m"
            /* direct tailcall eliminated */
#line 221 "inst_graph.m"
            {
#line 221 "inst_graph.m"
              MR_Word hlds__inst_graph__Var__tmp_copy_5 = hlds__inst_graph__Parent_9;

#line 221 "inst_graph.m"
              hlds__inst_graph__Var_5 = hlds__inst_graph__Var__tmp_copy_5;
#line 221 "inst_graph.m"
            }
#line 221 "inst_graph.m"
            continue;
#line 220 "inst_graph.m"
          }
#line 217 "inst_graph.m"
      }
#line 217 "inst_graph.m"
      break;
#line 217 "inst_graph.m"
    }
#line 77 "inst_graph.m"
}

#line 70 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__set_parent_4_p_0(
#line 70 "inst_graph.m"
  MR_Word hlds__inst_graph__Parent_5,
#line 70 "inst_graph.m"
  MR_Word hlds__inst_graph__Child_6,
#line 70 "inst_graph.m"
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11,
#line 70 "inst_graph.m"
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_12)
#line 70 "inst_graph.m"
{
#line 207 "inst_graph.m"
  {
#line 207 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 207 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_20_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 207 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 207 "inst_graph.m"
    MR_Word hlds__inst_graph__Functors_8;
#line 207 "inst_graph.m"
    MR_Word hlds__inst_graph__MaybeParent0_9;
#line 207 "inst_graph.m"
    MR_Word hlds__inst_graph__V_13_13;
#line 208 "inst_graph.m"
    MR_Box hlds__inst_graph__conv0_V_13_13;

#line 208 "inst_graph.m"
    {
#line 208 "inst_graph.m"
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, ((MR_Box) (hlds__inst_graph__Child_6)), &hlds__inst_graph__conv0_V_13_13);
    }
#line 208 "inst_graph.m"
    hlds__inst_graph__V_13_13 = ((MR_Word) hlds__inst_graph__conv0_V_13_13);
#line 208 "inst_graph.m"
    hlds__inst_graph__Functors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 0)));
#line 208 "inst_graph.m"
    hlds__inst_graph__MaybeParent0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 1)));
#line 212 "inst_graph.m"
    if ((hlds__inst_graph__MaybeParent0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "inst_graph.m"
      {
#line 210 "inst_graph.m"
        MR_Word hlds__inst_graph__V_17_17;
#line 210 "inst_graph.m"
        MR_Word hlds__inst_graph__V_19_19;

#line 211 "inst_graph.m"
        {
#line 211 "inst_graph.m"
          hlds__inst_graph__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "inst_graph.m"
          MR_hl_field(MR_mktag(1), hlds__inst_graph__V_19_19, 0) = ((MR_Box) (hlds__inst_graph__Parent_5));
#line 211 "inst_graph.m"
        }
#line 211 "inst_graph.m"
        {
#line 211 "inst_graph.m"
          hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (hlds__inst_graph__Functors_8));
#line 211 "inst_graph.m"
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__V_19_19));
#line 211 "inst_graph.m"
        }
#line 211 "inst_graph.m"
        {
#line 211 "inst_graph.m"
          mercury__map__det_update_4_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, ((MR_Box) (hlds__inst_graph__Child_6)), ((MR_Box) (hlds__inst_graph__V_17_17)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, hlds__inst_graph__STATE_VARIABLE_InstGraph_12);
        }
#line 210 "inst_graph.m"
      }
#line 212 "inst_graph.m"
    else
#line 213 "inst_graph.m"
      {
#line 214 "inst_graph.m"
        {
#line 214 "inst_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.inst_graph", (MR_String) "predicate \140hlds.inst_graph.set_parent\'/4", (MR_String) "node already has parent");
#line 214 "inst_graph.m"
          return;
        }
#line 213 "inst_graph.m"
      }
#line 207 "inst_graph.m"
  }
#line 70 "inst_graph.m"
}

#line 200 "inst_graph.m"
static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
#line 200 "inst_graph.m"
  MR_Box hlds__inst_graph__closure_arg,
#line 200 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_1,
#line 200 "inst_graph.m"
  MR_Box hlds__inst_graph__wrapper_arg_2,
#line 200 "inst_graph.m"
  MR_Box * hlds__inst_graph__wrapper_arg_3)
#line 200 "inst_graph.m"
{
#line 200 "inst_graph.m"
  {
#line 200 "inst_graph.m"
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
#line 200 "inst_graph.m"
    MR_Word hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7;

#line 200 "inst_graph.m"
    {
#line 200 "inst_graph.m"
      hlds__inst_graph__init_var_3_p_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), &hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7);
    }
#line 200 "inst_graph.m"
    *hlds__inst_graph__wrapper_arg_3 = ((MR_Box) (hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7));
#line 200 "inst_graph.m"
  }
#line 200 "inst_graph.m"
}

#line 63 "inst_graph.m"
void MR_CALL 
hlds__inst_graph__init_2_p_0(
#line 63 "inst_graph.m"
  MR_Word hlds__inst_graph__Vars_3,
#line 63 "inst_graph.m"
  MR_Word * hlds__inst_graph__InstGraph_4)
#line 63 "inst_graph.m"
{
#line 198 "inst_graph.m"
  {
#line 198 "inst_graph.m"
    MR_bool hlds__inst_graph__succeeded;
#line 198 "inst_graph.m"
    MR_Word hlds__inst_graph__TypeInfo_7_7 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
#line 198 "inst_graph.m"
    MR_Word hlds__inst_graph__InstGraph0_5;
#line 200 "inst_graph.m"
    MR_Box hlds__inst_graph__conv1_InstGraph_4;

#line 199 "inst_graph.m"
    {
#line 199 "inst_graph.m"
      mercury__map__init_1_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph0_5);
    }
#line 200 "inst_graph.m"
    {
#line 200 "inst_graph.m"
      mercury__list__foldl_4_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph_scalar_common_2[0], (MR_Word) &hlds__inst_graph_scalar_common_2[2], hlds__inst_graph__Vars_3, ((MR_Box) (hlds__inst_graph__InstGraph0_5)), &hlds__inst_graph__conv1_InstGraph_4);
    }
#line 200 "inst_graph.m"
    *hlds__inst_graph__InstGraph_4 = ((MR_Word) hlds__inst_graph__conv1_InstGraph_4);
#line 198 "inst_graph.m"
  }
#line 63 "inst_graph.m"
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
