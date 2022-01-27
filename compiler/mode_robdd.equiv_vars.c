/*
** Automatically generated from `mode_robdd.equiv_vars.m'
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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



#line 286 "mode_robdd.equiv_vars.m"
struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s {
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29;
#line 286 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont;
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr;
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29;
#line 286 "mode_robdd.equiv_vars.m"
};

#line 286 "mode_robdd.equiv_vars.m"
struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s {
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1;
#line 286 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont;
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr;
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29;
#line 286 "mode_robdd.equiv_vars.m"
};


#line 165 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__pseudo_1;

#line 168 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 171 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1;

#line 174 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 177 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 180 "mode_robdd.equiv_vars.c"
static const MR_VA_PseudoTypeInfo_Struct3 mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 183 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 186 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 189 "mode_robdd.equiv_vars.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 192 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 324 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4);

#line 321 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 329 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7);

#line 195 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_10,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_11);

#line 378 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(
#line 378 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 378 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 378 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9);

#line 362 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_19,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_20,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_21,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__4_22,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__5_23,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__6_24);

#line 313 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(
#line 313 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14);

#line 305 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(
#line 305 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 305 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Th_4,
#line 305 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_15);

#line 288 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__NewLeader_10,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_18,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_19);

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1(
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg);

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_5,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__M0_8,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__4_29,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr);

#line 177 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_15);

#line 340 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
#line 340 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_13,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_5,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Leader_6,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Tuple mode_robdd__equiv_vars__HeadVar__3_3,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Tuple * mode_robdd__equiv_vars__HeadVar__4_4);

#line 329 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7);

#line 259 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10);

#line 250 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5);

#line 220 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10);

#line 211 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5);

#line 169 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_11,
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var0_5,
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_6,
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_7);

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 145 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__A_5,
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__B_6,
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_7);

#line 378 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
#line 378 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 378 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1);

#line 357 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_5,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_6);

#line 324 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4);

#line 321 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 313 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
#line 313 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 305 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
#line 305 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 305 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1);

#line 288 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
#line 288 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg);

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_1,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr);

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 177 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3);

#line 153 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
#line 153 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 153 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 153 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2);

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
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



#line 841 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 849 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

#line 858 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 866 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

#line 875 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__pti_var_1__pseudo_1
  }
};

#line 883 "mode_robdd.equiv_vars.c"
static const MR_VA_PseudoTypeInfo_Struct3 mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 894 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 902 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 910 "mode_robdd.equiv_vars.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 918 "mode_robdd.equiv_vars.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 38 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 38 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_4,
#line 38 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 38 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__3_3)
#line 38 "mode_robdd.equiv_vars.m"
{
#line 165 "mode_robdd.equiv_vars.m"
  {
#line 165 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_9 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_6_6 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_HeadVar__3_3;

#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__Var_4, mode_robdd__equiv_vars__V_6_6, &mode_robdd__equiv_vars__conv0_HeadVar__3_3);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__3_3);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 165 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 165 "mode_robdd.equiv_vars.m"
  }
#line 38 "mode_robdd.equiv_vars.m"
}

#line 324 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4)
#line 324 "mode_robdd.equiv_vars.m"
{
#line 324 "mode_robdd.equiv_vars.m"
  {
#line 324 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 324 "mode_robdd.equiv_vars.m"
    MR_Tuple mode_robdd__equiv_vars__conv2_HeadVar__4_4;

#line 324 "mode_robdd.equiv_vars.m"
    {
#line 324 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Tuple) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv2_HeadVar__4_4);
    }
#line 324 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_HeadVar__4_4));
#line 324 "mode_robdd.equiv_vars.m"
  }
#line 324 "mode_robdd.equiv_vars.m"
}

#line 321 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 321 "mode_robdd.equiv_vars.m"
{
#line 321 "mode_robdd.equiv_vars.m"
  {
#line 321 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 321 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 321 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_4;

#line 321 "mode_robdd.equiv_vars.m"
    {
#line 321 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__4_4 = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 321 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__4_4));
#line 321 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 321 "mode_robdd.equiv_vars.m"
  }
#line 321 "mode_robdd.equiv_vars.m"
}

#line 58 "mode_robdd.equiv_vars.m"
void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Changed_6,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vars0_7,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Vars_8,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_9,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__EQVars_10)
#line 58 "mode_robdd.equiv_vars.m"
{
#line 320 "mode_robdd.equiv_vars.m"
  {
#line 320 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 316 "mode_robdd.equiv_vars.m"
    {
#line 316 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__empty_1_p_0((MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0], mode_robdd__equiv_vars__Vars0_7);
    }
#line 316 "mode_robdd.equiv_vars.m"
    if (!(mode_robdd__equiv_vars__succeeded))
#line 174 "mode_robdd.equiv_vars.m"
      {
#line 174 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_5_48 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 174 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LM_46 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;

#line 174 "mode_robdd.equiv_vars.m"
        {
#line 174 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_48, mode_robdd__equiv_vars__TypeInfo_5_48, mode_robdd__equiv_vars__LM_46);
        }
#line 174 "mode_robdd.equiv_vars.m"
      }
#line 320 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 317 "mode_robdd.equiv_vars.m"
      {
#line 317 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = mode_robdd__equiv_vars__Vars0_7;
#line 318 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = mode_robdd__equiv_vars__EQVars0_9;
#line 319 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = (MR_Integer) 0;
#line 317 "mode_robdd.equiv_vars.m"
      }
#line 320 "mode_robdd.equiv_vars.m"
    else
#line 322 "mode_robdd.equiv_vars.m"
      {
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__Vars1_11;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap0_12;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap_13;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_14_14;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_17_17;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_18_18;
#line 321 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_Vars1_11;
#line 324 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv3_V_18_18;

#line 321 "mode_robdd.equiv_vars.m"
        {
#line 321 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[3]));
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1));
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__EQVars0_9));
#line 321 "mode_robdd.equiv_vars.m"
        }
#line 321 "mode_robdd.equiv_vars.m"
        {
#line 321 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[1], (MR_Word) &mode_robdd__equiv_vars_scalar_common_7[0], mode_robdd__equiv_vars__V_14_14, mode_robdd__equiv_vars__Vars0_7, ((MR_Box) (mode_robdd__equiv_vars__Vars0_7)));
        }
#line 321 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars1_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_Vars1_11);
#line 323 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap0_12 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;
#line 325 "mode_robdd.equiv_vars.m"
        {
#line 325 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_17_17 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) ((MR_Integer) 0));
#line 325 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars1_11));
#line 325 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__LeaderMap0_12));
#line 325 "mode_robdd.equiv_vars.m"
        }
#line 324 "mode_robdd.equiv_vars.m"
        {
#line 324 "mode_robdd.equiv_vars.m"
          mercury__map__foldl_4_p_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, (MR_Word) &mode_robdd__equiv_vars_scalar_common_9[0], (MR_Word) &mode_robdd__equiv_vars_scalar_common_8[0], mode_robdd__equiv_vars__LeaderMap0_12, ((MR_Box) (mode_robdd__equiv_vars__V_17_17)), &mode_robdd__equiv_vars__conv3_V_18_18);
        }
#line 324 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__V_18_18 = ((MR_Tuple) mode_robdd__equiv_vars__conv3_V_18_18);
#line 325 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 0)));
#line 325 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 1)));
#line 325 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 2)));
#line 326 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = (MR_Word) mode_robdd__equiv_vars__LeaderMap_13;
#line 322 "mode_robdd.equiv_vars.m"
      }
#line 320 "mode_robdd.equiv_vars.m"
  }
#line 58 "mode_robdd.equiv_vars.m"
}

#line 329 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7)
#line 329 "mode_robdd.equiv_vars.m"
{
#line 333 "mode_robdd.equiv_vars.m"
  {
#line 333 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 333 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 333 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_20 = (MR_Word) &mode_robdd__equiv_vars_scalar_common_6[0];
#line 333 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_8;
#line 334 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_8;

#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, mode_robdd__equiv_vars__TypeInfo_9_20, mode_robdd__equiv_vars__TypeInfo_9_20, mode_robdd__equiv_vars__V_6, mode_robdd__equiv_vars__V_17_17, &mode_robdd__equiv_vars__conv0_L_8);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_8 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_8);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 333 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 335 "mode_robdd.equiv_vars.m"
      {
#line 335 "mode_robdd.equiv_vars.m"
        {
#line 335 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &mode_robdd__equiv_vars_scalar_common_7[0], mode_robdd__equiv_vars__Vs_7, mode_robdd__equiv_vars__L_8);
        }
#line 335 "mode_robdd.equiv_vars.m"
      }
#line 333 "mode_robdd.equiv_vars.m"
    else
#line 337 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__4_4 = mode_robdd__equiv_vars__Vs_7;
#line 333 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 333 "mode_robdd.equiv_vars.m"
  }
#line 329 "mode_robdd.equiv_vars.m"
}

#line 195 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_10,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_11)
#line 195 "mode_robdd.equiv_vars.m"
{
#line 195 "mode_robdd.equiv_vars.m"
  {
#line 195 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__4_12;

#line 196 "mode_robdd.equiv_vars.m"
    {
#line 196 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__LambdaHeadVar__2_10, mode_robdd__equiv_vars__LambdaHeadVar__1_9);
    }
#line 195 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 197 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__LambdaHeadVar__4_12 = mode_robdd__equiv_vars__LambdaHeadVar__3_11;
#line 195 "mode_robdd.equiv_vars.m"
    else
#line 200 "mode_robdd.equiv_vars.m"
      {
#line 200 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
#line 200 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderLeader_7;
#line 198 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv0_LeaderLeader_7;

#line 1274 "mode_robdd.equiv_vars.c"
        {
#line 1276 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1278 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1280 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 1282 "mode_robdd.equiv_vars.c"
        }
#line 198 "mode_robdd.equiv_vars.m"
        {
#line 198 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__LambdaHeadVar__2_10, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_11, &mode_robdd__equiv_vars__conv0_LeaderLeader_7);
        }
#line 198 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 198 "mode_robdd.equiv_vars.m"
          {
#line 198 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LeaderLeader_7 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderLeader_7);
#line 198 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 198 "mode_robdd.equiv_vars.m"
          }
#line 200 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 199 "mode_robdd.equiv_vars.m"
          {
#line 199 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12;

#line 199 "mode_robdd.equiv_vars.m"
            {
#line 199 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__LambdaHeadVar__1_9, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_11, ((MR_Box) (mode_robdd__equiv_vars__LeaderLeader_7)));
            }
#line 199 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LambdaHeadVar__4_12 = (MR_Word) mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12;
#line 199 "mode_robdd.equiv_vars.m"
          }
#line 200 "mode_robdd.equiv_vars.m"
        else
#line 201 "mode_robdd.equiv_vars.m"
          {
#line 201 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
#line 201 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_13_13;
#line 195 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv2_V_13_13;
#line 195 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12;

#line 1328 "mode_robdd.equiv_vars.c"
            {
#line 1330 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1332 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1334 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 1336 "mode_robdd.equiv_vars.c"
            }
#line 195 "mode_robdd.equiv_vars.m"
            {
#line 195 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv2_V_13_13 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__1_9, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_11, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_10)));
            }
#line 195 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__conv2_V_13_13;
#line 195 "mode_robdd.equiv_vars.m"
            {
#line 195 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_18, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__2_10, (MR_Word) mode_robdd__equiv_vars__V_13_13, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_10)));
            }
#line 195 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LambdaHeadVar__4_12 = (MR_Word) mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12;
#line 201 "mode_robdd.equiv_vars.m"
          }
#line 200 "mode_robdd.equiv_vars.m"
      }
#line 195 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__LambdaHeadVar__4_12;
#line 195 "mode_robdd.equiv_vars.m"
  }
#line 195 "mode_robdd.equiv_vars.m"
}

#line 378 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(
#line 378 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 378 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 378 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_9)
#line 378 "mode_robdd.equiv_vars.m"
{
#line 167 "mode_robdd.equiv_vars.m"
  {
#line 167 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 167 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_10;
#line 167 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_17;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_22;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_20_20 = (MR_Word) mode_robdd__equiv_vars__EQVars_4;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_17;

#line 1389 "mode_robdd.equiv_vars.c"
    {
#line 1391 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1395 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 1397 "mode_robdd.equiv_vars.c"
    }
#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__TypeInfo_9_22, mode_robdd__equiv_vars__TypeInfo_9_22, mode_robdd__equiv_vars__LambdaHeadVar__1_9, (MR_Word) mode_robdd__equiv_vars__V_20_20, &mode_robdd__equiv_vars__conv0_L_17);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_17 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_17);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 167 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 167 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__LambdaHeadVar__2_10 = mode_robdd__equiv_vars__L_17;
#line 167 "mode_robdd.equiv_vars.m"
    else
#line 167 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__LambdaHeadVar__2_10 = mode_robdd__equiv_vars__LambdaHeadVar__1_9;
#line 167 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__LambdaHeadVar__2_10;
#line 167 "mode_robdd.equiv_vars.m"
  }
#line 378 "mode_robdd.equiv_vars.m"
}

#line 362 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_19,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_20,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_21,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__4_22,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__5_23,
#line 362 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__LambdaHeadVar__6_24)
#line 362 "mode_robdd.equiv_vars.m"
{
#line 362 "mode_robdd.equiv_vars.m"
  {
#line 362 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 362 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_35;
#line 359 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_33_33;

#line 1457 "mode_robdd.equiv_vars.c"
    {
#line 1459 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1461 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1463 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1465 "mode_robdd.equiv_vars.c"
    }
#line 1467 "mode_robdd.equiv_vars.c"
    {
#line 1469 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1473 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1475 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_33_33));
#line 1477 "mode_robdd.equiv_vars.c"
    }
#line 359 "mode_robdd.equiv_vars.m"
    {
#line 359 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, mode_robdd__equiv_vars__LambdaHeadVar__3_21, mode_robdd__equiv_vars__LambdaHeadVar__2_20);
    }
#line 362 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 360 "mode_robdd.equiv_vars.m"
      {
#line 360 "mode_robdd.equiv_vars.m"
        {
#line 360 "mode_robdd.equiv_vars.m"
          *mode_robdd__equiv_vars__LambdaHeadVar__4_22 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_35, mode_robdd__equiv_vars__LambdaHeadVar__3_21, mode_robdd__equiv_vars__LambdaHeadVar__1_19);
        }
#line 361 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__LambdaHeadVar__6_24 = mode_robdd__equiv_vars__LambdaHeadVar__5_23;
#line 360 "mode_robdd.equiv_vars.m"
      }
#line 362 "mode_robdd.equiv_vars.m"
    else
#line 365 "mode_robdd.equiv_vars.m"
      {
#line 365 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_43;
#line 362 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_41_41;

#line 1506 "mode_robdd.equiv_vars.c"
        {
#line 1508 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1510 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1512 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1514 "mode_robdd.equiv_vars.c"
        }
#line 1516 "mode_robdd.equiv_vars.c"
        {
#line 1518 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1520 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1522 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 1524 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_41_41));
#line 1526 "mode_robdd.equiv_vars.c"
        }
#line 362 "mode_robdd.equiv_vars.m"
        {
#line 362 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, mode_robdd__equiv_vars__LambdaHeadVar__5_23, mode_robdd__equiv_vars__LambdaHeadVar__2_20);
        }
#line 365 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 363 "mode_robdd.equiv_vars.m"
          {
#line 363 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__LambdaHeadVar__4_22 = mode_robdd__equiv_vars__LambdaHeadVar__3_21;
#line 364 "mode_robdd.equiv_vars.m"
            {
#line 364 "mode_robdd.equiv_vars.m"
              *mode_robdd__equiv_vars__LambdaHeadVar__6_24 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_31, mode_robdd__equiv_vars__TypeClassInfo_for_enum_43, mode_robdd__equiv_vars__LambdaHeadVar__5_23, mode_robdd__equiv_vars__LambdaHeadVar__1_19);
            }
#line 363 "mode_robdd.equiv_vars.m"
          }
#line 365 "mode_robdd.equiv_vars.m"
        else
#line 366 "mode_robdd.equiv_vars.m"
          {
#line 366 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__LambdaHeadVar__4_22 = mode_robdd__equiv_vars__LambdaHeadVar__3_21;
#line 367 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__LambdaHeadVar__6_24 = mode_robdd__equiv_vars__LambdaHeadVar__5_23;
#line 366 "mode_robdd.equiv_vars.m"
          }
#line 365 "mode_robdd.equiv_vars.m"
      }
#line 362 "mode_robdd.equiv_vars.m"
  }
#line 362 "mode_robdd.equiv_vars.m"
}

#line 313 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(
#line 313 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14)
#line 313 "mode_robdd.equiv_vars.m"
{
#line 313 "mode_robdd.equiv_vars.m"
  {
#line 313 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 313 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_15;
#line 313 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
#line 313 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_15;

#line 1585 "mode_robdd.equiv_vars.c"
    {
#line 1587 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1591 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 1593 "mode_robdd.equiv_vars.c"
    }
#line 313 "mode_robdd.equiv_vars.m"
    {
#line 313 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_15 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__2_14, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__1_13)));
    }
#line 313 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LambdaHeadVar__3_15 = (MR_Word) mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_15;
#line 313 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__LambdaHeadVar__3_15;
#line 313 "mode_robdd.equiv_vars.m"
  }
#line 313 "mode_robdd.equiv_vars.m"
}

#line 305 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(
#line 305 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 305 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Th_4,
#line 305 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_15)
#line 305 "mode_robdd.equiv_vars.m"
{
#line 305 "mode_robdd.equiv_vars.m"
  {
#line 305 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 305 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__LambdaHeadVar__1_15, (MR_Integer) 0)));
#line 305 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__LambdaHeadVar__1_15, (MR_Integer) 1)));
#line 306 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_27_27;

#line 306 "mode_robdd.equiv_vars.m"
    {
#line 306 "mode_robdd.equiv_vars.m"
      mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_20, &mode_robdd__equiv_vars__V_27_27, mode_robdd__equiv_vars__V_18, mode_robdd__equiv_vars__Th_4);
    }
#line 306 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = ((MR_Integer) 2 == mode_robdd__equiv_vars__V_27_27);
#line 306 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
#line 305 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 305 "mode_robdd.equiv_vars.m"
  }
#line 305 "mode_robdd.equiv_vars.m"
}

#line 288 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__NewLeader_10,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_18,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_19)
#line 288 "mode_robdd.equiv_vars.m"
{
#line 288 "mode_robdd.equiv_vars.m"
  {
#line 288 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 288 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_20;
#line 288 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_35_35;
#line 288 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_20;

#line 1671 "mode_robdd.equiv_vars.c"
    {
#line 1673 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1675 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1677 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 1679 "mode_robdd.equiv_vars.c"
    }
#line 288 "mode_robdd.equiv_vars.m"
    {
#line 288 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_20 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__TypeInfo_35_35, mode_robdd__equiv_vars__TypeInfo_35_35, mode_robdd__equiv_vars__LambdaHeadVar__1_18, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__2_19, ((MR_Box) (mode_robdd__equiv_vars__NewLeader_10)));
    }
#line 288 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LambdaHeadVar__3_20 = (MR_Word) mode_robdd__equiv_vars__conv0_LambdaHeadVar__3_20;
#line 288 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__LambdaHeadVar__3_20;
#line 288 "mode_robdd.equiv_vars.m"
  }
#line 288 "mode_robdd.equiv_vars.m"
}

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1(
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg)
#line 286 "mode_robdd.equiv_vars.m"
{
#line 286 "mode_robdd.equiv_vars.m"
  {
#line 286 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s * mode_robdd__equiv_vars__env_ptr = (struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s *) mode_robdd__equiv_vars__env_ptr_arg;

#line 286 "mode_robdd.equiv_vars.m"
    *((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29) = ((MR_Word) (mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29);
#line 286 "mode_robdd.equiv_vars.m"
    {
#line 286 "mode_robdd.equiv_vars.m"
      ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont)((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr);
    }
#line 286 "mode_robdd.equiv_vars.m"
  }
#line 286 "mode_robdd.equiv_vars.m"
}

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_5,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__M0_8,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__4_29,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr)
#line 286 "mode_robdd.equiv_vars.m"
{
#line 286 "mode_robdd.equiv_vars.m"
  {
#line 286 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s mode_robdd__equiv_vars__env;

#line 286 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29 = mode_robdd__equiv_vars__HeadVar__4_29;
#line 286 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont = mode_robdd__equiv_vars__cont;
#line 286 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr = mode_robdd__equiv_vars__cont_env_ptr;
#line 286 "mode_robdd.equiv_vars.m"
    {
#line 286 "mode_robdd.equiv_vars.m"
      MR_bool mode_robdd__equiv_vars__succeeded;
#line 286 "mode_robdd.equiv_vars.m"
      MR_Word mode_robdd__equiv_vars__TypeInfo_31_31;

#line 1754 "mode_robdd.equiv_vars.c"
      {
#line 1756 "mode_robdd.equiv_vars.c"
        mode_robdd__equiv_vars__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1758 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1760 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 1762 "mode_robdd.equiv_vars.c"
      }
#line 286 "mode_robdd.equiv_vars.m"
      {
#line 286 "mode_robdd.equiv_vars.m"
        mercury__map__inverse_search_3_p_0(mode_robdd__equiv_vars__TypeInfo_31_31, mode_robdd__equiv_vars__TypeInfo_31_31, (MR_Word) mode_robdd__equiv_vars__M0_8, ((MR_Box) (mode_robdd__equiv_vars__V_5)), &(mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29, mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1, &mode_robdd__equiv_vars__env);
      }
#line 286 "mode_robdd.equiv_vars.m"
    }
#line 286 "mode_robdd.equiv_vars.m"
  }
#line 286 "mode_robdd.equiv_vars.m"
}

#line 177 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__1_13,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__2_14,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LambdaHeadVar__3_15)
#line 177 "mode_robdd.equiv_vars.m"
{
#line 177 "mode_robdd.equiv_vars.m"
  {
#line 177 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 177 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LambdaHeadVar__4_16;
#line 177 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
#line 177 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LeaderB_11;
#line 178 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_LeaderB_11;

#line 1802 "mode_robdd.equiv_vars.c"
    {
#line 1804 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1806 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1808 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 1810 "mode_robdd.equiv_vars.c"
    }
#line 178 "mode_robdd.equiv_vars.m"
    {
#line 178 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__1_13, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, &mode_robdd__equiv_vars__conv0_LeaderB_11);
    }
#line 178 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 178 "mode_robdd.equiv_vars.m"
      {
#line 178 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderB_11 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderB_11);
#line 178 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 178 "mode_robdd.equiv_vars.m"
      }
#line 177 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 181 "mode_robdd.equiv_vars.m"
      {
#line 179 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_39_39;

#line 179 "mode_robdd.equiv_vars.m"
        {
#line 179 "mode_robdd.equiv_vars.m"
          mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, &mode_robdd__equiv_vars__V_39_39, mode_robdd__equiv_vars__LambdaHeadVar__2_14, mode_robdd__equiv_vars__LeaderB_11);
        }
#line 179 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = ((MR_Integer) 1 == mode_robdd__equiv_vars__V_39_39);
#line 181 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 180 "mode_robdd.equiv_vars.m"
          {
#line 180 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_16;

#line 180 "mode_robdd.equiv_vars.m"
            {
#line 180 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LeaderB_11, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_14)));
            }
#line 180 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LambdaHeadVar__4_16 = (MR_Word) mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_16;
#line 180 "mode_robdd.equiv_vars.m"
          }
#line 181 "mode_robdd.equiv_vars.m"
        else
#line 183 "mode_robdd.equiv_vars.m"
          {
#line 181 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_40_40;

#line 181 "mode_robdd.equiv_vars.m"
            {
#line 181 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, &mode_robdd__equiv_vars__V_40_40, mode_robdd__equiv_vars__LeaderB_11, mode_robdd__equiv_vars__LambdaHeadVar__2_14);
            }
#line 181 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = ((MR_Integer) 1 == mode_robdd__equiv_vars__V_40_40);
#line 183 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 182 "mode_robdd.equiv_vars.m"
              {
#line 182 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_16;

#line 182 "mode_robdd.equiv_vars.m"
                {
#line 182 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__LambdaHeadVar__2_14, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, ((MR_Box) (mode_robdd__equiv_vars__LeaderB_11)));
                }
#line 182 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__LambdaHeadVar__4_16 = (MR_Word) mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_16;
#line 182 "mode_robdd.equiv_vars.m"
              }
#line 183 "mode_robdd.equiv_vars.m"
            else
#line 184 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__LambdaHeadVar__4_16 = mode_robdd__equiv_vars__LambdaHeadVar__3_15;
#line 183 "mode_robdd.equiv_vars.m"
          }
#line 181 "mode_robdd.equiv_vars.m"
      }
#line 177 "mode_robdd.equiv_vars.m"
    else
#line 187 "mode_robdd.equiv_vars.m"
      {
#line 187 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_38_38;
#line 187 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_16;

#line 1904 "mode_robdd.equiv_vars.c"
        {
#line 1906 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1908 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1910 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 1912 "mode_robdd.equiv_vars.c"
        }
#line 187 "mode_robdd.equiv_vars.m"
        {
#line 187 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_22, mode_robdd__equiv_vars__TypeInfo_38_38, mode_robdd__equiv_vars__TypeInfo_38_38, mode_robdd__equiv_vars__LambdaHeadVar__1_13, (MR_Word) mode_robdd__equiv_vars__LambdaHeadVar__3_15, ((MR_Box) (mode_robdd__equiv_vars__LambdaHeadVar__2_14)));
        }
#line 187 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LambdaHeadVar__4_16 = (MR_Word) mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_16;
#line 187 "mode_robdd.equiv_vars.m"
      }
#line 177 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__LambdaHeadVar__4_16;
#line 177 "mode_robdd.equiv_vars.m"
  }
#line 177 "mode_robdd.equiv_vars.m"
}

#line 340 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
#line 340 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_13,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_5,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Leader_6,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Tuple mode_robdd__equiv_vars__HeadVar__3_3,
#line 340 "mode_robdd.equiv_vars.m"
  MR_Tuple * mode_robdd__equiv_vars__HeadVar__4_4)
#line 340 "mode_robdd.equiv_vars.m"
{
#line 345 "mode_robdd.equiv_vars.m"
  {
#line 345 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 345 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Changed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 345 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 345 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 345 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Changed_10;
#line 345 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_11;
#line 345 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_12;
#line 350 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_15_15;
#line 350 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_17;

#line 1966 "mode_robdd.equiv_vars.c"
    {
#line 1968 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1970 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1972 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_15_15, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_13));
#line 1974 "mode_robdd.equiv_vars.c"
    }
#line 1976 "mode_robdd.equiv_vars.c"
    {
#line 1978 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1980 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 1982 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_13));
#line 1984 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_15_15));
#line 1986 "mode_robdd.equiv_vars.c"
    }
#line 346 "mode_robdd.equiv_vars.m"
    {
#line 346 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_13, mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, mode_robdd__equiv_vars__Vars0_8, mode_robdd__equiv_vars__Leader_6);
    }
#line 350 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 347 "mode_robdd.equiv_vars.m"
      {
#line 348 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__conv0_LM_12;

#line 347 "mode_robdd.equiv_vars.m"
        {
#line 347 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__Vars_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_13, mode_robdd__equiv_vars__TypeClassInfo_for_enum_17, mode_robdd__equiv_vars__Vars0_8, mode_robdd__equiv_vars__Var_5);
        }
#line 348 "mode_robdd.equiv_vars.m"
        {
#line 348 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv0_LM_12 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_15_15, mode_robdd__equiv_vars__TypeInfo_15_15, (MR_Word) mode_robdd__equiv_vars__LM0_9, ((MR_Box) (mode_robdd__equiv_vars__Var_5)));
        }
#line 348 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LM_12 = (MR_Word) mode_robdd__equiv_vars__conv0_LM_12;
#line 349 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Changed_10 = (MR_Integer) 1;
#line 347 "mode_robdd.equiv_vars.m"
      }
#line 350 "mode_robdd.equiv_vars.m"
    else
#line 351 "mode_robdd.equiv_vars.m"
      {
#line 351 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars_11 = mode_robdd__equiv_vars__Vars0_8;
#line 352 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LM_12 = mode_robdd__equiv_vars__LM0_9;
#line 353 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Changed_10 = mode_robdd__equiv_vars__Changed0_7;
#line 351 "mode_robdd.equiv_vars.m"
      }
#line 345 "mode_robdd.equiv_vars.m"
    {
#line 345 "mode_robdd.equiv_vars.m"
      MR_Tuple base;
#line 345 "mode_robdd.equiv_vars.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 345 "mode_robdd.equiv_vars.m"
      *mode_robdd__equiv_vars__HeadVar__4_4 = base;
#line 345 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__Changed_10));
#line 345 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars_11));
#line 345 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__equiv_vars__LM_12));
#line 345 "mode_robdd.equiv_vars.m"
    }
#line 345 "mode_robdd.equiv_vars.m"
  }
#line 340 "mode_robdd.equiv_vars.m"
}

#line 329 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_6,
#line 329 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vs_7)
#line 329 "mode_robdd.equiv_vars.m"
{
#line 333 "mode_robdd.equiv_vars.m"
  {
#line 333 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 333 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 333 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_18;
#line 333 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_8;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_16_16 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_8;

#line 2077 "mode_robdd.equiv_vars.c"
    {
#line 2079 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2081 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2083 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_18, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 2085 "mode_robdd.equiv_vars.c"
    }
#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeInfo_9_18, mode_robdd__equiv_vars__TypeInfo_9_18, mode_robdd__equiv_vars__V_6, (MR_Word) mode_robdd__equiv_vars__V_16_16, &mode_robdd__equiv_vars__conv0_L_8);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_8 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_8);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 333 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 335 "mode_robdd.equiv_vars.m"
      {
#line 335 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_13;

#line 2109 "mode_robdd.equiv_vars.c"
        {
#line 2111 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2113 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 2115 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 2117 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_18));
#line 2119 "mode_robdd.equiv_vars.c"
        }
#line 335 "mode_robdd.equiv_vars.m"
        {
#line 335 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, mode_robdd__equiv_vars__Vs_7, mode_robdd__equiv_vars__L_8);
        }
#line 335 "mode_robdd.equiv_vars.m"
      }
#line 333 "mode_robdd.equiv_vars.m"
    else
#line 337 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__4_4 = mode_robdd__equiv_vars__Vs_7;
#line 333 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 333 "mode_robdd.equiv_vars.m"
  }
#line 329 "mode_robdd.equiv_vars.m"
}

#line 259 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 259 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10)
#line 259 "mode_robdd.equiv_vars.m"
{
#line 263 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 263 "mode_robdd.equiv_vars.m"
    {
#line 263 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 263 "mode_robdd.equiv_vars.m"
      {
#line 263 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 263 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "mode_robdd.equiv_vars.m"
          {
#line 263 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 263 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__10_10 = mode_robdd__equiv_vars__DCG_0_9;
#line 263 "mode_robdd.equiv_vars.m"
          }
#line 263 "mode_robdd.equiv_vars.m"
        else
#line 264 "mode_robdd.equiv_vars.m"
          {
#line 264 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_46;
#line 266 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_36_36;
#line 266 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_44_44 = (MR_Word) mode_robdd__equiv_vars__EA_7;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_V_36_36;
#line 267 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_37_37;
#line 267 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_49_49;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_V_37_37;

#line 2210 "mode_robdd.equiv_vars.c"
            {
#line 2212 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2214 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2216 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_35));
#line 2218 "mode_robdd.equiv_vars.c"
            }
#line 165 "mode_robdd.equiv_vars.m"
            {
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_44_44, &mode_robdd__equiv_vars__conv0_V_36_36);
            }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              {
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_36_36 = ((MR_Word) mode_robdd__equiv_vars__conv0_V_36_36);
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
              }
#line 266 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 266 "mode_robdd.equiv_vars.m"
              {
#line 266 "mode_robdd.equiv_vars.m"
                {
#line 266 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__V_36_36);
                }
#line 266 "mode_robdd.equiv_vars.m"
                if (mode_robdd__equiv_vars__succeeded)
#line 266 "mode_robdd.equiv_vars.m"
                  {
#line 165 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_49_49 = (MR_Word) mode_robdd__equiv_vars__EB_8;
#line 165 "mode_robdd.equiv_vars.m"
                    {
#line 165 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_49_49, &mode_robdd__equiv_vars__conv1_V_37_37);
                    }
#line 165 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
                      {
#line 165 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__V_37_37 = ((MR_Word) mode_robdd__equiv_vars__conv1_V_37_37);
#line 165 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
                      }
#line 267 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 267 "mode_robdd.equiv_vars.m"
                      {
#line 267 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__V_37_37);
                      }
#line 267 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
#line 266 "mode_robdd.equiv_vars.m"
                  }
#line 266 "mode_robdd.equiv_vars.m"
              }
#line 277 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 269 "mode_robdd.equiv_vars.m"
              {
#line 269 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_1_30;
#line 269 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_2_31;
#line 269 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_55_55 = (MR_Word) mode_robdd__equiv_vars__DCG_0_9;
#line 269 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_56_56;
#line 171 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv2_V_56_56;

#line 171 "mode_robdd.equiv_vars.m"
                {
#line 171 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv2_V_56_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_55_55, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                }
#line 171 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_56_56 = (MR_Word) mode_robdd__equiv_vars__conv2_V_56_56;
#line 171 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__DCG_1_30 = (MR_Word) mode_robdd__equiv_vars__V_56_56;
#line 272 "mode_robdd.equiv_vars.m"
#line 272 "mode_robdd.equiv_vars.m"
                switch (mode_robdd__equiv_vars__Match_6) {
#line 272 "mode_robdd.equiv_vars.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 272 "mode_robdd.equiv_vars.m"
                  case (MR_Integer) 0:
#line 171 "mode_robdd.equiv_vars.m"
                    {
#line 171 "mode_robdd.equiv_vars.m"
                      MR_Word mode_robdd__equiv_vars__V_64_64;
#line 171 "mode_robdd.equiv_vars.m"
                      MR_Word mode_robdd__equiv_vars__conv3_V_64_64;

#line 171 "mode_robdd.equiv_vars.m"
                      {
#line 171 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__conv3_V_64_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__L_3, (MR_Word) mode_robdd__equiv_vars__V_56_56, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                      }
#line 171 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__V_64_64 = (MR_Word) mode_robdd__equiv_vars__conv3_V_64_64;
#line 171 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__DCG_2_31 = (MR_Word) mode_robdd__equiv_vars__V_64_64;
#line 171 "mode_robdd.equiv_vars.m"
                    }
#line 272 "mode_robdd.equiv_vars.m"
                    break;
#line 272 "mode_robdd.equiv_vars.m"
                  case (MR_Integer) 1:
#line 272 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__DCG_2_31 = mode_robdd__equiv_vars__DCG_1_30;
#line 272 "mode_robdd.equiv_vars.m"
                    break;
#line 272 "mode_robdd.equiv_vars.m"
                }
#line 276 "mode_robdd.equiv_vars.m"
                /* direct tailcall eliminated */
#line 276 "mode_robdd.equiv_vars.m"
                {
#line 276 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs0_20;
#line 276 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_9 = mode_robdd__equiv_vars__DCG_2_31;

#line 276 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__DCG_0_9 = mode_robdd__equiv_vars__DCG_0__tmp_copy_9;
#line 276 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__Match_6 = (MR_Integer) 1;
#line 276 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 276 "mode_robdd.equiv_vars.m"
                }
#line 276 "mode_robdd.equiv_vars.m"
                continue;
#line 269 "mode_robdd.equiv_vars.m"
              }
#line 277 "mode_robdd.equiv_vars.m"
            else
#line 278 "mode_robdd.equiv_vars.m"
              {
#line 278 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__Vs1_28;

#line 278 "mode_robdd.equiv_vars.m"
                {
#line 278 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__diff_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__Vs0_20, &mode_robdd__equiv_vars__Vs1_28, mode_robdd__equiv_vars__L_3, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Match_6, mode_robdd__equiv_vars__EA_7, mode_robdd__equiv_vars__EB_8, mode_robdd__equiv_vars__DCG_0_9, mode_robdd__equiv_vars__HeadVar__10_10);
                }
#line 279 "mode_robdd.equiv_vars.m"
                {
#line 279 "mode_robdd.equiv_vars.m"
                  MR_Word base;
#line 279 "mode_robdd.equiv_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "mode_robdd.equiv_vars.m"
                  *mode_robdd__equiv_vars__HeadVar__2_2 = base;
#line 279 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__V_19));
#line 279 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vs1_28));
#line 279 "mode_robdd.equiv_vars.m"
                }
#line 278 "mode_robdd.equiv_vars.m"
              }
#line 264 "mode_robdd.equiv_vars.m"
          }
#line 263 "mode_robdd.equiv_vars.m"
      }
#line 263 "mode_robdd.equiv_vars.m"
      break;
#line 263 "mode_robdd.equiv_vars.m"
    }
#line 259 "mode_robdd.equiv_vars.m"
}

#line 250 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 250 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5)
#line 250 "mode_robdd.equiv_vars.m"
{
#line 253 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 253 "mode_robdd.equiv_vars.m"
    {
#line 253 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 253 "mode_robdd.equiv_vars.m"
      {
#line 253 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 253 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "mode_robdd.equiv_vars.m"
          *mode_robdd__equiv_vars__HeadVar__5_5 = mode_robdd__equiv_vars__DCG_0_4;
#line 253 "mode_robdd.equiv_vars.m"
        else
#line 254 "mode_robdd.equiv_vars.m"
          {
#line 254 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs_15;
#line 254 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__DCG_1_17;
#line 254 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19_19;
#line 254 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_20_20;
#line 167 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_24;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_29;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_27_27 = (MR_Word) mode_robdd__equiv_vars__EA_2;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_L_24;
#line 167 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_32;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_37;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_35_35;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_L_32;

#line 2462 "mode_robdd.equiv_vars.c"
            {
#line 2464 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2466 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2468 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2470 "mode_robdd.equiv_vars.c"
            }
#line 165 "mode_robdd.equiv_vars.m"
            {
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_27_27, &mode_robdd__equiv_vars__conv0_L_24);
            }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              {
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_24 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_24);
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
              }
#line 167 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__L_24;
#line 167 "mode_robdd.equiv_vars.m"
            else
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__V_10;
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_35_35 = (MR_Word) mode_robdd__equiv_vars__EB_3;
#line 2497 "mode_robdd.equiv_vars.c"
            {
#line 2499 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2501 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2503 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2505 "mode_robdd.equiv_vars.c"
            }
#line 165 "mode_robdd.equiv_vars.m"
            {
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_35_35, &mode_robdd__equiv_vars__conv1_L_32);
            }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              {
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_32 = ((MR_Word) mode_robdd__equiv_vars__conv1_L_32);
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
              }
#line 167 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__L_32;
#line 167 "mode_robdd.equiv_vars.m"
            else
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__V_10;
#line 256 "mode_robdd.equiv_vars.m"
            {
#line 256 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__diff_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__Vs0_11, &mode_robdd__equiv_vars__Vs_15, mode_robdd__equiv_vars__V_10, mode_robdd__equiv_vars__V_19_19, mode_robdd__equiv_vars__V_20_20, (MR_Integer) 0, mode_robdd__equiv_vars__EA_2, mode_robdd__equiv_vars__EB_3, mode_robdd__equiv_vars__DCG_0_4, &mode_robdd__equiv_vars__DCG_1_17);
            }
#line 257 "mode_robdd.equiv_vars.m"
            /* direct tailcall eliminated */
#line 257 "mode_robdd.equiv_vars.m"
            {
#line 257 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs_15;
#line 257 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_4 = mode_robdd__equiv_vars__DCG_1_17;

#line 257 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__DCG_0_4 = mode_robdd__equiv_vars__DCG_0__tmp_copy_4;
#line 257 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 257 "mode_robdd.equiv_vars.m"
            }
#line 257 "mode_robdd.equiv_vars.m"
            continue;
#line 254 "mode_robdd.equiv_vars.m"
          }
#line 253 "mode_robdd.equiv_vars.m"
      }
#line 253 "mode_robdd.equiv_vars.m"
      break;
#line 253 "mode_robdd.equiv_vars.m"
    }
#line 250 "mode_robdd.equiv_vars.m"
}

#line 220 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_35,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__2_2,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__L_3,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LA_4,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__LB_5,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Match_6,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_7,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_8,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_9,
#line 220 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__10_10)
#line 220 "mode_robdd.equiv_vars.m"
{
#line 224 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 224 "mode_robdd.equiv_vars.m"
    {
#line 224 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 224 "mode_robdd.equiv_vars.m"
      {
#line 224 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 224 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "mode_robdd.equiv_vars.m"
          {
#line 224 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "mode_robdd.equiv_vars.m"
            *mode_robdd__equiv_vars__HeadVar__10_10 = mode_robdd__equiv_vars__DCG_0_9;
#line 224 "mode_robdd.equiv_vars.m"
          }
#line 224 "mode_robdd.equiv_vars.m"
        else
#line 225 "mode_robdd.equiv_vars.m"
          {
#line 225 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_46;
#line 227 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_36_36;
#line 227 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_37_37;
#line 227 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_44_44 = (MR_Word) mode_robdd__equiv_vars__EA_7;
#line 227 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_49_49;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_V_36_36;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_V_37_37;

#line 2634 "mode_robdd.equiv_vars.c"
            {
#line 2636 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2638 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2640 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_35));
#line 2642 "mode_robdd.equiv_vars.c"
            }
#line 165 "mode_robdd.equiv_vars.m"
            {
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_44_44, &mode_robdd__equiv_vars__conv0_V_36_36);
            }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              {
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_36_36 = ((MR_Word) mode_robdd__equiv_vars__conv0_V_36_36);
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
              }
#line 227 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 227 "mode_robdd.equiv_vars.m"
              {
#line 227 "mode_robdd.equiv_vars.m"
                {
#line 227 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__V_36_36);
                }
#line 227 "mode_robdd.equiv_vars.m"
                if (mode_robdd__equiv_vars__succeeded)
#line 227 "mode_robdd.equiv_vars.m"
                  {
#line 165 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_49_49 = (MR_Word) mode_robdd__equiv_vars__EB_8;
#line 165 "mode_robdd.equiv_vars.m"
                    {
#line 165 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_49_49, &mode_robdd__equiv_vars__conv1_V_37_37);
                    }
#line 165 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
                      {
#line 165 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__V_37_37 = ((MR_Word) mode_robdd__equiv_vars__conv1_V_37_37);
#line 165 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
                      }
#line 227 "mode_robdd.equiv_vars.m"
                    if (mode_robdd__equiv_vars__succeeded)
#line 228 "mode_robdd.equiv_vars.m"
                      {
#line 228 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__V_37_37);
                      }
#line 227 "mode_robdd.equiv_vars.m"
                  }
#line 227 "mode_robdd.equiv_vars.m"
              }
#line 238 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 230 "mode_robdd.equiv_vars.m"
              {
#line 230 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_1_30;
#line 230 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__DCG_2_31;
#line 230 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_55_55 = (MR_Word) mode_robdd__equiv_vars__DCG_0_9;
#line 230 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__V_56_56;
#line 171 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__conv2_V_56_56;

#line 171 "mode_robdd.equiv_vars.m"
                {
#line 171 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__conv2_V_56_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__V_19, (MR_Word) mode_robdd__equiv_vars__V_55_55, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                }
#line 171 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_56_56 = (MR_Word) mode_robdd__equiv_vars__conv2_V_56_56;
#line 171 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__DCG_1_30 = (MR_Word) mode_robdd__equiv_vars__V_56_56;
#line 233 "mode_robdd.equiv_vars.m"
#line 233 "mode_robdd.equiv_vars.m"
                switch (mode_robdd__equiv_vars__Match_6) {
#line 233 "mode_robdd.equiv_vars.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 233 "mode_robdd.equiv_vars.m"
                  case (MR_Integer) 0:
#line 171 "mode_robdd.equiv_vars.m"
                    {
#line 171 "mode_robdd.equiv_vars.m"
                      MR_Word mode_robdd__equiv_vars__V_64_64;
#line 171 "mode_robdd.equiv_vars.m"
                      MR_Word mode_robdd__equiv_vars__conv3_V_64_64;

#line 171 "mode_robdd.equiv_vars.m"
                      {
#line 171 "mode_robdd.equiv_vars.m"
                        mode_robdd__equiv_vars__conv3_V_64_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__TypeInfo_9_46, mode_robdd__equiv_vars__L_3, (MR_Word) mode_robdd__equiv_vars__V_56_56, ((MR_Box) (mode_robdd__equiv_vars__L_3)));
                      }
#line 171 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__V_64_64 = (MR_Word) mode_robdd__equiv_vars__conv3_V_64_64;
#line 171 "mode_robdd.equiv_vars.m"
                      mode_robdd__equiv_vars__DCG_2_31 = (MR_Word) mode_robdd__equiv_vars__V_64_64;
#line 171 "mode_robdd.equiv_vars.m"
                    }
#line 233 "mode_robdd.equiv_vars.m"
                    break;
#line 233 "mode_robdd.equiv_vars.m"
                  case (MR_Integer) 1:
#line 233 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__DCG_2_31 = mode_robdd__equiv_vars__DCG_1_30;
#line 233 "mode_robdd.equiv_vars.m"
                    break;
#line 233 "mode_robdd.equiv_vars.m"
                }
#line 237 "mode_robdd.equiv_vars.m"
                /* direct tailcall eliminated */
#line 237 "mode_robdd.equiv_vars.m"
                {
#line 237 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs0_20;
#line 237 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_9 = mode_robdd__equiv_vars__DCG_2_31;

#line 237 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__DCG_0_9 = mode_robdd__equiv_vars__DCG_0__tmp_copy_9;
#line 237 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__Match_6 = (MR_Integer) 1;
#line 237 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 237 "mode_robdd.equiv_vars.m"
                }
#line 237 "mode_robdd.equiv_vars.m"
                continue;
#line 230 "mode_robdd.equiv_vars.m"
              }
#line 238 "mode_robdd.equiv_vars.m"
            else
#line 239 "mode_robdd.equiv_vars.m"
              {
#line 239 "mode_robdd.equiv_vars.m"
                MR_Word mode_robdd__equiv_vars__Vs1_28;

#line 239 "mode_robdd.equiv_vars.m"
                {
#line 239 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__disj_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_35, mode_robdd__equiv_vars__Vs0_20, &mode_robdd__equiv_vars__Vs1_28, mode_robdd__equiv_vars__L_3, mode_robdd__equiv_vars__LA_4, mode_robdd__equiv_vars__LB_5, mode_robdd__equiv_vars__Match_6, mode_robdd__equiv_vars__EA_7, mode_robdd__equiv_vars__EB_8, mode_robdd__equiv_vars__DCG_0_9, mode_robdd__equiv_vars__HeadVar__10_10);
                }
#line 240 "mode_robdd.equiv_vars.m"
                {
#line 240 "mode_robdd.equiv_vars.m"
                  MR_Word base;
#line 240 "mode_robdd.equiv_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "mode_robdd.equiv_vars.m"
                  *mode_robdd__equiv_vars__HeadVar__2_2 = base;
#line 240 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mode_robdd__equiv_vars__V_19));
#line 240 "mode_robdd.equiv_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vs1_28));
#line 240 "mode_robdd.equiv_vars.m"
                }
#line 239 "mode_robdd.equiv_vars.m"
              }
#line 225 "mode_robdd.equiv_vars.m"
          }
#line 224 "mode_robdd.equiv_vars.m"
      }
#line 224 "mode_robdd.equiv_vars.m"
      break;
#line 224 "mode_robdd.equiv_vars.m"
    }
#line 220 "mode_robdd.equiv_vars.m"
}

#line 211 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_21,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_2,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_3,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__DCG_0_4,
#line 211 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__5_5)
#line 211 "mode_robdd.equiv_vars.m"
{
#line 214 "mode_robdd.equiv_vars.m"
  while (MR_TRUE)
#line 214 "mode_robdd.equiv_vars.m"
    {
#line 214 "mode_robdd.equiv_vars.m"
      /* tailcall optimized into a loop */
#line 214 "mode_robdd.equiv_vars.m"
      {
#line 214 "mode_robdd.equiv_vars.m"
        MR_bool mode_robdd__equiv_vars__succeeded;

#line 214 "mode_robdd.equiv_vars.m"
        if ((mode_robdd__equiv_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 214 "mode_robdd.equiv_vars.m"
          *mode_robdd__equiv_vars__HeadVar__5_5 = mode_robdd__equiv_vars__DCG_0_4;
#line 214 "mode_robdd.equiv_vars.m"
        else
#line 215 "mode_robdd.equiv_vars.m"
          {
#line 215 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vs_15;
#line 215 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__DCG_1_17;
#line 215 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_19_19;
#line 215 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_20_20;
#line 167 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_24;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_29;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_27_27 = (MR_Word) mode_robdd__equiv_vars__EA_2;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv0_L_24;
#line 167 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__L_32;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__TypeInfo_9_37;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_35_35;
#line 165 "mode_robdd.equiv_vars.m"
            MR_Box mode_robdd__equiv_vars__conv1_L_32;

#line 2884 "mode_robdd.equiv_vars.c"
            {
#line 2886 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2888 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2890 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_29, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2892 "mode_robdd.equiv_vars.c"
            }
#line 165 "mode_robdd.equiv_vars.m"
            {
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__TypeInfo_9_29, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_27_27, &mode_robdd__equiv_vars__conv0_L_24);
            }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              {
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_24 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_24);
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
              }
#line 167 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__L_24;
#line 167 "mode_robdd.equiv_vars.m"
            else
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_19_19 = mode_robdd__equiv_vars__V_10;
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_35_35 = (MR_Word) mode_robdd__equiv_vars__EB_3;
#line 2919 "mode_robdd.equiv_vars.c"
            {
#line 2921 "mode_robdd.equiv_vars.c"
              mode_robdd__equiv_vars__TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2923 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 2925 "mode_robdd.equiv_vars.c"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_21));
#line 2927 "mode_robdd.equiv_vars.c"
            }
#line 165 "mode_robdd.equiv_vars.m"
            {
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__TypeInfo_9_37, mode_robdd__equiv_vars__V_10, (MR_Word) mode_robdd__equiv_vars__V_35_35, &mode_robdd__equiv_vars__conv1_L_32);
            }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              {
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__L_32 = ((MR_Word) mode_robdd__equiv_vars__conv1_L_32);
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
              }
#line 167 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__L_32;
#line 167 "mode_robdd.equiv_vars.m"
            else
#line 167 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_20_20 = mode_robdd__equiv_vars__V_10;
#line 217 "mode_robdd.equiv_vars.m"
            {
#line 217 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__disj_3_10_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_21, mode_robdd__equiv_vars__Vs0_11, &mode_robdd__equiv_vars__Vs_15, mode_robdd__equiv_vars__V_10, mode_robdd__equiv_vars__V_19_19, mode_robdd__equiv_vars__V_20_20, (MR_Integer) 0, mode_robdd__equiv_vars__EA_2, mode_robdd__equiv_vars__EB_3, mode_robdd__equiv_vars__DCG_0_4, &mode_robdd__equiv_vars__DCG_1_17);
            }
#line 218 "mode_robdd.equiv_vars.m"
            /* direct tailcall eliminated */
#line 218 "mode_robdd.equiv_vars.m"
            {
#line 218 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1 = mode_robdd__equiv_vars__Vs_15;
#line 218 "mode_robdd.equiv_vars.m"
              MR_Word mode_robdd__equiv_vars__DCG_0__tmp_copy_4 = mode_robdd__equiv_vars__DCG_1_17;

#line 218 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__DCG_0_4 = mode_robdd__equiv_vars__DCG_0__tmp_copy_4;
#line 218 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__HeadVar__1_1 = mode_robdd__equiv_vars__HeadVar__1__tmp_copy_1;
#line 218 "mode_robdd.equiv_vars.m"
            }
#line 218 "mode_robdd.equiv_vars.m"
            continue;
#line 215 "mode_robdd.equiv_vars.m"
          }
#line 214 "mode_robdd.equiv_vars.m"
      }
#line 214 "mode_robdd.equiv_vars.m"
      break;
#line 214 "mode_robdd.equiv_vars.m"
    }
#line 211 "mode_robdd.equiv_vars.m"
}

#line 169 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_11,
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var0_5,
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_6,
#line 169 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_7)
#line 169 "mode_robdd.equiv_vars.m"
{
#line 171 "mode_robdd.equiv_vars.m"
  {
#line 171 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 171 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 171 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_13_13;
#line 171 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_8_8 = (MR_Word) mode_robdd__equiv_vars__EQVars0_6;
#line 171 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_9_9;
#line 171 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_9_9;

#line 3013 "mode_robdd.equiv_vars.c"
    {
#line 3015 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3017 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3019 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_11));
#line 3021 "mode_robdd.equiv_vars.c"
    }
#line 171 "mode_robdd.equiv_vars.m"
    {
#line 171 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_9_9 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_11, mode_robdd__equiv_vars__TypeInfo_13_13, mode_robdd__equiv_vars__TypeInfo_13_13, mode_robdd__equiv_vars__Var0_5, (MR_Word) mode_robdd__equiv_vars__V_8_8, ((MR_Box) (mode_robdd__equiv_vars__Var_7)));
    }
#line 171 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_9_9 = (MR_Word) mode_robdd__equiv_vars__conv0_V_9_9;
#line 171 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__4_4 = (MR_Word) mode_robdd__equiv_vars__V_9_9;
#line 171 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 171 "mode_robdd.equiv_vars.m"
  }
#line 169 "mode_robdd.equiv_vars.m"
}

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 195 "mode_robdd.equiv_vars.m"
{
#line 195 "mode_robdd.equiv_vars.m"
  {
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12;

#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 195 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_12));
#line 195 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
  }
#line 195 "mode_robdd.equiv_vars.m"
}

#line 145 "mode_robdd.equiv_vars.m"
static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__A_5,
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__B_6,
#line 145 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_7)
#line 145 "mode_robdd.equiv_vars.m"
{
#line 147 "mode_robdd.equiv_vars.m"
  {
#line 147 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__4_4;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_37;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_39;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_8_8;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_16_16 = (MR_Word) mode_robdd__equiv_vars__EQVars_7;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_26_26;
#line 147 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_32_32;
#line 171 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_17_17;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_V_32_32;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv3_V_8_8;

#line 3115 "mode_robdd.equiv_vars.c"
    {
#line 3117 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3119 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3121 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_37, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 3123 "mode_robdd.equiv_vars.c"
    }
#line 171 "mode_robdd.equiv_vars.m"
    {
#line 171 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_17_17 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__B_6, (MR_Word) mode_robdd__equiv_vars__V_16_16, ((MR_Box) (mode_robdd__equiv_vars__A_5)));
    }
#line 171 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_17_17 = (MR_Word) mode_robdd__equiv_vars__conv0_V_17_17;
#line 3132 "mode_robdd.equiv_vars.c"
    {
#line 3134 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3136 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3138 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_37));
#line 3140 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_39, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_37));
#line 3142 "mode_robdd.equiv_vars.c"
    }
#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_2_3_f_0_1));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_26_26, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 195 "mode_robdd.equiv_vars.m"
    }
#line 203 "mode_robdd.equiv_vars.m"
    {
#line 203 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_V_32_32 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37);
    }
#line 203 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_32_32 = (MR_Word) mode_robdd__equiv_vars__conv2_V_32_32;
#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_V_8_8 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_20_37, mode_robdd__equiv_vars__TypeInfo_22_39, (MR_Word) mode_robdd__equiv_vars__V_26_26, (MR_Word) mode_robdd__equiv_vars__V_17_17, ((MR_Box) (mode_robdd__equiv_vars__V_32_32)));
    }
#line 195 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_8_8 = ((MR_Word) mode_robdd__equiv_vars__conv3_V_8_8);
#line 147 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__4_4 = (MR_Word) mode_robdd__equiv_vars__V_8_8;
#line 147 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__4_4;
#line 147 "mode_robdd.equiv_vars.m"
  }
#line 145 "mode_robdd.equiv_vars.m"
}

#line 378 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
#line 378 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 378 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1)
#line 378 "mode_robdd.equiv_vars.m"
{
#line 378 "mode_robdd.equiv_vars.m"
  {
#line 378 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_2;
#line 378 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 378 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__2_10;

#line 378 "mode_robdd.equiv_vars.m"
    {
#line 378 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__2_10 = mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1));
    }
#line 378 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_2 = ((MR_Box) (mode_robdd__equiv_vars__conv0_LambdaHeadVar__2_10));
#line 378 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_2;
#line 378 "mode_robdd.equiv_vars.m"
  }
#line 378 "mode_robdd.equiv_vars.m"
}

#line 67 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0(
#line 67 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_12,
#line 67 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 67 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Robdd_5)
#line 67 "mode_robdd.equiv_vars.m"
{
#line 374 "mode_robdd.equiv_vars.m"
  {
#line 374 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 374 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 375 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_14_14;
#line 375 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_7_7 = (MR_Word) mode_robdd__equiv_vars__EQVars_4;

#line 3235 "mode_robdd.equiv_vars.c"
    {
#line 3237 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3239 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3241 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 3243 "mode_robdd.equiv_vars.c"
    }
#line 375 "mode_robdd.equiv_vars.m"
    {
#line 375 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_14_14, mode_robdd__equiv_vars__TypeInfo_14_14, (MR_Word) mode_robdd__equiv_vars__V_7_7);
    }
#line 374 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 376 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__Robdd_5;
#line 374 "mode_robdd.equiv_vars.m"
    else
#line 378 "mode_robdd.equiv_vars.m"
      {
#line 378 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_8_8;

#line 378 "mode_robdd.equiv_vars.m"
        {
#line 378 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 378 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[2]));
#line 378 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__remove_equiv_2_f_0_1));
#line 378 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 378 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_12));
#line 378 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 4) = ((MR_Box) (mode_robdd__equiv_vars__EQVars_4));
#line 378 "mode_robdd.equiv_vars.m"
        }
#line 378 "mode_robdd.equiv_vars.m"
        {
#line 378 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__HeadVar__3_3 = mercury__robdd__rename_vars_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_12, mode_robdd__equiv_vars__V_8_8, mode_robdd__equiv_vars__Robdd_5);
        }
#line 378 "mode_robdd.equiv_vars.m"
      }
#line 374 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 374 "mode_robdd.equiv_vars.m"
  }
#line 67 "mode_robdd.equiv_vars.m"
}

#line 65 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(
#line 65 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_6,
#line 65 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Robdd_3,
#line 65 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__LeaderMap_4)
#line 65 "mode_robdd.equiv_vars.m"
{
#line 371 "mode_robdd.equiv_vars.m"
  {
#line 371 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 371 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_5_5;

#line 372 "mode_robdd.equiv_vars.m"
    {
#line 372 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_5_5 = mercury__robdd__equivalent_vars_1_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_6, mode_robdd__equiv_vars__Robdd_3);
    }
#line 372 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = ((MR_tag((MR_Word) mode_robdd__equiv_vars__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 372 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 372 "mode_robdd.equiv_vars.m"
      *mode_robdd__equiv_vars__LeaderMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__V_5_5, (MR_Integer) 0)));
#line 371 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 371 "mode_robdd.equiv_vars.m"
  }
#line 65 "mode_robdd.equiv_vars.m"
}

#line 357 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_5,
#line 357 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_6)
#line 357 "mode_robdd.equiv_vars.m"
{
#line 357 "mode_robdd.equiv_vars.m"
  {
#line 357 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 357 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_22;
#line 357 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__6_24;

#line 357 "mode_robdd.equiv_vars.m"
    {
#line 357 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_22, ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_5), &mode_robdd__equiv_vars__conv0_LambdaHeadVar__6_24);
    }
#line 357 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv1_LambdaHeadVar__4_22));
#line 357 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_6 = ((MR_Box) (mode_robdd__equiv_vars__conv0_LambdaHeadVar__6_24));
#line 357 "mode_robdd.equiv_vars.m"
  }
#line 357 "mode_robdd.equiv_vars.m"
}

#line 62 "mode_robdd.equiv_vars.m"
void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0(
#line 62 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_31,
#line 62 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__E_6,
#line 62 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__True0_7,
#line 62 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__True_8,
#line 62 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__False0_9,
#line 62 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__False_10)
#line 62 "mode_robdd.equiv_vars.m"
{
#line 356 "mode_robdd.equiv_vars.m"
  {
#line 356 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 356 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_49_49;
#line 356 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_51_51;
#line 356 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_17_17;
#line 356 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_18_18;
#line 357 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv3_True_8;
#line 357 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv2_False_10;

#line 357 "mode_robdd.equiv_vars.m"
    {
#line 357 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 357 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_5[0]));
#line 357 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__label_5_p_0_1));
#line 357 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 357 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 357 "mode_robdd.equiv_vars.m"
    }
#line 357 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_18_18 = (MR_Word) mode_robdd__equiv_vars__E_6;
#line 3419 "mode_robdd.equiv_vars.c"
    {
#line 3421 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3423 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_49_49, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3425 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_31));
#line 3427 "mode_robdd.equiv_vars.c"
    }
#line 3429 "mode_robdd.equiv_vars.c"
    {
#line 3431 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3433 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_51_51, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 3435 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_51_51, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_49_49));
#line 3437 "mode_robdd.equiv_vars.c"
    }
#line 357 "mode_robdd.equiv_vars.m"
    {
#line 357 "mode_robdd.equiv_vars.m"
      mercury__map__foldl2_6_p_0(mode_robdd__equiv_vars__TypeInfo_49_49, mode_robdd__equiv_vars__TypeInfo_49_49, mode_robdd__equiv_vars__TypeInfo_51_51, mode_robdd__equiv_vars__TypeInfo_51_51, (MR_Word) mode_robdd__equiv_vars__V_17_17, (MR_Word) mode_robdd__equiv_vars__V_18_18, ((MR_Box) (mode_robdd__equiv_vars__True0_7)), &mode_robdd__equiv_vars__conv3_True_8, ((MR_Box) (mode_robdd__equiv_vars__False0_9)), &mode_robdd__equiv_vars__conv2_False_10);
    }
#line 357 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__True_8 = ((MR_Word) mode_robdd__equiv_vars__conv3_True_8);
#line 357 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__False_10 = ((MR_Word) mode_robdd__equiv_vars__conv2_False_10);
#line 356 "mode_robdd.equiv_vars.m"
  }
#line 62 "mode_robdd.equiv_vars.m"
}

#line 324 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3,
#line 324 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_4)
#line 324 "mode_robdd.equiv_vars.m"
{
#line 324 "mode_robdd.equiv_vars.m"
  {
#line 324 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 324 "mode_robdd.equiv_vars.m"
    MR_Tuple mode_robdd__equiv_vars__conv2_HeadVar__4_4;

#line 324 "mode_robdd.equiv_vars.m"
    {
#line 324 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Tuple) mode_robdd__equiv_vars__wrapper_arg_3), &mode_robdd__equiv_vars__conv2_HeadVar__4_4);
    }
#line 324 "mode_robdd.equiv_vars.m"
    *mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_HeadVar__4_4));
#line 324 "mode_robdd.equiv_vars.m"
  }
#line 324 "mode_robdd.equiv_vars.m"
}

#line 321 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 321 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 321 "mode_robdd.equiv_vars.m"
{
#line 321 "mode_robdd.equiv_vars.m"
  {
#line 321 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 321 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 321 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_HeadVar__4_4;

#line 321 "mode_robdd.equiv_vars.m"
    {
#line 321 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_HeadVar__4_4 = mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 321 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv0_HeadVar__4_4));
#line 321 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 321 "mode_robdd.equiv_vars.m"
  }
#line 321 "mode_robdd.equiv_vars.m"
}

#line 58 "mode_robdd.equiv_vars.m"
void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Changed_6,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vars0_7,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__Vars_8,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_9,
#line 58 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__EQVars_10)
#line 58 "mode_robdd.equiv_vars.m"
{
#line 320 "mode_robdd.equiv_vars.m"
  {
#line 320 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 316 "mode_robdd.equiv_vars.m"
    {
#line 316 "mode_robdd.equiv_vars.m"
      MR_Word mode_robdd__equiv_vars__TypeInfo_22_22;

#line 3548 "mode_robdd.equiv_vars.c"
      {
#line 3550 "mode_robdd.equiv_vars.c"
        mode_robdd__equiv_vars__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3552 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3554 "mode_robdd.equiv_vars.c"
        MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3556 "mode_robdd.equiv_vars.c"
      }
#line 316 "mode_robdd.equiv_vars.m"
      {
#line 316 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_22_22, (MR_Word) mode_robdd__equiv_vars__Vars0_7);
      }
#line 316 "mode_robdd.equiv_vars.m"
    }
#line 316 "mode_robdd.equiv_vars.m"
    if (!(mode_robdd__equiv_vars__succeeded))
#line 174 "mode_robdd.equiv_vars.m"
      {
#line 174 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_5_44;
#line 174 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LM_42 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;

#line 3574 "mode_robdd.equiv_vars.c"
        {
#line 3576 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_5_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3578 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3580 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_44, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3582 "mode_robdd.equiv_vars.c"
        }
#line 174 "mode_robdd.equiv_vars.m"
        {
#line 174 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_44, mode_robdd__equiv_vars__TypeInfo_5_44, (MR_Word) mode_robdd__equiv_vars__LM_42);
        }
#line 174 "mode_robdd.equiv_vars.m"
      }
#line 320 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 317 "mode_robdd.equiv_vars.m"
      {
#line 317 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = mode_robdd__equiv_vars__Vars0_7;
#line 318 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = mode_robdd__equiv_vars__EQVars0_9;
#line 319 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = (MR_Integer) 0;
#line 317 "mode_robdd.equiv_vars.m"
      }
#line 320 "mode_robdd.equiv_vars.m"
    else
#line 322 "mode_robdd.equiv_vars.m"
      {
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_24_24;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_26;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_28_28;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_38_38;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_41_41;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__Vars1_11;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap0_12;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderMap_13;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_14_14;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_16_16;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_17_17;
#line 322 "mode_robdd.equiv_vars.m"
        MR_Tuple mode_robdd__equiv_vars__V_18_18;
#line 321 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_Vars1_11;
#line 324 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv3_V_18_18;

#line 3636 "mode_robdd.equiv_vars.c"
        {
#line 3638 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3640 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3642 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3644 "mode_robdd.equiv_vars.c"
        }
#line 3646 "mode_robdd.equiv_vars.c"
        {
#line 3648 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3650 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 3652 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 3654 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3656 "mode_robdd.equiv_vars.c"
        }
#line 3658 "mode_robdd.equiv_vars.c"
        {
#line 3660 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3662 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
#line 3664 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3666 "mode_robdd.equiv_vars.c"
        }
#line 321 "mode_robdd.equiv_vars.m"
        {
#line 321 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[2]));
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1));
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 321 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 4) = ((MR_Box) (mode_robdd__equiv_vars__EQVars0_9));
#line 321 "mode_robdd.equiv_vars.m"
        }
#line 321 "mode_robdd.equiv_vars.m"
        {
#line 321 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_20, mode_robdd__equiv_vars__TypeInfo_28_28, mode_robdd__equiv_vars__TypeClassInfo_for_enum_26, (MR_Word) mode_robdd__equiv_vars__V_14_14, mode_robdd__equiv_vars__Vars0_7, ((MR_Box) (mode_robdd__equiv_vars__Vars0_7)));
        }
#line 321 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars1_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_Vars1_11);
#line 323 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap0_12 = (MR_Word) mode_robdd__equiv_vars__EQVars0_9;
#line 324 "mode_robdd.equiv_vars.m"
        {
#line 324 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[3]));
#line 324 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2));
#line 324 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 324 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 324 "mode_robdd.equiv_vars.m"
        }
#line 325 "mode_robdd.equiv_vars.m"
        {
#line 325 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_17_17 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) ((MR_Integer) 0));
#line 325 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__Vars1_11));
#line 325 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (mode_robdd__equiv_vars__LeaderMap0_12));
#line 325 "mode_robdd.equiv_vars.m"
        }
#line 3719 "mode_robdd.equiv_vars.c"
        {
#line 3721 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3723 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3725 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3727 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_38_38, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_24_24));
#line 3729 "mode_robdd.equiv_vars.c"
        }
#line 3731 "mode_robdd.equiv_vars.c"
        {
#line 3733 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 3735 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
#line 3737 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 1) = ((MR_Box) ((MR_Integer) 3));
#line 3739 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 2) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
#line 3741 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_28_28));
#line 3743 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_41_41, 4) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_38_38));
#line 3745 "mode_robdd.equiv_vars.c"
        }
#line 324 "mode_robdd.equiv_vars.m"
        {
#line 324 "mode_robdd.equiv_vars.m"
          mercury__map__foldl_4_p_0(mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_24_24, mode_robdd__equiv_vars__TypeInfo_41_41, (MR_Word) mode_robdd__equiv_vars__V_16_16, (MR_Word) mode_robdd__equiv_vars__LeaderMap0_12, ((MR_Box) (mode_robdd__equiv_vars__V_17_17)), &mode_robdd__equiv_vars__conv3_V_18_18);
        }
#line 324 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__V_18_18 = ((MR_Tuple) mode_robdd__equiv_vars__conv3_V_18_18);
#line 325 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 0)));
#line 325 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 1)));
#line 325 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_18_18, (MR_Integer) 2)));
#line 326 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__EQVars_10 = (MR_Word) mode_robdd__equiv_vars__LeaderMap_13;
#line 322 "mode_robdd.equiv_vars.m"
      }
#line 320 "mode_robdd.equiv_vars.m"
  }
#line 58 "mode_robdd.equiv_vars.m"
}

#line 313 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
#line 313 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 313 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 313 "mode_robdd.equiv_vars.m"
{
#line 313 "mode_robdd.equiv_vars.m"
  {
#line 313 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 313 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 313 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__3_15;

#line 313 "mode_robdd.equiv_vars.m"
    {
#line 313 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_LambdaHeadVar__3_15 = mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 313 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv3_LambdaHeadVar__3_15));
#line 313 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 313 "mode_robdd.equiv_vars.m"
  }
#line 313 "mode_robdd.equiv_vars.m"
}

#line 56 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0(
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_18,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__P_4,
#line 56 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2)
#line 56 "mode_robdd.equiv_vars.m"
{
#line 311 "mode_robdd.equiv_vars.m"
  {
#line 311 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_20;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_22;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM0_5 = (MR_Word) mode_robdd__equiv_vars__HeadVar__2_2;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_6;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_8;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_11_11;
#line 311 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 312 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_11_11;
#line 312 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_7_7;
#line 312 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_V_7_7;
#line 312 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_Vars_8;
#line 313 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv4_LM_6;

#line 3845 "mode_robdd.equiv_vars.c"
    {
#line 3847 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3849 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3851 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 3853 "mode_robdd.equiv_vars.c"
    }
#line 312 "mode_robdd.equiv_vars.m"
    {
#line 312 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_11_11 = mercury__map__keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_20, mode_robdd__equiv_vars__TypeInfo_20_20, (MR_Word) mode_robdd__equiv_vars__LM0_5);
    }
#line 312 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_11_11 = (MR_Word) mode_robdd__equiv_vars__conv0_V_11_11;
#line 312 "mode_robdd.equiv_vars.m"
    {
#line 312 "mode_robdd.equiv_vars.m"
      mercury__list__filter_4_p_0(mode_robdd__equiv_vars__TypeInfo_20_20, (MR_Word) mode_robdd__equiv_vars__P_4, (MR_Word) mode_robdd__equiv_vars__V_11_11, &mode_robdd__equiv_vars__conv2_V_7_7, &mode_robdd__equiv_vars__conv1_Vars_8);
    }
#line 312 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_7_7 = (MR_Word) mode_robdd__equiv_vars__conv2_V_7_7;
#line 312 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__Vars_8 = (MR_Word) mode_robdd__equiv_vars__conv1_Vars_8;
#line 3871 "mode_robdd.equiv_vars.c"
    {
#line 3873 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3875 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3877 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_20));
#line 3879 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_22, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_20));
#line 3881 "mode_robdd.equiv_vars.c"
    }
#line 313 "mode_robdd.equiv_vars.m"
    {
#line 313 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[1]));
#line 313 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__filter_2_f_0_1));
#line 313 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 313 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_18));
#line 313 "mode_robdd.equiv_vars.m"
    }
#line 313 "mode_robdd.equiv_vars.m"
    {
#line 313 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_LM_6 = mercury__list__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_20, mode_robdd__equiv_vars__TypeInfo_22_22, (MR_Word) mode_robdd__equiv_vars__V_12_12, (MR_Word) mode_robdd__equiv_vars__Vars_8, ((MR_Box) (mode_robdd__equiv_vars__LM0_5)));
    }
#line 313 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LM_6 = ((MR_Word) mode_robdd__equiv_vars__conv4_LM_6);
#line 311 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__LM_6;
#line 311 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 311 "mode_robdd.equiv_vars.m"
  }
#line 56 "mode_robdd.equiv_vars.m"
}

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 195 "mode_robdd.equiv_vars.m"
{
#line 195 "mode_robdd.equiv_vars.m"
  {
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv4_LambdaHeadVar__4_12;

#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 195 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv4_LambdaHeadVar__4_12));
#line 195 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
  }
#line 195 "mode_robdd.equiv_vars.m"
}

#line 305 "mode_robdd.equiv_vars.m"
static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
#line 305 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 305 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1)
#line 305 "mode_robdd.equiv_vars.m"
{
#line 305 "mode_robdd.equiv_vars.m"
  {
#line 305 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 305 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;

#line 305 "mode_robdd.equiv_vars.m"
    {
#line 305 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1));
    }
#line 305 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 305 "mode_robdd.equiv_vars.m"
  }
#line 305 "mode_robdd.equiv_vars.m"
}

#line 53 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0(
#line 53 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_20,
#line 53 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Th_4,
#line 53 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__E_5)
#line 53 "mode_robdd.equiv_vars.m"
{
#line 303 "mode_robdd.equiv_vars.m"
  {
#line 303 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_26_26;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_44;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_46;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_6;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LL0_7;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LL_10;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_13_13;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_14_14;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_33_33;
#line 303 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_39_39;
#line 304 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_LL0_7;
#line 305 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_11_11;
#line 305 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_LL_10;
#line 305 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_V_11_11;
#line 308 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_LM_6;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv5_V_39_39;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv6_V_12_12;

#line 4031 "mode_robdd.equiv_vars.c"
    {
#line 4033 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4035 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4037 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_44, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 4039 "mode_robdd.equiv_vars.c"
    }
#line 304 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__E_5;
#line 304 "mode_robdd.equiv_vars.m"
    {
#line 304 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_LL0_7 = mercury__map__to_assoc_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44, (MR_Word) mode_robdd__equiv_vars__V_13_13);
    }
#line 304 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LL0_7 = (MR_Word) mode_robdd__equiv_vars__conv0_LL0_7;
#line 305 "mode_robdd.equiv_vars.m"
    {
#line 305 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 305 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_4[0]));
#line 305 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_1));
#line 305 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 305 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 305 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_14_14, 4) = ((MR_Box) (mode_robdd__equiv_vars__Th_4));
#line 305 "mode_robdd.equiv_vars.m"
    }
#line 4066 "mode_robdd.equiv_vars.c"
    {
#line 4068 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4070 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_26_26, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4072 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4074 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_26_26, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4076 "mode_robdd.equiv_vars.c"
    }
#line 305 "mode_robdd.equiv_vars.m"
    {
#line 305 "mode_robdd.equiv_vars.m"
      mercury__list__takewhile_4_p_0(mode_robdd__equiv_vars__TypeInfo_26_26, (MR_Word) mode_robdd__equiv_vars__V_14_14, (MR_Word) mode_robdd__equiv_vars__LL0_7, &mode_robdd__equiv_vars__conv2_LL_10, &mode_robdd__equiv_vars__conv1_V_11_11);
    }
#line 305 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LL_10 = (MR_Word) mode_robdd__equiv_vars__conv2_LL_10;
#line 305 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_11_11 = (MR_Word) mode_robdd__equiv_vars__conv1_V_11_11;
#line 308 "mode_robdd.equiv_vars.m"
    {
#line 308 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_LM_6 = mercury__map__from_assoc_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44, (MR_Word) mode_robdd__equiv_vars__LL_10);
    }
#line 308 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__LM_6 = (MR_Word) mode_robdd__equiv_vars__conv3_LM_6;
#line 4094 "mode_robdd.equiv_vars.c"
    {
#line 4096 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4098 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_46, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4100 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4102 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_46, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_44));
#line 4104 "mode_robdd.equiv_vars.c"
    }
#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_2));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_33_33, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_20));
#line 195 "mode_robdd.equiv_vars.m"
    }
#line 203 "mode_robdd.equiv_vars.m"
    {
#line 203 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv5_V_39_39 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44);
    }
#line 203 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_39_39 = (MR_Word) mode_robdd__equiv_vars__conv5_V_39_39;
#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv6_V_12_12 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_20_44, mode_robdd__equiv_vars__TypeInfo_22_46, (MR_Word) mode_robdd__equiv_vars__V_33_33, (MR_Word) mode_robdd__equiv_vars__LM_6, ((MR_Box) (mode_robdd__equiv_vars__V_39_39)));
    }
#line 195 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_12_12 = ((MR_Word) mode_robdd__equiv_vars__conv6_V_12_12);
#line 303 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__V_12_12;
#line 303 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 303 "mode_robdd.equiv_vars.m"
  }
#line 53 "mode_robdd.equiv_vars.m"
}

#line 288 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
#line 288 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 288 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 288 "mode_robdd.equiv_vars.m"
{
#line 288 "mode_robdd.equiv_vars.m"
  {
#line 288 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 288 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 288 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv4_LambdaHeadVar__3_20;

#line 288 "mode_robdd.equiv_vars.m"
    {
#line 288 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_LambdaHeadVar__3_20 = mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 288 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv4_LambdaHeadVar__3_20));
#line 288 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 288 "mode_robdd.equiv_vars.m"
  }
#line 288 "mode_robdd.equiv_vars.m"
}

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__env_ptr_arg)
#line 286 "mode_robdd.equiv_vars.m"
{
#line 286 "mode_robdd.equiv_vars.m"
  {
#line 286 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s * mode_robdd__equiv_vars__env_ptr = (struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s *) mode_robdd__equiv_vars__env_ptr_arg;

#line 286 "mode_robdd.equiv_vars.m"
    *((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29));
#line 286 "mode_robdd.equiv_vars.m"
    {
#line 286 "mode_robdd.equiv_vars.m"
      ((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont)((mode_robdd__equiv_vars__env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr);
    }
#line 286 "mode_robdd.equiv_vars.m"
  }
#line 286 "mode_robdd.equiv_vars.m"
}

#line 286 "mode_robdd.equiv_vars.m"
static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Box * mode_robdd__equiv_vars__wrapper_arg_1,
#line 286 "mode_robdd.equiv_vars.m"
  MR_Cont mode_robdd__equiv_vars__cont,
#line 286 "mode_robdd.equiv_vars.m"
  void * mode_robdd__equiv_vars__cont_env_ptr)
#line 286 "mode_robdd.equiv_vars.m"
{
#line 286 "mode_robdd.equiv_vars.m"
  {
#line 286 "mode_robdd.equiv_vars.m"
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s mode_robdd__equiv_vars__env;

#line 286 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1 = mode_robdd__equiv_vars__wrapper_arg_1;
#line 286 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont = mode_robdd__equiv_vars__cont;
#line 286 "mode_robdd.equiv_vars.m"
    (mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr = mode_robdd__equiv_vars__cont_env_ptr;
#line 286 "mode_robdd.equiv_vars.m"
    {
#line 286 "mode_robdd.equiv_vars.m"
      MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;

#line 286 "mode_robdd.equiv_vars.m"
      {
#line 286 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 5))), &(mode_robdd__equiv_vars__env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29, mode_robdd__equiv_vars__delete_2_f_0_1, &mode_robdd__equiv_vars__env);
      }
#line 286 "mode_robdd.equiv_vars.m"
    }
#line 286 "mode_robdd.equiv_vars.m"
  }
#line 286 "mode_robdd.equiv_vars.m"
}

#line 51 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0(
#line 51 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_26,
#line 51 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__E0_4,
#line 51 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__V_5)
#line 51 "mode_robdd.equiv_vars.m"
{
#line 299 "mode_robdd.equiv_vars.m"
  {
#line 299 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 299 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__E_6;
#line 299 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_45;
#line 299 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_7;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_43_43 = (MR_Word) mode_robdd__equiv_vars__E0_4;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_7;

#line 4268 "mode_robdd.equiv_vars.c"
    {
#line 4270 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4272 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_45, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4274 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_45, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 4276 "mode_robdd.equiv_vars.c"
    }
#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__V_5, (MR_Word) mode_robdd__equiv_vars__V_43_43, &mode_robdd__equiv_vars__conv0_L_7);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_7 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_7);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 299 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 296 "mode_robdd.equiv_vars.m"
      {
#line 296 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_38_38 = (MR_Word) mode_robdd__equiv_vars__E0_4;

#line 284 "mode_robdd.equiv_vars.m"
        {
#line 284 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_26, mode_robdd__equiv_vars__L_7, mode_robdd__equiv_vars__V_5);
        }
#line 296 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 285 "mode_robdd.equiv_vars.m"
          {
#line 285 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__M0_8;
#line 285 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__Vars_9;
#line 285 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_16_16;
#line 285 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv1_M0_8;
#line 286 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv3_Vars_9;
#line 293 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__NewLeader_10;
#line 287 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_11_11;

#line 285 "mode_robdd.equiv_vars.m"
            {
#line 285 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv1_M0_8 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__V_38_38, ((MR_Box) (mode_robdd__equiv_vars__V_5)));
            }
#line 285 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__M0_8 = (MR_Word) mode_robdd__equiv_vars__conv1_M0_8;
#line 286 "mode_robdd.equiv_vars.m"
            {
#line 286 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 286 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[0]));
#line 286 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_2));
#line 286 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 286 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 286 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 4) = ((MR_Box) (mode_robdd__equiv_vars__V_5));
#line 286 "mode_robdd.equiv_vars.m"
              MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_16_16, 5) = ((MR_Box) (mode_robdd__equiv_vars__M0_8));
#line 286 "mode_robdd.equiv_vars.m"
            }
#line 286 "mode_robdd.equiv_vars.m"
            {
#line 286 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv3_Vars_9 = mercury__solutions__solutions_1_f_1(mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__V_16_16);
            }
#line 286 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__Vars_9 = (MR_Word) mode_robdd__equiv_vars__conv3_Vars_9;
#line 287 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = ((MR_tag((MR_Word) mode_robdd__equiv_vars__Vars_9)) == (MR_mktag((MR_Integer) 1)));
#line 287 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 287 "mode_robdd.equiv_vars.m"
              {
#line 287 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__NewLeader_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__Vars_9, (MR_Integer) 0)));
#line 287 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__equiv_vars__Vars_9, (MR_Integer) 1)));
#line 291 "mode_robdd.equiv_vars.m"
                {
#line 291 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__TypeInfo_33_33;
#line 291 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__M_12;
#line 291 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_17_17;
#line 288 "mode_robdd.equiv_vars.m"
                  MR_Box mode_robdd__equiv_vars__conv5_M_12;

#line 4377 "mode_robdd.equiv_vars.c"
                  {
#line 4379 "mode_robdd.equiv_vars.c"
                    mode_robdd__equiv_vars__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4381 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4383 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_45));
#line 4385 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_33_33, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_45));
#line 4387 "mode_robdd.equiv_vars.c"
                  }
#line 288 "mode_robdd.equiv_vars.m"
                  {
#line 288 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 288 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 288 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_3));
#line 288 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 288 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_26));
#line 288 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_17_17, 4) = ((MR_Box) (mode_robdd__equiv_vars__NewLeader_10));
#line 288 "mode_robdd.equiv_vars.m"
                  }
#line 288 "mode_robdd.equiv_vars.m"
                  {
#line 288 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__conv5_M_12 = mercury__list__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_33_33, (MR_Word) mode_robdd__equiv_vars__V_17_17, (MR_Word) mode_robdd__equiv_vars__Vars_9, ((MR_Box) (mode_robdd__equiv_vars__M0_8)));
                  }
#line 288 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__M_12 = ((MR_Word) mode_robdd__equiv_vars__conv5_M_12);
#line 292 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__E_6 = (MR_Word) mode_robdd__equiv_vars__M_12;
#line 291 "mode_robdd.equiv_vars.m"
                }
#line 287 "mode_robdd.equiv_vars.m"
              }
#line 287 "mode_robdd.equiv_vars.m"
            else
#line 294 "mode_robdd.equiv_vars.m"
              {
#line 294 "mode_robdd.equiv_vars.m"
                {
#line 294 "mode_robdd.equiv_vars.m"
                  mercury__require__error_1_p_0((MR_String) "mode_robdd:equiv_vars:delete: malformed leader map");
                }
#line 294 "mode_robdd.equiv_vars.m"
              }
#line 285 "mode_robdd.equiv_vars.m"
          }
#line 296 "mode_robdd.equiv_vars.m"
        else
#line 297 "mode_robdd.equiv_vars.m"
          {
#line 297 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__V_22_22;
#line 297 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__conv6_V_22_22;

#line 297 "mode_robdd.equiv_vars.m"
            {
#line 297 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__conv6_V_22_22 = mercury__map__delete_2_f_0(mode_robdd__equiv_vars__TypeInfo_9_45, mode_robdd__equiv_vars__TypeInfo_9_45, (MR_Word) mode_robdd__equiv_vars__V_38_38, ((MR_Box) (mode_robdd__equiv_vars__V_5)));
            }
#line 297 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_22_22 = (MR_Word) mode_robdd__equiv_vars__conv6_V_22_22;
#line 297 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__E_6 = (MR_Word) mode_robdd__equiv_vars__V_22_22;
#line 297 "mode_robdd.equiv_vars.m"
          }
#line 296 "mode_robdd.equiv_vars.m"
      }
#line 299 "mode_robdd.equiv_vars.m"
    else
#line 300 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__E_6 = mode_robdd__equiv_vars__E0_4;
#line 299 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__E_6;
#line 299 "mode_robdd.equiv_vars.m"
  }
#line 51 "mode_robdd.equiv_vars.m"
}

#line 49 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__difference_2_f_0(
#line 49 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_10,
#line 49 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_4,
#line 49 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_5)
#line 49 "mode_robdd.equiv_vars.m"
{
#line 246 "mode_robdd.equiv_vars.m"
  {
#line 246 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 246 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__E_6;
#line 246 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_15;
#line 246 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_7;
#line 246 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_8_8;
#line 246 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_9_9;
#line 246 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_13_13;
#line 247 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_Vars_7;
#line 84 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_V_13_13;

#line 4496 "mode_robdd.equiv_vars.c"
    {
#line 4498 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4500 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4502 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_15, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_10));
#line 4504 "mode_robdd.equiv_vars.c"
    }
#line 247 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_8_8 = (MR_Word) mode_robdd__equiv_vars__EA_4;
#line 247 "mode_robdd.equiv_vars.m"
    {
#line 247 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_Vars_7 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_15, mode_robdd__equiv_vars__TypeInfo_5_15, (MR_Word) mode_robdd__equiv_vars__V_8_8);
    }
#line 247 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__Vars_7 = (MR_Word) mode_robdd__equiv_vars__conv0_Vars_7;
#line 84 "mode_robdd.equiv_vars.m"
    {
#line 84 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_V_13_13 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_15, mode_robdd__equiv_vars__TypeInfo_5_15);
    }
#line 84 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__conv1_V_13_13;
#line 84 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_9_9 = (MR_Word) mode_robdd__equiv_vars__V_13_13;
#line 248 "mode_robdd.equiv_vars.m"
    {
#line 248 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__diff_2_5_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__Vars_7, mode_robdd__equiv_vars__EA_4, mode_robdd__equiv_vars__EB_5, mode_robdd__equiv_vars__V_9_9, &mode_robdd__equiv_vars__E_6);
    }
#line 246 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__E_6;
#line 246 "mode_robdd.equiv_vars.m"
  }
#line 49 "mode_robdd.equiv_vars.m"
}

#line 47 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__f_plus_2_f_0(
#line 47 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_16,
#line 47 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EA_4,
#line 47 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EB_5)
#line 47 "mode_robdd.equiv_vars.m"
{
#line 205 "mode_robdd.equiv_vars.m"
  {
#line 205 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__E_6;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_21;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__VarsA_7;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__VarsB_8;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_9;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_10_10;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_11_11;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_13_13;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_14_14;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_15_15;
#line 205 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_19_19;
#line 206 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_10_10;
#line 206 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv1_VarsA_7;
#line 207 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_V_12_12;
#line 207 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_VarsB_8;
#line 208 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv4_Vars_9;
#line 84 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv5_V_19_19;

#line 4588 "mode_robdd.equiv_vars.c"
    {
#line 4590 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4592 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4594 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_21, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_16));
#line 4596 "mode_robdd.equiv_vars.c"
    }
#line 206 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_11_11 = (MR_Word) mode_robdd__equiv_vars__EA_4;
#line 206 "mode_robdd.equiv_vars.m"
    {
#line 206 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_10_10 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_11_11);
    }
#line 206 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_10_10 = (MR_Word) mode_robdd__equiv_vars__conv0_V_10_10;
#line 206 "mode_robdd.equiv_vars.m"
    {
#line 206 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_VarsA_7 = mercury__set__sorted_list_to_set_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_10_10);
    }
#line 206 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__VarsA_7 = (MR_Word) mode_robdd__equiv_vars__conv1_VarsA_7;
#line 207 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_13_13 = (MR_Word) mode_robdd__equiv_vars__EB_5;
#line 207 "mode_robdd.equiv_vars.m"
    {
#line 207 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_V_12_12 = mercury__map__sorted_keys_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_13_13);
    }
#line 207 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_12_12 = (MR_Word) mode_robdd__equiv_vars__conv2_V_12_12;
#line 207 "mode_robdd.equiv_vars.m"
    {
#line 207 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_VarsB_8 = mercury__set__sorted_list_to_set_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_12_12);
    }
#line 207 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__VarsB_8 = (MR_Word) mode_robdd__equiv_vars__conv3_VarsB_8;
#line 208 "mode_robdd.equiv_vars.m"
    {
#line 208 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_14_14 = mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_16, mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__VarsA_7, mode_robdd__equiv_vars__VarsB_8);
    }
#line 208 "mode_robdd.equiv_vars.m"
    {
#line 208 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_Vars_9 = mercury__set__to_sorted_list_1_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, (MR_Word) mode_robdd__equiv_vars__V_14_14);
    }
#line 208 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__Vars_9 = (MR_Word) mode_robdd__equiv_vars__conv4_Vars_9;
#line 84 "mode_robdd.equiv_vars.m"
    {
#line 84 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv5_V_19_19 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_21, mode_robdd__equiv_vars__TypeInfo_5_21);
    }
#line 84 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_19_19 = (MR_Word) mode_robdd__equiv_vars__conv5_V_19_19;
#line 84 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_15_15 = (MR_Word) mode_robdd__equiv_vars__V_19_19;
#line 209 "mode_robdd.equiv_vars.m"
    {
#line 209 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__disj_2_5_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_16, mode_robdd__equiv_vars__Vars_9, mode_robdd__equiv_vars__EA_4, mode_robdd__equiv_vars__EB_5, mode_robdd__equiv_vars__V_15_15, &mode_robdd__equiv_vars__E_6);
    }
#line 205 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__E_6;
#line 205 "mode_robdd.equiv_vars.m"
  }
#line 47 "mode_robdd.equiv_vars.m"
}

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 195 "mode_robdd.equiv_vars.m"
{
#line 195 "mode_robdd.equiv_vars.m"
  {
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_12;

#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 195 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv2_LambdaHeadVar__4_12));
#line 195 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
  }
#line 195 "mode_robdd.equiv_vars.m"
}

#line 177 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 177 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 177 "mode_robdd.equiv_vars.m"
{
#line 177 "mode_robdd.equiv_vars.m"
  {
#line 177 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 177 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 177 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_LambdaHeadVar__4_16;

#line 177 "mode_robdd.equiv_vars.m"
    {
#line 177 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_LambdaHeadVar__4_16 = mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 177 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv0_LambdaHeadVar__4_16));
#line 177 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 177 "mode_robdd.equiv_vars.m"
  }
#line 177 "mode_robdd.equiv_vars.m"
}

#line 45 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0(
#line 45 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_22,
#line 45 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1,
#line 45 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2)
#line 45 "mode_robdd.equiv_vars.m"
{
#line 176 "mode_robdd.equiv_vars.m"
  {
#line 176 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_20_57;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_22_59;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__MA_4 = (MR_Word) mode_robdd__equiv_vars__HeadVar__1_1;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__MB_5 = (MR_Word) mode_robdd__equiv_vars__HeadVar__2_2;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__M_6;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__M1_7;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_12_12;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_46_46;
#line 176 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_52_52;
#line 177 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv1_M1_7;
#line 203 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_V_52_52;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv4_M_6;

#line 4777 "mode_robdd.equiv_vars.c"
    {
#line 4779 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_20_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4781 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_57, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4783 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_20_57, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 4785 "mode_robdd.equiv_vars.c"
    }
#line 4787 "mode_robdd.equiv_vars.c"
    {
#line 4789 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_22_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4791 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4793 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_57));
#line 4795 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_59, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_20_57));
#line 4797 "mode_robdd.equiv_vars.c"
    }
#line 177 "mode_robdd.equiv_vars.m"
    {
#line 177 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 177 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 177 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_1));
#line 177 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 177 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_12_12, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 177 "mode_robdd.equiv_vars.m"
    }
#line 177 "mode_robdd.equiv_vars.m"
    {
#line 177 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv1_M1_7 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_22_59, (MR_Word) mode_robdd__equiv_vars__V_12_12, (MR_Word) mode_robdd__equiv_vars__MA_4, ((MR_Box) (mode_robdd__equiv_vars__MB_5)));
    }
#line 177 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__M1_7 = ((MR_Word) mode_robdd__equiv_vars__conv1_M1_7);
#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_2));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 195 "mode_robdd.equiv_vars.m"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_46_46, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_22));
#line 195 "mode_robdd.equiv_vars.m"
    }
#line 203 "mode_robdd.equiv_vars.m"
    {
#line 203 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_V_52_52 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57);
    }
#line 203 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_52_52 = (MR_Word) mode_robdd__equiv_vars__conv3_V_52_52;
#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv4_M_6 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_20_57, mode_robdd__equiv_vars__TypeInfo_22_59, (MR_Word) mode_robdd__equiv_vars__V_46_46, (MR_Word) mode_robdd__equiv_vars__M1_7, ((MR_Box) (mode_robdd__equiv_vars__V_52_52)));
    }
#line 195 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__M_6 = ((MR_Word) mode_robdd__equiv_vars__conv4_M_6);
#line 176 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__3_3 = (MR_Word) mode_robdd__equiv_vars__M_6;
#line 176 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 176 "mode_robdd.equiv_vars.m"
  }
#line 45 "mode_robdd.equiv_vars.m"
}

#line 43 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__empty_1_p_0(
#line 43 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_3,
#line 43 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__1_1)
#line 43 "mode_robdd.equiv_vars.m"
{
#line 174 "mode_robdd.equiv_vars.m"
  {
#line 174 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_5;
#line 174 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LM_2 = (MR_Word) mode_robdd__equiv_vars__HeadVar__1_1;

#line 4875 "mode_robdd.equiv_vars.c"
    {
#line 4877 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4879 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4881 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_3));
#line 4883 "mode_robdd.equiv_vars.c"
    }
#line 174 "mode_robdd.equiv_vars.m"
    {
#line 174 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__equiv_vars__TypeInfo_5_5, mode_robdd__equiv_vars__TypeInfo_5_5, (MR_Word) mode_robdd__equiv_vars__LM_2);
    }
#line 174 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 174 "mode_robdd.equiv_vars.m"
  }
#line 43 "mode_robdd.equiv_vars.m"
}

#line 41 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__det_leader_2_f_0(
#line 41 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
#line 41 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_4,
#line 41 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5)
#line 41 "mode_robdd.equiv_vars.m"
{
#line 167 "mode_robdd.equiv_vars.m"
  {
#line 167 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 167 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 167 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__L_6;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_12;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_10_10 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_L_6;

#line 4923 "mode_robdd.equiv_vars.c"
    {
#line 4925 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4927 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4929 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_7));
#line 4931 "mode_robdd.equiv_vars.c"
    }
#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__TypeInfo_9_12, mode_robdd__equiv_vars__TypeInfo_9_12, mode_robdd__equiv_vars__Var_4, (MR_Word) mode_robdd__equiv_vars__V_10_10, &mode_robdd__equiv_vars__conv0_L_6);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__L_6 = ((MR_Word) mode_robdd__equiv_vars__conv0_L_6);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 167 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 167 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__L_6;
#line 167 "mode_robdd.equiv_vars.m"
    else
#line 167 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__Var_4;
#line 167 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 167 "mode_robdd.equiv_vars.m"
  }
#line 41 "mode_robdd.equiv_vars.m"
}

#line 38 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__leader_2_f_0(
#line 38 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
#line 38 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Var_4,
#line 38 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5,
#line 38 "mode_robdd.equiv_vars.m"
  MR_Word * mode_robdd__equiv_vars__HeadVar__3_3)
#line 38 "mode_robdd.equiv_vars.m"
{
#line 165 "mode_robdd.equiv_vars.m"
  {
#line 165 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_9;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_6_6 = (MR_Word) mode_robdd__equiv_vars__EQVars_5;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_HeadVar__3_3;

#line 4987 "mode_robdd.equiv_vars.c"
    {
#line 4989 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4991 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 4993 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_9, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_7));
#line 4995 "mode_robdd.equiv_vars.c"
    }
#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__TypeInfo_9_9, mode_robdd__equiv_vars__Var_4, (MR_Word) mode_robdd__equiv_vars__V_6_6, &mode_robdd__equiv_vars__conv0_HeadVar__3_3);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        *mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv0_HeadVar__3_3);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 165 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 165 "mode_robdd.equiv_vars.m"
  }
#line 38 "mode_robdd.equiv_vars.m"
}

#line 35 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(
#line 35 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_7,
#line 35 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_4,
#line 35 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VA_5,
#line 35 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VB_6)
#line 35 "mode_robdd.equiv_vars.m"
{
#line 163 "mode_robdd.equiv_vars.m"
  {
#line 163 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 163 "mode_robdd.equiv_vars.m"
    {
#line 163 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(mode_robdd__equiv_vars__TypeInfo_for_T_7, mode_robdd__equiv_vars__EQVars_4, mode_robdd__equiv_vars__VA_5, mode_robdd__equiv_vars__VB_6);
    }
#line 163 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__succeeded = !(mode_robdd__equiv_vars__succeeded);
#line 163 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 163 "mode_robdd.equiv_vars.m"
  }
#line 35 "mode_robdd.equiv_vars.m"
}

#line 32 "mode_robdd.equiv_vars.m"
MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(
#line 32 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_10,
#line 32 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_1,
#line 32 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__2_2,
#line 32 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__HeadVar__3_3)
#line 32 "mode_robdd.equiv_vars.m"
{
#line 158 "mode_robdd.equiv_vars.m"
  {
#line 158 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;

#line 158 "mode_robdd.equiv_vars.m"
    {
#line 158 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__HeadVar__3_3, mode_robdd__equiv_vars__HeadVar__2_2);
    }
#line 158 "mode_robdd.equiv_vars.m"
    if (!(mode_robdd__equiv_vars__succeeded))
#line 159 "mode_robdd.equiv_vars.m"
      {
#line 159 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_9_25;
#line 159 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_9_9;
#line 159 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_11_11;
#line 159 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_18_18 = (MR_Word) mode_robdd__equiv_vars__EQVars_1;
#line 159 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_23_23;
#line 165 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv0_V_9_9;
#line 165 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_V_11_11;

#line 5093 "mode_robdd.equiv_vars.c"
        {
#line 5095 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_9_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5097 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5099 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_25, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_10));
#line 5101 "mode_robdd.equiv_vars.c"
        }
#line 165 "mode_robdd.equiv_vars.m"
        {
#line 165 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__HeadVar__2_2, (MR_Word) mode_robdd__equiv_vars__V_18_18, &mode_robdd__equiv_vars__conv0_V_9_9);
        }
#line 165 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
          {
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_9_9 = ((MR_Word) mode_robdd__equiv_vars__conv0_V_9_9);
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
          }
#line 159 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 159 "mode_robdd.equiv_vars.m"
          {
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__V_23_23 = (MR_Word) mode_robdd__equiv_vars__EQVars_1;
#line 165 "mode_robdd.equiv_vars.m"
            {
#line 165 "mode_robdd.equiv_vars.m"
              mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__TypeInfo_9_25, mode_robdd__equiv_vars__HeadVar__3_3, (MR_Word) mode_robdd__equiv_vars__V_23_23, &mode_robdd__equiv_vars__conv1_V_11_11);
            }
#line 165 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
              {
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__V_11_11 = ((MR_Word) mode_robdd__equiv_vars__conv1_V_11_11);
#line 165 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
              }
#line 159 "mode_robdd.equiv_vars.m"
            if (mode_robdd__equiv_vars__succeeded)
#line 160 "mode_robdd.equiv_vars.m"
              {
#line 160 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__succeeded = mercury__term____Unify____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_10, mode_robdd__equiv_vars__V_9_9, mode_robdd__equiv_vars__V_11_11);
              }
#line 159 "mode_robdd.equiv_vars.m"
          }
#line 159 "mode_robdd.equiv_vars.m"
      }
#line 158 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__succeeded;
#line 158 "mode_robdd.equiv_vars.m"
  }
#line 32 "mode_robdd.equiv_vars.m"
}

#line 153 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
#line 153 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 153 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 153 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2)
#line 153 "mode_robdd.equiv_vars.m"
{
#line 153 "mode_robdd.equiv_vars.m"
  {
#line 153 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_3;
#line 153 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 153 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv2_EQVars_8;

#line 153 "mode_robdd.equiv_vars.m"
    {
#line 153 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv2_EQVars_8 = mode_robdd__equiv_vars__add_equality_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2));
    }
#line 153 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_3 = ((MR_Box) (mode_robdd__equiv_vars__conv2_EQVars_8));
#line 153 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_3;
#line 153 "mode_robdd.equiv_vars.m"
  }
#line 153 "mode_robdd.equiv_vars.m"
}

#line 30 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0(
#line 30 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_9,
#line 30 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__Vars0_4,
#line 30 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars_5)
#line 30 "mode_robdd.equiv_vars.m"
{
#line 151 "mode_robdd.equiv_vars.m"
  {
#line 151 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 151 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__3_3;
#line 151 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeClassInfo_for_enum_13;
#line 151 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Var_6;
#line 151 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__Vars_7;
#line 152 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_11_11;
#line 152 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv1_Var_6;
#line 152 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_Vars_7;

#line 5221 "mode_robdd.equiv_vars.c"
    {
#line 5223 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5225 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5227 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 5229 "mode_robdd.equiv_vars.c"
    }
#line 5231 "mode_robdd.equiv_vars.c"
    {
#line 5233 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5235 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
#line 5237 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 5239 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_11_11));
#line 5241 "mode_robdd.equiv_vars.c"
    }
#line 152 "mode_robdd.equiv_vars.m"
    {
#line 152 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, &mode_robdd__equiv_vars__conv1_Var_6, (MR_Word) mode_robdd__equiv_vars__Vars0_4, &mode_robdd__equiv_vars__conv0_Vars_7);
    }
#line 152 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 152 "mode_robdd.equiv_vars.m"
      {
#line 152 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Var_6 = ((MR_Word) mode_robdd__equiv_vars__conv1_Var_6);
#line 152 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__Vars_7 = (MR_Word) mode_robdd__equiv_vars__conv0_Vars_7;
#line 152 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 152 "mode_robdd.equiv_vars.m"
      }
#line 151 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 153 "mode_robdd.equiv_vars.m"
      {
#line 153 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_19_19;
#line 153 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_8_8;
#line 153 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv3_HeadVar__3_3;

#line 5271 "mode_robdd.equiv_vars.c"
        {
#line 5273 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5275 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_19_19, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_equiv_vars_1));
#line 5277 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 5279 "mode_robdd.equiv_vars.c"
        }
#line 153 "mode_robdd.equiv_vars.m"
        {
#line 153 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 153 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[1]));
#line 153 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equalities_2_f_0_1));
#line 153 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 153 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_9));
#line 153 "mode_robdd.equiv_vars.m"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_8_8, 4) = ((MR_Box) (mode_robdd__equiv_vars__Var_6));
#line 153 "mode_robdd.equiv_vars.m"
        }
#line 153 "mode_robdd.equiv_vars.m"
        {
#line 153 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__conv3_HeadVar__3_3 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_9, mode_robdd__equiv_vars__TypeInfo_19_19, mode_robdd__equiv_vars__TypeClassInfo_for_enum_13, (MR_Word) mode_robdd__equiv_vars__V_8_8, mode_robdd__equiv_vars__Vars_7, ((MR_Box) (mode_robdd__equiv_vars__EQVars_5)));
        }
#line 153 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__HeadVar__3_3 = ((MR_Word) mode_robdd__equiv_vars__conv3_HeadVar__3_3);
#line 153 "mode_robdd.equiv_vars.m"
      }
#line 151 "mode_robdd.equiv_vars.m"
    else
#line 155 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__HeadVar__3_3 = mode_robdd__equiv_vars__EQVars_5;
#line 151 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__3_3;
#line 151 "mode_robdd.equiv_vars.m"
  }
#line 30 "mode_robdd.equiv_vars.m"
}

#line 195 "mode_robdd.equiv_vars.m"
static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__closure_arg,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_1,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_2,
#line 195 "mode_robdd.equiv_vars.m"
  MR_Box mode_robdd__equiv_vars__wrapper_arg_3)
#line 195 "mode_robdd.equiv_vars.m"
{
#line 195 "mode_robdd.equiv_vars.m"
  {
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__closure = mode_robdd__equiv_vars__closure_arg;
#line 195 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12;

#line 195 "mode_robdd.equiv_vars.m"
    {
#line 195 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_1), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_2), ((MR_Word) mode_robdd__equiv_vars__wrapper_arg_3));
    }
#line 195 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__wrapper_arg_4 = ((MR_Box) (mode_robdd__equiv_vars__conv3_LambdaHeadVar__4_12));
#line 195 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__wrapper_arg_4;
#line 195 "mode_robdd.equiv_vars.m"
  }
#line 195 "mode_robdd.equiv_vars.m"
}

#line 28 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0(
#line 28 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_19,
#line 28 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VarA_5,
#line 28 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__VarB_6,
#line 28 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__EQVars0_7)
#line 28 "mode_robdd.equiv_vars.m"
{
#line 115 "mode_robdd.equiv_vars.m"
  {
#line 115 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 115 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__EQVars_8;
#line 115 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_9_32;
#line 115 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__LeaderA_9;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_30_30 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 165 "mode_robdd.equiv_vars.m"
    MR_Box mode_robdd__equiv_vars__conv0_LeaderA_9;

#line 5381 "mode_robdd.equiv_vars.c"
    {
#line 5383 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_9_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5385 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5387 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_32, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
#line 5389 "mode_robdd.equiv_vars.c"
    }
#line 165 "mode_robdd.equiv_vars.m"
    {
#line 165 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarA_5, (MR_Word) mode_robdd__equiv_vars__V_30_30, &mode_robdd__equiv_vars__conv0_LeaderA_9);
    }
#line 165 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
      {
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__LeaderA_9 = ((MR_Word) mode_robdd__equiv_vars__conv0_LeaderA_9);
#line 165 "mode_robdd.equiv_vars.m"
        mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
      }
#line 115 "mode_robdd.equiv_vars.m"
    if (mode_robdd__equiv_vars__succeeded)
#line 102 "mode_robdd.equiv_vars.m"
      {
#line 102 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderB_10;
#line 165 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_35_35 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 165 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv1_LeaderB_10;

#line 165 "mode_robdd.equiv_vars.m"
        {
#line 165 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__V_35_35, &mode_robdd__equiv_vars__conv1_LeaderB_10);
        }
#line 165 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
          {
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LeaderB_10 = ((MR_Word) mode_robdd__equiv_vars__conv1_LeaderB_10);
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
          }
#line 102 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 89 "mode_robdd.equiv_vars.m"
          {
#line 89 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_11;

#line 89 "mode_robdd.equiv_vars.m"
            {
#line 89 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_11, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__LeaderB_10);
            }
#line 93 "mode_robdd.equiv_vars.m"
#line 93 "mode_robdd.equiv_vars.m"
            switch (mode_robdd__equiv_vars__R_11) {
#line 93 "mode_robdd.equiv_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 93 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 1:
#line 147 "mode_robdd.equiv_vars.m"
                {
#line 147 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__TypeInfo_22_71;
#line 147 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_41_41;
#line 147 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_48_48 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 147 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_49_49;
#line 147 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_58_58;
#line 147 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_64_64;
#line 171 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__conv2_V_49_49;
#line 203 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__conv4_V_64_64;
#line 195 "mode_robdd.equiv_vars.m"
                  MR_Box mode_robdd__equiv_vars__conv5_V_41_41;

#line 171 "mode_robdd.equiv_vars.m"
                  {
#line 171 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__conv2_V_49_49 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__LeaderB_10, (MR_Word) mode_robdd__equiv_vars__V_48_48, ((MR_Box) (mode_robdd__equiv_vars__LeaderA_9)));
                  }
#line 171 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__V_49_49 = (MR_Word) mode_robdd__equiv_vars__conv2_V_49_49;
#line 5479 "mode_robdd.equiv_vars.c"
                  {
#line 5481 "mode_robdd.equiv_vars.c"
                    mode_robdd__equiv_vars__TypeInfo_22_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5483 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 5485 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_32));
#line 5487 "mode_robdd.equiv_vars.c"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_22_71, 2) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_9_32));
#line 5489 "mode_robdd.equiv_vars.c"
                  }
#line 195 "mode_robdd.equiv_vars.m"
                  {
#line 195 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 195 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
#line 195 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_3_f_0_1));
#line 195 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 195 "mode_robdd.equiv_vars.m"
                    MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__V_58_58, 3) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
#line 195 "mode_robdd.equiv_vars.m"
                  }
#line 203 "mode_robdd.equiv_vars.m"
                  {
#line 203 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__conv4_V_64_64 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32);
                  }
#line 203 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__V_64_64 = (MR_Word) mode_robdd__equiv_vars__conv4_V_64_64;
#line 195 "mode_robdd.equiv_vars.m"
                  {
#line 195 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__conv5_V_41_41 = mercury__map__foldl_3_f_0(mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_22_71, (MR_Word) mode_robdd__equiv_vars__V_58_58, (MR_Word) mode_robdd__equiv_vars__V_49_49, ((MR_Box) (mode_robdd__equiv_vars__V_64_64)));
                  }
#line 195 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__V_41_41 = ((MR_Word) mode_robdd__equiv_vars__conv5_V_41_41);
#line 147 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__EQVars_8 = (MR_Word) mode_robdd__equiv_vars__V_41_41;
#line 147 "mode_robdd.equiv_vars.m"
                }
#line 93 "mode_robdd.equiv_vars.m"
                break;
#line 93 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 0:
#line 92 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 93 "mode_robdd.equiv_vars.m"
                break;
#line 93 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 2:
#line 99 "mode_robdd.equiv_vars.m"
                {
#line 99 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__LeaderB_10, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__EQVars0_7);
                }
#line 93 "mode_robdd.equiv_vars.m"
                break;
#line 93 "mode_robdd.equiv_vars.m"
            }
#line 89 "mode_robdd.equiv_vars.m"
          }
#line 102 "mode_robdd.equiv_vars.m"
        else
#line 103 "mode_robdd.equiv_vars.m"
          {
#line 103 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_14;

#line 103 "mode_robdd.equiv_vars.m"
            {
#line 103 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_14, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__VarB_6);
            }
#line 107 "mode_robdd.equiv_vars.m"
#line 107 "mode_robdd.equiv_vars.m"
            switch (mode_robdd__equiv_vars__R_14) {
#line 107 "mode_robdd.equiv_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 107 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 1:
#line 171 "mode_robdd.equiv_vars.m"
                {
#line 171 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_83_83 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 171 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_84_84;
#line 171 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__conv6_V_84_84;

#line 171 "mode_robdd.equiv_vars.m"
                  {
#line 171 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__conv6_V_84_84 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__TypeInfo_9_32, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__V_83_83, ((MR_Box) (mode_robdd__equiv_vars__LeaderA_9)));
                  }
#line 171 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__V_84_84 = (MR_Word) mode_robdd__equiv_vars__conv6_V_84_84;
#line 171 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__EQVars_8 = (MR_Word) mode_robdd__equiv_vars__V_84_84;
#line 171 "mode_robdd.equiv_vars.m"
                }
#line 107 "mode_robdd.equiv_vars.m"
                break;
#line 107 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 0:
#line 106 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 107 "mode_robdd.equiv_vars.m"
                break;
#line 107 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 2:
#line 112 "mode_robdd.equiv_vars.m"
                {
#line 112 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__LeaderA_9, mode_robdd__equiv_vars__EQVars0_7);
                }
#line 107 "mode_robdd.equiv_vars.m"
                break;
#line 107 "mode_robdd.equiv_vars.m"
            }
#line 103 "mode_robdd.equiv_vars.m"
          }
#line 102 "mode_robdd.equiv_vars.m"
      }
#line 115 "mode_robdd.equiv_vars.m"
    else
#line 128 "mode_robdd.equiv_vars.m"
      {
#line 128 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__LeaderB_17;
#line 165 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__TypeInfo_9_92;
#line 165 "mode_robdd.equiv_vars.m"
        MR_Word mode_robdd__equiv_vars__V_90_90 = (MR_Word) mode_robdd__equiv_vars__EQVars0_7;
#line 165 "mode_robdd.equiv_vars.m"
        MR_Box mode_robdd__equiv_vars__conv7_LeaderB_17;

#line 5619 "mode_robdd.equiv_vars.c"
        {
#line 5621 "mode_robdd.equiv_vars.c"
          mode_robdd__equiv_vars__TypeInfo_9_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5623 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_92, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5625 "mode_robdd.equiv_vars.c"
          MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_9_92, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_19));
#line 5627 "mode_robdd.equiv_vars.c"
        }
#line 165 "mode_robdd.equiv_vars.m"
        {
#line 165 "mode_robdd.equiv_vars.m"
          mode_robdd__equiv_vars__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__TypeInfo_9_92, mode_robdd__equiv_vars__TypeInfo_9_92, mode_robdd__equiv_vars__VarB_6, (MR_Word) mode_robdd__equiv_vars__V_90_90, &mode_robdd__equiv_vars__conv7_LeaderB_17);
        }
#line 165 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 165 "mode_robdd.equiv_vars.m"
          {
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__LeaderB_17 = ((MR_Word) mode_robdd__equiv_vars__conv7_LeaderB_17);
#line 165 "mode_robdd.equiv_vars.m"
            mode_robdd__equiv_vars__succeeded = MR_TRUE;
#line 165 "mode_robdd.equiv_vars.m"
          }
#line 128 "mode_robdd.equiv_vars.m"
        if (mode_robdd__equiv_vars__succeeded)
#line 117 "mode_robdd.equiv_vars.m"
          {
#line 117 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_15;

#line 117 "mode_robdd.equiv_vars.m"
            {
#line 117 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_15, mode_robdd__equiv_vars__LeaderB_17, mode_robdd__equiv_vars__VarA_5);
            }
#line 121 "mode_robdd.equiv_vars.m"
#line 121 "mode_robdd.equiv_vars.m"
            switch (mode_robdd__equiv_vars__R_15) {
#line 121 "mode_robdd.equiv_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 121 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 1:
#line 123 "mode_robdd.equiv_vars.m"
                {
#line 123 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__LeaderB_17);
                }
#line 121 "mode_robdd.equiv_vars.m"
                break;
#line 121 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 0:
#line 120 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 121 "mode_robdd.equiv_vars.m"
                break;
#line 121 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 2:
#line 126 "mode_robdd.equiv_vars.m"
                {
#line 126 "mode_robdd.equiv_vars.m"
                  mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__LeaderB_17, mode_robdd__equiv_vars__EQVars0_7);
                }
#line 121 "mode_robdd.equiv_vars.m"
                break;
#line 121 "mode_robdd.equiv_vars.m"
            }
#line 117 "mode_robdd.equiv_vars.m"
          }
#line 128 "mode_robdd.equiv_vars.m"
        else
#line 129 "mode_robdd.equiv_vars.m"
          {
#line 129 "mode_robdd.equiv_vars.m"
            MR_Word mode_robdd__equiv_vars__R_16;

#line 129 "mode_robdd.equiv_vars.m"
            {
#line 129 "mode_robdd.equiv_vars.m"
              mercury__term____Compare____var_1_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, &mode_robdd__equiv_vars__R_16, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__VarB_6);
            }
#line 133 "mode_robdd.equiv_vars.m"
#line 133 "mode_robdd.equiv_vars.m"
            switch (mode_robdd__equiv_vars__R_16) {
#line 133 "mode_robdd.equiv_vars.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 133 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 1:
#line 134 "mode_robdd.equiv_vars.m"
                {
#line 134 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_13_13;

#line 135 "mode_robdd.equiv_vars.m"
                  {
#line 135 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_13_13 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__VarA_5);
                  }
#line 135 "mode_robdd.equiv_vars.m"
                  {
#line 135 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__V_13_13, mode_robdd__equiv_vars__VarA_5);
                  }
#line 134 "mode_robdd.equiv_vars.m"
                }
#line 133 "mode_robdd.equiv_vars.m"
                break;
#line 133 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 0:
#line 132 "mode_robdd.equiv_vars.m"
                mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__EQVars0_7;
#line 133 "mode_robdd.equiv_vars.m"
                break;
#line 133 "mode_robdd.equiv_vars.m"
              case (MR_Integer) 2:
#line 138 "mode_robdd.equiv_vars.m"
                {
#line 138 "mode_robdd.equiv_vars.m"
                  MR_Word mode_robdd__equiv_vars__V_12_12;

#line 139 "mode_robdd.equiv_vars.m"
                  {
#line 139 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__V_12_12 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarB_6, mode_robdd__equiv_vars__EQVars0_7, mode_robdd__equiv_vars__VarB_6);
                  }
#line 139 "mode_robdd.equiv_vars.m"
                  {
#line 139 "mode_robdd.equiv_vars.m"
                    mode_robdd__equiv_vars__EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(mode_robdd__equiv_vars__TypeInfo_for_T_19, mode_robdd__equiv_vars__VarA_5, mode_robdd__equiv_vars__V_12_12, mode_robdd__equiv_vars__VarB_6);
                  }
#line 138 "mode_robdd.equiv_vars.m"
                }
#line 133 "mode_robdd.equiv_vars.m"
                break;
#line 133 "mode_robdd.equiv_vars.m"
            }
#line 129 "mode_robdd.equiv_vars.m"
          }
#line 128 "mode_robdd.equiv_vars.m"
      }
#line 115 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__EQVars_8;
#line 115 "mode_robdd.equiv_vars.m"
  }
#line 28 "mode_robdd.equiv_vars.m"
}

#line 26 "mode_robdd.equiv_vars.m"
MR_Word MR_CALL 
mode_robdd__equiv_vars__init_equiv_vars_0_f_0(
#line 26 "mode_robdd.equiv_vars.m"
  MR_Word mode_robdd__equiv_vars__TypeInfo_for_T_3)
#line 26 "mode_robdd.equiv_vars.m"
{
#line 84 "mode_robdd.equiv_vars.m"
  {
#line 84 "mode_robdd.equiv_vars.m"
    MR_bool mode_robdd__equiv_vars__succeeded;
#line 84 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__HeadVar__1_1;
#line 84 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__TypeInfo_5_5;
#line 84 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__V_2_2;
#line 84 "mode_robdd.equiv_vars.m"
    MR_Word mode_robdd__equiv_vars__conv0_V_2_2;

#line 5787 "mode_robdd.equiv_vars.c"
    {
#line 5789 "mode_robdd.equiv_vars.c"
      mode_robdd__equiv_vars__TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5791 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 5793 "mode_robdd.equiv_vars.c"
      MR_hl_field(MR_mktag(0), mode_robdd__equiv_vars__TypeInfo_5_5, 1) = ((MR_Box) (mode_robdd__equiv_vars__TypeInfo_for_T_3));
#line 5795 "mode_robdd.equiv_vars.c"
    }
#line 84 "mode_robdd.equiv_vars.m"
    {
#line 84 "mode_robdd.equiv_vars.m"
      mode_robdd__equiv_vars__conv0_V_2_2 = mercury__map__init_0_f_0(mode_robdd__equiv_vars__TypeInfo_5_5, mode_robdd__equiv_vars__TypeInfo_5_5);
    }
#line 84 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__V_2_2 = (MR_Word) mode_robdd__equiv_vars__conv0_V_2_2;
#line 84 "mode_robdd.equiv_vars.m"
    mode_robdd__equiv_vars__HeadVar__1_1 = (MR_Word) mode_robdd__equiv_vars__V_2_2;
#line 84 "mode_robdd.equiv_vars.m"
    return mode_robdd__equiv_vars__HeadVar__1_1;
#line 84 "mode_robdd.equiv_vars.m"
  }
#line 26 "mode_robdd.equiv_vars.m"
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
