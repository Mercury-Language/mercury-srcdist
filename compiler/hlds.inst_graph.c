/*
** Automatically generated from `inst_graph.m'
** by the Mercury compiler,
** version DEV
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


// :- module hlds.inst_graph.
// :- implementation.

/*
INIT mercury__hlds__inst_graph__init
ENDINIT
*/

#include "hlds.inst_graph.mih"


#include "hlds.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"



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
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__Var_22;
  MR_Word hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__Var_23;
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13;
  MR_Box hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14;
};

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

struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s {
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4;
  MR_Word * hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6;
  MR_Cont hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont;
  void * hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr;
  MR_Word hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
  MR_Box hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7;
};

struct hlds__inst_graph__descendant_2_4_p_0_env_0_s {
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6;
  MR_Word * hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8;
  MR_Cont hlds__inst_graph__descendant_2_4_p_0_env_0__cont;
  void * hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr;
  MR_bool hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
  MR_Word hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11;
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11;
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12;
  MR_Box hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13;
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

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Seen_12,
  MR_Word LambdaHeadVar__1_38,
  MR_Word LambdaHeadVar__2_39,
  MR_Box LambdaHeadVar__3_40,
  MR_Box * LambdaHeadVar__4_41,
  MR_Box LambdaHeadVar__5_42,
  MR_Box * LambdaHeadVar__6_43);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Seen_12,
  MR_Word LambdaHeadVar__2_39,
  MR_Box LambdaHeadVar__3_40,
  MR_Box * LambdaHeadVar__4_41,
  MR_Box LambdaHeadVar__5_42,
  MR_Box * LambdaHeadVar__6_43);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Seen_12,
  MR_Word LambdaHeadVar__1_45,
  MR_Box LambdaHeadVar__2_46,
  MR_Box * LambdaHeadVar__3_47,
  MR_Box LambdaHeadVar__4_48,
  MR_Box * LambdaHeadVar__5_49);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Seen_10,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Box LambdaHeadVar__3_29,
  MR_Box * LambdaHeadVar__4_30);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Seen_10,
  MR_Word LambdaHeadVar__2_28,
  MR_Box LambdaHeadVar__3_29,
  MR_Box * LambdaHeadVar__4_30);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Seen_10,
  MR_Word LambdaHeadVar__1_32,
  MR_Box LambdaHeadVar__2_33,
  MR_Box * LambdaHeadVar__3_34);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(
  MR_Word Renaming_14,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word LambdaHeadVar__3_29,
  MR_Word * LambdaHeadVar__4_30);

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(
  MR_Word Renaming_14,
  MR_Word LambdaHeadVar__1_32,
  MR_Word * LambdaHeadVar__2_33);

static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
  MR_Word VarSet_5,
  MR_Word Var_6);

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
  MR_Word VarSet_6,
  MR_Word ConsId_7,
  MR_Word Args_8);

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
  MR_Word VarSet_6,
  MR_Word Var_7,
  MR_Word Node_8);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Var_11,
  MR_Word Seen_12,
  MR_Box STATE_VARIABLE_Acc1_0_28,
  MR_Box * STATE_VARIABLE_Acc1_29,
  MR_Box STATE_VARIABLE_Acc2_0_30,
  MR_Box * STATE_VARIABLE_Acc2_31);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Var_9,
  MR_Word Seen_10,
  MR_Box STATE_VARIABLE_Acc_0_21,
  MR_Box * STATE_VARIABLE_Acc_22);

static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_InstGraph_0_6,
  MR_Word * STATE_VARIABLE_InstGraph_7);

static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
  MR_Word InstGraphA_1,
  MR_Word InstGraphB_2,
  MR_Word SeenA0_3,
  MR_Word SeenB0_4,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
  MR_Word InstGraph_5,
  MR_Word Seen_6,
  MR_Word Var_7,
  MR_Word * Descendant_8,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
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
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_10[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__inst_graph_scalar_common_13[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_graph_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2)),
    ((MR_Box) (&hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 hlds__inst_graph____vpti_pred_3__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__inst_graph____vpti_pred_5__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_graph__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_graph__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__inst_graph____Unify____inst_graph_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____inst_graph_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "inst_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0),
  (MR_PseudoTypeInfo) (&hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__inst_graph__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__inst_graph__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0)
};

static const MR_ConstString hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0[4] = {
  (MR_String) "interface_inst_graph",
  (MR_String) "interface_vars",
  (MR_String) "interface_varset",
  (MR_String) "implementation_inst_graph"
};

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0 = {
  (MR_String) "inst_graph_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__inst_graph__hlds__inst_graph__field_types_inst_graph_info_0_0,
  hlds__inst_graph__hlds__inst_graph__field_names_inst_graph_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____inst_graph_info_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____inst_graph_info_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "inst_graph_info",
  {     hlds__inst_graph__hlds__inst_graph__du_name_ordered_inst_graph_info_0 },
  {     hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_inst_graph_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__inst_graph__hlds__inst_graph__functor_number_map_inst_graph_info_0
};

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0 = {
  (MR_String) "top_level",
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

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__inst_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1 = {
  (MR_String) "parent",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__inst_graph__hlds__inst_graph__field_types_maybe_parent_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_maybe_parent_0_1
};

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_maybe_parent_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____maybe_parent_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____maybe_parent_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "maybe_parent",
  {     hlds__inst_graph__hlds__inst_graph__du_name_ordered_maybe_parent_0 },
  {     hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_maybe_parent_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__inst_graph__hlds__inst_graph__functor_number_map_maybe_parent_0
};

static const MR_FA_TypeInfo_Struct2 hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&hlds__inst_graph__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__inst_graph__hlds__inst_graph__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__inst_graph__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_maybe_parent_0)
};

static const MR_DuFunctorDesc hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0 = {
  (MR_String) "node",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__inst_graph__hlds__inst_graph__field_types_node_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0[1] = {
  &hlds__inst_graph__hlds__inst_graph__du_functor_desc_node_0_0
};

static const MR_DuPtagLayout hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_graph__hlds__inst_graph__du_stag_ordered_node_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_graph____Unify____node_0_0_10001)),
  ((MR_Box) (hlds__inst_graph____Compare____node_0_0_10001)),
  (MR_String) "hlds.inst_graph",
  (MR_String) "node",
  {     hlds__inst_graph__hlds__inst_graph__du_name_ordered_node_0 },
  {     hlds__inst_graph__hlds__inst_graph__du_ptag_ordered_node_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__inst_graph__hlds__inst_graph__functor_number_map_node_0
};

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Seen_12,
  MR_Word LambdaHeadVar__1_38,
  MR_Word LambdaHeadVar__2_39,
  MR_Box LambdaHeadVar__3_40,
  MR_Box * LambdaHeadVar__4_41,
  MR_Box LambdaHeadVar__5_42,
  MR_Box * LambdaHeadVar__6_43)
{
  hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(TypeInfo_for_T_63, TypeInfo_for_U_64, P_9, InstGraph_10, Seen_12, LambdaHeadVar__2_39, LambdaHeadVar__3_40, LambdaHeadVar__4_41, LambdaHeadVar__5_42, LambdaHeadVar__6_43);
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4, wrapper_arg_5);
  }
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Seen_12,
  MR_Word LambdaHeadVar__2_39,
  MR_Box LambdaHeadVar__3_40,
  MR_Box * LambdaHeadVar__4_41,
  MR_Box LambdaHeadVar__5_42,
  MR_Box * LambdaHeadVar__6_43)
{
  {
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_52_95_95_49_95_95_91_54_93_95_48_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TypeInfo_for_T_63));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (TypeInfo_for_U_64));
      MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (P_9));
      MR_hl_field(MR_mktag(0), Var_44, 6) = ((MR_Box) (InstGraph_10));
      MR_hl_field(MR_mktag(0), Var_44, 7) = ((MR_Box) (Seen_12));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), TypeInfo_for_T_63, TypeInfo_for_U_64, Var_44, LambdaHeadVar__2_39, LambdaHeadVar__3_40, LambdaHeadVar__4_41, LambdaHeadVar__5_42, LambdaHeadVar__6_43);
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__298__1_10_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Seen_12,
  MR_Word LambdaHeadVar__1_45,
  MR_Box LambdaHeadVar__2_46,
  MR_Box * LambdaHeadVar__3_47,
  MR_Box LambdaHeadVar__4_48,
  MR_Box * LambdaHeadVar__5_49)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), ((MR_Box) (LambdaHeadVar__1_45)), Seen_12);
    if (succeeded)
    {
      *LambdaHeadVar__3_47 = LambdaHeadVar__2_46;
      *LambdaHeadVar__5_49 = LambdaHeadVar__4_48;
    }
    else
    {
      MR_Word Var_50;

      Var_50 = mercury__set__insert_2_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), Seen_12, ((MR_Box) (LambdaHeadVar__1_45)));
      hlds__inst_graph__foldl_reachable_aux2_8_p_0(TypeInfo_for_T_63, TypeInfo_for_U_64, P_9, InstGraph_10, LambdaHeadVar__1_45, Var_50, LambdaHeadVar__2_46, LambdaHeadVar__3_47, LambdaHeadVar__4_48, LambdaHeadVar__5_49);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Seen_10,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Box LambdaHeadVar__3_29,
  MR_Box * LambdaHeadVar__4_30)
{
  hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(TypeInfo_for_T_44, P_7, InstGraph_8, Seen_10, LambdaHeadVar__2_28, LambdaHeadVar__3_29, LambdaHeadVar__4_30);
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

static void MR_CALL 
hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Seen_10,
  MR_Word LambdaHeadVar__2_28,
  MR_Box LambdaHeadVar__3_29,
  MR_Box * LambdaHeadVar__4_30)
{
  {
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__inst_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_55_95_95_49_95_95_91_53_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TypeInfo_for_T_44));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (P_7));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (InstGraph_8));
      MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (Seen_10));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), TypeInfo_for_T_44, Var_31, LambdaHeadVar__2_28, LambdaHeadVar__3_29, LambdaHeadVar__4_30);
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__269__1_7_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Seen_10,
  MR_Word LambdaHeadVar__1_32,
  MR_Box LambdaHeadVar__2_33,
  MR_Box * LambdaHeadVar__3_34)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), ((MR_Box) (LambdaHeadVar__1_32)), Seen_10);
    if (succeeded)
      *LambdaHeadVar__3_34 = LambdaHeadVar__2_33;
    else
    {
      MR_Word Var_35;

      Var_35 = mercury__set__insert_2_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), Seen_10, ((MR_Box) (LambdaHeadVar__1_32)));
      hlds__inst_graph__foldl_reachable_aux_6_p_0(TypeInfo_for_T_44, P_7, InstGraph_8, LambdaHeadVar__1_32, Var_35, LambdaHeadVar__2_33, LambdaHeadVar__3_34);
    }
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_33;

    hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_33);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(
  MR_Word Renaming_14,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word LambdaHeadVar__3_29,
  MR_Word * LambdaHeadVar__4_30)
{
  {
    MR_Word Functors0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, (MR_Integer) 0))));
    MR_Word MaybeParent_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, (MR_Integer) 1))));
    MR_Word Functors_23;
    MR_Word Node_24;
    MR_Word Var_25;
    MR_Word Var_31;
    MR_Box conv1_Var_25;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Renaming_14));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[1]), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_31, Functors0_19, &Functors_23);
    {
      Node_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Node_24, 0) = ((MR_Box) (Functors_23));
      MR_hl_field(MR_mktag(0), Node_24, 1) = ((MR_Box) (MaybeParent_20));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph_scalar_common_1[0]), Renaming_14, ((MR_Box) (LambdaHeadVar__1_27)), &conv1_Var_25);
    Var_25 = ((MR_Word) (conv1_Var_25));
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (Var_25)), ((MR_Box) (Node_24)), LambdaHeadVar__3_29, LambdaHeadVar__4_30);
  }
}

static void MR_CALL 
hlds__inst_graph__IntroducedFrom__pred__merge__367__1_3_p_0(
  MR_Word Renaming_14,
  MR_Word LambdaHeadVar__1_32,
  MR_Word * LambdaHeadVar__2_33)
{
  mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph_scalar_common_1[0]), LambdaHeadVar__1_32, Renaming_14, LambdaHeadVar__2_33);
}

void MR_CALL 
hlds__inst_graph____Compare____node_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        hlds__inst_graph____Compare____maybe_parent_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0(
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
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0(
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
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0(
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
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&hlds__inst_graph_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
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
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__inst_graph_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__inst_graph_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&hlds__inst_graph_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph__dump_var_4_p_0(
  MR_Word VarSet_5,
  MR_Word Var_6)
{
  mercury__term_io__write_variable_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, VarSet_5);
}

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__dump_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__inst_graph__dump_functor_5_p_0(
  MR_Word VarSet_6,
  MR_Word ConsId_7,
  MR_Word Args_8)
{
  {
    MR_String Var_16;

    mercury__io__write_string_3_p_0((MR_String) "%%\t");
    Var_16 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_7);
    mercury__io__write_string_3_p_0(Var_16);
    if (!((Args_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_21;

      mercury__io__write_char_3_p_0((MR_Char) 40);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__inst_graph__dump_functor_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (VarSet_6));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), Args_8, (MR_String) ", ", Var_21);
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__dump_functor_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__inst_graph__dump_node_5_p_0(
  MR_Word VarSet_6,
  MR_Word Var_7,
  MR_Word Node_8)
{
  {
    MR_Word Functors_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Node_8, (MR_Integer) 0))));
    MR_Word MaybeParent_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Node_8, (MR_Integer) 1))));
    MR_Word Var_22;
    MR_Box conv0_STATE_VARIABLE_IO_14;

    mercury__io__write_string_3_p_0((MR_String) "%% ");
    mercury__term_io__write_variable_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, VarSet_6);
    mercury__io__write_string_3_p_0((MR_String) ": ");
    if (!((MaybeParent_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Parent_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParent_11, (MR_Integer) 0))));

      mercury__term_io__write_variable_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Parent_12, VarSet_6);
    }
    mercury__io__nl_2_p_0();
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__inst_graph__dump_node_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (VarSet_6));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, Functors_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4, wrapper_arg_5, wrapper_arg_6);
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux2_8_p_0(
  MR_Word TypeInfo_for_T_63,
  MR_Word TypeInfo_for_U_64,
  MR_Word P_9,
  MR_Word InstGraph_10,
  MR_Word Var_11,
  MR_Word Seen_12,
  MR_Box STATE_VARIABLE_Acc1_0_28,
  MR_Box * STATE_VARIABLE_Acc1_29,
  MR_Box STATE_VARIABLE_Acc2_0_30,
  MR_Box * STATE_VARIABLE_Acc2_31)
{
  {
    MR_Word Functors_15;
    MR_Box STATE_VARIABLE_Acc1_32_32;
    MR_Box STATE_VARIABLE_Acc2_33_33;
    MR_Word Var_34;
    MR_Word Var_35;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
    MR_Box conv1_Var_34;

    func_0(((MR_Box) (P_9)), ((MR_Box) (Var_11)), STATE_VARIABLE_Acc1_0_28, &STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc2_0_30, &STATE_VARIABLE_Acc2_33_33);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph_10, ((MR_Box) (Var_11)), &conv1_Var_34);
    Var_34 = ((MR_Word) (conv1_Var_34));
    Functors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux2_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (TypeInfo_for_T_63));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (TypeInfo_for_U_64));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (P_9));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (InstGraph_10));
      MR_hl_field(MR_mktag(0), Var_35, 7) = ((MR_Box) (Seen_12));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), TypeInfo_for_T_63, TypeInfo_for_U_64, Var_35, Functors_15, STATE_VARIABLE_Acc1_32_32, STATE_VARIABLE_Acc1_29, STATE_VARIABLE_Acc2_33_33, STATE_VARIABLE_Acc2_31);
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_aux_6_p_0(
  MR_Word TypeInfo_for_T_44,
  MR_Word P_7,
  MR_Word InstGraph_8,
  MR_Word Var_9,
  MR_Word Seen_10,
  MR_Box STATE_VARIABLE_Acc_0_21,
  MR_Box * STATE_VARIABLE_Acc_22)
{
  {
    MR_Word Functors_12;
    MR_Box STATE_VARIABLE_Acc_23_23;
    MR_Word Var_24;
    MR_Word Var_25;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
    MR_Box conv1_Var_24;

    func_0(((MR_Box) (P_7)), ((MR_Box) (Var_9)), STATE_VARIABLE_Acc_0_21, &STATE_VARIABLE_Acc_23_23);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph_8, ((MR_Box) (Var_9)), &conv1_Var_24);
    Var_24 = ((MR_Word) (conv1_Var_24));
    Functors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_aux_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TypeInfo_for_T_44));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (P_7));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (InstGraph_8));
      MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (Seen_10));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), TypeInfo_for_T_44, Var_25, Functors_12, STATE_VARIABLE_Acc_23_23, STATE_VARIABLE_Acc_22);
  }
}

static void MR_CALL 
hlds__inst_graph__init_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_InstGraph_0_6,
  MR_Word * STATE_VARIABLE_InstGraph_7)
{
  {
    MR_Word Var_8;
    MR_Word Var_10;

    Var_10 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]));
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (Var_4)), ((MR_Box) (Var_8)), STATE_VARIABLE_InstGraph_0_6, STATE_VARIABLE_InstGraph_7);
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (HeadVar__2_2));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__implementation_inst_graph_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (Var_7));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__interface_varset_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (Var_7));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__interface_vars_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (Var_7));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__interface_inst_graph_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__inst_graph__inst_graph_info_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word InstGraph_2;
    MR_Word VarSet_3;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_3);
    mercury__map__init_1_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), &InstGraph_2);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (InstGraph_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (VarSet_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) (InstGraph_2));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
hlds__inst_graph__dump_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__dump_node_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
hlds__inst_graph__dump_4_p_0(
  MR_Word InstGraph_5,
  MR_Word VarSet_6)
{
  {
    MR_Word Var_10;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__inst_graph__dump_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (VarSet_6));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_10, InstGraph_5, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
hlds__inst_graph__merge_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__4_30;

    hlds__inst_graph__IntroducedFrom__pred__merge__365__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_30);
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_30));
  }
}

void MR_CALL 
hlds__inst_graph__merge_7_p_0(
  MR_Word InstGraph0_8,
  MR_Word VarSet0_9,
  MR_Word NewInstGraph_10,
  MR_Word NewVarSet_11,
  MR_Word * InstGraph_12,
  MR_Word * VarSet_13,
  MR_Word * Renaming_14)
{
  {
    MR_Word Var_26;
    MR_Box conv1_InstGraph_12;

    mercury__varset__merge_renaming_without_names_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_9, NewVarSet_11, VarSet_13, Renaming_14);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (hlds__inst_graph__merge_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (*Renaming_14));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), (MR_Word) (&hlds__inst_graph_scalar_common_2[0]), Var_26, NewInstGraph_10, ((MR_Box) (InstGraph0_8)), &conv1_InstGraph_12);
    *InstGraph_12 = ((MR_Word) (conv1_InstGraph_12));
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13));
    (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14));
    hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24 = (MR_Word) (&hlds__inst_graph_scalar_common_1[0]);
    (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__Var_22 = mercury__set__init_0_f_0((env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__Var_23 = mercury__set__init_0_f_0((env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__TypeInfo_15_24);
    hlds__inst_graph__corresponding_nodes_2_8_p_0((env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__Var_22, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__Var_23, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__A_13, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__B_14, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont, (env_ptr)->hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(
  MR_Word InstGraphA_7,
  MR_Word InstGraphB_8,
  MR_Word VarsA_9,
  MR_Word VarsB_10,
  MR_Word * V_11,
  MR_Word * W_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0_s env;

    (env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphA_7 = InstGraphA_7;
    (env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__InstGraphB_8 = InstGraphB_8;
    (env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__V_11 = V_11;
    (env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__W_12 = W_12;
    (env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont = cont;
    (env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__cont_env_ptr = cont_env_ptr;
    hlds__inst_graph__corresponding_members_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph_scalar_common_1[0]), VarsA_9, VarsB_10, &(env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv1_A_13, &(env).hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_env_0__conv0_B_14, hlds__inst_graph__corresponding_nodes_from_lists_6_p_0_2, &env);
  }
}

void MR_CALL 
hlds__inst_graph__two_graphs_corresponding_nodes_6_p_0(
  MR_Word InstGraphA_7,
  MR_Word InstGraphB_8,
  MR_Word A_9,
  MR_Word B_10,
  MR_Word * V_11,
  MR_Word * W_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Word Var_13;
    MR_Word Var_14;

    Var_13 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]));
    Var_14 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]));
    hlds__inst_graph__corresponding_nodes_2_8_p_0(InstGraphA_7, InstGraphB_8, Var_13, Var_14, A_9, B_10, V_11, W_12, cont, cont_env_ptr);
  }
}

void MR_CALL 
hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(
  MR_Word InstGraph_6,
  MR_Word A_7,
  MR_Word B_8,
  MR_Word * V_9,
  MR_Word * W_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Word Var_18;
    MR_Word Var_19;

    Var_18 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]));
    Var_19 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]));
    hlds__inst_graph__corresponding_nodes_2_8_p_0(InstGraph_6, InstGraph_6, Var_18, Var_19, A_7, B_8, V_9, W_10, cont, cont_env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29));
    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30));
    hlds__inst_graph__corresponding_nodes_2_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31));
    hlds__inst_graph__corresponding_nodes_2_8_p_0_3(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    hlds__inst_graph__corresponding_nodes_2_8_p_0((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_31, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_6(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37));
    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33));
    hlds__inst_graph__corresponding_nodes_2_8_p_0_5(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_5(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    hlds__inst_graph__corresponding_nodes_2_8_p_0((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__V0_37, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_33, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_TRUE;
    {
      (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25);
      if ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
        mercury__list__member_2_p_1((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv4_V0_31, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_4, env_ptr);
      else
      {
        MR_Word ArgsB_32;
        MR_Box conv5_ArgsB_32;

        (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, ((MR_Box) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ConsId_29)), &conv5_ArgsB_32);
        if ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
        {
          ArgsB_32 = ((MR_Word) (conv5_ArgsB_32));
          (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = MR_TRUE;
        }
        if ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
          hlds__inst_graph__corresponding_members_4_p_0((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsA_30, ArgsB_32, &(env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv7_V0_37, &(env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv6_W0_33, hlds__inst_graph__corresponding_nodes_2_8_p_0_6, env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_8(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0___ConsId_34 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34));
    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38));
    hlds__inst_graph__corresponding_nodes_2_8_p_0_7(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_10(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39 = ((MR_Word) ((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39));
    hlds__inst_graph__corresponding_nodes_2_8_p_0_9(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_9(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    hlds__inst_graph__corresponding_nodes_2_8_p_0((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__W0_39, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0_7(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s *) (env_ptr_arg);

    mercury__list__member_2_p_1((env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, &(env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv10_W0_39, (env_ptr)->hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_10, env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__corresponding_nodes_2_8_p_0(
  MR_Word InstGraphA_1,
  MR_Word InstGraphB_2,
  MR_Word SeenA0_3,
  MR_Word SeenB0_4,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0_s env;

    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1 = InstGraphA_1;
    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2 = InstGraphB_2;
    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5 = A_5;
    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6 = B_6;
    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7 = HeadVar__7_7;
    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8 = HeadVar__8_8;
    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont = cont;
    (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr = cont_env_ptr;
    *((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__7_7) = (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5;
    *((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__HeadVar__8_8) = (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6;
    ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont)((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cont_env_ptr);
    {
      MR_Word TypeCtorInfo_42_42;
      MR_Word FunctorsA_23;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Box conv0_Var_35;
      MR_Word Var_24;
      MR_Box conv1_Var_36;
      MR_Word Var_26;
      MR_Word TypeCtorInfo_43_43;
      MR_Word TypeInfo_44_44;

      (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), ((MR_Box) ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), SeenA0_3);
      if ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
        (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), ((MR_Box) ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), SeenB0_4);
      (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded = !((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded);
      if ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__succeeded)
      {
        (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41 = (MR_Word) (&hlds__inst_graph_scalar_common_1[0]);
        TypeCtorInfo_42_42 = (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0);
        mercury__map__lookup_3_p_0((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, TypeCtorInfo_42_42, (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphA_1, ((MR_Box) ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)), &conv0_Var_35);
        Var_35 = ((MR_Word) (conv0_Var_35));
        FunctorsA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
        mercury__map__lookup_3_p_0((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, TypeCtorInfo_42_42, (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__InstGraphB_2, ((MR_Box) ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)), &conv1_Var_36);
        Var_36 = ((MR_Word) (conv1_Var_36));
        (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
        (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenA_27 = mercury__set__insert_2_f_0((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, SeenA0_3, ((MR_Box) ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__A_5)));
        (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__SeenB_28 = mercury__set__insert_2_f_0((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__TypeInfo_41_41, SeenB0_4, ((MR_Box) ((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__B_6)));
        (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0 = MR_FALSE;
        TypeCtorInfo_43_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
        TypeInfo_44_44 = (MR_Word) (&hlds__inst_graph_scalar_common_1[1]);
        mercury__map__member_3_p_0(TypeCtorInfo_43_43, TypeInfo_44_44, FunctorsA_23, &(env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv3_ConsId_29, &(env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv2_ArgsA_30, hlds__inst_graph__corresponding_nodes_2_8_p_0_2, &env);
        if (!((env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__cond_0))
          mercury__map__member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), (env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__FunctorsB_25, &(env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv9__ConsId_34, &(env).hlds__inst_graph__corresponding_nodes_2_8_p_0_env_0__conv8_ArgsB_38, hlds__inst_graph__corresponding_nodes_2_8_p_0_8, &env);
      }
    }
  }
}

void MR_CALL 
hlds__inst_graph__corresponding_members_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * A_3,
  MR_Box * B_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_17;
    MR_Box Var_18;
    MR_Word Var_19;
    MR_Box Var_20;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_18 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        *A_3 = Var_18;
        *B_4 = Var_20;
        cont(cont_env_ptr);
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_17;
          MR_Word next_value_of_HeadVar__2_2 = Var_19;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__foldl_reachable2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4, wrapper_arg_5);
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list2_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_U_21,
  MR_Word P_8,
  MR_Word InstGraph_9,
  MR_Word Vars_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  {
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list2_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (TypeInfo_for_U_21));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (P_8));
      MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (InstGraph_9));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), TypeInfo_for_T_20, TypeInfo_for_U_21, Var_17, Vars_10, STATE_VARIABLE_Acc1_0_13, STATE_VARIABLE_Acc1_14, STATE_VARIABLE_Acc2_0_15, STATE_VARIABLE_Acc2_16);
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__294__1_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4, wrapper_arg_5, wrapper_arg_6);
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable2_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_U_21,
  MR_Word P_8,
  MR_Word InstGraph_9,
  MR_Word Var_10,
  MR_Box STATE_VARIABLE_Acc1_0_13,
  MR_Box * STATE_VARIABLE_Acc1_14,
  MR_Box STATE_VARIABLE_Acc2_0_15,
  MR_Box * STATE_VARIABLE_Acc2_16)
{
  {
    MR_Word Var_17;
    MR_Word Functors_33;
    MR_Box STATE_VARIABLE_Acc1_32_46;
    MR_Box STATE_VARIABLE_Acc2_33_47;
    MR_Word Var_48;
    MR_Word Var_49;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_Var_48;

    Var_17 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
    func_0(((MR_Box) (P_8)), ((MR_Box) (Var_10)), STATE_VARIABLE_Acc1_0_13, &STATE_VARIABLE_Acc1_32_46, STATE_VARIABLE_Acc2_0_15, &STATE_VARIABLE_Acc2_33_47);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph_9, ((MR_Box) (Var_10)), &conv1_Var_48);
    Var_48 = ((MR_Word) (conv1_Var_48));
    Functors_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable2_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (TypeInfo_for_U_21));
      MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (P_8));
      MR_hl_field(MR_mktag(0), Var_49, 6) = ((MR_Box) (InstGraph_9));
      MR_hl_field(MR_mktag(0), Var_49, 7) = ((MR_Box) (Var_17));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), TypeInfo_for_T_20, TypeInfo_for_U_21, Var_49, Functors_33, STATE_VARIABLE_Acc1_32_46, STATE_VARIABLE_Acc1_14, STATE_VARIABLE_Acc2_33_47, STATE_VARIABLE_Acc2_16);
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__foldl_reachable_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable_from_list_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word P_6,
  MR_Word InstGraph_7,
  MR_Word Vars_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_from_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (P_6));
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (InstGraph_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), TypeInfo_for_T_14, Var_12, Vars_8, STATE_VARIABLE_Acc_0_10, STATE_VARIABLE_Acc_11);
  }
}

static void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__267__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), wrapper_arg_3, wrapper_arg_4);
  }
}

void MR_CALL 
hlds__inst_graph__foldl_reachable_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word P_6,
  MR_Word InstGraph_7,
  MR_Word Var_8,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  {
    MR_Word Var_12;
    MR_Word Functors_23;
    MR_Box STATE_VARIABLE_Acc_23_32;
    MR_Word Var_33;
    MR_Word Var_34;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Var_33;

    Var_12 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));
    func_0(((MR_Box) (P_6)), ((MR_Box) (Var_8)), STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_23_32);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph_7, ((MR_Box) (Var_8)), &conv1_Var_33);
    Var_33 = ((MR_Word) (conv1_Var_33));
    Functors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&hlds__inst_graph_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (hlds__inst_graph__foldl_reachable_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (P_6));
      MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (InstGraph_7));
      MR_hl_field(MR_mktag(0), Var_34, 6) = ((MR_Box) (Var_12));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), TypeInfo_for_T_14, Var_34, Functors_23, STATE_VARIABLE_Acc_23_32, STATE_VARIABLE_Acc_11);
  }
}

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7 = ((MR_Word) ((env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7));
    hlds__inst_graph__reachable_from_list_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s *) (env_ptr_arg);

    {
      *((env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6) = (env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7;
      ((env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont)((env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
    }
    {
      MR_Word Seen_17;

      mercury__set__init_1_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), &Seen_17);
      hlds__inst_graph__descendant_2_4_p_0((env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4, Seen_17, (env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Var_7, (env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6, (env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont, (env_ptr)->hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
hlds__inst_graph__reachable_from_list_3_p_0(
  MR_Word InstGraph_4,
  MR_Word Vars_5,
  MR_Word * Reachable_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__inst_graph__reachable_from_list_3_p_0_env_0_s env;

    (env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__InstGraph_4 = InstGraph_4;
    (env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__Reachable_6 = Reachable_6;
    (env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont = cont;
    (env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__list__member_2_p_1((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), &(env).hlds__inst_graph__reachable_from_list_3_p_0_env_0__conv0_Var_7, Vars_5, hlds__inst_graph__reachable_from_list_3_p_0_2, &env);
  }
}

void MR_CALL 
hlds__inst_graph__reachable_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    *HeadVar__3_3 = Var_2;
    cont(cont_env_ptr);
    {
      MR_Word Seen_12;

      mercury__set__init_1_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), &Seen_12);
      hlds__inst_graph__descendant_2_4_p_0(HeadVar__1_1, Seen_12, Var_2, HeadVar__3_3, cont, cont_env_ptr);
    }
  }
}

void MR_CALL 
hlds__inst_graph__descendant_3_p_0(
  MR_Word InstGraph_4,
  MR_Word Var_5,
  MR_Word * Descendant_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Word Seen_7;

    mercury__set__init_1_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), &Seen_7);
    hlds__inst_graph__descendant_2_4_p_0(InstGraph_4, Seen_7, Var_5, Descendant_6, cont, cont_env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0___ConsId_11 = ((MR_Word) ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11));
    (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12 = ((MR_Word) ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12));
    hlds__inst_graph__descendant_2_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13 = ((MR_Word) ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13));
    hlds__inst_graph__descendant_2_4_p_0_3(env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) (env_ptr_arg);

    {
      *((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8) = (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13;
      ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
    }
    {
      (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), ((MR_Box) ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)), (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6);
      if ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded = MR_FALSE;
        if ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__succeeded)
          ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont)((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
      }
      else
      {
        MR_Word Var_15;

        Var_15 = mercury__set__insert_2_f_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6, ((MR_Box) ((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13)));
        hlds__inst_graph__descendant_2_4_p_0((env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, Var_15, (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Arg_13, (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8, (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont, (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s * env_ptr = (struct hlds__inst_graph__descendant_2_4_p_0_env_0_s *) (env_ptr_arg);

    mercury__list__member_2_p_1((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), &(env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__conv3_Arg_13, (env_ptr)->hlds__inst_graph__descendant_2_4_p_0_env_0__Args_12, hlds__inst_graph__descendant_2_4_p_0_4, env_ptr);
  }
}

static void MR_CALL 
hlds__inst_graph__descendant_2_4_p_0(
  MR_Word InstGraph_5,
  MR_Word Seen_6,
  MR_Word Var_7,
  MR_Word * Descendant_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__inst_graph__descendant_2_4_p_0_env_0_s env;

    (env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5 = InstGraph_5;
    (env).hlds__inst_graph__descendant_2_4_p_0_env_0__Seen_6 = Seen_6;
    (env).hlds__inst_graph__descendant_2_4_p_0_env_0__Descendant_8 = Descendant_8;
    (env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont = cont;
    (env).hlds__inst_graph__descendant_2_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word Functors_9;
      MR_Word Var_14;
      MR_Box conv0_Var_14;
      MR_Word Var_10;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), (env).hlds__inst_graph__descendant_2_4_p_0_env_0__InstGraph_5, ((MR_Box) (Var_7)), &conv0_Var_14);
      Var_14 = ((MR_Word) (conv0_Var_14));
      Functors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      mercury__map__member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__inst_graph_scalar_common_1[1]), Functors_9, &(env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv2__ConsId_11, &(env).hlds__inst_graph__descendant_2_4_p_0_env_0__conv1_Args_12, hlds__inst_graph__descendant_2_4_p_0_2, &env);
    }
  }
}

void MR_CALL 
hlds__inst_graph__top_level_node_3_p_0(
  MR_Word InstGraph_4,
  MR_Word Var_5,
  MR_Word * TopLevel_6)
{
  while (MR_TRUE)
  {
    MR_Word MaybeParent_8;
    MR_Word Var_10;
    MR_Box conv0_Var_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph_4, ((MR_Box) (Var_5)), &conv0_Var_10);
    Var_10 = ((MR_Word) (conv0_Var_10));
    MaybeParent_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    if ((MaybeParent_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *TopLevel_6 = Var_5;
    else
    {
      MR_Word Parent_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParent_8, (MR_Integer) 0))));
      MR_Word next_value_of_Var_5 = Parent_9;

      // direct tailcall eliminated
      ;
      Var_5 = next_value_of_Var_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__inst_graph__set_parent_4_p_0(
  MR_Word Parent_5,
  MR_Word Child_6,
  MR_Word STATE_VARIABLE_InstGraph_0_11,
  MR_Word * STATE_VARIABLE_InstGraph_12)
{
  {
    MR_Word Functors_8;
    MR_Word MaybeParent0_9;
    MR_Word Var_13;
    MR_Box conv0_Var_13;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), STATE_VARIABLE_InstGraph_0_11, ((MR_Box) (Child_6)), &conv0_Var_13);
    Var_13 = ((MR_Word) (conv0_Var_13));
    Functors_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
    MaybeParent0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
    if ((MaybeParent0_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_16;
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Parent_5));
      }
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Functors_8));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Var_18));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (Child_6)), ((MR_Box) (Var_16)), STATE_VARIABLE_InstGraph_0_11, STATE_VARIABLE_InstGraph_12);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_graph.set_parent\'/4", (MR_String) "node already has parent");
        return;
      }
  }
}

static void MR_CALL 
hlds__inst_graph__init_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstGraph_7;

    hlds__inst_graph__init_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstGraph_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstGraph_7));
  }
}

void MR_CALL 
hlds__inst_graph__init_2_p_0(
  MR_Word Vars_3,
  MR_Word * InstGraph_4)
{
  {
    MR_Word InstGraph0_5;
    MR_Box conv1_InstGraph_4;

    mercury__map__init_1_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), &InstGraph0_5);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__inst_graph_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph_scalar_common_2[0]), (MR_Word) (&hlds__inst_graph_scalar_common_2[2]), Vars_3, ((MR_Box) (InstGraph0_5)), &conv1_InstGraph_4);
    *InstGraph_4 = ((MR_Word) (conv1_InstGraph_4));
  }
}

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__inst_graph____Unify____inst_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__inst_graph____Compare____inst_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__inst_graph____Unify____inst_graph_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__inst_graph____Unify____inst_graph_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____inst_graph_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__inst_graph____Compare____inst_graph_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__inst_graph____Unify____maybe_parent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__inst_graph____Unify____maybe_parent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____maybe_parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__inst_graph____Compare____maybe_parent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__inst_graph____Unify____node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__inst_graph____Unify____node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__inst_graph____Compare____node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__inst_graph____Compare____node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.inst_graph.
