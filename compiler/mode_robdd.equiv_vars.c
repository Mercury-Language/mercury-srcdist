/*
** Automatically generated from `mode_robdd.equiv_vars.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 284 "mode_robdd.equiv_vars.m"
struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0_s {
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__HeadVar__4_29;
#line 284 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__cont;
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__cont_env_ptr;
#line 284 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__conv0_HeadVar__4_29;
#line 284 "mode_robdd.equiv_vars.m"
};

#line 284 "mode_robdd.equiv_vars.m"
struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s {
#line 284 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1;
#line 284 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont;
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr;
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29;
#line 284 "mode_robdd.equiv_vars.m"
};


#line 156 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__pseudo_1;

#line 159 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 162 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1;

#line 165 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 168 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 171 "mode_robdd.equiv_vars.c"
static const MR_VA_PseudoTypeInfo_Struct3 mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 174 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 177 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 180 "mode_robdd.equiv_vars.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 183 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 322 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4);

#line 319 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 327 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7);

#line 193 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__193__1_4_f_0(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_9,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_10,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_11);

#line 376 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__376__1_3_f_0(
#line 376 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 376 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 376 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_9);

#line 360 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__360__1_7_p_0(
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_19,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_20,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_21,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_22,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__6_23,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__7_24);

#line 311 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__311__1_3_f_0(
#line 311 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_13,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_14);

#line 303 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__303__1_3_p_0(
#line 303 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 303 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Th_4,
#line 303 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_15);

#line 286 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__286__1_4_f_0(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__NewLeader_10,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_18,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_19);

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_1(
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg);

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0(
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_5,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__M0_8,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__4_29,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr);

#line 175 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_53_95_95_49_4_f_0(
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_13,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_14,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_15);

#line 338 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
#line 338 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_13,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_5,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Leader_6,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Tuple mode_robdd__equiv_vars__HeadVar__3_3,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Tuple * mode_robdd__equiv_vars__HeadVar__4_4);

#line 327 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7);

#line 257 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10);

#line 248 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5);

#line 218 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10);

#line 209 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5);

#line 167 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_11,
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var0_5,
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_6,
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_7);

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 143 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__A_5,
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__B_6,
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_7);

#line 376 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
#line 376 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 376 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1);

#line 355 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_5,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_6);

#line 322 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4);

#line 319 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 311 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
#line 311 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 303 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
#line 303 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 303 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1);

#line 286 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg);

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
#line 284 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_1,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr);

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 175 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 151 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
#line 151 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 151 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 151 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 840 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 848 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

#line 857 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 865 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

#line 874 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

#line 882 "mode_robdd.equiv_vars.c"
static const MR_VA_PseudoTypeInfo_Struct3 mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 893 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 901 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 909 "mode_robdd.equiv_vars.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 917 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 36 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 36 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_4,
#line 36 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 36 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__3_3)
#line 36 "mode_robdd.equiv_vars.m"
{
#line 163 "mode_robdd.equiv_vars.m"
  {
#line 163 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_9 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_6_6 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_HeadVar__3_3;

#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__Var_4, mode_robdd__equiv_vars__V_6_6, &mode_robdd__equiv_vars__conv0_HeadVar__3_3);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__3_3);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 163 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 163 "mode_robdd.equiv_vars.m"
  }
#line 36 "mode_robdd.equiv_vars.m"
}

#line 322 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4)
#line 322 "mode_robdd.equiv_vars.m"
{
#line 322 "mode_robdd.equiv_vars.m"
  {
#line 322 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 322 "mode_robdd.equiv_vars.m"
    MR_Tuple mode_robdd__equiv_vars__conv2_HeadVar__4_4;

#line 322 "mode_robdd.equiv_vars.m"
    {
#line 322 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Tuple) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv2_HeadVar__4_4);
    }
#line 322 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_HeadVar__4_4));
#line 322 "mode_robdd.equiv_vars.m"
  }
#line 322 "mode_robdd.equiv_vars.m"
}

#line 319 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 319 "mode_robdd.equiv_vars.m"
{
#line 319 "mode_robdd.equiv_vars.m"
  {
#line 319 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 319 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 319 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_4;

#line 319 "mode_robdd.equiv_vars.m"
    {
#line 319 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__4_4 = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 319 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__4_4));
#line 319 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 319 "mode_robdd.equiv_vars.m"
  }
#line 319 "mode_robdd.equiv_vars.m"
}

#line 56 "mode_robdd.equiv_vars.m"
void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Changed_6,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vars0_7,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Vars_8,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_9,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__EQVars_10)
#line 56 "mode_robdd.equiv_vars.m"
{
#line 318 "mode_robdd.equiv_vars.m"
  {
#line 318 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 314 "mode_robdd.equiv_vars.m"
    {
#line 314 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__empty_1_p_0((MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0], mode_robdd__equiv_vars__Vars0_7);
    }
#line 314 "mode_robdd.equiv_vars.m"
    if (!(mode_robdd__equiv_vars__succeeded))
#line 172 "mode_robdd.equiv_vars.m"
      {
#line 172 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_5_48 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 172 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LM_46 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;

#line 172 "mode_robdd.equiv_vars.m"
        {
#line 172 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_48, mode_robdd__equiv_vars__TypeInfo_5_48, mode_robdd__equiv_vars__LM_46);
        }
#line 172 "mode_robdd.equiv_vars.m"
      }
#line 318 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 315 "mode_robdd.equiv_vars.m"
      {
#line 315 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = mode_robdd__equiv_vars__Vars0_7;
#line 316 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = mode_robdd__equiv_vars__EQVars0_9;
#line 317 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = (MR_Integer) 0;
#line 315 "mode_robdd.equiv_vars.m"
      }
#line 318 "mode_robdd.equiv_vars.m"
    else
#line 320 "mode_robdd.equiv_vars.m"
      {
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__Vars1_11;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap0_12;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap_13;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_14_14;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_17_17;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_18_18;
#line 319 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_Vars1_11;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv3_V_18_18;

#line 319 "mode_robdd.equiv_vars.m"
        {
#line 319 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[3]));
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1));
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__EQVars0_9));
#line 319 "mode_robdd.equiv_vars.m"
        }
#line 319 "mode_robdd.equiv_vars.m"
        {
#line 319 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[1], (MR_Word) &mode_robdd__equiv_vars_scalar_common_7[0], mode_robdd__equiv_vars__V_14_14, mode_robdd__equiv_vars__Vars0_7, ((MR_Box) (mode_robdd__equiv_vars__Vars0_7)));
        }
#line 319 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars1_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_Vars1_11);
#line 321 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap0_12 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;
#line 322 "mode_robdd.equiv_vars.m"
        {
#line 322 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_17_17 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) ((MR_Integer) 0));
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars1_11));
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__LeaderMap0_12));
#line 322 "mode_robdd.equiv_vars.m"
        }
#line 322 "mode_robdd.equiv_vars.m"
        {
#line 322 "mode_robdd.equiv_vars.m"
          mercury__map__foldl_4_p_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, (MR_Word) &mode_robdd__equiv_vars_scalar_common_9[0], (MR_Word) &mode_robdd__equiv_vars_scalar_common_8[0], mode_robdd__equiv_vars__LeaderMap0_12, ((MR_Box) (mode_robdd__equiv_vars__V_17_17)), &mode_robdd__equiv_vars__conv3_V_18_18);
        }
#line 322 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__V_18_18 = ((MR_Tuple) mode_robdd__equiv_vars__conv3_V_18_18);
#line 322 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 0)));
#line 322 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 1)));
#line 322 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 2)));
#line 324 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = (MR_Word) mode_robdd__equiv_vars__LeaderMap_13;
#line 320 "mode_robdd.equiv_vars.m"
      }
#line 318 "mode_robdd.equiv_vars.m"
  }
#line 56 "mode_robdd.equiv_vars.m"
}

#line 327 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7)
#line 327 "mode_robdd.equiv_vars.m"
{
#line 331 "mode_robdd.equiv_vars.m"
  {
#line 331 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 331 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 331 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_20 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 331 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_8;
#line 332 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_8;

#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, mode_robdd__equiv_vars__TypeInfo_9_20, mode_robdd__equiv_vars__TypeInfo_9_20, mode_robdd__equiv_vars__V_6, mode_robdd__equiv_vars__V_17_17, &mode_robdd__equiv_vars__conv0_L_8);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_8 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_8);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 331 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 331 "mode_robdd.equiv_vars.m"
      {
#line 331 "mode_robdd.equiv_vars.m"
        {
#line 331 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &mode_robdd__equiv_vars_scalar_common_7[0], mode_robdd__equiv_vars__Vs_7, mode_robdd__equiv_vars__L_8);
        }
#line 331 "mode_robdd.equiv_vars.m"
      }
#line 331 "mode_robdd.equiv_vars.m"
    else
#line 331 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__4_4 = mode_robdd__equiv_vars__Vs_7;
#line 331 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 331 "mode_robdd.equiv_vars.m"
  }
#line 327 "mode_robdd.equiv_vars.m"
}

#line 193 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__193__1_4_f_0(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_9,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_10,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_11)
#line 193 "mode_robdd.equiv_vars.m"
{
#line 193 "mode_robdd.equiv_vars.m"
  {
#line 193 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__5_12;

#line 194 "mode_robdd.equiv_vars.m"
    {
#line 194 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__HeadVar__3_10, mode_robdd__equiv_vars__HeadVar__2_9);
    }
#line 193 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__5_12 = mode_robdd__equiv_vars__HeadVar__4_11;
#line 193 "mode_robdd.equiv_vars.m"
    else
#line 193 "mode_robdd.equiv_vars.m"
      {
#line 193 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
#line 193 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderLeader_7;
#line 196 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv0_LeaderLeader_7;

#line 1273 "mode_robdd.equiv_vars.c"
        {
#line 1275 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1277 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1279 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 1281 "mode_robdd.equiv_vars.c"
        }
#line 196 "mode_robdd.equiv_vars.m"
        {
#line 196 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__HeadVar__3_10, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_11, &mode_robdd__equiv_vars__conv0_LeaderLeader_7);
        }
#line 196 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 196 "mode_robdd.equiv_vars.m"
          {
#line 196 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LeaderLeader_7 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderLeader_7);
#line 196 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 196 "mode_robdd.equiv_vars.m"
          }
#line 193 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 193 "mode_robdd.equiv_vars.m"
          {
#line 193 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv1_HeadVar__5_12;

#line 193 "mode_robdd.equiv_vars.m"
            {
#line 193 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv1_HeadVar__5_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__HeadVar__2_9, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_11, ((MR_Box) (mode_robdd__equiv_vars__LeaderLeader_7)));
            }
#line 193 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__HeadVar__5_12 = (MR_Word) mode_robdd__equiv_vars__conv1_HeadVar__5_12;
#line 193 "mode_robdd.equiv_vars.m"
          }
#line 193 "mode_robdd.equiv_vars.m"
        else
#line 193 "mode_robdd.equiv_vars.m"
          {
#line 193 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
#line 193 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_13_13;
#line 193 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv2_V_13_13;
#line 193 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv3_HeadVar__5_12;

#line 1327 "mode_robdd.equiv_vars.c"
            {
#line 1329 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1333 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 1335 "mode_robdd.equiv_vars.c"
            }
#line 193 "mode_robdd.equiv_vars.m"
            {
#line 193 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv2_V_13_13 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__HeadVar__2_9, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_11, ((MR_Box) (mode_robdd__equiv_vars__HeadVar__3_10)));
            }
#line 193 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__conv2_V_13_13;
#line 193 "mode_robdd.equiv_vars.m"
            {
#line 193 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv3_HeadVar__5_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__HeadVar__3_10, (MR_Word) mode_robdd__equiv_vars__V_13_13, ((MR_Box) (mode_robdd__equiv_vars__HeadVar__3_10)));
            }
#line 193 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__HeadVar__5_12 = (MR_Word) mode_robdd__equiv_vars__conv3_HeadVar__5_12;
#line 193 "mode_robdd.equiv_vars.m"
          }
#line 193 "mode_robdd.equiv_vars.m"
      }
#line 193 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__5_12;
#line 193 "mode_robdd.equiv_vars.m"
  }
#line 193 "mode_robdd.equiv_vars.m"
}

#line 376 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__376__1_3_f_0(
#line 376 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 376 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 376 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_9)
#line 376 "mode_robdd.equiv_vars.m"
{
#line 165 "mode_robdd.equiv_vars.m"
  {
#line 165 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_10;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_17;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_22;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_20_20 = (MR_Word) mode_robdd__equiv_vars__EQVars_4;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_17;

#line 1388 "mode_robdd.equiv_vars.c"
    {
#line 1390 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1392 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1394 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 1396 "mode_robdd.equiv_vars.c"
    }
#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__TypeInfo_9_22, mode_robdd__equiv_vars__TypeInfo_9_22, mode_robdd__equiv_vars__HeadVar__3_9, (MR_Word) mode_robdd__equiv_vars__V_20_20, &mode_robdd__equiv_vars__conv0_L_17);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_17 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_17);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__4_10 = mode_robdd__equiv_vars__L_17;
#line 165 "mode_robdd.equiv_vars.m"
    else
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__4_10 = mode_robdd__equiv_vars__HeadVar__3_9;
#line 165 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_10;
#line 165 "mode_robdd.equiv_vars.m"
  }
#line 376 "mode_robdd.equiv_vars.m"
}

#line 360 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__360__1_7_p_0(
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_19,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_20,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_21,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_22,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__6_23,
#line 360 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__7_24)
#line 360 "mode_robdd.equiv_vars.m"
{
#line 360 "mode_robdd.equiv_vars.m"
  {
#line 360 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 360 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_35;
#line 357 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_33_33;

#line 1456 "mode_robdd.equiv_vars.c"
    {
#line 1458 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1460 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1462 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1464 "mode_robdd.equiv_vars.c"
    }
#line 1466 "mode_robdd.equiv_vars.c"
    {
#line 1468 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1472 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1474 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_33_33));
#line 1476 "mode_robdd.equiv_vars.c"
    }
#line 357 "mode_robdd.equiv_vars.m"
    {
#line 357 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, mode_robdd__equiv_vars__HeadVar__4_21, mode_robdd__equiv_vars__HeadVar__3_20);
    }
#line 360 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 358 "mode_robdd.equiv_vars.m"
      {
#line 358 "mode_robdd.equiv_vars.m"
        {
#line 358 "mode_robdd.equiv_vars.m"
          *mode_robdd__equiv_vars__HeadVar__5_22 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, mode_robdd__equiv_vars__HeadVar__4_21, mode_robdd__equiv_vars__HeadVar__2_19);
        }
#line 359 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__HeadVar__7_24 = mode_robdd__equiv_vars__HeadVar__6_23;
#line 358 "mode_robdd.equiv_vars.m"
      }
#line 360 "mode_robdd.equiv_vars.m"
    else
#line 363 "mode_robdd.equiv_vars.m"
      {
#line 363 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_43;
#line 360 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_41_41;

#line 1505 "mode_robdd.equiv_vars.c"
        {
#line 1507 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1511 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1513 "mode_robdd.equiv_vars.c"
        }
#line 1515 "mode_robdd.equiv_vars.c"
        {
#line 1517 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1521 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1523 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_41_41));
#line 1525 "mode_robdd.equiv_vars.c"
        }
#line 360 "mode_robdd.equiv_vars.m"
        {
#line 360 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, mode_robdd__equiv_vars__HeadVar__6_23, mode_robdd__equiv_vars__HeadVar__3_20);
        }
#line 363 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 361 "mode_robdd.equiv_vars.m"
          {
#line 361 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__5_22 = mode_robdd__equiv_vars__HeadVar__4_21;
#line 362 "mode_robdd.equiv_vars.m"
            {
#line 362 "mode_robdd.equiv_vars.m"
              *mode_robdd__equiv_vars__HeadVar__7_24 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, mode_robdd__equiv_vars__HeadVar__6_23, mode_robdd__equiv_vars__HeadVar__2_19);
            }
#line 361 "mode_robdd.equiv_vars.m"
          }
#line 363 "mode_robdd.equiv_vars.m"
        else
#line 364 "mode_robdd.equiv_vars.m"
          {
#line 364 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__5_22 = mode_robdd__equiv_vars__HeadVar__4_21;
#line 365 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__7_24 = mode_robdd__equiv_vars__HeadVar__6_23;
#line 364 "mode_robdd.equiv_vars.m"
          }
#line 363 "mode_robdd.equiv_vars.m"
      }
#line 360 "mode_robdd.equiv_vars.m"
  }
#line 360 "mode_robdd.equiv_vars.m"
}

#line 311 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__311__1_3_f_0(
#line 311 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_13,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_14)
#line 311 "mode_robdd.equiv_vars.m"
{
#line 311 "mode_robdd.equiv_vars.m"
  {
#line 311 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_15;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_15;

#line 1584 "mode_robdd.equiv_vars.c"
    {
#line 1586 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1588 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1590 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 1592 "mode_robdd.equiv_vars.c"
    }
#line 311 "mode_robdd.equiv_vars.m"
    {
#line 311 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__4_15 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, (MR_Word) mode_robdd__equiv_vars__HeadVar__3_14, ((MR_Box) (mode_robdd__equiv_vars__HeadVar__2_13)));
    }
#line 311 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__4_15 = (MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__4_15;
#line 311 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_15;
#line 311 "mode_robdd.equiv_vars.m"
  }
#line 311 "mode_robdd.equiv_vars.m"
}

#line 303 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__303__1_3_p_0(
#line 303 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 303 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Th_4,
#line 303 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_15)
#line 303 "mode_robdd.equiv_vars.m"
{
#line 303 "mode_robdd.equiv_vars.m"
  {
#line 303 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_15, (MR_Integer) 0)));
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_15, (MR_Integer) 1)));
#line 304 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_27_27;

#line 304 "mode_robdd.equiv_vars.m"
    {
#line 304 "mode_robdd.equiv_vars.m"
      mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_20, &mode_robdd__equiv_vars__V_27_27, mode_robdd__equiv_vars__V_18, mode_robdd__equiv_vars__Th_4);
    }
#line 304 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = ((MR_Integer) 2 == mode_robdd__equiv_vars__V_27_27);
#line 304 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
#line 303 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 303 "mode_robdd.equiv_vars.m"
  }
#line 303 "mode_robdd.equiv_vars.m"
}

#line 286 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__286__1_4_f_0(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__NewLeader_10,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_18,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_19)
#line 286 "mode_robdd.equiv_vars.m"
{
#line 286 "mode_robdd.equiv_vars.m"
  {
#line 286 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 286 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__5_20;
#line 286 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_35_35;
#line 286 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__5_20;

#line 1670 "mode_robdd.equiv_vars.c"
    {
#line 1672 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1674 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1676 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 1678 "mode_robdd.equiv_vars.c"
    }
#line 286 "mode_robdd.equiv_vars.m"
    {
#line 286 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__5_20 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__TypeInfo_35_35, mode_robdd__equiv_vars__TypeInfo_35_35, mode_robdd__equiv_vars__HeadVar__3_18, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_19, ((MR_Box) (mode_robdd__equiv_vars__NewLeader_10)));
    }
#line 286 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__5_20 = (MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__5_20;
#line 286 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__5_20;
#line 286 "mode_robdd.equiv_vars.m"
  }
#line 286 "mode_robdd.equiv_vars.m"
}

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_1(
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg)
#line 284 "mode_robdd.equiv_vars.m"
{
#line 284 "mode_robdd.equiv_vars.m"
  {
#line 284 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0_s * mode_robdd__equiv_vars__env_ptr = (struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0_s *) mode_robdd__equiv_vars__env_ptr_arg;

#line 284 "mode_robdd.equiv_vars.m"
    *((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__HeadVar__4_29) = ((MR_Word) (mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__conv0_HeadVar__4_29);
#line 284 "mode_robdd.equiv_vars.m"
    {
#line 284 "mode_robdd.equiv_vars.m"
      ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__cont)((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__cont_env_ptr);
#line 284 "mode_robdd.equiv_vars.m"
      return;
    }
#line 284 "mode_robdd.equiv_vars.m"
  }
#line 284 "mode_robdd.equiv_vars.m"
}

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0(
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_5,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__M0_8,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__4_29,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr)
#line 284 "mode_robdd.equiv_vars.m"
{
#line 284 "mode_robdd.equiv_vars.m"
  {
#line 284 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0_s mode_robdd__equiv_vars__env;

#line 284 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__HeadVar__4_29 = mode_robdd__equiv_vars__HeadVar__4_29;
#line 284 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__cont = mode_robdd__equiv_vars__cont;
#line 284 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__cont_env_ptr = mode_robdd__equiv_vars__cont_env_ptr;
#line 284 "mode_robdd.equiv_vars.m"
    {
#line 284 "mode_robdd.equiv_vars.m"
      MR_bool mode_robdd__equiv_vars__succeeded;
#line 284 "mode_robdd.equiv_vars.m"
      MR_Word mode_robdd__equiv_vars__TypeInfo_31_31;

#line 1755 "mode_robdd.equiv_vars.c"
      {
#line 1757 "mode_robdd.equiv_vars.c"
        mode_robdd__equiv_vars__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1759 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1761 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 1763 "mode_robdd.equiv_vars.c"
      }
#line 284 "mode_robdd.equiv_vars.m"
      {
#line 284 "mode_robdd.equiv_vars.m"
        mercury__map__inverse_search_3_p_0(mode_robdd__equiv_vars__TypeInfo_31_31, mode_robdd__equiv_vars__TypeInfo_31_31, (MR_Word) mode_robdd__equiv_vars__M0_8, ((MR_Box) (mode_robdd__equiv_vars__V_5)), &(mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_env_0__conv0_HeadVar__4_29, mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0_1, &mode_robdd__equiv_vars__env);
      }
#line 284 "mode_robdd.equiv_vars.m"
    }
#line 284 "mode_robdd.equiv_vars.m"
  }
#line 284 "mode_robdd.equiv_vars.m"
}

#line 175 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_53_95_95_49_4_f_0(
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_13,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_14,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__4_15)
#line 175 "mode_robdd.equiv_vars.m"
{
#line 175 "mode_robdd.equiv_vars.m"
  {
#line 175 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 175 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__5_16;
#line 175 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
#line 175 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LeaderB_11;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_LeaderB_11;

#line 1803 "mode_robdd.equiv_vars.c"
    {
#line 1805 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1807 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1809 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 1811 "mode_robdd.equiv_vars.c"
    }
#line 176 "mode_robdd.equiv_vars.m"
    {
#line 176 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__HeadVar__2_13, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_15, &mode_robdd__equiv_vars__conv0_LeaderB_11);
    }
#line 176 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 176 "mode_robdd.equiv_vars.m"
      {
#line 176 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderB_11 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderB_11);
#line 176 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 176 "mode_robdd.equiv_vars.m"
      }
#line 175 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 175 "mode_robdd.equiv_vars.m"
      {
#line 177 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_39_39;

#line 177 "mode_robdd.equiv_vars.m"
        {
#line 177 "mode_robdd.equiv_vars.m"
          mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, &mode_robdd__equiv_vars__V_39_39, mode_robdd__equiv_vars__HeadVar__3_14, mode_robdd__equiv_vars__LeaderB_11);
        }
#line 177 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = ((MR_Integer) 1 == mode_robdd__equiv_vars__V_39_39);
#line 175 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 175 "mode_robdd.equiv_vars.m"
          {
#line 175 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv1_HeadVar__5_16;

#line 175 "mode_robdd.equiv_vars.m"
            {
#line 175 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv1_HeadVar__5_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LeaderB_11, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_15, ((MR_Box) (mode_robdd__equiv_vars__HeadVar__3_14)));
            }
#line 175 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__HeadVar__5_16 = (MR_Word) mode_robdd__equiv_vars__conv1_HeadVar__5_16;
#line 175 "mode_robdd.equiv_vars.m"
          }
#line 175 "mode_robdd.equiv_vars.m"
        else
#line 175 "mode_robdd.equiv_vars.m"
          {
#line 179 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_40_40;

#line 179 "mode_robdd.equiv_vars.m"
            {
#line 179 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, &mode_robdd__equiv_vars__V_40_40, mode_robdd__equiv_vars__LeaderB_11, mode_robdd__equiv_vars__HeadVar__3_14);
            }
#line 179 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = ((MR_Integer) 1 == mode_robdd__equiv_vars__V_40_40);
#line 175 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 175 "mode_robdd.equiv_vars.m"
              {
#line 175 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv2_HeadVar__5_16;

#line 175 "mode_robdd.equiv_vars.m"
                {
#line 175 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv2_HeadVar__5_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__HeadVar__3_14, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_15, ((MR_Box) (mode_robdd__equiv_vars__LeaderB_11)));
                }
#line 175 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__HeadVar__5_16 = (MR_Word) mode_robdd__equiv_vars__conv2_HeadVar__5_16;
#line 175 "mode_robdd.equiv_vars.m"
              }
#line 175 "mode_robdd.equiv_vars.m"
            else
#line 175 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__HeadVar__5_16 = mode_robdd__equiv_vars__HeadVar__4_15;
#line 175 "mode_robdd.equiv_vars.m"
          }
#line 175 "mode_robdd.equiv_vars.m"
      }
#line 175 "mode_robdd.equiv_vars.m"
    else
#line 175 "mode_robdd.equiv_vars.m"
      {
#line 175 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_38_38;
#line 175 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__conv3_HeadVar__5_16;

#line 1905 "mode_robdd.equiv_vars.c"
        {
#line 1907 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1909 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1911 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 1913 "mode_robdd.equiv_vars.c"
        }
#line 175 "mode_robdd.equiv_vars.m"
        {
#line 175 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv3_HeadVar__5_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_38_38, mode_robdd__equiv_vars__TypeInfo_38_38, mode_robdd__equiv_vars__HeadVar__2_13, (MR_Word) mode_robdd__equiv_vars__HeadVar__4_15, ((MR_Box) (mode_robdd__equiv_vars__HeadVar__3_14)));
        }
#line 175 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__HeadVar__5_16 = (MR_Word) mode_robdd__equiv_vars__conv3_HeadVar__5_16;
#line 175 "mode_robdd.equiv_vars.m"
      }
#line 175 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__5_16;
#line 175 "mode_robdd.equiv_vars.m"
  }
#line 175 "mode_robdd.equiv_vars.m"
}

#line 338 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
#line 338 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_13,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_5,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Leader_6,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Tuple mode_robdd__equiv_vars__HeadVar__3_3,
#line 338 "mode_robdd.equiv_vars.m"
  MR_Tuple * mode_robdd__equiv_vars__HeadVar__4_4)
#line 338 "mode_robdd.equiv_vars.m"
{
#line 343 "mode_robdd.equiv_vars.m"
  {
#line 343 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 343 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Changed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 343 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 343 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 343 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Changed_10;
#line 343 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_11;
#line 343 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_12;
#line 348 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_15_15;
#line 348 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_17;

#line 1967 "mode_robdd.equiv_vars.c"
    {
#line 1969 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1971 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1973 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_15_15, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_13));
#line 1975 "mode_robdd.equiv_vars.c"
    }
#line 1977 "mode_robdd.equiv_vars.c"
    {
#line 1979 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1981 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1983 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_13));
#line 1985 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_15_15));
#line 1987 "mode_robdd.equiv_vars.c"
    }
#line 344 "mode_robdd.equiv_vars.m"
    {
#line 344 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_13, mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, mode_robdd__equiv_vars__Vars0_8, mode_robdd__equiv_vars__Leader_6);
    }
#line 348 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 345 "mode_robdd.equiv_vars.m"
      {
#line 346 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__conv0_LM_12;

#line 345 "mode_robdd.equiv_vars.m"
        {
#line 345 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__Vars_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_13, mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, mode_robdd__equiv_vars__Vars0_8, mode_robdd__equiv_vars__Var_5);
        }
#line 346 "mode_robdd.equiv_vars.m"
        {
#line 346 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv0_LM_12 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_15_15, mode_robdd__equiv_vars__TypeInfo_15_15, (MR_Word) mode_robdd__equiv_vars__LM0_9, ((MR_Box) (mode_robdd__equiv_vars__Var_5)));
        }
#line 346 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LM_12 = (MR_Word) mode_robdd__equiv_vars__conv0_LM_12;
#line 347 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Changed_10 = (MR_Integer) 1;
#line 345 "mode_robdd.equiv_vars.m"
      }
#line 348 "mode_robdd.equiv_vars.m"
    else
#line 349 "mode_robdd.equiv_vars.m"
      {
#line 349 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars_11 = mode_robdd__equiv_vars__Vars0_8;
#line 350 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LM_12 = mode_robdd__equiv_vars__LM0_9;
#line 351 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Changed_10 = mode_robdd__equiv_vars__Changed0_7;
#line 349 "mode_robdd.equiv_vars.m"
      }
#line 343 "mode_robdd.equiv_vars.m"
    {
#line 343 "mode_robdd.equiv_vars.m"
      MR_Tuple base;
#line 343 "mode_robdd.equiv_vars.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 343 "mode_robdd.equiv_vars.m"
      *mode_robdd__equiv_vars__HeadVar__4_4 = base;
#line 343 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__Changed_10));
#line 343 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars_11));
#line 343 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__equiv_vars__LM_12));
#line 343 "mode_robdd.equiv_vars.m"
    }
#line 343 "mode_robdd.equiv_vars.m"
  }
#line 338 "mode_robdd.equiv_vars.m"
}

#line 327 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 327 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7)
#line 327 "mode_robdd.equiv_vars.m"
{
#line 331 "mode_robdd.equiv_vars.m"
  {
#line 331 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 331 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 331 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_18;
#line 331 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_8;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_16_16 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_8;

#line 2078 "mode_robdd.equiv_vars.c"
    {
#line 2080 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2082 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2084 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_18, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 2086 "mode_robdd.equiv_vars.c"
    }
#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeInfo_9_18, mode_robdd__equiv_vars__TypeInfo_9_18, mode_robdd__equiv_vars__V_6, (MR_Word) mode_robdd__equiv_vars__V_16_16, &mode_robdd__equiv_vars__conv0_L_8);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_8 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_8);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 331 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 331 "mode_robdd.equiv_vars.m"
      {
#line 331 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_13;

#line 2110 "mode_robdd.equiv_vars.c"
        {
#line 2112 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2114 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2116 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 2118 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_18));
#line 2120 "mode_robdd.equiv_vars.c"
        }
#line 331 "mode_robdd.equiv_vars.m"
        {
#line 331 "mode_robdd.equiv_vars.m"
          return mode_robdd__equiv_vars__HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, mode_robdd__equiv_vars__Vs_7, mode_robdd__equiv_vars__L_8);
        }
#line 331 "mode_robdd.equiv_vars.m"
      }
#line 331 "mode_robdd.equiv_vars.m"
    else
#line 331 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__4_4 = mode_robdd__equiv_vars__Vs_7;
#line 331 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 331 "mode_robdd.equiv_vars.m"
  }
#line 327 "mode_robdd.equiv_vars.m"
}

#line 257 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 257 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10)
#line 257 "mode_robdd.equiv_vars.m"
{
#line 261 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 261 "mode_robdd.equiv_vars.m"
    {
#line 261 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 261 "mode_robdd.equiv_vars.m"
      {
#line 261 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 261 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "mode_robdd.equiv_vars.m"
          {
#line 261 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__10_10 = mode_robdd__equiv_vars__DCG_0_9;
#line 261 "mode_robdd.equiv_vars.m"
          }
#line 261 "mode_robdd.equiv_vars.m"
        else
#line 262 "mode_robdd.equiv_vars.m"
          {
#line 262 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_46;
#line 264 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_36_36;
#line 264 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_44_44 = (MR_Word) mode_robdd__equiv_vars__EA_7;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_V_36_36;
#line 265 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_37_37;
#line 265 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_49_49;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_V_37_37;

#line 2211 "mode_robdd.equiv_vars.c"
            {
#line 2213 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2215 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2217 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_35));
#line 2219 "mode_robdd.equiv_vars.c"
            }
#line 163 "mode_robdd.equiv_vars.m"
            {
#line 163 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_44_44, &mode_robdd__equiv_vars__conv0_V_36_36);
            }
#line 163 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
              {
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_36_36 = ((MR_Word) mode_robdd__equiv_vars__conv0_V_36_36);
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
              }
#line 264 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 264 "mode_robdd.equiv_vars.m"
              {
#line 264 "mode_robdd.equiv_vars.m"
                {
#line 264 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__V_36_36);
                }
#line 264 "mode_robdd.equiv_vars.m"
                if (mode_robdd__equiv_vars__succeeded)
#line 264 "mode_robdd.equiv_vars.m"
                  {
#line 163 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_49_49 = (MR_Word) mode_robdd__equiv_vars__EB_8;
#line 163 "mode_robdd.equiv_vars.m"
                    {
#line 163 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_49_49, &mode_robdd__equiv_vars__conv1_V_37_37);
                    }
#line 163 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
                      {
#line 163 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__V_37_37 = ((MR_Word) mode_robdd__equiv_vars__conv1_V_37_37);
#line 163 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
                      }
#line 265 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 265 "mode_robdd.equiv_vars.m"
                      {
#line 265 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__V_37_37);
                      }
#line 265 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
#line 264 "mode_robdd.equiv_vars.m"
                  }
#line 264 "mode_robdd.equiv_vars.m"
              }
#line 275 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 267 "mode_robdd.equiv_vars.m"
              {
#line 267 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_1_30;
#line 267 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_2_31;
#line 267 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_55_55 = (MR_Word) mode_robdd__equiv_vars__DCG_0_9;
#line 267 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_56_56;
#line 169 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv2_V_56_56;

#line 169 "mode_robdd.equiv_vars.m"
                {
#line 169 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv2_V_56_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_55_55, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                }
#line 169 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_56_56 = (MR_Word) mode_robdd__equiv_vars__conv2_V_56_56;
#line 169 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__DCG_1_30 = (MR_Word) mode_robdd__equiv_vars__V_56_56;
#line 270 "mode_robdd.equiv_vars.m"
                if ((mode_robdd__equiv_vars__Match_6 == (MR_Integer) 0))
#line 169 "mode_robdd.equiv_vars.m"
                  {
#line 169 "mode_robdd.equiv_vars.m"
                    MR_Word mode_robdd__equiv_vars__V_64_64;
#line 169 "mode_robdd.equiv_vars.m"
                    MR_Word mode_robdd__equiv_vars__conv3_V_64_64;

#line 169 "mode_robdd.equiv_vars.m"
                    {
#line 169 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__conv3_V_64_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__L_3, (MR_Word) mode_robdd__equiv_vars__V_56_56, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                    }
#line 169 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_64_64 = (MR_Word) mode_robdd__equiv_vars__conv3_V_64_64;
#line 169 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__DCG_2_31 = (MR_Word) mode_robdd__equiv_vars__V_64_64;
#line 169 "mode_robdd.equiv_vars.m"
                  }
#line 270 "mode_robdd.equiv_vars.m"
                else
#line 270 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__DCG_2_31 = mode_robdd__equiv_vars__DCG_1_30;
#line 274 "mode_robdd.equiv_vars.m"
                /* direct tailcall eliminated */
#line 274 "mode_robdd.equiv_vars.m"
                {
#line 274 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs0_20;
#line 274 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_9 = mode_robdd__equiv_vars__DCG_2_31;

#line 274 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__DCG_0_9 = mode_robdd__equiv_vars__DCG_0__tmp_copy_9;
#line 274 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__Match_6 = (MR_Integer) 1;
#line 274 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 274 "mode_robdd.equiv_vars.m"
                }
#line 274 "mode_robdd.equiv_vars.m"
                continue;
#line 267 "mode_robdd.equiv_vars.m"
              }
#line 275 "mode_robdd.equiv_vars.m"
            else
#line 276 "mode_robdd.equiv_vars.m"
              {
#line 276 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__Vs1_28;

#line 276 "mode_robdd.equiv_vars.m"
                {
#line 276 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__diff_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__Vs0_20, &mode_robdd__equiv_vars__Vs1_28, mode_robdd__equiv_vars__L_3, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Match_6, mode_robdd__equiv_vars__EA_7, mode_robdd__equiv_vars__EB_8, mode_robdd__equiv_vars__DCG_0_9, mode_robdd__equiv_vars__HeadVar__10_10);
                }
#line 277 "mode_robdd.equiv_vars.m"
                {
#line 277 "mode_robdd.equiv_vars.m"
                  MR_Word base;
#line 277 "mode_robdd.equiv_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "mode_robdd.equiv_vars.m"
                  *mode_robdd__equiv_vars__HeadVar__2_2 = base;
#line 277 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__V_19));
#line 277 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vs1_28));
#line 277 "mode_robdd.equiv_vars.m"
                }
#line 276 "mode_robdd.equiv_vars.m"
              }
#line 262 "mode_robdd.equiv_vars.m"
          }
#line 261 "mode_robdd.equiv_vars.m"
      }
#line 261 "mode_robdd.equiv_vars.m"
      break;
#line 261 "mode_robdd.equiv_vars.m"
    }
#line 257 "mode_robdd.equiv_vars.m"
}

#line 248 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 248 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5)
#line 248 "mode_robdd.equiv_vars.m"
{
#line 251 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 251 "mode_robdd.equiv_vars.m"
    {
#line 251 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 251 "mode_robdd.equiv_vars.m"
      {
#line 251 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 251 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "mode_robdd.equiv_vars.m"
          *mode_robdd__equiv_vars__HeadVar__5_5 = mode_robdd__equiv_vars__DCG_0_4;
#line 251 "mode_robdd.equiv_vars.m"
        else
#line 252 "mode_robdd.equiv_vars.m"
          {
#line 252 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs_15;
#line 252 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__DCG_1_17;
#line 252 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19_19;
#line 252 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_20_20;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_24;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_29;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_27_27 = (MR_Word) mode_robdd__equiv_vars__EA_2;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_L_24;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_32;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_37;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_35_35;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_L_32;

#line 2452 "mode_robdd.equiv_vars.c"
            {
#line 2454 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2456 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2458 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2460 "mode_robdd.equiv_vars.c"
            }
#line 163 "mode_robdd.equiv_vars.m"
            {
#line 163 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_27_27, &mode_robdd__equiv_vars__conv0_L_24);
            }
#line 163 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
              {
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_24 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_24);
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
              }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__L_24;
#line 165 "mode_robdd.equiv_vars.m"
            else
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__V_10;
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_35_35 = (MR_Word) mode_robdd__equiv_vars__EB_3;
#line 2487 "mode_robdd.equiv_vars.c"
            {
#line 2489 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2491 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2493 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2495 "mode_robdd.equiv_vars.c"
            }
#line 163 "mode_robdd.equiv_vars.m"
            {
#line 163 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_35_35, &mode_robdd__equiv_vars__conv1_L_32);
            }
#line 163 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
              {
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_32 = ((MR_Word) mode_robdd__equiv_vars__conv1_L_32);
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
              }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__L_32;
#line 165 "mode_robdd.equiv_vars.m"
            else
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__V_10;
#line 254 "mode_robdd.equiv_vars.m"
            {
#line 254 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__diff_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__Vs0_11, &mode_robdd__equiv_vars__Vs_15, mode_robdd__equiv_vars__V_10, mode_robdd__equiv_vars__V_19_19, mode_robdd__equiv_vars__V_20_20, (MR_Integer) 0, mode_robdd__equiv_vars__EA_2, mode_robdd__equiv_vars__EB_3, mode_robdd__equiv_vars__DCG_0_4, &mode_robdd__equiv_vars__DCG_1_17);
            }
#line 255 "mode_robdd.equiv_vars.m"
            /* direct tailcall eliminated */
#line 255 "mode_robdd.equiv_vars.m"
            {
#line 255 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs_15;
#line 255 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_4 = mode_robdd__equiv_vars__DCG_1_17;

#line 255 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__DCG_0_4 = mode_robdd__equiv_vars__DCG_0__tmp_copy_4;
#line 255 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 255 "mode_robdd.equiv_vars.m"
            }
#line 255 "mode_robdd.equiv_vars.m"
            continue;
#line 252 "mode_robdd.equiv_vars.m"
          }
#line 251 "mode_robdd.equiv_vars.m"
      }
#line 251 "mode_robdd.equiv_vars.m"
      break;
#line 251 "mode_robdd.equiv_vars.m"
    }
#line 248 "mode_robdd.equiv_vars.m"
}

#line 218 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 218 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10)
#line 218 "mode_robdd.equiv_vars.m"
{
#line 222 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 222 "mode_robdd.equiv_vars.m"
    {
#line 222 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 222 "mode_robdd.equiv_vars.m"
      {
#line 222 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 222 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "mode_robdd.equiv_vars.m"
          {
#line 222 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__10_10 = mode_robdd__equiv_vars__DCG_0_9;
#line 222 "mode_robdd.equiv_vars.m"
          }
#line 222 "mode_robdd.equiv_vars.m"
        else
#line 223 "mode_robdd.equiv_vars.m"
          {
#line 223 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_46;
#line 225 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_36_36;
#line 225 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_37_37;
#line 225 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_44_44 = (MR_Word) mode_robdd__equiv_vars__EA_7;
#line 225 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_49_49;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_V_36_36;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_V_37_37;

#line 2624 "mode_robdd.equiv_vars.c"
            {
#line 2626 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2628 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2630 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_35));
#line 2632 "mode_robdd.equiv_vars.c"
            }
#line 163 "mode_robdd.equiv_vars.m"
            {
#line 163 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_44_44, &mode_robdd__equiv_vars__conv0_V_36_36);
            }
#line 163 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
              {
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_36_36 = ((MR_Word) mode_robdd__equiv_vars__conv0_V_36_36);
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
              }
#line 225 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 225 "mode_robdd.equiv_vars.m"
              {
#line 225 "mode_robdd.equiv_vars.m"
                {
#line 225 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__V_36_36);
                }
#line 225 "mode_robdd.equiv_vars.m"
                if (mode_robdd__equiv_vars__succeeded)
#line 225 "mode_robdd.equiv_vars.m"
                  {
#line 163 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_49_49 = (MR_Word) mode_robdd__equiv_vars__EB_8;
#line 163 "mode_robdd.equiv_vars.m"
                    {
#line 163 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_49_49, &mode_robdd__equiv_vars__conv1_V_37_37);
                    }
#line 163 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
                      {
#line 163 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__V_37_37 = ((MR_Word) mode_robdd__equiv_vars__conv1_V_37_37);
#line 163 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
                      }
#line 225 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 226 "mode_robdd.equiv_vars.m"
                      {
#line 226 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__V_37_37);
                      }
#line 225 "mode_robdd.equiv_vars.m"
                  }
#line 225 "mode_robdd.equiv_vars.m"
              }
#line 236 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 228 "mode_robdd.equiv_vars.m"
              {
#line 228 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_1_30;
#line 228 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_2_31;
#line 228 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_55_55 = (MR_Word) mode_robdd__equiv_vars__DCG_0_9;
#line 228 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_56_56;
#line 169 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv2_V_56_56;

#line 169 "mode_robdd.equiv_vars.m"
                {
#line 169 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv2_V_56_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_55_55, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                }
#line 169 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_56_56 = (MR_Word) mode_robdd__equiv_vars__conv2_V_56_56;
#line 169 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__DCG_1_30 = (MR_Word) mode_robdd__equiv_vars__V_56_56;
#line 231 "mode_robdd.equiv_vars.m"
                if ((mode_robdd__equiv_vars__Match_6 == (MR_Integer) 0))
#line 169 "mode_robdd.equiv_vars.m"
                  {
#line 169 "mode_robdd.equiv_vars.m"
                    MR_Word mode_robdd__equiv_vars__V_64_64;
#line 169 "mode_robdd.equiv_vars.m"
                    MR_Word mode_robdd__equiv_vars__conv3_V_64_64;

#line 169 "mode_robdd.equiv_vars.m"
                    {
#line 169 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__conv3_V_64_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__L_3, (MR_Word) mode_robdd__equiv_vars__V_56_56, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                    }
#line 169 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_64_64 = (MR_Word) mode_robdd__equiv_vars__conv3_V_64_64;
#line 169 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__DCG_2_31 = (MR_Word) mode_robdd__equiv_vars__V_64_64;
#line 169 "mode_robdd.equiv_vars.m"
                  }
#line 231 "mode_robdd.equiv_vars.m"
                else
#line 231 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__DCG_2_31 = mode_robdd__equiv_vars__DCG_1_30;
#line 235 "mode_robdd.equiv_vars.m"
                /* direct tailcall eliminated */
#line 235 "mode_robdd.equiv_vars.m"
                {
#line 235 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs0_20;
#line 235 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_9 = mode_robdd__equiv_vars__DCG_2_31;

#line 235 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__DCG_0_9 = mode_robdd__equiv_vars__DCG_0__tmp_copy_9;
#line 235 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__Match_6 = (MR_Integer) 1;
#line 235 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 235 "mode_robdd.equiv_vars.m"
                }
#line 235 "mode_robdd.equiv_vars.m"
                continue;
#line 228 "mode_robdd.equiv_vars.m"
              }
#line 236 "mode_robdd.equiv_vars.m"
            else
#line 237 "mode_robdd.equiv_vars.m"
              {
#line 237 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__Vs1_28;

#line 237 "mode_robdd.equiv_vars.m"
                {
#line 237 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__disj_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__Vs0_20, &mode_robdd__equiv_vars__Vs1_28, mode_robdd__equiv_vars__L_3, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Match_6, mode_robdd__equiv_vars__EA_7, mode_robdd__equiv_vars__EB_8, mode_robdd__equiv_vars__DCG_0_9, mode_robdd__equiv_vars__HeadVar__10_10);
                }
#line 238 "mode_robdd.equiv_vars.m"
                {
#line 238 "mode_robdd.equiv_vars.m"
                  MR_Word base;
#line 238 "mode_robdd.equiv_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "mode_robdd.equiv_vars.m"
                  *mode_robdd__equiv_vars__HeadVar__2_2 = base;
#line 238 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__V_19));
#line 238 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vs1_28));
#line 238 "mode_robdd.equiv_vars.m"
                }
#line 237 "mode_robdd.equiv_vars.m"
              }
#line 223 "mode_robdd.equiv_vars.m"
          }
#line 222 "mode_robdd.equiv_vars.m"
      }
#line 222 "mode_robdd.equiv_vars.m"
      break;
#line 222 "mode_robdd.equiv_vars.m"
    }
#line 218 "mode_robdd.equiv_vars.m"
}

#line 209 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 209 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5)
#line 209 "mode_robdd.equiv_vars.m"
{
#line 212 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 212 "mode_robdd.equiv_vars.m"
    {
#line 212 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 212 "mode_robdd.equiv_vars.m"
      {
#line 212 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 212 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "mode_robdd.equiv_vars.m"
          *mode_robdd__equiv_vars__HeadVar__5_5 = mode_robdd__equiv_vars__DCG_0_4;
#line 212 "mode_robdd.equiv_vars.m"
        else
#line 213 "mode_robdd.equiv_vars.m"
          {
#line 213 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs_15;
#line 213 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__DCG_1_17;
#line 213 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19_19;
#line 213 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_20_20;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_24;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_29;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_27_27 = (MR_Word) mode_robdd__equiv_vars__EA_2;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_L_24;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_32;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_37;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_35_35;
#line 163 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_L_32;

#line 2863 "mode_robdd.equiv_vars.c"
            {
#line 2865 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2867 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2869 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2871 "mode_robdd.equiv_vars.c"
            }
#line 163 "mode_robdd.equiv_vars.m"
            {
#line 163 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_27_27, &mode_robdd__equiv_vars__conv0_L_24);
            }
#line 163 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
              {
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_24 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_24);
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
              }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__L_24;
#line 165 "mode_robdd.equiv_vars.m"
            else
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__V_10;
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_35_35 = (MR_Word) mode_robdd__equiv_vars__EB_3;
#line 2898 "mode_robdd.equiv_vars.c"
            {
#line 2900 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2902 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2904 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2906 "mode_robdd.equiv_vars.c"
            }
#line 163 "mode_robdd.equiv_vars.m"
            {
#line 163 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_35_35, &mode_robdd__equiv_vars__conv1_L_32);
            }
#line 163 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
              {
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_32 = ((MR_Word) mode_robdd__equiv_vars__conv1_L_32);
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
              }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__L_32;
#line 165 "mode_robdd.equiv_vars.m"
            else
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__V_10;
#line 215 "mode_robdd.equiv_vars.m"
            {
#line 215 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__disj_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__Vs0_11, &mode_robdd__equiv_vars__Vs_15, mode_robdd__equiv_vars__V_10, mode_robdd__equiv_vars__V_19_19, mode_robdd__equiv_vars__V_20_20, (MR_Integer) 0, mode_robdd__equiv_vars__EA_2, mode_robdd__equiv_vars__EB_3, mode_robdd__equiv_vars__DCG_0_4, &mode_robdd__equiv_vars__DCG_1_17);
            }
#line 216 "mode_robdd.equiv_vars.m"
            /* direct tailcall eliminated */
#line 216 "mode_robdd.equiv_vars.m"
            {
#line 216 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs_15;
#line 216 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_4 = mode_robdd__equiv_vars__DCG_1_17;

#line 216 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__DCG_0_4 = mode_robdd__equiv_vars__DCG_0__tmp_copy_4;
#line 216 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 216 "mode_robdd.equiv_vars.m"
            }
#line 216 "mode_robdd.equiv_vars.m"
            continue;
#line 213 "mode_robdd.equiv_vars.m"
          }
#line 212 "mode_robdd.equiv_vars.m"
      }
#line 212 "mode_robdd.equiv_vars.m"
      break;
#line 212 "mode_robdd.equiv_vars.m"
    }
#line 209 "mode_robdd.equiv_vars.m"
}

#line 167 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_11,
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var0_5,
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_6,
#line 167 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_7)
#line 167 "mode_robdd.equiv_vars.m"
{
#line 169 "mode_robdd.equiv_vars.m"
  {
#line 169 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 169 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 169 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_13_13;
#line 169 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_8_8 = (MR_Word) mode_robdd__equiv_vars__EQVars0_6;
#line 169 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_9_9;
#line 169 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_9_9;

#line 2992 "mode_robdd.equiv_vars.c"
    {
#line 2994 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2996 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2998 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_11));
#line 3000 "mode_robdd.equiv_vars.c"
    }
#line 169 "mode_robdd.equiv_vars.m"
    {
#line 169 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_9_9 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_11, mode_robdd__equiv_vars__TypeInfo_13_13, mode_robdd__equiv_vars__TypeInfo_13_13, mode_robdd__equiv_vars__Var0_5, (MR_Word) mode_robdd__equiv_vars__V_8_8, ((MR_Box) (mode_robdd__equiv_vars__Var_7)));
    }
#line 169 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_9_9 = (MR_Word) mode_robdd__equiv_vars__conv0_V_9_9;
#line 169 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__4_4 = (MR_Word) mode_robdd__equiv_vars__V_9_9;
#line 169 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 169 "mode_robdd.equiv_vars.m"
  }
#line 167 "mode_robdd.equiv_vars.m"
}

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 193 "mode_robdd.equiv_vars.m"
{
#line 193 "mode_robdd.equiv_vars.m"
  {
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_HeadVar__5_12;

#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_HeadVar__5_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__193__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 193 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv1_HeadVar__5_12));
#line 193 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
  }
#line 193 "mode_robdd.equiv_vars.m"
}

#line 143 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__A_5,
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__B_6,
#line 143 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_7)
#line 143 "mode_robdd.equiv_vars.m"
{
#line 145 "mode_robdd.equiv_vars.m"
  {
#line 145 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_37;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_39;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_8_8;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_16_16 = (MR_Word) mode_robdd__equiv_vars__EQVars_7;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_26_26;
#line 145 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_32_32;
#line 169 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_17_17;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_V_32_32;
#line 192 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv3_V_8_8;

#line 3094 "mode_robdd.equiv_vars.c"
    {
#line 3096 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3098 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3100 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 3102 "mode_robdd.equiv_vars.c"
    }
#line 169 "mode_robdd.equiv_vars.m"
    {
#line 169 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_17_17 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__B_6, (MR_Word) mode_robdd__equiv_vars__V_16_16, ((MR_Box) (mode_robdd__equiv_vars__A_5)));
    }
#line 169 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_17_17 = (MR_Word) mode_robdd__equiv_vars__conv0_V_17_17;
#line 3111 "mode_robdd.equiv_vars.c"
    {
#line 3113 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3115 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3117 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_37));
#line 3119 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_37));
#line 3121 "mode_robdd.equiv_vars.c"
    }
#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_2_3_f_0_1));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 193 "mode_robdd.equiv_vars.m"
    }
#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_V_32_32 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37);
    }
#line 193 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_32_32 = (MR_Word) mode_robdd__equiv_vars__conv2_V_32_32;
#line 192 "mode_robdd.equiv_vars.m"
    {
#line 192 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_V_8_8 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_22_39, (MR_Word) mode_robdd__equiv_vars__V_26_26, (MR_Word) mode_robdd__equiv_vars__V_17_17, ((MR_Box) (mode_robdd__equiv_vars__V_32_32)));
    }
#line 192 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_8_8 = ((MR_Word) mode_robdd__equiv_vars__conv3_V_8_8);
#line 145 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__4_4 = (MR_Word) mode_robdd__equiv_vars__V_8_8;
#line 145 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 145 "mode_robdd.equiv_vars.m"
  }
#line 143 "mode_robdd.equiv_vars.m"
}

#line 376 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
#line 376 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 376 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1)
#line 376 "mode_robdd.equiv_vars.m"
{
#line 376 "mode_robdd.equiv_vars.m"
  {
#line 376 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_2;
#line 376 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 376 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_10;

#line 376 "mode_robdd.equiv_vars.m"
    {
#line 376 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__4_10 = mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__376__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1));
    }
#line 376 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_2 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__4_10));
#line 376 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_2;
#line 376 "mode_robdd.equiv_vars.m"
  }
#line 376 "mode_robdd.equiv_vars.m"
}

#line 65 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0(
#line 65 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 65 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 65 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Robdd_5)
#line 65 "mode_robdd.equiv_vars.m"
{
#line 372 "mode_robdd.equiv_vars.m"
  {
#line 372 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 372 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 373 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_14_14;
#line 373 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_7_7 = (MR_Word) mode_robdd__equiv_vars__EQVars_4;

#line 3214 "mode_robdd.equiv_vars.c"
    {
#line 3216 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3218 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3220 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 3222 "mode_robdd.equiv_vars.c"
    }
#line 373 "mode_robdd.equiv_vars.m"
    {
#line 373 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_14_14, mode_robdd__equiv_vars__TypeInfo_14_14, (MR_Word) mode_robdd__equiv_vars__V_7_7);
    }
#line 372 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 372 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__Robdd_5;
#line 372 "mode_robdd.equiv_vars.m"
    else
#line 376 "mode_robdd.equiv_vars.m"
      {
#line 376 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_8_8;

#line 376 "mode_robdd.equiv_vars.m"
        {
#line 376 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 376 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[2]));
#line 376 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__remove_equiv_2_f_0_1));
#line 376 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 376 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 376 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 4) = ((MR_Box) (mode_robdd__equiv_vars__EQVars_4));
#line 376 "mode_robdd.equiv_vars.m"
        }
#line 372 "mode_robdd.equiv_vars.m"
        {
#line 372 "mode_robdd.equiv_vars.m"
          return mode_robdd__equiv_vars__HeadVar__3_3 = mercury__robdd__rename_vars_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__V_8_8, mode_robdd__equiv_vars__Robdd_5);
        }
#line 376 "mode_robdd.equiv_vars.m"
      }
#line 372 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 372 "mode_robdd.equiv_vars.m"
  }
#line 65 "mode_robdd.equiv_vars.m"
}

#line 63 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(
#line 63 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_6,
#line 63 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Robdd_3,
#line 63 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__LeaderMap_4)
#line 63 "mode_robdd.equiv_vars.m"
{
#line 369 "mode_robdd.equiv_vars.m"
  {
#line 369 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 369 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_5_5;

#line 370 "mode_robdd.equiv_vars.m"
    {
#line 370 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_5_5 = mercury__robdd__equivalent_vars_1_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_6, mode_robdd__equiv_vars__Robdd_3);
    }
#line 370 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = ((MR_tag((MR_Word) mode_robdd__equiv_vars__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 370 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 370 "mode_robdd.equiv_vars.m"
      *mode_robdd__equiv_vars__LeaderMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__V_5_5, (MR_Integer) 0)));
#line 369 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 369 "mode_robdd.equiv_vars.m"
  }
#line 63 "mode_robdd.equiv_vars.m"
}

#line 355 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_5,
#line 355 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_6)
#line 355 "mode_robdd.equiv_vars.m"
{
#line 355 "mode_robdd.equiv_vars.m"
  {
#line 355 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 355 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_HeadVar__5_22;
#line 355 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__7_24;

#line 355 "mode_robdd.equiv_vars.m"
    {
#line 355 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__IntroducedFrom__pred__label__360__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv1_HeadVar__5_22, ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_5), &mode_robdd__equiv_vars__conv0_HeadVar__7_24);
    }
#line 355 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv1_HeadVar__5_22));
#line 355 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_6 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__7_24));
#line 355 "mode_robdd.equiv_vars.m"
  }
#line 355 "mode_robdd.equiv_vars.m"
}

#line 60 "mode_robdd.equiv_vars.m"
void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0(
#line 60 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
#line 60 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__E_6,
#line 60 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__True0_7,
#line 60 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__True_8,
#line 60 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__False0_9,
#line 60 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__False_10)
#line 60 "mode_robdd.equiv_vars.m"
{
#line 354 "mode_robdd.equiv_vars.m"
  {
#line 354 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 354 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_49_49;
#line 354 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_51_51;
#line 354 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17;
#line 354 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_18_18;
#line 355 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv3_True_8;
#line 355 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv2_False_10;

#line 355 "mode_robdd.equiv_vars.m"
    {
#line 355 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 355 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_5[0]));
#line 355 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__label_5_p_0_1));
#line 355 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 355 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 355 "mode_robdd.equiv_vars.m"
    }
#line 355 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_18_18 = (MR_Word) mode_robdd__equiv_vars__E_6;
#line 3398 "mode_robdd.equiv_vars.c"
    {
#line 3400 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3402 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_49_49, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3404 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 3406 "mode_robdd.equiv_vars.c"
    }
#line 3408 "mode_robdd.equiv_vars.c"
    {
#line 3410 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3412 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_51_51, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 3414 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_51_51, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_49_49));
#line 3416 "mode_robdd.equiv_vars.c"
    }
#line 355 "mode_robdd.equiv_vars.m"
    {
#line 355 "mode_robdd.equiv_vars.m"
      mercury__map__foldl2_6_p_0(mode_robdd__equiv_vars__TypeInfo_49_49, mode_robdd__equiv_vars__TypeInfo_49_49, mode_robdd__equiv_vars__TypeInfo_51_51, mode_robdd__equiv_vars__TypeInfo_51_51, (MR_Word) mode_robdd__equiv_vars__V_17_17, (MR_Word) mode_robdd__equiv_vars__V_18_18, ((MR_Box) (mode_robdd__equiv_vars__True0_7)), &mode_robdd__equiv_vars__conv3_True_8, ((MR_Box) (mode_robdd__equiv_vars__False0_9)), &mode_robdd__equiv_vars__conv2_False_10);
    }
#line 355 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__True_8 = ((MR_Word) mode_robdd__equiv_vars__conv3_True_8);
#line 355 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__False_10 = ((MR_Word) mode_robdd__equiv_vars__conv2_False_10);
#line 354 "mode_robdd.equiv_vars.m"
  }
#line 60 "mode_robdd.equiv_vars.m"
}

#line 322 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 322 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4)
#line 322 "mode_robdd.equiv_vars.m"
{
#line 322 "mode_robdd.equiv_vars.m"
  {
#line 322 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 322 "mode_robdd.equiv_vars.m"
    MR_Tuple mode_robdd__equiv_vars__conv2_HeadVar__4_4;

#line 322 "mode_robdd.equiv_vars.m"
    {
#line 322 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Tuple) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv2_HeadVar__4_4);
    }
#line 322 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_HeadVar__4_4));
#line 322 "mode_robdd.equiv_vars.m"
  }
#line 322 "mode_robdd.equiv_vars.m"
}

#line 319 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 319 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 319 "mode_robdd.equiv_vars.m"
{
#line 319 "mode_robdd.equiv_vars.m"
  {
#line 319 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 319 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 319 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_4;

#line 319 "mode_robdd.equiv_vars.m"
    {
#line 319 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__4_4 = mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 319 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__4_4));
#line 319 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 319 "mode_robdd.equiv_vars.m"
  }
#line 319 "mode_robdd.equiv_vars.m"
}

#line 56 "mode_robdd.equiv_vars.m"
void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Changed_6,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vars0_7,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Vars_8,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_9,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__EQVars_10)
#line 56 "mode_robdd.equiv_vars.m"
{
#line 318 "mode_robdd.equiv_vars.m"
  {
#line 318 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 314 "mode_robdd.equiv_vars.m"
    {
#line 314 "mode_robdd.equiv_vars.m"
      MR_Word mode_robdd__equiv_vars__TypeInfo_22_22;

#line 3527 "mode_robdd.equiv_vars.c"
      {
#line 3529 "mode_robdd.equiv_vars.c"
        mode_robdd__equiv_vars__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3531 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3533 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3535 "mode_robdd.equiv_vars.c"
      }
#line 314 "mode_robdd.equiv_vars.m"
      {
#line 314 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_22_22, (MR_Word) mode_robdd__equiv_vars__Vars0_7);
      }
#line 314 "mode_robdd.equiv_vars.m"
    }
#line 314 "mode_robdd.equiv_vars.m"
    if (!(mode_robdd__equiv_vars__succeeded))
#line 172 "mode_robdd.equiv_vars.m"
      {
#line 172 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_5_44;
#line 172 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LM_42 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;

#line 3553 "mode_robdd.equiv_vars.c"
        {
#line 3555 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_5_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3557 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3559 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_44, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3561 "mode_robdd.equiv_vars.c"
        }
#line 172 "mode_robdd.equiv_vars.m"
        {
#line 172 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_44, mode_robdd__equiv_vars__TypeInfo_5_44, (MR_Word) mode_robdd__equiv_vars__LM_42);
        }
#line 172 "mode_robdd.equiv_vars.m"
      }
#line 318 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 315 "mode_robdd.equiv_vars.m"
      {
#line 315 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = mode_robdd__equiv_vars__Vars0_7;
#line 316 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = mode_robdd__equiv_vars__EQVars0_9;
#line 317 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = (MR_Integer) 0;
#line 315 "mode_robdd.equiv_vars.m"
      }
#line 318 "mode_robdd.equiv_vars.m"
    else
#line 320 "mode_robdd.equiv_vars.m"
      {
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_26;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_38_38;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_41_41;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__Vars1_11;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap0_12;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap_13;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_14_14;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_16_16;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_17_17;
#line 320 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_18_18;
#line 319 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_Vars1_11;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv3_V_18_18;

#line 3615 "mode_robdd.equiv_vars.c"
        {
#line 3617 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3619 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3621 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3623 "mode_robdd.equiv_vars.c"
        }
#line 3625 "mode_robdd.equiv_vars.c"
        {
#line 3627 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3629 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3631 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3633 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3635 "mode_robdd.equiv_vars.c"
        }
#line 3637 "mode_robdd.equiv_vars.c"
        {
#line 3639 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3641 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 3643 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3645 "mode_robdd.equiv_vars.c"
        }
#line 319 "mode_robdd.equiv_vars.m"
        {
#line 319 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[2]));
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1));
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 319 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 4) = ((MR_Box) (mode_robdd__equiv_vars__EQVars0_9));
#line 319 "mode_robdd.equiv_vars.m"
        }
#line 319 "mode_robdd.equiv_vars.m"
        {
#line 319 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_20, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, (MR_Word) mode_robdd__equiv_vars__V_14_14, mode_robdd__equiv_vars__Vars0_7, ((MR_Box) (mode_robdd__equiv_vars__Vars0_7)));
        }
#line 319 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars1_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_Vars1_11);
#line 321 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap0_12 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;
#line 322 "mode_robdd.equiv_vars.m"
        {
#line 322 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[3]));
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2));
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 322 "mode_robdd.equiv_vars.m"
        }
#line 322 "mode_robdd.equiv_vars.m"
        {
#line 322 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_17_17 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) ((MR_Integer) 0));
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars1_11));
#line 322 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__LeaderMap0_12));
#line 322 "mode_robdd.equiv_vars.m"
        }
#line 3698 "mode_robdd.equiv_vars.c"
        {
#line 3700 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3702 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3704 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3706 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3708 "mode_robdd.equiv_vars.c"
        }
#line 3710 "mode_robdd.equiv_vars.c"
        {
#line 3712 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 3714 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
#line 3716 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 1) = ((MR_Box) ((MR_Integer) 3));
#line 3718 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 2) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
#line 3720 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_28_28));
#line 3722 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 4) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_38_38));
#line 3724 "mode_robdd.equiv_vars.c"
        }
#line 322 "mode_robdd.equiv_vars.m"
        {
#line 322 "mode_robdd.equiv_vars.m"
          mercury__map__foldl_4_p_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_41_41, (MR_Word) mode_robdd__equiv_vars__V_16_16, (MR_Word) mode_robdd__equiv_vars__LeaderMap0_12, ((MR_Box) (mode_robdd__equiv_vars__V_17_17)), &mode_robdd__equiv_vars__conv3_V_18_18);
        }
#line 322 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__V_18_18 = ((MR_Tuple) mode_robdd__equiv_vars__conv3_V_18_18);
#line 322 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 0)));
#line 322 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 1)));
#line 322 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 2)));
#line 324 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = (MR_Word) mode_robdd__equiv_vars__LeaderMap_13;
#line 320 "mode_robdd.equiv_vars.m"
      }
#line 318 "mode_robdd.equiv_vars.m"
  }
#line 56 "mode_robdd.equiv_vars.m"
}

#line 311 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
#line 311 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 311 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 311 "mode_robdd.equiv_vars.m"
{
#line 311 "mode_robdd.equiv_vars.m"
  {
#line 311 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_HeadVar__4_15;

#line 311 "mode_robdd.equiv_vars.m"
    {
#line 311 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_HeadVar__4_15 = mode_robdd__equiv_vars__IntroducedFrom__func__filter__311__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 311 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv3_HeadVar__4_15));
#line 311 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 311 "mode_robdd.equiv_vars.m"
  }
#line 311 "mode_robdd.equiv_vars.m"
}

#line 54 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0(
#line 54 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 54 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__P_4,
#line 54 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2)
#line 54 "mode_robdd.equiv_vars.m"
{
#line 309 "mode_robdd.equiv_vars.m"
  {
#line 309 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_20;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_22;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM0_5 = (MR_Word) mode_robdd__equiv_vars__HeadVar__2_2;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_6;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_8;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_11_11;
#line 309 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 310 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_11_11;
#line 310 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_7_7;
#line 310 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_V_7_7;
#line 310 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_Vars_8;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv4_LM_6;

#line 3824 "mode_robdd.equiv_vars.c"
    {
#line 3826 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3828 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3830 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 3832 "mode_robdd.equiv_vars.c"
    }
#line 310 "mode_robdd.equiv_vars.m"
    {
#line 310 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_11_11 = mercury__map__keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_20, mode_robdd__equiv_vars__TypeInfo_20_20, (MR_Word) mode_robdd__equiv_vars__LM0_5);
    }
#line 310 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_11_11 = (MR_Word) mode_robdd__equiv_vars__conv0_V_11_11;
#line 310 "mode_robdd.equiv_vars.m"
    {
#line 310 "mode_robdd.equiv_vars.m"
      mercury__list__filter_4_p_0(mode_robdd__equiv_vars__TypeInfo_20_20, (MR_Word) mode_robdd__equiv_vars__P_4, (MR_Word) mode_robdd__equiv_vars__V_11_11, &mode_robdd__equiv_vars__conv2_V_7_7, &mode_robdd__equiv_vars__conv1_Vars_8);
    }
#line 310 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_7_7 = (MR_Word) mode_robdd__equiv_vars__conv2_V_7_7;
#line 310 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__Vars_8 = (MR_Word) mode_robdd__equiv_vars__conv1_Vars_8;
#line 3850 "mode_robdd.equiv_vars.c"
    {
#line 3852 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3854 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3856 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_20));
#line 3858 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_20));
#line 3860 "mode_robdd.equiv_vars.c"
    }
#line 311 "mode_robdd.equiv_vars.m"
    {
#line 311 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 311 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[1]));
#line 311 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__filter_2_f_0_1));
#line 311 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 311 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 311 "mode_robdd.equiv_vars.m"
    }
#line 311 "mode_robdd.equiv_vars.m"
    {
#line 311 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_LM_6 = mercury__list__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_20, mode_robdd__equiv_vars__TypeInfo_22_22, (MR_Word) mode_robdd__equiv_vars__V_12_12, (MR_Word) mode_robdd__equiv_vars__Vars_8, ((MR_Box) (mode_robdd__equiv_vars__LM0_5)));
    }
#line 311 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LM_6 = ((MR_Word) mode_robdd__equiv_vars__conv4_LM_6);
#line 309 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__LM_6;
#line 309 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 309 "mode_robdd.equiv_vars.m"
  }
#line 54 "mode_robdd.equiv_vars.m"
}

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 193 "mode_robdd.equiv_vars.m"
{
#line 193 "mode_robdd.equiv_vars.m"
  {
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv4_HeadVar__5_12;

#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_HeadVar__5_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__193__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 193 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv4_HeadVar__5_12));
#line 193 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
  }
#line 193 "mode_robdd.equiv_vars.m"
}

#line 303 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
#line 303 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 303 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1)
#line 303 "mode_robdd.equiv_vars.m"
{
#line 303 "mode_robdd.equiv_vars.m"
  {
#line 303 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;

#line 303 "mode_robdd.equiv_vars.m"
    {
#line 303 "mode_robdd.equiv_vars.m"
      return mode_robdd__equiv_vars__succeeded = mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__303__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1));
    }
#line 303 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 303 "mode_robdd.equiv_vars.m"
  }
#line 303 "mode_robdd.equiv_vars.m"
}

#line 51 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0(
#line 51 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 51 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Th_4,
#line 51 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__E_5)
#line 51 "mode_robdd.equiv_vars.m"
{
#line 301 "mode_robdd.equiv_vars.m"
  {
#line 301 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_26_26;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_44;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_46;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_6;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LL0_7;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LL_10;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_13_13;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_14_14;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_33_33;
#line 301 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_39_39;
#line 302 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_LL0_7;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_11_11;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_LL_10;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_V_11_11;
#line 306 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_LM_6;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv5_V_39_39;
#line 192 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv6_V_12_12;

#line 4010 "mode_robdd.equiv_vars.c"
    {
#line 4012 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4014 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4016 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_44, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 4018 "mode_robdd.equiv_vars.c"
    }
#line 302 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__E_5;
#line 302 "mode_robdd.equiv_vars.m"
    {
#line 302 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_LL0_7 = mercury__map__to_assoc_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44, (MR_Word) mode_robdd__equiv_vars__V_13_13);
    }
#line 302 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LL0_7 = (MR_Word) mode_robdd__equiv_vars__conv0_LL0_7;
#line 303 "mode_robdd.equiv_vars.m"
    {
#line 303 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_4[0]));
#line 303 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_1));
#line 303 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 303 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 303 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 4) = ((MR_Box) (mode_robdd__equiv_vars__Th_4));
#line 303 "mode_robdd.equiv_vars.m"
    }
#line 4045 "mode_robdd.equiv_vars.c"
    {
#line 4047 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4049 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_26_26, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4051 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4053 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_26_26, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4055 "mode_robdd.equiv_vars.c"
    }
#line 303 "mode_robdd.equiv_vars.m"
    {
#line 303 "mode_robdd.equiv_vars.m"
      mercury__list__takewhile_4_p_0(mode_robdd__equiv_vars__TypeInfo_26_26, (MR_Word) mode_robdd__equiv_vars__V_14_14, (MR_Word) mode_robdd__equiv_vars__LL0_7, &mode_robdd__equiv_vars__conv2_LL_10, &mode_robdd__equiv_vars__conv1_V_11_11);
    }
#line 303 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LL_10 = (MR_Word) mode_robdd__equiv_vars__conv2_LL_10;
#line 303 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_11_11 = (MR_Word) mode_robdd__equiv_vars__conv1_V_11_11;
#line 306 "mode_robdd.equiv_vars.m"
    {
#line 306 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_LM_6 = mercury__map__from_assoc_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44, (MR_Word) mode_robdd__equiv_vars__LL_10);
    }
#line 306 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LM_6 = (MR_Word) mode_robdd__equiv_vars__conv3_LM_6;
#line 4073 "mode_robdd.equiv_vars.c"
    {
#line 4075 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4077 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_46, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4079 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4081 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_46, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4083 "mode_robdd.equiv_vars.c"
    }
#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_2));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 193 "mode_robdd.equiv_vars.m"
    }
#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv5_V_39_39 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44);
    }
#line 193 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_39_39 = (MR_Word) mode_robdd__equiv_vars__conv5_V_39_39;
#line 192 "mode_robdd.equiv_vars.m"
    {
#line 192 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv6_V_12_12 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_22_46, (MR_Word) mode_robdd__equiv_vars__V_33_33, (MR_Word) mode_robdd__equiv_vars__LM_6, ((MR_Box) (mode_robdd__equiv_vars__V_39_39)));
    }
#line 192 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_12_12 = ((MR_Word) mode_robdd__equiv_vars__conv6_V_12_12);
#line 301 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__V_12_12;
#line 301 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 301 "mode_robdd.equiv_vars.m"
  }
#line 51 "mode_robdd.equiv_vars.m"
}

#line 286 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 286 "mode_robdd.equiv_vars.m"
{
#line 286 "mode_robdd.equiv_vars.m"
  {
#line 286 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 286 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 286 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv4_HeadVar__5_20;

#line 286 "mode_robdd.equiv_vars.m"
    {
#line 286 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_HeadVar__5_20 = mode_robdd__equiv_vars__IntroducedFrom__func__delete__286__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 286 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv4_HeadVar__5_20));
#line 286 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 286 "mode_robdd.equiv_vars.m"
  }
#line 286 "mode_robdd.equiv_vars.m"
}

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg)
#line 284 "mode_robdd.equiv_vars.m"
{
#line 284 "mode_robdd.equiv_vars.m"
  {
#line 284 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s * mode_robdd__equiv_vars__env_ptr = (struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s *) mode_robdd__equiv_vars__env_ptr_arg;

#line 284 "mode_robdd.equiv_vars.m"
    *((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29));
#line 284 "mode_robdd.equiv_vars.m"
    {
#line 284 "mode_robdd.equiv_vars.m"
      ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont)((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr);
#line 284 "mode_robdd.equiv_vars.m"
      return;
    }
#line 284 "mode_robdd.equiv_vars.m"
  }
#line 284 "mode_robdd.equiv_vars.m"
}

#line 284 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
#line 284 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_1,
#line 284 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 284 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr)
#line 284 "mode_robdd.equiv_vars.m"
{
#line 284 "mode_robdd.equiv_vars.m"
  {
#line 284 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s mode_robdd__equiv_vars__env;

#line 284 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1 = mode_robdd__equiv_vars__wrapper_arg_1;
#line 284 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont = mode_robdd__equiv_vars__cont;
#line 284 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr = mode_robdd__equiv_vars__cont_env_ptr;
#line 284 "mode_robdd.equiv_vars.m"
    {
#line 284 "mode_robdd.equiv_vars.m"
      MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;

#line 284 "mode_robdd.equiv_vars.m"
      {
#line 284 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__IntroducedFrom__pred__delete__284__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 5))), &(mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29, mode_robdd__equiv_vars__delete_2_f_0_1, &mode_robdd__equiv_vars__env);
      }
#line 284 "mode_robdd.equiv_vars.m"
    }
#line 284 "mode_robdd.equiv_vars.m"
  }
#line 284 "mode_robdd.equiv_vars.m"
}

#line 49 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0(
#line 49 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 49 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__E0_4,
#line 49 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_5)
#line 49 "mode_robdd.equiv_vars.m"
{
#line 297 "mode_robdd.equiv_vars.m"
  {
#line 297 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 297 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__E_6;
#line 297 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_45;
#line 297 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_7;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_43_43 = (MR_Word) mode_robdd__equiv_vars__E0_4;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_7;

#line 4249 "mode_robdd.equiv_vars.c"
    {
#line 4251 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4253 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_45, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4255 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_45, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 4257 "mode_robdd.equiv_vars.c"
    }
#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__V_5, (MR_Word) mode_robdd__equiv_vars__V_43_43, &mode_robdd__equiv_vars__conv0_L_7);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_7 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_7);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 297 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 294 "mode_robdd.equiv_vars.m"
      {
#line 294 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_38_38 = (MR_Word) mode_robdd__equiv_vars__E0_4;

#line 282 "mode_robdd.equiv_vars.m"
        {
#line 282 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__L_7, mode_robdd__equiv_vars__V_5);
        }
#line 294 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 283 "mode_robdd.equiv_vars.m"
          {
#line 283 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__M0_8;
#line 283 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vars_9;
#line 283 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_16_16;
#line 283 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv1_M0_8;
#line 284 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv3_Vars_9;
#line 291 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__NewLeader_10;
#line 285 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_11_11;

#line 283 "mode_robdd.equiv_vars.m"
            {
#line 283 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv1_M0_8 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__V_38_38, ((MR_Box) (mode_robdd__equiv_vars__V_5)));
            }
#line 283 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__M0_8 = (MR_Word) mode_robdd__equiv_vars__conv1_M0_8;
#line 284 "mode_robdd.equiv_vars.m"
            {
#line 284 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 284 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[0]));
#line 284 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_2));
#line 284 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 284 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 284 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 4) = ((MR_Box) (mode_robdd__equiv_vars__V_5));
#line 284 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 5) = ((MR_Box) (mode_robdd__equiv_vars__M0_8));
#line 284 "mode_robdd.equiv_vars.m"
            }
#line 284 "mode_robdd.equiv_vars.m"
            {
#line 284 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv3_Vars_9 = mercury__solutions__solutions_1_f_1(mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__V_16_16);
            }
#line 284 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__Vars_9 = (MR_Word) mode_robdd__equiv_vars__conv3_Vars_9;
#line 285 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = ((MR_tag((MR_Word) mode_robdd__equiv_vars__Vars_9)) == (MR_mktag((MR_Integer) 1)));
#line 285 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 285 "mode_robdd.equiv_vars.m"
              {
#line 285 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__NewLeader_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__Vars_9, (MR_Integer) 0)));
#line 285 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__Vars_9, (MR_Integer) 1)));
#line 289 "mode_robdd.equiv_vars.m"
                {
#line 289 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__TypeInfo_33_33;
#line 289 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__M_12;
#line 289 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_17_17;
#line 286 "mode_robdd.equiv_vars.m"
                  MR_Box mode_robdd__equiv_vars__conv5_M_12;

#line 4358 "mode_robdd.equiv_vars.c"
                  {
#line 4360 "mode_robdd.equiv_vars.c"
                    mode_robdd__equiv_vars__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4362 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4364 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_45));
#line 4366 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_45));
#line 4368 "mode_robdd.equiv_vars.c"
                  }
#line 286 "mode_robdd.equiv_vars.m"
                  {
#line 286 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 286 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 286 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_3));
#line 286 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 286 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 286 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 4) = ((MR_Box) (mode_robdd__equiv_vars__NewLeader_10));
#line 286 "mode_robdd.equiv_vars.m"
                  }
#line 286 "mode_robdd.equiv_vars.m"
                  {
#line 286 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__conv5_M_12 = mercury__list__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_33_33, (MR_Word) mode_robdd__equiv_vars__V_17_17, (MR_Word) mode_robdd__equiv_vars__Vars_9, ((MR_Box) (mode_robdd__equiv_vars__M0_8)));
                  }
#line 286 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__M_12 = ((MR_Word) mode_robdd__equiv_vars__conv5_M_12);
#line 290 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__E_6 = (MR_Word) mode_robdd__equiv_vars__M_12;
#line 289 "mode_robdd.equiv_vars.m"
                }
#line 285 "mode_robdd.equiv_vars.m"
              }
#line 285 "mode_robdd.equiv_vars.m"
            else
#line 292 "mode_robdd.equiv_vars.m"
              {
#line 292 "mode_robdd.equiv_vars.m"
                {
#line 292 "mode_robdd.equiv_vars.m"
                  mercury__require__error_1_p_0((MR_String) "mode_robdd:equiv_vars:delete: malformed leader map");
                }
#line 292 "mode_robdd.equiv_vars.m"
              }
#line 283 "mode_robdd.equiv_vars.m"
          }
#line 294 "mode_robdd.equiv_vars.m"
        else
#line 295 "mode_robdd.equiv_vars.m"
          {
#line 295 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_22_22;
#line 295 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv6_V_22_22;

#line 295 "mode_robdd.equiv_vars.m"
            {
#line 295 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv6_V_22_22 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__V_38_38, ((MR_Box) (mode_robdd__equiv_vars__V_5)));
            }
#line 295 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_22_22 = (MR_Word) mode_robdd__equiv_vars__conv6_V_22_22;
#line 295 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__E_6 = (MR_Word) mode_robdd__equiv_vars__V_22_22;
#line 295 "mode_robdd.equiv_vars.m"
          }
#line 294 "mode_robdd.equiv_vars.m"
      }
#line 297 "mode_robdd.equiv_vars.m"
    else
#line 298 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__E_6 = mode_robdd__equiv_vars__E0_4;
#line 297 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__E_6;
#line 297 "mode_robdd.equiv_vars.m"
  }
#line 49 "mode_robdd.equiv_vars.m"
}

#line 47 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__difference_2_f_0(
#line 47 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_10,
#line 47 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_4,
#line 47 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_5)
#line 47 "mode_robdd.equiv_vars.m"
{
#line 244 "mode_robdd.equiv_vars.m"
  {
#line 244 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 244 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__E_6;
#line 244 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_15;
#line 244 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_7;
#line 244 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_8_8;
#line 244 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_9_9;
#line 244 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_13_13;
#line 245 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_Vars_7;
#line 82 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_V_13_13;

#line 4477 "mode_robdd.equiv_vars.c"
    {
#line 4479 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4481 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4483 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_15, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_10));
#line 4485 "mode_robdd.equiv_vars.c"
    }
#line 245 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_8_8 = (MR_Word) mode_robdd__equiv_vars__EA_4;
#line 245 "mode_robdd.equiv_vars.m"
    {
#line 245 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_Vars_7 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_15, mode_robdd__equiv_vars__TypeInfo_5_15, (MR_Word) mode_robdd__equiv_vars__V_8_8);
    }
#line 245 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__Vars_7 = (MR_Word) mode_robdd__equiv_vars__conv0_Vars_7;
#line 82 "mode_robdd.equiv_vars.m"
    {
#line 82 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_V_13_13 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_15, mode_robdd__equiv_vars__TypeInfo_5_15);
    }
#line 82 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__conv1_V_13_13;
#line 82 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_9_9 = (MR_Word) mode_robdd__equiv_vars__V_13_13;
#line 246 "mode_robdd.equiv_vars.m"
    {
#line 246 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__diff_2_5_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__Vars_7, mode_robdd__equiv_vars__EA_4, mode_robdd__equiv_vars__EB_5, mode_robdd__equiv_vars__V_9_9, &mode_robdd__equiv_vars__E_6);
    }
#line 244 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__E_6;
#line 244 "mode_robdd.equiv_vars.m"
  }
#line 47 "mode_robdd.equiv_vars.m"
}

#line 45 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__f_plus_2_f_0(
#line 45 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_16,
#line 45 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_4,
#line 45 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_5)
#line 45 "mode_robdd.equiv_vars.m"
{
#line 203 "mode_robdd.equiv_vars.m"
  {
#line 203 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__E_6;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_21;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__VarsA_7;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__VarsB_8;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_9;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_10_10;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_11_11;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_13_13;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_14_14;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_15_15;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_19_19;
#line 204 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_10_10;
#line 204 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_VarsA_7;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_V_12_12;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_VarsB_8;
#line 206 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv4_Vars_9;
#line 82 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv5_V_19_19;

#line 4569 "mode_robdd.equiv_vars.c"
    {
#line 4571 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4573 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4575 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_21, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_16));
#line 4577 "mode_robdd.equiv_vars.c"
    }
#line 204 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_11_11 = (MR_Word) mode_robdd__equiv_vars__EA_4;
#line 204 "mode_robdd.equiv_vars.m"
    {
#line 204 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_10_10 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_11_11);
    }
#line 204 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_10_10 = (MR_Word) mode_robdd__equiv_vars__conv0_V_10_10;
#line 204 "mode_robdd.equiv_vars.m"
    {
#line 204 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_VarsA_7 = mercury__set__sorted_list_to_set_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_10_10);
    }
#line 204 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__VarsA_7 = (MR_Word) mode_robdd__equiv_vars__conv1_VarsA_7;
#line 205 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__EB_5;
#line 205 "mode_robdd.equiv_vars.m"
    {
#line 205 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_V_12_12 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_13_13);
    }
#line 205 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_12_12 = (MR_Word) mode_robdd__equiv_vars__conv2_V_12_12;
#line 205 "mode_robdd.equiv_vars.m"
    {
#line 205 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_VarsB_8 = mercury__set__sorted_list_to_set_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_12_12);
    }
#line 205 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__VarsB_8 = (MR_Word) mode_robdd__equiv_vars__conv3_VarsB_8;
#line 206 "mode_robdd.equiv_vars.m"
    {
#line 206 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_14_14 = mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_16, mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__VarsA_7, mode_robdd__equiv_vars__VarsB_8);
    }
#line 206 "mode_robdd.equiv_vars.m"
    {
#line 206 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_Vars_9 = mercury__set__to_sorted_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_14_14);
    }
#line 206 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__Vars_9 = (MR_Word) mode_robdd__equiv_vars__conv4_Vars_9;
#line 82 "mode_robdd.equiv_vars.m"
    {
#line 82 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv5_V_19_19 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21);
    }
#line 82 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_19_19 = (MR_Word) mode_robdd__equiv_vars__conv5_V_19_19;
#line 82 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_15_15 = (MR_Word) mode_robdd__equiv_vars__V_19_19;
#line 207 "mode_robdd.equiv_vars.m"
    {
#line 207 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__disj_2_5_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_16, mode_robdd__equiv_vars__Vars_9, mode_robdd__equiv_vars__EA_4, mode_robdd__equiv_vars__EB_5, mode_robdd__equiv_vars__V_15_15, &mode_robdd__equiv_vars__E_6);
    }
#line 203 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__E_6;
#line 203 "mode_robdd.equiv_vars.m"
  }
#line 45 "mode_robdd.equiv_vars.m"
}

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 193 "mode_robdd.equiv_vars.m"
{
#line 193 "mode_robdd.equiv_vars.m"
  {
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_HeadVar__5_12;

#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_HeadVar__5_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__193__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 193 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_HeadVar__5_12));
#line 193 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
  }
#line 193 "mode_robdd.equiv_vars.m"
}

#line 175 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 175 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 175 "mode_robdd.equiv_vars.m"
{
#line 175 "mode_robdd.equiv_vars.m"
  {
#line 175 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 175 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 175 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__5_16;

#line 175 "mode_robdd.equiv_vars.m"
    {
#line 175 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__5_16 = mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_53_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 175 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__5_16));
#line 175 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 175 "mode_robdd.equiv_vars.m"
  }
#line 175 "mode_robdd.equiv_vars.m"
}

#line 43 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0(
#line 43 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
#line 43 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 43 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2)
#line 43 "mode_robdd.equiv_vars.m"
{
#line 174 "mode_robdd.equiv_vars.m"
  {
#line 174 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_57;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_59;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__MA_4 = (MR_Word) mode_robdd__equiv_vars__HeadVar__1_1;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__MB_5 = (MR_Word) mode_robdd__equiv_vars__HeadVar__2_2;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__M_6;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__M1_7;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_46_46;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_52_52;
#line 175 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv1_M1_7;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_V_52_52;
#line 192 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv4_M_6;

#line 4758 "mode_robdd.equiv_vars.c"
    {
#line 4760 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4762 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_57, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4764 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_57, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 4766 "mode_robdd.equiv_vars.c"
    }
#line 4768 "mode_robdd.equiv_vars.c"
    {
#line 4770 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4772 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4774 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_57));
#line 4776 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_57));
#line 4778 "mode_robdd.equiv_vars.c"
    }
#line 175 "mode_robdd.equiv_vars.m"
    {
#line 175 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 175 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 175 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_1));
#line 175 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 175 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 175 "mode_robdd.equiv_vars.m"
    }
#line 175 "mode_robdd.equiv_vars.m"
    {
#line 175 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_M1_7 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_22_59, (MR_Word) mode_robdd__equiv_vars__V_12_12, (MR_Word) mode_robdd__equiv_vars__MA_4, ((MR_Box) (mode_robdd__equiv_vars__MB_5)));
    }
#line 175 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__M1_7 = ((MR_Word) mode_robdd__equiv_vars__conv1_M1_7);
#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_2));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 193 "mode_robdd.equiv_vars.m"
    }
#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_V_52_52 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57);
    }
#line 193 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_52_52 = (MR_Word) mode_robdd__equiv_vars__conv3_V_52_52;
#line 192 "mode_robdd.equiv_vars.m"
    {
#line 192 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_M_6 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_22_59, (MR_Word) mode_robdd__equiv_vars__V_46_46, (MR_Word) mode_robdd__equiv_vars__M1_7, ((MR_Box) (mode_robdd__equiv_vars__V_52_52)));
    }
#line 192 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__M_6 = ((MR_Word) mode_robdd__equiv_vars__conv4_M_6);
#line 174 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__M_6;
#line 174 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 174 "mode_robdd.equiv_vars.m"
  }
#line 43 "mode_robdd.equiv_vars.m"
}

#line 41 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__empty_1_p_0(
#line 41 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_3,
#line 41 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1)
#line 41 "mode_robdd.equiv_vars.m"
{
#line 172 "mode_robdd.equiv_vars.m"
  {
#line 172 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 172 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_5;
#line 172 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_2 = (MR_Word) mode_robdd__equiv_vars__HeadVar__1_1;

#line 4856 "mode_robdd.equiv_vars.c"
    {
#line 4858 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4860 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4862 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_3));
#line 4864 "mode_robdd.equiv_vars.c"
    }
#line 172 "mode_robdd.equiv_vars.m"
    {
#line 172 "mode_robdd.equiv_vars.m"
      return mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_5, mode_robdd__equiv_vars__TypeInfo_5_5, (MR_Word) mode_robdd__equiv_vars__LM_2);
    }
#line 172 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 172 "mode_robdd.equiv_vars.m"
  }
#line 41 "mode_robdd.equiv_vars.m"
}

#line 39 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__det_leader_2_f_0(
#line 39 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
#line 39 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_4,
#line 39 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5)
#line 39 "mode_robdd.equiv_vars.m"
{
#line 165 "mode_robdd.equiv_vars.m"
  {
#line 165 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_6;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_12;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_10_10 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_6;

#line 4904 "mode_robdd.equiv_vars.c"
    {
#line 4906 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4908 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4910 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_7));
#line 4912 "mode_robdd.equiv_vars.c"
    }
#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__TypeInfo_9_12, mode_robdd__equiv_vars__TypeInfo_9_12, mode_robdd__equiv_vars__Var_4, (MR_Word) mode_robdd__equiv_vars__V_10_10, &mode_robdd__equiv_vars__conv0_L_6);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_6 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_6);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__L_6;
#line 165 "mode_robdd.equiv_vars.m"
    else
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__Var_4;
#line 165 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 165 "mode_robdd.equiv_vars.m"
  }
#line 39 "mode_robdd.equiv_vars.m"
}

#line 36 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__leader_2_f_0(
#line 36 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
#line 36 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_4,
#line 36 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 36 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__3_3)
#line 36 "mode_robdd.equiv_vars.m"
{
#line 163 "mode_robdd.equiv_vars.m"
  {
#line 163 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_9;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_6_6 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_HeadVar__3_3;

#line 4968 "mode_robdd.equiv_vars.c"
    {
#line 4970 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4972 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4974 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_9, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_7));
#line 4976 "mode_robdd.equiv_vars.c"
    }
#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__Var_4, (MR_Word) mode_robdd__equiv_vars__V_6_6, &mode_robdd__equiv_vars__conv0_HeadVar__3_3);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__3_3);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 163 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 163 "mode_robdd.equiv_vars.m"
  }
#line 36 "mode_robdd.equiv_vars.m"
}

#line 33 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(
#line 33 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
#line 33 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 33 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VA_5,
#line 33 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VB_6)
#line 33 "mode_robdd.equiv_vars.m"
{
#line 161 "mode_robdd.equiv_vars.m"
  {
#line 161 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 161 "mode_robdd.equiv_vars.m"
    {
#line 161 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__EQVars_4, mode_robdd__equiv_vars__VA_5, mode_robdd__equiv_vars__VB_6);
    }
#line 161 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
#line 161 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 161 "mode_robdd.equiv_vars.m"
  }
#line 33 "mode_robdd.equiv_vars.m"
}

#line 30 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(
#line 30 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_10,
#line 30 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_1,
#line 30 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2,
#line 30 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_3)
#line 30 "mode_robdd.equiv_vars.m"
{
#line 156 "mode_robdd.equiv_vars.m"
  {
#line 156 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 156 "mode_robdd.equiv_vars.m"
    {
#line 156 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__HeadVar__3_3, mode_robdd__equiv_vars__HeadVar__2_2);
    }
#line 156 "mode_robdd.equiv_vars.m"
    if (!(mode_robdd__equiv_vars__succeeded))
#line 157 "mode_robdd.equiv_vars.m"
      {
#line 157 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_9_25;
#line 157 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_9_9;
#line 157 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_11_11;
#line 157 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_18_18 = (MR_Word) mode_robdd__equiv_vars__EQVars_1;
#line 157 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_23_23;
#line 163 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv0_V_9_9;
#line 163 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_V_11_11;

#line 5074 "mode_robdd.equiv_vars.c"
        {
#line 5076 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_9_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5078 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5080 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_25, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_10));
#line 5082 "mode_robdd.equiv_vars.c"
        }
#line 163 "mode_robdd.equiv_vars.m"
        {
#line 163 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__HeadVar__2_2, (MR_Word) mode_robdd__equiv_vars__V_18_18, &mode_robdd__equiv_vars__conv0_V_9_9);
        }
#line 163 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
          {
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_9_9 = ((MR_Word) mode_robdd__equiv_vars__conv0_V_9_9);
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
          }
#line 157 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 157 "mode_robdd.equiv_vars.m"
          {
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_23_23 = (MR_Word) mode_robdd__equiv_vars__EQVars_1;
#line 163 "mode_robdd.equiv_vars.m"
            {
#line 163 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__HeadVar__3_3, (MR_Word) mode_robdd__equiv_vars__V_23_23, &mode_robdd__equiv_vars__conv1_V_11_11);
            }
#line 163 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
              {
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_11_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_V_11_11);
#line 163 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
              }
#line 157 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 158 "mode_robdd.equiv_vars.m"
              {
#line 158 "mode_robdd.equiv_vars.m"
                return mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__V_9_9, mode_robdd__equiv_vars__V_11_11);
              }
#line 157 "mode_robdd.equiv_vars.m"
          }
#line 157 "mode_robdd.equiv_vars.m"
      }
#line 156 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 156 "mode_robdd.equiv_vars.m"
  }
#line 30 "mode_robdd.equiv_vars.m"
}

#line 151 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
#line 151 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 151 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 151 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 151 "mode_robdd.equiv_vars.m"
{
#line 151 "mode_robdd.equiv_vars.m"
  {
#line 151 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 151 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 151 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_EQVars_8;

#line 151 "mode_robdd.equiv_vars.m"
    {
#line 151 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_EQVars_8 = mode_robdd__equiv_vars__add_equality_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 151 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv2_EQVars_8));
#line 151 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 151 "mode_robdd.equiv_vars.m"
  }
#line 151 "mode_robdd.equiv_vars.m"
}

#line 28 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0(
#line 28 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
#line 28 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vars0_4,
#line 28 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5)
#line 28 "mode_robdd.equiv_vars.m"
{
#line 149 "mode_robdd.equiv_vars.m"
  {
#line 149 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 149 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 149 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_13;
#line 149 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Var_6;
#line 149 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_7;
#line 150 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_11_11;
#line 150 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv1_Var_6;
#line 150 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_Vars_7;

#line 5202 "mode_robdd.equiv_vars.c"
    {
#line 5204 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5206 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5208 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 5210 "mode_robdd.equiv_vars.c"
    }
#line 5212 "mode_robdd.equiv_vars.c"
    {
#line 5214 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5216 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 5218 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 5220 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_11_11));
#line 5222 "mode_robdd.equiv_vars.c"
    }
#line 150 "mode_robdd.equiv_vars.m"
    {
#line 150 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, &mode_robdd__equiv_vars__conv1_Var_6, (MR_Word) mode_robdd__equiv_vars__Vars0_4, &mode_robdd__equiv_vars__conv0_Vars_7);
    }
#line 150 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 150 "mode_robdd.equiv_vars.m"
      {
#line 150 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Var_6 = ((MR_Word) mode_robdd__equiv_vars__conv1_Var_6);
#line 150 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars_7 = (MR_Word) mode_robdd__equiv_vars__conv0_Vars_7;
#line 150 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 150 "mode_robdd.equiv_vars.m"
      }
#line 149 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 151 "mode_robdd.equiv_vars.m"
      {
#line 151 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_19_19;
#line 151 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_8_8;
#line 149 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv3_HeadVar__3_3;

#line 5252 "mode_robdd.equiv_vars.c"
        {
#line 5254 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5256 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_19_19, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_equiv_vars_1));
#line 5258 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 5260 "mode_robdd.equiv_vars.c"
        }
#line 151 "mode_robdd.equiv_vars.m"
        {
#line 151 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 151 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[1]));
#line 151 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equalities_2_f_0_1));
#line 151 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 151 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 151 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 4) = ((MR_Box) (mode_robdd__equiv_vars__Var_6));
#line 151 "mode_robdd.equiv_vars.m"
        }
#line 149 "mode_robdd.equiv_vars.m"
        {
#line 149 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv3_HeadVar__3_3 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeInfo_19_19, mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, (MR_Word) mode_robdd__equiv_vars__V_8_8, mode_robdd__equiv_vars__Vars_7, ((MR_Box) (mode_robdd__equiv_vars__EQVars_5)));
        }
#line 149 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv3_HeadVar__3_3);
#line 151 "mode_robdd.equiv_vars.m"
      }
#line 149 "mode_robdd.equiv_vars.m"
    else
#line 149 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__EQVars_5;
#line 149 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 149 "mode_robdd.equiv_vars.m"
  }
#line 28 "mode_robdd.equiv_vars.m"
}

#line 193 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 193 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 193 "mode_robdd.equiv_vars.m"
{
#line 193 "mode_robdd.equiv_vars.m"
  {
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 193 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_HeadVar__5_12;

#line 193 "mode_robdd.equiv_vars.m"
    {
#line 193 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_HeadVar__5_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__193__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 193 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv3_HeadVar__5_12));
#line 193 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 193 "mode_robdd.equiv_vars.m"
  }
#line 193 "mode_robdd.equiv_vars.m"
}

#line 26 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0(
#line 26 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_19,
#line 26 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VarA_5,
#line 26 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VarB_6,
#line 26 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_7)
#line 26 "mode_robdd.equiv_vars.m"
{
#line 113 "mode_robdd.equiv_vars.m"
  {
#line 113 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 113 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__EQVars_8;
#line 113 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_32;
#line 113 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LeaderA_9;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_30_30 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 163 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_LeaderA_9;

#line 5362 "mode_robdd.equiv_vars.c"
    {
#line 5364 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5366 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5368 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_32, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
#line 5370 "mode_robdd.equiv_vars.c"
    }
#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarA_5, (MR_Word) mode_robdd__equiv_vars__V_30_30, &mode_robdd__equiv_vars__conv0_LeaderA_9);
    }
#line 163 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
      {
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderA_9 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderA_9);
#line 163 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
      }
#line 113 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 100 "mode_robdd.equiv_vars.m"
      {
#line 100 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderB_10;
#line 163 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_35_35 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 163 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_LeaderB_10;

#line 163 "mode_robdd.equiv_vars.m"
        {
#line 163 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__V_35_35, &mode_robdd__equiv_vars__conv1_LeaderB_10);
        }
#line 163 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
          {
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LeaderB_10 = ((MR_Word) mode_robdd__equiv_vars__conv1_LeaderB_10);
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
          }
#line 100 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 87 "mode_robdd.equiv_vars.m"
          {
#line 87 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_11;

#line 87 "mode_robdd.equiv_vars.m"
            {
#line 87 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_11, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__LeaderB_10);
            }
#line 91 "mode_robdd.equiv_vars.m"
            if ((mode_robdd__equiv_vars__R_11 == (MR_Integer) 1))
#line 145 "mode_robdd.equiv_vars.m"
              {
#line 145 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__TypeInfo_22_71;
#line 145 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_41_41;
#line 145 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_48_48 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 145 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_49_49;
#line 145 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_58_58;
#line 145 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_64_64;
#line 169 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv2_V_49_49;
#line 193 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv4_V_64_64;
#line 192 "mode_robdd.equiv_vars.m"
                MR_Box mode_robdd__equiv_vars__conv5_V_41_41;

#line 169 "mode_robdd.equiv_vars.m"
                {
#line 169 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv2_V_49_49 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__LeaderB_10, (MR_Word) mode_robdd__equiv_vars__V_48_48, ((MR_Box) (mode_robdd__equiv_vars__LeaderA_9)));
                }
#line 169 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_49_49 = (MR_Word) mode_robdd__equiv_vars__conv2_V_49_49;
#line 5455 "mode_robdd.equiv_vars.c"
                {
#line 5457 "mode_robdd.equiv_vars.c"
                  mode_robdd__equiv_vars__TypeInfo_22_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5459 "mode_robdd.equiv_vars.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 5461 "mode_robdd.equiv_vars.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_32));
#line 5463 "mode_robdd.equiv_vars.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_32));
#line 5465 "mode_robdd.equiv_vars.c"
                }
#line 193 "mode_robdd.equiv_vars.m"
                {
#line 193 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 193 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_3_f_0_1));
#line 193 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
#line 193 "mode_robdd.equiv_vars.m"
                }
#line 193 "mode_robdd.equiv_vars.m"
                {
#line 193 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv4_V_64_64 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32);
                }
#line 193 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_64_64 = (MR_Word) mode_robdd__equiv_vars__conv4_V_64_64;
#line 192 "mode_robdd.equiv_vars.m"
                {
#line 192 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv5_V_41_41 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_22_71, (MR_Word) mode_robdd__equiv_vars__V_58_58, (MR_Word) mode_robdd__equiv_vars__V_49_49, ((MR_Box) (mode_robdd__equiv_vars__V_64_64)));
                }
#line 192 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_41_41 = ((MR_Word) mode_robdd__equiv_vars__conv5_V_41_41);
#line 145 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = (MR_Word) mode_robdd__equiv_vars__V_41_41;
#line 145 "mode_robdd.equiv_vars.m"
              }
#line 91 "mode_robdd.equiv_vars.m"
            else
#line 91 "mode_robdd.equiv_vars.m"
              if ((mode_robdd__equiv_vars__R_11 == (MR_Integer) 0))
#line 90 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 91 "mode_robdd.equiv_vars.m"
              else
#line 97 "mode_robdd.equiv_vars.m"
                {
#line 97 "mode_robdd.equiv_vars.m"
                  return mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__LeaderB_10, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__EQVars0_7);
                }
#line 87 "mode_robdd.equiv_vars.m"
          }
#line 100 "mode_robdd.equiv_vars.m"
        else
#line 101 "mode_robdd.equiv_vars.m"
          {
#line 101 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_14;

#line 101 "mode_robdd.equiv_vars.m"
            {
#line 101 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_14, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__VarB_6);
            }
#line 105 "mode_robdd.equiv_vars.m"
            if ((mode_robdd__equiv_vars__R_14 == (MR_Integer) 1))
#line 169 "mode_robdd.equiv_vars.m"
              {
#line 169 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_83_83 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 169 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_84_84;
#line 169 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv6_V_84_84;

#line 169 "mode_robdd.equiv_vars.m"
                {
#line 169 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv6_V_84_84 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__V_83_83, ((MR_Box) (mode_robdd__equiv_vars__LeaderA_9)));
                }
#line 169 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_84_84 = (MR_Word) mode_robdd__equiv_vars__conv6_V_84_84;
#line 169 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = (MR_Word) mode_robdd__equiv_vars__V_84_84;
#line 169 "mode_robdd.equiv_vars.m"
              }
#line 105 "mode_robdd.equiv_vars.m"
            else
#line 105 "mode_robdd.equiv_vars.m"
              if ((mode_robdd__equiv_vars__R_14 == (MR_Integer) 0))
#line 104 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 105 "mode_robdd.equiv_vars.m"
              else
#line 110 "mode_robdd.equiv_vars.m"
                {
#line 110 "mode_robdd.equiv_vars.m"
                  return mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__EQVars0_7);
                }
#line 101 "mode_robdd.equiv_vars.m"
          }
#line 100 "mode_robdd.equiv_vars.m"
      }
#line 113 "mode_robdd.equiv_vars.m"
    else
#line 126 "mode_robdd.equiv_vars.m"
      {
#line 126 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderB_17;
#line 163 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_9_92;
#line 163 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_90_90 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 163 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv7_LeaderB_17;

#line 5578 "mode_robdd.equiv_vars.c"
        {
#line 5580 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_9_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5582 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_92, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5584 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_92, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
#line 5586 "mode_robdd.equiv_vars.c"
        }
#line 163 "mode_robdd.equiv_vars.m"
        {
#line 163 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_92, mode_robdd__equiv_vars__TypeInfo_9_92, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__V_90_90, &mode_robdd__equiv_vars__conv7_LeaderB_17);
        }
#line 163 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 163 "mode_robdd.equiv_vars.m"
          {
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LeaderB_17 = ((MR_Word) mode_robdd__equiv_vars__conv7_LeaderB_17);
#line 163 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 163 "mode_robdd.equiv_vars.m"
          }
#line 126 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 115 "mode_robdd.equiv_vars.m"
          {
#line 115 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_15;

#line 115 "mode_robdd.equiv_vars.m"
            {
#line 115 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_15, mode_robdd__equiv_vars__LeaderB_17, mode_robdd__equiv_vars__VarA_5);
            }
#line 119 "mode_robdd.equiv_vars.m"
            if ((mode_robdd__equiv_vars__R_15 == (MR_Integer) 1))
#line 121 "mode_robdd.equiv_vars.m"
              {
#line 121 "mode_robdd.equiv_vars.m"
                return mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__LeaderB_17);
              }
#line 119 "mode_robdd.equiv_vars.m"
            else
#line 119 "mode_robdd.equiv_vars.m"
              if ((mode_robdd__equiv_vars__R_15 == (MR_Integer) 0))
#line 118 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 119 "mode_robdd.equiv_vars.m"
              else
#line 124 "mode_robdd.equiv_vars.m"
                {
#line 124 "mode_robdd.equiv_vars.m"
                  return mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__LeaderB_17, mode_robdd__equiv_vars__EQVars0_7);
                }
#line 115 "mode_robdd.equiv_vars.m"
          }
#line 126 "mode_robdd.equiv_vars.m"
        else
#line 127 "mode_robdd.equiv_vars.m"
          {
#line 127 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_16;

#line 127 "mode_robdd.equiv_vars.m"
            {
#line 127 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_16, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__VarB_6);
            }
#line 131 "mode_robdd.equiv_vars.m"
            if ((mode_robdd__equiv_vars__R_16 == (MR_Integer) 1))
#line 132 "mode_robdd.equiv_vars.m"
              {
#line 132 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_13_13;

#line 133 "mode_robdd.equiv_vars.m"
                {
#line 133 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__V_13_13 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__VarA_5);
                }
#line 133 "mode_robdd.equiv_vars.m"
                {
#line 133 "mode_robdd.equiv_vars.m"
                  return mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__V_13_13, mode_robdd__equiv_vars__VarA_5);
                }
#line 132 "mode_robdd.equiv_vars.m"
              }
#line 131 "mode_robdd.equiv_vars.m"
            else
#line 131 "mode_robdd.equiv_vars.m"
              if ((mode_robdd__equiv_vars__R_16 == (MR_Integer) 0))
#line 130 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 131 "mode_robdd.equiv_vars.m"
              else
#line 136 "mode_robdd.equiv_vars.m"
                {
#line 136 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_12_12;

#line 137 "mode_robdd.equiv_vars.m"
                  {
#line 137 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_12_12 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__VarB_6);
                  }
#line 137 "mode_robdd.equiv_vars.m"
                  {
#line 137 "mode_robdd.equiv_vars.m"
                    return mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__V_12_12, mode_robdd__equiv_vars__VarB_6);
                  }
#line 136 "mode_robdd.equiv_vars.m"
                }
#line 127 "mode_robdd.equiv_vars.m"
          }
#line 126 "mode_robdd.equiv_vars.m"
      }
#line 113 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__EQVars_8;
#line 113 "mode_robdd.equiv_vars.m"
  }
#line 26 "mode_robdd.equiv_vars.m"
}

#line 24 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__init_equiv_vars_0_f_0(
#line 24 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_3)
#line 24 "mode_robdd.equiv_vars.m"
{
#line 82 "mode_robdd.equiv_vars.m"
  {
#line 82 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 82 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__1_1;
#line 82 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_5;
#line 82 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_2_2;
#line 82 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_2_2;

#line 5724 "mode_robdd.equiv_vars.c"
    {
#line 5726 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5728 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5730 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_3));
#line 5732 "mode_robdd.equiv_vars.c"
    }
#line 82 "mode_robdd.equiv_vars.m"
    {
#line 82 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_2_2 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_5, mode_robdd__equiv_vars__TypeInfo_5_5);
    }
#line 82 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_2_2 = (MR_Word) mode_robdd__equiv_vars__conv0_V_2_2;
#line 82 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__1_1 = (MR_Word) mode_robdd__equiv_vars__V_2_2;
#line 82 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__1_1;
#line 82 "mode_robdd.equiv_vars.m"
  }
#line 24 "mode_robdd.equiv_vars.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mode_robdd.equiv_vars. */
