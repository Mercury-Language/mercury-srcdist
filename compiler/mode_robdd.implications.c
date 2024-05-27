/*
** Automatically generated from `mode_robdd.implications.m'
** by the Mercury compiler,
** version rotd-2024-05-27
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


// :- module mode_robdd.implications.
// :- implementation.

/*
INIT mercury__mode_robdd__implications__init
ENDINIT
*/

#include "mode_robdd.implications.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.equiv_vars.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"



struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s {
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__EQVars_5;
  MR_bool mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__ImpMap_18;
  jmp_buf mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__commit_0;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_13_23;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__BaseTypeClassInfo_for_uenum_26;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeClassInfo_for_uenum_27;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__VA_19;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__VB_20;
  MR_Word mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__Vs_21;
  MR_Box mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv1_VA_19;
  MR_Box mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv0_Vs_21;
  MR_Box mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv2_VB_20;
};


static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_literal_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct1 mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0;

static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0;

static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1;

static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_ordinal_ordered_extract_0[2];

static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0[2];

static const MR_Integer mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0[2];

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Word LambdaHeadVar__3_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__571__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__1_21,
  MR_Word LambdaHeadVar__2_22);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__549__1_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word LitB_6,
  MR_Word LambdaHeadVar__1_12);

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word LambdaHeadVar__3_14);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Var_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12,
  MR_Word LambdaHeadVar__3_13);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word LambdaHeadVar__1_8,
  MR_Word LambdaHeadVar__2_9,
  MR_Word LambdaHeadVar__3_10);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12,
  MR_Word LambdaHeadVar__3_13);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__2_13,
  MR_Word HeadVar__3_14);

static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word EQVars_5,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Tuple LambdaHeadVar__3_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__263__1_3_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__2_35,
  MR_Word HeadVar__3_36);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__200__1_5_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word IsDisImp_9,
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Tuple LambdaHeadVar__3_34);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word P_4,
  MR_Word LambdaHeadVar__1_10,
  MR_Word LambdaHeadVar__2_11,
  MR_Word LambdaHeadVar__3_12);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word LambdaHeadVar__1_10,
  MR_Word LambdaHeadVar__2_11,
  MR_Word LambdaHeadVar__3_12);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__318__1_4_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word LambdaHeadVar__1_31,
  MR_Word LambdaHeadVar__2_32,
  MR_Tuple LambdaHeadVar__3_33);

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mode_robdd__implications__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_107_108_105_116_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mode_robdd__implications__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_107_108_105_116_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Tuple HeadVar__2_2,
  MR_Tuple HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Tuple HeadVar__1_1,
  MR_Tuple HeadVar__2_2);

static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word V_3);

static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word V_3);

static MR_Box MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_6(
  void * env_ptr_arg);

static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_implication_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Extract_7,
  MR_Word Imps_8,
  MR_Word DisImps_9,
  MR_Word * Changed_10,
  MR_Word FalseVars0_11,
  MR_Word * FalseVars_12);

static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word IsDisImp_9,
  MR_Word * Changed_10,
  MR_Word TrueVars0_11,
  MR_Word * TrueVars_12,
  MR_Word FalseVars0_13,
  MR_Word * FalseVars_14,
  MR_Word ImpMap0_15,
  MR_Word * ImpMap_16);

static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__add_robdd_clauses_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word LitA_5,
  MR_Word LitB_6,
  MR_Word ImpVars_7);

static MR_bool MR_CALL 
mode_robdd__implications__add_robdd_clause_2_2_f_0(
  MR_Word TypeInfo_for_T_100,
  MR_Tuple HeadVar__1_1,
  MR_Word ImpVars_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VA_5,
  MR_Word M0_6,
  MR_Word VB_7,
  MR_Word * M_8);

static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word P_4,
  MR_Word IM_5);

static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word IM_3);

static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Var_4,
  MR_Word IM0_5);

static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word IMA_4,
  MR_Word IMB_5);

static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word IMA_4,
  MR_Word IMB_5);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Integer mode_robdd__implications_scalar_common_1[1][2];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_2[1][6];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_3[2][10];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_4[3][7];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_5[4][8];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_6[4][9];




static /* final */ const MR_Integer mode_robdd__implications_scalar_common_1[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_2[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_3[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_4[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_5[4][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_6[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_literal_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_literal_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__implications__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&mode_robdd__implications__term__pti_var_1__pseudo_1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__implications__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  { (MR_PseudoTypeInfo) (&mode_robdd__implications__term__pti_var_1__pseudo_1) }
};

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_bin_clause_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____bin_clause_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____bin_clause_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "bin_clause",
  { NULL },
  { (MR_PseudoTypeInfo) (&mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0 = {
  (MR_String) "keys",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1 = {
  (MR_String) "values",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_ordinal_ordered_extract_0[2] = {
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0,
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1
};

static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0[2] = {
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0,
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1
};

static const MR_Integer mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_extract_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mode_robdd__implications____Unify____extract_0_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____extract_0_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "extract",
  { mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0 },
  { mode_robdd__implications__mode_robdd__implications__enum_ordinal_ordered_extract_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0,

};

const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_mklit_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____mklit_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____mklit_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "mklit",
  { NULL },
  { (MR_PseudoTypeInfo) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_23;

  conv0_LambdaHeadVar__3_23 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__571__1_6_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_23));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Word LambdaHeadVar__3_18)
{
  MR_Word LambdaHeadVar__4_19;
  MR_Word TypeInfo_40_40;
  MR_Word TypeClassInfo_for_uenum_42;
  MR_Word TypeInfo_44_44;
  MR_Word Var_20;
  MR_Box conv1_LambdaHeadVar__4_19;

  {
    TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_40_40, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_for_T_32));
  }
  {
    TypeClassInfo_for_uenum_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_42, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_42, 1) = ((MR_Box) (TypeInfo_for_T_32));
    MR_hl_field(0, TypeClassInfo_for_uenum_42, 2) = ((MR_Box) (TypeInfo_40_40));
  }
  {
    TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_44_44, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_imp_vars_1));
    MR_hl_field(0, TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_T_32));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[1]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeInfo_for_T_32));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (MkLitA_6));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (MkLitB_7));
    MR_hl_field(0, Var_20, 6) = ((MR_Box) (LambdaHeadVar__1_16));
  }
  conv1_LambdaHeadVar__4_19 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_32, TypeInfo_44_44, TypeClassInfo_for_uenum_42, (MR_Word) (Var_20), LambdaHeadVar__2_17, ((MR_Box) (LambdaHeadVar__3_18)));
  LambdaHeadVar__4_19 = ((MR_Word) (conv1_LambdaHeadVar__4_19));
  return LambdaHeadVar__4_19;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__571__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__1_21,
  MR_Word LambdaHeadVar__2_22)
{
  MR_Word LambdaHeadVar__3_23;
  MR_Tuple Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_33;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, MkLitA_6, (MR_Integer) 1))));
  MR_Box conv1_Var_25;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_26;

  conv1_Var_25 = func_0(((MR_Box) (MkLitA_6)), ((MR_Box) (LambdaHeadVar__1_16)));
  Var_25 = ((MR_Word) (conv1_Var_25));
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, MkLitB_7, (MR_Integer) 1))));
  conv3_Var_26 = func_2(((MR_Box) (MkLitB_7)), ((MR_Box) (LambdaHeadVar__1_21)));
  Var_26 = ((MR_Word) (conv3_Var_26));
  {
    Var_24 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LambdaHeadVar__3_23 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_32, Var_33, LambdaHeadVar__2_22);
  return LambdaHeadVar__3_23;
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__549__1_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word LitB_6,
  MR_Word LambdaHeadVar__1_12)
{
  MR_Tuple LambdaHeadVar__2_13;

  {
    LambdaHeadVar__2_13 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_13, 0) = ((MR_Box) (LambdaHeadVar__1_12));
    MR_hl_field(0, LambdaHeadVar__2_13, 1) = ((MR_Box) (LitB_6));
  }
  return LambdaHeadVar__2_13;
}

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_19;

  conv0_LambdaHeadVar__3_19 = mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_19));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word LambdaHeadVar__3_14)
{
  MR_Word LambdaHeadVar__4_15;
  MR_Word TypeInfo_33_33;
  MR_Word TypeClassInfo_for_uenum_35;
  MR_Word TypeInfo_37_37;
  MR_Word TypeInfo_39_39;
  MR_Word Var_16;
  MR_Box conv1_LambdaHeadVar__4_15;

  {
    TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_25));
  }
  {
    TypeClassInfo_for_uenum_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_35, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_35, 1) = ((MR_Box) (TypeInfo_for_T_25));
    MR_hl_field(0, TypeClassInfo_for_uenum_35, 2) = ((MR_Box) (TypeInfo_33_33));
  }
  {
    TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_33_33));
  }
  {
    TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_33_33));
    MR_hl_field(0, TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_37_37));
  }
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[3]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeInfo_for_T_25));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (LambdaHeadVar__1_12));
  }
  conv1_LambdaHeadVar__4_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_25, TypeInfo_39_39, TypeClassInfo_for_uenum_35, (MR_Word) (Var_16), LambdaHeadVar__2_13, ((MR_Box) (LambdaHeadVar__3_14)));
  LambdaHeadVar__4_15 = ((MR_Word) (conv1_LambdaHeadVar__4_15));
  return LambdaHeadVar__4_15;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__3_19;
  MR_Word TypeInfo_13_30;
  MR_Word TypeInfo_15_32;
  MR_Word Vs_26;
  MR_Box conv0_Vs_26;

  {
    TypeInfo_13_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_30, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_13_30, 1) = ((MR_Box) (TypeInfo_for_T_25));
  }
  {
    TypeInfo_15_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_32, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_15_32, 1) = ((MR_Box) (TypeInfo_13_30));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_25, TypeInfo_13_30, TypeInfo_15_32, LambdaHeadVar__1_17, (MR_Word) (LambdaHeadVar__2_18), &conv0_Vs_26);
  if (succeeded)
  {
    Vs_26 = ((MR_Word) (conv0_Vs_26));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeClassInfo_for_uenum_36;
    MR_Word Var_27;
    MR_Word conv1_LambdaHeadVar__3_19;

    {
      TypeClassInfo_for_uenum_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_36, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_36, 1) = ((MR_Box) (TypeInfo_for_T_25));
      MR_hl_field(0, TypeClassInfo_for_uenum_36, 2) = ((MR_Box) (TypeInfo_13_30));
    }
    Var_27 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_25, TypeClassInfo_for_uenum_36, Vs_26, LambdaHeadVar__1_12);
    conv1_LambdaHeadVar__3_19 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_25, TypeInfo_13_30, TypeInfo_15_32, LambdaHeadVar__1_17, (MR_Word) (LambdaHeadVar__2_18), ((MR_Box) (Var_27)));
    LambdaHeadVar__3_19 = (MR_Word) (conv1_LambdaHeadVar__3_19);
  }
  else
  {
    MR_Word TypeInfo_23_40;
    MR_Word TypeClassInfo_for_uenum_42;
    MR_Word TypeInfo_27_44;
    MR_Word Var_28;
    MR_Word conv2_LambdaHeadVar__3_19;

    {
      TypeInfo_23_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_40, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_23_40, 1) = ((MR_Box) (TypeInfo_for_T_25));
    }
    {
      TypeClassInfo_for_uenum_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_42, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_42, 1) = ((MR_Box) (TypeInfo_for_T_25));
      MR_hl_field(0, TypeClassInfo_for_uenum_42, 2) = ((MR_Box) (TypeInfo_23_40));
    }
    Var_28 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_25, TypeClassInfo_for_uenum_42, LambdaHeadVar__1_12);
    {
      TypeInfo_27_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_27_44, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_27_44, 1) = ((MR_Box) (TypeInfo_23_40));
    }
    conv2_LambdaHeadVar__3_19 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_25, TypeInfo_23_40, TypeInfo_27_44, LambdaHeadVar__1_17, (MR_Word) (LambdaHeadVar__2_18), ((MR_Box) (Var_28)));
    LambdaHeadVar__3_19 = (MR_Word) (conv2_LambdaHeadVar__3_19);
  }
  return LambdaHeadVar__3_19;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Var_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12,
  MR_Word LambdaHeadVar__3_13)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__4_14;
  MR_Word TypeInfo_28_28;
  MR_Word TypeClassInfo_for_uenum_30;

  {
    TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeClassInfo_for_uenum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_30, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_30, 1) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, TypeClassInfo_for_uenum_30, 2) = ((MR_Box) (TypeInfo_28_28));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_20, TypeClassInfo_for_uenum_30, LambdaHeadVar__2_12, Var_4);
  if (succeeded)
  {
    MR_Word Var_15;
    MR_Word TypeInfo_10_32;

    Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_20, TypeClassInfo_for_uenum_30, LambdaHeadVar__2_12, Var_4);
    TypeInfo_10_32 = TypeInfo_28_28;
    succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_10_32, (MR_Word) (Var_15));
    if (succeeded)
    {
      MR_Word TypeInfo_14_36;
      MR_Word conv0_LambdaHeadVar__4_14;

      {
        TypeInfo_14_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_36, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(0, TypeInfo_14_36, 1) = ((MR_Box) (TypeInfo_10_32));
      }
      conv0_LambdaHeadVar__4_14 = mercury__map__delete_2_f_0(TypeInfo_10_32, TypeInfo_14_36, (MR_Word) (LambdaHeadVar__3_13), ((MR_Box) (LambdaHeadVar__1_11)));
      LambdaHeadVar__4_14 = (MR_Word) (conv0_LambdaHeadVar__4_14);
    }
    else
    {
      MR_Word TypeInfo_18_40;
      MR_Word conv1_LambdaHeadVar__4_14;

      {
        TypeInfo_18_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_40, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(0, TypeInfo_18_40, 1) = ((MR_Box) (TypeInfo_28_28));
      }
      conv1_LambdaHeadVar__4_14 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_20, TypeInfo_28_28, TypeInfo_18_40, LambdaHeadVar__1_11, (MR_Word) (LambdaHeadVar__3_13), ((MR_Box) (Var_15)));
      LambdaHeadVar__4_14 = (MR_Word) (conv1_LambdaHeadVar__4_14);
    }
  }
  else
    LambdaHeadVar__4_14 = LambdaHeadVar__3_13;
  return LambdaHeadVar__4_14;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word LambdaHeadVar__1_8,
  MR_Word LambdaHeadVar__2_9,
  MR_Word LambdaHeadVar__3_10)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__4_11;
  MR_Word TypeInfo_24_24;

  {
    TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_24_24, (MR_Word) (LambdaHeadVar__2_9));
  if (succeeded)
  {
    MR_Word TypeInfo_28_28;
    MR_Word conv0_LambdaHeadVar__4_11;

    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_24_24));
    }
    conv0_LambdaHeadVar__4_11 = mercury__map__delete_2_f_0(TypeInfo_24_24, TypeInfo_28_28, (MR_Word) (LambdaHeadVar__3_10), ((MR_Box) (LambdaHeadVar__1_8)));
    LambdaHeadVar__4_11 = (MR_Word) (conv0_LambdaHeadVar__4_11);
  }
  else
    LambdaHeadVar__4_11 = LambdaHeadVar__3_10;
  return LambdaHeadVar__4_11;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12,
  MR_Word LambdaHeadVar__3_13)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__4_14;
  MR_Word TypeInfo_31_31;
  MR_Word TypeInfo_33_33;
  MR_Word VsA_9;
  MR_Box conv0_VsA_9;

  {
    TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_31_31));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_19, TypeInfo_31_31, TypeInfo_33_33, LambdaHeadVar__1_11, (MR_Word) (LambdaHeadVar__3_13), &conv0_VsA_9);
  if (succeeded)
  {
    VsA_9 = ((MR_Word) (conv0_VsA_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_15;
    MR_Word conv1_Var_15;
    MR_Word TypeInfo_10_35;

    conv1_Var_15 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_31_31, (MR_Word) (VsA_9), (MR_Word) (LambdaHeadVar__2_12));
    Var_15 = (MR_Word) (conv1_Var_15);
    TypeInfo_10_35 = TypeInfo_31_31;
    succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_10_35, (MR_Word) (Var_15));
    if (succeeded)
    {
      MR_Word conv2_LambdaHeadVar__4_14;

      conv2_LambdaHeadVar__4_14 = mercury__map__delete_2_f_0(TypeInfo_10_35, TypeInfo_33_33, (MR_Word) (LambdaHeadVar__3_13), ((MR_Box) (LambdaHeadVar__1_11)));
      LambdaHeadVar__4_14 = (MR_Word) (conv2_LambdaHeadVar__4_14);
    }
    else
    {
      MR_Word conv3_LambdaHeadVar__4_14;

      conv3_LambdaHeadVar__4_14 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_19, TypeInfo_31_31, TypeInfo_33_33, LambdaHeadVar__1_11, (MR_Word) (LambdaHeadVar__3_13), ((MR_Box) (Var_15)));
      LambdaHeadVar__4_14 = (MR_Word) (conv3_LambdaHeadVar__4_14);
    }
  }
  else
    LambdaHeadVar__4_14 = LambdaHeadVar__3_13;
  return LambdaHeadVar__4_14;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__2_13,
  MR_Word HeadVar__3_14)
{
  MR_Word HeadVar__4_15;
  MR_Word TypeInfo_17_17;
  MR_Word conv0_HeadVar__4_15;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  conv0_HeadVar__4_15 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_17_17, (MR_Word) (HeadVar__2_13), (MR_Word) (HeadVar__3_14));
  HeadVar__4_15 = (MR_Word) (conv0_HeadVar__4_15);
  return HeadVar__4_15;
}

static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word EQVars_5,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Tuple LambdaHeadVar__3_18)
{
  MR_bool succeeded;
  MR_Tuple LambdaHeadVar__4_19;
  MR_Word TypeInfo_42_42;
  MR_Word TypeClassInfo_for_uenum_44;
  MR_Word Vs_13;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word IM_28 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_18, (MR_Integer) 0))));
  MR_Word C_29 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_18, (MR_Integer) 1))));
  MR_Word conv0_Vs_13;
  MR_Word TypeInfo_10_51;

  {
    TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_42_42, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_T_30));
  }
  {
    TypeClassInfo_for_uenum_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_44, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_44, 1) = ((MR_Box) (TypeInfo_for_T_30));
    MR_hl_field(0, TypeClassInfo_for_uenum_44, 2) = ((MR_Box) (TypeInfo_42_42));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeInfo_for_T_30));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (EQVars_5));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (LambdaHeadVar__1_16));
  }
  conv0_Vs_13 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_uenum_44, (MR_Word) (Var_20), (MR_Word) (LambdaHeadVar__2_17));
  Vs_13 = (MR_Word) (conv0_Vs_13);
  TypeInfo_10_51 = TypeInfo_42_42;
  succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_10_51, (MR_Word) (Vs_13));
  if (succeeded)
  {
    MR_Word TypeInfo_14_55;
    MR_Word conv1_Var_21;

    {
      TypeInfo_14_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_55, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_14_55, 1) = ((MR_Box) (TypeInfo_10_51));
    }
    conv1_Var_21 = mercury__map__delete_2_f_0(TypeInfo_10_51, TypeInfo_14_55, (MR_Word) (IM_28), ((MR_Box) (LambdaHeadVar__1_16)));
    Var_21 = (MR_Word) (conv1_Var_21);
  }
  else
  {
    MR_Word TypeInfo_18_59;
    MR_Word conv2_Var_21;

    {
      TypeInfo_18_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_18_59, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_18_59, 1) = ((MR_Box) (TypeInfo_42_42));
    }
    conv2_Var_21 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_30, TypeInfo_42_42, TypeInfo_18_59, LambdaHeadVar__1_16, (MR_Word) (IM_28), ((MR_Box) (Vs_13)));
    Var_21 = (MR_Word) (conv2_Var_21);
  }
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_42_42, (MR_Word) (Vs_13), (MR_Word) (LambdaHeadVar__2_17));
  if (succeeded)
    Var_22 = C_29;
  else
    Var_22 = (MR_Integer) 1;
  {
    LambdaHeadVar__4_19 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__4_19, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, LambdaHeadVar__4_19, 1) = ((MR_Box) (Var_22));
  }
  return LambdaHeadVar__4_19;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__263__1_3_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__2_35,
  MR_Word HeadVar__3_36)
{
  MR_Word HeadVar__4_37;
  MR_Word TypeInfo_39_39;
  MR_Word conv0_HeadVar__4_37;

  {
    TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  conv0_HeadVar__4_37 = mercury__sparse_bitset__union_2_f_0(TypeInfo_39_39, (MR_Word) (HeadVar__2_35), (MR_Word) (HeadVar__3_36));
  HeadVar__4_37 = (MR_Word) (conv0_HeadVar__4_37);
  return HeadVar__4_37;
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__200__1_5_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word IsDisImp_9,
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Tuple LambdaHeadVar__3_34)
{
  MR_bool succeeded = (IsDisImp_9 == (MR_Integer) 1);
  MR_Tuple LambdaHeadVar__4_35;
  MR_Word Ts_23;
  MR_Word Fs_24;
  MR_Word IMs_25;
  MR_Word C_26;
  MR_Word Ts0_42 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_34, (MR_Integer) 0))));
  MR_Word Fs0_43 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_34, (MR_Integer) 1))));
  MR_Word IMs0_44 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_34, (MR_Integer) 2))));
  MR_Word C0_45 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_34, (MR_Integer) 3))));
  MR_Word TypeInfo_58_58;
  MR_Word TypeClassInfo_for_uenum_60;
  MR_Word Var_36;

  if (succeeded)
    Var_36 = Fs0_43;
  else
    Var_36 = Ts0_42;
  {
    TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_58_58, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_58_58, 1) = ((MR_Box) (TypeInfo_for_T_46));
  }
  {
    TypeClassInfo_for_uenum_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_60, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_60, 1) = ((MR_Box) (TypeInfo_for_T_46));
    MR_hl_field(0, TypeClassInfo_for_uenum_60, 2) = ((MR_Box) (TypeInfo_58_58));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_46, TypeClassInfo_for_uenum_60, Var_36, LambdaHeadVar__1_32);
  if (succeeded)
  {
    MR_Word TypeInfo_64_64;
    MR_Word conv0_Ts_23;
    MR_Word conv1_IMs_25;

    conv0_Ts_23 = mercury__sparse_bitset__union_2_f_0(TypeInfo_58_58, (MR_Word) (Ts0_42), (MR_Word) (LambdaHeadVar__2_33));
    Ts_23 = (MR_Word) (conv0_Ts_23);
    Fs_24 = Fs0_43;
    {
      TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_64_64, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_58_58));
    }
    conv1_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_58_58, TypeInfo_64_64, (MR_Word) (IMs0_44), ((MR_Box) (LambdaHeadVar__1_32)));
    IMs_25 = (MR_Word) (conv1_IMs_25);
    C_26 = (MR_Integer) 1;
  }
  else
  {
    MR_Word TypeInfo_66_66;
    MR_Word TypeClassInfo_for_uenum_68;
    MR_Word Var_37;

    succeeded = (IsDisImp_9 == (MR_Integer) 1);
    if (succeeded)
      Var_37 = Ts0_42;
    else
      Var_37 = Fs0_43;
    {
      TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_66_66, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_66_66, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    {
      TypeClassInfo_for_uenum_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_68, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_68, 1) = ((MR_Box) (TypeInfo_for_T_46));
      MR_hl_field(0, TypeClassInfo_for_uenum_68, 2) = ((MR_Box) (TypeInfo_66_66));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_46, TypeClassInfo_for_uenum_68, Var_37, LambdaHeadVar__1_32);
    if (succeeded)
    {
      MR_Word TypeInfo_72_72;
      MR_Word conv2_IMs_25;

      Ts_23 = Ts0_42;
      Fs_24 = Fs0_43;
      {
        TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_72_72, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(0, TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_66_66));
      }
      conv2_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_66_66, TypeInfo_72_72, (MR_Word) (IMs0_44), ((MR_Box) (LambdaHeadVar__1_32)));
      IMs_25 = (MR_Word) (conv2_IMs_25);
      C_26 = (MR_Integer) 1;
    }
    else
    {
      MR_Word TypeInfo_74_74;
      MR_Word FVs_27;
      MR_Word conv3_FVs_27;

      {
        TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_74_74, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      conv3_FVs_27 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_74_74, (MR_Word) (Fs0_43), (MR_Word) (LambdaHeadVar__2_33));
      FVs_27 = (MR_Word) (conv3_FVs_27);
      succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_74_74, (MR_Word) (FVs_27));
      if (succeeded)
      {
        MR_Word TypeInfo_86_86;
        MR_Word conv4_IMs_25;

        succeeded = (IsDisImp_9 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word TypeClassInfo_for_uenum_78;

          {
            TypeClassInfo_for_uenum_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_for_uenum_78, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
            MR_hl_field(0, TypeClassInfo_for_uenum_78, 1) = ((MR_Box) (TypeInfo_for_T_46));
            MR_hl_field(0, TypeClassInfo_for_uenum_78, 2) = ((MR_Box) (TypeInfo_74_74));
          }
          Ts_23 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_46, TypeClassInfo_for_uenum_78, Ts0_42, LambdaHeadVar__1_32);
        }
        else
          Ts_23 = Ts0_42;
        succeeded = (IsDisImp_9 == (MR_Integer) 1);
        if (succeeded)
          Fs_24 = Fs0_43;
        else
        {
          MR_Word TypeClassInfo_for_uenum_82;

          {
            TypeClassInfo_for_uenum_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_for_uenum_82, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
            MR_hl_field(0, TypeClassInfo_for_uenum_82, 1) = ((MR_Box) (TypeInfo_for_T_46));
            MR_hl_field(0, TypeClassInfo_for_uenum_82, 2) = ((MR_Box) (TypeInfo_74_74));
          }
          Fs_24 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_46, TypeClassInfo_for_uenum_82, Fs0_43, LambdaHeadVar__1_32);
        }
        {
          TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_86_86, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
          MR_hl_field(0, TypeInfo_86_86, 1) = ((MR_Box) (TypeInfo_74_74));
        }
        conv4_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_74_74, TypeInfo_86_86, (MR_Word) (IMs0_44), ((MR_Box) (LambdaHeadVar__1_32)));
        IMs_25 = (MR_Word) (conv4_IMs_25);
        C_26 = (MR_Integer) 1;
      }
      else
      {
        MR_Word TypeInfo_88_88;
        MR_Word TVs_28;
        MR_Word conv5_TVs_28;

        {
          TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_88_88, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_46));
        }
        conv5_TVs_28 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_88_88, (MR_Word) (Ts0_42), (MR_Word) (LambdaHeadVar__2_33));
        TVs_28 = (MR_Word) (conv5_TVs_28);
        succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_88_88, (MR_Word) (TVs_28));
        if (succeeded)
        {
          MR_Word UTVs_29;
          MR_Word conv6_UTVs_29;

          Ts_23 = Ts0_42;
          Fs_24 = Fs0_43;
          conv6_UTVs_29 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_88_88, (MR_Word) (LambdaHeadVar__2_33), (MR_Word) (TVs_28));
          UTVs_29 = (MR_Word) (conv6_UTVs_29);
          succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_88_88, (MR_Word) (UTVs_29));
          if (succeeded)
          {
            MR_Word TypeInfo_92_92;
            MR_Word conv7_IMs_25;

            {
              TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_92_92, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
              MR_hl_field(0, TypeInfo_92_92, 1) = ((MR_Box) (TypeInfo_88_88));
            }
            conv7_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_88_88, TypeInfo_92_92, (MR_Word) (IMs0_44), ((MR_Box) (LambdaHeadVar__1_32)));
            IMs_25 = (MR_Word) (conv7_IMs_25);
          }
          else
          {
            MR_Word TypeInfo_94_94;
            MR_Word conv8_IMs_25;

            {
              TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_94_94, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
              MR_hl_field(0, TypeInfo_94_94, 1) = ((MR_Box) (TypeInfo_88_88));
            }
            conv8_IMs_25 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_46, TypeInfo_88_88, TypeInfo_94_94, LambdaHeadVar__1_32, (MR_Word) (IMs0_44), ((MR_Box) (UTVs_29)));
            IMs_25 = (MR_Word) (conv8_IMs_25);
          }
          C_26 = (MR_Integer) 1;
        }
        else
        {
          Ts_23 = Ts0_42;
          Fs_24 = Fs0_43;
          IMs_25 = IMs0_44;
          C_26 = C0_45;
        }
      }
    }
  }
  {
    LambdaHeadVar__4_35 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__4_35, 0) = ((MR_Box) (Ts_23));
    MR_hl_field(0, LambdaHeadVar__4_35, 1) = ((MR_Box) (Fs_24));
    MR_hl_field(0, LambdaHeadVar__4_35, 2) = ((MR_Box) (IMs_25));
    MR_hl_field(0, LambdaHeadVar__4_35, 3) = ((MR_Box) (C_26));
  }
  return LambdaHeadVar__4_35;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word P_4,
  MR_Word LambdaHeadVar__1_10,
  MR_Word LambdaHeadVar__2_11,
  MR_Word LambdaHeadVar__3_12)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__4_13;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));

  succeeded = func_0(((MR_Box) (P_4)), ((MR_Box) (LambdaHeadVar__1_10)));
  if (succeeded)
  {
    MR_Word TypeInfo_27_27;
    MR_Word TypeClassInfo_for_uenum_29;
    MR_Word Var_14;
    MR_Word conv1_Var_14;
    MR_Word TypeInfo_10_35;

    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeClassInfo_for_uenum_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_29, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_29, 1) = ((MR_Box) (TypeInfo_for_T_19));
      MR_hl_field(0, TypeClassInfo_for_uenum_29, 2) = ((MR_Box) (TypeInfo_27_27));
    }
    conv1_Var_14 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_uenum_29, (MR_Word) (P_4), (MR_Word) (LambdaHeadVar__2_11));
    Var_14 = (MR_Word) (conv1_Var_14);
    TypeInfo_10_35 = TypeInfo_27_27;
    succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_10_35, (MR_Word) (Var_14));
    if (succeeded)
    {
      MR_Word TypeInfo_14_39;
      MR_Word conv2_LambdaHeadVar__4_13;

      {
        TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_39, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(0, TypeInfo_14_39, 1) = ((MR_Box) (TypeInfo_10_35));
      }
      conv2_LambdaHeadVar__4_13 = mercury__map__delete_2_f_0(TypeInfo_10_35, TypeInfo_14_39, (MR_Word) (LambdaHeadVar__3_12), ((MR_Box) (LambdaHeadVar__1_10)));
      LambdaHeadVar__4_13 = (MR_Word) (conv2_LambdaHeadVar__4_13);
    }
    else
    {
      MR_Word TypeInfo_18_43;
      MR_Word conv3_LambdaHeadVar__4_13;

      {
        TypeInfo_18_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_43, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(0, TypeInfo_18_43, 1) = ((MR_Box) (TypeInfo_27_27));
      }
      conv3_LambdaHeadVar__4_13 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_19, TypeInfo_27_27, TypeInfo_18_43, LambdaHeadVar__1_10, (MR_Word) (LambdaHeadVar__3_12), ((MR_Box) (Var_14)));
      LambdaHeadVar__4_13 = (MR_Word) (conv3_LambdaHeadVar__4_13);
    }
  }
  else
  {
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_33_33;
    MR_Word conv4_LambdaHeadVar__4_13;

    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_31_31));
    }
    conv4_LambdaHeadVar__4_13 = mercury__map__delete_2_f_0(TypeInfo_31_31, TypeInfo_33_33, (MR_Word) (LambdaHeadVar__3_12), ((MR_Box) (LambdaHeadVar__1_10)));
    LambdaHeadVar__4_13 = (MR_Word) (conv4_LambdaHeadVar__4_13);
  }
  return LambdaHeadVar__4_13;
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word LambdaHeadVar__1_10,
  MR_Word LambdaHeadVar__2_11,
  MR_Word LambdaHeadVar__3_12)
{
  MR_Word LambdaHeadVar__4_13;
  MR_Word Var_14;
  MR_Tuple Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Tuple Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (LambdaHeadVar__1_10));
  }
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (LambdaHeadVar__2_11));
  }
  {
    Var_20 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_14 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_19, Var_23, LambdaHeadVar__3_12);
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (LambdaHeadVar__2_11));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (LambdaHeadVar__1_10));
  }
  {
    Var_25 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LambdaHeadVar__4_13 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_19, Var_28, Var_14);
  return LambdaHeadVar__4_13;
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__318__1_4_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word LambdaHeadVar__1_31,
  MR_Word LambdaHeadVar__2_32,
  MR_Tuple LambdaHeadVar__3_33)
{
  MR_bool succeeded;
  MR_Tuple LambdaHeadVar__4_34;
  MR_Word C_23;
  MR_Word E_24;
  MR_Word I_25;
  MR_Word R_26;
  MR_Word C0_42 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_33, (MR_Integer) 0))));
  MR_Word E0_43 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_33, (MR_Integer) 1))));
  MR_Word I0_44 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_33, (MR_Integer) 2))));
  MR_Word R0_45 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__3_33, (MR_Integer) 3))));
  MR_Word TypeInfo_68_68;
  MR_Word TypeInfo_70_70;
  MR_Word RVs_27;
  MR_Word EVs_28;
  MR_Box conv0_RVs_27;
  MR_Word conv1_EVs_28;

  {
    TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_68_68, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_68_68, 1) = ((MR_Box) (TypeInfo_for_T_46));
  }
  {
    TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_70_70, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_70_70, 1) = ((MR_Box) (TypeInfo_68_68));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_46, TypeInfo_68_68, TypeInfo_70_70, LambdaHeadVar__1_31, (MR_Word) (R0_45), &conv0_RVs_27);
  if (succeeded)
  {
    RVs_27 = ((MR_Word) (conv0_RVs_27));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    conv1_EVs_28 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_68_68, (MR_Word) (LambdaHeadVar__2_32), (MR_Word) (RVs_27));
    EVs_28 = (MR_Word) (conv1_EVs_28);
    succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_68_68, (MR_Word) (EVs_28));
  }
  if (succeeded)
  {
    MR_Word TypeClassInfo_for_uenum_74;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word conv2_Var_36;
    MR_Word TypeInfo_10_76;
    MR_Word conv5_Var_37;
    MR_Word TypeInfo_10_86;

    C_23 = (MR_Integer) 1;
    {
      TypeClassInfo_for_uenum_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_74, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_74, 1) = ((MR_Box) (TypeInfo_for_T_46));
      MR_hl_field(0, TypeClassInfo_for_uenum_74, 2) = ((MR_Box) (TypeInfo_68_68));
    }
    Var_35 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_46, TypeClassInfo_for_uenum_74, EVs_28, LambdaHeadVar__1_31);
    E_24 = mode_robdd__equiv_vars__add_equalities_2_f_0(TypeInfo_for_T_46, Var_35, E0_43);
    conv2_Var_36 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_68_68, (MR_Word) (LambdaHeadVar__2_32), (MR_Word) (RVs_27));
    Var_36 = (MR_Word) (conv2_Var_36);
    TypeInfo_10_76 = TypeInfo_68_68;
    succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_10_76, (MR_Word) (Var_36));
    if (succeeded)
    {
      MR_Word conv3_I_25;

      conv3_I_25 = mercury__map__delete_2_f_0(TypeInfo_10_76, TypeInfo_70_70, (MR_Word) (I0_44), ((MR_Box) (LambdaHeadVar__1_31)));
      I_25 = (MR_Word) (conv3_I_25);
    }
    else
    {
      MR_Word conv4_I_25;

      conv4_I_25 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_46, TypeInfo_68_68, TypeInfo_70_70, LambdaHeadVar__1_31, (MR_Word) (I0_44), ((MR_Box) (Var_36)));
      I_25 = (MR_Word) (conv4_I_25);
    }
    conv5_Var_37 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_68_68, (MR_Word) (RVs_27), (MR_Word) (LambdaHeadVar__2_32));
    Var_37 = (MR_Word) (conv5_Var_37);
    TypeInfo_10_86 = TypeInfo_68_68;
    succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_10_86, (MR_Word) (Var_37));
    if (succeeded)
    {
      MR_Word conv6_R_26;

      conv6_R_26 = mercury__map__delete_2_f_0(TypeInfo_10_86, TypeInfo_70_70, (MR_Word) (R0_45), ((MR_Box) (LambdaHeadVar__1_31)));
      R_26 = (MR_Word) (conv6_R_26);
    }
    else
    {
      MR_Word conv7_R_26;

      conv7_R_26 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_46, TypeInfo_68_68, TypeInfo_70_70, LambdaHeadVar__1_31, (MR_Word) (R0_45), ((MR_Box) (Var_37)));
      R_26 = (MR_Word) (conv7_R_26);
    }
  }
  else
  {
    C_23 = C0_42;
    E_24 = E0_43;
    I_25 = I0_44;
    R_26 = R0_45;
  }
  {
    LambdaHeadVar__4_34 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__4_34, 0) = ((MR_Box) (C_23));
    MR_hl_field(0, LambdaHeadVar__4_34, 1) = ((MR_Box) (E_24));
    MR_hl_field(0, LambdaHeadVar__4_34, 2) = ((MR_Box) (I_25));
    MR_hl_field(0, LambdaHeadVar__4_34, 3) = ((MR_Box) (R_26));
  }
  return LambdaHeadVar__4_34;
}

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mode_robdd__implications__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_107_108_105_116_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
mode_robdd__implications__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_107_108_105_116_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mode_robdd__implications__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_107_108_105_116_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
mode_robdd__implications__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_111_100_101_95_114_111_98_100_100_95_95_105_109_112_108_105_99_97_116_105_111_110_115_95_95_109_107_108_105_116_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Tuple HeadVar__2_2,
  MR_Tuple HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Tuple Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Tuple Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_literal_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_8_8));
    MR_hl_field(0, TypeInfo_10_10, 3) = ((MR_Box) (TypeInfo_8_8));
  }
  mercury__builtin__compare_3_p_0(TypeInfo_10_10, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Tuple HeadVar__1_1,
  MR_Tuple HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeInfo_9_9;
  MR_Tuple Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Tuple Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_literal_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_7_7));
    MR_hl_field(0, TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_7_7));
  }
  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (V_3));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (V_3));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_15;

  conv0_LambdaHeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_15));
  return wrapper_arg_4;
}

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_27_37;
  MR_Word TypeInfo_29_39;
  MR_Word TypeInfo_31_41;
  MR_Word Is0_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word RIs0_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word DIs0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word RDIs0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Box conv1_Var_7;
  MR_Box conv2_Var_8;
  MR_Box conv3_Var_9;
  MR_Box conv4_Var_11;

  {
    TypeInfo_27_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_27_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_27_37, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  {
    TypeInfo_29_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_29_39, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_29_39, 1) = ((MR_Box) (TypeInfo_27_37));
  }
  {
    TypeInfo_31_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_31_41, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_31_41, 1) = ((MR_Box) (TypeInfo_27_37));
    MR_hl_field(0, TypeInfo_31_41, 2) = ((MR_Box) (TypeInfo_29_39));
  }
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mode_robdd__implications__add_backwards_relations_1_f_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_13));
  }
  conv1_Var_7 = mercury__map__foldl_3_f_0(TypeInfo_27_37, TypeInfo_29_39, TypeInfo_31_41, (MR_Word) (Var_14), (MR_Word) (RIs0_4), ((MR_Box) (Is0_3)));
  Var_7 = ((MR_Word) (conv1_Var_7));
  conv2_Var_8 = mercury__map__foldl_3_f_0(TypeInfo_27_37, TypeInfo_29_39, TypeInfo_31_41, (MR_Word) (Var_14), (MR_Word) (Is0_3), ((MR_Box) (RIs0_4)));
  Var_8 = ((MR_Word) (conv2_Var_8));
  conv3_Var_9 = mercury__map__foldl_3_f_0(TypeInfo_27_37, TypeInfo_29_39, TypeInfo_31_41, (MR_Word) (Var_14), (MR_Word) (DIs0_5), ((MR_Box) (DIs0_5)));
  Var_9 = ((MR_Word) (conv3_Var_9));
  conv4_Var_11 = mercury__map__foldl_3_f_0(TypeInfo_27_37, TypeInfo_29_39, TypeInfo_31_41, (MR_Word) (Var_14), (MR_Word) (RDIs0_6), ((MR_Box) (RDIs0_6)));
  Var_11 = ((MR_Word) (conv4_Var_11));
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_9));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_11));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_13;

  conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_13));
  return wrapper_arg_4;
}

MR_Word MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word EQVars_4,
  MR_Word ImpVars_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_23_23;
  MR_Word Var_9;
  MR_Word Var_15;
  MR_Box conv1_HeadVar__3_3;

  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_imp_vars_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (TypeInfo_for_T_19));
  }
  Var_15 = (MR_Word) (EQVars_4);
  conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_21_21, TypeInfo_21_21, TypeInfo_23_23, (MR_Word) (Var_9), (MR_Word) (Var_15), ((MR_Box) (ImpVars_5)));
  HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

void MR_CALL 
mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * Changed_6,
  MR_Word Robdd0_7,
  MR_Word * Robdd_8,
  MR_Word ImpVars0_9,
  MR_Word * ImpVars_10)
{
  MR_bool succeeded;
  MR_Word ImpVars1_11;
  MR_Word TypeCtorInfo_7_31;
  MR_Word TypeInfo_8_32;
  MR_Word TypeCtorInfo_9_33;
  MR_Word TypeInfo_10_34;
  MR_Word I_27;
  MR_Word RI_28;
  MR_Word DI_29;
  MR_Word RDI_30;

  ImpVars1_11 = mercury__robdd__extract_implications_1_f_0(TypeInfo_for_T_24, Robdd0_7);
  *ImpVars_10 = mode_robdd__implications__f_times_2_f_0(TypeInfo_for_T_24, ImpVars0_9, ImpVars1_11);
  *Robdd_8 = mercury__robdd__remove_implications_2_f_0(TypeInfo_for_T_24, *ImpVars_10, Robdd0_7);
  succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_24, *Robdd_8, Robdd0_7);
  if (succeeded)
  {
    I_27 = ((MR_Word) ((MR_hl_field(0, ImpVars1_11, (MR_Integer) 0))));
    RI_28 = ((MR_Word) ((MR_hl_field(0, ImpVars1_11, (MR_Integer) 1))));
    DI_29 = ((MR_Word) ((MR_hl_field(0, ImpVars1_11, (MR_Integer) 2))));
    RDI_30 = ((MR_Word) ((MR_hl_field(0, ImpVars1_11, (MR_Integer) 3))));
    TypeCtorInfo_7_31 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
    TypeCtorInfo_9_33 = (MR_Word) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1);
    {
      TypeInfo_8_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_8_32, 0) = ((MR_Box) (TypeCtorInfo_7_31));
      MR_hl_field(0, TypeInfo_8_32, 1) = ((MR_Box) (TypeInfo_for_T_24));
    }
    {
      TypeInfo_10_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_10_34, 0) = ((MR_Box) (TypeCtorInfo_9_33));
      MR_hl_field(0, TypeInfo_10_34, 1) = ((MR_Box) (TypeInfo_8_32));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_32, TypeInfo_10_34, (MR_Word) (I_27));
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_32, TypeInfo_10_34, (MR_Word) (RI_28));
      if (succeeded)
      {
        succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_32, TypeInfo_10_34, (MR_Word) (DI_29));
        if (succeeded)
          succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_32, TypeInfo_10_34, (MR_Word) (RDI_30));
      }
    }
  }
  if (succeeded)
    *Changed_6 = (MR_Integer) 0;
  else
    *Changed_6 = (MR_Integer) 1;
}

static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Tuple conv0_LambdaHeadVar__4_34;

  conv0_LambdaHeadVar__4_34 = mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__318__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_34));
  return wrapper_arg_4;
}

void MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word * Changed_6,
  MR_Word EQVars0_7,
  MR_Word * EQVars_8,
  MR_Word ImpVars0_9,
  MR_Word * ImpVars_10)
{
  MR_bool succeeded;
  MR_Word Imps0_11 = ((MR_Word) ((MR_hl_field(0, ImpVars0_9, (MR_Integer) 0))));
  MR_Word RevImps0_12 = ((MR_Word) ((MR_hl_field(0, ImpVars0_9, (MR_Integer) 1))));
  MR_Word DisImps_13 = ((MR_Word) ((MR_hl_field(0, ImpVars0_9, (MR_Integer) 2))));
  MR_Word RevDisImps_14 = ((MR_Word) ((MR_hl_field(0, ImpVars0_9, (MR_Integer) 3))));

  {
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_50_50;

    {
      TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_48_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    {
      TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_50_50, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_48_48));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_48_48, TypeInfo_50_50, (MR_Word) (Imps0_11));
  }
  if (!(succeeded))
  {
    MR_Word TypeInfo_52_52;
    MR_Word TypeInfo_54_54;

    {
      TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_52_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    {
      TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_54_54, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_54_54, 1) = ((MR_Box) (TypeInfo_52_52));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_52_52, TypeInfo_54_54, (MR_Word) (RevImps0_12));
  }
  if (succeeded)
  {
    *Changed_6 = (MR_Integer) 0;
    *EQVars_8 = EQVars0_7;
    *ImpVars_10 = ImpVars0_9;
  }
  else
  {
    MR_Word TypeInfo_56_56;
    MR_Word TypeInfo_58_58;
    MR_Word TypeInfo_61_61;
    MR_Word TypeInfo_63_63;
    MR_Word TypeInfo_65_65;
    MR_Word Imps_15;
    MR_Word RevImps_16;
    MR_Tuple Var_29;
    MR_Word Var_30;
    MR_Tuple Var_38;
    MR_Box conv1_Var_29;

    {
      TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_56_56, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_56_56, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    {
      TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_58_58, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_58_58, 1) = ((MR_Box) (TypeInfo_56_56));
    }
    {
      TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_61_61, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_equiv_vars_1));
      MR_hl_field(0, TypeInfo_61_61, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    {
      TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_63_63, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(0, TypeInfo_63_63, 1) = ((MR_Box) (TypeInfo_56_56));
      MR_hl_field(0, TypeInfo_63_63, 2) = ((MR_Box) (TypeInfo_58_58));
    }
    {
      TypeInfo_65_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_65_65, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
      MR_hl_field(0, TypeInfo_65_65, 1) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, TypeInfo_65_65, 2) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
      MR_hl_field(0, TypeInfo_65_65, 3) = ((MR_Box) (TypeInfo_61_61));
      MR_hl_field(0, TypeInfo_65_65, 4) = ((MR_Box) (TypeInfo_63_63));
      MR_hl_field(0, TypeInfo_65_65, 5) = ((MR_Box) (TypeInfo_63_63));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[2]));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1));
      MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_30, 3) = ((MR_Box) (TypeInfo_for_T_46));
    }
    {
      Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (EQVars0_7));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) (Imps0_11));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (RevImps0_12));
    }
    conv1_Var_29 = mercury__map__foldl_3_f_0(TypeInfo_56_56, TypeInfo_58_58, TypeInfo_65_65, (MR_Word) (Var_30), (MR_Word) (Imps0_11), ((MR_Box) (Var_38)));
    Var_29 = ((MR_Tuple) (conv1_Var_29));
    *Changed_6 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
    *EQVars_8 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
    Imps_15 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 2))));
    RevImps_16 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ImpVars_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Imps_15));
      MR_hl_field(0, base, 1) = ((MR_Box) (RevImps_16));
      MR_hl_field(0, base, 2) = ((MR_Box) (DisImps_13));
      MR_hl_field(0, base, 3) = ((MR_Box) (RevDisImps_14));
    }
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Tuple conv3_LambdaHeadVar__4_19;

  conv3_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_19));
  return wrapper_arg_4;
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_1(
  void * env_ptr_arg)
{
  struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s * env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_3(
  void * env_ptr_arg)
{
  struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s * env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__VA_19 = ((MR_Word) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv1_VA_19));
  (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__Vs_21 = ((MR_Word) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv0_Vs_21));
  mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_2(env_ptr);
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_5(
  void * env_ptr_arg)
{
  struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s * env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__VB_20 = ((MR_Word) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv2_VB_20));
  mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_4(env_ptr);
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_4(
  void * env_ptr_arg)
{
  struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s * env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17, (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__EQVars_5, (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__VA_19, (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__VB_20);
  (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded = !((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded);
  if ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded)
    mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_1(env_ptr);
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_2(
  void * env_ptr_arg)
{
  struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s * env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__BaseTypeClassInfo_for_uenum_26 = (MR_Word) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeClassInfo_for_uenum_27 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__BaseTypeClassInfo_for_uenum_26));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17));
    MR_hl_field(0, base, 2) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_13_23));
  }
  mercury__sparse_bitset__member_2_p_1((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeClassInfo_for_uenum_27, &(env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv2_VB_20, (MR_Word) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__Vs_21), mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_5, env_ptr);
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_6(
  void * env_ptr_arg)
{
  struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s * env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeInfo_15_25;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_13_23 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17));
        }
        {
          TypeInfo_15_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_15_25, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
          MR_hl_field(0, TypeInfo_15_25, 1) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_13_23));
        }
        mercury__map__member_3_p_0((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_13_23, TypeInfo_15_25, (MR_Word) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__ImpMap_18), &(env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv1_VA_19, &(env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__conv0_Vs_21, mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_3, env_ptr);
      }
      (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word EQVars_5,
  MR_Word * Changed_6,
  MR_Word ImpVars0_7,
  MR_Word * ImpVars_8)
{
  struct mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0_s env;

  (env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17 = TypeInfo_for_T_17;
  (env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__EQVars_5 = EQVars_5;
  {
    MR_Word TypeCtorInfo_31_33;
    MR_Word TypeCtorInfo_33_35;
    MR_Word TypeCtorInfo_35_37;
    MR_Word TypeCtorInfo_37_39;
    MR_Word TypeCtorInfo_38_40;
    MR_Word TypeInfo_32_49;
    MR_Word TypeInfo_34_51;
    MR_Word TypeInfo_36_53;
    MR_Word TypeInfo_39_56;
    MR_Word Imps0_9 = ((MR_Word) ((MR_hl_field(0, ImpVars0_7, (MR_Integer) 0))));
    MR_Word RevImps0_10 = ((MR_Word) ((MR_hl_field(0, ImpVars0_7, (MR_Integer) 1))));
    MR_Word DisImps_11 = ((MR_Word) ((MR_hl_field(0, ImpVars0_7, (MR_Integer) 2))));
    MR_Word RevDisImps_12 = ((MR_Word) ((MR_hl_field(0, ImpVars0_7, (MR_Integer) 3))));
    MR_Word Changed0_13;
    MR_Word Imps_14;
    MR_Word Changed1_15;
    MR_Word RevImps_16;
    MR_Tuple Var_28;
    MR_Word Var_29;
    MR_Tuple Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Integer PolyConst2_42;
    MR_Tuple Var_43;
    MR_Tuple Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word conv4_Var_31;
    MR_Box conv5_Var_28;
    MR_Word conv6_Var_46;
    MR_Box conv7_Var_43;

    (env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__ImpMap_18 = mode_robdd__implications__intersect_2_f_0((env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17, DisImps_11, RevDisImps_12);
    mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_6(&env);
    (env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded = !((env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded);
    if ((env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded)
    {
      TypeCtorInfo_31_33 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
      TypeCtorInfo_33_35 = (MR_Word) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1);
      TypeCtorInfo_38_40 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_tuple_0);
      PolyConst2_42 = (MR_Integer) 2;
      TypeCtorInfo_35_37 = (MR_Word) (&mercury__tree234__tree234__type_ctor_info_tree234_2);
      TypeCtorInfo_37_39 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
      {
        TypeInfo_32_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_32_49, 0) = ((MR_Box) (TypeCtorInfo_31_33));
        MR_hl_field(0, TypeInfo_32_49, 1) = ((MR_Box) ((env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17));
      }
      {
        TypeInfo_34_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_34_51, 0) = ((MR_Box) (TypeCtorInfo_33_35));
        MR_hl_field(0, TypeInfo_34_51, 1) = ((MR_Box) (TypeInfo_32_49));
      }
      {
        TypeInfo_36_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_36_53, 0) = ((MR_Box) (TypeCtorInfo_35_37));
        MR_hl_field(0, TypeInfo_36_53, 1) = ((MR_Box) (TypeInfo_32_49));
        MR_hl_field(0, TypeInfo_36_53, 2) = ((MR_Box) (TypeInfo_34_51));
      }
      {
        TypeInfo_39_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_39_56, 0) = ((MR_Box) (TypeCtorInfo_38_40));
        MR_hl_field(0, TypeInfo_39_56, 1) = ((MR_Box) (PolyConst2_42));
        MR_hl_field(0, TypeInfo_39_56, 2) = ((MR_Box) (TypeInfo_36_53));
        MR_hl_field(0, TypeInfo_39_56, 3) = ((MR_Box) (TypeCtorInfo_37_39));
      }
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[3]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_7));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) ((env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__TypeInfo_for_T_17));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) ((env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__EQVars_5));
      }
      conv4_Var_31 = mercury__map__init_0_f_0(TypeInfo_32_49, TypeInfo_34_51);
      Var_31 = (MR_Word) (conv4_Var_31);
      Var_32 = (MR_Integer) 0;
      {
        Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (Var_32));
      }
      conv5_Var_28 = mercury__map__foldl_3_f_0(TypeInfo_32_49, TypeInfo_34_51, TypeInfo_39_56, (MR_Word) (Var_29), (MR_Word) (Imps0_9), ((MR_Box) (Var_30)));
      Var_28 = ((MR_Tuple) (conv5_Var_28));
      Imps_14 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
      Changed0_13 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 1))));
      conv6_Var_46 = mercury__map__init_0_f_0(TypeInfo_32_49, TypeInfo_34_51);
      Var_46 = (MR_Word) (conv6_Var_46);
      Var_47 = (MR_Integer) 0;
      {
        Var_45 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(0, Var_45, 1) = ((MR_Box) (Var_47));
      }
      conv7_Var_43 = mercury__map__foldl_3_f_0(TypeInfo_32_49, TypeInfo_34_51, TypeInfo_39_56, (MR_Word) (Var_29), (MR_Word) (RevImps0_10), ((MR_Box) (Var_45)));
      Var_43 = ((MR_Tuple) (conv7_Var_43));
      RevImps_16 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 0))));
      Changed1_15 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *ImpVars_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Imps_14));
        MR_hl_field(0, base, 1) = ((MR_Box) (RevImps_16));
        MR_hl_field(0, base, 2) = ((MR_Box) (DisImps_11));
        MR_hl_field(0, base, 3) = ((MR_Box) (RevDisImps_12));
      }
      *Changed_6 = mercury__bool__or_2_f_0(Changed0_13, Changed1_15);
      (env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded = MR_TRUE;
    }
    return (env).mode_robdd__implications__propagate_equivalences_into_implications_4_p_0_env_0__succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_implication_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Tuple conv0_LambdaHeadVar__4_35;

  conv0_LambdaHeadVar__4_35 = mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__200__1_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_35));
  return wrapper_arg_4;
}

void MR_CALL 
mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(
  MR_Word TypeInfo_for_T_59,
  MR_Word * Changed_8,
  MR_Word TrueVars0_9,
  MR_Word * TrueVars_10,
  MR_Word FalseVars0_11,
  MR_Word * FalseVars_12,
  MR_Word ImpVars0_13,
  MR_Word * ImpVars_14)
{
  MR_bool succeeded;
  MR_Word TypeInfo_61_61;

  {
    TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_61_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_61_61, 1) = ((MR_Box) (TypeInfo_for_T_59));
  }
  succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_61_61, (MR_Word) (TrueVars0_9));
  if (succeeded)
    succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_61_61, (MR_Word) (FalseVars0_11));
  if (succeeded)
  {
    *TrueVars_10 = TrueVars0_9;
    *FalseVars_12 = FalseVars0_11;
    *ImpVars_14 = ImpVars0_13;
    *Changed_8 = (MR_Integer) 0;
  }
  else
  {
    MR_Word TypeInfo_48_81;
    MR_Word TypeInfo_50_83;
    MR_Word TypeInfo_52_85;
    MR_Word TypeInfo_55_88;
    MR_Word Imps0_15 = ((MR_Word) ((MR_hl_field(0, ImpVars0_13, (MR_Integer) 0))));
    MR_Word RevImps0_16 = ((MR_Word) ((MR_hl_field(0, ImpVars0_13, (MR_Integer) 1))));
    MR_Word DisImps0_17 = ((MR_Word) ((MR_hl_field(0, ImpVars0_13, (MR_Integer) 2))));
    MR_Word RevDisImps0_18 = ((MR_Word) ((MR_hl_field(0, ImpVars0_13, (MR_Integer) 3))));
    MR_Word Changed0_19;
    MR_Word TrueVars1_20;
    MR_Word FalseVars1_21;
    MR_Word Imps_22;
    MR_Word Changed1_23;
    MR_Word FalseVars2_24;
    MR_Word TrueVars2_25;
    MR_Word RevImps_26;
    MR_Word Changed2_27;
    MR_Word FalseVars3_28;
    MR_Word TrueVars3_29;
    MR_Word DisImps_30;
    MR_Word Changed3_31;
    MR_Word TrueVars4_32;
    MR_Word FalseVars4_33;
    MR_Word RevDisImps_34;
    MR_Word Changed4_35;
    MR_Word FalseVars5_36;
    MR_Word Changed5_37;
    MR_Word TrueVars5_38;
    MR_Word Changed6_39;
    MR_Word FalseVars6_40;
    MR_Word Changed7_41;
    MR_Word TrueVars6_42;
    MR_Word ImpVars6_43;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Tuple Var_62;
    MR_Word Var_63;
    MR_Tuple Var_64;
    MR_Tuple Var_76;
    MR_Tuple Var_78;
    MR_Box conv1_Var_62;
    MR_Box conv2_Var_76;

    {
      TypeInfo_48_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_48_81, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_48_81, 1) = ((MR_Box) (TypeInfo_for_T_59));
    }
    {
      TypeInfo_50_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_50_83, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_50_83, 1) = ((MR_Box) (TypeInfo_48_81));
    }
    {
      TypeInfo_52_85 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_52_85, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(0, TypeInfo_52_85, 1) = ((MR_Box) (TypeInfo_48_81));
      MR_hl_field(0, TypeInfo_52_85, 2) = ((MR_Box) (TypeInfo_50_83));
    }
    {
      TypeInfo_55_88 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_55_88, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
      MR_hl_field(0, TypeInfo_55_88, 1) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, TypeInfo_55_88, 2) = ((MR_Box) (TypeInfo_50_83));
      MR_hl_field(0, TypeInfo_55_88, 3) = ((MR_Box) (TypeInfo_50_83));
      MR_hl_field(0, TypeInfo_55_88, 4) = ((MR_Box) (TypeInfo_52_85));
      MR_hl_field(0, TypeInfo_55_88, 5) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
    }
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[2]));
      MR_hl_field(0, Var_63, 1) = ((MR_Box) (mode_robdd__implications__normalise_true_false_implication_vars_7_p_0_1));
      MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_63, 3) = ((MR_Box) (TypeInfo_for_T_59));
      MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_64 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) (TrueVars0_9));
      MR_hl_field(0, Var_64, 1) = ((MR_Box) (FalseVars0_11));
      MR_hl_field(0, Var_64, 2) = ((MR_Box) (Imps0_15));
      MR_hl_field(0, Var_64, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    conv1_Var_62 = mercury__map__foldl_3_f_0(TypeInfo_48_81, TypeInfo_50_83, TypeInfo_55_88, (MR_Word) (Var_63), (MR_Word) (Imps0_15), ((MR_Box) (Var_64)));
    Var_62 = ((MR_Tuple) (conv1_Var_62));
    TrueVars1_20 = ((MR_Word) ((MR_hl_field(0, Var_62, (MR_Integer) 0))));
    FalseVars1_21 = ((MR_Word) ((MR_hl_field(0, Var_62, (MR_Integer) 1))));
    Imps_22 = ((MR_Word) ((MR_hl_field(0, Var_62, (MR_Integer) 2))));
    Changed0_19 = ((MR_Word) ((MR_hl_field(0, Var_62, (MR_Integer) 3))));
    {
      Var_78 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (FalseVars1_21));
      MR_hl_field(0, Var_78, 1) = ((MR_Box) (TrueVars1_20));
      MR_hl_field(0, Var_78, 2) = ((MR_Box) (RevImps0_16));
      MR_hl_field(0, Var_78, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    conv2_Var_76 = mercury__map__foldl_3_f_0(TypeInfo_48_81, TypeInfo_50_83, TypeInfo_55_88, (MR_Word) (Var_63), (MR_Word) (RevImps0_16), ((MR_Box) (Var_78)));
    Var_76 = ((MR_Tuple) (conv2_Var_76));
    FalseVars2_24 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
    TrueVars2_25 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 1))));
    RevImps_26 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 2))));
    Changed1_23 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 3))));
    mode_robdd__implications__normalise_true_false_imp_map_8_p_0(TypeInfo_for_T_59, (MR_Integer) 1, &Changed2_27, FalseVars2_24, &FalseVars3_28, TrueVars2_25, &TrueVars3_29, DisImps0_17, &DisImps_30);
    mode_robdd__implications__normalise_true_false_imp_map_8_p_0(TypeInfo_for_T_59, (MR_Integer) 1, &Changed3_31, TrueVars3_29, &TrueVars4_32, FalseVars3_28, &FalseVars4_33, RevDisImps0_18, &RevDisImps_34);
    mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, (MR_Integer) 0, Imps_22, DisImps_30, &Changed4_35, FalseVars4_33, &FalseVars5_36);
    mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, (MR_Integer) 0, RevImps_26, RevDisImps_34, &Changed5_37, TrueVars4_32, &TrueVars5_38);
    mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, (MR_Integer) 1, RevImps_26, DisImps_30, &Changed6_39, FalseVars5_36, &FalseVars6_40);
    mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, (MR_Integer) 1, Imps_22, RevDisImps_34, &Changed7_41, TrueVars5_38, &TrueVars6_42);
    {
      ImpVars6_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImpVars6_43, 0) = ((MR_Box) (Imps_22));
      MR_hl_field(0, ImpVars6_43, 1) = ((MR_Box) (RevImps_26));
      MR_hl_field(0, ImpVars6_43, 2) = ((MR_Box) (DisImps_30));
      MR_hl_field(0, ImpVars6_43, 3) = ((MR_Box) (RevDisImps_34));
    }
    Var_58 = mercury__bool__or_2_f_0(Changed6_39, Changed7_41);
    Var_57 = mercury__bool__or_2_f_0(Changed5_37, Var_58);
    Var_56 = mercury__bool__or_2_f_0(Changed4_35, Var_57);
    Var_55 = mercury__bool__or_2_f_0(Changed3_31, Var_56);
    Var_54 = mercury__bool__or_2_f_0(Changed2_27, Var_55);
    Var_53 = mercury__bool__or_2_f_0(Changed1_23, Var_54);
    *Changed_8 = mercury__bool__or_2_f_0(Changed0_19, Var_53);
    switch (*Changed_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *TrueVars_10 = TrueVars6_42;
          *FalseVars_12 = FalseVars6_40;
          *ImpVars_14 = ImpVars6_43;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_44;

          mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(TypeInfo_for_T_59, &Var_44, TrueVars6_42, TrueVars_10, FalseVars6_40, FalseVars_12, ImpVars6_43, ImpVars_14);
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_37;

  conv2_HeadVar__4_37 = mode_robdd__implications__IntroducedFrom__func__normalise_pairs__263__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_37));
  return wrapper_arg_3;
}

static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Extract_7,
  MR_Word Imps_8,
  MR_Word DisImps_9,
  MR_Word * Changed_10,
  MR_Word FalseVars0_11,
  MR_Word * FalseVars_12)
{
  MR_bool succeeded;
  MR_Word Intersect_13;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_24_24;

  Intersect_13 = mode_robdd__implications__intersect_2_f_0(TypeInfo_for_T_20, Imps_8, DisImps_9);
  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_22_22));
  }
  succeeded = mercury__map__is_empty_1_p_0(TypeInfo_22_22, TypeInfo_24_24, (MR_Word) (Intersect_13));
  if (succeeded)
  {
    *Changed_10 = (MR_Integer) 0;
    *FalseVars_12 = FalseVars0_11;
  }
  else
  {
    *Changed_10 = (MR_Integer) 1;
    switch (Extract_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_26_26;
          MR_Word TypeInfo_28_28;
          MR_Word TypeClassInfo_for_uenum_30;
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word conv0_Var_16;
          MR_Word conv1_FalseVars_12;

          {
            TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_20));
          }
          {
            TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
            MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_26_26));
          }
          conv0_Var_16 = mercury__map__sorted_keys_1_f_0(TypeInfo_26_26, TypeInfo_28_28, (MR_Word) (Intersect_13));
          Var_16 = (MR_Word) (conv0_Var_16);
          {
            TypeClassInfo_for_uenum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_for_uenum_30, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
            MR_hl_field(0, TypeClassInfo_for_uenum_30, 1) = ((MR_Box) (TypeInfo_for_T_20));
            MR_hl_field(0, TypeClassInfo_for_uenum_30, 2) = ((MR_Box) (TypeInfo_26_26));
          }
          Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_20, TypeClassInfo_for_uenum_30, Var_16);
          conv1_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(TypeInfo_26_26, (MR_Word) (FalseVars0_11), (MR_Word) (Var_15));
          *FalseVars_12 = (MR_Word) (conv1_FalseVars_12);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_32_32;
          MR_Word TypeInfo_34_34;
          MR_Word Values_14;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Word Var_19;
          MR_Word conv3_Var_19;
          MR_Box conv4_Values_14;
          MR_Word conv5_FalseVars_12;

          {
            TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_20));
          }
          {
            TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_34_34, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
            MR_hl_field(0, TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_32_32));
          }
          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_17, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
            MR_hl_field(0, Var_17, 1) = ((MR_Box) (mode_robdd__implications__normalise_pairs_6_p_0_1));
            MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeInfo_for_T_20));
          }
          Var_18 = mercury__map__values_1_f_0(TypeInfo_32_32, TypeInfo_34_34, (MR_Word) (Intersect_13));
          conv3_Var_19 = mercury__sparse_bitset__init_0_f_0(TypeInfo_32_32);
          Var_19 = (MR_Word) (conv3_Var_19);
          conv4_Values_14 = mercury__list__foldl_3_f_0(TypeInfo_34_34, TypeInfo_34_34, (MR_Word) (Var_17), (MR_Word) (Var_18), ((MR_Box) (Var_19)));
          Values_14 = ((MR_Word) (conv4_Values_14));
          conv5_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(TypeInfo_32_32, (MR_Word) (FalseVars0_11), (MR_Word) (Values_14));
          *FalseVars_12 = (MR_Word) (conv5_FalseVars_12);
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Tuple conv0_LambdaHeadVar__4_35;

  conv0_LambdaHeadVar__4_35 = mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__200__1_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_35));
  return wrapper_arg_4;
}

static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word IsDisImp_9,
  MR_Word * Changed_10,
  MR_Word TrueVars0_11,
  MR_Word * TrueVars_12,
  MR_Word FalseVars0_13,
  MR_Word * FalseVars_14,
  MR_Word ImpMap0_15,
  MR_Word * ImpMap_16)
{
  MR_Word TypeInfo_48_48;
  MR_Word TypeInfo_50_50;
  MR_Word TypeInfo_52_52;
  MR_Word TypeInfo_55_55;
  MR_Tuple Var_30;
  MR_Word Var_31;
  MR_Tuple Var_38;
  MR_Box conv1_Var_30;

  {
    TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_48_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_for_T_46));
  }
  {
    TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_50_50, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_48_48));
  }
  {
    TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_52_52, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_48_48));
    MR_hl_field(0, TypeInfo_52_52, 2) = ((MR_Box) (TypeInfo_50_50));
  }
  {
    TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_55_55, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_55_55, 1) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, TypeInfo_55_55, 2) = ((MR_Box) (TypeInfo_50_50));
    MR_hl_field(0, TypeInfo_55_55, 3) = ((MR_Box) (TypeInfo_50_50));
    MR_hl_field(0, TypeInfo_55_55, 4) = ((MR_Box) (TypeInfo_52_52));
    MR_hl_field(0, TypeInfo_55_55, 5) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[2]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeInfo_for_T_46));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (IsDisImp_9));
  }
  {
    Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (TrueVars0_11));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (FalseVars0_13));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) (ImpMap0_15));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) ((MR_Integer) 0));
  }
  conv1_Var_30 = mercury__map__foldl_3_f_0(TypeInfo_48_48, TypeInfo_50_50, TypeInfo_55_55, (MR_Word) (Var_31), (MR_Word) (ImpMap0_15), ((MR_Box) (Var_38)));
  Var_30 = ((MR_Tuple) (conv1_Var_30));
  *TrueVars_12 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
  *FalseVars_14 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
  *ImpMap_16 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 2))));
  *Changed_10 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 3))));
}

MR_Word MR_CALL 
mode_robdd__implications__either_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  MR_Word HeadVar__4_4;
  MR_Tuple Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_12;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (A_5));
  }
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (B_6));
  }
  {
    Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  HeadVar__4_4 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_11, Var_12, ImpVars_7);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__implications__not_both_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  MR_Word HeadVar__4_4;
  MR_Tuple Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_12;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (A_5));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (B_6));
  }
  {
    Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  HeadVar__4_4 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_11, Var_12, ImpVars_7);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;

  conv2_HeadVar__4_4 = mode_robdd__implications__not_both_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Vars0_4,
  MR_Word ImpVars_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word TypeClassInfo_for_uenum_14;
    MR_Word Var_6;
    MR_Word Vars_7;
    MR_Word TypeInfo_12_12;
    MR_Box conv1_Var_6;
    MR_Word conv0_Vars_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    {
      TypeClassInfo_for_uenum_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_14, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_14, 1) = ((MR_Box) (TypeInfo_for_T_10));
      MR_hl_field(0, TypeClassInfo_for_uenum_14, 2) = ((MR_Box) (TypeInfo_12_12));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_14, &conv1_Var_6, (MR_Word) (Vars0_4), &conv0_Vars_7);
    if (succeeded)
    {
      Var_6 = ((MR_Word) (conv1_Var_6));
      Vars_7 = (MR_Word) (conv0_Vars_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_23_23;
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Box conv3_Var_9;
      MR_Word next_value_of_Vars0_4;
      MR_Word next_value_of_ImpVars_5;

      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_8, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
        MR_hl_field(0, Var_8, 1) = ((MR_Box) (mode_robdd__implications__at_most_one_of_2_f_0_1));
        MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_8, 3) = ((MR_Box) (TypeInfo_for_T_10));
        MR_hl_field(0, Var_8, 4) = ((MR_Box) (Var_6));
      }
      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_imp_vars_1));
        MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      conv3_Var_9 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_10, TypeInfo_23_23, TypeClassInfo_for_uenum_14, (MR_Word) (Var_8), Vars_7, ((MR_Box) (ImpVars_5)));
      Var_9 = ((MR_Word) (conv3_Var_9));
      // direct tailcall eliminated
      ;
      next_value_of_Vars0_4 = Vars_7;
      next_value_of_ImpVars_5 = Var_9;
      Vars0_4 = next_value_of_Vars0_4;
      ImpVars_5 = next_value_of_ImpVars_5;
      continue;
    }
    else
      HeadVar__3_3 = ImpVars_5;
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__imp_vars_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  MR_Word HeadVar__4_4;
  MR_Tuple Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_12;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (A_5));
  }
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (B_6));
  }
  {
    Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  HeadVar__4_4 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_11, Var_12, ImpVars_7);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__implications__neq_vars_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  MR_Word HeadVar__4_4;
  MR_Tuple Var_8;
  MR_Word Var_9;
  MR_Tuple Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_18;

  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (A_5));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (B_6));
  }
  {
    Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_9 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_15, Var_16, ImpVars_7);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (A_5));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (B_6));
  }
  {
    Var_10 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_12));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  HeadVar__4_4 = mode_robdd__implications__add_robdd_clauses_2_f_0(TypeInfo_for_T_15, Var_18, Var_9);
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mode_robdd__implications__add_robdd_clauses_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ImpVars_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      ImpVars_3 = HeadVar__2_2;
    else
    {
      MR_Tuple Clause_5 = ((MR_Tuple) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Clauses_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ImpVars1_9;

      succeeded = mode_robdd__implications__add_robdd_clause_2_2_f_0(TypeInfo_for_T_12, Clause_5, HeadVar__2_2, &ImpVars1_9);
      if (succeeded)
      {
        MR_Word TypeInfo_14_14;
        MR_Word TypeInfo_16_16;
        MR_Word Resolvents_10;
        MR_Word Var_11;
        MR_Word LitA_18 = ((MR_Word) ((MR_hl_field(0, Clause_5, (MR_Integer) 0))));
        MR_Word LitB_19 = ((MR_Word) ((MR_hl_field(0, Clause_5, (MR_Integer) 1))));
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word conv0_Resolvents_10;
        MR_Word conv1_Var_11;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        {
          TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_literal_1));
          MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
        }
        {
          TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
          MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, TypeInfo_16_16, 2) = ((MR_Box) (TypeInfo_14_14));
          MR_hl_field(0, TypeInfo_16_16, 3) = ((MR_Box) (TypeInfo_14_14));
        }
        Var_20 = mode_robdd__implications__get_resolvents_2_3_f_0(TypeInfo_for_T_12, LitA_18, LitB_19, ImpVars1_9);
        Var_21 = mode_robdd__implications__get_resolvents_2_3_f_0(TypeInfo_for_T_12, LitB_19, LitA_18, ImpVars1_9);
        conv0_Resolvents_10 = mercury__list__f_43_43_2_f_0(TypeInfo_16_16, (MR_Word) (Var_20), (MR_Word) (Var_21));
        Resolvents_10 = (MR_Word) (conv0_Resolvents_10);
        conv1_Var_11 = mercury__list__f_43_43_2_f_0(TypeInfo_16_16, (MR_Word) (Resolvents_10), (MR_Word) (Clauses_6));
        Var_11 = (MR_Word) (conv1_Var_11);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_11;
        next_value_of_HeadVar__2_2 = ImpVars1_9;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Clauses_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return ImpVars_3;
    break;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Tuple conv11_LambdaHeadVar__2_13;

  conv11_LambdaHeadVar__2_13 = mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__549__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_LambdaHeadVar__2_13));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word LitA_5,
  MR_Word LitB_6,
  MR_Word ImpVars_7)
{
  MR_bool succeeded;
  MR_Word Clauses_8;
  MR_Word TypeInfo_17_17;
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_36_42;
  MR_Word TypeClassInfo_for_uenum_44;
  MR_Word Literals_9;
  MR_Word Var_11;
  MR_Word Pos_21;
  MR_Word Neg_22;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word conv10_Literals_9;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_literal_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    TypeInfo_36_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_36_42, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_36_42, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (mode_robdd__implications__get_resolvents_2_3_f_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    TypeClassInfo_for_uenum_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_44, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_44, 1) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, TypeClassInfo_for_uenum_44, 2) = ((MR_Box) (TypeInfo_36_42));
  }
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (mode_robdd__implications__get_resolvents_2_3_f_0_2));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeInfo_for_T_15));
  }
  Var_48 = ((MR_Word) ((MR_hl_field(0, ImpVars_7, (MR_Integer) 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, ImpVars_7, (MR_Integer) 3))));
  if (((MR_tag((MR_Word) LitA_5)) == (MR_Integer) 1))
  {
    MR_Word Var_31;
    MR_Word VarA_32 = ((MR_Word) ((MR_hl_field(1, LitA_5, (MR_Integer) 0))));
    MR_Word Vs_49;
    MR_Word TypeInfo_11_53;
    MR_Box conv2_Vs_49;
    MR_Word Vs_56;
    MR_Word TypeInfo_11_60;
    MR_Box conv4_Vs_56;

    {
      TypeInfo_11_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_11_53, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_11_53, 1) = ((MR_Box) (TypeInfo_36_42));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_15, TypeInfo_36_42, TypeInfo_11_53, VarA_32, (MR_Word) (Var_45), &conv2_Vs_49);
    if (succeeded)
    {
      Vs_49 = ((MR_Word) (conv2_Vs_49));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Pos_21 = Vs_49;
    else
    {
      MR_Word conv3_Pos_21;

      conv3_Pos_21 = mercury__sparse_bitset__init_0_f_0(TypeInfo_36_42);
      Pos_21 = (MR_Word) (conv3_Pos_21);
    }
    Var_31 = ((MR_Word) ((MR_hl_field(0, ImpVars_7, (MR_Integer) 1))));
    {
      TypeInfo_11_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_11_60, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_11_60, 1) = ((MR_Box) (TypeInfo_36_42));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_15, TypeInfo_36_42, TypeInfo_11_60, VarA_32, (MR_Word) (Var_31), &conv4_Vs_56);
    if (succeeded)
    {
      Vs_56 = ((MR_Word) (conv4_Vs_56));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Neg_22 = Vs_56;
    else
    {
      MR_Word conv5_Neg_22;

      conv5_Neg_22 = mercury__sparse_bitset__init_0_f_0(TypeInfo_36_42);
      Neg_22 = (MR_Word) (conv5_Neg_22);
    }
  }
  else
  {
    MR_Word VarA_23 = ((MR_Word) ((MR_hl_field(0, LitA_5, (MR_Integer) 0))));
    MR_Word Var_30;
    MR_Word Vs_63;
    MR_Word TypeInfo_11_67;
    MR_Box conv6_Vs_63;
    MR_Word Vs_70;
    MR_Word TypeInfo_11_74;
    MR_Box conv8_Vs_70;

    {
      TypeInfo_11_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_11_67, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_11_67, 1) = ((MR_Box) (TypeInfo_36_42));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_15, TypeInfo_36_42, TypeInfo_11_67, VarA_23, (MR_Word) (Var_48), &conv6_Vs_63);
    if (succeeded)
    {
      Vs_63 = ((MR_Word) (conv6_Vs_63));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Pos_21 = Vs_63;
    else
    {
      MR_Word conv7_Pos_21;

      conv7_Pos_21 = mercury__sparse_bitset__init_0_f_0(TypeInfo_36_42);
      Pos_21 = (MR_Word) (conv7_Pos_21);
    }
    Var_30 = ((MR_Word) ((MR_hl_field(0, ImpVars_7, (MR_Integer) 2))));
    {
      TypeInfo_11_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_11_74, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_11_74, 1) = ((MR_Box) (TypeInfo_36_42));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_15, TypeInfo_36_42, TypeInfo_11_74, VarA_23, (MR_Word) (Var_30), &conv8_Vs_70);
    if (succeeded)
    {
      Vs_70 = ((MR_Word) (conv8_Vs_70));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Neg_22 = Vs_70;
    else
    {
      MR_Word conv9_Neg_22;

      conv9_Neg_22 = mercury__sparse_bitset__init_0_f_0(TypeInfo_36_42);
      Neg_22 = (MR_Word) (conv9_Neg_22);
    }
  }
  Var_26 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_15, TypeClassInfo_for_uenum_44, Pos_21);
  Var_24 = mercury__list__map_2_f_0(TypeInfo_36_42, TypeInfo_17_17, (MR_Word) (Var_25), (MR_Word) (Var_26));
  Var_29 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_15, TypeClassInfo_for_uenum_44, Neg_22);
  Var_27 = mercury__list__map_2_f_0(TypeInfo_36_42, TypeInfo_17_17, (MR_Word) (Var_28), (MR_Word) (Var_29));
  conv10_Literals_9 = mercury__list__f_43_43_2_f_0(TypeInfo_17_17, (MR_Word) (Var_24), (MR_Word) (Var_27));
  Literals_9 = (MR_Word) (conv10_Literals_9);
  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_19_19, 2) = ((MR_Box) (TypeInfo_17_17));
    MR_hl_field(0, TypeInfo_19_19, 3) = ((MR_Box) (TypeInfo_17_17));
  }
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[1]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (mode_robdd__implications__get_resolvents_2_3_f_0_3));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (LitB_6));
  }
  Clauses_8 = mercury__list__map_2_f_0(TypeInfo_17_17, TypeInfo_19_19, (MR_Word) (Var_11), (MR_Word) (Literals_9));
  return Clauses_8;
}

static MR_bool MR_CALL 
mode_robdd__implications__add_robdd_clause_2_2_f_0(
  MR_Word TypeInfo_for_T_100,
  MR_Tuple HeadVar__1_1,
  MR_Word ImpVars_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Var_102 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, ImpVars_2, (MR_Integer) 3))));
  MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, ImpVars_2, (MR_Integer) 2))));
  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, ImpVars_2, (MR_Integer) 1))));
  MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, ImpVars_2, (MR_Integer) 0))));

  if (((MR_tag((MR_Word) Var_101)) == (MR_Integer) 1))
  {
    MR_Word Var_127 = ((MR_Word) ((MR_hl_field(1, Var_101, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_102)) == (MR_Integer) 1))
    {
      MR_Word VA_24 = ((MR_Word) ((MR_hl_field(1, Var_102, (MR_Integer) 0))));
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_85;

      succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_24, Var_112, Var_127, &Var_33);
      if (succeeded)
      {
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (Var_114));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (Var_113));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) (Var_33));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (Var_111));
        }
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_127, Var_33, VA_24, &Var_31);
        if (succeeded)
        {
          Var_82 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
          Var_83 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
          Var_85 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 3))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_82));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_83));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_85));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word VA_14 = ((MR_Word) ((MR_hl_field(0, Var_102, (MR_Integer) 0))));
      MR_Word Var_19;
      MR_Word Var_21;
      MR_Word Var_23;
      MR_Word Var_61;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;

      succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_14, Var_113, Var_127, &Var_23);
      if (succeeded)
      {
        Var_61 = Var_114;
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_61));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_23));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) (Var_112));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (Var_111));
        }
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_127, Var_61, VA_14, &Var_21);
        if (succeeded)
        {
          Var_69 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
          Var_70 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 2))));
          Var_71 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 3))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_69));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_70));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_71));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  else
  {
    MR_Word Var_128 = ((MR_Word) ((MR_hl_field(0, Var_101, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_102)) == (MR_Integer) 1))
    {
      MR_Word VA_4 = ((MR_Word) ((MR_hl_field(1, Var_102, (MR_Integer) 0))));
      MR_Word Var_9;
      MR_Word Var_11;
      MR_Word Var_13;
      MR_Word Var_48;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_57;

      succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_4, Var_114, Var_128, &Var_13);
      if (succeeded)
      {
        Var_48 = Var_113;
        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_13));
          MR_hl_field(0, Var_9, 1) = ((MR_Box) (Var_48));
          MR_hl_field(0, Var_9, 2) = ((MR_Box) (Var_112));
          MR_hl_field(0, Var_9, 3) = ((MR_Box) (Var_111));
        }
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_128, Var_48, VA_4, &Var_11);
        if (succeeded)
        {
          Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
          Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
          Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_56));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_57));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word VA_34 = ((MR_Word) ((MR_hl_field(0, Var_102, (MR_Integer) 0))));
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;

      succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_34, Var_111, Var_128, &Var_43);
      if (succeeded)
      {
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_114));
          MR_hl_field(0, Var_39, 1) = ((MR_Box) (Var_113));
          MR_hl_field(0, Var_39, 2) = ((MR_Box) (Var_112));
          MR_hl_field(0, Var_39, 3) = ((MR_Box) (Var_43));
        }
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_128, Var_43, VA_34, &Var_41);
        if (succeeded)
        {
          Var_96 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
          Var_97 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
          Var_98 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_97));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_98));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_41));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VA_5,
  MR_Word M0_6,
  MR_Word VB_7,
  MR_Word * M_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_14_14;
  MR_Word TypeInfo_16_16;
  MR_Word Vs_9;
  MR_Box conv0_Vs_9;

  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_14_14));
  }
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_12, TypeInfo_14_14, TypeInfo_16_16, VA_5, (MR_Word) (M0_6), &conv0_Vs_9);
  if (succeeded)
  {
    Vs_9 = ((MR_Word) (conv0_Vs_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word BaseTypeClassInfo_for_uenum_23;
    MR_Word TypeClassInfo_for_uenum_24;
    MR_Word Var_10;
    MR_Word TypeClassInfo_for_uenum_20;
    MR_Word conv1_M_8;

    {
      TypeClassInfo_for_uenum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 1) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 2) = ((MR_Box) (TypeInfo_14_14));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_12, TypeClassInfo_for_uenum_20, Vs_9, VB_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      BaseTypeClassInfo_for_uenum_23 = (MR_Word) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__);
      {
        TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (BaseTypeClassInfo_for_uenum_23));
        MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_14_14));
      }
      Var_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_12, TypeClassInfo_for_uenum_24, Vs_9, VB_7);
      conv1_M_8 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_12, TypeInfo_14_14, TypeInfo_16_16, VA_5, (MR_Word) (M0_6), ((MR_Box) (Var_10)));
      *M_8 = (MR_Word) (conv1_M_8);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeClassInfo_for_uenum_30;
    MR_Word TypeInfo_32_32;
    MR_Word Var_11;
    MR_Word conv2_M_8;

    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeClassInfo_for_uenum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 1) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 2) = ((MR_Box) (TypeInfo_28_28));
    }
    Var_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_12, TypeClassInfo_for_uenum_30, VB_7);
    {
      TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_28_28));
    }
    conv2_M_8 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_12, TypeInfo_28_28, TypeInfo_32_32, VA_5, (MR_Word) (M0_6), ((MR_Box) (Var_11)));
    *M_8 = (MR_Word) (conv2_M_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mode_robdd__implications__filter_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word P_4,
  MR_Word ImpVars_5)
{
  MR_Word HeadVar__3_3;
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 0))));
  MR_Word RI_9 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 1))));
  MR_Word DI_10 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 2))));
  MR_Word RDI_11 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 3))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;

  Var_12 = mode_robdd__implications__filter_imp_map_2_f_0(TypeInfo_for_T_7, P_4, I_8);
  Var_13 = mode_robdd__implications__filter_imp_map_2_f_0(TypeInfo_for_T_7, P_4, RI_9);
  Var_14 = mode_robdd__implications__filter_imp_map_2_f_0(TypeInfo_for_T_7, P_4, DI_10);
  Var_15 = mode_robdd__implications__filter_imp_map_2_f_0(TypeInfo_for_T_7, P_4, RDI_11);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_15));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_13;

  conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__filter_imp_map__121__1_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_13));
  return wrapper_arg_4;
}

static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word P_4,
  MR_Word IM_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_25_25;
  MR_Word Var_9;
  MR_Box conv1_HeadVar__3_3;

  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
  }
  {
    TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_21_21));
    MR_hl_field(0, TypeInfo_25_25, 2) = ((MR_Box) (TypeInfo_23_23));
  }
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[1]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (mode_robdd__implications__filter_imp_map_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (TypeInfo_for_T_19));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (P_4));
  }
  conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_21_21, TypeInfo_23_23, TypeInfo_25_25, (MR_Word) (Var_9), (MR_Word) (IM_5), ((MR_Box) (IM_5)));
  HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Threshold_4,
  MR_Word ImpVars_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_15_43;
  MR_Word TypeInfo_17_45;
  MR_Word I_14 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 0))));
  MR_Word RI_15 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 1))));
  MR_Word DI_16 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 2))));
  MR_Word RDI_17 = ((MR_Word) ((MR_hl_field(0, ImpVars_5, (MR_Integer) 3))));
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word conv0_Var_22;
  MR_Word conv1_Var_23;
  MR_Word conv2_Var_28;
  MR_Word conv3_Var_29;
  MR_Word conv4_Var_34;
  MR_Word conv5_Var_35;
  MR_Word conv6_Var_40;
  MR_Word conv7_Var_41;

  {
    TypeInfo_15_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_43, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_15_43, 1) = ((MR_Box) (TypeInfo_for_T_13));
  }
  {
    TypeInfo_17_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_45, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_17_45, 1) = ((MR_Box) (TypeInfo_15_43));
  }
  conv0_Var_22 = mercury__map__to_assoc_list_1_f_0(TypeInfo_15_43, TypeInfo_17_45, (MR_Word) (I_14));
  Var_22 = (MR_Word) (conv0_Var_22);
  conv1_Var_23 = mercury__map__init_0_f_0(TypeInfo_15_43, TypeInfo_17_45);
  Var_23 = (MR_Word) (conv1_Var_23);
  Var_18 = mode_robdd__implications__restrict_threshold_2_3_f_0(TypeInfo_for_T_13, Threshold_4, Var_22, Var_23);
  conv2_Var_28 = mercury__map__to_assoc_list_1_f_0(TypeInfo_15_43, TypeInfo_17_45, (MR_Word) (RI_15));
  Var_28 = (MR_Word) (conv2_Var_28);
  conv3_Var_29 = mercury__map__init_0_f_0(TypeInfo_15_43, TypeInfo_17_45);
  Var_29 = (MR_Word) (conv3_Var_29);
  Var_19 = mode_robdd__implications__restrict_threshold_2_3_f_0(TypeInfo_for_T_13, Threshold_4, Var_28, Var_29);
  conv4_Var_34 = mercury__map__to_assoc_list_1_f_0(TypeInfo_15_43, TypeInfo_17_45, (MR_Word) (DI_16));
  Var_34 = (MR_Word) (conv4_Var_34);
  conv5_Var_35 = mercury__map__init_0_f_0(TypeInfo_15_43, TypeInfo_17_45);
  Var_35 = (MR_Word) (conv5_Var_35);
  Var_20 = mode_robdd__implications__restrict_threshold_2_3_f_0(TypeInfo_for_T_13, Threshold_4, Var_34, Var_35);
  conv6_Var_40 = mercury__map__to_assoc_list_1_f_0(TypeInfo_15_43, TypeInfo_17_45, (MR_Word) (RDI_17));
  Var_40 = (MR_Word) (conv6_Var_40);
  conv7_Var_41 = mercury__map__init_0_f_0(TypeInfo_15_43, TypeInfo_17_45);
  Var_41 = (MR_Word) (conv7_Var_41);
  Var_21 = mode_robdd__implications__restrict_threshold_2_3_f_0(TypeInfo_for_T_13, Threshold_4, Var_40, Var_41);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_21));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word IM_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IM_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      IM_4 = IM_3;
    else
    {
      MR_Word V_8;
      MR_Word Vs_9;
      MR_Word AL_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_23;

      V_8 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
      Vs_9 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
      mercury__term____Compare____var_1_0(TypeInfo_for_T_16, &Var_23, V_8, HeadVar__1_1);
      succeeded = ((MR_Integer) 2 == Var_23);
      if (succeeded)
        IM_4 = IM_3;
      else
      {
        MR_Word TypeInfo_20_20;
        MR_Word TypeClassInfo_for_uenum_22;
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word conv0_Var_15;
        MR_Word TypeInfo_10_25;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_IM_3;

        {
          TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
        }
        {
          TypeClassInfo_for_uenum_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeClassInfo_for_uenum_22, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
          MR_hl_field(0, TypeClassInfo_for_uenum_22, 1) = ((MR_Box) (TypeInfo_for_T_16));
          MR_hl_field(0, TypeClassInfo_for_uenum_22, 2) = ((MR_Box) (TypeInfo_20_20));
        }
        conv0_Var_15 = mercury__sparse_bitset__remove_gt_2_f_0(TypeClassInfo_for_uenum_22, (MR_Word) (Vs_9), ((MR_Box) (HeadVar__1_1)));
        Var_15 = (MR_Word) (conv0_Var_15);
        TypeInfo_10_25 = TypeInfo_20_20;
        succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_10_25, (MR_Word) (Var_15));
        if (succeeded)
        {
          MR_Word TypeInfo_14_29;
          MR_Word conv1_Var_14;

          {
            TypeInfo_14_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_14_29, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
            MR_hl_field(0, TypeInfo_14_29, 1) = ((MR_Box) (TypeInfo_10_25));
          }
          conv1_Var_14 = mercury__map__delete_2_f_0(TypeInfo_10_25, TypeInfo_14_29, (MR_Word) (IM_3), ((MR_Box) (V_8)));
          Var_14 = (MR_Word) (conv1_Var_14);
        }
        else
        {
          MR_Word TypeInfo_18_33;
          MR_Word conv2_Var_14;

          {
            TypeInfo_18_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_18_33, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
            MR_hl_field(0, TypeInfo_18_33, 1) = ((MR_Box) (TypeInfo_20_20));
          }
          conv2_Var_14 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_16, TypeInfo_20_20, TypeInfo_18_33, V_8, (MR_Word) (IM_3), ((MR_Box) (Var_15)));
          Var_14 = (MR_Word) (conv2_Var_14);
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = AL_10;
        next_value_of_IM_3 = Var_14;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        IM_3 = next_value_of_IM_3;
        continue;
      }
    }
    return IM_4;
    break;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__delete_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word ImpVars_4,
  MR_Word Var_5)
{
  MR_Word HeadVar__3_3;
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, ImpVars_4, (MR_Integer) 0))));
  MR_Word RI_9 = ((MR_Word) ((MR_hl_field(0, ImpVars_4, (MR_Integer) 1))));
  MR_Word DI_10 = ((MR_Word) ((MR_hl_field(0, ImpVars_4, (MR_Integer) 2))));
  MR_Word RDI_11 = ((MR_Word) ((MR_hl_field(0, ImpVars_4, (MR_Integer) 3))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;

  Var_12 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(TypeInfo_for_T_7, Var_5, I_8);
  Var_13 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(TypeInfo_for_T_7, Var_5, RI_9);
  Var_14 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(TypeInfo_for_T_7, Var_5, DI_10);
  Var_15 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(TypeInfo_for_T_7, Var_5, RDI_11);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_15));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_14;

  conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_14));
  return wrapper_arg_4;
}

static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Var_4,
  MR_Word IM0_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_24_24;
  MR_Word TypeInfo_26_26;
  MR_Word IM1_9;
  MR_Word Var_10;
  MR_Word conv1_IM1_9;
  MR_Box conv2_HeadVar__3_3;

  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_22_22));
  }
  {
    TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_22_22));
    MR_hl_field(0, TypeInfo_26_26, 2) = ((MR_Box) (TypeInfo_24_24));
  }
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mode_robdd__implications__delete_var_from_imp_map_2_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_4));
  }
  conv1_IM1_9 = mercury__map__delete_2_f_0(TypeInfo_22_22, TypeInfo_24_24, (MR_Word) (IM0_5), ((MR_Box) (Var_4)));
  IM1_9 = (MR_Word) (conv1_IM1_9);
  conv2_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_22_22, TypeInfo_24_24, TypeInfo_26_26, (MR_Word) (Var_10), (MR_Word) (IM1_9), ((MR_Box) (IM1_9)));
  HeadVar__3_3 = ((MR_Word) (conv2_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__implications__difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word ImpVarsA_4,
  MR_Word ImpVarsB_5)
{
  MR_Word HeadVar__3_3;
  MR_Word IA_8 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 0))));
  MR_Word RIA_9 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 1))));
  MR_Word DIA_10 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 2))));
  MR_Word RDIA_11 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 3))));
  MR_Word IB_12 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 0))));
  MR_Word RIB_13 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 1))));
  MR_Word DIB_14 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 2))));
  MR_Word RDIB_15 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 3))));
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  Var_16 = mode_robdd__implications__imp_map_difference_2_f_0(TypeInfo_for_T_7, IA_8, IB_12);
  Var_17 = mode_robdd__implications__imp_map_difference_2_f_0(TypeInfo_for_T_7, RIA_9, RIB_13);
  Var_18 = mode_robdd__implications__imp_map_difference_2_f_0(TypeInfo_for_T_7, DIA_10, DIB_14);
  Var_19 = mode_robdd__implications__imp_map_difference_2_f_0(TypeInfo_for_T_7, RDIA_11, RDIB_15);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_18));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_19));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_14;

  conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_14));
  return wrapper_arg_4;
}

static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word IMA_4,
  MR_Word IMB_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_23_23;

  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
  }
  succeeded = mercury__map__is_empty_1_p_0(TypeInfo_21_21, TypeInfo_23_23, (MR_Word) (IMA_4));
  if (succeeded)
    HeadVar__3_3 = IMA_4;
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_29_29;
    MR_Word Var_10;
    MR_Box conv1_HeadVar__3_3;

    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_25_25));
    }
    {
      TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_25_25));
      MR_hl_field(0, TypeInfo_29_29, 2) = ((MR_Box) (TypeInfo_27_27));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (mode_robdd__implications__imp_map_difference_2_f_0_1));
      MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfo_for_T_19));
    }
    conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_25_25, TypeInfo_27_27, TypeInfo_29_29, (MR_Word) (Var_10), (MR_Word) (IMB_5), ((MR_Box) (IMA_4)));
    HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__implications__f_plus_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word ImpVarsA_4,
  MR_Word ImpVarsB_5)
{
  MR_Word HeadVar__3_3;
  MR_Word IA_8 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 0))));
  MR_Word RIA_9 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 1))));
  MR_Word DIA_10 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 2))));
  MR_Word RDIA_11 = ((MR_Word) ((MR_hl_field(0, ImpVarsA_4, (MR_Integer) 3))));
  MR_Word IB_12 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 0))));
  MR_Word RIB_13 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 1))));
  MR_Word DIB_14 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 2))));
  MR_Word RDIB_15 = ((MR_Word) ((MR_hl_field(0, ImpVarsB_5, (MR_Integer) 3))));
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  Var_16 = mode_robdd__implications__intersect_2_f_0(TypeInfo_for_T_7, IA_8, IB_12);
  Var_17 = mode_robdd__implications__intersect_2_f_0(TypeInfo_for_T_7, RIA_9, RIB_13);
  Var_18 = mode_robdd__implications__intersect_2_f_0(TypeInfo_for_T_7, DIA_10, DIB_14);
  Var_19 = mode_robdd__implications__intersect_2_f_0(TypeInfo_for_T_7, RDIA_11, RDIB_15);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_18));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_19));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__4_11;

  conv2_LambdaHeadVar__4_11 = mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_11));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_15;

  conv0_HeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_15));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word IMA_4,
  MR_Word IMB_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_18_15;
  MR_Word TypeInfo_20_17;
  MR_Word TypeInfo_22_19;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_13;
  MR_Word conv1_Var_6;
  MR_Box conv3_HeadVar__3_3;

  {
    TypeInfo_18_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_18_15, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  {
    TypeInfo_20_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_20_17, 1) = ((MR_Box) (TypeInfo_18_15));
  }
  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (mode_robdd__implications__intersect_2_f_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (TypeInfo_for_T_8));
  }
  conv1_Var_6 = mercury__map__intersect_3_f_0(TypeInfo_20_17, TypeInfo_18_15, (MR_Word) (Var_7), (MR_Word) (IMA_4), (MR_Word) (IMB_5));
  Var_6 = (MR_Word) (conv1_Var_6);
  {
    TypeInfo_22_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_19, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_22_19, 1) = ((MR_Box) (TypeInfo_18_15));
    MR_hl_field(0, TypeInfo_22_19, 2) = ((MR_Box) (TypeInfo_20_17));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (mode_robdd__implications__intersect_2_f_0_2));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeInfo_for_T_8));
  }
  conv3_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_18_15, TypeInfo_20_17, TypeInfo_22_19, (MR_Word) (Var_13), (MR_Word) (Var_6), ((MR_Box) (Var_6)));
  HeadVar__3_3 = ((MR_Word) (conv3_HeadVar__3_3));
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__4_19;

  conv8_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv8_LambdaHeadVar__4_19));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__4_19;

  conv6_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv6_LambdaHeadVar__4_19));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__4_19;

  conv4_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv4_LambdaHeadVar__4_19));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__4_19;

  conv2_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_19));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
mode_robdd__implications__f_times_2_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word ImpVars_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_34_44;
  MR_Word TypeInfo_36_46;
  MR_Word TypeInfo_38_48;
  MR_Word Imps_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word RevImps_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word DisImps_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word RevDisImps_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_21;
  MR_Word Var_28;
  MR_Word Var_35;
  MR_Word Var_42;
  MR_Box conv3_Var_11;
  MR_Box conv5_Var_14;
  MR_Box conv7_Var_17;
  MR_Box conv9_HeadVar__3_3;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_2));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeInfo_34_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_34_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_34_44, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeInfo_36_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_36_46, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_36_46, 1) = ((MR_Box) (TypeInfo_34_44));
  }
  {
    TypeInfo_38_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_38_48, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_imp_vars_1));
    MR_hl_field(0, TypeInfo_38_48, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_3));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (Var_10));
  }
  conv3_Var_11 = mercury__map__foldl_3_f_0(TypeInfo_34_44, TypeInfo_36_46, TypeInfo_38_48, (MR_Word) (Var_21), (MR_Word) (Imps_5), ((MR_Box) (ImpVars_4)));
  Var_11 = ((MR_Word) (conv3_Var_11));
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_4));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (Var_9));
  }
  conv5_Var_14 = mercury__map__foldl_3_f_0(TypeInfo_34_44, TypeInfo_36_46, TypeInfo_38_48, (MR_Word) (Var_28), (MR_Word) (RevImps_6), ((MR_Box) (Var_11)));
  Var_14 = ((MR_Word) (conv5_Var_14));
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_5));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (Var_9));
  }
  conv7_Var_17 = mercury__map__foldl_3_f_0(TypeInfo_34_44, TypeInfo_36_46, TypeInfo_38_48, (MR_Word) (Var_35), (MR_Word) (DisImps_7), ((MR_Box) (Var_14)));
  Var_17 = ((MR_Word) (conv7_Var_17));
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_6));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_42, 5) = ((MR_Box) (Var_10));
  }
  conv9_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_34_44, TypeInfo_36_46, TypeInfo_38_48, (MR_Word) (Var_42), (MR_Word) (RevDisImps_8), ((MR_Box) (Var_17)));
  HeadVar__3_3 = ((MR_Word) (conv9_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__implications__init_imp_vars_0_f_0(
  MR_Word TypeInfo_for_T_6)
{
  MR_Word HeadVar__1_1;
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word conv0_Var_2;
  MR_Word conv1_Var_3;
  MR_Word conv2_Var_4;
  MR_Word conv3_Var_5;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
  }
  conv0_Var_2 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
  Var_2 = (MR_Word) (conv0_Var_2);
  conv1_Var_3 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
  Var_3 = (MR_Word) (conv1_Var_3);
  conv2_Var_4 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
  Var_4 = (MR_Word) (conv2_Var_4);
  conv3_Var_5 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
  Var_5 = (MR_Word) (conv3_Var_5);
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mode_robdd__implications____Unify____bin_clause_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mode_robdd__implications____Compare____bin_clause_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Tuple) (wrapper_arg_3)), ((MR_Tuple) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mode_robdd__implications____Unify____extract_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mode_robdd__implications____Compare____extract_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mode_robdd__implications____Unify____mklit_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mode_robdd__implications____Compare____mklit_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mode_robdd__implications__init(void)
{
}

void mercury__mode_robdd__implications__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mode_robdd__implications__mode_robdd__implications__type_ctor_info_bin_clause_1);
	MR_register_type_ctor_info(&mode_robdd__implications__mode_robdd__implications__type_ctor_info_extract_0);
	MR_register_type_ctor_info(&mode_robdd__implications__mode_robdd__implications__type_ctor_info_mklit_1);
}

void mercury__mode_robdd__implications__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mode_robdd__implications__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mode_robdd.implications.
