/*
** Automatically generated from `mode_robdd.equiv_vars.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-05
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


// :- module mode_robdd.equiv_vars.
// :- implementation.

/*
INIT mercury__mode_robdd__equiv_vars__init
ENDINIT
*/

#include "mode_robdd.equiv_vars.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.hlds_pred.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"



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
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word EQVars_5,
  MR_Word V_6,
  MR_Word Vs_7);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word LambdaHeadVar__1_9,
  MR_Word LambdaHeadVar__2_10,
  MR_Word LambdaHeadVar__3_11);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word EQVars_4,
  MR_Word LambdaHeadVar__1_9);

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word LambdaHeadVar__3_21,
  MR_Word * LambdaHeadVar__4_22,
  MR_Word LambdaHeadVar__5_23,
  MR_Word * LambdaHeadVar__6_24);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14);

static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Th_4,
  MR_Word LambdaHeadVar__1_14);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word NewLeader_10,
  MR_Word LambdaHeadVar__1_18,
  MR_Word LambdaHeadVar__2_19);

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word V_5,
  MR_Word M0_8,
  MR_Word * HeadVar__4_29,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word LambdaHeadVar__3_15);

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Var_5,
  MR_Word Leader_6,
  MR_Tuple HeadVar__3_3,
  MR_Tuple * HeadVar__4_4);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word EQVars_5,
  MR_Word V_6,
  MR_Word Vs_7);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Word EA_2,
  MR_Word EB_3,
  MR_Word DCG_0_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word L_3,
  MR_Word LA_4,
  MR_Word LB_5,
  MR_Word Match_6,
  MR_Word EA_7,
  MR_Word EB_8,
  MR_Word DCG_0_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Word EA_2,
  MR_Word EB_3,
  MR_Word DCG_0_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word L_3,
  MR_Word LA_4,
  MR_Word LB_5,
  MR_Word Match_6,
  MR_Word EA_7,
  MR_Word EB_8,
  MR_Word DCG_0_9,
  MR_Word * HeadVar__10_10);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Var0_5,
  MR_Word EQVars0_6,
  MR_Word Var_7);

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word EQVars_7);


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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) (mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__equiv_vars__pair__pti_pair_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__term__pti_var_1__pseudo_1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mode_robdd__equiv_vars____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__robdd__pti_equiv_vars_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__equiv_vars__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&mode_robdd__equiv_vars__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

MR_bool MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word Var_4,
  MR_Word EQVars_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_6 = (MR_Word) (EQVars_5);
    MR_Box conv0_HeadVar__3_3;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), Var_4, Var_6, &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv2_HeadVar__4_4;

    mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)), &conv2_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

void MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
  MR_Word * Changed_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8,
  MR_Word EQVars0_9,
  MR_Word * EQVars_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__sparse_bitset__is_empty_1_p_0((MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), Vars0_7);
    if (!(succeeded))
    {
      MR_Word LM_46 = (MR_Word) (EQVars0_9);

      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), LM_46);
    }
    if (succeeded)
    {
      *Vars_8 = Vars0_7;
      *EQVars_10 = EQVars0_9;
      *Changed_6 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Vars1_11;
      MR_Word LeaderMap0_12;
      MR_Word LeaderMap_13;
      MR_Word Var_14;
      MR_Tuple Var_17;
      MR_Tuple Var_18;
      MR_Box conv1_Vars1_11;
      MR_Box conv3_Var_18;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (EQVars0_9));
      }
      conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[1]), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_7[0]), Var_14, Vars0_7, ((MR_Box) (Vars0_7)));
      Vars1_11 = ((MR_Word) (conv1_Vars1_11));
      LeaderMap0_12 = (MR_Word) (EQVars0_9);
      {
        Var_17 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Vars1_11));
        MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (LeaderMap0_12));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_9[0]), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_8[0]), LeaderMap0_12, ((MR_Box) (Var_17)), &conv3_Var_18);
      Var_18 = ((MR_Tuple) (conv3_Var_18));
      *Changed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      *Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      LeaderMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2))));
      *EQVars_10 = (MR_Word) (LeaderMap_13);
    }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_49_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word EQVars_5,
  MR_Word V_6,
  MR_Word Vs_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word L_8;
    MR_Word Var_17 = (MR_Word) (EQVars_5);
    MR_Box conv0_L_8;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_6[0]), V_6, Var_17, &conv0_L_8);
    if (succeeded)
    {
      L_8 = ((MR_Word) (conv0_L_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__equiv_vars_scalar_common_7[0]), Vs_7, L_8);
    else
      HeadVar__4_4 = Vs_7;
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word LambdaHeadVar__1_9,
  MR_Word LambdaHeadVar__2_10,
  MR_Word LambdaHeadVar__3_11)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__4_12;

    succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_18, LambdaHeadVar__2_10, LambdaHeadVar__1_9);
    if (succeeded)
      LambdaHeadVar__4_12 = LambdaHeadVar__3_11;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word LeaderLeader_7;
      MR_Box conv0_LeaderLeader_7;

      {
        TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_18));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_18, TypeInfo_24_24, TypeInfo_24_24, LambdaHeadVar__2_10, (MR_Word) (LambdaHeadVar__3_11), &conv0_LeaderLeader_7);
      if (succeeded)
      {
        LeaderLeader_7 = ((MR_Word) (conv0_LeaderLeader_7));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word conv1_LambdaHeadVar__4_12;

        conv1_LambdaHeadVar__4_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_18, TypeInfo_24_24, TypeInfo_24_24, LambdaHeadVar__1_9, (MR_Word) (LambdaHeadVar__3_11), ((MR_Box) (LeaderLeader_7)));
        LambdaHeadVar__4_12 = (MR_Word) (conv1_LambdaHeadVar__4_12);
      }
      else
      {
        MR_Word TypeInfo_28_28;
        MR_Word Var_13;
        MR_Word conv2_Var_13;
        MR_Word conv3_LambdaHeadVar__4_12;

        {
          TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_18));
        }
        conv2_Var_13 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_18, TypeInfo_28_28, TypeInfo_28_28, LambdaHeadVar__1_9, (MR_Word) (LambdaHeadVar__3_11), ((MR_Box) (LambdaHeadVar__2_10)));
        Var_13 = (MR_Word) (conv2_Var_13);
        conv3_LambdaHeadVar__4_12 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_18, TypeInfo_28_28, TypeInfo_28_28, LambdaHeadVar__2_10, (MR_Word) (Var_13), ((MR_Box) (LambdaHeadVar__2_10)));
        LambdaHeadVar__4_12 = (MR_Word) (conv3_LambdaHeadVar__4_12);
      }
    }
    return LambdaHeadVar__4_12;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word EQVars_4,
  MR_Word LambdaHeadVar__1_9)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__2_10;
    MR_Word L_17;
    MR_Word TypeInfo_9_22;
    MR_Word Var_20 = (MR_Word) (EQVars_4);
    MR_Box conv0_L_17;

    {
      TypeInfo_9_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_22, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_12, TypeInfo_9_22, TypeInfo_9_22, LambdaHeadVar__1_9, (MR_Word) (Var_20), &conv0_L_17);
    if (succeeded)
    {
      L_17 = ((MR_Word) (conv0_L_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      LambdaHeadVar__2_10 = L_17;
    else
      LambdaHeadVar__2_10 = LambdaHeadVar__1_9;
    return LambdaHeadVar__2_10;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word LambdaHeadVar__3_21,
  MR_Word * LambdaHeadVar__4_22,
  MR_Word LambdaHeadVar__5_23,
  MR_Word * LambdaHeadVar__6_24)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_enum_35;
    MR_Word TypeInfo_33_33;

    {
      TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_31));
    }
    {
      TypeClassInfo_for_enum_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_35, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_35, 1) = ((MR_Box) (TypeInfo_for_T_31));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_35, 2) = ((MR_Box) (TypeInfo_33_33));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_31, TypeClassInfo_for_enum_35, LambdaHeadVar__3_21, LambdaHeadVar__2_20);
    if (succeeded)
    {
      *LambdaHeadVar__4_22 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_31, TypeClassInfo_for_enum_35, LambdaHeadVar__3_21, LambdaHeadVar__1_19);
      *LambdaHeadVar__6_24 = LambdaHeadVar__5_23;
    }
    else
    {
      MR_Word TypeClassInfo_for_enum_43;
      MR_Word TypeInfo_41_41;

      {
        TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_T_31));
      }
      {
        TypeClassInfo_for_enum_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_43, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_43, 1) = ((MR_Box) (TypeInfo_for_T_31));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_43, 2) = ((MR_Box) (TypeInfo_41_41));
      }
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_31, TypeClassInfo_for_enum_43, LambdaHeadVar__5_23, LambdaHeadVar__2_20);
      if (succeeded)
      {
        *LambdaHeadVar__4_22 = LambdaHeadVar__3_21;
        *LambdaHeadVar__6_24 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_31, TypeClassInfo_for_enum_43, LambdaHeadVar__5_23, LambdaHeadVar__1_19);
      }
      else
      {
        *LambdaHeadVar__4_22 = LambdaHeadVar__3_21;
        *LambdaHeadVar__6_24 = LambdaHeadVar__5_23;
      }
    }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14)
{
  {
    MR_Word LambdaHeadVar__3_15;
    MR_Word TypeInfo_24_24;
    MR_Word conv0_LambdaHeadVar__3_15;

    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    conv0_LambdaHeadVar__3_15 = mercury__map__delete_2_f_0(TypeInfo_24_24, TypeInfo_24_24, (MR_Word) (LambdaHeadVar__2_14), ((MR_Box) (LambdaHeadVar__1_13)));
    LambdaHeadVar__3_15 = (MR_Word) (conv0_LambdaHeadVar__3_15);
    return LambdaHeadVar__3_15;
  }
}

static MR_bool MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Th_4,
  MR_Word LambdaHeadVar__1_14)
{
  {
    MR_bool succeeded;
    MR_Word V_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_14, (MR_Integer) 0))));
    MR_Word Var_26;

    mercury__term____Compare____var_1_0(TypeInfo_for_T_19, &Var_26, V_17, Th_4);
    succeeded = ((MR_Integer) 2 != Var_26);
    return succeeded;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word NewLeader_10,
  MR_Word LambdaHeadVar__1_18,
  MR_Word LambdaHeadVar__2_19)
{
  {
    MR_Word LambdaHeadVar__3_20;
    MR_Word TypeInfo_35_35;
    MR_Word conv0_LambdaHeadVar__3_20;

    {
      TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_26));
    }
    conv0_LambdaHeadVar__3_20 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_26, TypeInfo_35_35, TypeInfo_35_35, LambdaHeadVar__1_18, (MR_Word) (LambdaHeadVar__2_19), ((MR_Box) (NewLeader_10)));
    LambdaHeadVar__3_20 = (MR_Word) (conv0_LambdaHeadVar__3_20);
    return LambdaHeadVar__3_20;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s * env_ptr = (struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29) = ((MR_Word) ((env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29));
    ((env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont)((env_ptr)->mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word V_5,
  MR_Word M0_8,
  MR_Word * HeadVar__4_29,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0_s env;

    (env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__HeadVar__4_29 = HeadVar__4_29;
    (env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont = cont;
    (env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word TypeInfo_31_31;

      {
        TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_26));
      }
      mercury__map__inverse_search_3_p_0(TypeInfo_31_31, TypeInfo_31_31, (MR_Word) (M0_8), ((MR_Box) (V_5)), &(env).mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_env_0__conv0_HeadVar__4_29, mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0_1, &env);
    }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word LambdaHeadVar__3_15)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__4_16;
    MR_Word TypeInfo_28_28;
    MR_Word LeaderB_11;
    MR_Box conv0_LeaderB_11;

    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_22));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_22, TypeInfo_28_28, TypeInfo_28_28, LambdaHeadVar__1_13, (MR_Word) (LambdaHeadVar__3_15), &conv0_LeaderB_11);
    if (succeeded)
    {
      LeaderB_11 = ((MR_Word) (conv0_LeaderB_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_39;

      mercury__term____Compare____var_1_0(TypeInfo_for_T_22, &Var_39, LambdaHeadVar__2_14, LeaderB_11);
      succeeded = ((MR_Integer) 1 == Var_39);
      if (succeeded)
      {
        MR_Word conv1_LambdaHeadVar__4_16;

        conv1_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_22, TypeInfo_28_28, TypeInfo_28_28, LeaderB_11, (MR_Word) (LambdaHeadVar__3_15), ((MR_Box) (LambdaHeadVar__2_14)));
        LambdaHeadVar__4_16 = (MR_Word) (conv1_LambdaHeadVar__4_16);
      }
      else
      {
        MR_Word Var_40;

        mercury__term____Compare____var_1_0(TypeInfo_for_T_22, &Var_40, LeaderB_11, LambdaHeadVar__2_14);
        succeeded = ((MR_Integer) 1 == Var_40);
        if (succeeded)
        {
          MR_Word conv2_LambdaHeadVar__4_16;

          conv2_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_22, TypeInfo_28_28, TypeInfo_28_28, LambdaHeadVar__2_14, (MR_Word) (LambdaHeadVar__3_15), ((MR_Box) (LeaderB_11)));
          LambdaHeadVar__4_16 = (MR_Word) (conv2_LambdaHeadVar__4_16);
        }
        else
          LambdaHeadVar__4_16 = LambdaHeadVar__3_15;
      }
    }
    else
    {
      MR_Word TypeInfo_38_38;
      MR_Word conv3_LambdaHeadVar__4_16;

      {
        TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_38_38, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_38_38, 1) = ((MR_Box) (TypeInfo_for_T_22));
      }
      conv3_LambdaHeadVar__4_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_22, TypeInfo_38_38, TypeInfo_38_38, LambdaHeadVar__1_13, (MR_Word) (LambdaHeadVar__3_15), ((MR_Box) (LambdaHeadVar__2_14)));
      LambdaHeadVar__4_16 = (MR_Word) (conv3_LambdaHeadVar__4_16);
    }
    return LambdaHeadVar__4_16;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Var_5,
  MR_Word Leader_6,
  MR_Tuple HeadVar__3_3,
  MR_Tuple * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word Changed0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Vars0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word LM0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word Changed_10;
    MR_Word Vars_11;
    MR_Word LM_12;
    MR_Word TypeInfo_15_15;
    MR_Word TypeClassInfo_for_enum_17;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    {
      TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_17, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_17, 1) = ((MR_Box) (TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_17, 2) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_13, TypeClassInfo_for_enum_17, Vars0_8, Leader_6);
    if (succeeded)
    {
      MR_Word conv0_LM_12;

      Vars_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_13, TypeClassInfo_for_enum_17, Vars0_8, Var_5);
      conv0_LM_12 = mercury__map__delete_2_f_0(TypeInfo_15_15, TypeInfo_15_15, (MR_Word) (LM0_9), ((MR_Box) (Var_5)));
      LM_12 = (MR_Word) (conv0_LM_12);
      Changed_10 = (MR_Integer) 1;
    }
    else
    {
      Vars_11 = Vars0_8;
      LM_12 = LM0_9;
      Changed_10 = Changed0_7;
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Changed_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Vars_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LM_12));
    }
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word EQVars_5,
  MR_Word V_6,
  MR_Word Vs_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word TypeInfo_9_18;
    MR_Word L_8;
    MR_Word Var_16 = (MR_Word) (EQVars_5);
    MR_Box conv0_L_8;

    {
      TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_18, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_9, TypeInfo_9_18, TypeInfo_9_18, V_6, (MR_Word) (Var_16), &conv0_L_8);
    if (succeeded)
    {
      L_8 = ((MR_Word) (conv0_L_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_enum_13;

      {
        TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 1) = ((MR_Box) (TypeInfo_for_T_9));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 2) = ((MR_Box) (TypeInfo_9_18));
      }
      HeadVar__4_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_9, TypeClassInfo_for_enum_13, Vs_7, L_8);
    }
    else
      HeadVar__4_4 = Vs_7;
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_10;

    conv0_LambdaHeadVar__2_10 = mode_robdd__equiv_vars__IntroducedFrom__func__remove_equiv__378__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_10));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__remove_equiv_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word EQVars_4,
  MR_Word Robdd_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word TypeInfo_14_14;
    MR_Word Var_7 = (MR_Word) (EQVars_4);

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_14_14, TypeInfo_14_14, (MR_Word) (Var_7));
    if (succeeded)
      HeadVar__3_3 = Robdd_5;
    else
    {
      MR_Word Var_8;

      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__remove_equiv_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) (EQVars_4));
      }
      HeadVar__3_3 = mercury__robdd__rename_vars_2_f_0(TypeInfo_for_T_12, Var_8, Robdd_5);
    }
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Robdd_3,
  MR_Word * LeaderMap_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    Var_5 = mercury__robdd__equivalent_vars_1_f_0(TypeInfo_for_T_6, Robdd_3);
    succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *LeaderMap_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0))));
    return succeeded;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0_1(
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
    MR_Word conv1_LambdaHeadVar__4_22;
    MR_Word conv0_LambdaHeadVar__6_24;

    mode_robdd__equiv_vars__IntroducedFrom__pred__label__362__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_LambdaHeadVar__4_22, ((MR_Word) (wrapper_arg_5)), &conv0_LambdaHeadVar__6_24);
    *wrapper_arg_4 = ((MR_Box) (conv1_LambdaHeadVar__4_22));
    *wrapper_arg_6 = ((MR_Box) (conv0_LambdaHeadVar__6_24));
  }
}

void MR_CALL 
mode_robdd__equiv_vars__label_5_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word E_6,
  MR_Word True0_7,
  MR_Word * True_8,
  MR_Word False0_9,
  MR_Word * False_10)
{
  {
    MR_Word TypeInfo_49_49;
    MR_Word TypeInfo_51_51;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv3_True_8;
    MR_Box conv2_False_10;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__label_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeInfo_for_T_31));
    }
    Var_18 = (MR_Word) (E_6);
    {
      TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_49_49, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_for_T_31));
    }
    {
      TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_51_51, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_51_51, 1) = ((MR_Box) (TypeInfo_49_49));
    }
    mercury__map__foldl2_6_p_0(TypeInfo_49_49, TypeInfo_49_49, TypeInfo_51_51, TypeInfo_51_51, (MR_Word) (Var_17), (MR_Word) (Var_18), ((MR_Box) (True0_7)), &conv3_True_8, ((MR_Box) (False0_9)), &conv2_False_10);
    *True_8 = ((MR_Word) (conv3_True_8));
    *False_10 = ((MR_Word) (conv2_False_10));
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv2_HeadVar__4_4;

    mode_robdd__equiv_vars__normalise_known_equivalent_vars_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)), &conv2_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = mode_robdd__equiv_vars__normalise_known_equivalent_vars_1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

void MR_CALL 
mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word * Changed_6,
  MR_Word Vars0_7,
  MR_Word * Vars_8,
  MR_Word EQVars0_9,
  MR_Word * EQVars_10)
{
  {
    MR_bool succeeded;

    {
      MR_Word TypeInfo_22_22;

      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_22_22, (MR_Word) (Vars0_7));
    }
    if (!(succeeded))
    {
      MR_Word TypeInfo_5_44;
      MR_Word LM_42 = (MR_Word) (EQVars0_9);

      {
        TypeInfo_5_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_5_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_5_44, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_5_44, TypeInfo_5_44, (MR_Word) (LM_42));
    }
    if (succeeded)
    {
      *Vars_8 = Vars0_7;
      *EQVars_10 = EQVars0_9;
      *Changed_6 = (MR_Integer) 0;
    }
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeClassInfo_for_enum_26;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_38_38;
      MR_Word TypeInfo_41_41;
      MR_Word Vars1_11;
      MR_Word LeaderMap0_12;
      MR_Word LeaderMap_13;
      MR_Word Var_14;
      MR_Word Var_16;
      MR_Tuple Var_17;
      MR_Tuple Var_18;
      MR_Box conv1_Vars1_11;
      MR_Box conv3_Var_18;

      {
        TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      {
        TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_26, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_26, 1) = ((MR_Box) (TypeInfo_for_T_20));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_26, 2) = ((MR_Box) (TypeInfo_24_24));
      }
      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_24_24));
      }
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[2]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_20));
        MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (EQVars0_9));
      }
      conv1_Vars1_11 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_20, TypeInfo_28_28, TypeClassInfo_for_enum_26, (MR_Word) (Var_14), Vars0_7, ((MR_Box) (Vars0_7)));
      Vars1_11 = ((MR_Word) (conv1_Vars1_11));
      LeaderMap0_12 = (MR_Word) (EQVars0_9);
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[3]));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeInfo_for_T_20));
      }
      {
        Var_17 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Vars1_11));
        MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (LeaderMap0_12));
      }
      {
        TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_38_38, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_38_38, 1) = ((MR_Box) (TypeInfo_24_24));
        MR_hl_field(MR_mktag(0), TypeInfo_38_38, 2) = ((MR_Box) (TypeInfo_24_24));
      }
      {
        TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 1) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 2) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 3) = ((MR_Box) (TypeInfo_28_28));
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 4) = ((MR_Box) (TypeInfo_38_38));
      }
      mercury__map__foldl_4_p_0(TypeInfo_24_24, TypeInfo_24_24, TypeInfo_41_41, (MR_Word) (Var_16), (MR_Word) (LeaderMap0_12), ((MR_Box) (Var_17)), &conv3_Var_18);
      Var_18 = ((MR_Tuple) (conv3_Var_18));
      *Changed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      *Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      LeaderMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2))));
      *EQVars_10 = (MR_Word) (LeaderMap_13);
    }
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__3_15;

    conv3_LambdaHeadVar__3_15 = mode_robdd__equiv_vars__IntroducedFrom__func__filter__313__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_15));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__filter_2_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word P_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_22_22;
    MR_Word LM0_5 = (MR_Word) (HeadVar__2_2);
    MR_Word LM_6;
    MR_Word Vars_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word conv0_Var_11;
    MR_Word conv2_Var_7;
    MR_Word conv1_Vars_8;
    MR_Box conv4_LM_6;

    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    conv0_Var_11 = mercury__map__keys_1_f_0(TypeInfo_20_20, TypeInfo_20_20, (MR_Word) (LM0_5));
    Var_11 = (MR_Word) (conv0_Var_11);
    mercury__list__filter_4_p_0(TypeInfo_20_20, (MR_Word) (P_4), (MR_Word) (Var_11), &conv2_Var_7, &conv1_Vars_8);
    Vars_8 = (MR_Word) (conv1_Vars_8);
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_20_20));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__filter_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeInfo_for_T_18));
    }
    conv4_LM_6 = mercury__list__foldl_3_f_0(TypeInfo_20_20, TypeInfo_22_22, (MR_Word) (Var_12), (MR_Word) (Vars_8), ((MR_Box) (LM0_5)));
    LM_6 = ((MR_Word) (conv4_LM_6));
    HeadVar__3_3 = (MR_Word) (LM_6);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__4_12;

    conv3_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_12));
    return wrapper_arg_4;
  }
}

static MR_bool MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mode_robdd__equiv_vars__IntroducedFrom__pred__restrict_threshold__305__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__restrict_threshold_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Th_4,
  MR_Word E_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_20_43;
    MR_Word TypeInfo_22_45;
    MR_Word LM_6;
    MR_Word LL0_7;
    MR_Word LL_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_32;
    MR_Word Var_38;
    MR_Word conv0_LL0_7;
    MR_Word conv1_LL_10;
    MR_Word conv2_LM_6;
    MR_Word conv4_Var_38;
    MR_Box conv5_Var_11;

    {
      TypeInfo_20_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_43, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_43, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    Var_12 = (MR_Word) (E_5);
    conv0_LL0_7 = mercury__map__to_assoc_list_1_f_0(TypeInfo_20_43, TypeInfo_20_43, (MR_Word) (Var_12));
    LL0_7 = (MR_Word) (conv0_LL0_7);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_19));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Th_4));
    }
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_20_43));
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 2) = ((MR_Box) (TypeInfo_20_43));
    }
    mercury__list__take_while_3_p_0(TypeInfo_25_25, (MR_Word) (Var_13), (MR_Word) (LL0_7), &conv1_LL_10);
    LL_10 = (MR_Word) (conv1_LL_10);
    conv2_LM_6 = mercury__map__from_assoc_list_1_f_0(TypeInfo_20_43, TypeInfo_20_43, (MR_Word) (LL_10));
    LM_6 = (MR_Word) (conv2_LM_6);
    {
      TypeInfo_22_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_45, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_45, 1) = ((MR_Box) (TypeInfo_20_43));
      MR_hl_field(MR_mktag(0), TypeInfo_22_45, 2) = ((MR_Box) (TypeInfo_20_43));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (mode_robdd__equiv_vars__restrict_threshold_2_f_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (TypeInfo_for_T_19));
    }
    conv4_Var_38 = mercury__map__init_0_f_0(TypeInfo_20_43, TypeInfo_20_43);
    Var_38 = (MR_Word) (conv4_Var_38);
    conv5_Var_11 = mercury__map__foldl_3_f_0(TypeInfo_20_43, TypeInfo_20_43, TypeInfo_22_45, (MR_Word) (Var_32), (MR_Word) (LM_6), ((MR_Box) (Var_38)));
    Var_11 = ((MR_Word) (conv5_Var_11));
    HeadVar__3_3 = (MR_Word) (Var_11);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__3_20;

    conv4_LambdaHeadVar__3_20 = mode_robdd__equiv_vars__IntroducedFrom__func__delete__288__1_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_20));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_1(
  void * env_ptr_arg)
{
  {
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s * env_ptr = (struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29));
    ((env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont)((env_ptr)->mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mode_robdd__equiv_vars__delete_3_f_0_2_env_0_s env;

    (env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont = cont;
    (env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mode_robdd__equiv_vars__IntroducedFrom__pred__delete__286__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &(env).mode_robdd__equiv_vars__delete_3_f_0_2_env_0__conv2_HeadVar__4_29, mode_robdd__equiv_vars__delete_2_f_0_1, &env);
    }
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__delete_2_f_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word E0_4,
  MR_Word V_5)
{
  {
    MR_bool succeeded;
    MR_Word E_6;
    MR_Word TypeInfo_9_45;
    MR_Word L_7;
    MR_Word Var_43 = (MR_Word) (E0_4);
    MR_Box conv0_L_7;

    {
      TypeInfo_9_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_45, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_45, 1) = ((MR_Box) (TypeInfo_for_T_26));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_26, TypeInfo_9_45, TypeInfo_9_45, V_5, (MR_Word) (Var_43), &conv0_L_7);
    if (succeeded)
    {
      L_7 = ((MR_Word) (conv0_L_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_38 = (MR_Word) (E0_4);

      succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_26, L_7, V_5);
      if (succeeded)
      {
        MR_Word M0_8;
        MR_Word Vars_9;
        MR_Word Var_16;
        MR_Word conv1_M0_8;
        MR_Word conv3_Vars_9;
        MR_Word NewLeader_10;

        conv1_M0_8 = mercury__map__delete_2_f_0(TypeInfo_9_45, TypeInfo_9_45, (MR_Word) (Var_38), ((MR_Box) (V_5)));
        M0_8 = (MR_Word) (conv1_M0_8);
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_2));
          MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeInfo_for_T_26));
          MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (V_5));
          MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (M0_8));
        }
        conv3_Vars_9 = mercury__solutions__solutions_1_f_1(TypeInfo_9_45, (MR_Word) (Var_16));
        Vars_9 = (MR_Word) (conv3_Vars_9);
        succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NewLeader_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 0))));
          {
            MR_Word TypeInfo_33_33;
            MR_Word M_12;
            MR_Word Var_17;
            MR_Box conv5_M_12;

            {
              TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
              MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_9_45));
              MR_hl_field(MR_mktag(0), TypeInfo_33_33, 2) = ((MR_Box) (TypeInfo_9_45));
            }
            {
              Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (mode_robdd__equiv_vars__delete_2_f_0_3));
              MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeInfo_for_T_26));
              MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (NewLeader_10));
            }
            conv5_M_12 = mercury__list__foldl_3_f_0(TypeInfo_9_45, TypeInfo_33_33, (MR_Word) (Var_17), (MR_Word) (Vars_9), ((MR_Box) (M0_8)));
            M_12 = ((MR_Word) (conv5_M_12));
            E_6 = (MR_Word) (M_12);
          }
        }
        else
          mercury__require__error_1_p_0((MR_String) "mode_robdd:equiv_vars:delete: malformed leader map");
      }
      else
      {
        MR_Word Var_22;
        MR_Word conv6_Var_22;

        conv6_Var_22 = mercury__map__delete_2_f_0(TypeInfo_9_45, TypeInfo_9_45, (MR_Word) (Var_38), ((MR_Box) (V_5)));
        Var_22 = (MR_Word) (conv6_Var_22);
        E_6 = (MR_Word) (Var_22);
      }
    }
    else
      E_6 = E0_4;
    return E_6;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__difference_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word EA_4,
  MR_Word EB_5)
{
  {
    MR_Word E_6;
    MR_Word TypeInfo_5_15;
    MR_Word Vars_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_13;
    MR_Word conv0_Vars_7;
    MR_Word conv1_Var_13;

    {
      TypeInfo_5_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_5_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_5_15, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    Var_8 = (MR_Word) (EA_4);
    conv0_Vars_7 = mercury__map__sorted_keys_1_f_0(TypeInfo_5_15, TypeInfo_5_15, (MR_Word) (Var_8));
    Vars_7 = (MR_Word) (conv0_Vars_7);
    conv1_Var_13 = mercury__map__init_0_f_0(TypeInfo_5_15, TypeInfo_5_15);
    Var_13 = (MR_Word) (conv1_Var_13);
    Var_9 = (MR_Word) (Var_13);
    mode_robdd__equiv_vars__diff_2_5_p_0(TypeInfo_for_T_10, Vars_7, EA_4, EB_5, Var_9, &E_6);
    return E_6;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__diff_2_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Word EA_2,
  MR_Word EB_3,
  MR_Word DCG_0_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = DCG_0_4;
    else
    {
      MR_Word V_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Vs_15;
      MR_Word DCG_1_17;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word L_24;
      MR_Word TypeInfo_9_29;
      MR_Word Var_27 = (MR_Word) (EA_2);
      MR_Box conv0_L_24;
      MR_Word L_32;
      MR_Word TypeInfo_9_37;
      MR_Word Var_35;
      MR_Box conv1_L_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_DCG_0_4;

      {
        TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_29, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_21, TypeInfo_9_29, TypeInfo_9_29, V_10, (MR_Word) (Var_27), &conv0_L_24);
      if (succeeded)
      {
        L_24 = ((MR_Word) (conv0_L_24));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_19 = L_24;
      else
        Var_19 = V_10;
      Var_35 = (MR_Word) (EB_3);
      {
        TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_37, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_21, TypeInfo_9_37, TypeInfo_9_37, V_10, (MR_Word) (Var_35), &conv1_L_32);
      if (succeeded)
      {
        L_32 = ((MR_Word) (conv1_L_32));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_20 = L_32;
      else
        Var_20 = V_10;
      mode_robdd__equiv_vars__diff_3_10_p_0(TypeInfo_for_T_21, Vs0_11, &Vs_15, V_10, Var_19, Var_20, (MR_Integer) 0, EA_2, EB_3, DCG_0_4, &DCG_1_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vs_15;
      next_value_of_DCG_0_4 = DCG_1_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      DCG_0_4 = next_value_of_DCG_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__diff_3_10_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word L_3,
  MR_Word LA_4,
  MR_Word LB_5,
  MR_Word Match_6,
  MR_Word EA_7,
  MR_Word EB_8,
  MR_Word DCG_0_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__10_10 = DCG_0_9;
    }
    else
    {
      MR_Word V_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vs0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeInfo_9_46;
      MR_Word Var_36;
      MR_Word Var_44 = (MR_Word) (EA_7);
      MR_Box conv0_Var_36;
      MR_Word Var_37;
      MR_Word Var_49;
      MR_Box conv1_Var_37;

      {
        TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_46, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, V_19, (MR_Word) (Var_44), &conv0_Var_36);
      if (succeeded)
      {
        Var_36 = ((MR_Word) (conv0_Var_36));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_35, LA_4, Var_36);
        if (succeeded)
        {
          Var_49 = (MR_Word) (EB_8);
          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, V_19, (MR_Word) (Var_49), &conv1_Var_37);
          if (succeeded)
          {
            Var_37 = ((MR_Word) (conv1_Var_37));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_35, LB_5, Var_37);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word DCG_1_30;
        MR_Word DCG_2_31;
        MR_Word Var_55 = (MR_Word) (DCG_0_9);
        MR_Word Var_56;
        MR_Word conv2_Var_56;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_DCG_0_9;

        conv2_Var_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, V_19, (MR_Word) (Var_55), ((MR_Box) (L_3)));
        Var_56 = (MR_Word) (conv2_Var_56);
        DCG_1_30 = (MR_Word) (Var_56);
        switch (Match_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_64;
              MR_Word conv3_Var_64;

              conv3_Var_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, L_3, (MR_Word) (Var_56), ((MR_Box) (L_3)));
              Var_64 = (MR_Word) (conv3_Var_64);
              DCG_2_31 = (MR_Word) (Var_64);
            }
            break;
          case (MR_Integer) 1:
            DCG_2_31 = DCG_1_30;
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Vs0_20;
        next_value_of_DCG_0_9 = DCG_2_31;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        Match_6 = (MR_Integer) 1;
        DCG_0_9 = next_value_of_DCG_0_9;
        continue;
      }
      else
      {
        MR_Word Vs1_28;

        mode_robdd__equiv_vars__diff_3_10_p_0(TypeInfo_for_T_35, Vs0_20, &Vs1_28, L_3, LA_4, LB_5, Match_6, EA_7, EB_8, DCG_0_9, HeadVar__10_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs1_28));
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__f_plus_2_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word EA_4,
  MR_Word EB_5)
{
  {
    MR_Word E_6;
    MR_Word TypeInfo_5_19;
    MR_Word VarsA_7;
    MR_Word VarsB_8;
    MR_Word Vars_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_17;
    MR_Word conv0_VarsA_7;
    MR_Word conv1_VarsB_8;
    MR_Word conv2_Vars_9;
    MR_Word conv3_Var_17;

    {
      TypeInfo_5_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_5_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_5_19, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    Var_10 = (MR_Word) (EA_4);
    conv0_VarsA_7 = mercury__map__keys_as_set_1_f_0(TypeInfo_5_19, TypeInfo_5_19, (MR_Word) (Var_10));
    VarsA_7 = (MR_Word) (conv0_VarsA_7);
    Var_11 = (MR_Word) (EB_5);
    conv1_VarsB_8 = mercury__map__keys_as_set_1_f_0(TypeInfo_5_19, TypeInfo_5_19, (MR_Word) (Var_11));
    VarsB_8 = (MR_Word) (conv1_VarsB_8);
    Var_12 = mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_14, TypeInfo_5_19, VarsA_7, VarsB_8);
    conv2_Vars_9 = mercury__set__to_sorted_list_1_f_0(TypeInfo_5_19, (MR_Word) (Var_12));
    Vars_9 = (MR_Word) (conv2_Vars_9);
    conv3_Var_17 = mercury__map__init_0_f_0(TypeInfo_5_19, TypeInfo_5_19);
    Var_17 = (MR_Word) (conv3_Var_17);
    Var_13 = (MR_Word) (Var_17);
    mode_robdd__equiv_vars__disj_2_5_p_0(TypeInfo_for_T_14, Vars_9, EA_4, EB_5, Var_13, &E_6);
    return E_6;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__disj_2_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Word EA_2,
  MR_Word EB_3,
  MR_Word DCG_0_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = DCG_0_4;
    else
    {
      MR_Word V_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Vs_15;
      MR_Word DCG_1_17;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word L_24;
      MR_Word TypeInfo_9_29;
      MR_Word Var_27 = (MR_Word) (EA_2);
      MR_Box conv0_L_24;
      MR_Word L_32;
      MR_Word TypeInfo_9_37;
      MR_Word Var_35;
      MR_Box conv1_L_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_DCG_0_4;

      {
        TypeInfo_9_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_29, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_21, TypeInfo_9_29, TypeInfo_9_29, V_10, (MR_Word) (Var_27), &conv0_L_24);
      if (succeeded)
      {
        L_24 = ((MR_Word) (conv0_L_24));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_19 = L_24;
      else
        Var_19 = V_10;
      Var_35 = (MR_Word) (EB_3);
      {
        TypeInfo_9_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_37, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_21, TypeInfo_9_37, TypeInfo_9_37, V_10, (MR_Word) (Var_35), &conv1_L_32);
      if (succeeded)
      {
        L_32 = ((MR_Word) (conv1_L_32));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_20 = L_32;
      else
        Var_20 = V_10;
      mode_robdd__equiv_vars__disj_3_10_p_0(TypeInfo_for_T_21, Vs0_11, &Vs_15, V_10, Var_19, Var_20, (MR_Integer) 0, EA_2, EB_3, DCG_0_4, &DCG_1_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vs_15;
      next_value_of_DCG_0_4 = DCG_1_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      DCG_0_4 = next_value_of_DCG_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mode_robdd__equiv_vars__disj_3_10_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word L_3,
  MR_Word LA_4,
  MR_Word LB_5,
  MR_Word Match_6,
  MR_Word EA_7,
  MR_Word EB_8,
  MR_Word DCG_0_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__10_10 = DCG_0_9;
    }
    else
    {
      MR_Word V_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vs0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeInfo_9_46;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_44 = (MR_Word) (EA_7);
      MR_Word Var_49;
      MR_Box conv0_Var_36;
      MR_Box conv1_Var_37;

      {
        TypeInfo_9_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_46, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, V_19, (MR_Word) (Var_44), &conv0_Var_36);
      if (succeeded)
      {
        Var_36 = ((MR_Word) (conv0_Var_36));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_35, LA_4, Var_36);
        if (succeeded)
        {
          Var_49 = (MR_Word) (EB_8);
          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, V_19, (MR_Word) (Var_49), &conv1_Var_37);
          if (succeeded)
          {
            Var_37 = ((MR_Word) (conv1_Var_37));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_35, LB_5, Var_37);
        }
      }
      if (succeeded)
      {
        MR_Word DCG_1_30;
        MR_Word DCG_2_31;
        MR_Word Var_55 = (MR_Word) (DCG_0_9);
        MR_Word Var_56;
        MR_Word conv2_Var_56;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_DCG_0_9;

        conv2_Var_56 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, V_19, (MR_Word) (Var_55), ((MR_Box) (L_3)));
        Var_56 = (MR_Word) (conv2_Var_56);
        DCG_1_30 = (MR_Word) (Var_56);
        switch (Match_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_64;
              MR_Word conv3_Var_64;

              conv3_Var_64 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_35, TypeInfo_9_46, TypeInfo_9_46, L_3, (MR_Word) (Var_56), ((MR_Box) (L_3)));
              Var_64 = (MR_Word) (conv3_Var_64);
              DCG_2_31 = (MR_Word) (Var_64);
            }
            break;
          case (MR_Integer) 1:
            DCG_2_31 = DCG_1_30;
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Vs0_20;
        next_value_of_DCG_0_9 = DCG_2_31;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        Match_6 = (MR_Integer) 1;
        DCG_0_9 = next_value_of_DCG_0_9;
        continue;
      }
      else
      {
        MR_Word Vs1_28;

        mode_robdd__equiv_vars__disj_3_10_p_0(TypeInfo_for_T_35, Vs0_20, &Vs1_28, L_3, LA_4, LB_5, Match_6, EA_7, EB_8, DCG_0_9, HeadVar__10_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs1_28));
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__4_12;

    conv2_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_12));
    return wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__4_16;

    conv0_LambdaHeadVar__4_16 = mode_robdd__equiv_vars__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_42_95_95_49_55_55_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_16));
    return wrapper_arg_4;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__f_times_2_f_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeInfo_20_57;
    MR_Word TypeInfo_22_59;
    MR_Word MA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word M_6;
    MR_Word M1_7;
    MR_Word Var_12;
    MR_Word Var_46;
    MR_Word Var_52;
    MR_Box conv1_M1_7;
    MR_Word conv3_Var_52;
    MR_Box conv4_M_6;

    {
      TypeInfo_20_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_57, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_57, 1) = ((MR_Box) (TypeInfo_for_T_22));
    }
    {
      TypeInfo_22_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_59, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_59, 1) = ((MR_Box) (TypeInfo_20_57));
      MR_hl_field(MR_mktag(0), TypeInfo_22_59, 2) = ((MR_Box) (TypeInfo_20_57));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeInfo_for_T_22));
    }
    conv1_M1_7 = mercury__map__foldl_3_f_0(TypeInfo_20_57, TypeInfo_20_57, TypeInfo_22_59, (MR_Word) (Var_12), (MR_Word) (MA_4), ((MR_Box) (MB_5)));
    M1_7 = ((MR_Word) (conv1_M1_7));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (mode_robdd__equiv_vars__f_times_2_f_0_2));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (TypeInfo_for_T_22));
    }
    conv3_Var_52 = mercury__map__init_0_f_0(TypeInfo_20_57, TypeInfo_20_57);
    Var_52 = (MR_Word) (conv3_Var_52);
    conv4_M_6 = mercury__map__foldl_3_f_0(TypeInfo_20_57, TypeInfo_20_57, TypeInfo_22_59, (MR_Word) (Var_46), (MR_Word) (M1_7), ((MR_Box) (Var_52)));
    M_6 = ((MR_Word) (conv4_M_6));
    HeadVar__3_3 = (MR_Word) (M_6);
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_5_5;
    MR_Word LM_2 = (MR_Word) (HeadVar__1_1);

    {
      TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_5_5, 1) = ((MR_Box) (TypeInfo_for_T_3));
    }
    succeeded = mercury__map__is_empty_1_p_0(TypeInfo_5_5, TypeInfo_5_5, (MR_Word) (LM_2));
    return succeeded;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__det_leader_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Var_4,
  MR_Word EQVars_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word L_6;
    MR_Word TypeInfo_9_12;
    MR_Word Var_10 = (MR_Word) (EQVars_5);
    MR_Box conv0_L_6;

    {
      TypeInfo_9_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_12, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_7, TypeInfo_9_12, TypeInfo_9_12, Var_4, (MR_Word) (Var_10), &conv0_L_6);
    if (succeeded)
    {
      L_6 = ((MR_Word) (conv0_L_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      HeadVar__3_3 = L_6;
    else
      HeadVar__3_3 = Var_4;
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__leader_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Var_4,
  MR_Word EQVars_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_9_9;
    MR_Word Var_6 = (MR_Word) (EQVars_5);
    MR_Box conv0_HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_7, TypeInfo_9_9, TypeInfo_9_9, Var_4, (MR_Word) (Var_6), &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word EQVars_4,
  MR_Word VA_5,
  MR_Word VB_6)
{
  {
    MR_bool succeeded;

    succeeded = mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(TypeInfo_for_T_7, EQVars_4, VA_5, VB_6);
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
mode_robdd__equiv_vars__vars_are_equivalent_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word EQVars_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_10, HeadVar__3_3, HeadVar__2_2);
    if (!(succeeded))
    {
      MR_Word TypeInfo_9_25;
      MR_Word Var_9;
      MR_Word Var_11;
      MR_Word Var_18 = (MR_Word) (EQVars_1);
      MR_Word Var_23;
      MR_Box conv0_Var_9;
      MR_Box conv1_Var_11;

      {
        TypeInfo_9_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_25, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_10, TypeInfo_9_25, TypeInfo_9_25, HeadVar__2_2, (MR_Word) (Var_18), &conv0_Var_9);
      if (succeeded)
      {
        Var_9 = ((MR_Word) (conv0_Var_9));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_23 = (MR_Word) (EQVars_1);
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_10, TypeInfo_9_25, TypeInfo_9_25, HeadVar__3_3, (MR_Word) (Var_23), &conv1_Var_11);
        if (succeeded)
        {
          Var_11 = ((MR_Word) (conv1_Var_11));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_10, Var_9, Var_11);
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_EQVars_8;

    conv2_EQVars_8 = mode_robdd__equiv_vars__add_equality_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_EQVars_8));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equalities_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Vars0_4,
  MR_Word EQVars_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word TypeClassInfo_for_enum_13;
    MR_Word Var_6;
    MR_Word Vars_7;
    MR_Word TypeInfo_11_11;
    MR_Box conv1_Var_6;
    MR_Word conv0_Vars_7;

    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    {
      TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 1) = ((MR_Box) (TypeInfo_for_T_9));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 2) = ((MR_Box) (TypeInfo_11_11));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_13, &conv1_Var_6, (MR_Word) (Vars0_4), &conv0_Vars_7);
    if (succeeded)
    {
      Var_6 = ((MR_Word) (conv1_Var_6));
      Vars_7 = (MR_Word) (conv0_Vars_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_19_19;
      MR_Word Var_8;
      MR_Box conv3_HeadVar__3_3;

      {
        TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_equiv_vars_1));
        MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_9));
      }
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equalities_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (TypeInfo_for_T_9));
        MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) (Var_6));
      }
      conv3_HeadVar__3_3 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_9, TypeInfo_19_19, TypeClassInfo_for_enum_13, (MR_Word) (Var_8), Vars_7, ((MR_Box) (EQVars_5)));
      HeadVar__3_3 = ((MR_Word) (conv3_HeadVar__3_3));
    }
    else
      HeadVar__3_3 = EQVars_5;
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__4_12;

    conv3_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_12));
    return wrapper_arg_4;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_3_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word EQVars0_7)
{
  {
    MR_bool succeeded;
    MR_Word EQVars_8;
    MR_Word TypeInfo_9_32;
    MR_Word LeaderA_9;
    MR_Word Var_30 = (MR_Word) (EQVars0_7);
    MR_Box conv0_LeaderA_9;

    {
      TypeInfo_9_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_32, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_19, TypeInfo_9_32, TypeInfo_9_32, VarA_5, (MR_Word) (Var_30), &conv0_LeaderA_9);
    if (succeeded)
    {
      LeaderA_9 = ((MR_Word) (conv0_LeaderA_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word LeaderB_10;
      MR_Word Var_35 = (MR_Word) (EQVars0_7);
      MR_Box conv1_LeaderB_10;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_19, TypeInfo_9_32, TypeInfo_9_32, VarB_6, (MR_Word) (Var_35), &conv1_LeaderB_10);
      if (succeeded)
      {
        LeaderB_10 = ((MR_Word) (conv1_LeaderB_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word R_11;

        mercury__term____Compare____var_1_0(TypeInfo_for_T_19, &R_11, LeaderA_9, LeaderB_10);
        switch (R_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_22_71;
              MR_Word Var_41;
              MR_Word Var_48 = (MR_Word) (EQVars0_7);
              MR_Word Var_49;
              MR_Word Var_58;
              MR_Word Var_64;
              MR_Word conv2_Var_49;
              MR_Word conv4_Var_64;
              MR_Box conv5_Var_41;

              conv2_Var_49 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_19, TypeInfo_9_32, TypeInfo_9_32, LeaderB_10, (MR_Word) (Var_48), ((MR_Box) (LeaderA_9)));
              Var_49 = (MR_Word) (conv2_Var_49);
              {
                TypeInfo_22_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_22_71, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
                MR_hl_field(MR_mktag(0), TypeInfo_22_71, 1) = ((MR_Box) (TypeInfo_9_32));
                MR_hl_field(MR_mktag(0), TypeInfo_22_71, 2) = ((MR_Box) (TypeInfo_9_32));
              }
              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_3_f_0_1));
                MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (TypeInfo_for_T_19));
              }
              conv4_Var_64 = mercury__map__init_0_f_0(TypeInfo_9_32, TypeInfo_9_32);
              Var_64 = (MR_Word) (conv4_Var_64);
              conv5_Var_41 = mercury__map__foldl_3_f_0(TypeInfo_9_32, TypeInfo_9_32, TypeInfo_22_71, (MR_Word) (Var_58), (MR_Word) (Var_49), ((MR_Box) (Var_64)));
              Var_41 = ((MR_Word) (conv5_Var_41));
              EQVars_8 = (MR_Word) (Var_41);
            }
            break;
          case (MR_Integer) 0:
            EQVars_8 = EQVars0_7;
            break;
          case (MR_Integer) 2:
            EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(TypeInfo_for_T_19, LeaderB_10, LeaderA_9, EQVars0_7);
            break;
        }
      }
      else
      {
        MR_Word R_14;

        mercury__term____Compare____var_1_0(TypeInfo_for_T_19, &R_14, LeaderA_9, VarB_6);
        switch (R_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_83 = (MR_Word) (EQVars0_7);
              MR_Word Var_84;
              MR_Word conv6_Var_84;

              conv6_Var_84 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_19, TypeInfo_9_32, TypeInfo_9_32, VarB_6, (MR_Word) (Var_83), ((MR_Box) (LeaderA_9)));
              Var_84 = (MR_Word) (conv6_Var_84);
              EQVars_8 = (MR_Word) (Var_84);
            }
            break;
          case (MR_Integer) 0:
            EQVars_8 = EQVars0_7;
            break;
          case (MR_Integer) 2:
            EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(TypeInfo_for_T_19, VarB_6, LeaderA_9, EQVars0_7);
            break;
        }
      }
    }
    else
    {
      MR_Word LeaderB_17;
      MR_Word TypeInfo_9_92;
      MR_Word Var_90 = (MR_Word) (EQVars0_7);
      MR_Box conv7_LeaderB_17;

      {
        TypeInfo_9_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_92, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_92, 1) = ((MR_Box) (TypeInfo_for_T_19));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_19, TypeInfo_9_92, TypeInfo_9_92, VarB_6, (MR_Word) (Var_90), &conv7_LeaderB_17);
      if (succeeded)
      {
        LeaderB_17 = ((MR_Word) (conv7_LeaderB_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word R_15;

        mercury__term____Compare____var_1_0(TypeInfo_for_T_19, &R_15, LeaderB_17, VarA_5);
        switch (R_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(TypeInfo_for_T_19, VarA_5, EQVars0_7, LeaderB_17);
            break;
          case (MR_Integer) 0:
            EQVars_8 = EQVars0_7;
            break;
          case (MR_Integer) 2:
            EQVars_8 = mode_robdd__equiv_vars__add_equality_2_3_f_0(TypeInfo_for_T_19, VarA_5, LeaderB_17, EQVars0_7);
            break;
        }
      }
      else
      {
        MR_Word R_16;

        mercury__term____Compare____var_1_0(TypeInfo_for_T_19, &R_16, VarA_5, VarB_6);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_13;

              Var_13 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(TypeInfo_for_T_19, VarB_6, EQVars0_7, VarA_5);
              EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(TypeInfo_for_T_19, VarA_5, Var_13, VarA_5);
            }
            break;
          case (MR_Integer) 0:
            EQVars_8 = EQVars0_7;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_12;

              Var_12 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(TypeInfo_for_T_19, VarB_6, EQVars0_7, VarB_6);
              EQVars_8 = mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(TypeInfo_for_T_19, VarA_5, Var_12, VarB_6);
            }
            break;
        }
      }
    }
    return EQVars_8;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__f_108_101_97_100_101_114_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Var0_5,
  MR_Word EQVars0_6,
  MR_Word Var_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word TypeInfo_13_13;
    MR_Word Var_8 = (MR_Word) (EQVars0_6);
    MR_Word Var_9;
    MR_Word conv0_Var_9;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    conv0_Var_9 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_11, TypeInfo_13_13, TypeInfo_13_13, Var0_5, (MR_Word) (Var_8), ((MR_Box) (Var_7)));
    Var_9 = (MR_Word) (conv0_Var_9);
    HeadVar__4_4 = (MR_Word) (Var_9);
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__4_12;

    conv1_LambdaHeadVar__4_12 = mode_robdd__equiv_vars__IntroducedFrom__func__normalise_leader_map__195__1_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    wrapper_arg_4 = ((MR_Box) (conv1_LambdaHeadVar__4_12));
    return wrapper_arg_4;
  }
}

static MR_Word MR_CALL 
mode_robdd__equiv_vars__add_equality_2_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word EQVars_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word TypeInfo_20_37;
    MR_Word TypeInfo_22_39;
    MR_Word Var_8;
    MR_Word Var_16 = (MR_Word) (EQVars_7);
    MR_Word Var_17;
    MR_Word Var_26;
    MR_Word Var_32;
    MR_Word conv0_Var_17;
    MR_Word conv2_Var_32;
    MR_Box conv3_Var_8;

    {
      TypeInfo_20_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_37, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    conv0_Var_17 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_12, TypeInfo_20_37, TypeInfo_20_37, B_6, (MR_Word) (Var_16), ((MR_Box) (A_5)));
    Var_17 = (MR_Word) (conv0_Var_17);
    {
      TypeInfo_22_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_39, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_39, 1) = ((MR_Box) (TypeInfo_20_37));
      MR_hl_field(MR_mktag(0), TypeInfo_22_39, 2) = ((MR_Box) (TypeInfo_20_37));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&mode_robdd__equiv_vars_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (mode_robdd__equiv_vars__add_equality_2_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (TypeInfo_for_T_12));
    }
    conv2_Var_32 = mercury__map__init_0_f_0(TypeInfo_20_37, TypeInfo_20_37);
    Var_32 = (MR_Word) (conv2_Var_32);
    conv3_Var_8 = mercury__map__foldl_3_f_0(TypeInfo_20_37, TypeInfo_20_37, TypeInfo_22_39, (MR_Word) (Var_26), (MR_Word) (Var_17), ((MR_Box) (Var_32)));
    Var_8 = ((MR_Word) (conv3_Var_8));
    HeadVar__4_4 = (MR_Word) (Var_8);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__equiv_vars__init_equiv_vars_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word TypeInfo_5_5;
    MR_Word Var_2;
    MR_Word conv0_Var_2;

    {
      TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_5_5, 1) = ((MR_Box) (TypeInfo_for_T_3));
    }
    conv0_Var_2 = mercury__map__init_0_f_0(TypeInfo_5_5, TypeInfo_5_5);
    Var_2 = (MR_Word) (conv0_Var_2);
    HeadVar__1_1 = (MR_Word) (Var_2);
    return HeadVar__1_1;
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

// :- end_module mode_robdd.equiv_vars.
