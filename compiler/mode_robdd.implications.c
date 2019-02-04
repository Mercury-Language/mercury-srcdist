/*
** Automatically generated from `mode_robdd.implications.m'
** by the Mercury compiler,
** version rotd-2018-03-08
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


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.equiv_vars.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s {
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4;
  MR_bool mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7;
  jmp_buf mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9;
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10;
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8;
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10;
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9;
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

static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0[2];

static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0[2];

static const MR_Integer mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0[2];

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Word LambdaHeadVar__3_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__1_21,
  MR_Word LambdaHeadVar__2_22);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__548__1_3_f_0(
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
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word EQVars_5,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Tuple LambdaHeadVar__3_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__2_35,
  MR_Word HeadVar__3_36);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word IsDisImp_9,
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Tuple LambdaHeadVar__3_34);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__120__1_5_f_0(
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
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word LambdaHeadVar__1_31,
  MR_Word LambdaHeadVar__2_32,
  MR_Tuple LambdaHeadVar__3_33);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__98__1_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Threshold_4,
  MR_Word LambdaHeadVar__1_8);

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
  MR_Word HeadVar__2_1,
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

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word IM_4,
  MR_Word RIM_5);

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

static MR_Word MR_CALL 
mode_robdd__implications__f_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VA_5,
  MR_Word M_6,
  MR_Word VB_7);

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

static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word V_5,
  MR_Word M_6,
  MR_Word Vs_7);

static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word EQVars_4,
  MR_Word DisImps_5,
  MR_Word RevDisImps_6);

static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word EQVars_5,
  MR_Word * Changed_6,
  MR_Word ImpMap0_7,
  MR_Word * ImpMap_8);

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
mode_robdd__implications__remove_empty_sets_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word IM_3);

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
mode_robdd__implications__add_clause_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Tuple Clause_4,
  MR_Word ImpVars_5);

static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Tuple HeadVar__1_1,
  MR_Word ImpVars_6);

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

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word LitA_4,
  MR_Word ImpVars_5);

static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word V_4,
  MR_Word M_5);

static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
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
mode_robdd__implications__filter_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word F_4,
  MR_Word ImpVars0_5);

static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word F_5,
  MR_Word ImpVarsA_6,
  MR_Word ImpVarsB_7);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word IM_8,
  MR_Word ImpVars_9);

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

static /* final */ const MR_Box mode_robdd__implications_scalar_common_2[2][10];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_3[1][6];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_4[6][7];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_5[4][8];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_6[4][9];




static /* final */ const MR_Integer mode_robdd__implications_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_2[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_4[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_5[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_6[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_literal_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_literal_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_bin_clause_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____bin_clause_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____bin_clause_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "bin_clause",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0 = {
  (MR_String) "keys",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1 = {
  (MR_String) "values",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mode_robdd__implications____Unify____extract_0_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____extract_0_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "extract",
  {     mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0 },
  {     mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0
};

const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_mklit_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____mklit_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____mklit_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "mklit",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__3_23;

    closure = closure_arg;
    conv0_LambdaHeadVar__3_23 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_23));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Word LambdaHeadVar__3_18)
{
  {
    MR_Word LambdaHeadVar__4_19;
    MR_Word TypeCtorInfo_39_39;
    MR_Word TypeInfo_40_40;
    MR_Word BaseTypeClassInfo_for_enum_41;
    MR_Word TypeClassInfo_for_enum_42;
    MR_Word TypeCtorInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word Var_20;
    MR_Box conv1_LambdaHeadVar__4_19;

    BaseTypeClassInfo_for_enum_41 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    TypeCtorInfo_39_39 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 0) = ((MR_Box) (TypeCtorInfo_39_39));
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    {
      TypeClassInfo_for_enum_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_42, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_41));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_42, 1) = ((MR_Box) (TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_42, 2) = ((MR_Box) (TypeInfo_40_40));
    }
    TypeCtorInfo_43_43 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
    {
      TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_44_44, 0) = ((MR_Box) (TypeCtorInfo_43_43));
      MR_hl_field(MR_mktag(0), TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (MkLitA_6));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (MkLitB_7));
      MR_hl_field(MR_mktag(0), Var_20, 6) = ((MR_Box) (LambdaHeadVar__1_16));
    }
    conv1_LambdaHeadVar__4_19 = mercury__sparse_bitset__foldl_3_f_0(TypeInfo_44_44, TypeClassInfo_for_enum_42, (MR_Word) Var_20, (MR_Word) LambdaHeadVar__2_17, ((MR_Box) (LambdaHeadVar__3_18)));
    LambdaHeadVar__4_19 = ((MR_Word) conv1_LambdaHeadVar__4_19);
    return LambdaHeadVar__4_19;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__1_21,
  MR_Word LambdaHeadVar__2_22)
{
  {
    MR_Word LambdaHeadVar__3_23;
    MR_Tuple Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_25;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
    MR_Box conv3_Var_26;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), MkLitA_6, (MR_Integer) 1)));
    conv1_Var_25 = func_0(((MR_Box) MkLitA_6), ((MR_Box) (LambdaHeadVar__1_16)));
    Var_25 = ((MR_Word) conv1_Var_25);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), MkLitB_7, (MR_Integer) 1)));
    conv3_Var_26 = func_2(((MR_Box) MkLitB_7), ((MR_Box) (LambdaHeadVar__1_21)));
    Var_26 = ((MR_Word) conv3_Var_26);
    {
      Var_24 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Var_26));
    }
    LambdaHeadVar__3_23 = mode_robdd__implications__add_clause_2_f_0(TypeInfo_for_T_32, Var_24, LambdaHeadVar__2_22);
    return LambdaHeadVar__3_23;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__548__1_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word LitB_6,
  MR_Word LambdaHeadVar__1_12)
{
  {
    MR_Tuple LambdaHeadVar__2_13;

    {
      LambdaHeadVar__2_13 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_13, 0) = ((MR_Box) (LambdaHeadVar__1_12));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_13, 1) = ((MR_Box) (LitB_6));
    }
    return LambdaHeadVar__2_13;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__3_19;

    closure = closure_arg;
    conv0_LambdaHeadVar__3_19 = mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_19));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word LambdaHeadVar__3_14)
{
  {
    MR_Word LambdaHeadVar__4_15;
    MR_Word TypeCtorInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word BaseTypeClassInfo_for_enum_34;
    MR_Word TypeClassInfo_for_enum_35;
    MR_Word TypeCtorInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word TypeCtorInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word Var_16;
    MR_Box conv1_LambdaHeadVar__4_15;

    BaseTypeClassInfo_for_enum_34 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (TypeCtorInfo_32_32));
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_25));
    }
    {
      TypeClassInfo_for_enum_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_35, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_34));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_35, 1) = ((MR_Box) (TypeInfo_for_T_25));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_35, 2) = ((MR_Box) (TypeInfo_33_33));
    }
    TypeCtorInfo_38_38 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    TypeCtorInfo_36_36 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_37_37, 0) = ((MR_Box) (TypeCtorInfo_36_36));
      MR_hl_field(MR_mktag(0), TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_33_33));
    }
    {
      TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 0) = ((MR_Box) (TypeCtorInfo_38_38));
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_33_33));
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_37_37));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeInfo_for_T_25));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (LambdaHeadVar__1_12));
    }
    conv1_LambdaHeadVar__4_15 = mercury__sparse_bitset__foldl_3_f_0(TypeInfo_39_39, TypeClassInfo_for_enum_35, (MR_Word) Var_16, (MR_Word) LambdaHeadVar__2_13, ((MR_Box) (LambdaHeadVar__3_14)));
    LambdaHeadVar__4_15 = ((MR_Word) conv1_LambdaHeadVar__4_15);
    return LambdaHeadVar__4_15;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18)
{
  {
    MR_Word LambdaHeadVar__3_19;

    LambdaHeadVar__3_19 = mode_robdd__implications__f_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_25, LambdaHeadVar__1_17, LambdaHeadVar__2_18, LambdaHeadVar__1_12);
    return LambdaHeadVar__3_19;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Var_4,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12,
  MR_Word LambdaHeadVar__3_13)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__4_14;
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word BaseTypeClassInfo_for_enum_29;
    MR_Word TypeClassInfo_for_enum_30;

    BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (TypeCtorInfo_27_27));
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_29));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 1) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 2) = ((MR_Box) (TypeInfo_28_28));
    }
    succeeded = mercury__sparse_bitset__contains_2_p_0(TypeClassInfo_for_enum_30, (MR_Word) LambdaHeadVar__2_12, ((MR_Box) (Var_4)));
    if (succeeded)
    {
      MR_Word TypeCtorInfo_31_31;
      MR_Word TypeInfo_32_32;
      MR_Word BaseTypeClassInfo_for_enum_33;
      MR_Word TypeClassInfo_for_enum_34;
      MR_Word Var_15;
      MR_Word conv0_Var_15;

      BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (TypeCtorInfo_31_31));
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      {
        TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_33));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 1) = ((MR_Box) (TypeInfo_for_T_20));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 2) = ((MR_Box) (TypeInfo_32_32));
      }
      conv0_Var_15 = mercury__sparse_bitset__delete_2_f_0(TypeClassInfo_for_enum_34, (MR_Word) LambdaHeadVar__2_12, ((MR_Box) (Var_4)));
      Var_15 = (MR_Word) conv0_Var_15;
      LambdaHeadVar__4_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(TypeInfo_for_T_20, LambdaHeadVar__1_11, LambdaHeadVar__3_13, Var_15);
    }
    else
      LambdaHeadVar__4_14 = LambdaHeadVar__3_13;
    return LambdaHeadVar__4_14;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word LambdaHeadVar__1_8,
  MR_Word LambdaHeadVar__2_9,
  MR_Word LambdaHeadVar__3_10)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__4_11;
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeInfo_24_24;

    TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_24_24, (MR_Word) LambdaHeadVar__2_9);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeCtorInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word conv0_LambdaHeadVar__4_11;

      TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_25_25));
        MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (TypeCtorInfo_27_27));
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_26_26));
      }
      conv0_LambdaHeadVar__4_11 = mercury__map__delete_2_f_0(TypeInfo_26_26, TypeInfo_28_28, (MR_Word) LambdaHeadVar__3_10, ((MR_Box) (LambdaHeadVar__1_8)));
      LambdaHeadVar__4_11 = (MR_Word) conv0_LambdaHeadVar__4_11;
    }
    else
      LambdaHeadVar__4_11 = LambdaHeadVar__3_10;
    return LambdaHeadVar__4_11;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word LambdaHeadVar__1_11,
  MR_Word LambdaHeadVar__2_12,
  MR_Word LambdaHeadVar__3_13)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__4_14;
    MR_Word VsA_9;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeCtorInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Box conv0_VsA_9;

    TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_30_30));
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (TypeCtorInfo_32_32));
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_31_31));
    }
    succeeded = mercury__map__elem_2_f_0(TypeInfo_31_31, TypeInfo_33_33, ((MR_Box) (LambdaHeadVar__1_11)), (MR_Word) LambdaHeadVar__3_13, &conv0_VsA_9);
    if (succeeded)
    {
      VsA_9 = ((MR_Word) conv0_VsA_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_34_34;
      MR_Word TypeInfo_35_35;
      MR_Word Var_15;
      MR_Word conv1_Var_15;

      TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (TypeCtorInfo_34_34));
        MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_19));
      }
      conv1_Var_15 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_35_35, (MR_Word) VsA_9, (MR_Word) LambdaHeadVar__2_12);
      Var_15 = (MR_Word) conv1_Var_15;
      LambdaHeadVar__4_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(TypeInfo_for_T_19, LambdaHeadVar__1_11, LambdaHeadVar__3_13, Var_15);
    }
    else
      LambdaHeadVar__4_14 = LambdaHeadVar__3_13;
    return LambdaHeadVar__4_14;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__2_13,
  MR_Word HeadVar__3_14)
{
  {
    MR_Word HeadVar__4_15;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word conv0_HeadVar__4_15;

    TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    conv0_HeadVar__4_15 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_17_17, (MR_Word) HeadVar__2_13, (MR_Word) HeadVar__3_14);
    HeadVar__4_15 = (MR_Word) conv0_HeadVar__4_15;
    return HeadVar__4_15;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure;

    closure = closure_arg;
    succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word EQVars_5,
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Tuple LambdaHeadVar__3_18)
{
  {
    MR_bool succeeded;
    MR_Tuple LambdaHeadVar__4_19;
    MR_Word TypeCtorInfo_41_41;
    MR_Word TypeInfo_42_42;
    MR_Word BaseTypeClassInfo_for_enum_43;
    MR_Word TypeClassInfo_for_enum_44;
    MR_Word Vs_13;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word IM_28;
    MR_Word C_29;
    MR_Word conv0_Vs_13;
    MR_Word TypeCtorInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word TypeCtorInfo_48_48;
    MR_Word TypeInfo_49_49;

    IM_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_18, (MR_Integer) 0)));
    C_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_18, (MR_Integer) 1)));
    BaseTypeClassInfo_for_enum_43 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 0) = ((MR_Box) (TypeCtorInfo_41_41));
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    {
      TypeClassInfo_for_enum_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_44, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_43));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_44, 1) = ((MR_Box) (TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_44, 2) = ((MR_Box) (TypeInfo_42_42));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (EQVars_5));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (LambdaHeadVar__1_16));
    }
    conv0_Vs_13 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_enum_44, (MR_Word) Var_20, (MR_Word) LambdaHeadVar__2_17);
    Vs_13 = (MR_Word) conv0_Vs_13;
    Var_21 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(TypeInfo_for_T_30, LambdaHeadVar__1_16, IM_28, Vs_13);
    TypeCtorInfo_48_48 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_47_47, 0) = ((MR_Box) (TypeCtorInfo_46_46));
      MR_hl_field(MR_mktag(0), TypeInfo_47_47, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    {
      TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_49_49, 0) = ((MR_Box) (TypeCtorInfo_48_48));
      MR_hl_field(MR_mktag(0), TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_47_47));
    }
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (Vs_13)), ((MR_Box) (LambdaHeadVar__2_17)));
    if (succeeded)
      Var_22 = C_29;
    else
      Var_22 = (MR_Integer) 1;
    {
      LambdaHeadVar__4_19 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_19, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_19, 1) = ((MR_Box) (Var_22));
    }
    return LambdaHeadVar__4_19;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__2_35,
  MR_Word HeadVar__3_36)
{
  {
    MR_Word HeadVar__4_37;
    MR_Word TypeCtorInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word conv0_HeadVar__4_37;

    TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 0) = ((MR_Box) (TypeCtorInfo_38_38));
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    conv0_HeadVar__4_37 = mercury__sparse_bitset__union_2_f_0(TypeInfo_39_39, (MR_Word) HeadVar__2_35, (MR_Word) HeadVar__3_36);
    HeadVar__4_37 = (MR_Word) conv0_HeadVar__4_37;
    return HeadVar__4_37;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word IsDisImp_9,
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Tuple LambdaHeadVar__3_34)
{
  {
    MR_bool succeeded;
    MR_Tuple LambdaHeadVar__4_35;
    MR_Word Ts_23;
    MR_Word Fs_24;
    MR_Word IMs_25;
    MR_Word C_26;
    MR_Word Ts0_42;
    MR_Word Fs0_43;
    MR_Word IMs0_44;
    MR_Word C0_45;
    MR_Word TypeCtorInfo_57_57;
    MR_Word TypeInfo_58_58;
    MR_Word BaseTypeClassInfo_for_enum_59;
    MR_Word TypeClassInfo_for_enum_60;
    MR_Word Var_36;

    Ts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_34, (MR_Integer) 0)));
    Fs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_34, (MR_Integer) 1)));
    IMs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_34, (MR_Integer) 2)));
    C0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_34, (MR_Integer) 3)));
    succeeded = (IsDisImp_9 == (MR_Integer) 1);
    if (succeeded)
      Var_36 = Fs0_43;
    else
      Var_36 = Ts0_42;
    BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    TypeCtorInfo_57_57 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_58_58, 0) = ((MR_Box) (TypeCtorInfo_57_57));
      MR_hl_field(MR_mktag(0), TypeInfo_58_58, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    {
      TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_60, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_59));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_60, 1) = ((MR_Box) (TypeInfo_for_T_46));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_60, 2) = ((MR_Box) (TypeInfo_58_58));
    }
    succeeded = mercury__sparse_bitset__contains_2_p_0(TypeClassInfo_for_enum_60, (MR_Word) Var_36, ((MR_Box) (LambdaHeadVar__1_32)));
    if (succeeded)
    {
      MR_Word TypeCtorInfo_61_61;
      MR_Word TypeInfo_62_62;
      MR_Word TypeCtorInfo_63_63;
      MR_Word TypeInfo_64_64;
      MR_Word conv0_Ts_23;
      MR_Word conv1_IMs_25;

      TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_62_62, 0) = ((MR_Box) (TypeCtorInfo_61_61));
        MR_hl_field(MR_mktag(0), TypeInfo_62_62, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      conv0_Ts_23 = mercury__sparse_bitset__union_2_f_0(TypeInfo_62_62, (MR_Word) Ts0_42, (MR_Word) LambdaHeadVar__2_33);
      Ts_23 = (MR_Word) conv0_Ts_23;
      Fs_24 = Fs0_43;
      TypeCtorInfo_63_63 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_64_64, 0) = ((MR_Box) (TypeCtorInfo_63_63));
        MR_hl_field(MR_mktag(0), TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_62_62));
      }
      conv1_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_62_62, TypeInfo_64_64, (MR_Word) IMs0_44, ((MR_Box) (LambdaHeadVar__1_32)));
      IMs_25 = (MR_Word) conv1_IMs_25;
      C_26 = (MR_Integer) 1;
    }
    else
    {
      MR_Word TypeCtorInfo_65_65;
      MR_Word TypeInfo_66_66;
      MR_Word BaseTypeClassInfo_for_enum_67;
      MR_Word TypeClassInfo_for_enum_68;
      MR_Word Var_37;

      succeeded = (IsDisImp_9 == (MR_Integer) 1);
      if (succeeded)
        Var_37 = Ts0_42;
      else
        Var_37 = Fs0_43;
      BaseTypeClassInfo_for_enum_67 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 0) = ((MR_Box) (TypeCtorInfo_65_65));
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      {
        TypeClassInfo_for_enum_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_68, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_67));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_68, 1) = ((MR_Box) (TypeInfo_for_T_46));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_68, 2) = ((MR_Box) (TypeInfo_66_66));
      }
      succeeded = mercury__sparse_bitset__contains_2_p_0(TypeClassInfo_for_enum_68, (MR_Word) Var_37, ((MR_Box) (LambdaHeadVar__1_32)));
      if (succeeded)
      {
        MR_Word TypeCtorInfo_69_69;
        MR_Word TypeInfo_70_70;
        MR_Word TypeCtorInfo_71_71;
        MR_Word TypeInfo_72_72;
        MR_Word conv2_IMs_25;

        Ts_23 = Ts0_42;
        Fs_24 = Fs0_43;
        TypeCtorInfo_69_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_70_70, 0) = ((MR_Box) (TypeCtorInfo_69_69));
          MR_hl_field(MR_mktag(0), TypeInfo_70_70, 1) = ((MR_Box) (TypeInfo_for_T_46));
        }
        TypeCtorInfo_71_71 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_72_72, 0) = ((MR_Box) (TypeCtorInfo_71_71));
          MR_hl_field(MR_mktag(0), TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_70_70));
        }
        conv2_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_70_70, TypeInfo_72_72, (MR_Word) IMs0_44, ((MR_Box) (LambdaHeadVar__1_32)));
        IMs_25 = (MR_Word) conv2_IMs_25;
        C_26 = (MR_Integer) 1;
      }
      else
      {
        MR_Word TypeCtorInfo_73_73;
        MR_Word TypeInfo_74_74;
        MR_Word FVs_27;
        MR_Word conv3_FVs_27;

        TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_74_74, 0) = ((MR_Box) (TypeCtorInfo_73_73));
          MR_hl_field(MR_mktag(0), TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_for_T_46));
        }
        conv3_FVs_27 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_74_74, (MR_Word) Fs0_43, (MR_Word) LambdaHeadVar__2_33);
        FVs_27 = (MR_Word) conv3_FVs_27;
        succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_74_74, (MR_Word) FVs_27);
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_83_83;
          MR_Word TypeInfo_84_84;
          MR_Word TypeCtorInfo_85_85;
          MR_Word TypeInfo_86_86;
          MR_Word conv6_IMs_25;

          succeeded = (IsDisImp_9 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word TypeCtorInfo_75_75;
            MR_Word TypeInfo_76_76;
            MR_Word BaseTypeClassInfo_for_enum_77;
            MR_Word TypeClassInfo_for_enum_78;
            MR_Word conv4_Ts_23;

            BaseTypeClassInfo_for_enum_77 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_76_76, 0) = ((MR_Box) (TypeCtorInfo_75_75));
              MR_hl_field(MR_mktag(0), TypeInfo_76_76, 1) = ((MR_Box) (TypeInfo_for_T_46));
            }
            {
              TypeClassInfo_for_enum_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_78, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_77));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_78, 1) = ((MR_Box) (TypeInfo_for_T_46));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_78, 2) = ((MR_Box) (TypeInfo_76_76));
            }
            conv4_Ts_23 = mercury__sparse_bitset__insert_2_f_0(TypeClassInfo_for_enum_78, (MR_Word) Ts0_42, ((MR_Box) (LambdaHeadVar__1_32)));
            Ts_23 = (MR_Word) conv4_Ts_23;
          }
          else
            Ts_23 = Ts0_42;
          succeeded = (IsDisImp_9 == (MR_Integer) 1);
          if (succeeded)
            Fs_24 = Fs0_43;
          else
          {
            MR_Word TypeCtorInfo_79_79;
            MR_Word TypeInfo_80_80;
            MR_Word BaseTypeClassInfo_for_enum_81;
            MR_Word TypeClassInfo_for_enum_82;
            MR_Word conv5_Fs_24;

            BaseTypeClassInfo_for_enum_81 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_80_80, 0) = ((MR_Box) (TypeCtorInfo_79_79));
              MR_hl_field(MR_mktag(0), TypeInfo_80_80, 1) = ((MR_Box) (TypeInfo_for_T_46));
            }
            {
              TypeClassInfo_for_enum_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_82, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_81));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_82, 1) = ((MR_Box) (TypeInfo_for_T_46));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_82, 2) = ((MR_Box) (TypeInfo_80_80));
            }
            conv5_Fs_24 = mercury__sparse_bitset__insert_2_f_0(TypeClassInfo_for_enum_82, (MR_Word) Fs0_43, ((MR_Box) (LambdaHeadVar__1_32)));
            Fs_24 = (MR_Word) conv5_Fs_24;
          }
          TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          {
            TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_84_84, 0) = ((MR_Box) (TypeCtorInfo_83_83));
            MR_hl_field(MR_mktag(0), TypeInfo_84_84, 1) = ((MR_Box) (TypeInfo_for_T_46));
          }
          TypeCtorInfo_85_85 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
          {
            TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_86_86, 0) = ((MR_Box) (TypeCtorInfo_85_85));
            MR_hl_field(MR_mktag(0), TypeInfo_86_86, 1) = ((MR_Box) (TypeInfo_84_84));
          }
          conv6_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_84_84, TypeInfo_86_86, (MR_Word) IMs0_44, ((MR_Box) (LambdaHeadVar__1_32)));
          IMs_25 = (MR_Word) conv6_IMs_25;
          C_26 = (MR_Integer) 1;
        }
        else
        {
          MR_Word TVs_28;
          MR_Word TypeCtorInfo_87_87;
          MR_Word TypeInfo_88_88;
          MR_Word conv7_TVs_28;

          TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          {
            TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_88_88, 0) = ((MR_Box) (TypeCtorInfo_87_87));
            MR_hl_field(MR_mktag(0), TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_46));
          }
          conv7_TVs_28 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_88_88, (MR_Word) Ts0_42, (MR_Word) LambdaHeadVar__2_33);
          TVs_28 = (MR_Word) conv7_TVs_28;
          succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_88_88, (MR_Word) TVs_28);
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Word TypeCtorInfo_89_89;
            MR_Word TypeInfo_90_90;
            MR_Word UTVs_29;
            MR_Word conv8_UTVs_29;

            Ts_23 = Ts0_42;
            Fs_24 = Fs0_43;
            TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_90_90, 0) = ((MR_Box) (TypeCtorInfo_89_89));
              MR_hl_field(MR_mktag(0), TypeInfo_90_90, 1) = ((MR_Box) (TypeInfo_for_T_46));
            }
            conv8_UTVs_29 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_90_90, (MR_Word) LambdaHeadVar__2_33, (MR_Word) TVs_28);
            UTVs_29 = (MR_Word) conv8_UTVs_29;
            succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_90_90, (MR_Word) UTVs_29);
            if (succeeded)
            {
              MR_Word TypeCtorInfo_91_91;
              MR_Word TypeInfo_92_92;
              MR_Word conv9_IMs_25;

              TypeCtorInfo_91_91 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
              {
                TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_92_92, 0) = ((MR_Box) (TypeCtorInfo_91_91));
                MR_hl_field(MR_mktag(0), TypeInfo_92_92, 1) = ((MR_Box) (TypeInfo_90_90));
              }
              conv9_IMs_25 = mercury__map__delete_2_f_0(TypeInfo_90_90, TypeInfo_92_92, (MR_Word) IMs0_44, ((MR_Box) (LambdaHeadVar__1_32)));
              IMs_25 = (MR_Word) conv9_IMs_25;
            }
            else
            {
              MR_Word TypeCtorInfo_93_93;
              MR_Word TypeInfo_94_94;
              MR_Word conv10_IMs_25;

              TypeCtorInfo_93_93 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
              {
                TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_94_94, 0) = ((MR_Box) (TypeCtorInfo_93_93));
                MR_hl_field(MR_mktag(0), TypeInfo_94_94, 1) = ((MR_Box) (TypeInfo_90_90));
              }
              conv10_IMs_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(TypeInfo_90_90, TypeInfo_94_94, ((MR_Box) (LambdaHeadVar__1_32)), (MR_Word) IMs0_44, ((MR_Box) (UTVs_29)));
              IMs_25 = (MR_Word) conv10_IMs_25;
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
      LambdaHeadVar__4_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_35, 0) = ((MR_Box) (Ts_23));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_35, 1) = ((MR_Box) (Fs_24));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_35, 2) = ((MR_Box) (IMs_25));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_35, 3) = ((MR_Box) (C_26));
    }
    return LambdaHeadVar__4_35;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__120__1_5_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word P_4,
  MR_Word LambdaHeadVar__1_10,
  MR_Word LambdaHeadVar__2_11,
  MR_Word LambdaHeadVar__3_12)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__4_13;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1)));
    succeeded = func_0(((MR_Box) P_4), ((MR_Box) (LambdaHeadVar__1_10)));
    if (succeeded)
    {
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word BaseTypeClassInfo_for_enum_28;
      MR_Word TypeClassInfo_for_enum_29;
      MR_Word Var_14;
      MR_Word conv1_Var_14;

      BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_19));
      }
      {
        TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_28));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, 1) = ((MR_Box) (TypeInfo_for_T_19));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, 2) = ((MR_Box) (TypeInfo_27_27));
      }
      conv1_Var_14 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_enum_29, (MR_Word) P_4, (MR_Word) LambdaHeadVar__2_11);
      Var_14 = (MR_Word) conv1_Var_14;
      LambdaHeadVar__4_13 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(TypeInfo_for_T_19, LambdaHeadVar__1_10, LambdaHeadVar__3_12, Var_14);
    }
    else
    {
      MR_Word TypeCtorInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word TypeCtorInfo_32_32;
      MR_Word TypeInfo_33_33;
      MR_Word conv2_LambdaHeadVar__4_13;

      TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_30_30));
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_19));
      }
      TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (TypeCtorInfo_32_32));
        MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_31_31));
      }
      conv2_LambdaHeadVar__4_13 = mercury__map__delete_2_f_0(TypeInfo_31_31, TypeInfo_33_33, (MR_Word) LambdaHeadVar__3_12, ((MR_Box) (LambdaHeadVar__1_10)));
      LambdaHeadVar__4_13 = (MR_Word) conv2_LambdaHeadVar__4_13;
    }
    return LambdaHeadVar__4_13;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word LambdaHeadVar__1_10,
  MR_Word LambdaHeadVar__2_11,
  MR_Word LambdaHeadVar__3_12)
{
  {
    MR_Word LambdaHeadVar__4_13;
    MR_Word Var_14;

    Var_14 = mode_robdd__implications__imp_vars_3_f_0(TypeInfo_for_T_19, LambdaHeadVar__1_10, LambdaHeadVar__2_11, LambdaHeadVar__3_12);
    LambdaHeadVar__4_13 = mode_robdd__implications__imp_vars_3_f_0(TypeInfo_for_T_19, LambdaHeadVar__2_11, LambdaHeadVar__1_10, Var_14);
    return LambdaHeadVar__4_13;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word LambdaHeadVar__1_31,
  MR_Word LambdaHeadVar__2_32,
  MR_Tuple LambdaHeadVar__3_33)
{
  {
    MR_bool succeeded;
    MR_Tuple LambdaHeadVar__4_34;
    MR_Word C_23;
    MR_Word E_24;
    MR_Word I_25;
    MR_Word R_26;
    MR_Word C0_42;
    MR_Word E0_43;
    MR_Word I0_44;
    MR_Word R0_45;
    MR_Word RVs_27;
    MR_Word EVs_28;
    MR_Word TypeCtorInfo_67_67;
    MR_Word TypeInfo_68_68;
    MR_Word TypeCtorInfo_69_69;
    MR_Word TypeInfo_70_70;
    MR_Box conv0_RVs_27;
    MR_Word conv1_EVs_28;

    C0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_33, (MR_Integer) 0)));
    E0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_33, (MR_Integer) 1)));
    I0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_33, (MR_Integer) 2)));
    R0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__3_33, (MR_Integer) 3)));
    TypeCtorInfo_67_67 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_68_68, 0) = ((MR_Box) (TypeCtorInfo_67_67));
      MR_hl_field(MR_mktag(0), TypeInfo_68_68, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    TypeCtorInfo_69_69 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_70_70, 0) = ((MR_Box) (TypeCtorInfo_69_69));
      MR_hl_field(MR_mktag(0), TypeInfo_70_70, 1) = ((MR_Box) (TypeInfo_68_68));
    }
    succeeded = mercury__map__elem_2_f_0(TypeInfo_68_68, TypeInfo_70_70, ((MR_Box) (LambdaHeadVar__1_31)), (MR_Word) R0_45, &conv0_RVs_27);
    if (succeeded)
    {
      RVs_27 = ((MR_Word) conv0_RVs_27);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      conv1_EVs_28 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_68_68, (MR_Word) LambdaHeadVar__2_32, (MR_Word) RVs_27);
      EVs_28 = (MR_Word) conv1_EVs_28;
      succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_68_68, (MR_Word) EVs_28);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_71_71;
      MR_Word TypeInfo_72_72;
      MR_Word BaseTypeClassInfo_for_enum_73;
      MR_Word TypeClassInfo_for_enum_74;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word conv2_Var_35;
      MR_Word conv3_Var_36;
      MR_Word conv4_Var_37;

      C_23 = (MR_Integer) 1;
      BaseTypeClassInfo_for_enum_73 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_72_72, 0) = ((MR_Box) (TypeCtorInfo_71_71));
        MR_hl_field(MR_mktag(0), TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      {
        TypeClassInfo_for_enum_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_74, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_73));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_74, 1) = ((MR_Box) (TypeInfo_for_T_46));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_74, 2) = ((MR_Box) (TypeInfo_72_72));
      }
      conv2_Var_35 = mercury__sparse_bitset__insert_2_f_0(TypeClassInfo_for_enum_74, (MR_Word) EVs_28, ((MR_Box) (LambdaHeadVar__1_31)));
      Var_35 = (MR_Word) conv2_Var_35;
      E_24 = mode_robdd__equiv_vars__add_equalities_2_f_0(TypeInfo_for_T_46, Var_35, E0_43);
      conv3_Var_36 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_72_72, (MR_Word) LambdaHeadVar__2_32, (MR_Word) RVs_27);
      Var_36 = (MR_Word) conv3_Var_36;
      I_25 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(TypeInfo_for_T_46, LambdaHeadVar__1_31, I0_44, Var_36);
      conv4_Var_37 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_72_72, (MR_Word) RVs_27, (MR_Word) LambdaHeadVar__2_32);
      Var_37 = (MR_Word) conv4_Var_37;
      R_26 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(TypeInfo_for_T_46, LambdaHeadVar__1_31, R0_45, Var_37);
    }
    else
    {
      C_23 = C0_42;
      E_24 = E0_43;
      I_25 = I0_44;
      R_26 = R0_45;
    }
    {
      LambdaHeadVar__4_34 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_34, 0) = ((MR_Box) (C_23));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_34, 1) = ((MR_Box) (E_24));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_34, 2) = ((MR_Box) (I_25));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__4_34, 3) = ((MR_Box) (R_26));
    }
    return LambdaHeadVar__4_34;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__98__1_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Threshold_4,
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_Word LambdaHeadVar__2_9;
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word conv0_Var_10;
    MR_Word conv1_Var_11;

    TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    conv0_Var_10 = mercury__map__to_assoc_list_1_f_0(TypeInfo_15_15, TypeInfo_17_17, (MR_Word) LambdaHeadVar__1_8);
    Var_10 = (MR_Word) conv0_Var_10;
    conv1_Var_11 = mercury__map__init_0_f_0(TypeInfo_15_15, TypeInfo_17_17);
    Var_11 = (MR_Word) conv1_Var_11;
    LambdaHeadVar__2_9 = mode_robdd__implications__restrict_threshold_2_3_f_0(TypeInfo_for_T_13, Threshold_4, Var_10, Var_11);
    return LambdaHeadVar__2_9;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeCtorInfo_7_7;
    MR_Word TypeInfo_8_8;
    MR_Word TypeCtorInfo_9_9;
    MR_Word TypeInfo_10_10;
    MR_Word TypeCtorInfo_11_11;
    MR_Word TypeInfo_13_13;
    MR_Word Cast_HeadVar1_4;
    MR_Word Cast_HeadVar2_5;
    MR_Integer PolyConst2_12;

    Cast_HeadVar1_4 = HeadVar__2_2;
    Cast_HeadVar2_5 = HeadVar__3_3;
    TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_func_0;
    PolyConst2_12 = (MR_Integer) 2;
    TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    TypeCtorInfo_9_9 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (PolyConst2_12));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 3) = ((MR_Box) (TypeInfo_10_10));
    }
    mercury__builtin__compare_3_p_0(TypeInfo_13_13, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3;
    MR_Word Cast_HeadVar2_4;

    Cast_HeadVar1_3 = HeadVar__1_1;
    Cast_HeadVar2_4 = HeadVar__2_2;
    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4;
    MR_Integer Cast_HeadVar2_5;

    Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;
    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = (HeadVar__2_1 == HeadVar__2_2);
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Tuple HeadVar__2_2,
  MR_Tuple HeadVar__3_3)
{
  {
    MR_Word TypeCtorInfo_7_7;
    MR_Word TypeInfo_8_8;
    MR_Word TypeCtorInfo_9_9;
    MR_Word TypeInfo_11_11;
    MR_Tuple Cast_HeadVar1_4;
    MR_Tuple Cast_HeadVar2_5;
    MR_Integer PolyConst2_10;

    Cast_HeadVar1_4 = HeadVar__2_2;
    Cast_HeadVar2_5 = HeadVar__3_3;
    TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    PolyConst2_10 = (MR_Integer) 2;
    TypeCtorInfo_7_7 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (PolyConst2_10));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 2) = ((MR_Box) (TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 3) = ((MR_Box) (TypeInfo_8_8));
    }
    mercury__builtin__compare_3_p_0(TypeInfo_11_11, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Tuple HeadVar__1_1,
  MR_Tuple HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6;
    MR_Word TypeInfo_7_7;
    MR_Word TypeCtorInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Tuple Cast_HeadVar1_3;
    MR_Tuple Cast_HeadVar2_4;
    MR_Integer PolyConst2_9;

    Cast_HeadVar1_3 = HeadVar__1_1;
    Cast_HeadVar2_4 = HeadVar__2_2;
    TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    PolyConst2_9 = (MR_Integer) 2;
    TypeCtorInfo_6_6 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (PolyConst2_9));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 3) = ((MR_Box) (TypeInfo_7_7));
    }
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word V_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (V_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word V_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (V_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Is0_3;
    MR_Word RIs0_4;
    MR_Word DIs0_5;
    MR_Word RDIs0_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_11;

    Is0_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    RIs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    DIs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    RDIs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    Var_7 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(TypeInfo_for_T_13, Is0_3, RIs0_4);
    Var_8 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(TypeInfo_for_T_13, RIs0_4, Is0_3);
    Var_9 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(TypeInfo_for_T_13, DIs0_5, DIs0_5);
    Var_11 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(TypeInfo_for_T_13, RDIs0_6, RDIs0_6);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_11));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__4_15;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_15));
    return wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word IM_4,
  MR_Word RIM_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeCtorInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word Var_11;
    MR_Box conv1_HeadVar__3_3;

    TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
      MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_25));
    }
    TypeCtorInfo_28_28 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_28_28));
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_27_27));
    }
    TypeCtorInfo_30_30 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_30_30));
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_27_27));
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 2) = ((MR_Box) (TypeInfo_29_29));
    }
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (mode_robdd__implications__add_backwards_to_imp_map_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeInfo_for_T_25));
    }
    conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_27_27, TypeInfo_29_29, TypeInfo_31_31, (MR_Word) Var_11, (MR_Word) RIM_5, ((MR_Box) (IM_4)));
    HeadVar__3_3 = ((MR_Word) conv1_HeadVar__3_3);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__4_14;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_14));
    return wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Var_4,
  MR_Word IM0_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word IM1_9;
    MR_Word Var_10;
    MR_Word conv1_IM1_9;
    MR_Box conv2_HeadVar__3_3;

    TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_22_22));
    }
    TypeCtorInfo_25_25 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_25_25));
      MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_22_22));
      MR_hl_field(MR_mktag(0), TypeInfo_26_26, 2) = ((MR_Box) (TypeInfo_24_24));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mode_robdd__implications__delete_var_from_imp_map_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_4));
    }
    conv1_IM1_9 = mercury__map__delete_2_f_0(TypeInfo_22_22, TypeInfo_24_24, (MR_Word) IM0_5, ((MR_Box) (Var_4)));
    IM1_9 = (MR_Word) conv1_IM1_9;
    conv2_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_22_22, TypeInfo_24_24, TypeInfo_26_26, (MR_Word) Var_10, (MR_Word) IM1_9, ((MR_Box) (IM1_9)));
    HeadVar__3_3 = ((MR_Word) conv2_HeadVar__3_3);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__4_14;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_14));
    return wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word IMA_4,
  MR_Word IMB_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_23_23;

    TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_21_21, TypeInfo_23_23, (MR_Word) IMA_4);
    if (succeeded)
      HeadVar__3_3 = IMA_4;
    else
    {
      MR_Word TypeCtorInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeCtorInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word Var_10;
      MR_Box conv1_HeadVar__3_3;

      TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (TypeCtorInfo_24_24));
        MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_19));
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_25_25));
      }
      TypeCtorInfo_28_28 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
      {
        TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_28_28));
        MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_25_25));
        MR_hl_field(MR_mktag(0), TypeInfo_29_29, 2) = ((MR_Box) (TypeInfo_27_27));
      }
      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mode_robdd__implications__imp_map_difference_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfo_for_T_19));
      }
      conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_25_25, TypeInfo_27_27, TypeInfo_29_29, (MR_Word) Var_10, (MR_Word) IMB_5, ((MR_Box) (IMA_4)));
      HeadVar__3_3 = ((MR_Word) conv1_HeadVar__3_3);
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__f_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VA_5,
  MR_Word M_6,
  MR_Word VB_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word Vs_8;
    MR_Word TypeCtorInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Box conv0_Vs_8;

    TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    TypeCtorInfo_14_14 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_13_13));
    }
    succeeded = mercury__map__elem_2_f_0(TypeInfo_13_13, TypeInfo_15_15, ((MR_Box) (VA_5)), (MR_Word) M_6, &conv0_Vs_8);
    if (succeeded)
    {
      Vs_8 = ((MR_Word) conv0_Vs_8);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word BaseTypeClassInfo_for_enum_18;
      MR_Word TypeClassInfo_for_enum_19;
      MR_Word TypeCtorInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word Var_9;
      MR_Word conv1_Var_9;
      MR_Word conv2_HeadVar__4_4;

      BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      {
        TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_18));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 1) = ((MR_Box) (TypeInfo_for_T_11));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 2) = ((MR_Box) (TypeInfo_17_17));
      }
      conv1_Var_9 = mercury__sparse_bitset__insert_2_f_0(TypeClassInfo_for_enum_19, (MR_Word) Vs_8, ((MR_Box) (VB_7)));
      Var_9 = (MR_Word) conv1_Var_9;
      TypeCtorInfo_20_20 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_17_17));
      }
      conv2_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(TypeInfo_17_17, TypeInfo_21_21, ((MR_Box) (VA_5)), (MR_Word) M_6, ((MR_Box) (Var_9)));
      HeadVar__4_4 = (MR_Word) conv2_HeadVar__4_4;
    }
    else
    {
      MR_Word TypeCtorInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word BaseTypeClassInfo_for_enum_24;
      MR_Word TypeClassInfo_for_enum_25;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word Var_10;
      MR_Word conv3_Var_10;
      MR_Word conv4_HeadVar__4_4;

      BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (TypeCtorInfo_22_22));
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      {
        TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_24));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 1) = ((MR_Box) (TypeInfo_for_T_11));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 2) = ((MR_Box) (TypeInfo_23_23));
      }
      conv3_Var_10 = mercury__sparse_bitset__make_singleton_set_1_f_0(TypeClassInfo_for_enum_25, ((MR_Box) (VB_7)));
      Var_10 = (MR_Word) conv3_Var_10;
      TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_23_23));
      }
      conv4_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(TypeInfo_23_23, TypeInfo_27_27, ((MR_Box) (VA_5)), (MR_Word) M_6, ((MR_Box) (Var_10)));
      HeadVar__4_4 = (MR_Word) conv4_HeadVar__4_4;
    }
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__4_13;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__filter_imp_map__120__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_13));
    return wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word P_4,
  MR_Word IM_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeCtorInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word Var_9;
    MR_Box conv1_HeadVar__3_3;

    TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
    }
    TypeCtorInfo_24_24 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (TypeCtorInfo_24_24));
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_21_21));
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 2) = ((MR_Box) (TypeInfo_23_23));
    }
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mode_robdd__implications__filter_imp_map_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_T_19));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (P_4));
    }
    conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_21_21, TypeInfo_23_23, TypeInfo_25_25, (MR_Word) Var_9, (MR_Word) IM_5, ((MR_Box) (IM_5)));
    HeadVar__3_3 = ((MR_Word) conv1_HeadVar__3_3);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word IM_3)
{
  {
    MR_bool succeeded;
    MR_Word IM_4;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      IM_4 = IM_3;
    else
    {
      MR_Word V_8;
      MR_Word Vs_9;
      MR_Word AL_10;
      MR_Word Var_12;
      MR_Word TypeCtorInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word Var_13;
      MR_Word Var_23;

      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      AL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      V_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
      Vs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
      Var_13 = (MR_Integer) 2;
      TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      mercury__builtin__compare_3_p_0(TypeInfo_18_18, &Var_23, ((MR_Box) (V_8)), ((MR_Box) (HeadVar__1_1)));
      succeeded = (Var_13 == Var_23);
      if (succeeded)
        IM_4 = IM_3;
      else
      {
        MR_Word TypeCtorInfo_19_19;
        MR_Word TypeInfo_20_20;
        MR_Word BaseTypeClassInfo_for_enum_21;
        MR_Word TypeClassInfo_for_enum_22;
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word conv0_Var_15;

        BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_19_19));
          MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
        }
        {
          TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_22, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_21));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_22, 1) = ((MR_Box) (TypeInfo_for_T_16));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_22, 2) = ((MR_Box) (TypeInfo_20_20));
        }
        conv0_Var_15 = mercury__sparse_bitset__remove_gt_2_f_0(TypeClassInfo_for_enum_22, (MR_Word) Vs_9, ((MR_Box) (HeadVar__1_1)));
        Var_15 = (MR_Word) conv0_Var_15;
        Var_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(TypeInfo_for_T_16, V_8, IM_3, Var_15);
        IM_4 = mode_robdd__implications__restrict_threshold_2_3_f_0(TypeInfo_for_T_16, HeadVar__1_1, AL_10, Var_14);
      }
    }
    return IM_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word V_5,
  MR_Word M_6,
  MR_Word Vs_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word TypeCtorInfo_9_9;
    MR_Word TypeInfo_10_10;

    TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_10_10, (MR_Word) Vs_7);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word TypeCtorInfo_13_13;
      MR_Word TypeInfo_14_14;
      MR_Word conv0_HeadVar__4_4;

      TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (TypeCtorInfo_11_11));
        MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_8));
      }
      TypeCtorInfo_13_13 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (TypeCtorInfo_13_13));
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_12_12));
      }
      conv0_HeadVar__4_4 = mercury__map__delete_2_f_0(TypeInfo_12_12, TypeInfo_14_14, (MR_Word) M_6, ((MR_Box) (V_5)));
      HeadVar__4_4 = (MR_Word) conv0_HeadVar__4_4;
    }
    else
    {
      MR_Word TypeCtorInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word TypeCtorInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word conv1_HeadVar__4_4;

      TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_8));
      }
      TypeCtorInfo_17_17 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
      }
      conv1_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(TypeInfo_16_16, TypeInfo_18_18, ((MR_Box) (V_5)), (MR_Word) M_6, ((MR_Box) (Vs_7)));
      HeadVar__4_4 = (MR_Word) conv1_HeadVar__4_4;
    }
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__4_13;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_13));
    return wrapper_arg_4;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word EQVars_4,
  MR_Word ImpVars_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word Var_9;
    MR_Word Var_15;
    MR_Box conv1_HeadVar__3_3;

    TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_T_19));
    }
    Var_15 = (MR_Word) EQVars_4;
    conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(TypeInfo_21_21, TypeInfo_21_21, TypeInfo_23_23, (MR_Word) Var_9, (MR_Word) Var_15, ((MR_Box) (ImpVars_5)));
    HeadVar__3_3 = ((MR_Word) conv1_HeadVar__3_3);
    return HeadVar__3_3;
  }
}

void MR_CALL 
mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word * Changed_6,
  MR_Word Robdd0_7,
  MR_Word * Robdd_8,
  MR_Word ImpVars0_9,
  MR_Word * ImpVars_10)
{
  {
    MR_bool succeeded;
    MR_Word ImpVars1_11;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeInfo_31_31;

    ImpVars1_11 = mercury__robdd__extract_implications_1_f_0(TypeInfo_for_T_29, Robdd0_7);
    *ImpVars_10 = mode_robdd__implications__f_times_2_f_0(TypeInfo_for_T_29, ImpVars0_9, ImpVars1_11);
    *Robdd_8 = mercury__robdd__remove_implications_2_f_0(TypeInfo_for_T_29, *ImpVars_10, Robdd0_7);
    TypeCtorInfo_30_30 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_30_30));
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_29));
    }
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (*Robdd_8)), ((MR_Box) (Robdd0_7)));
    if (succeeded)
      succeeded = mode_robdd__implications__empty_1_p_0(TypeInfo_for_T_29, ImpVars1_11);
    if (succeeded)
      *Changed_6 = (MR_Integer) 0;
    else
      *Changed_6 = (MR_Integer) 1;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_7_7;
    MR_Word TypeInfo_8_8;
    MR_Word TypeCtorInfo_9_9;
    MR_Word TypeInfo_10_10;
    MR_Word I_2;
    MR_Word RI_3;
    MR_Word DI_4;
    MR_Word RDI_5;

    I_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    RI_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    DI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    RDI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_8, TypeInfo_10_10, (MR_Word) I_2);
    if (succeeded)
    {
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_8, TypeInfo_10_10, (MR_Word) RI_3);
      if (succeeded)
      {
        succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_8, TypeInfo_10_10, (MR_Word) DI_4);
        if (succeeded)
          succeeded = mercury__map__is_empty_1_p_0(TypeInfo_8_8, TypeInfo_10_10, (MR_Word) RDI_5);
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Tuple conv0_LambdaHeadVar__4_34;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_34 = mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Tuple) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_34));
    return wrapper_arg_4;
  }
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
  {
    MR_bool succeeded;
    MR_Word Imps0_11;
    MR_Word RevImps0_12;
    MR_Word DisImps_13;
    MR_Word RevDisImps_14;

    Imps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_9, (MR_Integer) 0)));
    RevImps0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_9, (MR_Integer) 1)));
    DisImps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_9, (MR_Integer) 2)));
    RevDisImps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_9, (MR_Integer) 3)));
    {
      MR_Word TypeCtorInfo_47_47;
      MR_Word TypeInfo_48_48;
      MR_Word TypeCtorInfo_49_49;
      MR_Word TypeInfo_50_50;

      TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_48_48, 0) = ((MR_Box) (TypeCtorInfo_47_47));
        MR_hl_field(MR_mktag(0), TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 0) = ((MR_Box) (TypeCtorInfo_49_49));
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_48_48));
      }
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_48_48, TypeInfo_50_50, (MR_Word) Imps0_11);
    }
    if (!(succeeded))
    {
      MR_Word TypeCtorInfo_51_51;
      MR_Word TypeInfo_52_52;
      MR_Word TypeCtorInfo_53_53;
      MR_Word TypeInfo_54_54;

      TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_52_52, 0) = ((MR_Box) (TypeCtorInfo_51_51));
        MR_hl_field(MR_mktag(0), TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      TypeCtorInfo_53_53 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_54_54, 0) = ((MR_Box) (TypeCtorInfo_53_53));
        MR_hl_field(MR_mktag(0), TypeInfo_54_54, 1) = ((MR_Box) (TypeInfo_52_52));
      }
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_52_52, TypeInfo_54_54, (MR_Word) RevImps0_12);
    }
    if (succeeded)
    {
      *Changed_6 = (MR_Integer) 0;
      *EQVars_8 = EQVars0_7;
      *ImpVars_10 = ImpVars0_9;
    }
    else
    {
      MR_Word TypeCtorInfo_55_55;
      MR_Word TypeInfo_56_56;
      MR_Word TypeCtorInfo_57_57;
      MR_Word TypeInfo_58_58;
      MR_Word TypeCtorInfo_59_59;
      MR_Word TypeCtorInfo_60_60;
      MR_Word TypeInfo_61_61;
      MR_Word TypeCtorInfo_62_62;
      MR_Word TypeInfo_63_63;
      MR_Word TypeCtorInfo_64_64;
      MR_Word TypeInfo_66_66;
      MR_Word Imps_15;
      MR_Word RevImps_16;
      MR_Tuple Var_29;
      MR_Word Var_30;
      MR_Tuple Var_38;
      MR_Word Var_39;
      MR_Integer PolyConst4_65;
      MR_Box conv1_Var_29;

      TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_56_56, 0) = ((MR_Box) (TypeCtorInfo_55_55));
        MR_hl_field(MR_mktag(0), TypeInfo_56_56, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      TypeCtorInfo_57_57 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_58_58, 0) = ((MR_Box) (TypeCtorInfo_57_57));
        MR_hl_field(MR_mktag(0), TypeInfo_58_58, 1) = ((MR_Box) (TypeInfo_56_56));
      }
      TypeCtorInfo_64_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
      PolyConst4_65 = (MR_Integer) 4;
      TypeCtorInfo_59_59 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
      TypeCtorInfo_60_60 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_equiv_vars_1;
      {
        TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_61_61, 0) = ((MR_Box) (TypeCtorInfo_60_60));
        MR_hl_field(MR_mktag(0), TypeInfo_61_61, 1) = ((MR_Box) (TypeInfo_for_T_46));
      }
      TypeCtorInfo_62_62 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
      {
        TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_63_63, 0) = ((MR_Box) (TypeCtorInfo_62_62));
        MR_hl_field(MR_mktag(0), TypeInfo_63_63, 1) = ((MR_Box) (TypeInfo_56_56));
        MR_hl_field(MR_mktag(0), TypeInfo_63_63, 2) = ((MR_Box) (TypeInfo_58_58));
      }
      {
        TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 0) = ((MR_Box) (TypeCtorInfo_64_64));
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 1) = ((MR_Box) (PolyConst4_65));
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 2) = ((MR_Box) (TypeCtorInfo_59_59));
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 3) = ((MR_Box) (TypeInfo_61_61));
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 4) = ((MR_Box) (TypeInfo_63_63));
        MR_hl_field(MR_mktag(0), TypeInfo_66_66, 5) = ((MR_Box) (TypeInfo_63_63));
      }
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (TypeInfo_for_T_46));
      }
      Var_39 = (MR_Integer) 0;
      {
        Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (EQVars0_7));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (Imps0_11));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (RevImps0_12));
      }
      conv1_Var_29 = mercury__map__foldl_3_f_0(TypeInfo_56_56, TypeInfo_58_58, TypeInfo_66_66, (MR_Word) Var_30, (MR_Word) Imps0_11, ((MR_Box) (Var_38)));
      Var_29 = ((MR_Tuple) conv1_Var_29);
      *Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0)));
      *EQVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1)));
      Imps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 2)));
      RevImps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *ImpVars_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Imps_15));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RevImps_16));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DisImps_13));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RevDisImps_14));
      }
    }
  }
}

MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word EQVars_5,
  MR_Word * Changed_6,
  MR_Word ImpVars0_7,
  MR_Word * ImpVars_8)
{
  {
    MR_bool succeeded;
    MR_Word Imps0_9;
    MR_Word RevImps0_10;
    MR_Word DisImps_11;
    MR_Word RevDisImps_12;
    MR_Word Changed0_13;
    MR_Word Imps_14;
    MR_Word Changed1_15;
    MR_Word RevImps_16;

    Imps0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_7, (MR_Integer) 0)));
    RevImps0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_7, (MR_Integer) 1)));
    DisImps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_7, (MR_Integer) 2)));
    RevDisImps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_7, (MR_Integer) 3)));
    succeeded = mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(TypeInfo_for_T_17, EQVars_5, DisImps_11, RevDisImps_12);
    if (succeeded)
    {
      mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(TypeInfo_for_T_17, EQVars_5, &Changed0_13, Imps0_9, &Imps_14);
      mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(TypeInfo_for_T_17, EQVars_5, &Changed1_15, RevImps0_10, &RevImps_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *ImpVars_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Imps_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RevImps_16));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DisImps_11));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RevDisImps_12));
      }
      *Changed_6 = mercury__bool__or_2_f_0(Changed0_13, Changed1_15);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * env_ptr;

    env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) env_ptr_arg;
    MR_builtin_longjmp((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * env_ptr;

    env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) env_ptr_arg;
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8 = ((MR_Word) (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8);
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10 = ((MR_Word) (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10);
    mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * env_ptr;

    env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) env_ptr_arg;
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9 = ((MR_Word) (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9);
    mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(env_ptr);
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * env_ptr;

    env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) env_ptr_arg;
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4, (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8, (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9);
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
    if ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded)
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * env_ptr;

    env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) env_ptr_arg;
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
    }
    mercury__sparse_bitset__member_2_p_1((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17, &(env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9, (MR_Word) (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5, env_ptr);
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * env_ptr;

    env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) env_ptr_arg;
    if (MR_builtin_setjmp((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeCtorInfo_12_12;
          MR_Word TypeCtorInfo_14_14;
          MR_Word TypeInfo_15_15;

          TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtorInfo_12_12));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
          }
          TypeCtorInfo_14_14 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
          {
            TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
            MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) ((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
          }
          mercury__map__member_3_p_0((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13, TypeInfo_15_15, (MR_Word) (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7, &(env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8, &(env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3, env_ptr);
        }
        (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word EQVars_4,
  MR_Word DisImps_5,
  MR_Word RevDisImps_6)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s env;
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * env_ptr;

    env_ptr = &env;
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11 = TypeInfo_for_T_11;
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4 = EQVars_4;
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7 = mode_robdd__implications__intersect_2_f_0((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, DisImps_5, RevDisImps_6);
    mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(env_ptr);
    (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
    return (env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Tuple conv0_LambdaHeadVar__4_19;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Tuple) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_19));
    return wrapper_arg_4;
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word EQVars_5,
  MR_Word * Changed_6,
  MR_Word ImpMap0_7,
  MR_Word * ImpMap_8)
{
  {
    MR_Word TypeCtorInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeCtorInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeCtorInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeCtorInfo_37_37;
    MR_Word TypeCtorInfo_38_38;
    MR_Word TypeInfo_40_40;
    MR_Tuple Var_14;
    MR_Word Var_15;
    MR_Tuple Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Integer PolyConst2_39;
    MR_Word conv1_Var_24;
    MR_Box conv2_Var_14;

    TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (TypeCtorInfo_31_31));
      MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (TypeCtorInfo_33_33));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_32_32));
    }
    TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    PolyConst2_39 = (MR_Integer) 2;
    TypeCtorInfo_35_35 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (TypeCtorInfo_35_35));
      MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_32_32));
      MR_hl_field(MR_mktag(0), TypeInfo_36_36, 2) = ((MR_Box) (TypeInfo_34_34));
    }
    TypeCtorInfo_37_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
    {
      TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 0) = ((MR_Box) (TypeCtorInfo_38_38));
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 1) = ((MR_Box) (PolyConst2_39));
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 2) = ((MR_Box) (TypeInfo_36_36));
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 3) = ((MR_Box) (TypeCtorInfo_37_37));
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (EQVars_5));
    }
    conv1_Var_24 = mercury__map__init_0_f_0(TypeInfo_32_32, TypeInfo_34_34);
    Var_24 = (MR_Word) conv1_Var_24;
    Var_25 = (MR_Integer) 0;
    {
      Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Var_25));
    }
    conv2_Var_14 = mercury__map__foldl_3_f_0(TypeInfo_32_32, TypeInfo_34_34, TypeInfo_40_40, (MR_Word) Var_15, (MR_Word) ImpMap0_7, ((MR_Box) (Var_23)));
    Var_14 = ((MR_Tuple) conv2_Var_14);
    *ImpMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    *Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_60_60;
    MR_Word TypeInfo_61_61;

    TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_61_61, 0) = ((MR_Box) (TypeCtorInfo_60_60));
      MR_hl_field(MR_mktag(0), TypeInfo_61_61, 1) = ((MR_Box) (TypeInfo_for_T_59));
    }
    succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_61_61, (MR_Word) TrueVars0_9);
    if (succeeded)
      succeeded = mercury__sparse_bitset__empty_1_p_0(TypeInfo_61_61, (MR_Word) FalseVars0_11);
    if (succeeded)
    {
      *TrueVars_10 = TrueVars0_9;
      *FalseVars_12 = FalseVars0_11;
      *ImpVars_14 = ImpVars0_13;
      *Changed_8 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Imps0_15;
      MR_Word RevImps0_16;
      MR_Word DisImps0_17;
      MR_Word RevDisImps0_18;
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
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;

      Imps0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_13, (MR_Integer) 0)));
      RevImps0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_13, (MR_Integer) 1)));
      DisImps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_13, (MR_Integer) 2)));
      RevDisImps0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_13, (MR_Integer) 3)));
      Var_45 = (MR_Integer) 0;
      mode_robdd__implications__normalise_true_false_imp_map_8_p_0(TypeInfo_for_T_59, Var_45, &Changed0_19, TrueVars0_9, &TrueVars1_20, FalseVars0_11, &FalseVars1_21, Imps0_15, &Imps_22);
      Var_46 = (MR_Integer) 0;
      mode_robdd__implications__normalise_true_false_imp_map_8_p_0(TypeInfo_for_T_59, Var_46, &Changed1_23, FalseVars1_21, &FalseVars2_24, TrueVars1_20, &TrueVars2_25, RevImps0_16, &RevImps_26);
      Var_47 = (MR_Integer) 1;
      mode_robdd__implications__normalise_true_false_imp_map_8_p_0(TypeInfo_for_T_59, Var_47, &Changed2_27, FalseVars2_24, &FalseVars3_28, TrueVars2_25, &TrueVars3_29, DisImps0_17, &DisImps_30);
      Var_48 = (MR_Integer) 1;
      mode_robdd__implications__normalise_true_false_imp_map_8_p_0(TypeInfo_for_T_59, Var_48, &Changed3_31, TrueVars3_29, &TrueVars4_32, FalseVars3_28, &FalseVars4_33, RevDisImps0_18, &RevDisImps_34);
      Var_49 = (MR_Integer) 0;
      mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, Var_49, Imps_22, DisImps_30, &Changed4_35, FalseVars4_33, &FalseVars5_36);
      Var_50 = (MR_Integer) 0;
      mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, Var_50, RevImps_26, RevDisImps_34, &Changed5_37, TrueVars4_32, &TrueVars5_38);
      Var_51 = (MR_Integer) 1;
      mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, Var_51, RevImps_26, DisImps_30, &Changed6_39, FalseVars5_36, &FalseVars6_40);
      Var_52 = (MR_Integer) 1;
      mode_robdd__implications__normalise_pairs_6_p_0(TypeInfo_for_T_59, Var_52, Imps_22, RevDisImps_34, &Changed7_41, TrueVars5_38, &TrueVars6_42);
      {
        ImpVars6_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpVars6_43, 0) = ((MR_Box) (Imps_22));
        MR_hl_field(MR_mktag(0), ImpVars6_43, 1) = ((MR_Box) (RevImps_26));
        MR_hl_field(MR_mktag(0), ImpVars6_43, 2) = ((MR_Box) (DisImps_30));
        MR_hl_field(MR_mktag(0), ImpVars6_43, 3) = ((MR_Box) (RevDisImps_34));
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
}

static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure;
    MR_Word conv3_HeadVar__4_37;

    closure = closure_arg;
    conv3_HeadVar__4_37 = mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_37));
    return wrapper_arg_3;
  }
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
  {
    MR_bool succeeded;
    MR_Word Intersect_13;
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeInfo_24_24;

    Intersect_13 = mode_robdd__implications__intersect_2_f_0(TypeInfo_for_T_20, Imps_8, DisImps_9);
    TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_22_22));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_22_22, TypeInfo_24_24, (MR_Word) Intersect_13);
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
            MR_Word TypeCtorInfo_25_25;
            MR_Word TypeInfo_26_26;
            MR_Word TypeCtorInfo_27_27;
            MR_Word TypeInfo_28_28;
            MR_Word BaseTypeClassInfo_for_enum_29;
            MR_Word TypeClassInfo_for_enum_30;
            MR_Word Var_18;
            MR_Word Var_19;
            MR_Word conv0_Var_19;
            MR_Word conv1_Var_18;
            MR_Word conv2_FalseVars_12;

            TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_25_25));
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_20));
            }
            TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
            {
              TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (TypeCtorInfo_27_27));
              MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_26_26));
            }
            conv0_Var_19 = mercury__map__sorted_keys_1_f_0(TypeInfo_26_26, TypeInfo_28_28, (MR_Word) Intersect_13);
            Var_19 = (MR_Word) conv0_Var_19;
            BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            {
              TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_29));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 1) = ((MR_Box) (TypeInfo_for_T_20));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 2) = ((MR_Box) (TypeInfo_26_26));
            }
            conv1_Var_18 = mercury__sparse_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_30, (MR_Word) Var_19);
            Var_18 = (MR_Word) conv1_Var_18;
            conv2_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(TypeInfo_26_26, (MR_Word) FalseVars0_11, (MR_Word) Var_18);
            *FalseVars_12 = (MR_Word) conv2_FalseVars_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_31_31;
            MR_Word TypeInfo_32_32;
            MR_Word TypeCtorInfo_33_33;
            MR_Word TypeInfo_34_34;
            MR_Word Values_14;
            MR_Word Var_15;
            MR_Word Var_16;
            MR_Word Var_17;
            MR_Word conv4_Var_17;
            MR_Box conv5_Values_14;
            MR_Word conv6_FalseVars_12;

            TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
            TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (TypeCtorInfo_31_31));
              MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_20));
            }
            {
              TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (TypeCtorInfo_33_33));
              MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_32_32));
            }
            {
              Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[4]));
              MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mode_robdd__implications__normalise_pairs_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeInfo_for_T_20));
            }
            Var_16 = mercury__map__values_1_f_0(TypeInfo_32_32, TypeInfo_34_34, (MR_Word) Intersect_13);
            conv4_Var_17 = mercury__sparse_bitset__init_0_f_0(TypeInfo_32_32);
            Var_17 = (MR_Word) conv4_Var_17;
            conv5_Values_14 = mercury__list__foldl_3_f_0(TypeInfo_34_34, TypeInfo_34_34, (MR_Word) Var_15, (MR_Word) Var_16, ((MR_Box) (Var_17)));
            Values_14 = ((MR_Word) conv5_Values_14);
            conv6_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(TypeInfo_32_32, (MR_Word) FalseVars0_11, (MR_Word) Values_14);
            *FalseVars_12 = (MR_Word) conv6_FalseVars_12;
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure;
    MR_Word conv0_HeadVar__4_15;

    closure = closure_arg;
    conv0_HeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_15));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word IMA_4,
  MR_Word IMB_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_9_9;
    MR_Word TypeInfo_10_10;
    MR_Word TypeCtorInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word conv1_Var_6;

    TypeCtorInfo_11_11 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_10_10));
    }
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (mode_robdd__implications__intersect_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TypeInfo_for_T_8));
    }
    conv1_Var_6 = mercury__map__intersect_3_f_0(TypeInfo_12_12, TypeInfo_10_10, (MR_Word) Var_7, (MR_Word) IMA_4, (MR_Word) IMB_5);
    Var_6 = (MR_Word) conv1_Var_6;
    HeadVar__3_3 = mode_robdd__implications__remove_empty_sets_1_f_0(TypeInfo_for_T_8, Var_6);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__4_11;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_11 = mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_11));
    return wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word IM_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word Var_7;
    MR_Box conv1_HeadVar__2_2;

    TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    TypeCtorInfo_19_19 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
    }
    TypeCtorInfo_21_21 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_18_18));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (mode_robdd__implications__remove_empty_sets_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TypeInfo_for_T_16));
    }
    conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0(TypeInfo_18_18, TypeInfo_20_20, TypeInfo_22_22, (MR_Word) Var_7, (MR_Word) IM_3, ((MR_Box) (IM_3)));
    HeadVar__2_2 = ((MR_Word) conv1_HeadVar__2_2);
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Tuple conv0_LambdaHeadVar__4_35;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_35 = mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Tuple) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_35));
    return wrapper_arg_4;
  }
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
  {
    MR_Word TypeCtorInfo_47_47;
    MR_Word TypeInfo_48_48;
    MR_Word TypeCtorInfo_49_49;
    MR_Word TypeInfo_50_50;
    MR_Word TypeCtorInfo_51_51;
    MR_Word TypeInfo_52_52;
    MR_Word TypeCtorInfo_53_53;
    MR_Word TypeCtorInfo_54_54;
    MR_Word TypeInfo_56_56;
    MR_Tuple Var_30;
    MR_Word Var_31;
    MR_Tuple Var_38;
    MR_Word Var_39;
    MR_Integer PolyConst4_55;
    MR_Box conv1_Var_30;

    TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 0) = ((MR_Box) (TypeCtorInfo_47_47));
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_for_T_46));
    }
    TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_50_50, 0) = ((MR_Box) (TypeCtorInfo_49_49));
      MR_hl_field(MR_mktag(0), TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_48_48));
    }
    TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    PolyConst4_55 = (MR_Integer) 4;
    TypeCtorInfo_51_51 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_52_52, 0) = ((MR_Box) (TypeCtorInfo_51_51));
      MR_hl_field(MR_mktag(0), TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_48_48));
      MR_hl_field(MR_mktag(0), TypeInfo_52_52, 2) = ((MR_Box) (TypeInfo_50_50));
    }
    TypeCtorInfo_53_53 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
    {
      TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 0) = ((MR_Box) (TypeCtorInfo_54_54));
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 1) = ((MR_Box) (PolyConst4_55));
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 2) = ((MR_Box) (TypeInfo_50_50));
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 3) = ((MR_Box) (TypeInfo_50_50));
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 4) = ((MR_Box) (TypeInfo_52_52));
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 5) = ((MR_Box) (TypeCtorInfo_53_53));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TypeInfo_for_T_46));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (IsDisImp_9));
    }
    Var_39 = (MR_Integer) 0;
    {
      Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (TrueVars0_11));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (FalseVars0_13));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (ImpMap0_15));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Var_39));
    }
    conv1_Var_30 = mercury__map__foldl_3_f_0(TypeInfo_48_48, TypeInfo_50_50, TypeInfo_56_56, (MR_Word) Var_31, (MR_Word) ImpMap0_15, ((MR_Box) (Var_38)));
    Var_30 = ((MR_Tuple) conv1_Var_30);
    *TrueVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0)));
    *FalseVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
    *ImpMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 2)));
    *Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 3)));
  }
}

MR_Word MR_CALL 
mode_robdd__implications__either_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Tuple Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (A_5));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (B_6));
    }
    {
      Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (Var_10));
    }
    HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(TypeInfo_for_T_11, Var_8, ImpVars_7);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__not_both_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Tuple Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (A_5));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (B_6));
    }
    {
      Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (Var_10));
    }
    HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(TypeInfo_for_T_11, Var_8, ImpVars_7);
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure;
    MR_Word conv2_HeadVar__4_4;

    closure = closure_arg;
    conv2_HeadVar__4_4 = mode_robdd__implications__not_both_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Vars0_4,
  MR_Word ImpVars_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Vars_7;
    MR_Word TypeCtorInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word BaseTypeClassInfo_for_enum_13;
    MR_Word TypeClassInfo_for_enum_14;
    MR_Box conv1_Var_6;
    MR_Word conv0_Vars_7;

    BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    {
      TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_14, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_13));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_14, 1) = ((MR_Box) (TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_14, 2) = ((MR_Box) (TypeInfo_12_12));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_14, &conv1_Var_6, (MR_Word) Vars0_4, &conv0_Vars_7);
    if (succeeded)
    {
      Var_6 = ((MR_Word) conv1_Var_6);
      Vars_7 = (MR_Word) conv0_Vars_7;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word BaseTypeClassInfo_for_enum_20;
      MR_Word TypeClassInfo_for_enum_21;
      MR_Word TypeCtorInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Box conv3_Var_9;

      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (mode_robdd__implications__at_most_one_of_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (TypeInfo_for_T_10));
        MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) (Var_6));
      }
      BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (TypeCtorInfo_18_18));
        MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      {
        TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_21, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_20));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_21, 1) = ((MR_Box) (TypeInfo_for_T_10));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_21, 2) = ((MR_Box) (TypeInfo_19_19));
      }
      TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (TypeCtorInfo_22_22));
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      conv3_Var_9 = mercury__sparse_bitset__foldl_3_f_0(TypeInfo_23_23, TypeClassInfo_for_enum_21, (MR_Word) Var_8, (MR_Word) Vars_7, ((MR_Box) (ImpVars_5)));
      Var_9 = ((MR_Word) conv3_Var_9);
      HeadVar__3_3 = mode_robdd__implications__at_most_one_of_2_f_0(TypeInfo_for_T_10, Vars_7, Var_9);
    }
    else
      HeadVar__3_3 = ImpVars_5;
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__imp_vars_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Tuple Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (A_5));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (B_6));
    }
    {
      Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (Var_10));
    }
    HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(TypeInfo_for_T_11, Var_8, ImpVars_7);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__neq_vars_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word ImpVars_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Tuple Var_8;
    MR_Word Var_9;
    MR_Tuple Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (A_5));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (B_6));
    }
    {
      Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (Var_14));
    }
    Var_9 = mode_robdd__implications__add_clause_2_f_0(TypeInfo_for_T_15, Var_8, ImpVars_7);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (A_5));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (B_6));
    }
    {
      Var_10 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_12));
    }
    HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(TypeInfo_for_T_15, Var_10, Var_9);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_clause_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Tuple Clause_4,
  MR_Word ImpVars_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;

    Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Clause_4));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_7));
    }
    HeadVar__3_3 = mode_robdd__implications__add_clauses_2_f_0(TypeInfo_for_T_8, Var_6, ImpVars_5);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word ImpVars_3;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ImpVars_3 = HeadVar__2_2;
    else
    {
      MR_Tuple Clause_5;
      MR_Word Clauses_6;
      MR_Word ImpVars1_9;

      Clause_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      succeeded = mode_robdd__implications__add_clause_2_2_f_0(TypeInfo_for_T_12, Clause_5, HeadVar__2_2, &ImpVars1_9);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_13_13;
        MR_Word TypeInfo_14_14;
        MR_Word TypeCtorInfo_15_15;
        MR_Word TypeInfo_17_17;
        MR_Word Resolvents_10;
        MR_Word Var_11;
        MR_Integer PolyConst2_16;
        MR_Word conv0_Var_11;

        Resolvents_10 = mode_robdd__implications__get_resolvents_2_f_0(TypeInfo_for_T_12, Clause_5, ImpVars1_9);
        TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
        PolyConst2_16 = (MR_Integer) 2;
        TypeCtorInfo_13_13 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
        {
          TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (TypeCtorInfo_13_13));
          MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
        }
        {
          TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (PolyConst2_16));
          MR_hl_field(MR_mktag(0), TypeInfo_17_17, 2) = ((MR_Box) (TypeInfo_14_14));
          MR_hl_field(MR_mktag(0), TypeInfo_17_17, 3) = ((MR_Box) (TypeInfo_14_14));
        }
        conv0_Var_11 = mercury__list__f_43_43_2_f_0(TypeInfo_17_17, (MR_Word) Resolvents_10, (MR_Word) Clauses_6);
        Var_11 = (MR_Word) conv0_Var_11;
        ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(TypeInfo_for_T_12, Var_11, ImpVars1_9);
      }
      else
        ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(TypeInfo_for_T_12, Clauses_6, HeadVar__2_2);
    }
    return ImpVars_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Tuple HeadVar__1_1,
  MR_Word ImpVars_6)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Word TypeCtorInfo_12_12;
    MR_Word TypeInfo_14_14;
    MR_Word LitA_4;
    MR_Word LitB_5;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Integer PolyConst2_13;
    MR_Word conv0_HeadVar__3_3;

    LitA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    LitB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    PolyConst2_13 = (MR_Integer) 2;
    TypeCtorInfo_10_10 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (PolyConst2_13));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 2) = ((MR_Box) (TypeInfo_11_11));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 3) = ((MR_Box) (TypeInfo_11_11));
    }
    Var_7 = mode_robdd__implications__get_resolvents_2_3_f_0(TypeInfo_for_T_9, LitA_4, LitB_5, ImpVars_6);
    Var_8 = mode_robdd__implications__get_resolvents_2_3_f_0(TypeInfo_for_T_9, LitB_5, LitA_4, ImpVars_6);
    conv0_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(TypeInfo_14_14, (MR_Word) Var_7, (MR_Word) Var_8);
    HeadVar__3_3 = (MR_Word) conv0_HeadVar__3_3;
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Tuple conv0_LambdaHeadVar__2_13;

    closure = closure_arg;
    conv0_LambdaHeadVar__2_13 = mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__548__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word LitA_5,
  MR_Word LitB_6,
  MR_Word ImpVars_7)
{
  {
    MR_Word Clauses_8;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_20_20;
    MR_Word Literals_9;
    MR_Word Var_11;
    MR_Integer PolyConst2_19;

    Literals_9 = mode_robdd__implications__get_literals_2_f_0(TypeInfo_for_T_15, LitA_5, ImpVars_7);
    TypeCtorInfo_16_16 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    PolyConst2_19 = (MR_Integer) 2;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (PolyConst2_19));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 2) = ((MR_Box) (TypeInfo_17_17));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 3) = ((MR_Box) (TypeInfo_17_17));
    }
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (mode_robdd__implications__get_resolvents_2_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (LitB_6));
    }
    Clauses_8 = mercury__list__map_2_f_0(TypeInfo_17_17, TypeInfo_20_20, (MR_Word) Var_11, (MR_Word) Literals_9);
    return Clauses_8;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv1_HeadVar__2_2;

    closure = closure_arg;
    conv1_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv0_HeadVar__2_2;

    closure = closure_arg;
    conv0_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word LitA_4,
  MR_Word ImpVars_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeCtorInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeCtorInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word BaseTypeClassInfo_for_enum_39;
    MR_Word TypeClassInfo_for_enum_40;
    MR_Word Pos_6;
    MR_Word Neg_7;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word conv2_Var_11;
    MR_Word conv3_Var_14;
    MR_Word conv4_HeadVar__3_3;

    TypeCtorInfo_33_33 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (TypeCtorInfo_33_33));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (TypeCtorInfo_35_35));
      MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfo_for_T_32));
    }
    BaseTypeClassInfo_for_enum_39 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    {
      TypeClassInfo_for_enum_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_40, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_39));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_40, 1) = ((MR_Box) (TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_40, 2) = ((MR_Box) (TypeInfo_36_36));
    }
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_32));
    }
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 0)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 1)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 2)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 3)));
    if (((MR_tag((MR_Word) LitA_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_16;
      MR_Word VarA_19;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), LitA_4, (MR_Integer) 0)));
      Pos_6 = mode_robdd__implications__entry_2_f_0(TypeInfo_for_T_32, VarA_19, Var_43);
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 0)));
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 1)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 2)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 3)));
      Neg_7 = mode_robdd__implications__entry_2_f_0(TypeInfo_for_T_32, VarA_19, Var_16);
    }
    else
    {
      MR_Word VarA_8;
      MR_Word Var_18;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;

      VarA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), LitA_4, (MR_Integer) 0)));
      Pos_6 = mode_robdd__implications__entry_2_f_0(TypeInfo_for_T_32, VarA_8, Var_46);
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 0)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 1)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 2)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_5, (MR_Integer) 3)));
      Neg_7 = mode_robdd__implications__entry_2_f_0(TypeInfo_for_T_32, VarA_8, Var_18);
    }
    conv2_Var_11 = mercury__sparse_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_enum_40, (MR_Word) Pos_6);
    Var_11 = (MR_Word) conv2_Var_11;
    Var_9 = mercury__list__map_2_f_0(TypeInfo_36_36, TypeInfo_34_34, (MR_Word) Var_10, (MR_Word) Var_11);
    conv3_Var_14 = mercury__sparse_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_enum_40, (MR_Word) Neg_7);
    Var_14 = (MR_Word) conv3_Var_14;
    Var_12 = mercury__list__map_2_f_0(TypeInfo_36_36, TypeInfo_34_34, (MR_Word) Var_13, (MR_Word) Var_14);
    conv4_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(TypeInfo_34_34, (MR_Word) Var_9, (MR_Word) Var_12);
    HeadVar__3_3 = (MR_Word) conv4_HeadVar__3_3;
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word V_4,
  MR_Word M_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word Vs_6;
    MR_Word TypeCtorInfo_8_8;
    MR_Word TypeInfo_9_9;
    MR_Word TypeCtorInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Box conv0_Vs_6;

    TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    TypeCtorInfo_10_10 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_9_9));
    }
    succeeded = mercury__map__elem_2_f_0(TypeInfo_9_9, TypeInfo_11_11, ((MR_Box) (V_4)), (MR_Word) M_5, &conv0_Vs_6);
    if (succeeded)
    {
      Vs_6 = ((MR_Word) conv0_Vs_6);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      HeadVar__3_3 = Vs_6;
    else
    {
      MR_Word TypeCtorInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word conv1_HeadVar__3_3;

      TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (TypeCtorInfo_12_12));
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_7));
      }
      conv1_HeadVar__3_3 = mercury__sparse_bitset__init_0_f_0(TypeInfo_13_13);
      HeadVar__3_3 = (MR_Word) conv1_HeadVar__3_3;
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
  MR_Word TypeInfo_for_T_100,
  MR_Tuple HeadVar__1_1,
  MR_Word ImpVars_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;

    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 0)));
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 1)));
    Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 2)));
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 3)));
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 0)));
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 1)));
    Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 2)));
    Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars_2, (MR_Integer) 3)));
    if (((MR_tag((MR_Word) Var_101)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_127;

      Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 0)));
      if (((MR_tag((MR_Word) Var_102)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word VA_24;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_33;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_85;
        MR_Word Var_84;

        VA_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 0)));
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_24, Var_112, Var_127, &Var_33);
        if (succeeded)
        {
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_123));
          }
          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0)));
          Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1)));
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 2)));
          Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 3)));
          succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_127, Var_30, VA_24, &Var_31);
          if (succeeded)
          {
            Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0)));
            Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1)));
            Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 2)));
            Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_85));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word VA_14;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_23;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_68;

        VA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_102, (MR_Integer) 0)));
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_14, Var_113, Var_127, &Var_23);
        if (succeeded)
        {
          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Var_123));
          }
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2)));
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3)));
          succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_127, Var_20, VA_14, &Var_21);
          if (succeeded)
          {
            Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
            Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2)));
            Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_71));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      MR_Word Var_128;

      Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_101, (MR_Integer) 0)));
      if (((MR_tag((MR_Word) Var_102)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word VA_4;
        MR_Word Var_9;
        MR_Word Var_10;
        MR_Word Var_11;
        MR_Word Var_13;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_55;

        VA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 0)));
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_4, Var_114, Var_128, &Var_13);
        if (succeeded)
        {
          {
            Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Var_123));
          }
          Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
          Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
          Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
          succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_128, Var_10, VA_4, &Var_11);
          if (succeeded)
          {
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
            Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_57));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word VA_34;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_43;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;

        VA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_102, (MR_Integer) 0)));
        succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, VA_34, Var_111, Var_128, &Var_43);
        if (succeeded)
        {
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Var_43));
          }
          Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0)));
          Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1)));
          Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 2)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 3)));
          succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(TypeInfo_for_T_100, Var_128, Var_40, VA_34, &Var_41);
          if (succeeded)
          {
            Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0)));
            Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1)));
            Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 2)));
            Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VA_5,
  MR_Word M0_6,
  MR_Word VB_7,
  MR_Word * M_8)
{
  {
    MR_bool succeeded;
    MR_Word Vs_9;
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word TypeCtorInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Box conv0_Vs_9;

    TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_14_14));
    }
    succeeded = mercury__map__elem_2_f_0(TypeInfo_14_14, TypeInfo_16_16, ((MR_Box) (VA_5)), (MR_Word) M0_6, &conv0_Vs_9);
    if (succeeded)
    {
      Vs_9 = ((MR_Word) conv0_Vs_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word BaseTypeClassInfo_for_enum_23;
      MR_Word TypeClassInfo_for_enum_24;
      MR_Word TypeCtorInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word Var_10;
      MR_Word TypeCtorInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word BaseTypeClassInfo_for_enum_19;
      MR_Word TypeClassInfo_for_enum_20;
      MR_Word conv1_Var_10;
      MR_Word conv2_M_8;

      BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_12));
      }
      {
        TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_19));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, 1) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, 2) = ((MR_Box) (TypeInfo_18_18));
      }
      succeeded = mercury__sparse_bitset__contains_2_p_0(TypeClassInfo_for_enum_20, (MR_Word) Vs_9, ((MR_Box) (VB_7)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_12));
        }
        {
          TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_24, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_23));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_24, 1) = ((MR_Box) (TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_24, 2) = ((MR_Box) (TypeInfo_22_22));
        }
        conv1_Var_10 = mercury__sparse_bitset__insert_2_f_0(TypeClassInfo_for_enum_24, (MR_Word) Vs_9, ((MR_Box) (VB_7)));
        Var_10 = (MR_Word) conv1_Var_10;
        TypeCtorInfo_25_25 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_25_25));
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_22_22));
        }
        conv2_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(TypeInfo_22_22, TypeInfo_26_26, ((MR_Box) (VA_5)), (MR_Word) M0_6, ((MR_Box) (Var_10)));
        *M_8 = (MR_Word) conv2_M_8;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeCtorInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word BaseTypeClassInfo_for_enum_29;
      MR_Word TypeClassInfo_for_enum_30;
      MR_Word TypeCtorInfo_31_31;
      MR_Word TypeInfo_32_32;
      MR_Word Var_11;
      MR_Word conv3_Var_11;
      MR_Word conv4_M_8;

      BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (TypeCtorInfo_27_27));
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_12));
      }
      {
        TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_29));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 1) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 2) = ((MR_Box) (TypeInfo_28_28));
      }
      conv3_Var_11 = mercury__sparse_bitset__make_singleton_set_1_f_0(TypeClassInfo_for_enum_30, ((MR_Box) (VB_7)));
      Var_11 = (MR_Word) conv3_Var_11;
      TypeCtorInfo_31_31 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (TypeCtorInfo_31_31));
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_28_28));
      }
      conv4_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(TypeInfo_28_28, TypeInfo_32_32, ((MR_Box) (VA_5)), (MR_Word) M0_6, ((MR_Box) (Var_11)));
      *M_8 = (MR_Word) conv4_M_8;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__filter_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv0_HeadVar__3_3;

    closure = closure_arg;
    conv0_HeadVar__3_3 = mode_robdd__implications__filter_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__filter_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word P_4,
  MR_Word ImpVars_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (mode_robdd__implications__filter_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), Var_6, 4) = ((MR_Box) (P_4));
    }
    HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(TypeInfo_for_T_7, Var_6, ImpVars_5);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__2_9;

    closure = closure_arg;
    conv0_LambdaHeadVar__2_9 = mode_robdd__implications__IntroducedFrom__func__restrict_threshold__98__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Threshold_4,
  MR_Word ImpVars_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (mode_robdd__implications__restrict_threshold_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), Var_7, 4) = ((MR_Box) (Threshold_4));
    }
    HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(TypeInfo_for_T_13, Var_7, ImpVars_5);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv0_HeadVar__3_3;

    closure = closure_arg;
    conv0_HeadVar__3_3 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__delete_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word ImpVars_4,
  MR_Word Var_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (mode_robdd__implications__delete_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), Var_6, 4) = ((MR_Box) (Var_5));
    }
    HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(TypeInfo_for_T_7, Var_6, ImpVars_4);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word F_4,
  MR_Word ImpVars0_5)
{
  {
    MR_Word ImpVars_6;
    MR_Word I_7;
    MR_Word RI_8;
    MR_Word DI_9;
    MR_Word RDI_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_11;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
    MR_Box conv3_Var_12;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
    MR_Box conv5_Var_13;
    MR_Box MR_CALL (* func_6)(MR_Box, MR_Box);
    MR_Box conv7_Var_14;

    I_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_5, (MR_Integer) 0)));
    RI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_5, (MR_Integer) 1)));
    DI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_5, (MR_Integer) 2)));
    RDI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVars0_5, (MR_Integer) 3)));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1)));
    conv1_Var_11 = func_0(((MR_Box) F_4), ((MR_Box) (I_7)));
    Var_11 = ((MR_Word) conv1_Var_11);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1)));
    conv3_Var_12 = func_2(((MR_Box) F_4), ((MR_Box) (RI_8)));
    Var_12 = ((MR_Word) conv3_Var_12);
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1)));
    conv5_Var_13 = func_4(((MR_Box) F_4), ((MR_Box) (DI_9)));
    Var_13 = ((MR_Word) conv5_Var_13);
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1)));
    conv7_Var_14 = func_6(((MR_Box) F_4), ((MR_Box) (RDI_10)));
    Var_14 = ((MR_Word) conv7_Var_14);
    {
      ImpVars_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImpVars_6, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), ImpVars_6, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), ImpVars_6, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), ImpVars_6, 3) = ((MR_Box) (Var_14));
    }
    return ImpVars_6;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure;
    MR_Word conv0_HeadVar__3_3;

    closure = closure_arg;
    conv0_HeadVar__3_3 = mode_robdd__implications__imp_map_difference_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word ImpVarsA_4,
  MR_Word ImpVarsB_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (mode_robdd__implications__difference_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_T_7));
    }
    HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(TypeInfo_for_T_7, Var_6, ImpVarsA_4, ImpVarsB_5);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure;
    MR_Word conv0_HeadVar__3_3;

    closure = closure_arg;
    conv0_HeadVar__3_3 = mode_robdd__implications__intersect_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__f_plus_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word ImpVarsA_4,
  MR_Word ImpVarsB_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (mode_robdd__implications__f_plus_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_T_7));
    }
    HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(TypeInfo_for_T_7, Var_6, ImpVarsA_4, ImpVarsB_5);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word F_5,
  MR_Word ImpVarsA_6,
  MR_Word ImpVarsB_7)
{
  {
    MR_Word ImpVars_8;
    MR_Word IA_9;
    MR_Word RIA_10;
    MR_Word DIA_11;
    MR_Word RDIA_12;
    MR_Word IB_13;
    MR_Word RIB_14;
    MR_Word DIB_15;
    MR_Word RDIB_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_17;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_18;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box conv5_Var_19;
    MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box conv7_Var_20;

    IA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsA_6, (MR_Integer) 0)));
    RIA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsA_6, (MR_Integer) 1)));
    DIA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsA_6, (MR_Integer) 2)));
    RDIA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsA_6, (MR_Integer) 3)));
    IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsB_7, (MR_Integer) 0)));
    RIB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsB_7, (MR_Integer) 1)));
    DIB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsB_7, (MR_Integer) 2)));
    RDIB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImpVarsB_7, (MR_Integer) 3)));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));
    conv1_Var_17 = func_0(((MR_Box) F_5), ((MR_Box) (IA_9)), ((MR_Box) (IB_13)));
    Var_17 = ((MR_Word) conv1_Var_17);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));
    conv3_Var_18 = func_2(((MR_Box) F_5), ((MR_Box) (RIA_10)), ((MR_Box) (RIB_14)));
    Var_18 = ((MR_Word) conv3_Var_18);
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));
    conv5_Var_19 = func_4(((MR_Box) F_5), ((MR_Box) (DIA_11)), ((MR_Box) (DIB_15)));
    Var_19 = ((MR_Word) conv5_Var_19);
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));
    conv7_Var_20 = func_6(((MR_Box) F_5), ((MR_Box) (RDIA_12)), ((MR_Box) (RDIB_16)));
    Var_20 = ((MR_Word) conv7_Var_20);
    {
      ImpVars_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImpVars_8, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), ImpVars_8, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), ImpVars_8, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), ImpVars_8, 3) = ((MR_Box) (Var_20));
    }
    return ImpVars_8;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv7_HeadVar__2_2;

    closure = closure_arg;
    conv7_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv6_HeadVar__2_2;

    closure = closure_arg;
    conv6_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv5_HeadVar__2_2;

    closure = closure_arg;
    conv5_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv4_HeadVar__2_2;

    closure = closure_arg;
    conv4_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv3_HeadVar__2_2;

    closure = closure_arg;
    conv3_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv2_HeadVar__2_2;

    closure = closure_arg;
    conv2_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv1_HeadVar__2_2;

    closure = closure_arg;
    conv1_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure;
    MR_Word conv0_HeadVar__2_2;

    closure = closure_arg;
    conv0_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__f_times_2_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word ImpVars_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Imps_5;
    MR_Word RevImps_6;
    MR_Word DisImps_7;
    MR_Word RevDisImps_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    Imps_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    RevImps_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    DisImps_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    RevDisImps_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_2));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    Var_11 = mode_robdd__implications__add_imp_map_clauses_4_f_0(TypeInfo_for_T_20, Var_9, Var_10, Imps_5, ImpVars_4);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_3));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_4));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    Var_14 = mode_robdd__implications__add_imp_map_clauses_4_f_0(TypeInfo_for_T_20, Var_12, Var_13, RevImps_6, Var_11);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_5));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_6));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    Var_17 = mode_robdd__implications__add_imp_map_clauses_4_f_0(TypeInfo_for_T_20, Var_15, Var_16, DisImps_7, Var_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_7));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_8));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeInfo_for_T_20));
    }
    HeadVar__3_3 = mode_robdd__implications__add_imp_map_clauses_4_f_0(TypeInfo_for_T_20, Var_18, Var_19, RevDisImps_8, Var_17);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure;
    MR_Word conv0_LambdaHeadVar__4_19;

    closure = closure_arg;
    conv0_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_19));
    return wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MkLitA_6,
  MR_Word MkLitB_7,
  MR_Word IM_8,
  MR_Word ImpVars_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word TypeCtorInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeCtorInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeCtorInfo_37_37;
    MR_Word TypeInfo_38_38;
    MR_Word Var_15;
    MR_Box conv1_HeadVar__5_5;

    TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (TypeCtorInfo_33_33));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (TypeCtorInfo_35_35));
      MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_34_34));
    }
    TypeCtorInfo_37_37 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
    {
      TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_38_38, 0) = ((MR_Box) (TypeCtorInfo_37_37));
      MR_hl_field(MR_mktag(0), TypeInfo_38_38, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mode_robdd__implications__add_imp_map_clauses_4_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (MkLitA_6));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (MkLitB_7));
    }
    conv1_HeadVar__5_5 = mercury__map__foldl_3_f_0(TypeInfo_34_34, TypeInfo_36_36, TypeInfo_38_38, (MR_Word) Var_15, (MR_Word) IM_8, ((MR_Box) (ImpVars_9)));
    HeadVar__5_5 = ((MR_Word) conv1_HeadVar__5_5);
    return HeadVar__5_5;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__init_imp_vars_0_f_0(
  MR_Word TypeInfo_for_T_6)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word TypeCtorInfo_7_7;
    MR_Word TypeInfo_8_8;
    MR_Word TypeCtorInfo_9_9;
    MR_Word TypeInfo_10_10;
    MR_Word Var_2;
    MR_Word Var_3;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word conv0_Var_2;
    MR_Word conv1_Var_3;
    MR_Word conv2_Var_4;
    MR_Word conv3_Var_5;

    TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
    }
    conv0_Var_2 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
    Var_2 = (MR_Word) conv0_Var_2;
    conv1_Var_3 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
    Var_3 = (MR_Word) conv1_Var_3;
    conv2_Var_4 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
    Var_4 = (MR_Word) conv2_Var_4;
    conv3_Var_5 = mercury__map__init_0_f_0(TypeInfo_8_8, TypeInfo_10_10);
    Var_5 = (MR_Word) conv3_Var_5;
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    }
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mode_robdd__implications____Unify____bin_clause_1_0(((MR_Word) wrapper_arg_1), ((MR_Tuple) wrapper_arg_2), ((MR_Tuple) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mode_robdd__implications____Compare____bin_clause_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Tuple) wrapper_arg_3), ((MR_Tuple) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mode_robdd__implications____Unify____extract_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mode_robdd__implications____Compare____extract_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mode_robdd__implications____Unify____mklit_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mode_robdd__implications____Compare____mklit_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
