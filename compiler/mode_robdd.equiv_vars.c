/*
** Automatically generated from `mode_robdd.equiv_vars.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module mode_robdd.equiv_vars. */
/* :- implementation. */

/*
INIT mercury__mode_robdd__equiv_vars__init
ENDINIT
*/

#include "mode_robdd.equiv_vars.mih"


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
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
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



struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s {
  MR_Word * mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29;
  MR_Cont mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont;
  void * mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr;
  MR_Box mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29;
};

struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s {
  MR_Box * mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1;
  MR_Cont mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont;
  void * mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr;
  MR_Word mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29;
};


static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word mode_robdd__equiv_vars__EQVars_5,
  MR_Word mode_robdd__equiv_vars__V_6,
  MR_Word mode_robdd__equiv_vars__Vs_7);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_10,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_11);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
  MR_Word mode_robdd__equiv_vars__EQVars_4,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9);

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_19,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_20,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_21,
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__4_22,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__5_23,
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__6_24);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14);

static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_19,
  MR_Word mode_robdd__equiv_vars__Th_4,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_14);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
  MR_Word mode_robdd__equiv_vars__NewLeader_10,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_18,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_19);

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1(
  void * mode_robdd__equiv_vars__env_ptr_arg);

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
  MR_Word mode_robdd__equiv_vars__V_5,
  MR_Word mode_robdd__equiv_vars__M0_8,
  MR_Word * mode_robdd__equiv_vars__HeadVar__4_29,
  MR_Cont mode_robdd__equiv_vars__cont,
  void * mode_robdd__equiv_vars__cont_env_ptr);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_15);

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_13,
  MR_Word mode_robdd__equiv_vars__Var_5,
  MR_Word mode_robdd__equiv_vars__Leader_6,
  MR_Tuple mode_robdd__equiv_vars__HeadVar__3_3,
  MR_Tuple * mode_robdd__equiv_vars__HeadVar__4_4);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
  MR_Word mode_robdd__equiv_vars__EQVars_5,
  MR_Word mode_robdd__equiv_vars__V_6,
  MR_Word mode_robdd__equiv_vars__Vs_7);

static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
  MR_Word mode_robdd__equiv_vars__L_3,
  MR_Word mode_robdd__equiv_vars__LA_4,
  MR_Word mode_robdd__equiv_vars__LB_5,
  MR_Word mode_robdd__equiv_vars__Match_6,
  MR_Word mode_robdd__equiv_vars__EA_7,
  MR_Word mode_robdd__equiv_vars__EB_8,
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10);

static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word mode_robdd__equiv_vars__EA_2,
  MR_Word mode_robdd__equiv_vars__EB_3,
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5);

static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
  MR_Word mode_robdd__equiv_vars__L_3,
  MR_Word mode_robdd__equiv_vars__LA_4,
  MR_Word mode_robdd__equiv_vars__LB_5,
  MR_Word mode_robdd__equiv_vars__Match_6,
  MR_Word mode_robdd__equiv_vars__EA_7,
  MR_Word mode_robdd__equiv_vars__EB_8,
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10);

static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word mode_robdd__equiv_vars__EA_2,
  MR_Word mode_robdd__equiv_vars__EB_3,
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_11,
  MR_Word mode_robdd__equiv_vars__Var0_5,
  MR_Word mode_robdd__equiv_vars__EQVars0_6,
  MR_Word mode_robdd__equiv_vars__Var_7);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
  MR_Word mode_robdd__equiv_vars__A_5,
  MR_Word mode_robdd__equiv_vars__B_6,
  MR_Word mode_robdd__equiv_vars__EQVars_7);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1);

static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_5,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_6);

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
  void * mode_robdd__equiv_vars__env_ptr_arg);

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Cont mode_robdd__equiv_vars__cont,
  void * mode_robdd__equiv_vars__cont_env_ptr);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);


static /* final */ const MR_Integer mode_robdd__equiv_vars_scalar_common_1[1][2];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_2[4][8];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_3[4][7];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_4[1][6];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_5[1][10];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_6[2][2];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_7[2][3];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_8[1][4];

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_9[1][5];




static /* final */ const MR_Integer mode_robdd__equiv_vars_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_2[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_3[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_6[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_6[0]))
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_7[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_6[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_6[0])),
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_6[0]))
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_8[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[3])),
    ((MR_Box) (mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box mode_robdd__equiv_vars_scalar_common_9[1][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_6[1])),
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_7[1]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

MR_bool MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__equiv_vars__Var_4,
  MR_Word mode_robdd__equiv_vars__EQVars_5,
  MR_Word * mode_robdd__equiv_vars__HeadVar__3_3)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_9 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
    MR_Word mode_robdd__equiv_vars__Var_6 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
    MR_Box mode_robdd__equiv_vars__conv0_HeadVar__3_3;

    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__Var_4, mode_robdd__equiv_vars__Var_6, &mode_robdd__equiv_vars__conv0_HeadVar__3_3);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        *mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__3_3);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    return mode_robdd__equiv_vars__succeeded;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4)
{
  {
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Tuple mode_robdd__equiv_vars__conv2_HeadVar__4_4;

    {
      mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Tuple) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv2_HeadVar__4_4);
    }
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_4;

    {
      mode_robdd__equiv_vars__conv0_HeadVar__4_4 = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__4_4));
    return mode_robdd__equiv_vars__wrapper_arg_3;
  }
}

void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
  MR_Word * mode_robdd__equiv_vars__Changed_6,
  MR_Word mode_robdd__equiv_vars__Vars0_7,
  MR_Word * mode_robdd__equiv_vars__Vars_8,
  MR_Word mode_robdd__equiv_vars__EQVars0_9,
  MR_Word * mode_robdd__equiv_vars__EQVars_10)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;

    {
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__empty_1_p_0((MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0], mode_robdd__equiv_vars__Vars0_7);
    }
    if (!(mode_robdd__equiv_vars__succeeded))
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_5_48 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
        MR_Word mode_robdd__equiv_vars__LM_46 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;

        {
          mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_48, mode_robdd__equiv_vars__TypeInfo_5_48, mode_robdd__equiv_vars__LM_46);
        }
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        *mode_robdd__equiv_vars__Vars_8 = mode_robdd__equiv_vars__Vars0_7;
        *mode_robdd__equiv_vars__EQVars_10 = mode_robdd__equiv_vars__EQVars0_9;
        *mode_robdd__equiv_vars__Changed_6 = (MR_Integer) 0;
      }
    else
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
        MR_Word mode_robdd__equiv_vars__Vars1_11;
        MR_Word mode_robdd__equiv_vars__LeaderMap0_12;
        MR_Word mode_robdd__equiv_vars__LeaderMap_13;
        MR_Word mode_robdd__equiv_vars__Var_14;
        MR_Tuple mode_robdd__equiv_vars__Var_17;
        MR_Tuple mode_robdd__equiv_vars__Var_18;
        MR_Box mode_robdd__equiv_vars__conv1_Vars1_11;
        MR_Box mode_robdd__equiv_vars__conv3_Var_18;

        {
          mode_robdd__equiv_vars__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__EQVars0_9));
        }
        {
          mode_robdd__equiv_vars__conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[1], (MR_Word) &mode_robdd__equiv_vars_scalar_common_7[0], mode_robdd__equiv_vars__Var_14, mode_robdd__equiv_vars__Vars0_7, ((MR_Box) (mode_robdd__equiv_vars__Vars0_7)));
        }
        mode_robdd__equiv_vars__Vars1_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_Vars1_11);
        mode_robdd__equiv_vars__LeaderMap0_12 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;
        {
          mode_robdd__equiv_vars__Var_17 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars1_11));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__LeaderMap0_12));
        }
        {
          mercury__map__foldl_4_p_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, (MR_Word) &mode_robdd__equiv_vars_scalar_common_9[0], (MR_Word) &mode_robdd__equiv_vars_scalar_common_8[0], mode_robdd__equiv_vars__LeaderMap0_12, ((MR_Box) (mode_robdd__equiv_vars__Var_17)), &mode_robdd__equiv_vars__conv3_Var_18);
        }
        mode_robdd__equiv_vars__Var_18 = ((MR_Tuple) mode_robdd__equiv_vars__conv3_Var_18);
        *mode_robdd__equiv_vars__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_18, (MR_Integer) 0)));
        *mode_robdd__equiv_vars__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_18, (MR_Integer) 1)));
        mode_robdd__equiv_vars__LeaderMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_18, (MR_Integer) 2)));
        *mode_robdd__equiv_vars__EQVars_10 = (MR_Word) mode_robdd__equiv_vars__LeaderMap_13;
      }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word mode_robdd__equiv_vars__EQVars_5,
  MR_Word mode_robdd__equiv_vars__V_6,
  MR_Word mode_robdd__equiv_vars__Vs_7)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_20 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
    MR_Word mode_robdd__equiv_vars__L_8;
    MR_Word mode_robdd__equiv_vars__Var_17 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
    MR_Box mode_robdd__equiv_vars__conv0_L_8;

    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, mode_robdd__equiv_vars__TypeInfo_9_20, mode_robdd__equiv_vars__TypeInfo_9_20, mode_robdd__equiv_vars__V_6, mode_robdd__equiv_vars__Var_17, &mode_robdd__equiv_vars__conv0_L_8);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__L_8 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_8);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        {
          mode_robdd__equiv_vars__HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &mode_robdd__equiv_vars_scalar_common_7[0], mode_robdd__equiv_vars__Vs_7, mode_robdd__equiv_vars__L_8);
        }
      }
    else
      mode_robdd__equiv_vars__HeadVar__4_4 = mode_robdd__equiv_vars__Vs_7;
    return mode_robdd__equiv_vars__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_10,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_11)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__4_12;

    {
      mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__LambdaHeadVar__2_10, mode_robdd__equiv_vars__LambdaHeadVar__1_9);
    }
    if (mode_robdd__equiv_vars__succeeded)
      mode_robdd__equiv_vars__LambdaHeadVar__4_12 = mode_robdd__equiv_vars__LambdaHeadVar__3_11;
    else
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
        MR_Word mode_robdd__equiv_vars__LeaderLeader_7;
        MR_Box mode_robdd__equiv_vars__conv0_LeaderLeader_7;

        {
          mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
        }
        {
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__LambdaHeadVar__2_10, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_11, &mode_robdd__equiv_vars__conv0_LeaderLeader_7);
        }
        if (mode_robdd__equiv_vars__succeeded)
          {
            mode_robdd__equiv_vars__LeaderLeader_7 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderLeader_7);
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
          }
        if (mode_robdd__equiv_vars__succeeded)
          {
            MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12;

            {
              mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__LambdaHeadVar__1_9, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_11, ((MR_Box) (mode_robdd__equiv_vars__LeaderLeader_7)));
            }
            mode_robdd__equiv_vars__LambdaHeadVar__4_12 = (MR_Word) mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12;
          }
        else
          {
            MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
            MR_Word mode_robdd__equiv_vars__Var_13;
            MR_Word mode_robdd__equiv_vars__conv2_Var_13;
            MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12;

            {
              mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
            }
            {
              mode_robdd__equiv_vars__conv2_Var_13 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__1_9, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_11, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_10)));
            }
            mode_robdd__equiv_vars__Var_13 = (MR_Word) mode_robdd__equiv_vars__conv2_Var_13;
            {
              mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__2_10, (MR_Word) mode_robdd__equiv_vars__Var_13, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_10)));
            }
            mode_robdd__equiv_vars__LambdaHeadVar__4_12 = (MR_Word) mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12;
          }
      }
    return mode_robdd__equiv_vars__LambdaHeadVar__4_12;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
  MR_Word mode_robdd__equiv_vars__EQVars_4,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_10;
    MR_Word mode_robdd__equiv_vars__L_17;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_22;
    MR_Word mode_robdd__equiv_vars__Var_20 = (MR_Word) mode_robdd__equiv_vars__EQVars_4;
    MR_Box mode_robdd__equiv_vars__conv0_L_17;

    {
      mode_robdd__equiv_vars__TypeInfo_9_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__TypeInfo_9_22, mode_robdd__equiv_vars__TypeInfo_9_22, mode_robdd__equiv_vars__LambdaHeadVar__1_9, (MR_Word) mode_robdd__equiv_vars__Var_20, &mode_robdd__equiv_vars__conv0_L_17);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__L_17 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_17);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      mode_robdd__equiv_vars__LambdaHeadVar__2_10 = mode_robdd__equiv_vars__L_17;
    else
      mode_robdd__equiv_vars__LambdaHeadVar__2_10 = mode_robdd__equiv_vars__LambdaHeadVar__1_9;
    return mode_robdd__equiv_vars__LambdaHeadVar__2_10;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_19,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_20,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_21,
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__4_22,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__5_23,
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__6_24)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_35;
    MR_Word mode_robdd__equiv_vars__TypeInfo_33_33;

    {
      mode_robdd__equiv_vars__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
    }
    {
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_33_33));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, mode_robdd__equiv_vars__LambdaHeadVar__3_21, mode_robdd__equiv_vars__LambdaHeadVar__2_20);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        {
          *mode_robdd__equiv_vars__LambdaHeadVar__4_22 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, mode_robdd__equiv_vars__LambdaHeadVar__3_21, mode_robdd__equiv_vars__LambdaHeadVar__1_19);
        }
        *mode_robdd__equiv_vars__LambdaHeadVar__6_24 = mode_robdd__equiv_vars__LambdaHeadVar__5_23;
      }
    else
      {
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_43;
        MR_Word mode_robdd__equiv_vars__TypeInfo_41_41;

        {
          mode_robdd__equiv_vars__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
        }
        {
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_41_41));
        }
        {
          mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, mode_robdd__equiv_vars__LambdaHeadVar__5_23, mode_robdd__equiv_vars__LambdaHeadVar__2_20);
        }
        if (mode_robdd__equiv_vars__succeeded)
          {
            *mode_robdd__equiv_vars__LambdaHeadVar__4_22 = mode_robdd__equiv_vars__LambdaHeadVar__3_21;
            {
              *mode_robdd__equiv_vars__LambdaHeadVar__6_24 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, mode_robdd__equiv_vars__LambdaHeadVar__5_23, mode_robdd__equiv_vars__LambdaHeadVar__1_19);
            }
          }
        else
          {
            *mode_robdd__equiv_vars__LambdaHeadVar__4_22 = mode_robdd__equiv_vars__LambdaHeadVar__3_21;
            *mode_robdd__equiv_vars__LambdaHeadVar__6_24 = mode_robdd__equiv_vars__LambdaHeadVar__5_23;
          }
      }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_15;
    MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_15;

    {
      mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
    }
    {
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_15 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__2_14, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__1_13)));
    }
    mode_robdd__equiv_vars__LambdaHeadVar__3_15 = (MR_Word) mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_15;
    return mode_robdd__equiv_vars__LambdaHeadVar__3_15;
  }
}

static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_19,
  MR_Word mode_robdd__equiv_vars__Th_4,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_14)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__V_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__LambdaHeadVar__1_14, (MR_Integer) 0)));
    MR_Word mode_robdd__equiv_vars__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__LambdaHeadVar__1_14, (MR_Integer) 1)));
    MR_Word mode_robdd__equiv_vars__Var_26;

    {
      mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__Var_26, mode_robdd__equiv_vars__V_17, mode_robdd__equiv_vars__Th_4);
    }
    mode_robdd__equiv_vars__succeeded = ((MR_Integer) 2 == mode_robdd__equiv_vars__Var_26);
    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
    return mode_robdd__equiv_vars__succeeded;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
  MR_Word mode_robdd__equiv_vars__NewLeader_10,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_18,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_19)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_20;
    MR_Word mode_robdd__equiv_vars__TypeInfo_35_35;
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_20;

    {
      mode_robdd__equiv_vars__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
    }
    {
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_20 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__TypeInfo_35_35, mode_robdd__equiv_vars__TypeInfo_35_35, mode_robdd__equiv_vars__LambdaHeadVar__1_18, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__2_19, ((MR_Box) (mode_robdd__equiv_vars__NewLeader_10)));
    }
    mode_robdd__equiv_vars__LambdaHeadVar__3_20 = (MR_Word) mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_20;
    return mode_robdd__equiv_vars__LambdaHeadVar__3_20;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1(
  void * mode_robdd__equiv_vars__env_ptr_arg)
{
  {
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s * mode_robdd__equiv_vars__env_ptr = (struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s *) mode_robdd__equiv_vars__env_ptr_arg;

    *((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29) = ((MR_Word) (mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29);
    {
      ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont)((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
  MR_Word mode_robdd__equiv_vars__V_5,
  MR_Word mode_robdd__equiv_vars__M0_8,
  MR_Word * mode_robdd__equiv_vars__HeadVar__4_29,
  MR_Cont mode_robdd__equiv_vars__cont,
  void * mode_robdd__equiv_vars__cont_env_ptr)
{
  {
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s mode_robdd__equiv_vars__env;

    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29 = mode_robdd__equiv_vars__HeadVar__4_29;
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont = mode_robdd__equiv_vars__cont;
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr = mode_robdd__equiv_vars__cont_env_ptr;
    {
      MR_bool mode_robdd__equiv_vars__succeeded;
      MR_Word mode_robdd__equiv_vars__TypeInfo_31_31;

      {
        mode_robdd__equiv_vars__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
      }
      {
        mercury__map__inverse_search_3_p_0(mode_robdd__equiv_vars__TypeInfo_31_31, mode_robdd__equiv_vars__TypeInfo_31_31, (MR_Word) mode_robdd__equiv_vars__M0_8, ((MR_Box) (mode_robdd__equiv_vars__V_5)), &(mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29, mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1, &mode_robdd__equiv_vars__env);
      }
    }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14,
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_15)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__4_16;
    MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
    MR_Word mode_robdd__equiv_vars__LeaderB_11;
    MR_Box mode_robdd__equiv_vars__conv0_LeaderB_11;

    {
      mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__1_13, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, &mode_robdd__equiv_vars__conv0_LeaderB_11);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__LeaderB_11 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderB_11);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        MR_Word mode_robdd__equiv_vars__Var_39;

        {
          mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, &mode_robdd__equiv_vars__Var_39, mode_robdd__equiv_vars__LambdaHeadVar__2_14, mode_robdd__equiv_vars__LeaderB_11);
        }
        mode_robdd__equiv_vars__succeeded = ((MR_Integer) 1 == mode_robdd__equiv_vars__Var_39);
        if (mode_robdd__equiv_vars__succeeded)
          {
            MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_16;

            {
              mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LeaderB_11, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_14)));
            }
            mode_robdd__equiv_vars__LambdaHeadVar__4_16 = (MR_Word) mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_16;
          }
        else
          {
            MR_Word mode_robdd__equiv_vars__Var_40;

            {
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, &mode_robdd__equiv_vars__Var_40, mode_robdd__equiv_vars__LeaderB_11, mode_robdd__equiv_vars__LambdaHeadVar__2_14);
            }
            mode_robdd__equiv_vars__succeeded = ((MR_Integer) 1 == mode_robdd__equiv_vars__Var_40);
            if (mode_robdd__equiv_vars__succeeded)
              {
                MR_Word mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_16;

                {
                  mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__2_14, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, ((MR_Box) (mode_robdd__equiv_vars__LeaderB_11)));
                }
                mode_robdd__equiv_vars__LambdaHeadVar__4_16 = (MR_Word) mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_16;
              }
            else
              mode_robdd__equiv_vars__LambdaHeadVar__4_16 = mode_robdd__equiv_vars__LambdaHeadVar__3_15;
          }
      }
    else
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_38_38;
        MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_16;

        {
          mode_robdd__equiv_vars__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
        }
        {
          mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_38_38, mode_robdd__equiv_vars__TypeInfo_38_38, mode_robdd__equiv_vars__LambdaHeadVar__1_13, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_14)));
        }
        mode_robdd__equiv_vars__LambdaHeadVar__4_16 = (MR_Word) mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_16;
      }
    return mode_robdd__equiv_vars__LambdaHeadVar__4_16;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_13,
  MR_Word mode_robdd__equiv_vars__Var_5,
  MR_Word mode_robdd__equiv_vars__Leader_6,
  MR_Tuple mode_robdd__equiv_vars__HeadVar__3_3,
  MR_Tuple * mode_robdd__equiv_vars__HeadVar__4_4)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__Changed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mode_robdd__equiv_vars__Vars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word mode_robdd__equiv_vars__LM0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 2)));
    MR_Word mode_robdd__equiv_vars__Changed_10;
    MR_Word mode_robdd__equiv_vars__Vars_11;
    MR_Word mode_robdd__equiv_vars__LM_12;
    MR_Word mode_robdd__equiv_vars__TypeInfo_15_15;
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_17;

    {
      mode_robdd__equiv_vars__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_15_15, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_13));
    }
    {
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_15_15));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_13, mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, mode_robdd__equiv_vars__Vars0_8, mode_robdd__equiv_vars__Leader_6);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        MR_Word mode_robdd__equiv_vars__conv0_LM_12;

        {
          mode_robdd__equiv_vars__Vars_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_13, mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, mode_robdd__equiv_vars__Vars0_8, mode_robdd__equiv_vars__Var_5);
        }
        {
          mode_robdd__equiv_vars__conv0_LM_12 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_15_15, mode_robdd__equiv_vars__TypeInfo_15_15, (MR_Word) mode_robdd__equiv_vars__LM0_9, ((MR_Box) (mode_robdd__equiv_vars__Var_5)));
        }
        mode_robdd__equiv_vars__LM_12 = (MR_Word) mode_robdd__equiv_vars__conv0_LM_12;
        mode_robdd__equiv_vars__Changed_10 = (MR_Integer) 1;
      }
    else
      {
        mode_robdd__equiv_vars__Vars_11 = mode_robdd__equiv_vars__Vars0_8;
        mode_robdd__equiv_vars__LM_12 = mode_robdd__equiv_vars__LM0_9;
        mode_robdd__equiv_vars__Changed_10 = mode_robdd__equiv_vars__Changed0_7;
      }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mode_robdd__equiv_vars__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__Changed_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__equiv_vars__LM_12));
    }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
  MR_Word mode_robdd__equiv_vars__EQVars_5,
  MR_Word mode_robdd__equiv_vars__V_6,
  MR_Word mode_robdd__equiv_vars__Vs_7)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_18;
    MR_Word mode_robdd__equiv_vars__L_8;
    MR_Word mode_robdd__equiv_vars__Var_16 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
    MR_Box mode_robdd__equiv_vars__conv0_L_8;

    {
      mode_robdd__equiv_vars__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_18, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeInfo_9_18, mode_robdd__equiv_vars__TypeInfo_9_18, mode_robdd__equiv_vars__V_6, (MR_Word) mode_robdd__equiv_vars__Var_16, &mode_robdd__equiv_vars__conv0_L_8);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__L_8 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_8);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_13;

        {
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_18));
        }
        {
          mode_robdd__equiv_vars__HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, mode_robdd__equiv_vars__Vs_7, mode_robdd__equiv_vars__L_8);
        }
      }
    else
      mode_robdd__equiv_vars__HeadVar__4_4 = mode_robdd__equiv_vars__Vs_7;
    return mode_robdd__equiv_vars__HeadVar__4_4;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
  MR_Word mode_robdd__equiv_vars__L_3,
  MR_Word mode_robdd__equiv_vars__LA_4,
  MR_Word mode_robdd__equiv_vars__LB_5,
  MR_Word mode_robdd__equiv_vars__Match_6,
  MR_Word mode_robdd__equiv_vars__EA_7,
  MR_Word mode_robdd__equiv_vars__EB_8,
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mode_robdd__equiv_vars__succeeded;

        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mode_robdd__equiv_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mode_robdd__equiv_vars__HeadVar__10_10 = mode_robdd__equiv_vars__DCG_0_9;
          }
        else
          {
            MR_Word mode_robdd__equiv_vars__V_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mode_robdd__equiv_vars__Vs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_46;
            MR_Word mode_robdd__equiv_vars__Var_36;
            MR_Word mode_robdd__equiv_vars__Var_44 = (MR_Word) mode_robdd__equiv_vars__EA_7;
            MR_Box mode_robdd__equiv_vars__conv0_Var_36;
            MR_Word mode_robdd__equiv_vars__Var_37;
            MR_Word mode_robdd__equiv_vars__Var_49;
            MR_Box mode_robdd__equiv_vars__conv1_Var_37;

            {
              mode_robdd__equiv_vars__TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_35));
            }
            {
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__Var_44, &mode_robdd__equiv_vars__conv0_Var_36);
            }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__Var_36 = ((MR_Word) mode_robdd__equiv_vars__conv0_Var_36);
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
              }
            if (mode_robdd__equiv_vars__succeeded)
              {
                {
                  mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__Var_36);
                }
                if (mode_robdd__equiv_vars__succeeded)
                  {
                    mode_robdd__equiv_vars__Var_49 = (MR_Word) mode_robdd__equiv_vars__EB_8;
                    {
                      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__Var_49, &mode_robdd__equiv_vars__conv1_Var_37);
                    }
                    if (mode_robdd__equiv_vars__succeeded)
                      {
                        mode_robdd__equiv_vars__Var_37 = ((MR_Word) mode_robdd__equiv_vars__conv1_Var_37);
                        mode_robdd__equiv_vars__succeeded = MR_TRUE;
                      }
                    if (mode_robdd__equiv_vars__succeeded)
                      {
                        mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Var_37);
                      }
                    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
                  }
              }
            if (mode_robdd__equiv_vars__succeeded)
              {
                MR_Word mode_robdd__equiv_vars__DCG_1_30;
                MR_Word mode_robdd__equiv_vars__DCG_2_31;
                MR_Word mode_robdd__equiv_vars__Var_55 = (MR_Word) mode_robdd__equiv_vars__DCG_0_9;
                MR_Word mode_robdd__equiv_vars__Var_56;
                MR_Word mode_robdd__equiv_vars__conv2_Var_56;

                {
                  mode_robdd__equiv_vars__conv2_Var_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__Var_55, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                }
                mode_robdd__equiv_vars__Var_56 = (MR_Word) mode_robdd__equiv_vars__conv2_Var_56;
                mode_robdd__equiv_vars__DCG_1_30 = (MR_Word) mode_robdd__equiv_vars__Var_56;
                switch (mode_robdd__equiv_vars__Match_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mode_robdd__equiv_vars__Var_64;
                      MR_Word mode_robdd__equiv_vars__conv3_Var_64;

                      {
                        mode_robdd__equiv_vars__conv3_Var_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__L_3, (MR_Word) mode_robdd__equiv_vars__Var_56, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                      }
                      mode_robdd__equiv_vars__Var_64 = (MR_Word) mode_robdd__equiv_vars__conv3_Var_64;
                      mode_robdd__equiv_vars__DCG_2_31 = (MR_Word) mode_robdd__equiv_vars__Var_64;
                    }
                    break;
                  case (MR_Integer) 1:
                    mode_robdd__equiv_vars__DCG_2_31 = mode_robdd__equiv_vars__DCG_1_30;
                    break;
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mode_robdd__equiv_vars__next_value_of_HeadVar__1_1 = mode_robdd__equiv_vars__Vs0_20;
                  MR_Word mode_robdd__equiv_vars__next_value_of_DCG_0_9 = mode_robdd__equiv_vars__DCG_2_31;

                  mode_robdd__equiv_vars__DCG_0_9 = mode_robdd__equiv_vars__next_value_of_DCG_0_9;
                  mode_robdd__equiv_vars__Match_6 = (MR_Integer) 1;
                  mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                MR_Word mode_robdd__equiv_vars__Vs1_28;

                {
                  mode_robdd__equiv_vars__diff_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__Vs0_20, &mode_robdd__equiv_vars__Vs1_28, mode_robdd__equiv_vars__L_3, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Match_6, mode_robdd__equiv_vars__EA_7, mode_robdd__equiv_vars__EB_8, mode_robdd__equiv_vars__DCG_0_9, mode_robdd__equiv_vars__HeadVar__10_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mode_robdd__equiv_vars__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__V_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vs1_28));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word mode_robdd__equiv_vars__EA_2,
  MR_Word mode_robdd__equiv_vars__EB_3,
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mode_robdd__equiv_vars__succeeded;

        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mode_robdd__equiv_vars__HeadVar__5_5 = mode_robdd__equiv_vars__DCG_0_4;
        else
          {
            MR_Word mode_robdd__equiv_vars__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mode_robdd__equiv_vars__Vs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mode_robdd__equiv_vars__Vs_15;
            MR_Word mode_robdd__equiv_vars__DCG_1_17;
            MR_Word mode_robdd__equiv_vars__Var_19;
            MR_Word mode_robdd__equiv_vars__Var_20;
            MR_Word mode_robdd__equiv_vars__L_24;
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_29;
            MR_Word mode_robdd__equiv_vars__Var_27 = (MR_Word) mode_robdd__equiv_vars__EA_2;
            MR_Box mode_robdd__equiv_vars__conv0_L_24;
            MR_Word mode_robdd__equiv_vars__L_32;
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_37;
            MR_Word mode_robdd__equiv_vars__Var_35;
            MR_Box mode_robdd__equiv_vars__conv1_L_32;

            {
              mode_robdd__equiv_vars__TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
            }
            {
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__Var_27, &mode_robdd__equiv_vars__conv0_L_24);
            }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__L_24 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_24);
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
              }
            if (mode_robdd__equiv_vars__succeeded)
              mode_robdd__equiv_vars__Var_19 = mode_robdd__equiv_vars__L_24;
            else
              mode_robdd__equiv_vars__Var_19 = mode_robdd__equiv_vars__V_10;
            mode_robdd__equiv_vars__Var_35 = (MR_Word) mode_robdd__equiv_vars__EB_3;
            {
              mode_robdd__equiv_vars__TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
            }
            {
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__Var_35, &mode_robdd__equiv_vars__conv1_L_32);
            }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__L_32 = ((MR_Word) mode_robdd__equiv_vars__conv1_L_32);
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
              }
            if (mode_robdd__equiv_vars__succeeded)
              mode_robdd__equiv_vars__Var_20 = mode_robdd__equiv_vars__L_32;
            else
              mode_robdd__equiv_vars__Var_20 = mode_robdd__equiv_vars__V_10;
            {
              mode_robdd__equiv_vars__diff_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__Vs0_11, &mode_robdd__equiv_vars__Vs_15, mode_robdd__equiv_vars__V_10, mode_robdd__equiv_vars__Var_19, mode_robdd__equiv_vars__Var_20, (MR_Integer) 0, mode_robdd__equiv_vars__EA_2, mode_robdd__equiv_vars__EB_3, mode_robdd__equiv_vars__DCG_0_4, &mode_robdd__equiv_vars__DCG_1_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mode_robdd__equiv_vars__next_value_of_HeadVar__1_1 = mode_robdd__equiv_vars__Vs_15;
              MR_Word mode_robdd__equiv_vars__next_value_of_DCG_0_4 = mode_robdd__equiv_vars__DCG_1_17;

              mode_robdd__equiv_vars__DCG_0_4 = mode_robdd__equiv_vars__next_value_of_DCG_0_4;
              mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
  MR_Word mode_robdd__equiv_vars__L_3,
  MR_Word mode_robdd__equiv_vars__LA_4,
  MR_Word mode_robdd__equiv_vars__LB_5,
  MR_Word mode_robdd__equiv_vars__Match_6,
  MR_Word mode_robdd__equiv_vars__EA_7,
  MR_Word mode_robdd__equiv_vars__EB_8,
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mode_robdd__equiv_vars__succeeded;

        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mode_robdd__equiv_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mode_robdd__equiv_vars__HeadVar__10_10 = mode_robdd__equiv_vars__DCG_0_9;
          }
        else
          {
            MR_Word mode_robdd__equiv_vars__V_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mode_robdd__equiv_vars__Vs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_46;
            MR_Word mode_robdd__equiv_vars__Var_36;
            MR_Word mode_robdd__equiv_vars__Var_37;
            MR_Word mode_robdd__equiv_vars__Var_44 = (MR_Word) mode_robdd__equiv_vars__EA_7;
            MR_Word mode_robdd__equiv_vars__Var_49;
            MR_Box mode_robdd__equiv_vars__conv0_Var_36;
            MR_Box mode_robdd__equiv_vars__conv1_Var_37;

            {
              mode_robdd__equiv_vars__TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_35));
            }
            {
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__Var_44, &mode_robdd__equiv_vars__conv0_Var_36);
            }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__Var_36 = ((MR_Word) mode_robdd__equiv_vars__conv0_Var_36);
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
              }
            if (mode_robdd__equiv_vars__succeeded)
              {
                {
                  mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__Var_36);
                }
                if (mode_robdd__equiv_vars__succeeded)
                  {
                    mode_robdd__equiv_vars__Var_49 = (MR_Word) mode_robdd__equiv_vars__EB_8;
                    {
                      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__Var_49, &mode_robdd__equiv_vars__conv1_Var_37);
                    }
                    if (mode_robdd__equiv_vars__succeeded)
                      {
                        mode_robdd__equiv_vars__Var_37 = ((MR_Word) mode_robdd__equiv_vars__conv1_Var_37);
                        mode_robdd__equiv_vars__succeeded = MR_TRUE;
                      }
                    if (mode_robdd__equiv_vars__succeeded)
                      {
                        mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Var_37);
                      }
                  }
              }
            if (mode_robdd__equiv_vars__succeeded)
              {
                MR_Word mode_robdd__equiv_vars__DCG_1_30;
                MR_Word mode_robdd__equiv_vars__DCG_2_31;
                MR_Word mode_robdd__equiv_vars__Var_55 = (MR_Word) mode_robdd__equiv_vars__DCG_0_9;
                MR_Word mode_robdd__equiv_vars__Var_56;
                MR_Word mode_robdd__equiv_vars__conv2_Var_56;

                {
                  mode_robdd__equiv_vars__conv2_Var_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__Var_55, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                }
                mode_robdd__equiv_vars__Var_56 = (MR_Word) mode_robdd__equiv_vars__conv2_Var_56;
                mode_robdd__equiv_vars__DCG_1_30 = (MR_Word) mode_robdd__equiv_vars__Var_56;
                switch (mode_robdd__equiv_vars__Match_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mode_robdd__equiv_vars__Var_64;
                      MR_Word mode_robdd__equiv_vars__conv3_Var_64;

                      {
                        mode_robdd__equiv_vars__conv3_Var_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__L_3, (MR_Word) mode_robdd__equiv_vars__Var_56, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                      }
                      mode_robdd__equiv_vars__Var_64 = (MR_Word) mode_robdd__equiv_vars__conv3_Var_64;
                      mode_robdd__equiv_vars__DCG_2_31 = (MR_Word) mode_robdd__equiv_vars__Var_64;
                    }
                    break;
                  case (MR_Integer) 1:
                    mode_robdd__equiv_vars__DCG_2_31 = mode_robdd__equiv_vars__DCG_1_30;
                    break;
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mode_robdd__equiv_vars__next_value_of_HeadVar__1_1 = mode_robdd__equiv_vars__Vs0_20;
                  MR_Word mode_robdd__equiv_vars__next_value_of_DCG_0_9 = mode_robdd__equiv_vars__DCG_2_31;

                  mode_robdd__equiv_vars__DCG_0_9 = mode_robdd__equiv_vars__next_value_of_DCG_0_9;
                  mode_robdd__equiv_vars__Match_6 = (MR_Integer) 1;
                  mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                MR_Word mode_robdd__equiv_vars__Vs1_28;

                {
                  mode_robdd__equiv_vars__disj_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__Vs0_20, &mode_robdd__equiv_vars__Vs1_28, mode_robdd__equiv_vars__L_3, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Match_6, mode_robdd__equiv_vars__EA_7, mode_robdd__equiv_vars__EB_8, mode_robdd__equiv_vars__DCG_0_9, mode_robdd__equiv_vars__HeadVar__10_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mode_robdd__equiv_vars__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__V_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vs1_28));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word mode_robdd__equiv_vars__EA_2,
  MR_Word mode_robdd__equiv_vars__EB_3,
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mode_robdd__equiv_vars__succeeded;

        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mode_robdd__equiv_vars__HeadVar__5_5 = mode_robdd__equiv_vars__DCG_0_4;
        else
          {
            MR_Word mode_robdd__equiv_vars__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mode_robdd__equiv_vars__Vs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mode_robdd__equiv_vars__Vs_15;
            MR_Word mode_robdd__equiv_vars__DCG_1_17;
            MR_Word mode_robdd__equiv_vars__Var_19;
            MR_Word mode_robdd__equiv_vars__Var_20;
            MR_Word mode_robdd__equiv_vars__L_24;
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_29;
            MR_Word mode_robdd__equiv_vars__Var_27 = (MR_Word) mode_robdd__equiv_vars__EA_2;
            MR_Box mode_robdd__equiv_vars__conv0_L_24;
            MR_Word mode_robdd__equiv_vars__L_32;
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_37;
            MR_Word mode_robdd__equiv_vars__Var_35;
            MR_Box mode_robdd__equiv_vars__conv1_L_32;

            {
              mode_robdd__equiv_vars__TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
            }
            {
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__Var_27, &mode_robdd__equiv_vars__conv0_L_24);
            }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__L_24 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_24);
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
              }
            if (mode_robdd__equiv_vars__succeeded)
              mode_robdd__equiv_vars__Var_19 = mode_robdd__equiv_vars__L_24;
            else
              mode_robdd__equiv_vars__Var_19 = mode_robdd__equiv_vars__V_10;
            mode_robdd__equiv_vars__Var_35 = (MR_Word) mode_robdd__equiv_vars__EB_3;
            {
              mode_robdd__equiv_vars__TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
            }
            {
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__Var_35, &mode_robdd__equiv_vars__conv1_L_32);
            }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__L_32 = ((MR_Word) mode_robdd__equiv_vars__conv1_L_32);
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
              }
            if (mode_robdd__equiv_vars__succeeded)
              mode_robdd__equiv_vars__Var_20 = mode_robdd__equiv_vars__L_32;
            else
              mode_robdd__equiv_vars__Var_20 = mode_robdd__equiv_vars__V_10;
            {
              mode_robdd__equiv_vars__disj_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__Vs0_11, &mode_robdd__equiv_vars__Vs_15, mode_robdd__equiv_vars__V_10, mode_robdd__equiv_vars__Var_19, mode_robdd__equiv_vars__Var_20, (MR_Integer) 0, mode_robdd__equiv_vars__EA_2, mode_robdd__equiv_vars__EB_3, mode_robdd__equiv_vars__DCG_0_4, &mode_robdd__equiv_vars__DCG_1_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mode_robdd__equiv_vars__next_value_of_HeadVar__1_1 = mode_robdd__equiv_vars__Vs_15;
              MR_Word mode_robdd__equiv_vars__next_value_of_DCG_0_4 = mode_robdd__equiv_vars__DCG_1_17;

              mode_robdd__equiv_vars__DCG_0_4 = mode_robdd__equiv_vars__next_value_of_DCG_0_4;
              mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_11,
  MR_Word mode_robdd__equiv_vars__Var0_5,
  MR_Word mode_robdd__equiv_vars__EQVars0_6,
  MR_Word mode_robdd__equiv_vars__Var_7)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
    MR_Word mode_robdd__equiv_vars__TypeInfo_13_13;
    MR_Word mode_robdd__equiv_vars__Var_8 = (MR_Word) mode_robdd__equiv_vars__EQVars0_6;
    MR_Word mode_robdd__equiv_vars__Var_9;
    MR_Word mode_robdd__equiv_vars__conv0_Var_9;

    {
      mode_robdd__equiv_vars__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_11));
    }
    {
      mode_robdd__equiv_vars__conv0_Var_9 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_11, mode_robdd__equiv_vars__TypeInfo_13_13, mode_robdd__equiv_vars__TypeInfo_13_13, mode_robdd__equiv_vars__Var0_5, (MR_Word) mode_robdd__equiv_vars__Var_8, ((MR_Box) (mode_robdd__equiv_vars__Var_7)));
    }
    mode_robdd__equiv_vars__Var_9 = (MR_Word) mode_robdd__equiv_vars__conv0_Var_9;
    mode_robdd__equiv_vars__HeadVar__4_4 = (MR_Word) mode_robdd__equiv_vars__Var_9;
    return mode_robdd__equiv_vars__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12;

    {
      mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12));
    return mode_robdd__equiv_vars__wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
  MR_Word mode_robdd__equiv_vars__A_5,
  MR_Word mode_robdd__equiv_vars__B_6,
  MR_Word mode_robdd__equiv_vars__EQVars_7)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_37;
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_39;
    MR_Word mode_robdd__equiv_vars__Var_8;
    MR_Word mode_robdd__equiv_vars__Var_16 = (MR_Word) mode_robdd__equiv_vars__EQVars_7;
    MR_Word mode_robdd__equiv_vars__Var_17;
    MR_Word mode_robdd__equiv_vars__Var_26;
    MR_Word mode_robdd__equiv_vars__Var_32;
    MR_Word mode_robdd__equiv_vars__conv0_Var_17;
    MR_Word mode_robdd__equiv_vars__conv2_Var_32;
    MR_Box mode_robdd__equiv_vars__conv3_Var_8;

    {
      mode_robdd__equiv_vars__TypeInfo_20_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
    }
    {
      mode_robdd__equiv_vars__conv0_Var_17 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__B_6, (MR_Word) mode_robdd__equiv_vars__Var_16, ((MR_Box) (mode_robdd__equiv_vars__A_5)));
    }
    mode_robdd__equiv_vars__Var_17 = (MR_Word) mode_robdd__equiv_vars__conv0_Var_17;
    {
      mode_robdd__equiv_vars__TypeInfo_22_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_37));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_37));
    }
    {
      mode_robdd__equiv_vars__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_26, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_2_3_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_26, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
    }
    {
      mode_robdd__equiv_vars__conv2_Var_32 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37);
    }
    mode_robdd__equiv_vars__Var_32 = (MR_Word) mode_robdd__equiv_vars__conv2_Var_32;
    {
      mode_robdd__equiv_vars__conv3_Var_8 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_22_39, (MR_Word) mode_robdd__equiv_vars__Var_26, (MR_Word) mode_robdd__equiv_vars__Var_17, ((MR_Box) (mode_robdd__equiv_vars__Var_32)));
    }
    mode_robdd__equiv_vars__Var_8 = ((MR_Word) mode_robdd__equiv_vars__conv3_Var_8);
    mode_robdd__equiv_vars__HeadVar__4_4 = (MR_Word) mode_robdd__equiv_vars__Var_8;
    return mode_robdd__equiv_vars__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_2;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__2_10;

    {
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__2_10 = mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1));
    }
    mode_robdd__equiv_vars__wrapper_arg_2 = ((MR_Box) (mode_robdd__equiv_vars__conv0_LambdaHeadVar__2_10));
    return mode_robdd__equiv_vars__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
  MR_Word mode_robdd__equiv_vars__EQVars_4,
  MR_Word mode_robdd__equiv_vars__Robdd_5)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
    MR_Word mode_robdd__equiv_vars__TypeInfo_14_14;
    MR_Word mode_robdd__equiv_vars__Var_7 = (MR_Word) mode_robdd__equiv_vars__EQVars_4;

    {
      mode_robdd__equiv_vars__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_14_14, mode_robdd__equiv_vars__TypeInfo_14_14, (MR_Word) mode_robdd__equiv_vars__Var_7);
    }
    if (mode_robdd__equiv_vars__succeeded)
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__Robdd_5;
    else
      {
        MR_Word mode_robdd__equiv_vars__Var_8;

        {
          mode_robdd__equiv_vars__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__remove_equiv_2_f_0_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 4) = ((MR_Box) (mode_robdd__equiv_vars__EQVars_4));
        }
        {
          mode_robdd__equiv_vars__HeadVar__3_3 = mercury__robdd__rename_vars_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__Var_8, mode_robdd__equiv_vars__Robdd_5);
        }
      }
    return mode_robdd__equiv_vars__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_6,
  MR_Word mode_robdd__equiv_vars__Robdd_3,
  MR_Word * mode_robdd__equiv_vars__LeaderMap_4)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__Var_5;

    {
      mode_robdd__equiv_vars__Var_5 = mercury__robdd__equivalent_vars_1_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_6, mode_robdd__equiv_vars__Robdd_3);
    }
    mode_robdd__equiv_vars__succeeded = ((MR_tag((MR_Word) mode_robdd__equiv_vars__Var_5)) == (MR_mktag((MR_Integer) 1)));
    if (mode_robdd__equiv_vars__succeeded)
      *mode_robdd__equiv_vars__LeaderMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__Var_5, (MR_Integer) 0)));
    return mode_robdd__equiv_vars__succeeded;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_5,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_6)
{
  {
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_22;
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__6_24;

    {
      mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_22, ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_5), &mode_robdd__equiv_vars__conv0_LambdaHeadVar__6_24);
    }
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_22));
    *mode_robdd__equiv_vars__wrapper_arg_6 = ((MR_Box) (mode_robdd__equiv_vars__conv0_LambdaHeadVar__6_24));
  }
}

void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
  MR_Word mode_robdd__equiv_vars__E_6,
  MR_Word mode_robdd__equiv_vars__True0_7,
  MR_Word * mode_robdd__equiv_vars__True_8,
  MR_Word mode_robdd__equiv_vars__False0_9,
  MR_Word * mode_robdd__equiv_vars__False_10)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__TypeInfo_49_49;
    MR_Word mode_robdd__equiv_vars__TypeInfo_51_51;
    MR_Word mode_robdd__equiv_vars__Var_17;
    MR_Word mode_robdd__equiv_vars__Var_18;
    MR_Box mode_robdd__equiv_vars__conv3_True_8;
    MR_Box mode_robdd__equiv_vars__conv2_False_10;

    {
      mode_robdd__equiv_vars__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__label_5_p_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
    }
    mode_robdd__equiv_vars__Var_18 = (MR_Word) mode_robdd__equiv_vars__E_6;
    {
      mode_robdd__equiv_vars__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_49_49, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
    }
    {
      mode_robdd__equiv_vars__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_51_51, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_51_51, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_49_49));
    }
    {
      mercury__map__foldl2_6_p_0(mode_robdd__equiv_vars__TypeInfo_49_49, mode_robdd__equiv_vars__TypeInfo_49_49, mode_robdd__equiv_vars__TypeInfo_51_51, mode_robdd__equiv_vars__TypeInfo_51_51, (MR_Word) mode_robdd__equiv_vars__Var_17, (MR_Word) mode_robdd__equiv_vars__Var_18, ((MR_Box) (mode_robdd__equiv_vars__True0_7)), &mode_robdd__equiv_vars__conv3_True_8, ((MR_Box) (mode_robdd__equiv_vars__False0_9)), &mode_robdd__equiv_vars__conv2_False_10);
    }
    *mode_robdd__equiv_vars__True_8 = ((MR_Word) mode_robdd__equiv_vars__conv3_True_8);
    *mode_robdd__equiv_vars__False_10 = ((MR_Word) mode_robdd__equiv_vars__conv2_False_10);
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4)
{
  {
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Tuple mode_robdd__equiv_vars__conv2_HeadVar__4_4;

    {
      mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Tuple) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv2_HeadVar__4_4);
    }
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_4;

    {
      mode_robdd__equiv_vars__conv0_HeadVar__4_4 = mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__4_4));
    return mode_robdd__equiv_vars__wrapper_arg_3;
  }
}

void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
  MR_Word * mode_robdd__equiv_vars__Changed_6,
  MR_Word mode_robdd__equiv_vars__Vars0_7,
  MR_Word * mode_robdd__equiv_vars__Vars_8,
  MR_Word mode_robdd__equiv_vars__EQVars0_9,
  MR_Word * mode_robdd__equiv_vars__EQVars_10)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;

    {
      MR_Word mode_robdd__equiv_vars__TypeInfo_22_22;

      {
        mode_robdd__equiv_vars__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
      }
      {
        mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_22_22, (MR_Word) mode_robdd__equiv_vars__Vars0_7);
      }
    }
    if (!(mode_robdd__equiv_vars__succeeded))
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_5_44;
        MR_Word mode_robdd__equiv_vars__LM_42 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;

        {
          mode_robdd__equiv_vars__TypeInfo_5_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_44, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
        }
        {
          mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_44, mode_robdd__equiv_vars__TypeInfo_5_44, (MR_Word) mode_robdd__equiv_vars__LM_42);
        }
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        *mode_robdd__equiv_vars__Vars_8 = mode_robdd__equiv_vars__Vars0_7;
        *mode_robdd__equiv_vars__EQVars_10 = mode_robdd__equiv_vars__EQVars0_9;
        *mode_robdd__equiv_vars__Changed_6 = (MR_Integer) 0;
      }
    else
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_26;
        MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
        MR_Word mode_robdd__equiv_vars__TypeInfo_38_38;
        MR_Word mode_robdd__equiv_vars__TypeInfo_41_41;
        MR_Word mode_robdd__equiv_vars__Vars1_11;
        MR_Word mode_robdd__equiv_vars__LeaderMap0_12;
        MR_Word mode_robdd__equiv_vars__LeaderMap_13;
        MR_Word mode_robdd__equiv_vars__Var_14;
        MR_Word mode_robdd__equiv_vars__Var_16;
        MR_Tuple mode_robdd__equiv_vars__Var_17;
        MR_Tuple mode_robdd__equiv_vars__Var_18;
        MR_Box mode_robdd__equiv_vars__conv1_Vars1_11;
        MR_Box mode_robdd__equiv_vars__conv3_Var_18;

        {
          mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
        }
        {
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
        }
        {
          mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
        }
        {
          mode_robdd__equiv_vars__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_14, 4) = ((MR_Box) (mode_robdd__equiv_vars__EQVars0_9));
        }
        {
          mode_robdd__equiv_vars__conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_20, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, (MR_Word) mode_robdd__equiv_vars__Var_14, mode_robdd__equiv_vars__Vars0_7, ((MR_Box) (mode_robdd__equiv_vars__Vars0_7)));
        }
        mode_robdd__equiv_vars__Vars1_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_Vars1_11);
        mode_robdd__equiv_vars__LeaderMap0_12 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;
        {
          mode_robdd__equiv_vars__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[3]));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
        }
        {
          mode_robdd__equiv_vars__Var_17 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars1_11));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__LeaderMap0_12));
        }
        {
          mode_robdd__equiv_vars__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
        }
        {
          mode_robdd__equiv_vars__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 1) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 2) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_28_28));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 4) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_38_38));
        }
        {
          mercury__map__foldl_4_p_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_41_41, (MR_Word) mode_robdd__equiv_vars__Var_16, (MR_Word) mode_robdd__equiv_vars__LeaderMap0_12, ((MR_Box) (mode_robdd__equiv_vars__Var_17)), &mode_robdd__equiv_vars__conv3_Var_18);
        }
        mode_robdd__equiv_vars__Var_18 = ((MR_Tuple) mode_robdd__equiv_vars__conv3_Var_18);
        *mode_robdd__equiv_vars__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_18, (MR_Integer) 0)));
        *mode_robdd__equiv_vars__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_18, (MR_Integer) 1)));
        mode_robdd__equiv_vars__LeaderMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_18, (MR_Integer) 2)));
        *mode_robdd__equiv_vars__EQVars_10 = (MR_Word) mode_robdd__equiv_vars__LeaderMap_13;
      }
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__3_15;

    {
      mode_robdd__equiv_vars__conv3_LambdaHeadVar__3_15 = mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv3_LambdaHeadVar__3_15));
    return mode_robdd__equiv_vars__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
  MR_Word mode_robdd__equiv_vars__P_4,
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_20;
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_22;
    MR_Word mode_robdd__equiv_vars__LM0_5 = (MR_Word) mode_robdd__equiv_vars__HeadVar__2_2;
    MR_Word mode_robdd__equiv_vars__LM_6;
    MR_Word mode_robdd__equiv_vars__Vars_8;
    MR_Word mode_robdd__equiv_vars__Var_11;
    MR_Word mode_robdd__equiv_vars__Var_12;
    MR_Word mode_robdd__equiv_vars__conv0_Var_11;
    MR_Word mode_robdd__equiv_vars__Var_7;
    MR_Word mode_robdd__equiv_vars__conv2_Var_7;
    MR_Word mode_robdd__equiv_vars__conv1_Vars_8;
    MR_Box mode_robdd__equiv_vars__conv4_LM_6;

    {
      mode_robdd__equiv_vars__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
    }
    {
      mode_robdd__equiv_vars__conv0_Var_11 = mercury__map__keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_20, mode_robdd__equiv_vars__TypeInfo_20_20, (MR_Word) mode_robdd__equiv_vars__LM0_5);
    }
    mode_robdd__equiv_vars__Var_11 = (MR_Word) mode_robdd__equiv_vars__conv0_Var_11;
    {
      mercury__list__filter_4_p_0(mode_robdd__equiv_vars__TypeInfo_20_20, (MR_Word) mode_robdd__equiv_vars__P_4, (MR_Word) mode_robdd__equiv_vars__Var_11, &mode_robdd__equiv_vars__conv2_Var_7, &mode_robdd__equiv_vars__conv1_Vars_8);
    }
    mode_robdd__equiv_vars__Var_7 = (MR_Word) mode_robdd__equiv_vars__conv2_Var_7;
    mode_robdd__equiv_vars__Vars_8 = (MR_Word) mode_robdd__equiv_vars__conv1_Vars_8;
    {
      mode_robdd__equiv_vars__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_20));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_20));
    }
    {
      mode_robdd__equiv_vars__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__filter_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
    }
    {
      mode_robdd__equiv_vars__conv4_LM_6 = mercury__list__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_20, mode_robdd__equiv_vars__TypeInfo_22_22, (MR_Word) mode_robdd__equiv_vars__Var_12, (MR_Word) mode_robdd__equiv_vars__Vars_8, ((MR_Box) (mode_robdd__equiv_vars__LM0_5)));
    }
    mode_robdd__equiv_vars__LM_6 = ((MR_Word) mode_robdd__equiv_vars__conv4_LM_6);
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__LM_6;
    return mode_robdd__equiv_vars__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12;

    {
      mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12));
    return mode_robdd__equiv_vars__wrapper_arg_4;
  }
}

static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;

    {
      mode_robdd__equiv_vars__succeeded = mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1));
    }
    return mode_robdd__equiv_vars__succeeded;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_19,
  MR_Word mode_robdd__equiv_vars__Th_4,
  MR_Word mode_robdd__equiv_vars__E_5)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
    MR_Word mode_robdd__equiv_vars__TypeInfo_25_25;
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_43;
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_45;
    MR_Word mode_robdd__equiv_vars__LM_6;
    MR_Word mode_robdd__equiv_vars__LL0_7;
    MR_Word mode_robdd__equiv_vars__LL_10;
    MR_Word mode_robdd__equiv_vars__Var_11;
    MR_Word mode_robdd__equiv_vars__Var_12;
    MR_Word mode_robdd__equiv_vars__Var_13;
    MR_Word mode_robdd__equiv_vars__Var_32;
    MR_Word mode_robdd__equiv_vars__Var_38;
    MR_Word mode_robdd__equiv_vars__conv0_LL0_7;
    MR_Word mode_robdd__equiv_vars__conv1_LL_10;
    MR_Word mode_robdd__equiv_vars__conv2_LM_6;
    MR_Word mode_robdd__equiv_vars__conv4_Var_38;
    MR_Box mode_robdd__equiv_vars__conv5_Var_11;

    {
      mode_robdd__equiv_vars__TypeInfo_20_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_43, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_43, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
    }
    mode_robdd__equiv_vars__Var_12 = (MR_Word) mode_robdd__equiv_vars__E_5;
    {
      mode_robdd__equiv_vars__conv0_LL0_7 = mercury__map__to_assoc_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_43, mode_robdd__equiv_vars__TypeInfo_20_43, (MR_Word) mode_robdd__equiv_vars__Var_12);
    }
    mode_robdd__equiv_vars__LL0_7 = (MR_Word) mode_robdd__equiv_vars__conv0_LL0_7;
    {
      mode_robdd__equiv_vars__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_13, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_13, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_13, 4) = ((MR_Box) (mode_robdd__equiv_vars__Th_4));
    }
    {
      mode_robdd__equiv_vars__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_25_25, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_43));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_25_25, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_43));
    }
    {
      mercury__list__take_while_3_p_0(mode_robdd__equiv_vars__TypeInfo_25_25, (MR_Word) mode_robdd__equiv_vars__Var_13, (MR_Word) mode_robdd__equiv_vars__LL0_7, &mode_robdd__equiv_vars__conv1_LL_10);
    }
    mode_robdd__equiv_vars__LL_10 = (MR_Word) mode_robdd__equiv_vars__conv1_LL_10;
    {
      mode_robdd__equiv_vars__conv2_LM_6 = mercury__map__from_assoc_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_43, mode_robdd__equiv_vars__TypeInfo_20_43, (MR_Word) mode_robdd__equiv_vars__LL_10);
    }
    mode_robdd__equiv_vars__LM_6 = (MR_Word) mode_robdd__equiv_vars__conv2_LM_6;
    {
      mode_robdd__equiv_vars__TypeInfo_22_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_45, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_45, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_43));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_45, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_43));
    }
    {
      mode_robdd__equiv_vars__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_32, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_32, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_32, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
    }
    {
      mode_robdd__equiv_vars__conv4_Var_38 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_43, mode_robdd__equiv_vars__TypeInfo_20_43);
    }
    mode_robdd__equiv_vars__Var_38 = (MR_Word) mode_robdd__equiv_vars__conv4_Var_38;
    {
      mode_robdd__equiv_vars__conv5_Var_11 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_43, mode_robdd__equiv_vars__TypeInfo_20_43, mode_robdd__equiv_vars__TypeInfo_22_45, (MR_Word) mode_robdd__equiv_vars__Var_32, (MR_Word) mode_robdd__equiv_vars__LM_6, ((MR_Box) (mode_robdd__equiv_vars__Var_38)));
    }
    mode_robdd__equiv_vars__Var_11 = ((MR_Word) mode_robdd__equiv_vars__conv5_Var_11);
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__Var_11;
    return mode_robdd__equiv_vars__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv4_LambdaHeadVar__3_20;

    {
      mode_robdd__equiv_vars__conv4_LambdaHeadVar__3_20 = mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv4_LambdaHeadVar__3_20));
    return mode_robdd__equiv_vars__wrapper_arg_3;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
  void * mode_robdd__equiv_vars__env_ptr_arg)
{
  {
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s * mode_robdd__equiv_vars__env_ptr = (struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s *) mode_robdd__equiv_vars__env_ptr_arg;

    *((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29));
    {
      ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont)((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Cont mode_robdd__equiv_vars__cont,
  void * mode_robdd__equiv_vars__cont_env_ptr)
{
  {
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s mode_robdd__equiv_vars__env;

    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1 = mode_robdd__equiv_vars__wrapper_arg_1;
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont = mode_robdd__equiv_vars__cont;
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr = mode_robdd__equiv_vars__cont_env_ptr;
    {
      MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;

      {
        mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 5))), &(mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29, mode_robdd__equiv_vars__delete_2_f_0_1, &mode_robdd__equiv_vars__env);
      }
    }
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
  MR_Word mode_robdd__equiv_vars__E0_4,
  MR_Word mode_robdd__equiv_vars__V_5)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__E_6;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_45;
    MR_Word mode_robdd__equiv_vars__L_7;
    MR_Word mode_robdd__equiv_vars__Var_43 = (MR_Word) mode_robdd__equiv_vars__E0_4;
    MR_Box mode_robdd__equiv_vars__conv0_L_7;

    {
      mode_robdd__equiv_vars__TypeInfo_9_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_45, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_45, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__V_5, (MR_Word) mode_robdd__equiv_vars__Var_43, &mode_robdd__equiv_vars__conv0_L_7);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__L_7 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_7);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        MR_Word mode_robdd__equiv_vars__Var_38 = (MR_Word) mode_robdd__equiv_vars__E0_4;

        {
          mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__L_7, mode_robdd__equiv_vars__V_5);
        }
        if (mode_robdd__equiv_vars__succeeded)
          {
            MR_Word mode_robdd__equiv_vars__M0_8;
            MR_Word mode_robdd__equiv_vars__Vars_9;
            MR_Word mode_robdd__equiv_vars__Var_16;
            MR_Word mode_robdd__equiv_vars__conv1_M0_8;
            MR_Word mode_robdd__equiv_vars__conv3_Vars_9;
            MR_Word mode_robdd__equiv_vars__NewLeader_10;
            MR_Word mode_robdd__equiv_vars__Var_11;

            {
              mode_robdd__equiv_vars__conv1_M0_8 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__Var_38, ((MR_Box) (mode_robdd__equiv_vars__V_5)));
            }
            mode_robdd__equiv_vars__M0_8 = (MR_Word) mode_robdd__equiv_vars__conv1_M0_8;
            {
              mode_robdd__equiv_vars__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_2));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 4) = ((MR_Box) (mode_robdd__equiv_vars__V_5));
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_16, 5) = ((MR_Box) (mode_robdd__equiv_vars__M0_8));
            }
            {
              mode_robdd__equiv_vars__conv3_Vars_9 = mercury__solutions__solutions_1_f_1(mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__Var_16);
            }
            mode_robdd__equiv_vars__Vars_9 = (MR_Word) mode_robdd__equiv_vars__conv3_Vars_9;
            mode_robdd__equiv_vars__succeeded = ((MR_tag((MR_Word) mode_robdd__equiv_vars__Vars_9)) == (MR_mktag((MR_Integer) 1)));
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__NewLeader_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__Vars_9, (MR_Integer) 0)));
                mode_robdd__equiv_vars__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__Vars_9, (MR_Integer) 1)));
                {
                  MR_Word mode_robdd__equiv_vars__TypeInfo_33_33;
                  MR_Word mode_robdd__equiv_vars__M_12;
                  MR_Word mode_robdd__equiv_vars__Var_17;
                  MR_Box mode_robdd__equiv_vars__conv5_M_12;

                  {
                    mode_robdd__equiv_vars__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_45));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_45));
                  }
                  {
                    mode_robdd__equiv_vars__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_3));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_17, 4) = ((MR_Box) (mode_robdd__equiv_vars__NewLeader_10));
                  }
                  {
                    mode_robdd__equiv_vars__conv5_M_12 = mercury__list__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_33_33, (MR_Word) mode_robdd__equiv_vars__Var_17, (MR_Word) mode_robdd__equiv_vars__Vars_9, ((MR_Box) (mode_robdd__equiv_vars__M0_8)));
                  }
                  mode_robdd__equiv_vars__M_12 = ((MR_Word) mode_robdd__equiv_vars__conv5_M_12);
                  mode_robdd__equiv_vars__E_6 = (MR_Word) mode_robdd__equiv_vars__M_12;
                }
              }
            else
              {
                {
                  mercury__require__error_1_p_0((MR_String) "mode_robdd:equiv_vars:delete: malformed leader map");
                }
              }
          }
        else
          {
            MR_Word mode_robdd__equiv_vars__Var_22;
            MR_Word mode_robdd__equiv_vars__conv6_Var_22;

            {
              mode_robdd__equiv_vars__conv6_Var_22 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__Var_38, ((MR_Box) (mode_robdd__equiv_vars__V_5)));
            }
            mode_robdd__equiv_vars__Var_22 = (MR_Word) mode_robdd__equiv_vars__conv6_Var_22;
            mode_robdd__equiv_vars__E_6 = (MR_Word) mode_robdd__equiv_vars__Var_22;
          }
      }
    else
      mode_robdd__equiv_vars__E_6 = mode_robdd__equiv_vars__E0_4;
    return mode_robdd__equiv_vars__E_6;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__difference_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_10,
  MR_Word mode_robdd__equiv_vars__EA_4,
  MR_Word mode_robdd__equiv_vars__EB_5)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__E_6;
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_15;
    MR_Word mode_robdd__equiv_vars__Vars_7;
    MR_Word mode_robdd__equiv_vars__Var_8;
    MR_Word mode_robdd__equiv_vars__Var_9;
    MR_Word mode_robdd__equiv_vars__Var_13;
    MR_Word mode_robdd__equiv_vars__conv0_Vars_7;
    MR_Word mode_robdd__equiv_vars__conv1_Var_13;

    {
      mode_robdd__equiv_vars__TypeInfo_5_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_15, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_10));
    }
    mode_robdd__equiv_vars__Var_8 = (MR_Word) mode_robdd__equiv_vars__EA_4;
    {
      mode_robdd__equiv_vars__conv0_Vars_7 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_15, mode_robdd__equiv_vars__TypeInfo_5_15, (MR_Word) mode_robdd__equiv_vars__Var_8);
    }
    mode_robdd__equiv_vars__Vars_7 = (MR_Word) mode_robdd__equiv_vars__conv0_Vars_7;
    {
      mode_robdd__equiv_vars__conv1_Var_13 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_15, mode_robdd__equiv_vars__TypeInfo_5_15);
    }
    mode_robdd__equiv_vars__Var_13 = (MR_Word) mode_robdd__equiv_vars__conv1_Var_13;
    mode_robdd__equiv_vars__Var_9 = (MR_Word) mode_robdd__equiv_vars__Var_13;
    {
      mode_robdd__equiv_vars__diff_2_5_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__Vars_7, mode_robdd__equiv_vars__EA_4, mode_robdd__equiv_vars__EB_5, mode_robdd__equiv_vars__Var_9, &mode_robdd__equiv_vars__E_6);
    }
    return mode_robdd__equiv_vars__E_6;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__f_plus_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_16,
  MR_Word mode_robdd__equiv_vars__EA_4,
  MR_Word mode_robdd__equiv_vars__EB_5)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__E_6;
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_21;
    MR_Word mode_robdd__equiv_vars__VarsA_7;
    MR_Word mode_robdd__equiv_vars__VarsB_8;
    MR_Word mode_robdd__equiv_vars__Vars_9;
    MR_Word mode_robdd__equiv_vars__Var_10;
    MR_Word mode_robdd__equiv_vars__Var_11;
    MR_Word mode_robdd__equiv_vars__Var_12;
    MR_Word mode_robdd__equiv_vars__Var_13;
    MR_Word mode_robdd__equiv_vars__Var_14;
    MR_Word mode_robdd__equiv_vars__Var_15;
    MR_Word mode_robdd__equiv_vars__Var_19;
    MR_Word mode_robdd__equiv_vars__conv0_Var_10;
    MR_Word mode_robdd__equiv_vars__conv1_VarsA_7;
    MR_Word mode_robdd__equiv_vars__conv2_Var_12;
    MR_Word mode_robdd__equiv_vars__conv3_VarsB_8;
    MR_Word mode_robdd__equiv_vars__conv4_Vars_9;
    MR_Word mode_robdd__equiv_vars__conv5_Var_19;

    {
      mode_robdd__equiv_vars__TypeInfo_5_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_21, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_16));
    }
    mode_robdd__equiv_vars__Var_11 = (MR_Word) mode_robdd__equiv_vars__EA_4;
    {
      mode_robdd__equiv_vars__conv0_Var_10 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__Var_11);
    }
    mode_robdd__equiv_vars__Var_10 = (MR_Word) mode_robdd__equiv_vars__conv0_Var_10;
    {
      mode_robdd__equiv_vars__conv1_VarsA_7 = mercury__set__sorted_list_to_set_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__Var_10);
    }
    mode_robdd__equiv_vars__VarsA_7 = (MR_Word) mode_robdd__equiv_vars__conv1_VarsA_7;
    mode_robdd__equiv_vars__Var_13 = (MR_Word) mode_robdd__equiv_vars__EB_5;
    {
      mode_robdd__equiv_vars__conv2_Var_12 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__Var_13);
    }
    mode_robdd__equiv_vars__Var_12 = (MR_Word) mode_robdd__equiv_vars__conv2_Var_12;
    {
      mode_robdd__equiv_vars__conv3_VarsB_8 = mercury__set__sorted_list_to_set_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__Var_12);
    }
    mode_robdd__equiv_vars__VarsB_8 = (MR_Word) mode_robdd__equiv_vars__conv3_VarsB_8;
    {
      mode_robdd__equiv_vars__Var_14 = mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_16, mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__VarsA_7, mode_robdd__equiv_vars__VarsB_8);
    }
    {
      mode_robdd__equiv_vars__conv4_Vars_9 = mercury__set__to_sorted_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__Var_14);
    }
    mode_robdd__equiv_vars__Vars_9 = (MR_Word) mode_robdd__equiv_vars__conv4_Vars_9;
    {
      mode_robdd__equiv_vars__conv5_Var_19 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21);
    }
    mode_robdd__equiv_vars__Var_19 = (MR_Word) mode_robdd__equiv_vars__conv5_Var_19;
    mode_robdd__equiv_vars__Var_15 = (MR_Word) mode_robdd__equiv_vars__Var_19;
    {
      mode_robdd__equiv_vars__disj_2_5_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_16, mode_robdd__equiv_vars__Vars_9, mode_robdd__equiv_vars__EA_4, mode_robdd__equiv_vars__EB_5, mode_robdd__equiv_vars__Var_15, &mode_robdd__equiv_vars__E_6);
    }
    return mode_robdd__equiv_vars__E_6;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_12;

    {
      mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_12));
    return mode_robdd__equiv_vars__wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__4_16;

    {
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__4_16 = mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv0_LambdaHeadVar__4_16));
    return mode_robdd__equiv_vars__wrapper_arg_4;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_57;
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_59;
    MR_Word mode_robdd__equiv_vars__MA_4 = (MR_Word) mode_robdd__equiv_vars__HeadVar__1_1;
    MR_Word mode_robdd__equiv_vars__MB_5 = (MR_Word) mode_robdd__equiv_vars__HeadVar__2_2;
    MR_Word mode_robdd__equiv_vars__M_6;
    MR_Word mode_robdd__equiv_vars__M1_7;
    MR_Word mode_robdd__equiv_vars__Var_12;
    MR_Word mode_robdd__equiv_vars__Var_46;
    MR_Word mode_robdd__equiv_vars__Var_52;
    MR_Box mode_robdd__equiv_vars__conv1_M1_7;
    MR_Word mode_robdd__equiv_vars__conv3_Var_52;
    MR_Box mode_robdd__equiv_vars__conv4_M_6;

    {
      mode_robdd__equiv_vars__TypeInfo_20_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_57, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_57, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
    }
    {
      mode_robdd__equiv_vars__TypeInfo_22_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_57));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_57));
    }
    {
      mode_robdd__equiv_vars__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_12, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
    }
    {
      mode_robdd__equiv_vars__conv1_M1_7 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_22_59, (MR_Word) mode_robdd__equiv_vars__Var_12, (MR_Word) mode_robdd__equiv_vars__MA_4, ((MR_Box) (mode_robdd__equiv_vars__MB_5)));
    }
    mode_robdd__equiv_vars__M1_7 = ((MR_Word) mode_robdd__equiv_vars__conv1_M1_7);
    {
      mode_robdd__equiv_vars__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_46, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_2));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_46, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
    }
    {
      mode_robdd__equiv_vars__conv3_Var_52 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57);
    }
    mode_robdd__equiv_vars__Var_52 = (MR_Word) mode_robdd__equiv_vars__conv3_Var_52;
    {
      mode_robdd__equiv_vars__conv4_M_6 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_22_59, (MR_Word) mode_robdd__equiv_vars__Var_46, (MR_Word) mode_robdd__equiv_vars__M1_7, ((MR_Box) (mode_robdd__equiv_vars__Var_52)));
    }
    mode_robdd__equiv_vars__M_6 = ((MR_Word) mode_robdd__equiv_vars__conv4_M_6);
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__M_6;
    return mode_robdd__equiv_vars__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__empty_1_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_3,
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_5;
    MR_Word mode_robdd__equiv_vars__LM_2 = (MR_Word) mode_robdd__equiv_vars__HeadVar__1_1;

    {
      mode_robdd__equiv_vars__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_3));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_5, mode_robdd__equiv_vars__TypeInfo_5_5, (MR_Word) mode_robdd__equiv_vars__LM_2);
    }
    return mode_robdd__equiv_vars__succeeded;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__det_leader_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
  MR_Word mode_robdd__equiv_vars__Var_4,
  MR_Word mode_robdd__equiv_vars__EQVars_5)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
    MR_Word mode_robdd__equiv_vars__L_6;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_12;
    MR_Word mode_robdd__equiv_vars__Var_10 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
    MR_Box mode_robdd__equiv_vars__conv0_L_6;

    {
      mode_robdd__equiv_vars__TypeInfo_9_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_7));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__TypeInfo_9_12, mode_robdd__equiv_vars__TypeInfo_9_12, mode_robdd__equiv_vars__Var_4, (MR_Word) mode_robdd__equiv_vars__Var_10, &mode_robdd__equiv_vars__conv0_L_6);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__L_6 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_6);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__L_6;
    else
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__Var_4;
    return mode_robdd__equiv_vars__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__leader_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
  MR_Word mode_robdd__equiv_vars__Var_4,
  MR_Word mode_robdd__equiv_vars__EQVars_5,
  MR_Word * mode_robdd__equiv_vars__HeadVar__3_3)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_9;
    MR_Word mode_robdd__equiv_vars__Var_6 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
    MR_Box mode_robdd__equiv_vars__conv0_HeadVar__3_3;

    {
      mode_robdd__equiv_vars__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_9, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_7));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__Var_4, (MR_Word) mode_robdd__equiv_vars__Var_6, &mode_robdd__equiv_vars__conv0_HeadVar__3_3);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        *mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__3_3);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    return mode_robdd__equiv_vars__succeeded;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
  MR_Word mode_robdd__equiv_vars__EQVars_4,
  MR_Word mode_robdd__equiv_vars__VA_5,
  MR_Word mode_robdd__equiv_vars__VB_6)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;

    {
      mode_robdd__equiv_vars__succeeded = mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__EQVars_4, mode_robdd__equiv_vars__VA_5, mode_robdd__equiv_vars__VB_6);
    }
    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
    return mode_robdd__equiv_vars__succeeded;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_10,
  MR_Word mode_robdd__equiv_vars__EQVars_1,
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2,
  MR_Word mode_robdd__equiv_vars__HeadVar__3_3)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;

    {
      mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__HeadVar__3_3, mode_robdd__equiv_vars__HeadVar__2_2);
    }
    if (!(mode_robdd__equiv_vars__succeeded))
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_9_25;
        MR_Word mode_robdd__equiv_vars__Var_9;
        MR_Word mode_robdd__equiv_vars__Var_11;
        MR_Word mode_robdd__equiv_vars__Var_18 = (MR_Word) mode_robdd__equiv_vars__EQVars_1;
        MR_Word mode_robdd__equiv_vars__Var_23;
        MR_Box mode_robdd__equiv_vars__conv0_Var_9;
        MR_Box mode_robdd__equiv_vars__conv1_Var_11;

        {
          mode_robdd__equiv_vars__TypeInfo_9_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_25, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_10));
        }
        {
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__HeadVar__2_2, (MR_Word) mode_robdd__equiv_vars__Var_18, &mode_robdd__equiv_vars__conv0_Var_9);
        }
        if (mode_robdd__equiv_vars__succeeded)
          {
            mode_robdd__equiv_vars__Var_9 = ((MR_Word) mode_robdd__equiv_vars__conv0_Var_9);
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
          }
        if (mode_robdd__equiv_vars__succeeded)
          {
            mode_robdd__equiv_vars__Var_23 = (MR_Word) mode_robdd__equiv_vars__EQVars_1;
            {
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__HeadVar__3_3, (MR_Word) mode_robdd__equiv_vars__Var_23, &mode_robdd__equiv_vars__conv1_Var_11);
            }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__Var_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_Var_11);
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
              }
            if (mode_robdd__equiv_vars__succeeded)
              {
                mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__Var_9, mode_robdd__equiv_vars__Var_11);
              }
          }
      }
    return mode_robdd__equiv_vars__succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv2_EQVars_8;

    {
      mode_robdd__equiv_vars__conv2_EQVars_8 = mode_robdd__equiv_vars__add_equality_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv2_EQVars_8));
    return mode_robdd__equiv_vars__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
  MR_Word mode_robdd__equiv_vars__Vars0_4,
  MR_Word mode_robdd__equiv_vars__EQVars_5)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_13;
    MR_Word mode_robdd__equiv_vars__Var_6;
    MR_Word mode_robdd__equiv_vars__Vars_7;
    MR_Word mode_robdd__equiv_vars__TypeInfo_11_11;
    MR_Box mode_robdd__equiv_vars__conv1_Var_6;
    MR_Word mode_robdd__equiv_vars__conv0_Vars_7;

    {
      mode_robdd__equiv_vars__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
    }
    {
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_11_11));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, &mode_robdd__equiv_vars__conv1_Var_6, (MR_Word) mode_robdd__equiv_vars__Vars0_4, &mode_robdd__equiv_vars__conv0_Vars_7);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__Var_6 = ((MR_Word) mode_robdd__equiv_vars__conv1_Var_6);
        mode_robdd__equiv_vars__Vars_7 = (MR_Word) mode_robdd__equiv_vars__conv0_Vars_7;
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        MR_Word mode_robdd__equiv_vars__TypeInfo_19_19;
        MR_Word mode_robdd__equiv_vars__Var_8;
        MR_Box mode_robdd__equiv_vars__conv3_HeadVar__3_3;

        {
          mode_robdd__equiv_vars__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_19_19, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_equiv_vars_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
        }
        {
          mode_robdd__equiv_vars__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equalities_2_f_0_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_8, 4) = ((MR_Box) (mode_robdd__equiv_vars__Var_6));
        }
        {
          mode_robdd__equiv_vars__conv3_HeadVar__3_3 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeInfo_19_19, mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, (MR_Word) mode_robdd__equiv_vars__Var_8, mode_robdd__equiv_vars__Vars_7, ((MR_Box) (mode_robdd__equiv_vars__EQVars_5)));
        }
        mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv3_HeadVar__3_3);
      }
    else
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__EQVars_5;
    return mode_robdd__equiv_vars__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
  MR_Box mode_robdd__equiv_vars__closure_arg,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
    MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12;

    {
      mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12));
    return mode_robdd__equiv_vars__wrapper_arg_4;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_19,
  MR_Word mode_robdd__equiv_vars__VarA_5,
  MR_Word mode_robdd__equiv_vars__VarB_6,
  MR_Word mode_robdd__equiv_vars__EQVars0_7)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__EQVars_8;
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_32;
    MR_Word mode_robdd__equiv_vars__LeaderA_9;
    MR_Word mode_robdd__equiv_vars__Var_30 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
    MR_Box mode_robdd__equiv_vars__conv0_LeaderA_9;

    {
      mode_robdd__equiv_vars__TypeInfo_9_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_32, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
    }
    {
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarA_5, (MR_Word) mode_robdd__equiv_vars__Var_30, &mode_robdd__equiv_vars__conv0_LeaderA_9);
    }
    if (mode_robdd__equiv_vars__succeeded)
      {
        mode_robdd__equiv_vars__LeaderA_9 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderA_9);
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
      }
    if (mode_robdd__equiv_vars__succeeded)
      {
        MR_Word mode_robdd__equiv_vars__LeaderB_10;
        MR_Word mode_robdd__equiv_vars__Var_35 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
        MR_Box mode_robdd__equiv_vars__conv1_LeaderB_10;

        {
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__Var_35, &mode_robdd__equiv_vars__conv1_LeaderB_10);
        }
        if (mode_robdd__equiv_vars__succeeded)
          {
            mode_robdd__equiv_vars__LeaderB_10 = ((MR_Word) mode_robdd__equiv_vars__conv1_LeaderB_10);
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
          }
        if (mode_robdd__equiv_vars__succeeded)
          {
            MR_Word mode_robdd__equiv_vars__R_11;

            {
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_11, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__LeaderB_10);
            }
            switch (mode_robdd__equiv_vars__R_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word mode_robdd__equiv_vars__TypeInfo_22_71;
                  MR_Word mode_robdd__equiv_vars__Var_41;
                  MR_Word mode_robdd__equiv_vars__Var_48 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
                  MR_Word mode_robdd__equiv_vars__Var_49;
                  MR_Word mode_robdd__equiv_vars__Var_58;
                  MR_Word mode_robdd__equiv_vars__Var_64;
                  MR_Word mode_robdd__equiv_vars__conv2_Var_49;
                  MR_Word mode_robdd__equiv_vars__conv4_Var_64;
                  MR_Box mode_robdd__equiv_vars__conv5_Var_41;

                  {
                    mode_robdd__equiv_vars__conv2_Var_49 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__LeaderB_10, (MR_Word) mode_robdd__equiv_vars__Var_48, ((MR_Box) (mode_robdd__equiv_vars__LeaderA_9)));
                  }
                  mode_robdd__equiv_vars__Var_49 = (MR_Word) mode_robdd__equiv_vars__conv2_Var_49;
                  {
                    mode_robdd__equiv_vars__TypeInfo_22_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_32));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_32));
                  }
                  {
                    mode_robdd__equiv_vars__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_58, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_58, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_3_f_0_1));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__Var_58, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
                  }
                  {
                    mode_robdd__equiv_vars__conv4_Var_64 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32);
                  }
                  mode_robdd__equiv_vars__Var_64 = (MR_Word) mode_robdd__equiv_vars__conv4_Var_64;
                  {
                    mode_robdd__equiv_vars__conv5_Var_41 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_22_71, (MR_Word) mode_robdd__equiv_vars__Var_58, (MR_Word) mode_robdd__equiv_vars__Var_49, ((MR_Box) (mode_robdd__equiv_vars__Var_64)));
                  }
                  mode_robdd__equiv_vars__Var_41 = ((MR_Word) mode_robdd__equiv_vars__conv5_Var_41);
                  mode_robdd__equiv_vars__EQVars_8 = (MR_Word) mode_robdd__equiv_vars__Var_41;
                }
                break;
              case (MR_Integer) 0:
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
                break;
              case (MR_Integer) 2:
                {
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__LeaderB_10, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__EQVars0_7);
                }
                break;
            }
          }
        else
          {
            MR_Word mode_robdd__equiv_vars__R_14;

            {
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_14, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__VarB_6);
            }
            switch (mode_robdd__equiv_vars__R_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word mode_robdd__equiv_vars__Var_83 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
                  MR_Word mode_robdd__equiv_vars__Var_84;
                  MR_Word mode_robdd__equiv_vars__conv6_Var_84;

                  {
                    mode_robdd__equiv_vars__conv6_Var_84 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__Var_83, ((MR_Box) (mode_robdd__equiv_vars__LeaderA_9)));
                  }
                  mode_robdd__equiv_vars__Var_84 = (MR_Word) mode_robdd__equiv_vars__conv6_Var_84;
                  mode_robdd__equiv_vars__EQVars_8 = (MR_Word) mode_robdd__equiv_vars__Var_84;
                }
                break;
              case (MR_Integer) 0:
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
                break;
              case (MR_Integer) 2:
                {
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__EQVars0_7);
                }
                break;
            }
          }
      }
    else
      {
        MR_Word mode_robdd__equiv_vars__LeaderB_17;
        MR_Word mode_robdd__equiv_vars__TypeInfo_9_92;
        MR_Word mode_robdd__equiv_vars__Var_90 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
        MR_Box mode_robdd__equiv_vars__conv7_LeaderB_17;

        {
          mode_robdd__equiv_vars__TypeInfo_9_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_92, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_92, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
        }
        {
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_92, mode_robdd__equiv_vars__TypeInfo_9_92, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__Var_90, &mode_robdd__equiv_vars__conv7_LeaderB_17);
        }
        if (mode_robdd__equiv_vars__succeeded)
          {
            mode_robdd__equiv_vars__LeaderB_17 = ((MR_Word) mode_robdd__equiv_vars__conv7_LeaderB_17);
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
          }
        if (mode_robdd__equiv_vars__succeeded)
          {
            MR_Word mode_robdd__equiv_vars__R_15;

            {
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_15, mode_robdd__equiv_vars__LeaderB_17, mode_robdd__equiv_vars__VarA_5);
            }
            switch (mode_robdd__equiv_vars__R_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__LeaderB_17);
                }
                break;
              case (MR_Integer) 0:
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
                break;
              case (MR_Integer) 2:
                {
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__LeaderB_17, mode_robdd__equiv_vars__EQVars0_7);
                }
                break;
            }
          }
        else
          {
            MR_Word mode_robdd__equiv_vars__R_16;

            {
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_16, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__VarB_6);
            }
            switch (mode_robdd__equiv_vars__R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word mode_robdd__equiv_vars__Var_13;

                  {
                    mode_robdd__equiv_vars__Var_13 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__VarA_5);
                  }
                  {
                    mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__Var_13, mode_robdd__equiv_vars__VarA_5);
                  }
                }
                break;
              case (MR_Integer) 0:
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mode_robdd__equiv_vars__Var_12;

                  {
                    mode_robdd__equiv_vars__Var_12 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__VarB_6);
                  }
                  {
                    mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__Var_12, mode_robdd__equiv_vars__VarB_6);
                  }
                }
                break;
            }
          }
      }
    return mode_robdd__equiv_vars__EQVars_8;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__init_equiv_vars_0_f_0(
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_3)
{
  {
    MR_bool mode_robdd__equiv_vars__succeeded;
    MR_Word mode_robdd__equiv_vars__HeadVar__1_1;
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_5;
    MR_Word mode_robdd__equiv_vars__Var_2;
    MR_Word mode_robdd__equiv_vars__conv0_Var_2;

    {
      mode_robdd__equiv_vars__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_3));
    }
    {
      mode_robdd__equiv_vars__conv0_Var_2 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_5, mode_robdd__equiv_vars__TypeInfo_5_5);
    }
    mode_robdd__equiv_vars__Var_2 = (MR_Word) mode_robdd__equiv_vars__conv0_Var_2;
    mode_robdd__equiv_vars__HeadVar__1_1 = (MR_Word) mode_robdd__equiv_vars__Var_2;
    return mode_robdd__equiv_vars__HeadVar__1_1;
  }
}

void mercury__mode_robdd__equiv_vars__init(void)
{
}

void mercury__mode_robdd__equiv_vars__init_type_tables(void)
{
}

void mercury__mode_robdd__equiv_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mode_robdd__equiv_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mode_robdd.equiv_vars. */
