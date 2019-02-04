/*
** Automatically generated from `mode_robdd.implications.m'
** by the Mercury compiler,
** version DEV
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


/* :- module mode_robdd.implications. */
/* :- implementation. */

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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__MkLitA_6,
  MR_Word mode_robdd__implications__MkLitB_7,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__MkLitA_6,
  MR_Word mode_robdd__implications__MkLitB_7,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_21,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_22);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__548__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
  MR_Word mode_robdd__implications__LitB_6,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12);

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_25,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_13,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_14);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_25,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_17,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__Var_4,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_9,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_10);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Word mode_robdd__implications__HeadVar__2_13,
  MR_Word mode_robdd__implications__HeadVar__3_14);

static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
  MR_Word mode_robdd__implications__EQVars_5,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_18);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__HeadVar__2_35,
  MR_Word mode_robdd__implications__HeadVar__3_36);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
  MR_Word mode_robdd__implications__IsDisImp_9,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_32,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_33,
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_34);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__120__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__P_4,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12);

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_31,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_32,
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_33);

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__98__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
  MR_Word mode_robdd__implications__Threshold_4,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8);

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
  MR_Word * mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2,
  MR_Word mode_robdd__implications__HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
  MR_Word mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2);

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
  MR_Word * mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2,
  MR_Word mode_robdd__implications__HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
  MR_Word mode_robdd__implications__HeadVar__2_1,
  MR_Word mode_robdd__implications__HeadVar__2_2);

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
  MR_Word * mode_robdd__implications__HeadVar__1_1,
  MR_Tuple mode_robdd__implications__HeadVar__2_2,
  MR_Tuple mode_robdd__implications__HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
  MR_Tuple mode_robdd__implications__HeadVar__2_2);

static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
  MR_Word mode_robdd__implications__V_3);

static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
  MR_Word mode_robdd__implications__V_3);

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
  MR_Word mode_robdd__implications__HeadVar__1_1);

static MR_Box MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_25,
  MR_Word mode_robdd__implications__IM_4,
  MR_Word mode_robdd__implications__RIM_5);

static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__Var_4,
  MR_Word mode_robdd__implications__IM0_5);

static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__IMA_4,
  MR_Word mode_robdd__implications__IMB_5);

static MR_Word MR_CALL 
mode_robdd__implications__f_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
  MR_Word mode_robdd__implications__VA_5,
  MR_Word mode_robdd__implications__M_6,
  MR_Word mode_robdd__implications__VB_7);

static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__P_4,
  MR_Word mode_robdd__implications__IM_5);

static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
  MR_Word mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2,
  MR_Word mode_robdd__implications__IM_3);

static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Word mode_robdd__implications__V_5,
  MR_Word mode_robdd__implications__M_6,
  MR_Word mode_robdd__implications__Vs_7);

static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
  MR_Word mode_robdd__implications__HeadVar__1_1);

static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
  void * mode_robdd__implications__env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
  void * mode_robdd__implications__env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
  void * mode_robdd__implications__env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
  void * mode_robdd__implications__env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
  void * mode_robdd__implications__env_ptr_arg);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
  void * mode_robdd__implications__env_ptr_arg);

static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
  MR_Word mode_robdd__implications__EQVars_4,
  MR_Word mode_robdd__implications__DisImps_5,
  MR_Word mode_robdd__implications__RevDisImps_6);

static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
  MR_Word mode_robdd__implications__EQVars_5,
  MR_Word * mode_robdd__implications__Changed_6,
  MR_Word mode_robdd__implications__ImpMap0_7,
  MR_Word * mode_robdd__implications__ImpMap_8);

static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__Extract_7,
  MR_Word mode_robdd__implications__Imps_8,
  MR_Word mode_robdd__implications__DisImps_9,
  MR_Word * mode_robdd__implications__Changed_10,
  MR_Word mode_robdd__implications__FalseVars0_11,
  MR_Word * mode_robdd__implications__FalseVars_12);

static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Word mode_robdd__implications__IMA_4,
  MR_Word mode_robdd__implications__IMB_5);

static MR_Box MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
  MR_Word mode_robdd__implications__IM_3);

static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
  MR_Word mode_robdd__implications__IsDisImp_9,
  MR_Word * mode_robdd__implications__Changed_10,
  MR_Word mode_robdd__implications__TrueVars0_11,
  MR_Word * mode_robdd__implications__TrueVars_12,
  MR_Word mode_robdd__implications__FalseVars0_13,
  MR_Word * mode_robdd__implications__FalseVars_14,
  MR_Word mode_robdd__implications__ImpMap0_15,
  MR_Word * mode_robdd__implications__ImpMap_16);

static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__add_clause_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Tuple mode_robdd__implications__Clause_4,
  MR_Word mode_robdd__implications__ImpVars_5);

static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
  MR_Word mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2);

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_9,
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__ImpVars_6);

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
  MR_Word mode_robdd__implications__LitA_5,
  MR_Word mode_robdd__implications__LitB_6,
  MR_Word mode_robdd__implications__ImpVars_7);

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__LitA_4,
  MR_Word mode_robdd__implications__ImpVars_5);

static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
  MR_Word mode_robdd__implications__V_4,
  MR_Word mode_robdd__implications__M_5);

static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_100,
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__ImpVars_2,
  MR_Word * mode_robdd__implications__HeadVar__3_3);

static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
  MR_Word mode_robdd__implications__VA_5,
  MR_Word mode_robdd__implications__M0_6,
  MR_Word mode_robdd__implications__VB_7,
  MR_Word * mode_robdd__implications__M_8);

static MR_Box MR_CALL 
mode_robdd__implications__filter_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
  MR_Word mode_robdd__implications__F_4,
  MR_Word mode_robdd__implications__ImpVars0_5);

static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_21,
  MR_Word mode_robdd__implications__F_5,
  MR_Word mode_robdd__implications__ImpVarsA_6,
  MR_Word mode_robdd__implications__ImpVarsB_7);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__MkLitA_6,
  MR_Word mode_robdd__implications__MkLitB_7,
  MR_Word mode_robdd__implications__IM_8,
  MR_Word mode_robdd__implications__ImpVars_9);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box * mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3,
  MR_Box mode_robdd__implications__wrapper_arg_4);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2);

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
  MR_Box * mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3);

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box * mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3,
  MR_Box mode_robdd__implications__wrapper_arg_4);


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
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_3;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__3_23;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__3_23 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 6))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__3_23));
    return mode_robdd__implications__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__MkLitA_6,
  MR_Word mode_robdd__implications__MkLitB_7,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_18)
{
  {
    MR_Word mode_robdd__implications__LambdaHeadVar__4_19;
    MR_Word mode_robdd__implications__TypeCtorInfo_39_39;
    MR_Word mode_robdd__implications__TypeInfo_40_40;
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_41;
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_42;
    MR_Word mode_robdd__implications__TypeCtorInfo_43_43;
    MR_Word mode_robdd__implications__TypeInfo_44_44;
    MR_Word mode_robdd__implications__Var_20;
    MR_Box mode_robdd__implications__conv1_LambdaHeadVar__4_19;

    mode_robdd__implications__BaseTypeClassInfo_for_enum_41 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__implications__TypeCtorInfo_39_39 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_39_39));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    {
      mode_robdd__implications__TypeClassInfo_for_enum_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_41));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_40_40));
    }
    mode_robdd__implications__TypeCtorInfo_43_43 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
    {
      mode_robdd__implications__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_43_43));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    {
      mode_robdd__implications__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 4) = ((MR_Box) (mode_robdd__implications__MkLitA_6));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 5) = ((MR_Box) (mode_robdd__implications__MkLitB_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 6) = ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_16));
    }
    {
      mode_robdd__implications__conv1_LambdaHeadVar__4_19 = mercury__sparse_bitset__foldl_3_f_0(mode_robdd__implications__TypeInfo_44_44, mode_robdd__implications__TypeClassInfo_for_enum_42, (MR_Word) mode_robdd__implications__Var_20, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_17, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__3_18)));
    }
    mode_robdd__implications__LambdaHeadVar__4_19 = ((MR_Word) mode_robdd__implications__conv1_LambdaHeadVar__4_19);
    return mode_robdd__implications__LambdaHeadVar__4_19;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__570__1_6_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__MkLitA_6,
  MR_Word mode_robdd__implications__MkLitB_7,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_21,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_22)
{
  {
    MR_Word mode_robdd__implications__LambdaHeadVar__3_23;
    MR_Tuple mode_robdd__implications__Var_24;
    MR_Word mode_robdd__implications__Var_25;
    MR_Word mode_robdd__implications__Var_26;
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv1_Var_25;
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv3_Var_26;

    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__MkLitA_6, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv1_Var_25 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__MkLitA_6), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_16)));
    }
    mode_robdd__implications__Var_25 = ((MR_Word) mode_robdd__implications__conv1_Var_25);
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__MkLitB_7, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv3_Var_26 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__MkLitB_7), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_21)));
    }
    mode_robdd__implications__Var_26 = ((MR_Word) mode_robdd__implications__conv3_Var_26);
    {
      mode_robdd__implications__Var_24 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_24, 0) = ((MR_Box) (mode_robdd__implications__Var_25));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_24, 1) = ((MR_Box) (mode_robdd__implications__Var_26));
    }
    {
      mode_robdd__implications__LambdaHeadVar__3_23 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__Var_24, mode_robdd__implications__LambdaHeadVar__2_22);
    }
    return mode_robdd__implications__LambdaHeadVar__3_23;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__548__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
  MR_Word mode_robdd__implications__LitB_6,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12)
{
  {
    MR_Tuple mode_robdd__implications__LambdaHeadVar__2_13;

    {
      mode_robdd__implications__LambdaHeadVar__2_13 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__2_13, 0) = ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_12));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__2_13, 1) = ((MR_Box) (mode_robdd__implications__LitB_6));
    }
    return mode_robdd__implications__LambdaHeadVar__2_13;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_3;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__3_19;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__3_19 = mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__3_19));
    return mode_robdd__implications__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_25,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_13,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_14)
{
  {
    MR_Word mode_robdd__implications__LambdaHeadVar__4_15;
    MR_Word mode_robdd__implications__TypeCtorInfo_32_32;
    MR_Word mode_robdd__implications__TypeInfo_33_33;
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_34;
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_35;
    MR_Word mode_robdd__implications__TypeCtorInfo_36_36;
    MR_Word mode_robdd__implications__TypeInfo_37_37;
    MR_Word mode_robdd__implications__TypeCtorInfo_38_38;
    MR_Word mode_robdd__implications__TypeInfo_39_39;
    MR_Word mode_robdd__implications__Var_16;
    MR_Box mode_robdd__implications__conv1_LambdaHeadVar__4_15;

    mode_robdd__implications__BaseTypeClassInfo_for_enum_34 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__implications__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_32_32));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_25));
    }
    {
      mode_robdd__implications__TypeClassInfo_for_enum_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_35, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_34));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_35, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_25));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_35, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_33_33));
    }
    mode_robdd__implications__TypeCtorInfo_38_38 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    mode_robdd__implications__TypeCtorInfo_36_36 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_37_37, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_36_36));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_37_37, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_33_33));
    }
    {
      mode_robdd__implications__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_38_38));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_33_33));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_37_37));
    }
    {
      mode_robdd__implications__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_25));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 4) = ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_12));
    }
    {
      mode_robdd__implications__conv1_LambdaHeadVar__4_15 = mercury__sparse_bitset__foldl_3_f_0(mode_robdd__implications__TypeInfo_39_39, mode_robdd__implications__TypeClassInfo_for_enum_35, (MR_Word) mode_robdd__implications__Var_16, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_13, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__3_14)));
    }
    mode_robdd__implications__LambdaHeadVar__4_15 = ((MR_Word) mode_robdd__implications__conv1_LambdaHeadVar__4_15);
    return mode_robdd__implications__LambdaHeadVar__4_15;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__485__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_25,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_17,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_18)
{
  {
    MR_Word mode_robdd__implications__LambdaHeadVar__3_19;

    {
      mode_robdd__implications__LambdaHeadVar__3_19 = mode_robdd__implications__f_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_25, mode_robdd__implications__LambdaHeadVar__1_17, mode_robdd__implications__LambdaHeadVar__2_18, mode_robdd__implications__LambdaHeadVar__1_12);
    }
    return mode_robdd__implications__LambdaHeadVar__3_19;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__Var_4,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__LambdaHeadVar__4_14;
    MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
    MR_Word mode_robdd__implications__TypeInfo_28_28;
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;

    mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
    }
    {
      mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_30, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_12, ((MR_Box) (mode_robdd__implications__Var_4)));
    }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
        MR_Word mode_robdd__implications__TypeInfo_32_32;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_33;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_34;
        MR_Word mode_robdd__implications__Var_15;
        MR_Word mode_robdd__implications__conv0_Var_15;

        mode_robdd__implications__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_33));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
        }
        {
          mode_robdd__implications__conv0_Var_15 = mercury__sparse_bitset__delete_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_34, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_12, ((MR_Box) (mode_robdd__implications__Var_4)));
        }
        mode_robdd__implications__Var_15 = (MR_Word) mode_robdd__implications__conv0_Var_15;
        {
          mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__LambdaHeadVar__1_11, mode_robdd__implications__LambdaHeadVar__3_13, mode_robdd__implications__Var_15);
        }
      }
    else
      mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__LambdaHeadVar__3_13;
    return mode_robdd__implications__LambdaHeadVar__4_14;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_9,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_10)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__LambdaHeadVar__4_11;
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
    MR_Word mode_robdd__implications__TypeInfo_24_24;

    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
    }
    {
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_9);
    }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
        MR_Word mode_robdd__implications__TypeInfo_26_26;
        MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
        MR_Word mode_robdd__implications__TypeInfo_28_28;
        MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_11;

        mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
        }
        mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
        }
        {
          mode_robdd__implications__conv0_LambdaHeadVar__4_11 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_26_26, mode_robdd__implications__TypeInfo_28_28, (MR_Word) mode_robdd__implications__LambdaHeadVar__3_10, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_8)));
        }
        mode_robdd__implications__LambdaHeadVar__4_11 = (MR_Word) mode_robdd__implications__conv0_LambdaHeadVar__4_11;
      }
    else
      mode_robdd__implications__LambdaHeadVar__4_11 = mode_robdd__implications__LambdaHeadVar__3_10;
    return mode_robdd__implications__LambdaHeadVar__4_11;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__LambdaHeadVar__4_14;
    MR_Word mode_robdd__implications__VsA_9;
    MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
    MR_Word mode_robdd__implications__TypeInfo_31_31;
    MR_Word mode_robdd__implications__TypeCtorInfo_32_32;
    MR_Word mode_robdd__implications__TypeInfo_33_33;
    MR_Box mode_robdd__implications__conv0_VsA_9;

    mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
    }
    mode_robdd__implications__TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_32_32));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_31_31));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_31_31, mode_robdd__implications__TypeInfo_33_33, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_11)), (MR_Word) mode_robdd__implications__LambdaHeadVar__3_13, &mode_robdd__implications__conv0_VsA_9);
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__VsA_9 = ((MR_Word) mode_robdd__implications__conv0_VsA_9);
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_34_34;
        MR_Word mode_robdd__implications__TypeInfo_35_35;
        MR_Word mode_robdd__implications__Var_15;
        MR_Word mode_robdd__implications__conv1_Var_15;

        mode_robdd__implications__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_35_35, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_34_34));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
        }
        {
          mode_robdd__implications__conv1_Var_15 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_35_35, (MR_Word) mode_robdd__implications__VsA_9, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_12);
        }
        mode_robdd__implications__Var_15 = (MR_Word) mode_robdd__implications__conv1_Var_15;
        {
          mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__1_11, mode_robdd__implications__LambdaHeadVar__3_13, mode_robdd__implications__Var_15);
        }
      }
    else
      mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__LambdaHeadVar__3_13;
    return mode_robdd__implications__LambdaHeadVar__4_14;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Word mode_robdd__implications__HeadVar__2_13,
  MR_Word mode_robdd__implications__HeadVar__3_14)
{
  {
    MR_Word mode_robdd__implications__HeadVar__4_15;
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
    MR_Word mode_robdd__implications__TypeInfo_17_17;
    MR_Word mode_robdd__implications__conv0_HeadVar__4_15;

    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
    }
    {
      mode_robdd__implications__conv0_HeadVar__4_15 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__HeadVar__2_13, (MR_Word) mode_robdd__implications__HeadVar__3_14);
    }
    mode_robdd__implications__HeadVar__4_15 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_15;
    return mode_robdd__implications__HeadVar__4_15;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Box mode_robdd__implications__closure;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    return mode_robdd__implications__succeeded;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
  MR_Word mode_robdd__implications__EQVars_5,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_18)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Tuple mode_robdd__implications__LambdaHeadVar__4_19;
    MR_Word mode_robdd__implications__TypeCtorInfo_41_41;
    MR_Word mode_robdd__implications__TypeInfo_42_42;
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_43;
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_44;
    MR_Word mode_robdd__implications__Vs_13;
    MR_Word mode_robdd__implications__Var_20;
    MR_Word mode_robdd__implications__Var_21;
    MR_Word mode_robdd__implications__Var_22;
    MR_Word mode_robdd__implications__IM_28;
    MR_Word mode_robdd__implications__C_29;
    MR_Word mode_robdd__implications__conv0_Vs_13;
    MR_Word mode_robdd__implications__TypeCtorInfo_46_46;
    MR_Word mode_robdd__implications__TypeInfo_47_47;
    MR_Word mode_robdd__implications__TypeCtorInfo_48_48;
    MR_Word mode_robdd__implications__TypeInfo_49_49;

    mode_robdd__implications__IM_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_18, (MR_Integer) 0)));
    mode_robdd__implications__C_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_18, (MR_Integer) 1)));
    mode_robdd__implications__BaseTypeClassInfo_for_enum_43 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__implications__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_42_42, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_41_41));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_42_42, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
    }
    {
      mode_robdd__implications__TypeClassInfo_for_enum_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_43));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_42_42));
    }
    {
      mode_robdd__implications__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 4) = ((MR_Box) (mode_robdd__implications__EQVars_5));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_20, 5) = ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_16));
    }
    {
      mode_robdd__implications__conv0_Vs_13 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_44, (MR_Word) mode_robdd__implications__Var_20, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_17);
    }
    mode_robdd__implications__Vs_13 = (MR_Word) mode_robdd__implications__conv0_Vs_13;
    {
      mode_robdd__implications__Var_21 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_30, mode_robdd__implications__LambdaHeadVar__1_16, mode_robdd__implications__IM_28, mode_robdd__implications__Vs_13);
    }
    mode_robdd__implications__TypeCtorInfo_48_48 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    mode_robdd__implications__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_47_47, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_46_46));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_47_47, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
    }
    {
      mode_robdd__implications__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_49_49, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_48_48));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_47_47));
    }
    {
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_49_49, ((MR_Box) (mode_robdd__implications__Vs_13)), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__2_17)));
    }
    if (mode_robdd__implications__succeeded)
      mode_robdd__implications__Var_22 = mode_robdd__implications__C_29;
    else
      mode_robdd__implications__Var_22 = (MR_Integer) 1;
    {
      mode_robdd__implications__LambdaHeadVar__4_19 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_19, 0) = ((MR_Box) (mode_robdd__implications__Var_21));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_19, 1) = ((MR_Box) (mode_robdd__implications__Var_22));
    }
    return mode_robdd__implications__LambdaHeadVar__4_19;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__HeadVar__2_35,
  MR_Word mode_robdd__implications__HeadVar__3_36)
{
  {
    MR_Word mode_robdd__implications__HeadVar__4_37;
    MR_Word mode_robdd__implications__TypeCtorInfo_38_38;
    MR_Word mode_robdd__implications__TypeInfo_39_39;
    MR_Word mode_robdd__implications__conv0_HeadVar__4_37;

    mode_robdd__implications__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_38_38));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__conv0_HeadVar__4_37 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_39_39, (MR_Word) mode_robdd__implications__HeadVar__2_35, (MR_Word) mode_robdd__implications__HeadVar__3_36);
    }
    mode_robdd__implications__HeadVar__4_37 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_37;
    return mode_robdd__implications__HeadVar__4_37;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
  MR_Word mode_robdd__implications__IsDisImp_9,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_32,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_33,
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_34)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Tuple mode_robdd__implications__LambdaHeadVar__4_35;
    MR_Word mode_robdd__implications__Ts_23;
    MR_Word mode_robdd__implications__Fs_24;
    MR_Word mode_robdd__implications__IMs_25;
    MR_Word mode_robdd__implications__C_26;
    MR_Word mode_robdd__implications__Ts0_42;
    MR_Word mode_robdd__implications__Fs0_43;
    MR_Word mode_robdd__implications__IMs0_44;
    MR_Word mode_robdd__implications__C0_45;
    MR_Word mode_robdd__implications__TypeCtorInfo_57_57;
    MR_Word mode_robdd__implications__TypeInfo_58_58;
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_59;
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_60;
    MR_Word mode_robdd__implications__Var_36;

    mode_robdd__implications__Ts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 0)));
    mode_robdd__implications__Fs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 1)));
    mode_robdd__implications__IMs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 2)));
    mode_robdd__implications__C0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 3)));
    mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
    if (mode_robdd__implications__succeeded)
      mode_robdd__implications__Var_36 = mode_robdd__implications__Fs0_43;
    else
      mode_robdd__implications__Var_36 = mode_robdd__implications__Ts0_42;
    mode_robdd__implications__BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__implications__TypeCtorInfo_57_57 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_57_57));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
    }
    {
      mode_robdd__implications__TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_59));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_58_58));
    }
    {
      mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_60, (MR_Word) mode_robdd__implications__Var_36, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
    }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_61_61;
        MR_Word mode_robdd__implications__TypeInfo_62_62;
        MR_Word mode_robdd__implications__TypeCtorInfo_63_63;
        MR_Word mode_robdd__implications__TypeInfo_64_64;
        MR_Word mode_robdd__implications__conv0_Ts_23;
        MR_Word mode_robdd__implications__conv1_IMs_25;

        mode_robdd__implications__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_62_62, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_61_61));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_62_62, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
        }
        {
          mode_robdd__implications__conv0_Ts_23 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_62_62, (MR_Word) mode_robdd__implications__Ts0_42, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33);
        }
        mode_robdd__implications__Ts_23 = (MR_Word) mode_robdd__implications__conv0_Ts_23;
        mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
        mode_robdd__implications__TypeCtorInfo_63_63 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_64_64, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_63_63));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_64_64, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_62_62));
        }
        {
          mode_robdd__implications__conv1_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_62_62, mode_robdd__implications__TypeInfo_64_64, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
        }
        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv1_IMs_25;
        mode_robdd__implications__C_26 = (MR_Integer) 1;
      }
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_65_65;
        MR_Word mode_robdd__implications__TypeInfo_66_66;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_67;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_68;
        MR_Word mode_robdd__implications__Var_37;

        mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
        if (mode_robdd__implications__succeeded)
          mode_robdd__implications__Var_37 = mode_robdd__implications__Ts0_42;
        else
          mode_robdd__implications__Var_37 = mode_robdd__implications__Fs0_43;
        mode_robdd__implications__BaseTypeClassInfo_for_enum_67 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_65_65));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_67));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_66_66));
        }
        {
          mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_68, (MR_Word) mode_robdd__implications__Var_37, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
        }
        if (mode_robdd__implications__succeeded)
          {
            MR_Word mode_robdd__implications__TypeCtorInfo_69_69;
            MR_Word mode_robdd__implications__TypeInfo_70_70;
            MR_Word mode_robdd__implications__TypeCtorInfo_71_71;
            MR_Word mode_robdd__implications__TypeInfo_72_72;
            MR_Word mode_robdd__implications__conv2_IMs_25;

            mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
            mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
            mode_robdd__implications__TypeCtorInfo_69_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mode_robdd__implications__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_69_69));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
            }
            mode_robdd__implications__TypeCtorInfo_71_71 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
            {
              mode_robdd__implications__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_71_71));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_70_70));
            }
            {
              mode_robdd__implications__conv2_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_70_70, mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
            }
            mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv2_IMs_25;
            mode_robdd__implications__C_26 = (MR_Integer) 1;
          }
        else
          {
            MR_Word mode_robdd__implications__TypeCtorInfo_73_73;
            MR_Word mode_robdd__implications__TypeInfo_74_74;
            MR_Word mode_robdd__implications__FVs_27;
            MR_Word mode_robdd__implications__conv3_FVs_27;

            mode_robdd__implications__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mode_robdd__implications__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_74_74, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_73_73));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_74_74, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
            }
            {
              mode_robdd__implications__conv3_FVs_27 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_74_74, (MR_Word) mode_robdd__implications__Fs0_43, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33);
            }
            mode_robdd__implications__FVs_27 = (MR_Word) mode_robdd__implications__conv3_FVs_27;
            {
              mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_74_74, (MR_Word) mode_robdd__implications__FVs_27);
            }
            mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
            if (mode_robdd__implications__succeeded)
              {
                MR_Word mode_robdd__implications__TypeCtorInfo_83_83;
                MR_Word mode_robdd__implications__TypeInfo_84_84;
                MR_Word mode_robdd__implications__TypeCtorInfo_85_85;
                MR_Word mode_robdd__implications__TypeInfo_86_86;
                MR_Word mode_robdd__implications__conv6_IMs_25;

                mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
                if (mode_robdd__implications__succeeded)
                  {
                    MR_Word mode_robdd__implications__TypeCtorInfo_75_75;
                    MR_Word mode_robdd__implications__TypeInfo_76_76;
                    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_77;
                    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_78;
                    MR_Word mode_robdd__implications__conv4_Ts_23;

                    mode_robdd__implications__BaseTypeClassInfo_for_enum_77 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
                    mode_robdd__implications__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    {
                      mode_robdd__implications__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_76_76, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_75_75));
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_76_76, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
                    }
                    {
                      mode_robdd__implications__TypeClassInfo_for_enum_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_77));
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_76_76));
                    }
                    {
                      mode_robdd__implications__conv4_Ts_23 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_78, (MR_Word) mode_robdd__implications__Ts0_42, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                    }
                    mode_robdd__implications__Ts_23 = (MR_Word) mode_robdd__implications__conv4_Ts_23;
                  }
                else
                  mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
                mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
                if (mode_robdd__implications__succeeded)
                  mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
                else
                  {
                    MR_Word mode_robdd__implications__TypeCtorInfo_79_79;
                    MR_Word mode_robdd__implications__TypeInfo_80_80;
                    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_81;
                    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_82;
                    MR_Word mode_robdd__implications__conv5_Fs_24;

                    mode_robdd__implications__BaseTypeClassInfo_for_enum_81 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
                    mode_robdd__implications__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    {
                      mode_robdd__implications__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_80_80, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_79_79));
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_80_80, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
                    }
                    {
                      mode_robdd__implications__TypeClassInfo_for_enum_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_81));
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_80_80));
                    }
                    {
                      mode_robdd__implications__conv5_Fs_24 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_82, (MR_Word) mode_robdd__implications__Fs0_43, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                    }
                    mode_robdd__implications__Fs_24 = (MR_Word) mode_robdd__implications__conv5_Fs_24;
                  }
                mode_robdd__implications__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                {
                  mode_robdd__implications__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_84_84, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_83_83));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_84_84, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
                }
                mode_robdd__implications__TypeCtorInfo_85_85 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
                {
                  mode_robdd__implications__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_86_86, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_85_85));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_86_86, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_84_84));
                }
                {
                  mode_robdd__implications__conv6_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_84_84, mode_robdd__implications__TypeInfo_86_86, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                }
                mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv6_IMs_25;
                mode_robdd__implications__C_26 = (MR_Integer) 1;
              }
            else
              {
                MR_Word mode_robdd__implications__TVs_28;
                MR_Word mode_robdd__implications__TypeCtorInfo_87_87;
                MR_Word mode_robdd__implications__TypeInfo_88_88;
                MR_Word mode_robdd__implications__conv7_TVs_28;

                mode_robdd__implications__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                {
                  mode_robdd__implications__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_88_88, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_87_87));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_88_88, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
                }
                {
                  mode_robdd__implications__conv7_TVs_28 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_88_88, (MR_Word) mode_robdd__implications__Ts0_42, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33);
                }
                mode_robdd__implications__TVs_28 = (MR_Word) mode_robdd__implications__conv7_TVs_28;
                {
                  mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_88_88, (MR_Word) mode_robdd__implications__TVs_28);
                }
                mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
                if (mode_robdd__implications__succeeded)
                  {
                    MR_Word mode_robdd__implications__TypeCtorInfo_89_89;
                    MR_Word mode_robdd__implications__TypeInfo_90_90;
                    MR_Word mode_robdd__implications__UTVs_29;
                    MR_Word mode_robdd__implications__conv8_UTVs_29;

                    mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
                    mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
                    mode_robdd__implications__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    {
                      mode_robdd__implications__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_90_90, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_89_89));
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_90_90, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
                    }
                    {
                      mode_robdd__implications__conv8_UTVs_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_90_90, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33, (MR_Word) mode_robdd__implications__TVs_28);
                    }
                    mode_robdd__implications__UTVs_29 = (MR_Word) mode_robdd__implications__conv8_UTVs_29;
                    {
                      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_90_90, (MR_Word) mode_robdd__implications__UTVs_29);
                    }
                    if (mode_robdd__implications__succeeded)
                      {
                        MR_Word mode_robdd__implications__TypeCtorInfo_91_91;
                        MR_Word mode_robdd__implications__TypeInfo_92_92;
                        MR_Word mode_robdd__implications__conv9_IMs_25;

                        mode_robdd__implications__TypeCtorInfo_91_91 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
                        {
                          mode_robdd__implications__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_92_92, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_91_91));
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_92_92, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_90_90));
                        }
                        {
                          mode_robdd__implications__conv9_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_90_90, mode_robdd__implications__TypeInfo_92_92, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                        }
                        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv9_IMs_25;
                      }
                    else
                      {
                        MR_Word mode_robdd__implications__TypeCtorInfo_93_93;
                        MR_Word mode_robdd__implications__TypeInfo_94_94;
                        MR_Word mode_robdd__implications__conv10_IMs_25;

                        mode_robdd__implications__TypeCtorInfo_93_93 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
                        {
                          mode_robdd__implications__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_94_94, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_93_93));
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_94_94, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_90_90));
                        }
                        {
                          mode_robdd__implications__conv10_IMs_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_90_90, mode_robdd__implications__TypeInfo_94_94, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)), (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__UTVs_29)));
                        }
                        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv10_IMs_25;
                      }
                    mode_robdd__implications__C_26 = (MR_Integer) 1;
                  }
                else
                  {
                    mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
                    mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
                    mode_robdd__implications__IMs_25 = mode_robdd__implications__IMs0_44;
                    mode_robdd__implications__C_26 = mode_robdd__implications__C0_45;
                  }
              }
          }
      }
    {
      mode_robdd__implications__LambdaHeadVar__4_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 0) = ((MR_Box) (mode_robdd__implications__Ts_23));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 1) = ((MR_Box) (mode_robdd__implications__Fs_24));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 2) = ((MR_Box) (mode_robdd__implications__IMs_25));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 3) = ((MR_Box) (mode_robdd__implications__C_26));
    }
    return mode_robdd__implications__LambdaHeadVar__4_35;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__120__1_5_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__P_4,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__LambdaHeadVar__4_13;
    MR_bool MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);

    mode_robdd__implications__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__P_4, (MR_Integer) 1)));
    {
      mode_robdd__implications__succeeded = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__P_4), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_10)));
    }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
        MR_Word mode_robdd__implications__TypeInfo_27_27;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_28;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_29;
        MR_Word mode_robdd__implications__Var_14;
        MR_Word mode_robdd__implications__conv1_Var_14;

        mode_robdd__implications__BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_28));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
        }
        {
          mode_robdd__implications__conv1_Var_14 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_29, (MR_Word) mode_robdd__implications__P_4, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_11);
        }
        mode_robdd__implications__Var_14 = (MR_Word) mode_robdd__implications__conv1_Var_14;
        {
          mode_robdd__implications__LambdaHeadVar__4_13 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__1_10, mode_robdd__implications__LambdaHeadVar__3_12, mode_robdd__implications__Var_14);
        }
      }
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
        MR_Word mode_robdd__implications__TypeInfo_31_31;
        MR_Word mode_robdd__implications__TypeCtorInfo_32_32;
        MR_Word mode_robdd__implications__TypeInfo_33_33;
        MR_Word mode_robdd__implications__conv2_LambdaHeadVar__4_13;

        mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
        }
        mode_robdd__implications__TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_32_32));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_31_31));
        }
        {
          mode_robdd__implications__conv2_LambdaHeadVar__4_13 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_31_31, mode_robdd__implications__TypeInfo_33_33, (MR_Word) mode_robdd__implications__LambdaHeadVar__3_12, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_10)));
        }
        mode_robdd__implications__LambdaHeadVar__4_13 = (MR_Word) mode_robdd__implications__conv2_LambdaHeadVar__4_13;
      }
    return mode_robdd__implications__LambdaHeadVar__4_13;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12)
{
  {
    MR_Word mode_robdd__implications__LambdaHeadVar__4_13;
    MR_Word mode_robdd__implications__Var_14;

    {
      mode_robdd__implications__Var_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__1_10, mode_robdd__implications__LambdaHeadVar__2_11, mode_robdd__implications__LambdaHeadVar__3_12);
    }
    {
      mode_robdd__implications__LambdaHeadVar__4_13 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__2_11, mode_robdd__implications__LambdaHeadVar__1_10, mode_robdd__implications__Var_14);
    }
    return mode_robdd__implications__LambdaHeadVar__4_13;
  }
}

static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_31,
  MR_Word mode_robdd__implications__LambdaHeadVar__2_32,
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_33)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Tuple mode_robdd__implications__LambdaHeadVar__4_34;
    MR_Word mode_robdd__implications__C_23;
    MR_Word mode_robdd__implications__E_24;
    MR_Word mode_robdd__implications__I_25;
    MR_Word mode_robdd__implications__R_26;
    MR_Word mode_robdd__implications__C0_42;
    MR_Word mode_robdd__implications__E0_43;
    MR_Word mode_robdd__implications__I0_44;
    MR_Word mode_robdd__implications__R0_45;
    MR_Word mode_robdd__implications__RVs_27;
    MR_Word mode_robdd__implications__EVs_28;
    MR_Word mode_robdd__implications__TypeCtorInfo_67_67;
    MR_Word mode_robdd__implications__TypeInfo_68_68;
    MR_Word mode_robdd__implications__TypeCtorInfo_69_69;
    MR_Word mode_robdd__implications__TypeInfo_70_70;
    MR_Box mode_robdd__implications__conv0_RVs_27;
    MR_Word mode_robdd__implications__conv1_EVs_28;

    mode_robdd__implications__C0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 0)));
    mode_robdd__implications__E0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 1)));
    mode_robdd__implications__I0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 2)));
    mode_robdd__implications__R0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 3)));
    mode_robdd__implications__TypeCtorInfo_67_67 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_68_68, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_67_67));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_68_68, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
    }
    mode_robdd__implications__TypeCtorInfo_69_69 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_69_69));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_68_68));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_68_68, mode_robdd__implications__TypeInfo_70_70, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_31)), (MR_Word) mode_robdd__implications__R0_45, &mode_robdd__implications__conv0_RVs_27);
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__RVs_27 = ((MR_Word) mode_robdd__implications__conv0_RVs_27);
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    if (mode_robdd__implications__succeeded)
      {
        {
          mode_robdd__implications__conv1_EVs_28 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_68_68, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_32, (MR_Word) mode_robdd__implications__RVs_27);
        }
        mode_robdd__implications__EVs_28 = (MR_Word) mode_robdd__implications__conv1_EVs_28;
        {
          mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_68_68, (MR_Word) mode_robdd__implications__EVs_28);
        }
        mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
      }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_71_71;
        MR_Word mode_robdd__implications__TypeInfo_72_72;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_73;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_74;
        MR_Word mode_robdd__implications__Var_35;
        MR_Word mode_robdd__implications__Var_36;
        MR_Word mode_robdd__implications__Var_37;
        MR_Word mode_robdd__implications__conv2_Var_35;
        MR_Word mode_robdd__implications__conv3_Var_36;
        MR_Word mode_robdd__implications__conv4_Var_37;

        mode_robdd__implications__C_23 = (MR_Integer) 1;
        mode_robdd__implications__BaseTypeClassInfo_for_enum_73 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_71_71));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_73));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_72_72));
        }
        {
          mode_robdd__implications__conv2_Var_35 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_74, (MR_Word) mode_robdd__implications__EVs_28, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_31)));
        }
        mode_robdd__implications__Var_35 = (MR_Word) mode_robdd__implications__conv2_Var_35;
        {
          mode_robdd__implications__E_24 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__Var_35, mode_robdd__implications__E0_43);
        }
        {
          mode_robdd__implications__conv3_Var_36 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_32, (MR_Word) mode_robdd__implications__RVs_27);
        }
        mode_robdd__implications__Var_36 = (MR_Word) mode_robdd__implications__conv3_Var_36;
        {
          mode_robdd__implications__I_25 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__LambdaHeadVar__1_31, mode_robdd__implications__I0_44, mode_robdd__implications__Var_36);
        }
        {
          mode_robdd__implications__conv4_Var_37 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__RVs_27, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_32);
        }
        mode_robdd__implications__Var_37 = (MR_Word) mode_robdd__implications__conv4_Var_37;
        {
          mode_robdd__implications__R_26 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__LambdaHeadVar__1_31, mode_robdd__implications__R0_45, mode_robdd__implications__Var_37);
        }
      }
    else
      {
        mode_robdd__implications__C_23 = mode_robdd__implications__C0_42;
        mode_robdd__implications__E_24 = mode_robdd__implications__E0_43;
        mode_robdd__implications__I_25 = mode_robdd__implications__I0_44;
        mode_robdd__implications__R_26 = mode_robdd__implications__R0_45;
      }
    {
      mode_robdd__implications__LambdaHeadVar__4_34 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 0) = ((MR_Box) (mode_robdd__implications__C_23));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 1) = ((MR_Box) (mode_robdd__implications__E_24));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 2) = ((MR_Box) (mode_robdd__implications__I_25));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 3) = ((MR_Box) (mode_robdd__implications__R_26));
    }
    return mode_robdd__implications__LambdaHeadVar__4_34;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__98__1_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
  MR_Word mode_robdd__implications__Threshold_4,
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8)
{
  {
    MR_Word mode_robdd__implications__LambdaHeadVar__2_9;
    MR_Word mode_robdd__implications__TypeCtorInfo_14_14;
    MR_Word mode_robdd__implications__TypeInfo_15_15;
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
    MR_Word mode_robdd__implications__TypeInfo_17_17;
    MR_Word mode_robdd__implications__Var_10;
    MR_Word mode_robdd__implications__Var_11;
    MR_Word mode_robdd__implications__conv0_Var_10;
    MR_Word mode_robdd__implications__conv1_Var_11;

    mode_robdd__implications__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_13));
    }
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_15_15));
    }
    {
      mode_robdd__implications__conv0_Var_10 = mercury__map__to_assoc_list_1_f_0(mode_robdd__implications__TypeInfo_15_15, mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__LambdaHeadVar__1_8);
    }
    mode_robdd__implications__Var_10 = (MR_Word) mode_robdd__implications__conv0_Var_10;
    {
      mode_robdd__implications__conv1_Var_11 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_15_15, mode_robdd__implications__TypeInfo_17_17);
    }
    mode_robdd__implications__Var_11 = (MR_Word) mode_robdd__implications__conv1_Var_11;
    {
      mode_robdd__implications__LambdaHeadVar__2_9 = mode_robdd__implications__restrict_threshold_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__Threshold_4, mode_robdd__implications__Var_10, mode_robdd__implications__Var_11);
    }
    return mode_robdd__implications__LambdaHeadVar__2_9;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
  MR_Word * mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2,
  MR_Word mode_robdd__implications__HeadVar__3_3)
{
  {
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
    MR_Word mode_robdd__implications__TypeInfo_8_8;
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
    MR_Word mode_robdd__implications__TypeInfo_10_10;
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
    MR_Word mode_robdd__implications__TypeInfo_13_13;
    MR_Word mode_robdd__implications__Cast_HeadVar1_4;
    MR_Word mode_robdd__implications__Cast_HeadVar2_5;
    MR_Integer mode_robdd__implications__PolyConst2_12;

    mode_robdd__implications__Cast_HeadVar1_4 = mode_robdd__implications__HeadVar__2_2;
    mode_robdd__implications__Cast_HeadVar2_5 = mode_robdd__implications__HeadVar__3_3;
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_func_0;
    mode_robdd__implications__PolyConst2_12 = (MR_Integer) 2;
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
    }
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
    }
    {
      mode_robdd__implications__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_12));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_10_10));
    }
    {
      mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_13_13, mode_robdd__implications__HeadVar__1_1, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
  MR_Word mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__Cast_HeadVar1_3;
    MR_Word mode_robdd__implications__Cast_HeadVar2_4;

    mode_robdd__implications__Cast_HeadVar1_3 = mode_robdd__implications__HeadVar__1_1;
    mode_robdd__implications__Cast_HeadVar2_4 = mode_robdd__implications__HeadVar__2_2;
    {
      mode_robdd__implications__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mode_robdd__implications__Cast_HeadVar1_3, (MR_Word) mode_robdd__implications__Cast_HeadVar2_4);
    }
    return mode_robdd__implications__succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
  MR_Word * mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2,
  MR_Word mode_robdd__implications__HeadVar__3_3)
{
  {
    MR_Integer mode_robdd__implications__Cast_HeadVar1_4;
    MR_Integer mode_robdd__implications__Cast_HeadVar2_5;

    mode_robdd__implications__Cast_HeadVar1_4 = (MR_Integer) mode_robdd__implications__HeadVar__2_2;
    mode_robdd__implications__Cast_HeadVar2_5 = (MR_Integer) mode_robdd__implications__HeadVar__3_3;
    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mode_robdd__implications__HeadVar__1_1, mode_robdd__implications__Cast_HeadVar1_4, mode_robdd__implications__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
  MR_Word mode_robdd__implications__HeadVar__2_1,
  MR_Word mode_robdd__implications__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__implications__succeeded;

    mode_robdd__implications__succeeded = (mode_robdd__implications__HeadVar__2_1 == mode_robdd__implications__HeadVar__2_2);
    return mode_robdd__implications__succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
  MR_Word * mode_robdd__implications__HeadVar__1_1,
  MR_Tuple mode_robdd__implications__HeadVar__2_2,
  MR_Tuple mode_robdd__implications__HeadVar__3_3)
{
  {
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
    MR_Word mode_robdd__implications__TypeInfo_8_8;
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
    MR_Word mode_robdd__implications__TypeInfo_11_11;
    MR_Tuple mode_robdd__implications__Cast_HeadVar1_4;
    MR_Tuple mode_robdd__implications__Cast_HeadVar2_5;
    MR_Integer mode_robdd__implications__PolyConst2_10;

    mode_robdd__implications__Cast_HeadVar1_4 = mode_robdd__implications__HeadVar__2_2;
    mode_robdd__implications__Cast_HeadVar2_5 = mode_robdd__implications__HeadVar__3_3;
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    mode_robdd__implications__PolyConst2_10 = (MR_Integer) 2;
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
    }
    {
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_10));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
    }
    {
      mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_11_11, mode_robdd__implications__HeadVar__1_1, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
  MR_Tuple mode_robdd__implications__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__TypeCtorInfo_6_6;
    MR_Word mode_robdd__implications__TypeInfo_7_7;
    MR_Word mode_robdd__implications__TypeCtorInfo_8_8;
    MR_Word mode_robdd__implications__TypeInfo_10_10;
    MR_Tuple mode_robdd__implications__Cast_HeadVar1_3;
    MR_Tuple mode_robdd__implications__Cast_HeadVar2_4;
    MR_Integer mode_robdd__implications__PolyConst2_9;

    mode_robdd__implications__Cast_HeadVar1_3 = mode_robdd__implications__HeadVar__1_1;
    mode_robdd__implications__Cast_HeadVar2_4 = mode_robdd__implications__HeadVar__2_2;
    mode_robdd__implications__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    mode_robdd__implications__PolyConst2_9 = (MR_Integer) 2;
    mode_robdd__implications__TypeCtorInfo_6_6 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      mode_robdd__implications__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_7_7, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_7_7, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_5));
    }
    {
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_7_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_7_7));
    }
    {
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_10_10, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_3)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_4)));
    }
    return mode_robdd__implications__succeeded;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
  MR_Word mode_robdd__implications__V_3)
{
  {
    MR_Word mode_robdd__implications__HeadVar__2_2;

    {
      mode_robdd__implications__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__implications__V_3));
    }
    return mode_robdd__implications__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
  MR_Word mode_robdd__implications__V_3)
{
  {
    MR_Word mode_robdd__implications__HeadVar__2_2;

    {
      mode_robdd__implications__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__implications__V_3));
    }
    return mode_robdd__implications__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_relations_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
  MR_Word mode_robdd__implications__HeadVar__1_1)
{
  {
    MR_Word mode_robdd__implications__HeadVar__2_2;
    MR_Word mode_robdd__implications__Is0_3;
    MR_Word mode_robdd__implications__RIs0_4;
    MR_Word mode_robdd__implications__DIs0_5;
    MR_Word mode_robdd__implications__RDIs0_6;
    MR_Word mode_robdd__implications__Var_7;
    MR_Word mode_robdd__implications__Var_8;
    MR_Word mode_robdd__implications__Var_9;
    MR_Word mode_robdd__implications__Var_11;

    mode_robdd__implications__Is0_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
    mode_robdd__implications__RIs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
    mode_robdd__implications__DIs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 2)));
    mode_robdd__implications__RDIs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 3)));
    {
      mode_robdd__implications__Var_7 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__Is0_3, mode_robdd__implications__RIs0_4);
    }
    {
      mode_robdd__implications__Var_8 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__RIs0_4, mode_robdd__implications__Is0_3);
    }
    {
      mode_robdd__implications__Var_9 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__DIs0_5, mode_robdd__implications__DIs0_5);
    }
    {
      mode_robdd__implications__Var_11 = mode_robdd__implications__add_backwards_to_imp_map_2_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__RDIs0_6, mode_robdd__implications__RDIs0_6);
    }
    {
      mode_robdd__implications__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__implications__Var_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, 1) = ((MR_Box) (mode_robdd__implications__Var_8));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, 2) = ((MR_Box) (mode_robdd__implications__Var_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, 3) = ((MR_Box) (mode_robdd__implications__Var_11));
    }
    return mode_robdd__implications__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_15;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__add_backwards_to_imp_map__484__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_15));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_backwards_to_imp_map_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_25,
  MR_Word mode_robdd__implications__IM_4,
  MR_Word mode_robdd__implications__RIM_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
    MR_Word mode_robdd__implications__TypeInfo_27_27;
    MR_Word mode_robdd__implications__TypeCtorInfo_28_28;
    MR_Word mode_robdd__implications__TypeInfo_29_29;
    MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
    MR_Word mode_robdd__implications__TypeInfo_31_31;
    MR_Word mode_robdd__implications__Var_11;
    MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

    mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_25));
    }
    mode_robdd__implications__TypeCtorInfo_28_28 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_28_28));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
    }
    mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_29_29));
    }
    {
      mode_robdd__implications__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 1) = ((MR_Box) (mode_robdd__implications__add_backwards_to_imp_map_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_25));
    }
    {
      mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_27_27, mode_robdd__implications__TypeInfo_29_29, mode_robdd__implications__TypeInfo_31_31, (MR_Word) mode_robdd__implications__Var_11, (MR_Word) mode_robdd__implications__RIM_5, ((MR_Box) (mode_robdd__implications__IM_4)));
    }
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_14;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__459__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_14));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__Var_4,
  MR_Word mode_robdd__implications__IM0_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
    MR_Word mode_robdd__implications__TypeInfo_22_22;
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
    MR_Word mode_robdd__implications__TypeInfo_24_24;
    MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
    MR_Word mode_robdd__implications__TypeInfo_26_26;
    MR_Word mode_robdd__implications__IM1_9;
    MR_Word mode_robdd__implications__Var_10;
    MR_Word mode_robdd__implications__conv1_IM1_9;
    MR_Box mode_robdd__implications__conv2_HeadVar__3_3;

    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
    }
    mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_24_24));
    }
    {
      mode_robdd__implications__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 1) = ((MR_Box) (mode_robdd__implications__delete_var_from_imp_map_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 4) = ((MR_Box) (mode_robdd__implications__Var_4));
    }
    {
      mode_robdd__implications__conv1_IM1_9 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__IM0_5, ((MR_Box) (mode_robdd__implications__Var_4)));
    }
    mode_robdd__implications__IM1_9 = (MR_Word) mode_robdd__implications__conv1_IM1_9;
    {
      mode_robdd__implications__conv2_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, mode_robdd__implications__TypeInfo_26_26, (MR_Word) mode_robdd__implications__Var_10, (MR_Word) mode_robdd__implications__IM1_9, ((MR_Box) (mode_robdd__implications__IM1_9)));
    }
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv2_HeadVar__3_3);
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_14;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__imp_map_difference__436__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_14));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__IMA_4,
  MR_Word mode_robdd__implications__IMB_5)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
    MR_Word mode_robdd__implications__TypeInfo_21_21;
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
    MR_Word mode_robdd__implications__TypeInfo_23_23;

    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
    }
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, (MR_Word) mode_robdd__implications__IMA_4);
    }
    if (mode_robdd__implications__succeeded)
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__IMA_4;
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_24_24;
        MR_Word mode_robdd__implications__TypeInfo_25_25;
        MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
        MR_Word mode_robdd__implications__TypeInfo_27_27;
        MR_Word mode_robdd__implications__TypeCtorInfo_28_28;
        MR_Word mode_robdd__implications__TypeInfo_29_29;
        MR_Word mode_robdd__implications__Var_10;
        MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

        mode_robdd__implications__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_24_24));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
        }
        mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_25_25));
        }
        mode_robdd__implications__TypeCtorInfo_28_28 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
        {
          mode_robdd__implications__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_28_28));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_25_25));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
        }
        {
          mode_robdd__implications__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 1) = ((MR_Box) (mode_robdd__implications__imp_map_difference_2_f_0_1));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
        }
        {
          mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_25_25, mode_robdd__implications__TypeInfo_27_27, mode_robdd__implications__TypeInfo_29_29, (MR_Word) mode_robdd__implications__Var_10, (MR_Word) mode_robdd__implications__IMB_5, ((MR_Box) (mode_robdd__implications__IMA_4)));
        }
        mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
      }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__f_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
  MR_Word mode_robdd__implications__VA_5,
  MR_Word mode_robdd__implications__M_6,
  MR_Word mode_robdd__implications__VB_7)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__HeadVar__4_4;
    MR_Word mode_robdd__implications__Vs_8;
    MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
    MR_Word mode_robdd__implications__TypeInfo_13_13;
    MR_Word mode_robdd__implications__TypeCtorInfo_14_14;
    MR_Word mode_robdd__implications__TypeInfo_15_15;
    MR_Box mode_robdd__implications__conv0_Vs_8;

    mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_11));
    }
    mode_robdd__implications__TypeCtorInfo_14_14 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_13_13));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_13_13, mode_robdd__implications__TypeInfo_15_15, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M_6, &mode_robdd__implications__conv0_Vs_8);
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__Vs_8 = ((MR_Word) mode_robdd__implications__conv0_Vs_8);
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
        MR_Word mode_robdd__implications__TypeInfo_17_17;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_18;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_19;
        MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
        MR_Word mode_robdd__implications__TypeInfo_21_21;
        MR_Word mode_robdd__implications__Var_9;
        MR_Word mode_robdd__implications__conv1_Var_9;
        MR_Word mode_robdd__implications__conv2_HeadVar__4_4;

        mode_robdd__implications__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_11));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_18));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_11));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
        }
        {
          mode_robdd__implications__conv1_Var_9 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_19, (MR_Word) mode_robdd__implications__Vs_8, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
        mode_robdd__implications__Var_9 = (MR_Word) mode_robdd__implications__conv1_Var_9;
        mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
        }
        {
          mode_robdd__implications__conv2_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_17_17, mode_robdd__implications__TypeInfo_21_21, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__Var_9)));
        }
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv2_HeadVar__4_4;
      }
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
        MR_Word mode_robdd__implications__TypeInfo_23_23;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_24;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_25;
        MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
        MR_Word mode_robdd__implications__TypeInfo_27_27;
        MR_Word mode_robdd__implications__Var_10;
        MR_Word mode_robdd__implications__conv3_Var_10;
        MR_Word mode_robdd__implications__conv4_HeadVar__4_4;

        mode_robdd__implications__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_11));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_24));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_11));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_23_23));
        }
        {
          mode_robdd__implications__conv3_Var_10 = mercury__sparse_bitset__make_singleton_set_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_25, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
        mode_robdd__implications__Var_10 = (MR_Word) mode_robdd__implications__conv3_Var_10;
        mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_23_23));
        }
        {
          mode_robdd__implications__conv4_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_23_23, mode_robdd__implications__TypeInfo_27_27, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__Var_10)));
        }
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv4_HeadVar__4_4;
      }
    return mode_robdd__implications__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_13;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__filter_imp_map__120__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_13));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__P_4,
  MR_Word mode_robdd__implications__IM_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
    MR_Word mode_robdd__implications__TypeInfo_21_21;
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
    MR_Word mode_robdd__implications__TypeInfo_23_23;
    MR_Word mode_robdd__implications__TypeCtorInfo_24_24;
    MR_Word mode_robdd__implications__TypeInfo_25_25;
    MR_Word mode_robdd__implications__Var_9;
    MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
    }
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
    }
    mode_robdd__implications__TypeCtorInfo_24_24 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      mode_robdd__implications__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_24_24));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_23_23));
    }
    {
      mode_robdd__implications__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 1) = ((MR_Box) (mode_robdd__implications__filter_imp_map_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 4) = ((MR_Box) (mode_robdd__implications__P_4));
    }
    {
      mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, mode_robdd__implications__TypeInfo_25_25, (MR_Word) mode_robdd__implications__Var_9, (MR_Word) mode_robdd__implications__IM_5, ((MR_Box) (mode_robdd__implications__IM_5)));
    }
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
  MR_Word mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2,
  MR_Word mode_robdd__implications__IM_3)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__IM_4;

    if ((mode_robdd__implications__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mode_robdd__implications__IM_4 = mode_robdd__implications__IM_3;
    else
      {
        MR_Word mode_robdd__implications__V_8;
        MR_Word mode_robdd__implications__Vs_9;
        MR_Word mode_robdd__implications__AL_10;
        MR_Word mode_robdd__implications__Var_12;
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
        MR_Word mode_robdd__implications__TypeInfo_18_18;
        MR_Word mode_robdd__implications__Var_13;
        MR_Word mode_robdd__implications__Var_23;

        mode_robdd__implications__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 0)));
        mode_robdd__implications__AL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 1)));
        mode_robdd__implications__V_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_12, (MR_Integer) 0)));
        mode_robdd__implications__Vs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_12, (MR_Integer) 1)));
        mode_robdd__implications__Var_13 = (MR_Integer) 2;
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
        }
        {
          mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_18_18, &mode_robdd__implications__Var_23, ((MR_Box) (mode_robdd__implications__V_8)), ((MR_Box) (mode_robdd__implications__HeadVar__1_1)));
        }
        mode_robdd__implications__succeeded = (mode_robdd__implications__Var_13 == mode_robdd__implications__Var_23);
        if (mode_robdd__implications__succeeded)
          mode_robdd__implications__IM_4 = mode_robdd__implications__IM_3;
        else
          {
            MR_Word mode_robdd__implications__TypeCtorInfo_19_19;
            MR_Word mode_robdd__implications__TypeInfo_20_20;
            MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_21;
            MR_Word mode_robdd__implications__TypeClassInfo_for_enum_22;
            MR_Word mode_robdd__implications__Var_14;
            MR_Word mode_robdd__implications__Var_15;
            MR_Word mode_robdd__implications__conv0_Var_15;

            mode_robdd__implications__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            mode_robdd__implications__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_19_19));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
            }
            {
              mode_robdd__implications__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_21));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_20_20));
            }
            {
              mode_robdd__implications__conv0_Var_15 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_22, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__HeadVar__1_1)));
            }
            mode_robdd__implications__Var_15 = (MR_Word) mode_robdd__implications__conv0_Var_15;
            {
              mode_robdd__implications__Var_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_16, mode_robdd__implications__V_8, mode_robdd__implications__IM_3, mode_robdd__implications__Var_15);
            }
            {
              mode_robdd__implications__IM_4 = mode_robdd__implications__restrict_threshold_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_16, mode_robdd__implications__HeadVar__1_1, mode_robdd__implications__AL_10, mode_robdd__implications__Var_14);
            }
          }
      }
    return mode_robdd__implications__IM_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Word mode_robdd__implications__V_5,
  MR_Word mode_robdd__implications__M_6,
  MR_Word mode_robdd__implications__Vs_7)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__HeadVar__4_4;
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
    MR_Word mode_robdd__implications__TypeInfo_10_10;

    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
    }
    {
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__Vs_7);
    }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
        MR_Word mode_robdd__implications__TypeInfo_12_12;
        MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
        MR_Word mode_robdd__implications__TypeInfo_14_14;
        MR_Word mode_robdd__implications__conv0_HeadVar__4_4;

        mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
        }
        mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_12_12));
        }
        {
          mode_robdd__implications__conv0_HeadVar__4_4 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_12_12, mode_robdd__implications__TypeInfo_14_14, (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__V_5)));
        }
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_4;
      }
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
        MR_Word mode_robdd__implications__TypeInfo_16_16;
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
        MR_Word mode_robdd__implications__TypeInfo_18_18;
        MR_Word mode_robdd__implications__conv1_HeadVar__4_4;

        mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
        }
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_16_16));
        }
        {
          mode_robdd__implications__conv1_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_16_16, mode_robdd__implications__TypeInfo_18_18, ((MR_Box) (mode_robdd__implications__V_5)), (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__Vs_7)));
        }
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv1_HeadVar__4_4;
      }
    return mode_robdd__implications__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_13;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__357__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_13));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
  MR_Word mode_robdd__implications__EQVars_4,
  MR_Word mode_robdd__implications__ImpVars_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
    MR_Word mode_robdd__implications__TypeInfo_21_21;
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
    MR_Word mode_robdd__implications__TypeInfo_23_23;
    MR_Word mode_robdd__implications__Var_9;
    MR_Word mode_robdd__implications__Var_15;
    MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
    }
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
    {
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
    }
    {
      mode_robdd__implications__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 1) = ((MR_Box) (mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
    }
    mode_robdd__implications__Var_15 = (MR_Word) mode_robdd__implications__EQVars_4;
    {
      mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, (MR_Word) mode_robdd__implications__Var_9, (MR_Word) mode_robdd__implications__Var_15, ((MR_Box) (mode_robdd__implications__ImpVars_5)));
    }
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
    return mode_robdd__implications__HeadVar__3_3;
  }
}

void MR_CALL 
mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_29,
  MR_Word * mode_robdd__implications__Changed_6,
  MR_Word mode_robdd__implications__Robdd0_7,
  MR_Word * mode_robdd__implications__Robdd_8,
  MR_Word mode_robdd__implications__ImpVars0_9,
  MR_Word * mode_robdd__implications__ImpVars_10)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__ImpVars1_11;
    MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
    MR_Word mode_robdd__implications__TypeInfo_31_31;

    {
      mode_robdd__implications__ImpVars1_11 = mercury__robdd__extract_implications_1_f_0(mode_robdd__implications__TypeInfo_for_T_29, mode_robdd__implications__Robdd0_7);
    }
    {
      *mode_robdd__implications__ImpVars_10 = mode_robdd__implications__f_times_2_f_0(mode_robdd__implications__TypeInfo_for_T_29, mode_robdd__implications__ImpVars0_9, mode_robdd__implications__ImpVars1_11);
    }
    {
      *mode_robdd__implications__Robdd_8 = mercury__robdd__remove_implications_2_f_0(mode_robdd__implications__TypeInfo_for_T_29, *mode_robdd__implications__ImpVars_10, mode_robdd__implications__Robdd0_7);
    }
    mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
    {
      mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_29));
    }
    {
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_31_31, ((MR_Box) (*mode_robdd__implications__Robdd_8)), ((MR_Box) (mode_robdd__implications__Robdd0_7)));
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__succeeded = mode_robdd__implications__empty_1_p_0(mode_robdd__implications__TypeInfo_for_T_29, mode_robdd__implications__ImpVars1_11);
      }
    if (mode_robdd__implications__succeeded)
      *mode_robdd__implications__Changed_6 = (MR_Integer) 0;
    else
      *mode_robdd__implications__Changed_6 = (MR_Integer) 1;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
  MR_Word mode_robdd__implications__HeadVar__1_1)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
    MR_Word mode_robdd__implications__TypeInfo_8_8;
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
    MR_Word mode_robdd__implications__TypeInfo_10_10;
    MR_Word mode_robdd__implications__I_2;
    MR_Word mode_robdd__implications__RI_3;
    MR_Word mode_robdd__implications__DI_4;
    MR_Word mode_robdd__implications__RDI_5;

    mode_robdd__implications__I_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
    mode_robdd__implications__RI_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
    mode_robdd__implications__DI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 2)));
    mode_robdd__implications__RDI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 3)));
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
    }
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__I_2);
    }
    if (mode_robdd__implications__succeeded)
      {
        {
          mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__RI_3);
        }
        if (mode_robdd__implications__succeeded)
          {
            {
              mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__DI_4);
            }
            if (mode_robdd__implications__succeeded)
              {
                mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__RDI_5);
              }
          }
      }
    return mode_robdd__implications__succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__4_34;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_34 = mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_34));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

void MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
  MR_Word * mode_robdd__implications__Changed_6,
  MR_Word mode_robdd__implications__EQVars0_7,
  MR_Word * mode_robdd__implications__EQVars_8,
  MR_Word mode_robdd__implications__ImpVars0_9,
  MR_Word * mode_robdd__implications__ImpVars_10)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__Imps0_11;
    MR_Word mode_robdd__implications__RevImps0_12;
    MR_Word mode_robdd__implications__DisImps_13;
    MR_Word mode_robdd__implications__RevDisImps_14;

    mode_robdd__implications__Imps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 0)));
    mode_robdd__implications__RevImps0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 1)));
    mode_robdd__implications__DisImps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 2)));
    mode_robdd__implications__RevDisImps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 3)));
    {
      MR_Word mode_robdd__implications__TypeCtorInfo_47_47;
      MR_Word mode_robdd__implications__TypeInfo_48_48;
      MR_Word mode_robdd__implications__TypeCtorInfo_49_49;
      MR_Word mode_robdd__implications__TypeInfo_50_50;

      mode_robdd__implications__TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      {
        mode_robdd__implications__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_47_47));
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
      }
      mode_robdd__implications__TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      {
        mode_robdd__implications__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_49_49));
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
      }
      {
        mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_48_48, mode_robdd__implications__TypeInfo_50_50, (MR_Word) mode_robdd__implications__Imps0_11);
      }
    }
    if (!(mode_robdd__implications__succeeded))
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_51_51;
        MR_Word mode_robdd__implications__TypeInfo_52_52;
        MR_Word mode_robdd__implications__TypeCtorInfo_53_53;
        MR_Word mode_robdd__implications__TypeInfo_54_54;

        mode_robdd__implications__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_51_51));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
        }
        mode_robdd__implications__TypeCtorInfo_53_53 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_54_54, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_53_53));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_54_54, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_52_52));
        }
        {
          mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_52_52, mode_robdd__implications__TypeInfo_54_54, (MR_Word) mode_robdd__implications__RevImps0_12);
        }
      }
    if (mode_robdd__implications__succeeded)
      {
        *mode_robdd__implications__Changed_6 = (MR_Integer) 0;
        *mode_robdd__implications__EQVars_8 = mode_robdd__implications__EQVars0_7;
        *mode_robdd__implications__ImpVars_10 = mode_robdd__implications__ImpVars0_9;
      }
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_55_55;
        MR_Word mode_robdd__implications__TypeInfo_56_56;
        MR_Word mode_robdd__implications__TypeCtorInfo_57_57;
        MR_Word mode_robdd__implications__TypeInfo_58_58;
        MR_Word mode_robdd__implications__TypeCtorInfo_59_59;
        MR_Word mode_robdd__implications__TypeCtorInfo_60_60;
        MR_Word mode_robdd__implications__TypeInfo_61_61;
        MR_Word mode_robdd__implications__TypeCtorInfo_62_62;
        MR_Word mode_robdd__implications__TypeInfo_63_63;
        MR_Word mode_robdd__implications__TypeCtorInfo_64_64;
        MR_Word mode_robdd__implications__TypeInfo_66_66;
        MR_Word mode_robdd__implications__Imps_15;
        MR_Word mode_robdd__implications__RevImps_16;
        MR_Tuple mode_robdd__implications__Var_29;
        MR_Word mode_robdd__implications__Var_30;
        MR_Tuple mode_robdd__implications__Var_38;
        MR_Word mode_robdd__implications__Var_39;
        MR_Integer mode_robdd__implications__PolyConst4_65;
        MR_Box mode_robdd__implications__conv1_Var_29;

        mode_robdd__implications__TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_55_55));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
        }
        mode_robdd__implications__TypeCtorInfo_57_57 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_57_57));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_56_56));
        }
        mode_robdd__implications__TypeCtorInfo_64_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
        mode_robdd__implications__PolyConst4_65 = (MR_Integer) 4;
        mode_robdd__implications__TypeCtorInfo_59_59 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
        mode_robdd__implications__TypeCtorInfo_60_60 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_equiv_vars_1;
        {
          mode_robdd__implications__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_60_60));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
        }
        mode_robdd__implications__TypeCtorInfo_62_62 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
        {
          mode_robdd__implications__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_62_62));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_56_56));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_58_58));
        }
        {
          mode_robdd__implications__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_64_64));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 1) = ((MR_Box) (mode_robdd__implications__PolyConst4_65));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 2) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_59_59));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_61_61));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 4) = ((MR_Box) (mode_robdd__implications__TypeInfo_63_63));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 5) = ((MR_Box) (mode_robdd__implications__TypeInfo_63_63));
        }
        {
          mode_robdd__implications__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, 1) = ((MR_Box) (mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
        }
        mode_robdd__implications__Var_39 = (MR_Integer) 0;
        {
          mode_robdd__implications__Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 0) = ((MR_Box) (mode_robdd__implications__Var_39));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 1) = ((MR_Box) (mode_robdd__implications__EQVars0_7));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 2) = ((MR_Box) (mode_robdd__implications__Imps0_11));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 3) = ((MR_Box) (mode_robdd__implications__RevImps0_12));
        }
        {
          mode_robdd__implications__conv1_Var_29 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_56_56, mode_robdd__implications__TypeInfo_58_58, mode_robdd__implications__TypeInfo_66_66, (MR_Word) mode_robdd__implications__Var_30, (MR_Word) mode_robdd__implications__Imps0_11, ((MR_Box) (mode_robdd__implications__Var_38)));
        }
        mode_robdd__implications__Var_29 = ((MR_Tuple) mode_robdd__implications__conv1_Var_29);
        *mode_robdd__implications__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 0)));
        *mode_robdd__implications__EQVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 1)));
        mode_robdd__implications__Imps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 2)));
        mode_robdd__implications__RevImps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mode_robdd__implications__ImpVars_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Imps_15));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__RevImps_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__DisImps_13));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_14));
        }
      }
  }
}

MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_17,
  MR_Word mode_robdd__implications__EQVars_5,
  MR_Word * mode_robdd__implications__Changed_6,
  MR_Word mode_robdd__implications__ImpVars0_7,
  MR_Word * mode_robdd__implications__ImpVars_8)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__Imps0_9;
    MR_Word mode_robdd__implications__RevImps0_10;
    MR_Word mode_robdd__implications__DisImps_11;
    MR_Word mode_robdd__implications__RevDisImps_12;
    MR_Word mode_robdd__implications__Changed0_13;
    MR_Word mode_robdd__implications__Imps_14;
    MR_Word mode_robdd__implications__Changed1_15;
    MR_Word mode_robdd__implications__RevImps_16;

    mode_robdd__implications__Imps0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 0)));
    mode_robdd__implications__RevImps0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 1)));
    mode_robdd__implications__DisImps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 2)));
    mode_robdd__implications__RevDisImps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 3)));
    {
      mode_robdd__implications__succeeded = mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, mode_robdd__implications__DisImps_11, mode_robdd__implications__RevDisImps_12);
    }
    if (mode_robdd__implications__succeeded)
      {
        {
          mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, &mode_robdd__implications__Changed0_13, mode_robdd__implications__Imps0_9, &mode_robdd__implications__Imps_14);
        }
        {
          mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, &mode_robdd__implications__Changed1_15, mode_robdd__implications__RevImps0_10, &mode_robdd__implications__RevImps_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mode_robdd__implications__ImpVars_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Imps_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__RevImps_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__DisImps_11));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_12));
        }
        {
          *mode_robdd__implications__Changed_6 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed0_13, mode_robdd__implications__Changed1_15);
        }
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    return mode_robdd__implications__succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
  void * mode_robdd__implications__env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
    MR_builtin_longjmp((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
  void * mode_robdd__implications__env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8);
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10);
    {
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(mode_robdd__implications__env_ptr);
    }
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
  void * mode_robdd__implications__env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9);
    {
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(mode_robdd__implications__env_ptr);
    }
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
  void * mode_robdd__implications__env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
    {
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9);
    }
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
    if ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded)
      {
        mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(mode_robdd__implications__env_ptr);
      }
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
  void * mode_robdd__implications__env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
    }
    {
      mercury__sparse_bitset__member_2_p_1((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9, (MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5, mode_robdd__implications__env_ptr);
    }
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
  void * mode_robdd__implications__env_ptr_arg)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
    if (MR_builtin_setjmp((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
          MR_Word mode_robdd__implications__TypeCtorInfo_14_14;
          MR_Word mode_robdd__implications__TypeInfo_15_15;

          mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
          }
          mode_robdd__implications__TypeCtorInfo_14_14 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
          {
            mode_robdd__implications__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_14_14));
            MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
          }
          {
            mercury__map__member_3_p_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13, mode_robdd__implications__TypeInfo_15_15, (MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3, mode_robdd__implications__env_ptr);
          }
        }
        (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
  MR_Word mode_robdd__implications__EQVars_4,
  MR_Word mode_robdd__implications__DisImps_5,
  MR_Word mode_robdd__implications__RevDisImps_6)
{
  {
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s mode_robdd__implications__env;
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

    mode_robdd__implications__env_ptr = &mode_robdd__implications__env;
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11 = mode_robdd__implications__TypeInfo_for_T_11;
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4 = mode_robdd__implications__EQVars_4;
    {
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7 = mode_robdd__implications__intersect_2_f_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, mode_robdd__implications__DisImps_5, mode_robdd__implications__RevDisImps_6);
    }
    {
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(mode_robdd__implications__env_ptr);
    }
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
    return (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__4_19;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_19));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
  MR_Word mode_robdd__implications__EQVars_5,
  MR_Word * mode_robdd__implications__Changed_6,
  MR_Word mode_robdd__implications__ImpMap0_7,
  MR_Word * mode_robdd__implications__ImpMap_8)
{
  {
    MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
    MR_Word mode_robdd__implications__TypeInfo_32_32;
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
    MR_Word mode_robdd__implications__TypeInfo_34_34;
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
    MR_Word mode_robdd__implications__TypeInfo_36_36;
    MR_Word mode_robdd__implications__TypeCtorInfo_37_37;
    MR_Word mode_robdd__implications__TypeCtorInfo_38_38;
    MR_Word mode_robdd__implications__TypeInfo_40_40;
    MR_Tuple mode_robdd__implications__Var_14;
    MR_Word mode_robdd__implications__Var_15;
    MR_Tuple mode_robdd__implications__Var_23;
    MR_Word mode_robdd__implications__Var_24;
    MR_Word mode_robdd__implications__Var_25;
    MR_Integer mode_robdd__implications__PolyConst2_39;
    MR_Word mode_robdd__implications__conv1_Var_24;
    MR_Box mode_robdd__implications__conv2_Var_14;

    mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
    }
    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
    }
    mode_robdd__implications__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    mode_robdd__implications__PolyConst2_39 = (MR_Integer) 2;
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_34_34));
    }
    mode_robdd__implications__TypeCtorInfo_37_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
    {
      mode_robdd__implications__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_38_38));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_39));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_36_36));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 3) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_37_37));
    }
    {
      mode_robdd__implications__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 1) = ((MR_Box) (mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 4) = ((MR_Box) (mode_robdd__implications__EQVars_5));
    }
    {
      mode_robdd__implications__conv1_Var_24 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34);
    }
    mode_robdd__implications__Var_24 = (MR_Word) mode_robdd__implications__conv1_Var_24;
    mode_robdd__implications__Var_25 = (MR_Integer) 0;
    {
      mode_robdd__implications__Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_23, 0) = ((MR_Box) (mode_robdd__implications__Var_24));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_23, 1) = ((MR_Box) (mode_robdd__implications__Var_25));
    }
    {
      mode_robdd__implications__conv2_Var_14 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_40_40, (MR_Word) mode_robdd__implications__Var_15, (MR_Word) mode_robdd__implications__ImpMap0_7, ((MR_Box) (mode_robdd__implications__Var_23)));
    }
    mode_robdd__implications__Var_14 = ((MR_Tuple) mode_robdd__implications__conv2_Var_14);
    *mode_robdd__implications__ImpMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_14, (MR_Integer) 0)));
    *mode_robdd__implications__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_14, (MR_Integer) 1)));
  }
}

void MR_CALL 
mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_59,
  MR_Word * mode_robdd__implications__Changed_8,
  MR_Word mode_robdd__implications__TrueVars0_9,
  MR_Word * mode_robdd__implications__TrueVars_10,
  MR_Word mode_robdd__implications__FalseVars0_11,
  MR_Word * mode_robdd__implications__FalseVars_12,
  MR_Word mode_robdd__implications__ImpVars0_13,
  MR_Word * mode_robdd__implications__ImpVars_14)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__TypeCtorInfo_60_60;
    MR_Word mode_robdd__implications__TypeInfo_61_61;

    mode_robdd__implications__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_60_60));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_59));
    }
    {
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_61_61, (MR_Word) mode_robdd__implications__TrueVars0_9);
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_61_61, (MR_Word) mode_robdd__implications__FalseVars0_11);
      }
    if (mode_robdd__implications__succeeded)
      {
        *mode_robdd__implications__TrueVars_10 = mode_robdd__implications__TrueVars0_9;
        *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars0_11;
        *mode_robdd__implications__ImpVars_14 = mode_robdd__implications__ImpVars0_13;
        *mode_robdd__implications__Changed_8 = (MR_Integer) 0;
      }
    else
      {
        MR_Word mode_robdd__implications__Imps0_15;
        MR_Word mode_robdd__implications__RevImps0_16;
        MR_Word mode_robdd__implications__DisImps0_17;
        MR_Word mode_robdd__implications__RevDisImps0_18;
        MR_Word mode_robdd__implications__Changed0_19;
        MR_Word mode_robdd__implications__TrueVars1_20;
        MR_Word mode_robdd__implications__FalseVars1_21;
        MR_Word mode_robdd__implications__Imps_22;
        MR_Word mode_robdd__implications__Changed1_23;
        MR_Word mode_robdd__implications__FalseVars2_24;
        MR_Word mode_robdd__implications__TrueVars2_25;
        MR_Word mode_robdd__implications__RevImps_26;
        MR_Word mode_robdd__implications__Changed2_27;
        MR_Word mode_robdd__implications__FalseVars3_28;
        MR_Word mode_robdd__implications__TrueVars3_29;
        MR_Word mode_robdd__implications__DisImps_30;
        MR_Word mode_robdd__implications__Changed3_31;
        MR_Word mode_robdd__implications__TrueVars4_32;
        MR_Word mode_robdd__implications__FalseVars4_33;
        MR_Word mode_robdd__implications__RevDisImps_34;
        MR_Word mode_robdd__implications__Changed4_35;
        MR_Word mode_robdd__implications__FalseVars5_36;
        MR_Word mode_robdd__implications__Changed5_37;
        MR_Word mode_robdd__implications__TrueVars5_38;
        MR_Word mode_robdd__implications__Changed6_39;
        MR_Word mode_robdd__implications__FalseVars6_40;
        MR_Word mode_robdd__implications__Changed7_41;
        MR_Word mode_robdd__implications__TrueVars6_42;
        MR_Word mode_robdd__implications__ImpVars6_43;
        MR_Word mode_robdd__implications__Var_45;
        MR_Word mode_robdd__implications__Var_46;
        MR_Word mode_robdd__implications__Var_47;
        MR_Word mode_robdd__implications__Var_48;
        MR_Word mode_robdd__implications__Var_49;
        MR_Word mode_robdd__implications__Var_50;
        MR_Word mode_robdd__implications__Var_51;
        MR_Word mode_robdd__implications__Var_52;
        MR_Word mode_robdd__implications__Var_53;
        MR_Word mode_robdd__implications__Var_54;
        MR_Word mode_robdd__implications__Var_55;
        MR_Word mode_robdd__implications__Var_56;
        MR_Word mode_robdd__implications__Var_57;
        MR_Word mode_robdd__implications__Var_58;

        mode_robdd__implications__Imps0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 0)));
        mode_robdd__implications__RevImps0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 1)));
        mode_robdd__implications__DisImps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 2)));
        mode_robdd__implications__RevDisImps0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 3)));
        mode_robdd__implications__Var_45 = (MR_Integer) 0;
        {
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_45, &mode_robdd__implications__Changed0_19, mode_robdd__implications__TrueVars0_9, &mode_robdd__implications__TrueVars1_20, mode_robdd__implications__FalseVars0_11, &mode_robdd__implications__FalseVars1_21, mode_robdd__implications__Imps0_15, &mode_robdd__implications__Imps_22);
        }
        mode_robdd__implications__Var_46 = (MR_Integer) 0;
        {
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_46, &mode_robdd__implications__Changed1_23, mode_robdd__implications__FalseVars1_21, &mode_robdd__implications__FalseVars2_24, mode_robdd__implications__TrueVars1_20, &mode_robdd__implications__TrueVars2_25, mode_robdd__implications__RevImps0_16, &mode_robdd__implications__RevImps_26);
        }
        mode_robdd__implications__Var_47 = (MR_Integer) 1;
        {
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_47, &mode_robdd__implications__Changed2_27, mode_robdd__implications__FalseVars2_24, &mode_robdd__implications__FalseVars3_28, mode_robdd__implications__TrueVars2_25, &mode_robdd__implications__TrueVars3_29, mode_robdd__implications__DisImps0_17, &mode_robdd__implications__DisImps_30);
        }
        mode_robdd__implications__Var_48 = (MR_Integer) 1;
        {
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_48, &mode_robdd__implications__Changed3_31, mode_robdd__implications__TrueVars3_29, &mode_robdd__implications__TrueVars4_32, mode_robdd__implications__FalseVars3_28, &mode_robdd__implications__FalseVars4_33, mode_robdd__implications__RevDisImps0_18, &mode_robdd__implications__RevDisImps_34);
        }
        mode_robdd__implications__Var_49 = (MR_Integer) 0;
        {
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_49, mode_robdd__implications__Imps_22, mode_robdd__implications__DisImps_30, &mode_robdd__implications__Changed4_35, mode_robdd__implications__FalseVars4_33, &mode_robdd__implications__FalseVars5_36);
        }
        mode_robdd__implications__Var_50 = (MR_Integer) 0;
        {
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_50, mode_robdd__implications__RevImps_26, mode_robdd__implications__RevDisImps_34, &mode_robdd__implications__Changed5_37, mode_robdd__implications__TrueVars4_32, &mode_robdd__implications__TrueVars5_38);
        }
        mode_robdd__implications__Var_51 = (MR_Integer) 1;
        {
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_51, mode_robdd__implications__RevImps_26, mode_robdd__implications__DisImps_30, &mode_robdd__implications__Changed6_39, mode_robdd__implications__FalseVars5_36, &mode_robdd__implications__FalseVars6_40);
        }
        mode_robdd__implications__Var_52 = (MR_Integer) 1;
        {
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__Var_52, mode_robdd__implications__Imps_22, mode_robdd__implications__RevDisImps_34, &mode_robdd__implications__Changed7_41, mode_robdd__implications__TrueVars5_38, &mode_robdd__implications__TrueVars6_42);
        }
        {
          mode_robdd__implications__ImpVars6_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 0) = ((MR_Box) (mode_robdd__implications__Imps_22));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 1) = ((MR_Box) (mode_robdd__implications__RevImps_26));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 2) = ((MR_Box) (mode_robdd__implications__DisImps_30));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_34));
        }
        {
          mode_robdd__implications__Var_58 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed6_39, mode_robdd__implications__Changed7_41);
        }
        {
          mode_robdd__implications__Var_57 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed5_37, mode_robdd__implications__Var_58);
        }
        {
          mode_robdd__implications__Var_56 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed4_35, mode_robdd__implications__Var_57);
        }
        {
          mode_robdd__implications__Var_55 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed3_31, mode_robdd__implications__Var_56);
        }
        {
          mode_robdd__implications__Var_54 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed2_27, mode_robdd__implications__Var_55);
        }
        {
          mode_robdd__implications__Var_53 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed1_23, mode_robdd__implications__Var_54);
        }
        {
          *mode_robdd__implications__Changed_8 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed0_19, mode_robdd__implications__Var_53);
        }
        switch (*mode_robdd__implications__Changed_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mode_robdd__implications__TrueVars_10 = mode_robdd__implications__TrueVars6_42;
              *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars6_40;
              *mode_robdd__implications__ImpVars_14 = mode_robdd__implications__ImpVars6_43;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mode_robdd__implications__Var_44;

              {
                mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__implications__TypeInfo_for_T_59, &mode_robdd__implications__Var_44, mode_robdd__implications__TrueVars6_42, mode_robdd__implications__TrueVars_10, mode_robdd__implications__FalseVars6_40, mode_robdd__implications__FalseVars_12, mode_robdd__implications__ImpVars6_43, mode_robdd__implications__ImpVars_14);
              }
            }
            break;
        }
      }
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_3;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv3_HeadVar__4_37;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv3_HeadVar__4_37 = mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv3_HeadVar__4_37));
    return mode_robdd__implications__wrapper_arg_3;
  }
}

static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__Extract_7,
  MR_Word mode_robdd__implications__Imps_8,
  MR_Word mode_robdd__implications__DisImps_9,
  MR_Word * mode_robdd__implications__Changed_10,
  MR_Word mode_robdd__implications__FalseVars0_11,
  MR_Word * mode_robdd__implications__FalseVars_12)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__Intersect_13;
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
    MR_Word mode_robdd__implications__TypeInfo_22_22;
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
    MR_Word mode_robdd__implications__TypeInfo_24_24;

    {
      mode_robdd__implications__Intersect_13 = mode_robdd__implications__intersect_2_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__Imps_8, mode_robdd__implications__DisImps_9);
    }
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__Intersect_13);
    }
    if (mode_robdd__implications__succeeded)
      {
        *mode_robdd__implications__Changed_10 = (MR_Integer) 0;
        *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars0_11;
      }
    else
      {
        *mode_robdd__implications__Changed_10 = (MR_Integer) 1;
        switch (mode_robdd__implications__Extract_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
              MR_Word mode_robdd__implications__TypeInfo_26_26;
              MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
              MR_Word mode_robdd__implications__TypeInfo_28_28;
              MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
              MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;
              MR_Word mode_robdd__implications__Var_18;
              MR_Word mode_robdd__implications__Var_19;
              MR_Word mode_robdd__implications__conv0_Var_19;
              MR_Word mode_robdd__implications__conv1_Var_18;
              MR_Word mode_robdd__implications__conv2_FalseVars_12;

              mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
              {
                mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
              }
              mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
              {
                mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
              }
              {
                mode_robdd__implications__conv0_Var_19 = mercury__map__sorted_keys_1_f_0(mode_robdd__implications__TypeInfo_26_26, mode_robdd__implications__TypeInfo_28_28, (MR_Word) mode_robdd__implications__Intersect_13);
              }
              mode_robdd__implications__Var_19 = (MR_Word) mode_robdd__implications__conv0_Var_19;
              mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
              {
                mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
              }
              {
                mode_robdd__implications__conv1_Var_18 = mercury__sparse_bitset__sorted_list_to_set_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_30, (MR_Word) mode_robdd__implications__Var_19);
              }
              mode_robdd__implications__Var_18 = (MR_Word) mode_robdd__implications__conv1_Var_18;
              {
                mode_robdd__implications__conv2_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_26_26, (MR_Word) mode_robdd__implications__FalseVars0_11, (MR_Word) mode_robdd__implications__Var_18);
              }
              *mode_robdd__implications__FalseVars_12 = (MR_Word) mode_robdd__implications__conv2_FalseVars_12;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
              MR_Word mode_robdd__implications__TypeInfo_32_32;
              MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
              MR_Word mode_robdd__implications__TypeInfo_34_34;
              MR_Word mode_robdd__implications__Values_14;
              MR_Word mode_robdd__implications__Var_15;
              MR_Word mode_robdd__implications__Var_16;
              MR_Word mode_robdd__implications__Var_17;
              MR_Word mode_robdd__implications__conv4_Var_17;
              MR_Box mode_robdd__implications__conv5_Values_14;
              MR_Word mode_robdd__implications__conv6_FalseVars_12;

              mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
              mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
              {
                mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
              }
              {
                mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
              }
              {
                mode_robdd__implications__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 1) = ((MR_Box) (mode_robdd__implications__normalise_pairs_6_p_0_1));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
              }
              {
                mode_robdd__implications__Var_16 = mercury__map__values_1_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__Intersect_13);
              }
              {
                mode_robdd__implications__conv4_Var_17 = mercury__sparse_bitset__init_0_f_0(mode_robdd__implications__TypeInfo_32_32);
              }
              mode_robdd__implications__Var_17 = (MR_Word) mode_robdd__implications__conv4_Var_17;
              {
                mode_robdd__implications__conv5_Values_14 = mercury__list__foldl_3_f_0(mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__Var_15, (MR_Word) mode_robdd__implications__Var_16, ((MR_Box) (mode_robdd__implications__Var_17)));
              }
              mode_robdd__implications__Values_14 = ((MR_Word) mode_robdd__implications__conv5_Values_14);
              {
                mode_robdd__implications__conv6_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_32_32, (MR_Word) mode_robdd__implications__FalseVars0_11, (MR_Word) mode_robdd__implications__Values_14);
              }
              *mode_robdd__implications__FalseVars_12 = (MR_Word) mode_robdd__implications__conv6_FalseVars_12;
            }
            break;
        }
      }
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_3;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_HeadVar__4_15;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_HeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__intersect__428__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__4_15));
    return mode_robdd__implications__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Word mode_robdd__implications__IMA_4,
  MR_Word mode_robdd__implications__IMB_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
    MR_Word mode_robdd__implications__TypeInfo_10_10;
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
    MR_Word mode_robdd__implications__TypeInfo_12_12;
    MR_Word mode_robdd__implications__Var_6;
    MR_Word mode_robdd__implications__Var_7;
    MR_Word mode_robdd__implications__conv1_Var_6;

    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
    }
    {
      mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_10_10));
    }
    {
      mode_robdd__implications__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 1) = ((MR_Box) (mode_robdd__implications__intersect_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
    }
    {
      mode_robdd__implications__conv1_Var_6 = mercury__map__intersect_3_f_0(mode_robdd__implications__TypeInfo_12_12, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__Var_7, (MR_Word) mode_robdd__implications__IMA_4, (MR_Word) mode_robdd__implications__IMB_5);
    }
    mode_robdd__implications__Var_6 = (MR_Word) mode_robdd__implications__conv1_Var_6;
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__remove_empty_sets_1_f_0(mode_robdd__implications__TypeInfo_for_T_8, mode_robdd__implications__Var_6);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_11;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_11 = mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__448__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_11));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
  MR_Word mode_robdd__implications__IM_3)
{
  {
    MR_Word mode_robdd__implications__HeadVar__2_2;
    MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
    MR_Word mode_robdd__implications__TypeInfo_18_18;
    MR_Word mode_robdd__implications__TypeCtorInfo_19_19;
    MR_Word mode_robdd__implications__TypeInfo_20_20;
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
    MR_Word mode_robdd__implications__TypeInfo_22_22;
    MR_Word mode_robdd__implications__Var_7;
    MR_Box mode_robdd__implications__conv1_HeadVar__2_2;

    mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
    }
    mode_robdd__implications__TypeCtorInfo_19_19 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
    }
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_20_20));
    }
    {
      mode_robdd__implications__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 1) = ((MR_Box) (mode_robdd__implications__remove_empty_sets_1_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
    }
    {
      mode_robdd__implications__conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_18_18, mode_robdd__implications__TypeInfo_20_20, mode_robdd__implications__TypeInfo_22_22, (MR_Word) mode_robdd__implications__Var_7, (MR_Word) mode_robdd__implications__IM_3, ((MR_Box) (mode_robdd__implications__IM_3)));
    }
    mode_robdd__implications__HeadVar__2_2 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__2_2);
    return mode_robdd__implications__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__4_35;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_35 = mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_35));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
  MR_Word mode_robdd__implications__IsDisImp_9,
  MR_Word * mode_robdd__implications__Changed_10,
  MR_Word mode_robdd__implications__TrueVars0_11,
  MR_Word * mode_robdd__implications__TrueVars_12,
  MR_Word mode_robdd__implications__FalseVars0_13,
  MR_Word * mode_robdd__implications__FalseVars_14,
  MR_Word mode_robdd__implications__ImpMap0_15,
  MR_Word * mode_robdd__implications__ImpMap_16)
{
  {
    MR_Word mode_robdd__implications__TypeCtorInfo_47_47;
    MR_Word mode_robdd__implications__TypeInfo_48_48;
    MR_Word mode_robdd__implications__TypeCtorInfo_49_49;
    MR_Word mode_robdd__implications__TypeInfo_50_50;
    MR_Word mode_robdd__implications__TypeCtorInfo_51_51;
    MR_Word mode_robdd__implications__TypeInfo_52_52;
    MR_Word mode_robdd__implications__TypeCtorInfo_53_53;
    MR_Word mode_robdd__implications__TypeCtorInfo_54_54;
    MR_Word mode_robdd__implications__TypeInfo_56_56;
    MR_Tuple mode_robdd__implications__Var_30;
    MR_Word mode_robdd__implications__Var_31;
    MR_Tuple mode_robdd__implications__Var_38;
    MR_Word mode_robdd__implications__Var_39;
    MR_Integer mode_robdd__implications__PolyConst4_55;
    MR_Box mode_robdd__implications__conv1_Var_30;

    mode_robdd__implications__TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_47_47));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
    }
    mode_robdd__implications__TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_49_49));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
    }
    mode_robdd__implications__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    mode_robdd__implications__PolyConst4_55 = (MR_Integer) 4;
    mode_robdd__implications__TypeCtorInfo_51_51 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    {
      mode_robdd__implications__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_51_51));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
    }
    mode_robdd__implications__TypeCtorInfo_53_53 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
    {
      mode_robdd__implications__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_54_54));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 1) = ((MR_Box) (mode_robdd__implications__PolyConst4_55));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 4) = ((MR_Box) (mode_robdd__implications__TypeInfo_52_52));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 5) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_53_53));
    }
    {
      mode_robdd__implications__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_31, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_31, 1) = ((MR_Box) (mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_31, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_31, 4) = ((MR_Box) (mode_robdd__implications__IsDisImp_9));
    }
    mode_robdd__implications__Var_39 = (MR_Integer) 0;
    {
      mode_robdd__implications__Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 0) = ((MR_Box) (mode_robdd__implications__TrueVars0_11));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 1) = ((MR_Box) (mode_robdd__implications__FalseVars0_13));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 2) = ((MR_Box) (mode_robdd__implications__ImpMap0_15));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_38, 3) = ((MR_Box) (mode_robdd__implications__Var_39));
    }
    {
      mode_robdd__implications__conv1_Var_30 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_48_48, mode_robdd__implications__TypeInfo_50_50, mode_robdd__implications__TypeInfo_56_56, (MR_Word) mode_robdd__implications__Var_31, (MR_Word) mode_robdd__implications__ImpMap0_15, ((MR_Box) (mode_robdd__implications__Var_38)));
    }
    mode_robdd__implications__Var_30 = ((MR_Tuple) mode_robdd__implications__conv1_Var_30);
    *mode_robdd__implications__TrueVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, (MR_Integer) 0)));
    *mode_robdd__implications__FalseVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, (MR_Integer) 1)));
    *mode_robdd__implications__ImpMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, (MR_Integer) 2)));
    *mode_robdd__implications__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_30, (MR_Integer) 3)));
  }
}

MR_Word MR_CALL 
mode_robdd__implications__either_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
  MR_Word mode_robdd__implications__A_5,
  MR_Word mode_robdd__implications__B_6,
  MR_Word mode_robdd__implications__ImpVars_7)
{
  {
    MR_Word mode_robdd__implications__HeadVar__4_4;
    MR_Tuple mode_robdd__implications__Var_8;
    MR_Word mode_robdd__implications__Var_9;
    MR_Word mode_robdd__implications__Var_10;

    {
      mode_robdd__implications__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
    }
    {
      mode_robdd__implications__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
    }
    {
      mode_robdd__implications__Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 0) = ((MR_Box) (mode_robdd__implications__Var_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 1) = ((MR_Box) (mode_robdd__implications__Var_10));
    }
    {
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__Var_8, mode_robdd__implications__ImpVars_7);
    }
    return mode_robdd__implications__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__not_both_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
  MR_Word mode_robdd__implications__A_5,
  MR_Word mode_robdd__implications__B_6,
  MR_Word mode_robdd__implications__ImpVars_7)
{
  {
    MR_Word mode_robdd__implications__HeadVar__4_4;
    MR_Tuple mode_robdd__implications__Var_8;
    MR_Word mode_robdd__implications__Var_9;
    MR_Word mode_robdd__implications__Var_10;

    {
      mode_robdd__implications__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
    }
    {
      mode_robdd__implications__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
    }
    {
      mode_robdd__implications__Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 0) = ((MR_Box) (mode_robdd__implications__Var_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 1) = ((MR_Box) (mode_robdd__implications__Var_10));
    }
    {
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__Var_8, mode_robdd__implications__ImpVars_7);
    }
    return mode_robdd__implications__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_3;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv2_HeadVar__4_4;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv2_HeadVar__4_4 = mode_robdd__implications__not_both_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv2_HeadVar__4_4));
    return mode_robdd__implications__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_10,
  MR_Word mode_robdd__implications__Vars0_4,
  MR_Word mode_robdd__implications__ImpVars_5)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Var_6;
    MR_Word mode_robdd__implications__Vars_7;
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
    MR_Word mode_robdd__implications__TypeInfo_12_12;
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_13;
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_14;
    MR_Box mode_robdd__implications__conv1_Var_6;
    MR_Word mode_robdd__implications__conv0_Vars_7;

    mode_robdd__implications__BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
    }
    {
      mode_robdd__implications__TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_13));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_12_12));
    }
    {
      mode_robdd__implications__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__implications__TypeClassInfo_for_enum_14, &mode_robdd__implications__conv1_Var_6, (MR_Word) mode_robdd__implications__Vars0_4, &mode_robdd__implications__conv0_Vars_7);
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__Var_6 = ((MR_Word) mode_robdd__implications__conv1_Var_6);
        mode_robdd__implications__Vars_7 = (MR_Word) mode_robdd__implications__conv0_Vars_7;
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_18_18;
        MR_Word mode_robdd__implications__TypeInfo_19_19;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_20;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_21;
        MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
        MR_Word mode_robdd__implications__TypeInfo_23_23;
        MR_Word mode_robdd__implications__Var_8;
        MR_Word mode_robdd__implications__Var_9;
        MR_Box mode_robdd__implications__conv3_Var_9;

        {
          mode_robdd__implications__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 1) = ((MR_Box) (mode_robdd__implications__at_most_one_of_2_f_0_1));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 4) = ((MR_Box) (mode_robdd__implications__Var_6));
        }
        mode_robdd__implications__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_18_18));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_20));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_19_19));
        }
        mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
        {
          mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
        }
        {
          mode_robdd__implications__conv3_Var_9 = mercury__sparse_bitset__foldl_3_f_0(mode_robdd__implications__TypeInfo_23_23, mode_robdd__implications__TypeClassInfo_for_enum_21, (MR_Word) mode_robdd__implications__Var_8, (MR_Word) mode_robdd__implications__Vars_7, ((MR_Box) (mode_robdd__implications__ImpVars_5)));
        }
        mode_robdd__implications__Var_9 = ((MR_Word) mode_robdd__implications__conv3_Var_9);
        {
          mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__implications__TypeInfo_for_T_10, mode_robdd__implications__Vars_7, mode_robdd__implications__Var_9);
        }
      }
    else
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__ImpVars_5;
    return mode_robdd__implications__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__imp_vars_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
  MR_Word mode_robdd__implications__A_5,
  MR_Word mode_robdd__implications__B_6,
  MR_Word mode_robdd__implications__ImpVars_7)
{
  {
    MR_Word mode_robdd__implications__HeadVar__4_4;
    MR_Tuple mode_robdd__implications__Var_8;
    MR_Word mode_robdd__implications__Var_9;
    MR_Word mode_robdd__implications__Var_10;

    {
      mode_robdd__implications__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
    }
    {
      mode_robdd__implications__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
    }
    {
      mode_robdd__implications__Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 0) = ((MR_Box) (mode_robdd__implications__Var_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 1) = ((MR_Box) (mode_robdd__implications__Var_10));
    }
    {
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__Var_8, mode_robdd__implications__ImpVars_7);
    }
    return mode_robdd__implications__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__neq_vars_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
  MR_Word mode_robdd__implications__A_5,
  MR_Word mode_robdd__implications__B_6,
  MR_Word mode_robdd__implications__ImpVars_7)
{
  {
    MR_Word mode_robdd__implications__HeadVar__4_4;
    MR_Tuple mode_robdd__implications__Var_8;
    MR_Word mode_robdd__implications__Var_9;
    MR_Tuple mode_robdd__implications__Var_10;
    MR_Word mode_robdd__implications__Var_11;
    MR_Word mode_robdd__implications__Var_12;
    MR_Word mode_robdd__implications__Var_13;
    MR_Word mode_robdd__implications__Var_14;

    {
      mode_robdd__implications__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_13, 0) = ((MR_Box) (mode_robdd__implications__A_5));
    }
    {
      mode_robdd__implications__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_14, 0) = ((MR_Box) (mode_robdd__implications__B_6));
    }
    {
      mode_robdd__implications__Var_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 0) = ((MR_Box) (mode_robdd__implications__Var_13));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_8, 1) = ((MR_Box) (mode_robdd__implications__Var_14));
    }
    {
      mode_robdd__implications__Var_9 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__Var_8, mode_robdd__implications__ImpVars_7);
    }
    {
      mode_robdd__implications__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 0) = ((MR_Box) (mode_robdd__implications__A_5));
    }
    {
      mode_robdd__implications__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_12, 0) = ((MR_Box) (mode_robdd__implications__B_6));
    }
    {
      mode_robdd__implications__Var_10 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 0) = ((MR_Box) (mode_robdd__implications__Var_11));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 1) = ((MR_Box) (mode_robdd__implications__Var_12));
    }
    {
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__Var_10, mode_robdd__implications__Var_9);
    }
    return mode_robdd__implications__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_clause_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
  MR_Tuple mode_robdd__implications__Clause_4,
  MR_Word mode_robdd__implications__ImpVars_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Var_6;
    MR_Word mode_robdd__implications__Var_7;

    mode_robdd__implications__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mode_robdd__implications__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_6, 0) = ((MR_Box) (mode_robdd__implications__Clause_4));
      MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_6, 1) = ((MR_Box) (mode_robdd__implications__Var_7));
    }
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_8, mode_robdd__implications__Var_6, mode_robdd__implications__ImpVars_5);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
  MR_Word mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__ImpVars_3;

    if ((mode_robdd__implications__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mode_robdd__implications__ImpVars_3 = mode_robdd__implications__HeadVar__2_2;
    else
      {
        MR_Tuple mode_robdd__implications__Clause_5;
        MR_Word mode_robdd__implications__Clauses_6;
        MR_Word mode_robdd__implications__ImpVars1_9;

        mode_robdd__implications__Clause_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
        mode_robdd__implications__Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
        {
          mode_robdd__implications__succeeded = mode_robdd__implications__add_clause_2_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clause_5, mode_robdd__implications__HeadVar__2_2, &mode_robdd__implications__ImpVars1_9);
        }
        if (mode_robdd__implications__succeeded)
          {
            MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
            MR_Word mode_robdd__implications__TypeInfo_14_14;
            MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
            MR_Word mode_robdd__implications__TypeInfo_17_17;
            MR_Word mode_robdd__implications__Resolvents_10;
            MR_Word mode_robdd__implications__Var_11;
            MR_Integer mode_robdd__implications__PolyConst2_16;
            MR_Word mode_robdd__implications__conv0_Var_11;

            {
              mode_robdd__implications__Resolvents_10 = mode_robdd__implications__get_resolvents_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clause_5, mode_robdd__implications__ImpVars1_9);
            }
            mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
            mode_robdd__implications__PolyConst2_16 = (MR_Integer) 2;
            mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
            {
              mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
            }
            {
              mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_16));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
            }
            {
              mode_robdd__implications__conv0_Var_11 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__Resolvents_10, (MR_Word) mode_robdd__implications__Clauses_6);
            }
            mode_robdd__implications__Var_11 = (MR_Word) mode_robdd__implications__conv0_Var_11;
            {
              mode_robdd__implications__ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Var_11, mode_robdd__implications__ImpVars1_9);
            }
          }
        else
          {
            mode_robdd__implications__ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clauses_6, mode_robdd__implications__HeadVar__2_2);
          }
      }
    return mode_robdd__implications__ImpVars_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_9,
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__ImpVars_6)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_10_10;
    MR_Word mode_robdd__implications__TypeInfo_11_11;
    MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
    MR_Word mode_robdd__implications__TypeInfo_14_14;
    MR_Word mode_robdd__implications__LitA_4;
    MR_Word mode_robdd__implications__LitB_5;
    MR_Word mode_robdd__implications__Var_7;
    MR_Word mode_robdd__implications__Var_8;
    MR_Integer mode_robdd__implications__PolyConst2_13;
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

    mode_robdd__implications__LitA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
    mode_robdd__implications__LitB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
    mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    mode_robdd__implications__PolyConst2_13 = (MR_Integer) 2;
    mode_robdd__implications__TypeCtorInfo_10_10 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_9));
    }
    {
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_13));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_11_11));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_11_11));
    }
    {
      mode_robdd__implications__Var_7 = mode_robdd__implications__get_resolvents_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_9, mode_robdd__implications__LitA_4, mode_robdd__implications__LitB_5, mode_robdd__implications__ImpVars_6);
    }
    {
      mode_robdd__implications__Var_8 = mode_robdd__implications__get_resolvents_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_9, mode_robdd__implications__LitB_5, mode_robdd__implications__LitA_4, mode_robdd__implications__ImpVars_6);
    }
    {
      mode_robdd__implications__conv0_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_14_14, (MR_Word) mode_robdd__implications__Var_7, (MR_Word) mode_robdd__implications__Var_8);
    }
    mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv0_HeadVar__3_3;
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__2_13;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__2_13 = mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__548__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__2_13));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
  MR_Word mode_robdd__implications__LitA_5,
  MR_Word mode_robdd__implications__LitB_6,
  MR_Word mode_robdd__implications__ImpVars_7)
{
  {
    MR_Word mode_robdd__implications__Clauses_8;
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
    MR_Word mode_robdd__implications__TypeInfo_17_17;
    MR_Word mode_robdd__implications__TypeCtorInfo_18_18;
    MR_Word mode_robdd__implications__TypeInfo_20_20;
    MR_Word mode_robdd__implications__Literals_9;
    MR_Word mode_robdd__implications__Var_11;
    MR_Integer mode_robdd__implications__PolyConst2_19;

    {
      mode_robdd__implications__Literals_9 = mode_robdd__implications__get_literals_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__LitA_5, mode_robdd__implications__ImpVars_7);
    }
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_15));
    }
    mode_robdd__implications__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    mode_robdd__implications__PolyConst2_19 = (MR_Integer) 2;
    {
      mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_19));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
    }
    {
      mode_robdd__implications__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 1) = ((MR_Box) (mode_robdd__implications__get_resolvents_2_3_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_11, 4) = ((MR_Box) (mode_robdd__implications__LitB_6));
    }
    {
      mode_robdd__implications__Clauses_8 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_17_17, mode_robdd__implications__TypeInfo_20_20, (MR_Word) mode_robdd__implications__Var_11, (MR_Word) mode_robdd__implications__Literals_9);
    }
    return mode_robdd__implications__Clauses_8;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv1_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv1_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv1_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__LitA_4,
  MR_Word mode_robdd__implications__ImpVars_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
    MR_Word mode_robdd__implications__TypeInfo_34_34;
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
    MR_Word mode_robdd__implications__TypeInfo_36_36;
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_39;
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_40;
    MR_Word mode_robdd__implications__Pos_6;
    MR_Word mode_robdd__implications__Neg_7;
    MR_Word mode_robdd__implications__Var_9;
    MR_Word mode_robdd__implications__Var_10;
    MR_Word mode_robdd__implications__Var_11;
    MR_Word mode_robdd__implications__Var_12;
    MR_Word mode_robdd__implications__Var_13;
    MR_Word mode_robdd__implications__Var_14;
    MR_Word mode_robdd__implications__Var_43;
    MR_Word mode_robdd__implications__Var_46;
    MR_Word mode_robdd__implications__Var_44;
    MR_Word mode_robdd__implications__Var_45;
    MR_Word mode_robdd__implications__conv2_Var_11;
    MR_Word mode_robdd__implications__conv3_Var_14;
    MR_Word mode_robdd__implications__conv4_HeadVar__3_3;

    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    {
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    {
      mode_robdd__implications__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    mode_robdd__implications__BaseTypeClassInfo_for_enum_39 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    {
      mode_robdd__implications__TypeClassInfo_for_enum_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_39));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_36_36));
    }
    {
      mode_robdd__implications__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    mode_robdd__implications__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
    mode_robdd__implications__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
    mode_robdd__implications__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
    mode_robdd__implications__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
    if (((MR_tag((MR_Word) mode_robdd__implications__LitA_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mode_robdd__implications__Var_16;
        MR_Word mode_robdd__implications__VarA_19;
        MR_Word mode_robdd__implications__Var_29;
        MR_Word mode_robdd__implications__Var_30;
        MR_Word mode_robdd__implications__Var_31;

        mode_robdd__implications__VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__LitA_4, (MR_Integer) 0)));
        {
          mode_robdd__implications__Pos_6 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_19, mode_robdd__implications__Var_43);
        }
        mode_robdd__implications__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
        mode_robdd__implications__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
        mode_robdd__implications__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
        mode_robdd__implications__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
        {
          mode_robdd__implications__Neg_7 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_19, mode_robdd__implications__Var_16);
        }
      }
    else
      {
        MR_Word mode_robdd__implications__VarA_8;
        MR_Word mode_robdd__implications__Var_18;
        MR_Word mode_robdd__implications__Var_23;
        MR_Word mode_robdd__implications__Var_24;
        MR_Word mode_robdd__implications__Var_25;

        mode_robdd__implications__VarA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LitA_4, (MR_Integer) 0)));
        {
          mode_robdd__implications__Pos_6 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_8, mode_robdd__implications__Var_46);
        }
        mode_robdd__implications__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
        mode_robdd__implications__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
        mode_robdd__implications__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
        mode_robdd__implications__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
        {
          mode_robdd__implications__Neg_7 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_8, mode_robdd__implications__Var_18);
        }
      }
    {
      mode_robdd__implications__conv2_Var_11 = mercury__sparse_bitset__to_sorted_list_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_40, (MR_Word) mode_robdd__implications__Pos_6);
    }
    mode_robdd__implications__Var_11 = (MR_Word) mode_robdd__implications__conv2_Var_11;
    {
      mode_robdd__implications__Var_9 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__Var_10, (MR_Word) mode_robdd__implications__Var_11);
    }
    {
      mode_robdd__implications__conv3_Var_14 = mercury__sparse_bitset__to_sorted_list_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_40, (MR_Word) mode_robdd__implications__Neg_7);
    }
    mode_robdd__implications__Var_14 = (MR_Word) mode_robdd__implications__conv3_Var_14;
    {
      mode_robdd__implications__Var_12 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__Var_13, (MR_Word) mode_robdd__implications__Var_14);
    }
    {
      mode_robdd__implications__conv4_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__Var_9, (MR_Word) mode_robdd__implications__Var_12);
    }
    mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv4_HeadVar__3_3;
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
  MR_Word mode_robdd__implications__V_4,
  MR_Word mode_robdd__implications__M_5)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Vs_6;
    MR_Word mode_robdd__implications__TypeCtorInfo_8_8;
    MR_Word mode_robdd__implications__TypeInfo_9_9;
    MR_Word mode_robdd__implications__TypeCtorInfo_10_10;
    MR_Word mode_robdd__implications__TypeInfo_11_11;
    MR_Box mode_robdd__implications__conv0_Vs_6;

    mode_robdd__implications__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_9_9, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_9_9, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
    }
    mode_robdd__implications__TypeCtorInfo_10_10 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_9_9));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_9_9, mode_robdd__implications__TypeInfo_11_11, ((MR_Box) (mode_robdd__implications__V_4)), (MR_Word) mode_robdd__implications__M_5, &mode_robdd__implications__conv0_Vs_6);
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__Vs_6 = ((MR_Word) mode_robdd__implications__conv0_Vs_6);
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    if (mode_robdd__implications__succeeded)
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__Vs_6;
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
        MR_Word mode_robdd__implications__TypeInfo_13_13;
        MR_Word mode_robdd__implications__conv1_HeadVar__3_3;

        mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
        }
        {
          mode_robdd__implications__conv1_HeadVar__3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__implications__TypeInfo_13_13);
        }
        mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv1_HeadVar__3_3;
      }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_100,
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
  MR_Word mode_robdd__implications__ImpVars_2,
  MR_Word * mode_robdd__implications__HeadVar__3_3)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__Var_101;
    MR_Word mode_robdd__implications__Var_102;
    MR_Word mode_robdd__implications__Var_111;
    MR_Word mode_robdd__implications__Var_112;
    MR_Word mode_robdd__implications__Var_113;
    MR_Word mode_robdd__implications__Var_114;
    MR_Word mode_robdd__implications__Var_123;
    MR_Word mode_robdd__implications__Var_124;
    MR_Word mode_robdd__implications__Var_125;
    MR_Word mode_robdd__implications__Var_126;

    mode_robdd__implications__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
    mode_robdd__implications__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
    mode_robdd__implications__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 0)));
    mode_robdd__implications__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 1)));
    mode_robdd__implications__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 2)));
    mode_robdd__implications__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 3)));
    mode_robdd__implications__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 0)));
    mode_robdd__implications__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 1)));
    mode_robdd__implications__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 2)));
    mode_robdd__implications__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 3)));
    if (((MR_tag((MR_Word) mode_robdd__implications__Var_101)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mode_robdd__implications__Var_127;

        mode_robdd__implications__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_101, (MR_Integer) 0)));
        if (((MR_tag((MR_Word) mode_robdd__implications__Var_102)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mode_robdd__implications__VA_24;
            MR_Word mode_robdd__implications__Var_29;
            MR_Word mode_robdd__implications__Var_30;
            MR_Word mode_robdd__implications__Var_31;
            MR_Word mode_robdd__implications__Var_33;
            MR_Word mode_robdd__implications__Var_79;
            MR_Word mode_robdd__implications__Var_80;
            MR_Word mode_robdd__implications__Var_81;
            MR_Word mode_robdd__implications__Var_82;
            MR_Word mode_robdd__implications__Var_83;
            MR_Word mode_robdd__implications__Var_85;
            MR_Word mode_robdd__implications__Var_84;

            mode_robdd__implications__VA_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_102, (MR_Integer) 0)));
            {
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_24, mode_robdd__implications__Var_112, mode_robdd__implications__Var_127, &mode_robdd__implications__Var_33);
            }
            if (mode_robdd__implications__succeeded)
              {
                {
                  mode_robdd__implications__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, 0) = ((MR_Box) (mode_robdd__implications__Var_126));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, 1) = ((MR_Box) (mode_robdd__implications__Var_125));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, 2) = ((MR_Box) (mode_robdd__implications__Var_33));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, 3) = ((MR_Box) (mode_robdd__implications__Var_123));
                }
                mode_robdd__implications__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 0)));
                mode_robdd__implications__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 1)));
                mode_robdd__implications__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 2)));
                mode_robdd__implications__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 3)));
                {
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__Var_127, mode_robdd__implications__Var_30, mode_robdd__implications__VA_24, &mode_robdd__implications__Var_31);
                }
                if (mode_robdd__implications__succeeded)
                  {
                    mode_robdd__implications__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 0)));
                    mode_robdd__implications__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 1)));
                    mode_robdd__implications__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 2)));
                    mode_robdd__implications__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_29, (MR_Integer) 3)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      *mode_robdd__implications__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Var_82));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__Var_83));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__Var_31));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__Var_85));
                    }
                    mode_robdd__implications__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word mode_robdd__implications__VA_14;
            MR_Word mode_robdd__implications__Var_19;
            MR_Word mode_robdd__implications__Var_20;
            MR_Word mode_robdd__implications__Var_21;
            MR_Word mode_robdd__implications__Var_23;
            MR_Word mode_robdd__implications__Var_65;
            MR_Word mode_robdd__implications__Var_66;
            MR_Word mode_robdd__implications__Var_67;
            MR_Word mode_robdd__implications__Var_69;
            MR_Word mode_robdd__implications__Var_70;
            MR_Word mode_robdd__implications__Var_71;
            MR_Word mode_robdd__implications__Var_68;

            mode_robdd__implications__VA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_102, (MR_Integer) 0)));
            {
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_14, mode_robdd__implications__Var_113, mode_robdd__implications__Var_127, &mode_robdd__implications__Var_23);
            }
            if (mode_robdd__implications__succeeded)
              {
                {
                  mode_robdd__implications__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 0) = ((MR_Box) (mode_robdd__implications__Var_126));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 1) = ((MR_Box) (mode_robdd__implications__Var_23));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 2) = ((MR_Box) (mode_robdd__implications__Var_124));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 3) = ((MR_Box) (mode_robdd__implications__Var_123));
                }
                mode_robdd__implications__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 0)));
                mode_robdd__implications__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 1)));
                mode_robdd__implications__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 2)));
                mode_robdd__implications__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 3)));
                {
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__Var_127, mode_robdd__implications__Var_20, mode_robdd__implications__VA_14, &mode_robdd__implications__Var_21);
                }
                if (mode_robdd__implications__succeeded)
                  {
                    mode_robdd__implications__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 0)));
                    mode_robdd__implications__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 1)));
                    mode_robdd__implications__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 2)));
                    mode_robdd__implications__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, (MR_Integer) 3)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      *mode_robdd__implications__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Var_21));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__Var_69));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__Var_70));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__Var_71));
                    }
                    mode_robdd__implications__succeeded = MR_TRUE;
                  }
              }
          }
      }
    else
      {
        MR_Word mode_robdd__implications__Var_128;

        mode_robdd__implications__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_101, (MR_Integer) 0)));
        if (((MR_tag((MR_Word) mode_robdd__implications__Var_102)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mode_robdd__implications__VA_4;
            MR_Word mode_robdd__implications__Var_9;
            MR_Word mode_robdd__implications__Var_10;
            MR_Word mode_robdd__implications__Var_11;
            MR_Word mode_robdd__implications__Var_13;
            MR_Word mode_robdd__implications__Var_51;
            MR_Word mode_robdd__implications__Var_52;
            MR_Word mode_robdd__implications__Var_53;
            MR_Word mode_robdd__implications__Var_54;
            MR_Word mode_robdd__implications__Var_56;
            MR_Word mode_robdd__implications__Var_57;
            MR_Word mode_robdd__implications__Var_55;

            mode_robdd__implications__VA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__Var_102, (MR_Integer) 0)));
            {
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_4, mode_robdd__implications__Var_114, mode_robdd__implications__Var_128, &mode_robdd__implications__Var_13);
            }
            if (mode_robdd__implications__succeeded)
              {
                {
                  mode_robdd__implications__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 0) = ((MR_Box) (mode_robdd__implications__Var_13));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 1) = ((MR_Box) (mode_robdd__implications__Var_125));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 2) = ((MR_Box) (mode_robdd__implications__Var_124));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 3) = ((MR_Box) (mode_robdd__implications__Var_123));
                }
                mode_robdd__implications__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 0)));
                mode_robdd__implications__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 1)));
                mode_robdd__implications__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 2)));
                mode_robdd__implications__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 3)));
                {
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__Var_128, mode_robdd__implications__Var_10, mode_robdd__implications__VA_4, &mode_robdd__implications__Var_11);
                }
                if (mode_robdd__implications__succeeded)
                  {
                    mode_robdd__implications__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 0)));
                    mode_robdd__implications__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 1)));
                    mode_robdd__implications__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 2)));
                    mode_robdd__implications__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, (MR_Integer) 3)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      *mode_robdd__implications__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Var_54));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__Var_11));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__Var_56));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__Var_57));
                    }
                    mode_robdd__implications__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word mode_robdd__implications__VA_34;
            MR_Word mode_robdd__implications__Var_39;
            MR_Word mode_robdd__implications__Var_40;
            MR_Word mode_robdd__implications__Var_41;
            MR_Word mode_robdd__implications__Var_43;
            MR_Word mode_robdd__implications__Var_93;
            MR_Word mode_robdd__implications__Var_94;
            MR_Word mode_robdd__implications__Var_95;
            MR_Word mode_robdd__implications__Var_96;
            MR_Word mode_robdd__implications__Var_97;
            MR_Word mode_robdd__implications__Var_98;
            MR_Word mode_robdd__implications__Var_99;

            mode_robdd__implications__VA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_102, (MR_Integer) 0)));
            {
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_34, mode_robdd__implications__Var_111, mode_robdd__implications__Var_128, &mode_robdd__implications__Var_43);
            }
            if (mode_robdd__implications__succeeded)
              {
                {
                  mode_robdd__implications__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, 0) = ((MR_Box) (mode_robdd__implications__Var_126));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, 1) = ((MR_Box) (mode_robdd__implications__Var_125));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, 2) = ((MR_Box) (mode_robdd__implications__Var_124));
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, 3) = ((MR_Box) (mode_robdd__implications__Var_43));
                }
                mode_robdd__implications__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 0)));
                mode_robdd__implications__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 1)));
                mode_robdd__implications__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 2)));
                mode_robdd__implications__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 3)));
                {
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__Var_128, mode_robdd__implications__Var_40, mode_robdd__implications__VA_34, &mode_robdd__implications__Var_41);
                }
                if (mode_robdd__implications__succeeded)
                  {
                    mode_robdd__implications__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 0)));
                    mode_robdd__implications__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 1)));
                    mode_robdd__implications__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 2)));
                    mode_robdd__implications__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_39, (MR_Integer) 3)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      *mode_robdd__implications__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Var_96));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__Var_97));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__Var_98));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__Var_41));
                    }
                    mode_robdd__implications__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return mode_robdd__implications__succeeded;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
  MR_Word mode_robdd__implications__VA_5,
  MR_Word mode_robdd__implications__M0_6,
  MR_Word mode_robdd__implications__VB_7,
  MR_Word * mode_robdd__implications__M_8)
{
  {
    MR_bool mode_robdd__implications__succeeded;
    MR_Word mode_robdd__implications__Vs_9;
    MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
    MR_Word mode_robdd__implications__TypeInfo_14_14;
    MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
    MR_Word mode_robdd__implications__TypeInfo_16_16;
    MR_Box mode_robdd__implications__conv0_Vs_9;

    mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
    }
    mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
    }
    {
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_14_14, mode_robdd__implications__TypeInfo_16_16, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, &mode_robdd__implications__conv0_Vs_9);
    }
    if (mode_robdd__implications__succeeded)
      {
        mode_robdd__implications__Vs_9 = ((MR_Word) mode_robdd__implications__conv0_Vs_9);
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    if (mode_robdd__implications__succeeded)
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
        MR_Word mode_robdd__implications__TypeInfo_22_22;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_23;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_24;
        MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
        MR_Word mode_robdd__implications__TypeInfo_26_26;
        MR_Word mode_robdd__implications__Var_10;
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
        MR_Word mode_robdd__implications__TypeInfo_18_18;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_19;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_20;
        MR_Word mode_robdd__implications__conv1_Var_10;
        MR_Word mode_robdd__implications__conv2_M_8;

        mode_robdd__implications__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_19));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
        }
        {
          mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
        mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
        if (mode_robdd__implications__succeeded)
          {
            mode_robdd__implications__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
            }
            {
              mode_robdd__implications__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_23));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
            }
            {
              mode_robdd__implications__conv1_Var_10 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_24, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__VB_7)));
            }
            mode_robdd__implications__Var_10 = (MR_Word) mode_robdd__implications__conv1_Var_10;
            mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
            {
              mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
            }
            {
              mode_robdd__implications__conv2_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_26_26, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, ((MR_Box) (mode_robdd__implications__Var_10)));
            }
            *mode_robdd__implications__M_8 = (MR_Word) mode_robdd__implications__conv2_M_8;
            mode_robdd__implications__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
        MR_Word mode_robdd__implications__TypeInfo_28_28;
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;
        MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
        MR_Word mode_robdd__implications__TypeInfo_32_32;
        MR_Word mode_robdd__implications__Var_11;
        MR_Word mode_robdd__implications__conv3_Var_11;
        MR_Word mode_robdd__implications__conv4_M_8;

        mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
        }
        {
          mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
        }
        {
          mode_robdd__implications__conv3_Var_11 = mercury__sparse_bitset__make_singleton_set_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_30, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
        mode_robdd__implications__Var_11 = (MR_Word) mode_robdd__implications__conv3_Var_11;
        mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
        }
        {
          mode_robdd__implications__conv4_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_28_28, mode_robdd__implications__TypeInfo_32_32, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, ((MR_Box) (mode_robdd__implications__Var_11)));
        }
        *mode_robdd__implications__M_8 = (MR_Word) mode_robdd__implications__conv4_M_8;
        mode_robdd__implications__succeeded = MR_TRUE;
      }
    return mode_robdd__implications__succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__filter_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__filter_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__filter_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
  MR_Word mode_robdd__implications__P_4,
  MR_Word mode_robdd__implications__ImpVars_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Var_6;

    {
      mode_robdd__implications__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 1) = ((MR_Box) (mode_robdd__implications__filter_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 4) = ((MR_Box) (mode_robdd__implications__P_4));
    }
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__Var_6, mode_robdd__implications__ImpVars_5);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__2_9;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__2_9 = mode_robdd__implications__IntroducedFrom__func__restrict_threshold__98__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__2_9));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
  MR_Word mode_robdd__implications__Threshold_4,
  MR_Word mode_robdd__implications__ImpVars_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Var_7;

    {
      mode_robdd__implications__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 1) = ((MR_Box) (mode_robdd__implications__restrict_threshold_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_7, 4) = ((MR_Box) (mode_robdd__implications__Threshold_4));
    }
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__Var_7, mode_robdd__implications__ImpVars_5);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__delete_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
  MR_Word mode_robdd__implications__ImpVars_4,
  MR_Word mode_robdd__implications__Var_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Var_6;

    {
      mode_robdd__implications__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 1) = ((MR_Box) (mode_robdd__implications__delete_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 4) = ((MR_Box) (mode_robdd__implications__Var_5));
    }
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__Var_6, mode_robdd__implications__ImpVars_4);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
  MR_Word mode_robdd__implications__F_4,
  MR_Word mode_robdd__implications__ImpVars0_5)
{
  {
    MR_Word mode_robdd__implications__ImpVars_6;
    MR_Word mode_robdd__implications__I_7;
    MR_Word mode_robdd__implications__RI_8;
    MR_Word mode_robdd__implications__DI_9;
    MR_Word mode_robdd__implications__RDI_10;
    MR_Word mode_robdd__implications__Var_11;
    MR_Word mode_robdd__implications__Var_12;
    MR_Word mode_robdd__implications__Var_13;
    MR_Word mode_robdd__implications__Var_14;
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv1_Var_11;
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv3_Var_12;
    MR_Box MR_CALL (* mode_robdd__implications__func_4)(MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv5_Var_13;
    MR_Box MR_CALL (* mode_robdd__implications__func_6)(MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv7_Var_14;

    mode_robdd__implications__I_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 0)));
    mode_robdd__implications__RI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 1)));
    mode_robdd__implications__DI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 2)));
    mode_robdd__implications__RDI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 3)));
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv1_Var_11 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__I_7)));
    }
    mode_robdd__implications__Var_11 = ((MR_Word) mode_robdd__implications__conv1_Var_11);
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv3_Var_12 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__RI_8)));
    }
    mode_robdd__implications__Var_12 = ((MR_Word) mode_robdd__implications__conv3_Var_12);
    mode_robdd__implications__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv5_Var_13 = mode_robdd__implications__func_4(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__DI_9)));
    }
    mode_robdd__implications__Var_13 = ((MR_Word) mode_robdd__implications__conv5_Var_13);
    mode_robdd__implications__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv7_Var_14 = mode_robdd__implications__func_6(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__RDI_10)));
    }
    mode_robdd__implications__Var_14 = ((MR_Word) mode_robdd__implications__conv7_Var_14);
    {
      mode_robdd__implications__ImpVars_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 0) = ((MR_Box) (mode_robdd__implications__Var_11));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 1) = ((MR_Box) (mode_robdd__implications__Var_12));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 2) = ((MR_Box) (mode_robdd__implications__Var_13));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 3) = ((MR_Box) (mode_robdd__implications__Var_14));
    }
    return mode_robdd__implications__ImpVars_6;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_3;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__imp_map_difference_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
    return mode_robdd__implications__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__difference_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
  MR_Word mode_robdd__implications__ImpVarsA_4,
  MR_Word mode_robdd__implications__ImpVarsB_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Var_6;

    {
      mode_robdd__implications__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 1) = ((MR_Box) (mode_robdd__implications__difference_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
    }
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__Var_6, mode_robdd__implications__ImpVarsA_4, mode_robdd__implications__ImpVarsB_5);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_3;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__intersect_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
    return mode_robdd__implications__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__f_plus_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
  MR_Word mode_robdd__implications__ImpVarsA_4,
  MR_Word mode_robdd__implications__ImpVarsB_5)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Var_6;

    {
      mode_robdd__implications__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 1) = ((MR_Box) (mode_robdd__implications__f_plus_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
    }
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__Var_6, mode_robdd__implications__ImpVarsA_4, mode_robdd__implications__ImpVarsB_5);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_21,
  MR_Word mode_robdd__implications__F_5,
  MR_Word mode_robdd__implications__ImpVarsA_6,
  MR_Word mode_robdd__implications__ImpVarsB_7)
{
  {
    MR_Word mode_robdd__implications__ImpVars_8;
    MR_Word mode_robdd__implications__IA_9;
    MR_Word mode_robdd__implications__RIA_10;
    MR_Word mode_robdd__implications__DIA_11;
    MR_Word mode_robdd__implications__RDIA_12;
    MR_Word mode_robdd__implications__IB_13;
    MR_Word mode_robdd__implications__RIB_14;
    MR_Word mode_robdd__implications__DIB_15;
    MR_Word mode_robdd__implications__RDIB_16;
    MR_Word mode_robdd__implications__Var_17;
    MR_Word mode_robdd__implications__Var_18;
    MR_Word mode_robdd__implications__Var_19;
    MR_Word mode_robdd__implications__Var_20;
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv1_Var_17;
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv3_Var_18;
    MR_Box MR_CALL (* mode_robdd__implications__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv5_Var_19;
    MR_Box MR_CALL (* mode_robdd__implications__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mode_robdd__implications__conv7_Var_20;

    mode_robdd__implications__IA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 0)));
    mode_robdd__implications__RIA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 1)));
    mode_robdd__implications__DIA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 2)));
    mode_robdd__implications__RDIA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 3)));
    mode_robdd__implications__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 0)));
    mode_robdd__implications__RIB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 1)));
    mode_robdd__implications__DIB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 2)));
    mode_robdd__implications__RDIB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 3)));
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv1_Var_17 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__IA_9)), ((MR_Box) (mode_robdd__implications__IB_13)));
    }
    mode_robdd__implications__Var_17 = ((MR_Word) mode_robdd__implications__conv1_Var_17);
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv3_Var_18 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__RIA_10)), ((MR_Box) (mode_robdd__implications__RIB_14)));
    }
    mode_robdd__implications__Var_18 = ((MR_Word) mode_robdd__implications__conv3_Var_18);
    mode_robdd__implications__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv5_Var_19 = mode_robdd__implications__func_4(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__DIA_11)), ((MR_Box) (mode_robdd__implications__DIB_15)));
    }
    mode_robdd__implications__Var_19 = ((MR_Word) mode_robdd__implications__conv5_Var_19);
    mode_robdd__implications__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
    {
      mode_robdd__implications__conv7_Var_20 = mode_robdd__implications__func_6(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__RDIA_12)), ((MR_Box) (mode_robdd__implications__RDIB_16)));
    }
    mode_robdd__implications__Var_20 = ((MR_Word) mode_robdd__implications__conv7_Var_20);
    {
      mode_robdd__implications__ImpVars_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 0) = ((MR_Box) (mode_robdd__implications__Var_17));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 1) = ((MR_Box) (mode_robdd__implications__Var_18));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 2) = ((MR_Box) (mode_robdd__implications__Var_19));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 3) = ((MR_Box) (mode_robdd__implications__Var_20));
    }
    return mode_robdd__implications__ImpVars_8;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv7_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv7_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv7_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv6_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv6_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv6_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv5_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv5_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv5_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv4_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv4_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv4_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv3_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv3_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv3_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv2_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv2_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv2_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv1_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv1_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv1_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_2;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_HeadVar__2_2;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__2_2));
    return mode_robdd__implications__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__f_times_2_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
  MR_Word mode_robdd__implications__ImpVars_4,
  MR_Word mode_robdd__implications__HeadVar__2_2)
{
  {
    MR_Word mode_robdd__implications__HeadVar__3_3;
    MR_Word mode_robdd__implications__Imps_5;
    MR_Word mode_robdd__implications__RevImps_6;
    MR_Word mode_robdd__implications__DisImps_7;
    MR_Word mode_robdd__implications__RevDisImps_8;
    MR_Word mode_robdd__implications__Var_9;
    MR_Word mode_robdd__implications__Var_10;
    MR_Word mode_robdd__implications__Var_11;
    MR_Word mode_robdd__implications__Var_12;
    MR_Word mode_robdd__implications__Var_13;
    MR_Word mode_robdd__implications__Var_14;
    MR_Word mode_robdd__implications__Var_15;
    MR_Word mode_robdd__implications__Var_16;
    MR_Word mode_robdd__implications__Var_17;
    MR_Word mode_robdd__implications__Var_18;
    MR_Word mode_robdd__implications__Var_19;

    mode_robdd__implications__Imps_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 0)));
    mode_robdd__implications__RevImps_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 1)));
    mode_robdd__implications__DisImps_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 2)));
    mode_robdd__implications__RevDisImps_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 3)));
    {
      mode_robdd__implications__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__Var_11 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__Var_9, mode_robdd__implications__Var_10, mode_robdd__implications__Imps_5, mode_robdd__implications__ImpVars_4);
    }
    {
      mode_robdd__implications__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_12, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_12, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_3));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_12, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_4));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__Var_14 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__Var_12, mode_robdd__implications__Var_13, mode_robdd__implications__RevImps_6, mode_robdd__implications__Var_11);
    }
    {
      mode_robdd__implications__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_5));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_6));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_16, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__Var_17 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__Var_15, mode_robdd__implications__Var_16, mode_robdd__implications__DisImps_7, mode_robdd__implications__Var_14);
    }
    {
      mode_robdd__implications__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_18, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_18, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_18, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_8));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_19, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
    }
    {
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__Var_18, mode_robdd__implications__Var_19, mode_robdd__implications__RevDisImps_8, mode_robdd__implications__Var_17);
    }
    return mode_robdd__implications__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
  MR_Box mode_robdd__implications__closure_arg,
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__implications__wrapper_arg_4;
    MR_Box mode_robdd__implications__closure;
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_19;

    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
    {
      mode_robdd__implications__conv0_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__569__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_19));
    return mode_robdd__implications__wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
  MR_Word mode_robdd__implications__MkLitA_6,
  MR_Word mode_robdd__implications__MkLitB_7,
  MR_Word mode_robdd__implications__IM_8,
  MR_Word mode_robdd__implications__ImpVars_9)
{
  {
    MR_Word mode_robdd__implications__HeadVar__5_5;
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
    MR_Word mode_robdd__implications__TypeInfo_34_34;
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
    MR_Word mode_robdd__implications__TypeInfo_36_36;
    MR_Word mode_robdd__implications__TypeCtorInfo_37_37;
    MR_Word mode_robdd__implications__TypeInfo_38_38;
    MR_Word mode_robdd__implications__Var_15;
    MR_Box mode_robdd__implications__conv1_HeadVar__5_5;

    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_34_34));
    }
    mode_robdd__implications__TypeCtorInfo_37_37 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
    {
      mode_robdd__implications__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_38_38, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_37_37));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
    }
    {
      mode_robdd__implications__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 1) = ((MR_Box) (mode_robdd__implications__add_imp_map_clauses_4_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 4) = ((MR_Box) (mode_robdd__implications__MkLitA_6));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__Var_15, 5) = ((MR_Box) (mode_robdd__implications__MkLitB_7));
    }
    {
      mode_robdd__implications__conv1_HeadVar__5_5 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_38_38, (MR_Word) mode_robdd__implications__Var_15, (MR_Word) mode_robdd__implications__IM_8, ((MR_Box) (mode_robdd__implications__ImpVars_9)));
    }
    mode_robdd__implications__HeadVar__5_5 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__5_5);
    return mode_robdd__implications__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
mode_robdd__implications__init_imp_vars_0_f_0(
  MR_Word mode_robdd__implications__TypeInfo_for_T_6)
{
  {
    MR_Word mode_robdd__implications__HeadVar__1_1;
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
    MR_Word mode_robdd__implications__TypeInfo_8_8;
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
    MR_Word mode_robdd__implications__TypeInfo_10_10;
    MR_Word mode_robdd__implications__Var_2;
    MR_Word mode_robdd__implications__Var_3;
    MR_Word mode_robdd__implications__Var_4;
    MR_Word mode_robdd__implications__Var_5;
    MR_Word mode_robdd__implications__conv0_Var_2;
    MR_Word mode_robdd__implications__conv1_Var_3;
    MR_Word mode_robdd__implications__conv2_Var_4;
    MR_Word mode_robdd__implications__conv3_Var_5;

    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
    }
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    {
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
    }
    {
      mode_robdd__implications__conv0_Var_2 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
    mode_robdd__implications__Var_2 = (MR_Word) mode_robdd__implications__conv0_Var_2;
    {
      mode_robdd__implications__conv1_Var_3 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
    mode_robdd__implications__Var_3 = (MR_Word) mode_robdd__implications__conv1_Var_3;
    {
      mode_robdd__implications__conv2_Var_4 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
    mode_robdd__implications__Var_4 = (MR_Word) mode_robdd__implications__conv2_Var_4;
    {
      mode_robdd__implications__conv3_Var_5 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
    mode_robdd__implications__Var_5 = (MR_Word) mode_robdd__implications__conv3_Var_5;
    {
      mode_robdd__implications__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__implications__Var_2));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__implications__Var_3));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__implications__Var_4));
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__implications__Var_5));
    }
    return mode_robdd__implications__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_bool mode_robdd__implications__succeeded;

    {
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____bin_clause_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Tuple) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
    return mode_robdd__implications__succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box * mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3,
  MR_Box mode_robdd__implications__wrapper_arg_4)
{
  {
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

    {
      mode_robdd__implications____Compare____bin_clause_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), &mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Tuple) mode_robdd__implications__wrapper_arg_3), ((MR_Tuple) mode_robdd__implications__wrapper_arg_4));
    }
    *mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2)
{
  {
    MR_bool mode_robdd__implications__succeeded;

    {
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____extract_0_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
    return mode_robdd__implications__succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
  MR_Box * mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

    {
      mode_robdd__implications____Compare____extract_0_0(&mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    *mode_robdd__implications__wrapper_arg_1 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3)
{
  {
    MR_bool mode_robdd__implications__succeeded;

    {
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____mklit_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
    return mode_robdd__implications__succeeded;
  }
}

static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
  MR_Box mode_robdd__implications__wrapper_arg_1,
  MR_Box * mode_robdd__implications__wrapper_arg_2,
  MR_Box mode_robdd__implications__wrapper_arg_3,
  MR_Box mode_robdd__implications__wrapper_arg_4)
{
  {
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

    {
      mode_robdd__implications____Compare____mklit_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), &mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__implications__wrapper_arg_3), ((MR_Word) mode_robdd__implications__wrapper_arg_4));
    }
    *mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
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

/* :- end_module mode_robdd.implications. */
