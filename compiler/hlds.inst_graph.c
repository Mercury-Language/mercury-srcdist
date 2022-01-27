/*
** Automatically generated from `inst_graph.m'
** by the Mercury compiler,
** version rotd-2016-09-27
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s {
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7;
  MR_Word * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8;
  MR_Cont hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont;
  void * hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr;
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30;
  MR_bool hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39;
  MR_Word hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38;
  MR_Box hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39;
};

struct hlds__inst_graph__descendant_2_4_p_0_env_0_s {
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6;
  MR_Word * hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8;
  MR_Cont hlds__inst_graph__descendant_2_4_p_0_env_0__cont;
  void * hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr;
  MR_bool hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11;
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11;
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12;
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13;
};

struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s {
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7;
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8;
  MR_Word * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11;
  MR_Word * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12;
  MR_Cont hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont;
  void * hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr;
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24;
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13;
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14;
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22;
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23;
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13;
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14;
};

struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s {
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4;
  MR_Word * hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6;
  MR_Cont hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont;
  void * hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr;
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
  MR_Box hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4];

static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4];

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0;

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1];

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1];

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1];

static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1];

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0;

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1];

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1;

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1];

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1];

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0[2];

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2];

static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2];

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0;

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1];

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1];

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1];

static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1];

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3,
  MR_Box hlds__inst_graph__wrapper_arg_4,
  MR_Box * hlds__inst_graph__wrapper_arg_5);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_38,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_45,
  MR_Box hlds__inst_graph__LambdaHeadVar__2_46,
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_47,
  MR_Box hlds__inst_graph__LambdaHeadVar__4_48,
  MR_Box * hlds__inst_graph__LambdaHeadVar__5_49);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
  MR_Box hlds__inst_graph__LambdaHeadVar__2_33,
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_34);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box * hlds__inst_graph__wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(
  MR_Word hlds__inst_graph__Renaming_14,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
  MR_Word hlds__inst_graph__LambdaHeadVar__3_29,
  MR_Word * hlds__inst_graph__LambdaHeadVar__4_30);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(
  MR_Word hlds__inst_graph__Renaming_14,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
  MR_Word * hlds__inst_graph__LambdaHeadVar__2_33);

static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
  MR_Word hlds__inst_graph__VarSet_5,
  MR_Word hlds__inst_graph__Var_6);

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3);

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
  MR_Word hlds__inst_graph__VarSet_6,
  MR_Word hlds__inst_graph__ConsId_7,
  MR_Word hlds__inst_graph__Args_8);

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
  MR_Word hlds__inst_graph__VarSet_6,
  MR_Word hlds__inst_graph__Var_7,
  MR_Word hlds__inst_graph__Node_8);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
  MR_Word hlds__inst_graph__InstGraphA_1,
  MR_Word hlds__inst_graph__InstGraphB_2,
  MR_Word hlds__inst_graph__SeenA0_3,
  MR_Word hlds__inst_graph__SeenB0_4,
  MR_Word hlds__inst_graph__A_5,
  MR_Word hlds__inst_graph__B_6,
  MR_Word * hlds__inst_graph__HeadVar__7_7,
  MR_Word * hlds__inst_graph__HeadVar__8_8,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4,
  MR_Box hlds__inst_graph__wrapper_arg_5,
  MR_Box * hlds__inst_graph__wrapper_arg_6);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Var_11,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Var_9,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
  MR_Word hlds__inst_graph__InstGraph_5,
  MR_Word hlds__inst_graph__Seen_6,
  MR_Word hlds__inst_graph__Var_7,
  MR_Word * hlds__inst_graph__Descendant_8,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr);

static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
  MR_Word hlds__inst_graph__Var_4,
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7);

static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3,
  MR_Box hlds__inst_graph__wrapper_arg_4,
  MR_Box * hlds__inst_graph__wrapper_arg_5);

static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4,
  MR_Box hlds__inst_graph__wrapper_arg_5,
  MR_Box * hlds__inst_graph__wrapper_arg_6);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
  void * hlds__inst_graph__env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0
};

static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4] = {
  (MR_String) "interface_inst_graph",
  (MR_String) "interface_vars",
  (MR_String) "interface_varset",
  (MR_String) "implementation_inst_graph"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1
};

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

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0[2] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1,
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

static const MR_Integer hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
    return hlds__inst_graph__succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

    {
      hlds__inst_graph____Compare____inst_graph_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____inst_graph_info_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
    return hlds__inst_graph__succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

    {
      hlds__inst_graph____Compare____inst_graph_info_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
    return hlds__inst_graph__succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

    {
      hlds__inst_graph____Compare____maybe_parent_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__succeeded = hlds__inst_graph____Unify____node_0_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
    return hlds__inst_graph__succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
  MR_Box * hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__inst_graph__conv0_HeadVar__1_1;

    {
      hlds__inst_graph____Compare____node_0_0(&hlds__inst_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3));
    }
    *hlds__inst_graph__wrapper_arg_1 = ((MR_Box) (hlds__inst_graph__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3,
  MR_Box hlds__inst_graph__wrapper_arg_4,
  MR_Box * hlds__inst_graph__wrapper_arg_5)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_44_44;

    {
      hlds__inst_graph__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 5) = ((MR_Box) (hlds__inst_graph__P_9));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_44_44, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_44_44, hlds__inst_graph__LambdaHeadVar__2_39, hlds__inst_graph__LambdaHeadVar__3_40, hlds__inst_graph__LambdaHeadVar__4_41, hlds__inst_graph__LambdaHeadVar__5_42, hlds__inst_graph__LambdaHeadVar__6_43);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_31_31;

    {
      hlds__inst_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 4) = ((MR_Box) (hlds__inst_graph__P_7));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_31_31, hlds__inst_graph__LambdaHeadVar__2_28, hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_38,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_39,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_40,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_41,
  MR_Box hlds__inst_graph__LambdaHeadVar__5_42,
  MR_Box * hlds__inst_graph__LambdaHeadVar__6_43)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__Seen_12, hlds__inst_graph__LambdaHeadVar__2_39, hlds__inst_graph__LambdaHeadVar__3_40, hlds__inst_graph__LambdaHeadVar__4_41, hlds__inst_graph__LambdaHeadVar__5_42, hlds__inst_graph__LambdaHeadVar__6_43);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_45,
  MR_Box hlds__inst_graph__LambdaHeadVar__2_46,
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_47,
  MR_Box hlds__inst_graph__LambdaHeadVar__4_48,
  MR_Box * hlds__inst_graph__LambdaHeadVar__5_49)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_45)), hlds__inst_graph__Seen_12);
    }
    if (hlds__inst_graph__succeeded)
      {
        *hlds__inst_graph__LambdaHeadVar__3_47 = hlds__inst_graph__LambdaHeadVar__2_46;
        *hlds__inst_graph__LambdaHeadVar__5_49 = hlds__inst_graph__LambdaHeadVar__4_48;
      }
    else
      {
        MR_Word hlds__inst_graph__V_50_50;

        {
          hlds__inst_graph__V_50_50 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_12, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_45)));
        }
        {
          hlds__inst_graph__foldl_reachable_aux2_8_p_0(hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__P_9, hlds__inst_graph__InstGraph_10, hlds__inst_graph__LambdaHeadVar__1_45, hlds__inst_graph__V_50_50, hlds__inst_graph__LambdaHeadVar__2_46, hlds__inst_graph__LambdaHeadVar__3_47, hlds__inst_graph__LambdaHeadVar__4_48, hlds__inst_graph__LambdaHeadVar__5_49);
        }
      }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
  MR_Box hlds__inst_graph__LambdaHeadVar__3_29,
  MR_Box * hlds__inst_graph__LambdaHeadVar__4_30)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__Seen_10, hlds__inst_graph__LambdaHeadVar__2_28, hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
  MR_Box hlds__inst_graph__LambdaHeadVar__2_33,
  MR_Box * hlds__inst_graph__LambdaHeadVar__3_34)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      hlds__inst_graph__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_32)), hlds__inst_graph__Seen_10);
    }
    if (hlds__inst_graph__succeeded)
      *hlds__inst_graph__LambdaHeadVar__3_34 = hlds__inst_graph__LambdaHeadVar__2_33;
    else
      {
        MR_Word hlds__inst_graph__V_35_35;

        {
          hlds__inst_graph__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Seen_10, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_32)));
        }
        {
          hlds__inst_graph__foldl_reachable_aux_6_p_0(hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__P_7, hlds__inst_graph__InstGraph_8, hlds__inst_graph__LambdaHeadVar__1_32, hlds__inst_graph__V_35_35, hlds__inst_graph__LambdaHeadVar__2_33, hlds__inst_graph__LambdaHeadVar__3_34);
        }
      }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box * hlds__inst_graph__wrapper_arg_2)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
    MR_Word hlds__inst_graph__conv0_LambdaHeadVar__2_33;

    {
      hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), &hlds__inst_graph__conv0_LambdaHeadVar__2_33);
    }
    *hlds__inst_graph__wrapper_arg_2 = ((MR_Box) (hlds__inst_graph__conv0_LambdaHeadVar__2_33));
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(
  MR_Word hlds__inst_graph__Renaming_14,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_27,
  MR_Word hlds__inst_graph__LambdaHeadVar__2_28,
  MR_Word hlds__inst_graph__LambdaHeadVar__3_29,
  MR_Word * hlds__inst_graph__LambdaHeadVar__4_30)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__TypeInfo_42_42;
    MR_Word hlds__inst_graph__TypeInfo_44_44;
    MR_Word hlds__inst_graph__Functors0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__LambdaHeadVar__2_28, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__MaybeParent_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__LambdaHeadVar__2_28, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__Functors_23;
    MR_Word hlds__inst_graph__Node_24;
    MR_Word hlds__inst_graph__Var_25;
    MR_Word hlds__inst_graph__V_31_31;
    MR_Box hlds__inst_graph__conv1_Var_25;

    {
      hlds__inst_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 1) = ((MR_Box) (hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_31_31, 3) = ((MR_Box) (hlds__inst_graph__Renaming_14));
    }
    hlds__inst_graph__TypeInfo_42_42 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
    {
      mercury__map__map_values_only_3_p_0(hlds__inst_graph__TypeInfo_42_42, hlds__inst_graph__TypeInfo_42_42, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__inst_graph__V_31_31, hlds__inst_graph__Functors0_19, &hlds__inst_graph__Functors_23);
    }
    {
      hlds__inst_graph__Node_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_24, 0) = ((MR_Box) (hlds__inst_graph__Functors_23));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_24, 1) = ((MR_Box) (hlds__inst_graph__MaybeParent_20));
    }
    hlds__inst_graph__TypeInfo_44_44 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
    {
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__Renaming_14, ((MR_Box) (hlds__inst_graph__LambdaHeadVar__1_27)), &hlds__inst_graph__conv1_Var_25);
    }
    hlds__inst_graph__Var_25 = ((MR_Word) hlds__inst_graph__conv1_Var_25);
    {
      mercury__map__det_insert_4_p_0(hlds__inst_graph__TypeInfo_44_44, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_25)), ((MR_Box) (hlds__inst_graph__Node_24)), hlds__inst_graph__LambdaHeadVar__3_29, hlds__inst_graph__LambdaHeadVar__4_30);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(
  MR_Word hlds__inst_graph__Renaming_14,
  MR_Word hlds__inst_graph__LambdaHeadVar__1_32,
  MR_Word * hlds__inst_graph__LambdaHeadVar__2_33)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__TypeInfo_41_41 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

    {
      mercury__map__apply_to_list_3_p_0(hlds__inst_graph__TypeInfo_41_41, hlds__inst_graph__TypeInfo_41_41, hlds__inst_graph__LambdaHeadVar__1_32, hlds__inst_graph__Renaming_14, hlds__inst_graph__LambdaHeadVar__2_33);
    }
  }
}

void MR_CALL 
hlds__inst_graph____Compare____node_0_0(
  MR_Word * hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2,
  MR_Word hlds__inst_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Integer hlds__inst_graph__CastX_9 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
    MR_Integer hlds__inst_graph__CastY_10 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_9 == hlds__inst_graph__CastY_10);
    if (hlds__inst_graph__succeeded)
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[1], &hlds__inst_graph__V_8_8, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_6_6)));
        }
        hlds__inst_graph__succeeded = (hlds__inst_graph__V_8_8 == (MR_Integer) 0);
        hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
        if (hlds__inst_graph__succeeded)
          *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_8_8;
        else
          {
            hlds__inst_graph____Compare____maybe_parent_0_0(hlds__inst_graph__HeadVar__1_1, hlds__inst_graph__V_5_5, hlds__inst_graph__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Integer hlds__inst_graph__CastX_7 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
    MR_Integer hlds__inst_graph__CastY_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_7 == hlds__inst_graph__CastY_8);
    if (hlds__inst_graph__succeeded)
      hlds__inst_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));

        {
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[1], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_5_5)));
        }
        if (hlds__inst_graph__succeeded)
          {
            hlds__inst_graph__succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(hlds__inst_graph__V_4_4, hlds__inst_graph__V_6_6);
          }
      }
    return hlds__inst_graph__succeeded;
  }
}

void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0(
  MR_Word * hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2,
  MR_Word hlds__inst_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Integer hlds__inst_graph__CastX_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
    MR_Integer hlds__inst_graph__CastY_9 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_8 == hlds__inst_graph__CastY_9);
    if (hlds__inst_graph__succeeded)
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__inst_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__inst_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__inst_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__V_11_11)), ((MR_Box) (hlds__inst_graph__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Integer hlds__inst_graph__CastX_7 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
    MR_Integer hlds__inst_graph__CastY_8 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_7 == hlds__inst_graph__CastY_8);
    if (hlds__inst_graph__succeeded)
      hlds__inst_graph__succeeded = MR_TRUE;
    else
    if ((hlds__inst_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__inst_graph__CastX_3 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
        MR_Integer hlds__inst_graph__CastY_4 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

        hlds__inst_graph__succeeded = (hlds__inst_graph__CastY_4 == hlds__inst_graph__CastX_3);
      }
    else
      {
        MR_Word hlds__inst_graph__TypeInfo_9_9;
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_6_6;

        hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__inst_graph__succeeded)
          {
            hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
            hlds__inst_graph__TypeInfo_9_9 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
            {
              hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_9_9, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_6_6)));
            }
          }
      }
    return hlds__inst_graph__succeeded;
  }
}

void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0(
  MR_Word * hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2,
  MR_Word hlds__inst_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Integer hlds__inst_graph__CastX_15 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;
    MR_Integer hlds__inst_graph__CastY_16 = (MR_Integer) hlds__inst_graph__HeadVar__3_3;

    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_15 == hlds__inst_graph__CastY_16);
    if (hlds__inst_graph__succeeded)
      *hlds__inst_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__inst_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__inst_graph__V_12_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], &hlds__inst_graph__V_12_12, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
        }
        hlds__inst_graph__succeeded = (hlds__inst_graph__V_12_12 == (MR_Integer) 0);
        hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
        if (hlds__inst_graph__succeeded)
          *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_12_12;
        else
          {
            MR_Word hlds__inst_graph__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[1], &hlds__inst_graph__V_13_13, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
            }
            hlds__inst_graph__succeeded = (hlds__inst_graph__V_13_13 == (MR_Integer) 0);
            hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
            if (hlds__inst_graph__succeeded)
              *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_13_13;
            else
              {
                MR_Word hlds__inst_graph__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[2], &hlds__inst_graph__V_14_14, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                }
                hlds__inst_graph__succeeded = (hlds__inst_graph__V_14_14 == (MR_Integer) 0);
                hlds__inst_graph__succeeded = !(hlds__inst_graph__succeeded);
                if (hlds__inst_graph__succeeded)
                  *hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__V_7_7)), ((MR_Box) (hlds__inst_graph__V_11_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Integer hlds__inst_graph__CastX_11 = (MR_Integer) hlds__inst_graph__HeadVar__1_1;
    MR_Integer hlds__inst_graph__CastY_12 = (MR_Integer) hlds__inst_graph__HeadVar__2_2;

    hlds__inst_graph__succeeded = (hlds__inst_graph__CastX_11 == hlds__inst_graph__CastY_12);
    if (hlds__inst_graph__succeeded)
      hlds__inst_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__inst_graph__TypeInfo_14_14;
        MR_Word hlds__inst_graph__TypeInfo_15_15;
        MR_Word hlds__inst_graph__TypeInfo_16_16;
        MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__inst_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 3)));

        {
          hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], ((MR_Box) (hlds__inst_graph__V_3_3)), ((MR_Box) (hlds__inst_graph__V_7_7)));
        }
        if (hlds__inst_graph__succeeded)
          {
            hlds__inst_graph__TypeInfo_14_14 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
            {
              hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_14_14, ((MR_Box) (hlds__inst_graph__V_4_4)), ((MR_Box) (hlds__inst_graph__V_8_8)));
            }
            if (hlds__inst_graph__succeeded)
              {
                hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[2];
                {
                  hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_15_15, ((MR_Box) (hlds__inst_graph__V_5_5)), ((MR_Box) (hlds__inst_graph__V_9_9)));
                }
                if (hlds__inst_graph__succeeded)
                  {
                    hlds__inst_graph__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_2[0];
                    {
                      hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__inst_graph__TypeInfo_16_16, ((MR_Box) (hlds__inst_graph__V_6_6)), ((MR_Box) (hlds__inst_graph__V_10_10)));
                    }
                  }
              }
          }
      }
    return hlds__inst_graph__succeeded;
  }
}

void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0(
  MR_Word * hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2,
  MR_Word hlds__inst_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__Cast_HeadVar1_4 = hlds__inst_graph__HeadVar__2_2;
    MR_Word hlds__inst_graph__Cast_HeadVar2_5 = hlds__inst_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__HeadVar__1_1, ((MR_Box) (hlds__inst_graph__Cast_HeadVar1_4)), ((MR_Box) (hlds__inst_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__Cast_HeadVar1_3 = hlds__inst_graph__HeadVar__1_1;
    MR_Word hlds__inst_graph__Cast_HeadVar2_4 = hlds__inst_graph__HeadVar__2_2;

    {
      hlds__inst_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__inst_graph_scalar_common_2[0], ((MR_Box) (hlds__inst_graph__Cast_HeadVar1_3)), ((MR_Box) (hlds__inst_graph__Cast_HeadVar2_4)));
    }
    return hlds__inst_graph__succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
  MR_Word hlds__inst_graph__VarSet_5,
  MR_Word hlds__inst_graph__Var_6)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    {
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__Var_6, hlds__inst_graph__VarSet_5);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__dump_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
  MR_Word hlds__inst_graph__VarSet_6,
  MR_Word hlds__inst_graph__ConsId_7,
  MR_Word hlds__inst_graph__Args_8)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_String hlds__inst_graph__V_16_16;

    {
      mercury__io__write_string_3_p_0((MR_String) "%%\t");
    }
    {
      hlds__inst_graph__V_16_16 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__inst_graph__ConsId_7);
    }
    {
      mercury__io__write_string_3_p_0(hlds__inst_graph__V_16_16);
    }
    if ((hlds__inst_graph__Args_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__inst_graph__V_21_21;

        {
          mercury__io__write_char_3_p_0((MR_Char) 40);
        }
        {
          hlds__inst_graph__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 1) = ((MR_Box) (hlds__inst_graph__dump_functor_5_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_21_21, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__Args_8, (MR_String) ", ", hlds__inst_graph__V_21_21);
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
      }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__dump_functor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
  MR_Word hlds__inst_graph__VarSet_6,
  MR_Word hlds__inst_graph__Var_7,
  MR_Word hlds__inst_graph__Node_8)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__TypeCtorInfo_24_24;
    MR_Word hlds__inst_graph__Functors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__MaybeParent_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__Node_8, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_22_22;
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_14;

    {
      mercury__io__write_string_3_p_0((MR_String) "%% ");
    }
    hlds__inst_graph__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Var_7, hlds__inst_graph__VarSet_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    if ((hlds__inst_graph__MaybeParent_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__inst_graph__Parent_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_11, (MR_Integer) 0)));

        {
          mercury__term_io__write_variable_4_p_0(hlds__inst_graph__TypeCtorInfo_24_24, hlds__inst_graph__Parent_12, hlds__inst_graph__VarSet_6);
        }
      }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__inst_graph__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 1) = ((MR_Box) (hlds__inst_graph__dump_node_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_22_22, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_22_22, hlds__inst_graph__Functors_10, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_14);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29);
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30);
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0_1(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31);
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0_3(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37);
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33);
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0_5(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_TRUE;
    {
      {
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25);
      }
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
        {
          {
            mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_4, hlds__inst_graph__env_ptr);
          }
        }
      else
        {
          MR_Word hlds__inst_graph__ArgsB_32;
          MR_Box hlds__inst_graph__conv5_ArgsB_32;

          {
            (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29)), &hlds__inst_graph__conv5_ArgsB_32);
          }
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
            {
              hlds__inst_graph__ArgsB_32 = ((MR_Word) hlds__inst_graph__conv5_ArgsB_32);
              (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = MR_TRUE;
            }
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
            {
              hlds__inst_graph__corresponding_members_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__ArgsB_32, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33, hlds__inst_graph__corresponding_nodes_2_8_p_0_6, hlds__inst_graph__env_ptr);
            }
        }
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34);
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38);
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0_7(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39);
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0_9(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    {
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_10, hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
  MR_Word hlds__inst_graph__InstGraphA_1,
  MR_Word hlds__inst_graph__InstGraphB_2,
  MR_Word hlds__inst_graph__SeenA0_3,
  MR_Word hlds__inst_graph__SeenB0_4,
  MR_Word hlds__inst_graph__A_5,
  MR_Word hlds__inst_graph__B_6,
  MR_Word * hlds__inst_graph__HeadVar__7_7,
  MR_Word * hlds__inst_graph__HeadVar__8_8,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s hlds__inst_graph__env;

    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1 = hlds__inst_graph__InstGraphA_1;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2 = hlds__inst_graph__InstGraphB_2;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5 = hlds__inst_graph__A_5;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6 = hlds__inst_graph__B_6;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7 = hlds__inst_graph__HeadVar__7_7;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8 = hlds__inst_graph__HeadVar__8_8;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont = hlds__inst_graph__cont;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
    *((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8) = (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
    {
      ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont)((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    }
    {
      MR_Word hlds__inst_graph__TypeCtorInfo_42_42;
      MR_Word hlds__inst_graph__FunctorsA_23;
      MR_Word hlds__inst_graph__V_35_35;
      MR_Word hlds__inst_graph__V_36_36;
      MR_Word hlds__inst_graph__TypeInfo_40_40 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
      MR_Box hlds__inst_graph__conv0_V_35_35;
      MR_Word hlds__inst_graph__V_24_24;
      MR_Box hlds__inst_graph__conv1_V_36_36;
      MR_Word hlds__inst_graph__V_26_26;
      MR_Word hlds__inst_graph__TypeCtorInfo_43_43;
      MR_Word hlds__inst_graph__TypeInfo_44_44;

      {
        (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), hlds__inst_graph__SeenA0_3);
      }
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
        {
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(hlds__inst_graph__TypeInfo_40_40, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), hlds__inst_graph__SeenB0_4);
        }
      (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = !((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded);
      if ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
        {
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
          hlds__inst_graph__TypeCtorInfo_42_42 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
          {
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), &hlds__inst_graph__conv0_V_35_35);
          }
          hlds__inst_graph__V_35_35 = ((MR_Word) hlds__inst_graph__conv0_V_35_35);
          hlds__inst_graph__FunctorsA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 0)));
          hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, (MR_Integer) 1)));
          {
            mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__TypeCtorInfo_42_42, (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), &hlds__inst_graph__conv1_V_36_36);
          }
          hlds__inst_graph__V_36_36 = ((MR_Word) hlds__inst_graph__conv1_V_36_36);
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 0)));
          hlds__inst_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_36_36, (MR_Integer) 1)));
          {
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenA0_3, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)));
          }
          {
            (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28 = mercury__set__insert_2_f_0((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, hlds__inst_graph__SeenB0_4, ((MR_Box) ((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)));
          }
          (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_FALSE;
          hlds__inst_graph__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
          hlds__inst_graph__TypeInfo_44_44 = (MR_Word) &hlds__inst_graph_scalar_common_1[1];
          {
            mercury__map__member_3_p_0(hlds__inst_graph__TypeCtorInfo_43_43, hlds__inst_graph__TypeInfo_44_44, hlds__inst_graph__FunctorsA_23, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_2, &hlds__inst_graph__env);
          }
          if (!((hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0))
            {
              {
                mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_8, &hlds__inst_graph__env);
              }
            }
        }
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4,
  MR_Box hlds__inst_graph__wrapper_arg_5,
  MR_Box * hlds__inst_graph__wrapper_arg_6)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_63,
  MR_Word hlds__inst_graph__TypeInfo_for_U_64,
  MR_Word hlds__inst_graph__P_9,
  MR_Word hlds__inst_graph__InstGraph_10,
  MR_Word hlds__inst_graph__Var_11,
  MR_Word hlds__inst_graph__Seen_12,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_28,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_29,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_30,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_31)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__Functors_15;
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_32;
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_33;
    MR_Word hlds__inst_graph__V_34_34;
    MR_Word hlds__inst_graph__V_35_35;
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_9, (MR_Integer) 1)));
    MR_Box hlds__inst_graph__conv1_V_34_34;
    MR_Word hlds__inst_graph__V_16_16;

    {
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_9), ((MR_Box) (hlds__inst_graph__Var_11)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_28, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc2_0_30, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_33);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_10, ((MR_Box) (hlds__inst_graph__Var_11)), &hlds__inst_graph__conv1_V_34_34);
    }
    hlds__inst_graph__V_34_34 = ((MR_Word) hlds__inst_graph__conv1_V_34_34);
    hlds__inst_graph__Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 0)));
    hlds__inst_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, (MR_Integer) 1)));
    {
      hlds__inst_graph__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux2_8_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_63));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_64));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 5) = ((MR_Box) (hlds__inst_graph__P_9));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_10));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_35_35, 7) = ((MR_Box) (hlds__inst_graph__Seen_12));
    }
    {
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_63, hlds__inst_graph__TypeInfo_for_U_64, hlds__inst_graph__V_35_35, hlds__inst_graph__Functors_15, hlds__inst_graph__STATE_VARIABLE_Acc1_32_32, hlds__inst_graph__STATE_VARIABLE_Acc1_29, hlds__inst_graph__STATE_VARIABLE_Acc2_33_33, hlds__inst_graph__STATE_VARIABLE_Acc2_31);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_44,
  MR_Word hlds__inst_graph__P_7,
  MR_Word hlds__inst_graph__InstGraph_8,
  MR_Word hlds__inst_graph__Var_9,
  MR_Word hlds__inst_graph__Seen_10,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_21,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_22)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__Functors_12;
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_23;
    MR_Word hlds__inst_graph__V_24_24;
    MR_Word hlds__inst_graph__V_25_25;
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_7, (MR_Integer) 1)));
    MR_Box hlds__inst_graph__conv1_V_24_24;
    MR_Word hlds__inst_graph__V_13_13;

    {
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_7), ((MR_Box) (hlds__inst_graph__Var_9)), hlds__inst_graph__STATE_VARIABLE_Acc_0_21, &hlds__inst_graph__STATE_VARIABLE_Acc_23_23);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_8, ((MR_Box) (hlds__inst_graph__Var_9)), &hlds__inst_graph__conv1_V_24_24);
    }
    hlds__inst_graph__V_24_24 = ((MR_Word) hlds__inst_graph__conv1_V_24_24);
    hlds__inst_graph__Functors_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 0)));
    hlds__inst_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_24_24, (MR_Integer) 1)));
    {
      hlds__inst_graph__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_44));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 4) = ((MR_Box) (hlds__inst_graph__P_7));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_8));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_25_25, 6) = ((MR_Box) (hlds__inst_graph__Seen_10));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_44, hlds__inst_graph__V_25_25, hlds__inst_graph__Functors_12, hlds__inst_graph__STATE_VARIABLE_Acc_23_23, hlds__inst_graph__STATE_VARIABLE_Acc_22);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11);
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12);
    {
      hlds__inst_graph__descendant_2_4_p_0_1(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13);
    {
      hlds__inst_graph__descendant_2_4_p_0_3(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    {
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
      {
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
      }
    }
    {
      {
        (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)), (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6);
      }
      if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
        {
          (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = MR_FALSE;
          if ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
            {
              ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
            }
        }
      else
        {
          MR_Word hlds__inst_graph__V_15_15;

          {
            hlds__inst_graph__V_15_15 = mercury__set__insert_2_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6, ((MR_Box) ((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)));
          }
          {
            hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, hlds__inst_graph__V_15_15, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    {
      mercury__list__member_2_p_1((hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, &(hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12, hlds__inst_graph__descendant_2_4_p_0_4, hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
  MR_Word hlds__inst_graph__InstGraph_5,
  MR_Word hlds__inst_graph__Seen_6,
  MR_Word hlds__inst_graph__Var_7,
  MR_Word * hlds__inst_graph__Descendant_8,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s hlds__inst_graph__env;

    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5 = hlds__inst_graph__InstGraph_5;
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6 = hlds__inst_graph__Seen_6;
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8 = hlds__inst_graph__Descendant_8;
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont = hlds__inst_graph__cont;
    (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
    {
      MR_Word hlds__inst_graph__Functors_9;
      MR_Word hlds__inst_graph__V_14_14;
      MR_Box hlds__inst_graph__conv0_V_14_14;
      MR_Word hlds__inst_graph__V_10_10;

      (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
      {
        mercury__map__lookup_3_p_0((hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__TypeInfo_16_16, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, ((MR_Box) (hlds__inst_graph__Var_7)), &hlds__inst_graph__conv0_V_14_14);
      }
      hlds__inst_graph__V_14_14 = ((MR_Word) hlds__inst_graph__conv0_V_14_14);
      hlds__inst_graph__Functors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 0)));
      hlds__inst_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_14_14, (MR_Integer) 1)));
      {
        mercury__map__member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__Functors_9, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11, &(hlds__inst_graph__env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12, hlds__inst_graph__descendant_2_4_p_0_2, &hlds__inst_graph__env);
      }
    }
  }
}

static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
  MR_Word hlds__inst_graph__Var_4,
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6,
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_7)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_8_8;
    MR_Word hlds__inst_graph__V_10_10;

    {
      hlds__inst_graph__V_10_10 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1]);
    }
    {
      hlds__inst_graph__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 0) = ((MR_Box) (hlds__inst_graph__V_10_10));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__inst_graph__Var_4)), ((MR_Box) (hlds__inst_graph__V_8_8)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_6, hlds__inst_graph__STATE_VARIABLE_InstGraph_7);
    }
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__3_3;
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

    {
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
    }
    return hlds__inst_graph__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__implementation_inst_graph_1_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));

    return hlds__inst_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__3_3;
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));

    {
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
    }
    return hlds__inst_graph__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__interface_varset_1_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

    return hlds__inst_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__3_3;
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));

    {
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__V_4_4));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
    }
    return hlds__inst_graph__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__interface_vars_1_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

    return hlds__inst_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__3_3;
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));

    {
      hlds__inst_graph__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 0) = ((MR_Box) (hlds__inst_graph__HeadVar__2_2));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 1) = ((MR_Box) (hlds__inst_graph__V_5_5));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 2) = ((MR_Box) (hlds__inst_graph__V_6_6));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__3_3, 3) = ((MR_Box) (hlds__inst_graph__V_7_7));
    }
    return hlds__inst_graph__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__interface_inst_graph_1_f_0(
  MR_Word hlds__inst_graph__HeadVar__1_1)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__inst_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__inst_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word hlds__inst_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 3)));

    return hlds__inst_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__inst_graph_info_init_0_f_0(void)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__HeadVar__1_1;
    MR_Word hlds__inst_graph__InstGraph_2;
    MR_Word hlds__inst_graph__VarSet_3;

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__inst_graph__VarSet_3);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph_2);
    }
    {
      hlds__inst_graph__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 0) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 2) = ((MR_Box) (hlds__inst_graph__VarSet_3));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__HeadVar__1_1, 3) = ((MR_Box) (hlds__inst_graph__InstGraph_2));
    }
    return hlds__inst_graph__HeadVar__1_1;
  }
}

void MR_CALL 
hlds__inst_graph__corresponding_members_4_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_15,
  MR_Word hlds__inst_graph__TypeInfo_for_U_16,
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__HeadVar__2_2,
  MR_Box * hlds__inst_graph__A_3,
  MR_Box * hlds__inst_graph__B_4,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word hlds__inst_graph__V_17_17;
        MR_Box hlds__inst_graph__V_18_18;
        MR_Word hlds__inst_graph__V_19_19;
        MR_Box hlds__inst_graph__V_20_20;

        if (hlds__inst_graph__succeeded)
          {
            hlds__inst_graph__V_18_18 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 0));
            hlds__inst_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__1_1, (MR_Integer) 1)));
            hlds__inst_graph__succeeded = ((MR_tag((MR_Word) hlds__inst_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__inst_graph__succeeded)
              {
                hlds__inst_graph__V_20_20 = (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 0));
                hlds__inst_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__HeadVar__2_2, (MR_Integer) 1)));
                *hlds__inst_graph__A_3 = hlds__inst_graph__V_18_18;
                *hlds__inst_graph__B_4 = hlds__inst_graph__V_20_20;
                {
                  hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
                }
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__inst_graph__HeadVar__1__tmp_copy_1 = hlds__inst_graph__V_17_17;
                    MR_Word hlds__inst_graph__HeadVar__2__tmp_copy_2 = hlds__inst_graph__V_19_19;

                    hlds__inst_graph__HeadVar__2_2 = hlds__inst_graph__HeadVar__2__tmp_copy_2;
                    hlds__inst_graph__HeadVar__1_1 = hlds__inst_graph__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__dump_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2));
    }
  }
}

void MR_CALL 
hlds__inst_graph__dump_4_p_0(
  MR_Word hlds__inst_graph__InstGraph_5,
  MR_Word hlds__inst_graph__VarSet_6)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_10_10;
    MR_Box hlds__inst_graph__conv0_STATE_VARIABLE_IO_9;

    {
      hlds__inst_graph__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 1) = ((MR_Box) (hlds__inst_graph__dump_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, 3) = ((MR_Box) (hlds__inst_graph__VarSet_6));
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__inst_graph__V_10_10, hlds__inst_graph__InstGraph_5, ((MR_Box) ((MR_Integer) 0)), &hlds__inst_graph__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
    MR_Word hlds__inst_graph__conv0_LambdaHeadVar__4_30;

    {
      hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), ((MR_Word) hlds__inst_graph__wrapper_arg_3), &hlds__inst_graph__conv0_LambdaHeadVar__4_30);
    }
    *hlds__inst_graph__wrapper_arg_4 = ((MR_Box) (hlds__inst_graph__conv0_LambdaHeadVar__4_30));
  }
}

void MR_CALL 
hlds__inst_graph__merge_7_p_0(
  MR_Word hlds__inst_graph__InstGraph0_8,
  MR_Word hlds__inst_graph__VarSet0_9,
  MR_Word hlds__inst_graph__NewInstGraph_10,
  MR_Word hlds__inst_graph__NewVarSet_11,
  MR_Word * hlds__inst_graph__InstGraph_12,
  MR_Word * hlds__inst_graph__VarSet_13,
  MR_Word * hlds__inst_graph__Renaming_14)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_26_26;
    MR_Box hlds__inst_graph__conv1_InstGraph_12;

    {
      mercury__varset__merge_renaming_without_names_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__inst_graph__VarSet0_9, hlds__inst_graph__NewVarSet_11, hlds__inst_graph__VarSet_13, hlds__inst_graph__Renaming_14);
    }
    {
      hlds__inst_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 1) = ((MR_Box) (hlds__inst_graph__merge_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_26_26, 3) = ((MR_Box) (*hlds__inst_graph__Renaming_14));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, (MR_Word) &hlds__inst_graph_scalar_common_2[0], hlds__inst_graph__V_26_26, hlds__inst_graph__NewInstGraph_10, ((MR_Box) (hlds__inst_graph__InstGraph0_8)), &hlds__inst_graph__conv1_InstGraph_12);
    }
    *hlds__inst_graph__InstGraph_12 = ((MR_Word) hlds__inst_graph__conv1_InstGraph_12);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13);
    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14);
    {
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
    {
      (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22 = mercury__set__init_0_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    }
    {
      (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23 = mercury__set__init_0_f_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    }
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_22_22, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_23_23, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(
  MR_Word hlds__inst_graph__InstGraphA_7,
  MR_Word hlds__inst_graph__InstGraphB_8,
  MR_Word hlds__inst_graph__VarsA_9,
  MR_Word hlds__inst_graph__VarsB_10,
  MR_Word * hlds__inst_graph__V_11,
  MR_Word * hlds__inst_graph__W_12,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s hlds__inst_graph__env;

    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7 = hlds__inst_graph__InstGraphA_7;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8 = hlds__inst_graph__InstGraphB_8;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11 = hlds__inst_graph__V_11;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12 = hlds__inst_graph__W_12;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont = hlds__inst_graph__cont;
    (hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
    {
      MR_bool hlds__inst_graph__succeeded;
      MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];

      {
        hlds__inst_graph__corresponding_members_4_p_0(hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__TypeInfo_15_15, hlds__inst_graph__VarsA_9, hlds__inst_graph__VarsB_10, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13, &(hlds__inst_graph__env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14, hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2, &hlds__inst_graph__env);
      }
    }
  }
}

void MR_CALL 
hlds__inst_graph__two_graphs_corresponding_nodes_6_p_0(
  MR_Word hlds__inst_graph__InstGraphA_7,
  MR_Word hlds__inst_graph__InstGraphB_8,
  MR_Word hlds__inst_graph__A_9,
  MR_Word hlds__inst_graph__B_10,
  MR_Word * hlds__inst_graph__V_11,
  MR_Word * hlds__inst_graph__W_12,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__TypeInfo_15_15 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
    MR_Word hlds__inst_graph__V_13_13;
    MR_Word hlds__inst_graph__V_14_14;

    {
      hlds__inst_graph__V_13_13 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_15);
    }
    {
      hlds__inst_graph__V_14_14 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_15);
    }
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraphA_7, hlds__inst_graph__InstGraphB_8, hlds__inst_graph__V_13_13, hlds__inst_graph__V_14_14, hlds__inst_graph__A_9, hlds__inst_graph__B_10, hlds__inst_graph__V_11, hlds__inst_graph__W_12, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
    }
  }
}

void MR_CALL 
hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(
  MR_Word hlds__inst_graph__InstGraph_6,
  MR_Word hlds__inst_graph__A_7,
  MR_Word hlds__inst_graph__B_8,
  MR_Word * hlds__inst_graph__V_9,
  MR_Word * hlds__inst_graph__W_10,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__TypeInfo_15_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
    MR_Word hlds__inst_graph__V_18_18;
    MR_Word hlds__inst_graph__V_19_19;

    {
      hlds__inst_graph__V_18_18 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_20);
    }
    {
      hlds__inst_graph__V_19_19 = mercury__set__init_0_f_0(hlds__inst_graph__TypeInfo_15_20);
    }
    {
      hlds__inst_graph__corresponding_nodes_2_8_p_0(hlds__inst_graph__InstGraph_6, hlds__inst_graph__InstGraph_6, hlds__inst_graph__V_18_18, hlds__inst_graph__V_19_19, hlds__inst_graph__A_7, hlds__inst_graph__B_8, hlds__inst_graph__V_9, hlds__inst_graph__W_10, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3,
  MR_Box hlds__inst_graph__wrapper_arg_4,
  MR_Box * hlds__inst_graph__wrapper_arg_5)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__foldl_reachable2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5);
    }
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_20,
  MR_Word hlds__inst_graph__TypeInfo_for_U_21,
  MR_Word hlds__inst_graph__P_8,
  MR_Word hlds__inst_graph__InstGraph_9,
  MR_Word hlds__inst_graph__Vars_10,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_13,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_14,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_15,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_16)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_17_17;

    {
      hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 5) = ((MR_Box) (hlds__inst_graph__P_8));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_17_17, hlds__inst_graph__Vars_10, hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4,
  MR_Box hlds__inst_graph__wrapper_arg_5,
  MR_Box * hlds__inst_graph__wrapper_arg_6)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 7))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4, hlds__inst_graph__wrapper_arg_5, hlds__inst_graph__wrapper_arg_6);
    }
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_20,
  MR_Word hlds__inst_graph__TypeInfo_for_U_21,
  MR_Word hlds__inst_graph__P_8,
  MR_Word hlds__inst_graph__InstGraph_9,
  MR_Word hlds__inst_graph__Var_10,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_0_13,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc1_14,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_0_15,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc2_16)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_17_17;
    MR_Word hlds__inst_graph__Functors_33;
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc1_32_46;
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc2_33_47;
    MR_Word hlds__inst_graph__V_48_48;
    MR_Word hlds__inst_graph__V_49_49;
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box hlds__inst_graph__conv1_V_48_48;
    MR_Word hlds__inst_graph__V_34_34;

    {
      hlds__inst_graph__V_17_17 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_8, (MR_Integer) 1)));
    {
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_8), ((MR_Box) (hlds__inst_graph__Var_10)), hlds__inst_graph__STATE_VARIABLE_Acc1_0_13, &hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc2_0_15, &hlds__inst_graph__STATE_VARIABLE_Acc2_33_47);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_9, ((MR_Box) (hlds__inst_graph__Var_10)), &hlds__inst_graph__conv1_V_48_48);
    }
    hlds__inst_graph__V_48_48 = ((MR_Word) hlds__inst_graph__conv1_V_48_48);
    hlds__inst_graph__Functors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 0)));
    hlds__inst_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_48_48, (MR_Integer) 1)));
    {
      hlds__inst_graph__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable2_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 4) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_U_21));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 5) = ((MR_Box) (hlds__inst_graph__P_8));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 6) = ((MR_Box) (hlds__inst_graph__InstGraph_9));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_49_49, 7) = ((MR_Box) (hlds__inst_graph__V_17_17));
    }
    {
      mercury__map__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_20, hlds__inst_graph__TypeInfo_for_U_21, hlds__inst_graph__V_49_49, hlds__inst_graph__Functors_33, hlds__inst_graph__STATE_VARIABLE_Acc1_32_46, hlds__inst_graph__STATE_VARIABLE_Acc1_14, hlds__inst_graph__STATE_VARIABLE_Acc2_33_47, hlds__inst_graph__STATE_VARIABLE_Acc2_16);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__foldl_reachable_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), hlds__inst_graph__wrapper_arg_2, hlds__inst_graph__wrapper_arg_3);
    }
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_14,
  MR_Word hlds__inst_graph__P_6,
  MR_Word hlds__inst_graph__InstGraph_7,
  MR_Word hlds__inst_graph__Vars_8,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_10,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_11)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_12_12;

    {
      hlds__inst_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 4) = ((MR_Box) (hlds__inst_graph__P_6));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_12_12, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_12_12, hlds__inst_graph__Vars_8, hlds__inst_graph__STATE_VARIABLE_Acc_0_10, hlds__inst_graph__STATE_VARIABLE_Acc_11);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box hlds__inst_graph__wrapper_arg_3,
  MR_Box * hlds__inst_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;

    {
      hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__closure, (MR_Integer) 6))), ((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), hlds__inst_graph__wrapper_arg_3, hlds__inst_graph__wrapper_arg_4);
    }
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0(
  MR_Word hlds__inst_graph__TypeInfo_for_T_14,
  MR_Word hlds__inst_graph__P_6,
  MR_Word hlds__inst_graph__InstGraph_7,
  MR_Word hlds__inst_graph__Var_8,
  MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_0_10,
  MR_Box * hlds__inst_graph__STATE_VARIABLE_Acc_11)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__V_12_12;
    MR_Word hlds__inst_graph__Functors_23;
    MR_Box hlds__inst_graph__STATE_VARIABLE_Acc_23_32;
    MR_Word hlds__inst_graph__V_33_33;
    MR_Word hlds__inst_graph__V_34_34;
    void MR_CALL (* hlds__inst_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box hlds__inst_graph__conv1_V_33_33;
    MR_Word hlds__inst_graph__V_24_24;

    {
      hlds__inst_graph__V_12_12 = mercury__set__init_0_f_0((MR_Word) &hlds__inst_graph_scalar_common_1[0]);
    }
    hlds__inst_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__inst_graph__P_6, (MR_Integer) 1)));
    {
      hlds__inst_graph__func_0(((MR_Box) hlds__inst_graph__P_6), ((MR_Box) (hlds__inst_graph__Var_8)), hlds__inst_graph__STATE_VARIABLE_Acc_0_10, &hlds__inst_graph__STATE_VARIABLE_Acc_23_32);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_7, ((MR_Box) (hlds__inst_graph__Var_8)), &hlds__inst_graph__conv1_V_33_33);
    }
    hlds__inst_graph__V_33_33 = ((MR_Word) hlds__inst_graph__conv1_V_33_33);
    hlds__inst_graph__Functors_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 0)));
    hlds__inst_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_33_33, (MR_Integer) 1)));
    {
      hlds__inst_graph__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 3) = ((MR_Box) (hlds__inst_graph__TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 4) = ((MR_Box) (hlds__inst_graph__P_6));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 5) = ((MR_Box) (hlds__inst_graph__InstGraph_7));
      MR_hl_field(MR_mktag(0), hlds__inst_graph__V_34_34, 6) = ((MR_Box) (hlds__inst_graph__V_12_12));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__inst_graph_scalar_common_1[1], hlds__inst_graph__TypeInfo_for_T_14, hlds__inst_graph__V_34_34, hlds__inst_graph__Functors_23, hlds__inst_graph__STATE_VARIABLE_Acc_23_32, hlds__inst_graph__STATE_VARIABLE_Acc_11);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7 = ((MR_Word) (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7);
    {
      hlds__inst_graph__reachable_from_list_3_p_0_1(hlds__inst_graph__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
  void * hlds__inst_graph__env_ptr_arg)
{
  {
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * hlds__inst_graph__env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) hlds__inst_graph__env_ptr_arg;

    {
      *((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6) = (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
      {
        ((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont)((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
      }
    }
    {
      MR_Word hlds__inst_graph__Seen_17;

      {
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_17);
      }
      {
        hlds__inst_graph__descendant_2_4_p_0((hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4, hlds__inst_graph__Seen_17, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont, (hlds__inst_graph__env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0(
  MR_Word hlds__inst_graph__InstGraph_4,
  MR_Word hlds__inst_graph__Vars_5,
  MR_Word * hlds__inst_graph__Reachable_6,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s hlds__inst_graph__env;

    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4 = hlds__inst_graph__InstGraph_4;
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6 = hlds__inst_graph__Reachable_6;
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont = hlds__inst_graph__cont;
    (hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr = hlds__inst_graph__cont_env_ptr;
    {
      MR_bool hlds__inst_graph__succeeded;

      {
        mercury__list__member_2_p_1((MR_Word) &hlds__inst_graph_scalar_common_1[0], &(hlds__inst_graph__env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7, hlds__inst_graph__Vars_5, hlds__inst_graph__reachable_from_list_3_p_0_2, &hlds__inst_graph__env);
      }
    }
  }
}

void MR_CALL 
hlds__inst_graph__reachable_3_p_0(
  MR_Word hlds__inst_graph__HeadVar__1_1,
  MR_Word hlds__inst_graph__Var_2,
  MR_Word * hlds__inst_graph__HeadVar__3_3,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    MR_bool hlds__inst_graph__succeeded;

    *hlds__inst_graph__HeadVar__3_3 = hlds__inst_graph__Var_2;
    {
      hlds__inst_graph__cont(hlds__inst_graph__cont_env_ptr);
    }
    {
      MR_Word hlds__inst_graph__Seen_12;

      {
        mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_12);
      }
      {
        hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__HeadVar__1_1, hlds__inst_graph__Seen_12, hlds__inst_graph__Var_2, hlds__inst_graph__HeadVar__3_3, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
hlds__inst_graph__descendant_3_p_0(
  MR_Word hlds__inst_graph__InstGraph_4,
  MR_Word hlds__inst_graph__Var_5,
  MR_Word * hlds__inst_graph__Descendant_6,
  MR_Cont hlds__inst_graph__cont,
  void * hlds__inst_graph__cont_env_ptr)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__Seen_7;

    {
      mercury__set__init_1_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], &hlds__inst_graph__Seen_7);
    }
    {
      hlds__inst_graph__descendant_2_4_p_0(hlds__inst_graph__InstGraph_4, hlds__inst_graph__Seen_7, hlds__inst_graph__Var_5, hlds__inst_graph__Descendant_6, hlds__inst_graph__cont, hlds__inst_graph__cont_env_ptr);
    }
  }
}

void MR_CALL 
hlds__inst_graph__top_level_node_3_p_0(
  MR_Word hlds__inst_graph__InstGraph_4,
  MR_Word hlds__inst_graph__Var_5,
  MR_Word * hlds__inst_graph__TopLevel_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__inst_graph__succeeded;
        MR_Word hlds__inst_graph__MaybeParent_8;
        MR_Word hlds__inst_graph__V_10_10;
        MR_Box hlds__inst_graph__conv0_V_10_10;
        MR_Word hlds__inst_graph__V_7_7;

        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__inst_graph_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__inst_graph__InstGraph_4, ((MR_Box) (hlds__inst_graph__Var_5)), &hlds__inst_graph__conv0_V_10_10);
        }
        hlds__inst_graph__V_10_10 = ((MR_Word) hlds__inst_graph__conv0_V_10_10);
        hlds__inst_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 0)));
        hlds__inst_graph__MaybeParent_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_10_10, (MR_Integer) 1)));
        if ((hlds__inst_graph__MaybeParent_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__inst_graph__TopLevel_6 = hlds__inst_graph__Var_5;
        else
          {
            MR_Word hlds__inst_graph__Parent_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__inst_graph__MaybeParent_8, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word hlds__inst_graph__Var__tmp_copy_5 = hlds__inst_graph__Parent_9;

              hlds__inst_graph__Var_5 = hlds__inst_graph__Var__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__inst_graph__set_parent_4_p_0(
  MR_Word hlds__inst_graph__Parent_5,
  MR_Word hlds__inst_graph__Child_6,
  MR_Word hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11,
  MR_Word * hlds__inst_graph__STATE_VARIABLE_InstGraph_12)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__TypeInfo_20_20 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
    MR_Word hlds__inst_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
    MR_Word hlds__inst_graph__Functors_8;
    MR_Word hlds__inst_graph__MaybeParent0_9;
    MR_Word hlds__inst_graph__V_13_13;
    MR_Box hlds__inst_graph__conv0_V_13_13;

    {
      mercury__map__lookup_3_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, ((MR_Box) (hlds__inst_graph__Child_6)), &hlds__inst_graph__conv0_V_13_13);
    }
    hlds__inst_graph__V_13_13 = ((MR_Word) hlds__inst_graph__conv0_V_13_13);
    hlds__inst_graph__Functors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 0)));
    hlds__inst_graph__MaybeParent0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__inst_graph__V_13_13, (MR_Integer) 1)));
    if ((hlds__inst_graph__MaybeParent0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__inst_graph__V_17_17;
        MR_Word hlds__inst_graph__V_19_19;

        {
          hlds__inst_graph__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__inst_graph__V_19_19, 0) = ((MR_Box) (hlds__inst_graph__Parent_5));
        }
        {
          hlds__inst_graph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 0) = ((MR_Box) (hlds__inst_graph__Functors_8));
          MR_hl_field(MR_mktag(0), hlds__inst_graph__V_17_17, 1) = ((MR_Box) (hlds__inst_graph__V_19_19));
        }
        {
          mercury__map__det_update_4_p_0(hlds__inst_graph__TypeInfo_20_20, hlds__inst_graph__TypeCtorInfo_21_21, ((MR_Box) (hlds__inst_graph__Child_6)), ((MR_Box) (hlds__inst_graph__V_17_17)), hlds__inst_graph__STATE_VARIABLE_InstGraph_0_11, hlds__inst_graph__STATE_VARIABLE_InstGraph_12);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.inst_graph", (MR_String) "predicate \140hlds.inst_graph.set_parent\'/4", (MR_String) "node already has parent");
          return;
        }
      }
  }
}

static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
  MR_Box hlds__inst_graph__closure_arg,
  MR_Box hlds__inst_graph__wrapper_arg_1,
  MR_Box hlds__inst_graph__wrapper_arg_2,
  MR_Box * hlds__inst_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__inst_graph__closure = hlds__inst_graph__closure_arg;
    MR_Word hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7;

    {
      hlds__inst_graph__init_var_3_p_0(((MR_Word) hlds__inst_graph__wrapper_arg_1), ((MR_Word) hlds__inst_graph__wrapper_arg_2), &hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7);
    }
    *hlds__inst_graph__wrapper_arg_3 = ((MR_Box) (hlds__inst_graph__conv0_STATE_VARIABLE_InstGraph_7));
  }
}

void MR_CALL 
hlds__inst_graph__init_2_p_0(
  MR_Word hlds__inst_graph__Vars_3,
  MR_Word * hlds__inst_graph__InstGraph_4)
{
  {
    MR_bool hlds__inst_graph__succeeded;
    MR_Word hlds__inst_graph__TypeInfo_7_7 = (MR_Word) &hlds__inst_graph_scalar_common_1[0];
    MR_Word hlds__inst_graph__InstGraph0_5;
    MR_Box hlds__inst_graph__conv1_InstGraph_4;

    {
      mercury__map__init_1_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, &hlds__inst_graph__InstGraph0_5);
    }
    {
      mercury__list__foldl_4_p_0(hlds__inst_graph__TypeInfo_7_7, (MR_Word) &hlds__inst_graph_scalar_common_2[0], (MR_Word) &hlds__inst_graph_scalar_common_2[2], hlds__inst_graph__Vars_3, ((MR_Box) (hlds__inst_graph__InstGraph0_5)), &hlds__inst_graph__conv1_InstGraph_4);
    }
    *hlds__inst_graph__InstGraph_4 = ((MR_Word) hlds__inst_graph__conv1_InstGraph_4);
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__inst_graph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.inst_graph. */
