/*
** Automatically generated from `mode_robdd.tfeirn.m'
** by the Mercury compiler,
** version rotd-2023-10-06
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


// :- module mode_robdd.tfeirn.
// :- implementation.

/*
INIT mercury__mode_robdd__tfeirn__init
ENDINIT
*/

#include "mode_robdd.tfeirn.mih"


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
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
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
#include "hlds.hlds_pred.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.equiv_vars.mih"
#include "mode_robdd.implications.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"



struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s {
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12;
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13;
  MR_Cont mode_robdd__tfeirn__labelling_4_p_0_env_0__cont;
  void * mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18;
};

struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s {
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17;
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7;
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8;
  MR_Cont mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont;
  void * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_uenum_21;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13;
};


static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6];

static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6];

static const MR_DuArgLocn mode_robdd__tfeirn__mode_robdd__tfeirn__field_locns_tfeirn_1_0[6];

static const MR_DuFunctorDesc mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0;

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1];

static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1];

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1];

static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1];

static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0;

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__462__1_4_f_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Var_6,
  MR_Word LambdaHeadVar__1_18,
  MR_Word LambdaHeadVar__2_19);

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__791__1_4_f_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word LambdaHeadVar__3_14);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_50_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_70,
  MR_Word LambdaHeadVar__2_71);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_48_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_64,
  MR_Word LambdaHeadVar__2_65);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_50_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__2_57);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_48_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_50,
  MR_Word LambdaHeadVar__2_51);

static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Vars0_5,
  MR_Word X0_6,
  MR_Word * TrueVars_7,
  MR_Word * FalseVars_8);

static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Vars0_5,
  MR_Word X0_6,
  MR_Word * TrueVars_7,
  MR_Word * FalseVars_8,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
  MR_Word TypeInfo_for_T_57,
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_1[4][2];

static /* final */ const MR_Integer mode_robdd__tfeirn_scalar_common_2[1][2];

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_3[3][8];

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_4[1][3];




static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_imp_vars_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_robdd_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Integer mode_robdd__tfeirn_scalar_common_2[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_3[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_1[1]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_robdd_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6] = {
  (MR_PseudoTypeInfo) (&mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6] = {
  (MR_String) "true_vars",
  (MR_String) "false_vars",
  (MR_String) "equiv_vars",
  (MR_String) "imp_vars",
  (MR_String) "robdd",
  (MR_String) "normalised"
};

static const MR_DuArgLocn mode_robdd__tfeirn__mode_robdd__tfeirn__field_locns_tfeirn_1_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0 = {
  (MR_String) "mode_robdd",
  INT16_C(6),
  UINT16_C(31),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0,
  mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0,
  mode_robdd__tfeirn__mode_robdd__tfeirn__field_locns_tfeirn_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1] = { &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0 };

static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1] = { &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0 };

static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mode_robdd__tfeirn____Unify____tfeirn_1_0_10001)),
  ((MR_Box) (mode_robdd__tfeirn____Compare____tfeirn_1_0_10001)),
  (MR_String) "mode_robdd.tfeirn",
  (MR_String) "tfeirn",
  { mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1 },
  { mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1,

};

static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mode_robdd__tfeirn____Unify____tfeirn_0_0_10001)),
  ((MR_Box) (mode_robdd__tfeirn____Compare____tfeirn_0_0_10001)),
  (MR_String) "mode_robdd.tfeirn",
  (MR_String) "tfeirn",
  { NULL },
  { (MR_PseudoTypeInfo) (&mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_111_110_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;

  Var_2 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]));
  Var_3 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]));
  Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  Var_5 = mode_robdd__implications__init_imp_vars_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  Var_6 = mercury__robdd__one_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word ROBDD_16;
  MR_Word TA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word FA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word EA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word IA_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word RA_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word TB_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word FB_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word EB_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word IB_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word RB_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word TU_17;
  MR_Word FU_18;
  MR_Word EU_19;
  MR_Word IU_20;
  MR_Word TA1_21;
  MR_Word FA1_22;
  MR_Word EA1_23;
  MR_Word IA1_24;
  MR_Word RA1_25;
  MR_Word TB1_27;
  MR_Word FB1_28;
  MR_Word EB1_29;
  MR_Word IB1_30;
  MR_Word RB1_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;

  TU_17 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TA_4, TB_10);
  FU_18 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FA_5, FB_11);
  EU_19 = mode_robdd__equiv_vars__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA_6, EB_12);
  IU_20 = mode_robdd__implications__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IA_7, IB_13);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (TU_17));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (FU_18));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) (EU_19));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (IU_20));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) (RA_8));
    MR_hl_field(0, Var_34, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_33 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Var_34);
  TA1_21 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
  FA1_22 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
  EA1_23 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 2))));
  IA1_24 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 3))));
  RA1_25 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 4))));
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (TU_17));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (FU_18));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) (EU_19));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (IU_20));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) (RB_14));
    MR_hl_field(0, Var_37, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_36 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Var_37);
  TB1_27 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
  FB1_28 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
  EB1_29 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 2))));
  IB1_30 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 3))));
  RB1_31 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 4))));
  Var_39 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TA1_21, TB1_27);
  Var_40 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FA1_22, FB1_28);
  Var_41 = mode_robdd__equiv_vars__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA1_23, EB1_29);
  Var_42 = mode_robdd__implications__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IA1_24, IB1_30);
  Var_43 = mercury__robdd__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RA1_25, RB1_31);
  {
    ROBDD_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ROBDD_16, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, ROBDD_16, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, ROBDD_16, 2) = ((MR_Box) (Var_41));
    MR_hl_field(0, ROBDD_16, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, ROBDD_16, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, ROBDD_16, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return ROBDD_16;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__3_72;

  conv6_LambdaHeadVar__3_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_50_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv6_LambdaHeadVar__3_72));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__3_66;

  conv4_LambdaHeadVar__3_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_48_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_66));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_58;

  conv2_LambdaHeadVar__3_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_50_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_58));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_52;

  conv0_LambdaHeadVar__3_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_48_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_52));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word X_16;
  MR_Word TA0_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word FA0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word EA0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word IA0_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word RA0_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word TB0_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word FB0_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word EB0_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word IB0_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word RB0_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word Var_92;

  Var_92 = mercury__robdd__zero_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RA0_8, Var_92);
  if (succeeded)
    X_16 = HeadVar__2_2;
  else
  {
    MR_Word Var_93;

    Var_93 = mercury__robdd__zero_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
    succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RB0_14, Var_93);
    if (succeeded)
      X_16 = HeadVar__1_1;
    else
    {
      MR_Word T_17;
      MR_Word F_18;
      MR_Word E_19;
      MR_Word I_20;
      MR_Word R_21;
      MR_Word EA_22;
      MR_Word EB_23;
      MR_Word IA_24;
      MR_Word IB_25;
      MR_Word RA_26;
      MR_Word RB_27;
      MR_Word TAB_28;
      MR_Word FAB_29;
      MR_Word TBA_30;
      MR_Word FBA_31;
      MR_Word EAB_32;
      MR_Word EBA_33;
      MR_Word RA1_34;
      MR_Word RA2_37;
      MR_Word EA1_38;
      MR_Word RA3_39;
      MR_Word IA1_40;
      MR_Word RB1_41;
      MR_Word RB2_42;
      MR_Word EB1_43;
      MR_Word RB3_44;
      MR_Word IB1_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_55;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_69;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Box conv1_RA1_34;
      MR_Box conv3_RA2_37;
      MR_Box conv5_RB1_41;
      MR_Box conv7_RB2_42;

      T_17 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TA0_4, TB0_10);
      F_18 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FA0_5, FB0_11);
      TAB_28 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TA0_4, TB0_10);
      FAB_29 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FA0_5, FB0_11);
      Var_47 = mode_robdd__equiv_vars__add_equalities_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), TAB_28, EA0_6);
      EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), FAB_29, Var_47);
      TBA_30 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TB0_10, TA0_4);
      FBA_31 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FB0_11, FA0_5);
      Var_48 = mode_robdd__equiv_vars__add_equalities_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), TBA_30, EB0_12);
      EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), FBA_31, Var_48);
      E_19 = mode_robdd__equiv_vars__f_plus_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA_22, EB_23);
      EAB_32 = mode_robdd__equiv_vars__difference_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA_22, EB_23);
      IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EAB_32, IA0_7);
      EBA_33 = mode_robdd__equiv_vars__difference_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EB_23, EA_22);
      IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EBA_33, IB0_13);
      I_20 = mode_robdd__implications__f_plus_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IA_24, IB_25);
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
        MR_hl_field(0, Var_49, 4) = ((MR_Box) (E_19));
      }
      conv1_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_1[3]), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_49, TAB_28, ((MR_Box) (RA0_8)));
      RA1_34 = ((MR_Word) (conv1_RA1_34));
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
        MR_hl_field(0, Var_55, 4) = ((MR_Box) (E_19));
      }
      conv3_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_1[3]), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_55, FAB_29, ((MR_Box) (RA1_34)));
      RA2_37 = ((MR_Word) (conv3_RA2_37));
      Var_61 = mode_robdd__equiv_vars__difference_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA_22, EB_23);
      EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_61, EA0_6);
      RA3_39 = mercury__robdd__add_equivalences_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA1_38, RA2_37);
      Var_62 = mode_robdd__implications__difference_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IA_24, IB_25);
      IA1_40 = mode_robdd__implications__f_plus_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_62, IA0_7);
      RA_26 = mercury__robdd__add_implications_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IA1_40, RA3_39);
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3));
        MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_63, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
        MR_hl_field(0, Var_63, 4) = ((MR_Box) (E_19));
      }
      conv5_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_1[3]), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_63, TBA_30, ((MR_Box) (RB0_14)));
      RB1_41 = ((MR_Word) (conv5_RB1_41));
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4));
        MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_69, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
        MR_hl_field(0, Var_69, 4) = ((MR_Box) (E_19));
      }
      conv7_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_1[3]), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_69, FBA_31, ((MR_Box) (RB1_41)));
      RB2_42 = ((MR_Word) (conv7_RB2_42));
      Var_75 = mode_robdd__equiv_vars__difference_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EB_23, EA_22);
      EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_75, EB0_12);
      RB3_44 = mercury__robdd__add_equivalences_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EB1_43, RB2_42);
      Var_76 = mode_robdd__implications__difference_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IB_25, IA_24);
      IB1_45 = mode_robdd__implications__f_plus_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_76, IB0_13);
      RB_27 = mercury__robdd__add_implications_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IB1_45, RB3_44);
      R_21 = mercury__robdd__f_plus_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RA_26, RB_27);
      {
        X_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_16, 0) = ((MR_Box) (T_17));
        MR_hl_field(0, X_16, 1) = ((MR_Box) (F_18));
        MR_hl_field(0, X_16, 2) = ((MR_Box) (E_19));
        MR_hl_field(0, X_16, 3) = ((MR_Box) (I_20));
        MR_hl_field(0, X_16, 4) = ((MR_Box) (R_21));
        MR_hl_field(0, X_16, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return X_16;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_101_113_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));

  {
    MR_Word TypeCtorInfo_34_34;

    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarA_5);
    if (succeeded)
    {
      TypeCtorInfo_34_34 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_34_34, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarB_6);
    }
  }
  if (!(succeeded))
  {
    MR_Word TypeCtorInfo_36_36;

    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarA_5);
    if (succeeded)
    {
      TypeCtorInfo_36_36 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_36_36, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarB_6);
    }
  }
  if (succeeded)
    HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
  else
  {
    {
      MR_Word TypeCtorInfo_38_38;

      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarA_5);
      if (succeeded)
      {
        TypeCtorInfo_38_38 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_38_38, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarB_6);
      }
    }
    if (!(succeeded))
    {
      MR_Word TypeCtorInfo_40_40;

      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarA_5);
      if (succeeded)
      {
        TypeCtorInfo_40_40 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_40_40, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarB_6);
      }
    }
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
    {
      MR_Word Var_14;

      Var_14 = mode_robdd__implications__neq_vars_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarA_5, VarB_6, I_11);
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_8));
        MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_9));
        MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (E_10));
        MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_14));
        MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
        MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_109_112_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));
  MR_Word TypeCtorInfo_30_30;

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarA_5);
  if (succeeded)
  {
    TypeCtorInfo_30_30 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_30_30, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarB_6);
  }
  if (succeeded)
    HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarB_6);
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
    {
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarA_5);
      if (succeeded)
        HeadVar__4_4 = X_7;
      else
      {
        MR_Word Var_14;

        Var_14 = mode_robdd__implications__imp_vars_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarA_5, VarB_6, I_11);
        {
          HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_8));
          MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_9));
          MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (E_10));
          MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_14));
          MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
          MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_106_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word Vars_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word T_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word F_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));

  succeeded = mercury__sparse_bitset__subset_2_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, T_6);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Word Var_12;

    Var_12 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, F_7);
    succeeded = mercury__sparse_bitset__is_non_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Var_12);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    else
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), T_6, Vars_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_13));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_7));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_111_110_101_95_111_102_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word Vars_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));
  MR_Integer Var_12;
  MR_Word Var_14;

  Var_14 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, F_6);
  Var_12 = mercury__sparse_bitset__count_1_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_14);
  succeeded = (Var_12 <= (MR_Integer) 1);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Integer Var_15;
    MR_Word Var_17;

    Var_17 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, T_7);
    Var_15 = mercury__sparse_bitset__count_1_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_17);
    succeeded = (Var_15 > (MR_Integer) 1);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    else
    {
      MR_Word Var_18;

      Var_18 = mode_robdd__implications__at_most_one_of_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Vars_4, I_9);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_7));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_18));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_111_95_99_111_110_115_116_114_97_105_110_116_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_4_f_0(
  MR_Word V_in_6,
  MR_Word V_out_7,
  MR_Word V__8,
  MR_Word X_9)
{
  MR_Word HeadVar__5_5;
  MR_Word Vars_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  Var_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(V_in_6, V__8, X_9);
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (V__8));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (V_in_6));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_12);
  HeadVar__5_5 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(Vars_10, V_out_7, Var_11);
  return HeadVar__5_5;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_20;

  conv1_LambdaHeadVar__3_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__462__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_20));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word Vars_5,
  MR_Word Var_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word F_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word T_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_8, Var_6);
  if (succeeded)
  {
    succeeded = mercury__sparse_bitset__subset_2_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_5, F_8);
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
      HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Vars_5, X_7);
  }
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_9, Var_6);
    if (succeeded)
    {
      succeeded = mercury__sparse_bitset__subset_2_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_5, F_8);
      if (succeeded)
        HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      else
        HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Vars_5, X_7);
    }
    else
    {
      MR_Word Var_16;

      Var_16 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_5, T_9);
      succeeded = mercury__sparse_bitset__is_non_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Var_16);
      if (succeeded)
        HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Var_6, X_7);
      else
      {
        succeeded = mercury__sparse_bitset__subset_2_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_5, F_8);
        if (succeeded)
          HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Var_6, X_7);
        else
        {
          MR_Word Var1_10;
          MR_Word Vars1_11;
          MR_Box conv0_Var1_10;

          succeeded = mercury__sparse_bitset__remove_least_3_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), &conv0_Var1_10, Vars_5, &Vars1_11);
          if (succeeded)
          {
            Var1_10 = ((MR_Word) (conv0_Var1_10));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = mercury__sparse_bitset__is_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars1_11);
            if (succeeded)
              HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(Var_6, Var1_10, X_7);
            else
            {
              MR_Word Var_17;
              MR_Word Var_18;
              MR_Word Var_19;
              MR_Word Var_20;
              MR_Word T_46 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
              MR_Word F_47 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
              MR_Word E_48 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
              MR_Word I0_49 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
              MR_Word R_50 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));
              MR_Word I_52;
              MR_Word Var_54;
              MR_Word TA_63;
              MR_Word FA_64;
              MR_Word EA_65;
              MR_Word IA_66;
              MR_Word RA_67;
              MR_Word T1_69;
              MR_Word F1_70;
              MR_Word E1_71;
              MR_Word I1_72;
              MR_Word R1_73;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Box conv2_I_52;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
                MR_hl_field(0, Var_54, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1));
                MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_54, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
                MR_hl_field(0, Var_54, 4) = ((MR_Box) (Var_6));
              }
              conv2_I_52 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_1[2]), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_54, Vars_5, ((MR_Box) (I0_49)));
              I_52 = ((MR_Word) (conv2_I_52));
              {
                Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_17, 0) = ((MR_Box) (T_46));
                MR_hl_field(0, Var_17, 1) = ((MR_Box) (F_47));
                MR_hl_field(0, Var_17, 2) = ((MR_Box) (E_48));
                MR_hl_field(0, Var_17, 3) = ((MR_Box) (I_52));
                MR_hl_field(0, Var_17, 4) = ((MR_Box) (R_50));
                MR_hl_field(0, Var_17, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              Var_19 = mercury__robdd__var_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_6);
              Var_20 = mercury__robdd__disj_vars_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Vars_5);
              Var_18 = mercury__robdd__f_less_or_equal_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_19, Var_20);
              TA_63 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
              FA_64 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
              EA_65 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 2))));
              IA_66 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 3))));
              RA_67 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 4))));
              {
                Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_82, 0) = ((MR_Box) (TA_63));
                MR_hl_field(0, Var_82, 1) = ((MR_Box) (FA_64));
                MR_hl_field(0, Var_82, 2) = ((MR_Box) (EA_65));
                MR_hl_field(0, Var_82, 3) = ((MR_Box) (IA_66));
                MR_hl_field(0, Var_82, 4) = ((MR_Box) (Var_18));
                MR_hl_field(0, Var_82, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              Var_81 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Var_82);
              T1_69 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 0))));
              F1_70 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 1))));
              E1_71 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 2))));
              I1_72 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 3))));
              R1_73 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 4))));
              Var_75 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TA_63, T1_69);
              Var_76 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FA_64, F1_70);
              Var_77 = mode_robdd__equiv_vars__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA_65, E1_71);
              Var_78 = mode_robdd__implications__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IA_66, I1_72);
              Var_79 = mercury__robdd__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RA_67, R1_73);
              {
                HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_75));
                MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (Var_76));
                MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_77));
                MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_78));
                MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (Var_79));
                MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
            }
          }
          else
            HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Var_6, X_7);
        }
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));

  {
    MR_Word TypeCtorInfo_34_34;

    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarA_5);
    if (succeeded)
    {
      TypeCtorInfo_34_34 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_34_34, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarB_6);
    }
  }
  if (!(succeeded))
  {
    MR_Word TypeCtorInfo_36_36;

    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarA_5);
    if (succeeded)
    {
      TypeCtorInfo_36_36 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_36_36, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarB_6);
    }
  }
  if (succeeded)
    HeadVar__4_4 = X_7;
  else
  {
    {
      MR_Word TypeCtorInfo_38_38;

      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarA_5);
      if (succeeded)
      {
        TypeCtorInfo_38_38 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_38_38, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarB_6);
      }
    }
    if (!(succeeded))
    {
      MR_Word TypeCtorInfo_40_40;

      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_9, VarA_5);
      if (succeeded)
      {
        TypeCtorInfo_40_40 = (MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeCtorInfo_40_40, (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_8, VarB_6);
      }
    }
    if (succeeded)
      HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    else
    {
      MR_Word Var_14;

      Var_14 = mode_robdd__equiv_vars__add_equality_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarA_5, VarB_6, E_10);
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_8));
        MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_9));
        MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_14));
        MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (I_11));
        MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
        MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word Vars_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));

  succeeded = mercury__sparse_bitset__subset_2_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, F_6);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Word Var_12;

    Var_12 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, T_7);
    succeeded = mercury__sparse_bitset__is_non_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Var_12);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    else
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), F_6, Vars_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_7));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_13));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word Vars_4,
  MR_Word X0_5)
{
  MR_bool succeeded;
  MR_Word X_6;
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 0))));
  MR_Word F_8 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 1))));
  MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 2))));
  MR_Word I_10 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 3))));
  MR_Word R_11 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 4))));
  MR_Word Var_18;

  Var_18 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, T_7);
  succeeded = mercury__sparse_bitset__is_non_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Var_18);
  if (succeeded)
    X_6 = X0_5;
  else
  {
    succeeded = mercury__sparse_bitset__subset_2_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, F_8);
    if (succeeded)
      X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    else
    {
      MR_Word VarsNF_13;
      MR_Word Var1_14;
      MR_Word VarsNF1_15;
      MR_Box conv0_Var1_14;

      VarsNF_13 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Vars_4, F_8);
      succeeded = mercury__sparse_bitset__remove_least_3_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), &conv0_Var1_14, VarsNF_13, &VarsNF1_15);
      if (succeeded)
      {
        Var1_14 = ((MR_Word) (conv0_Var1_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var2_16;
        MR_Word VarsNF2_17;
        MR_Box conv1_Var2_16;

        succeeded = mercury__sparse_bitset__remove_least_3_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), &conv1_Var2_16, VarsNF1_15, &VarsNF2_17);
        if (succeeded)
        {
          Var2_16 = ((MR_Word) (conv1_Var2_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = mercury__sparse_bitset__is_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), VarsNF2_17);
          if (succeeded)
          {
            MR_Word Var_19;

            Var_19 = mode_robdd__implications__either_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var1_14, Var2_16, I_10);
            {
              X_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, X_6, 0) = ((MR_Box) (T_7));
              MR_hl_field(0, X_6, 1) = ((MR_Box) (F_8));
              MR_hl_field(0, X_6, 2) = ((MR_Box) (E_9));
              MR_hl_field(0, X_6, 3) = ((MR_Box) (Var_19));
              MR_hl_field(0, X_6, 4) = ((MR_Box) (R_11));
              MR_hl_field(0, X_6, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
          else
          {
            MR_Word Var_21;
            MR_Word TA_33;
            MR_Word FA_34;
            MR_Word EA_35;
            MR_Word IA_36;
            MR_Word RA_37;
            MR_Word T1_39;
            MR_Word F1_40;
            MR_Word E1_41;
            MR_Word I1_42;
            MR_Word R1_43;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_51;
            MR_Word Var_52;

            Var_21 = mercury__robdd__disj_vars_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarsNF_13);
            TA_33 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 0))));
            FA_34 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 1))));
            EA_35 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 2))));
            IA_36 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 3))));
            RA_37 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 4))));
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (TA_33));
              MR_hl_field(0, Var_52, 1) = ((MR_Box) (FA_34));
              MR_hl_field(0, Var_52, 2) = ((MR_Box) (EA_35));
              MR_hl_field(0, Var_52, 3) = ((MR_Box) (IA_36));
              MR_hl_field(0, Var_52, 4) = ((MR_Box) (Var_21));
              MR_hl_field(0, Var_52, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            Var_51 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Var_52);
            T1_39 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 0))));
            F1_40 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 1))));
            E1_41 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 2))));
            I1_42 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 3))));
            R1_43 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 4))));
            Var_45 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TA_33, T1_39);
            Var_46 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FA_34, F1_40);
            Var_47 = mode_robdd__equiv_vars__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EA_35, E1_41);
            Var_48 = mode_robdd__implications__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), IA_36, I1_42);
            Var_49 = mercury__robdd__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RA_37, R1_43);
            {
              X_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, X_6, 0) = ((MR_Box) (Var_45));
              MR_hl_field(0, X_6, 1) = ((MR_Box) (Var_46));
              MR_hl_field(0, X_6, 2) = ((MR_Box) (Var_47));
              MR_hl_field(0, X_6, 3) = ((MR_Box) (Var_48));
              MR_hl_field(0, X_6, 4) = ((MR_Box) (Var_49));
              MR_hl_field(0, X_6, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
        }
        else
          X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Var1_14, X0_5);
      }
      else
        X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    }
  }
  return X_6;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word V_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word T_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word F_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_6, V_4);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_7, V_4);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    else
    {
      MR_Word Var_12;

      Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_6, V_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_12));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_7));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word F_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word T_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_8, VarA_5);
  if (succeeded)
    HeadVar__4_4 = X_7;
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_8, VarB_6);
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
    {
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_9, VarA_5);
      if (succeeded)
        HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(VarB_6, X_7);
      else
      {
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_9, VarB_6);
        if (succeeded)
          HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(VarA_5, X_7);
        else
        {
          MR_Word Var_14;

          Var_14 = mode_robdd__implications__not_both_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarA_5, VarB_6, I_11);
          {
            HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_9));
            MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_8));
            MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (E_10));
            MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_14));
            MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
            MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
        }
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word V_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_7, V_4);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
    else
    {
      MR_Word Var_12;

      Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_7));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_12));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0(
  MR_Word X_3,
  MR_Word V_4)
{
  MR_bool succeeded;

  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 4))));
    MR_Word Var_17;

    Var_17 = mercury__robdd__zero_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
    succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_5, Var_17);
  }
  if (!(succeeded))
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 0))));

    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_6, V_4);
  }
  return succeeded;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word X_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 4))));
  MR_Word Var_12;

  Var_12 = mercury__robdd__zero_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_4, Var_12);
  if (succeeded)
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 0))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_115_95_100_105_115_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word X_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 4))));
  MR_Word Var_12;

  Var_12 = mercury__robdd__zero_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_4, Var_12);
  if (succeeded)
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    }
  }
  return HeadVar__2_2;
}

void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_107_110_111_119_110_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_3_p_0(
  MR_Word X_4,
  MR_Word * TrueVars_5,
  MR_Word * FalseVars_6)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 4))));
  MR_Word Var_21;

  Var_21 = mercury__robdd__zero_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_7, Var_21);
  if (succeeded)
  {
    *TrueVars_5 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]));
    *FalseVars_6 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]));
  }
  else
  {
    *TrueVars_5 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
    *FalseVars_6 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_5, V_4);
  if (succeeded)
  {
    MR_Word Var_12;

    Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_5, V_4);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_12));
      MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
      MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_7));
      MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_8));
      MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_9));
      MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
    }
  }
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
    if (succeeded)
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_13));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
      }
    }
    else
    {
      MR_Word L_11;

      succeeded = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(V_4, E_7, &L_11);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____var_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), L_11, V_4);
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word Var_14;

          Var_14 = mode_robdd__equiv_vars__delete_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), E_7, V_4);
          {
            HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
            MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
            MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_14));
            MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_8));
            MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_9));
            MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
          }
        }
        else
        {
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word Var_17;

          Var_15 = mode_robdd__equiv_vars__delete_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), E_7, V_4);
          Var_16 = mode_robdd__implications__delete_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), I_8, V_4);
          Var_17 = mercury__robdd__restrict_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), V_4, R_9);
          {
            HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
            MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
            MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_15));
            MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_16));
            MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_17));
            MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
          }
        }
      }
      else
      {
        MR_Word Var_18;
        MR_Word Var_19;

        Var_18 = mode_robdd__implications__delete_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), I_8, V_4);
        Var_19 = mercury__robdd__restrict_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), V_4, R_9);
        {
          HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
          MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
          MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_7));
          MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_18));
          MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_19));
          MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
        }
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;

  Var_11 = mercury__sparse_bitset__remove_gt_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_5, ((MR_Box) (V_4)));
  Var_12 = mercury__sparse_bitset__remove_gt_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, ((MR_Box) (V_4)));
  Var_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), V_4, E_7);
  Var_14 = mode_robdd__implications__restrict_threshold_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), V_4, I_8);
  Var_15 = mercury__robdd__restrict_threshold_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), V_4, R_9);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word P_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;

  Var_11 = mercury__sparse_bitset__filter_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), P_4, T_5);
  Var_12 = mercury__sparse_bitset__filter_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), P_4, F_6);
  Var_13 = mode_robdd__equiv_vars__filter_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), P_4, E_7);
  Var_14 = mode_robdd__implications__filter_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), P_4, I_8);
  Var_15 = mercury__robdd__restrict_filter_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), P_4, R_9);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_116_114_117_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word X_11;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
  if (succeeded)
    X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_5, V_4);
    if (succeeded)
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_5, V_4);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (Var_13));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (F_6));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (N_10));
      }
    }
    else
    {
      MR_Word X0_12;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_5, V_4);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (F_6));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, Var_14, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, Var_14, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Var_14);
      Var_18 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 0))));
      Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_18, V_4);
      Var_25 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 1))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 2))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 3))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 4))));
      Var_29 = ((MR_Unsigned) ((MR_hl_field(0, X0_12, (MR_Integer) 5))) & (MR_Integer) 1);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (Var_17));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (Var_25));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (Var_26));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (Var_27));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (Var_28));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (Var_29));
      }
    }
  }
  return X_11;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_102_97_108_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word X_11;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);

  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), T_5, V_4);
  if (succeeded)
    X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
  else
  {
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
    if (succeeded)
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (T_5));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (Var_13));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (N_10));
      }
    }
    else
    {
      MR_Word X0_12;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_24;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), F_6, V_4);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (T_5));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (Var_15));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, Var_14, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, Var_14, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Var_14);
      Var_18 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 1))));
      Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&mode_robdd__tfeirn_scalar_common_4[0]), Var_18, V_4);
      Var_24 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 2))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 3))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 4))));
      Var_29 = ((MR_Unsigned) ((MR_hl_field(0, X0_12, (MR_Integer) 5))) & (MR_Integer) 1);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (Var_24));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (Var_17));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (Var_26));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (Var_27));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (Var_28));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (Var_29));
      }
    }
  }
  return X_11;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(X_3);
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word X_2;
    MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (Var_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_50;

          Var_50 = mercury__sparse_bitset__intersect_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Var_69, Var_68);
          succeeded = mercury__sparse_bitset__is_non_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), Var_50);
          if (succeeded)
            X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          else
          {
            MR_Word Changed0_18;
            MR_Word TrueVars1_19;
            MR_Word FalseVars1_20;
            MR_Word EQVars1_21;
            MR_Word Changed1_22;
            MR_Word TrueVars2_23;
            MR_Word FalseVars2_24;
            MR_Word ImpVars1_25;
            MR_Word Changed2_26;
            MR_Word Robdd1_27;
            MR_Word Changed3_28;
            MR_Word Var_51;
            MR_Word Changed0_72;
            MR_Word Changed1_73;
            MR_Word DCG_1_74;
            MR_Word NewTrueVars_29;
            MR_Word NewFalseVars_30;
            MR_Word Var_52;
            MR_Word Var_53;

            mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&Changed0_72, Var_69, &TrueVars1_19, Var_67, &DCG_1_74);
            mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&Changed1_73, Var_68, &FalseVars1_20, DCG_1_74, &EQVars1_21);
            Changed0_18 = mercury__bool__or_2_f_0(Changed0_72, Changed1_73);
            mode_robdd__implications__normalise_true_false_implication_vars_7_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), &Changed1_22, TrueVars1_19, &TrueVars2_23, FalseVars1_20, &FalseVars2_24, Var_66, &ImpVars1_25);
            Changed2_26 = mercury__bool__or_2_f_0(Changed0_18, Changed1_22);
            Robdd1_27 = mercury__robdd__restrict_true_false_vars_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), TrueVars2_23, FalseVars2_24, Var_65);
            succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Robdd1_27, Var_65);
            succeeded = !(succeeded);
            if (succeeded)
              Var_51 = (MR_Integer) 1;
            else
              Var_51 = (MR_Integer) 0;
            Changed3_28 = mercury__bool__or_2_f_0(Changed2_26, Var_51);
            mercury__robdd__definite_vars_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Robdd1_27, &Var_52, &Var_53);
            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NewTrueVars_29 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
              succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                NewFalseVars_30 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Changed4_31;
              MR_Word TrueVars_32;
              MR_Word FalseVars_33;
              MR_Word Changed5_34;
              MR_Word ImpVars2_35;

              succeeded = mercury__sparse_bitset__is_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), NewTrueVars_29);
              if (succeeded)
                succeeded = mercury__sparse_bitset__is_empty_1_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), NewFalseVars_30);
              if (succeeded)
              {
                Changed4_31 = Changed3_28;
                TrueVars_32 = TrueVars2_23;
                FalseVars_33 = FalseVars2_24;
              }
              else
              {
                Changed4_31 = (MR_Integer) 1;
                TrueVars_32 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), TrueVars2_23, NewTrueVars_29);
                FalseVars_33 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]), FalseVars2_24, NewFalseVars_30);
              }
              succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EQVars1_21, &Changed5_34, ImpVars1_25, &ImpVars2_35);
              if (succeeded)
              {
                MR_Word Changed6_36;
                MR_Word EQVars2_37;
                MR_Word ImpVars3_38;
                MR_Word Changed7_39;
                MR_Word Changed8_40;
                MR_Word Robdd2_41;
                MR_Word EQVars_42;
                MR_Word Changed9_43;
                MR_Word Changed10_44;
                MR_Word Robdd_45;
                MR_Word ImpVars_46;
                MR_Word Changed_47;
                MR_Word Var_54;
                MR_Word Changed0_77;
                MR_Word Robdd1_78;
                MR_Word Var_79;
                MR_Word RobddEQVars_76;

                mode_robdd__implications__propagate_implications_into_equivalences_5_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), &Changed6_36, EQVars1_21, &EQVars2_37, ImpVars2_35, &ImpVars3_38);
                Var_54 = mercury__bool__or_2_f_0(Changed4_31, Changed5_34);
                Changed7_39 = mercury__bool__or_2_f_0(Var_54, Changed6_36);
                succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Robdd1_27, &RobddEQVars_76);
                if (succeeded)
                {
                  succeeded = mode_robdd__equiv_vars__empty_1_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RobddEQVars_76);
                  if (succeeded)
                  {
                    Changed0_77 = (MR_Integer) 0;
                    Robdd1_78 = Robdd1_27;
                    EQVars_42 = EQVars2_37;
                  }
                  else
                  {
                    Changed0_77 = (MR_Integer) 1;
                    Robdd1_78 = mercury__robdd__squeeze_equiv_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RobddEQVars_76, Robdd1_27);
                    EQVars_42 = mode_robdd__equiv_vars__f_times_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EQVars2_37, RobddEQVars_76);
                  }
                }
                else
                {
                  EQVars_42 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
                  succeeded = mercury__robdd____Unify____equiv_vars_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EQVars_42, EQVars2_37);
                  if (succeeded)
                    Changed0_77 = (MR_Integer) 0;
                  else
                    Changed0_77 = (MR_Integer) 1;
                  Robdd1_78 = Robdd1_27;
                }
                Robdd2_41 = mode_robdd__equiv_vars__remove_equiv_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), EQVars2_37, Robdd1_78);
                succeeded = mercury__robdd____Unify____robdd_1_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Robdd2_41, Robdd1_78);
                succeeded = !(succeeded);
                if (succeeded)
                  Var_79 = (MR_Integer) 1;
                else
                  Var_79 = (MR_Integer) 0;
                Changed8_40 = mercury__bool__or_2_f_0(Changed0_77, Var_79);
                Changed9_43 = mercury__bool__or_2_f_0(Changed7_39, Changed8_40);
                mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), &Changed10_44, Robdd2_41, &Robdd_45, ImpVars3_38, &ImpVars_46);
                Changed_47 = mercury__bool__or_2_f_0(Changed9_43, Changed10_44);
                switch (Changed_47) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      X_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, X_2, 0) = ((MR_Box) (TrueVars_32));
                      MR_hl_field(0, X_2, 1) = ((MR_Box) (FalseVars_33));
                      MR_hl_field(0, X_2, 2) = ((MR_Box) (EQVars_42));
                      MR_hl_field(0, X_2, 3) = ((MR_Box) (ImpVars_46));
                      MR_hl_field(0, X_2, 4) = ((MR_Box) (Robdd_45));
                      MR_hl_field(0, X_2, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word X0_48;
                      MR_Word next_value_of_HeadVar__1_1;

                      {
                        X0_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, X0_48, 0) = ((MR_Box) (TrueVars_32));
                        MR_hl_field(0, X0_48, 1) = ((MR_Box) (FalseVars_33));
                        MR_hl_field(0, X0_48, 2) = ((MR_Box) (EQVars_42));
                        MR_hl_field(0, X0_48, 3) = ((MR_Box) (ImpVars_46));
                        MR_hl_field(0, X0_48, 4) = ((MR_Box) (Robdd_45));
                        MR_hl_field(0, X0_48, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_HeadVar__1_1 = X0_48;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              else
                X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
            }
            else
              X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        }
        break;
      case (MR_Integer) 1:
        {
          X_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, X_2, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, X_2, 1) = ((MR_Box) (Var_68));
          MR_hl_field(0, X_2, 2) = ((MR_Box) (Var_67));
          MR_hl_field(0, X_2, 3) = ((MR_Box) (Var_66));
          MR_hl_field(0, X_2, 4) = ((MR_Box) (Var_65));
          MR_hl_field(0, X_2, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        break;
    }
    return X_2;
    break;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;

  Var_2 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]));
  Var_3 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[1]));
  Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  Var_5 = mode_robdd__implications__init_imp_vars_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  Var_6 = mercury__robdd__zero_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__462__1_4_f_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Var_6,
  MR_Word LambdaHeadVar__1_18,
  MR_Word LambdaHeadVar__2_19)
{
  MR_Word LambdaHeadVar__3_20;

  LambdaHeadVar__3_20 = mode_robdd__implications__imp_vars_3_f_0(TypeInfo_for_T_23, LambdaHeadVar__1_18, Var_6, LambdaHeadVar__2_19);
  return LambdaHeadVar__3_20;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__791__1_4_f_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word LambdaHeadVar__3_14)
{
  MR_Word LambdaHeadVar__4_15;
  MR_Word Var_16;

  Var_16 = mercury__robdd__eq_vars_2_f_0(TypeInfo_for_T_47, LambdaHeadVar__1_12, LambdaHeadVar__2_13);
  LambdaHeadVar__4_15 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_47, LambdaHeadVar__3_14, Var_16);
  return LambdaHeadVar__4_15;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_50_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_70,
  MR_Word LambdaHeadVar__2_71)
{
  MR_Word LambdaHeadVar__3_72;
  MR_Word Var_73;
  MR_Word Var_74;

  Var_74 = mode_robdd__equiv_vars__det_leader_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__1_70, E_19);
  Var_73 = mercury__robdd__not_var_1_f_0(TypeInfo_for_T_85, Var_74);
  LambdaHeadVar__3_72 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__2_71, Var_73);
  return LambdaHeadVar__3_72;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_48_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_64,
  MR_Word LambdaHeadVar__2_65)
{
  MR_Word LambdaHeadVar__3_66;
  MR_Word Var_67;
  MR_Word Var_68;

  Var_68 = mode_robdd__equiv_vars__det_leader_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__1_64, E_19);
  Var_67 = mercury__robdd__var_1_f_0(TypeInfo_for_T_85, Var_68);
  LambdaHeadVar__3_66 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__2_65, Var_67);
  return LambdaHeadVar__3_66;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_50_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__2_57)
{
  MR_Word LambdaHeadVar__3_58;
  MR_Word Var_59;
  MR_Word Var_60;

  Var_60 = mode_robdd__equiv_vars__det_leader_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__1_56, E_19);
  Var_59 = mercury__robdd__not_var_1_f_0(TypeInfo_for_T_85, Var_60);
  LambdaHeadVar__3_58 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__2_57, Var_59);
  return LambdaHeadVar__3_58;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_48_95_95_49_4_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word E_19,
  MR_Word LambdaHeadVar__1_50,
  MR_Word LambdaHeadVar__2_51)
{
  MR_Word LambdaHeadVar__3_52;
  MR_Word Var_53;
  MR_Word Var_54;

  Var_54 = mode_robdd__equiv_vars__det_leader_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__1_50, E_19);
  Var_53 = mercury__robdd__var_1_f_0(TypeInfo_for_T_85, Var_54);
  LambdaHeadVar__3_52 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_85, LambdaHeadVar__2_51, Var_53);
  return LambdaHeadVar__3_52;
}

void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mode_robdd__tfeirn_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Word TypeInfo_25_25;

    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_25_25, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Word TypeInfo_29_29;

      {
        TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_T_23));
      }
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_29_29, &SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__robdd____Compare____equiv_vars_1_0(TypeInfo_for_T_23, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__robdd____Compare____imp_vars_1_0(TypeInfo_for_T_23, &SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__robdd____Compare____robdd_1_0(TypeInfo_for_T_23, &SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_39 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_40 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_39 < Var_40);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_39 > Var_40);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_23_23;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_23_23, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    if (succeeded)
    {
      succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_23_23, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
      if (succeeded)
      {
        succeeded = mercury__robdd____Unify____equiv_vars_1_0(TypeInfo_for_T_17, ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__robdd____Unify____imp_vars_1_0(TypeInfo_for_T_17, ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_17, ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_to_mode_robdd_1_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word R_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_12_12;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word conv0_Var_5;
  MR_Word conv1_Var_6;

  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  conv0_Var_5 = mercury__sparse_bitset__init_0_f_0(TypeInfo_12_12);
  Var_5 = (MR_Word) (conv0_Var_5);
  conv1_Var_6 = mercury__sparse_bitset__init_0_f_0(TypeInfo_12_12);
  Var_6 = (MR_Word) (conv1_Var_6);
  Var_7 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(TypeInfo_for_T_10);
  Var_8 = mode_robdd__implications__init_imp_vars_0_f_0(TypeInfo_for_T_10);
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 2) = ((MR_Box) (Var_7));
    MR_hl_field(0, Var_4, 3) = ((MR_Box) (Var_8));
    MR_hl_field(0, Var_4, 4) = ((MR_Box) (R_3));
    MR_hl_field(0, Var_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_10, Var_4);
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_15;

  conv0_LambdaHeadVar__4_15 = mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__791__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_15));
  return wrapper_arg_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_51_51;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 4))));
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 0))));
  MR_Box conv1_Var_10;

  Var_20 = mercury__robdd__conj_vars_1_f_0(TypeInfo_for_T_47, Var_52);
  Var_18 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_47, Var_19, Var_20);
  Var_23 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 1))));
  Var_22 = mercury__robdd__conj_not_vars_1_f_0(TypeInfo_for_T_47, Var_23);
  Var_7 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_47, Var_18, Var_22);
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[2]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (mode_robdd__tfeirn__to_robdd_1_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (TypeInfo_for_T_47));
  }
  Var_17 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 2))));
  Var_9 = (MR_Word) (Var_17);
  {
    TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_49_49, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_for_T_47));
  }
  {
    TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_51_51, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_robdd_1));
    MR_hl_field(0, TypeInfo_51_51, 1) = ((MR_Box) (TypeInfo_for_T_47));
  }
  conv1_Var_10 = mercury__map__foldl_3_f_0(TypeInfo_49_49, TypeInfo_49_49, TypeInfo_51_51, (MR_Word) (Var_8), (MR_Word) (Var_9), ((MR_Box) (Var_7)));
  Var_10 = ((MR_Word) (conv1_Var_10));
  Var_11 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 3))));
  HeadVar__2_2 = mercury__robdd__add_implications_2_f_0(TypeInfo_for_T_47, Var_11, Var_10);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__ensure_normalised_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_4, X_3);
  return HeadVar__2_2;
}

void MR_CALL 
mode_robdd__tfeirn__minimal_model_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Vars_5,
  MR_Word X0_6,
  MR_Word * TrueVars_7,
  MR_Word * FalseVars_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_16_16;

    // setup for model_non tailcalls optimized into a loop
    ;
    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_16_16, (MR_Word) (Vars_5));
    if (succeeded)
    {
      MR_Word conv0_TrueVars_7;
      MR_Word conv1_FalseVars_8;

      conv0_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(TypeInfo_16_16);
      *TrueVars_7 = (MR_Word) (conv0_TrueVars_7);
      conv1_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(TypeInfo_16_16);
      *FalseVars_8 = (MR_Word) (conv1_FalseVars_8);
      cont(cont_env_ptr);
    }
    else
    {
      MR_Word TrueVars0_9;
      MR_Word FalseVars0_10;

      succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(TypeInfo_for_T_14, Vars_5, X0_6, &TrueVars0_9, &FalseVars0_10);
      if (succeeded)
      {
        *TrueVars_7 = TrueVars0_9;
        *FalseVars_8 = FalseVars0_10;
        cont(cont_env_ptr);
        {
          MR_Word TypeInfo_28_41;
          MR_Word X_11;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word TA_19;
          MR_Word FA_20;
          MR_Word EA_21;
          MR_Word IA_22;
          MR_Word RA_23;
          MR_Word T1_25;
          MR_Word F1_26;
          MR_Word E1_27;
          MR_Word I1_28;
          MR_Word R1_29;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word conv2_Var_31;
          MR_Word conv3_Var_32;
          MR_Word next_value_of_X0_6;

          Var_13 = mercury__robdd__conj_vars_1_f_0(TypeInfo_for_T_14, TrueVars0_9);
          Var_12 = mercury__robdd__f_126_1_f_0(TypeInfo_for_T_14, Var_13);
          TA_19 = ((MR_Word) ((MR_hl_field(0, X0_6, (MR_Integer) 0))));
          FA_20 = ((MR_Word) ((MR_hl_field(0, X0_6, (MR_Integer) 1))));
          EA_21 = ((MR_Word) ((MR_hl_field(0, X0_6, (MR_Integer) 2))));
          IA_22 = ((MR_Word) ((MR_hl_field(0, X0_6, (MR_Integer) 3))));
          RA_23 = ((MR_Word) ((MR_hl_field(0, X0_6, (MR_Integer) 4))));
          {
            TypeInfo_28_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_28_41, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_28_41, 1) = ((MR_Box) (TypeInfo_for_T_14));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = ((MR_Box) (TA_19));
            MR_hl_field(0, Var_38, 1) = ((MR_Box) (FA_20));
            MR_hl_field(0, Var_38, 2) = ((MR_Box) (EA_21));
            MR_hl_field(0, Var_38, 3) = ((MR_Box) (IA_22));
            MR_hl_field(0, Var_38, 4) = ((MR_Box) (Var_12));
            MR_hl_field(0, Var_38, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          Var_37 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_14, Var_38);
          T1_25 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
          F1_26 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
          E1_27 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 2))));
          I1_28 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 3))));
          R1_29 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 4))));
          conv2_Var_31 = mercury__sparse_bitset__union_2_f_0(TypeInfo_28_41, (MR_Word) (TA_19), (MR_Word) (T1_25));
          Var_31 = (MR_Word) (conv2_Var_31);
          conv3_Var_32 = mercury__sparse_bitset__union_2_f_0(TypeInfo_28_41, (MR_Word) (FA_20), (MR_Word) (F1_26));
          Var_32 = (MR_Word) (conv3_Var_32);
          Var_33 = mode_robdd__equiv_vars__f_times_2_f_0(TypeInfo_for_T_14, EA_21, E1_27);
          Var_34 = mode_robdd__implications__f_times_2_f_0(TypeInfo_for_T_14, IA_22, I1_28);
          Var_35 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_14, RA_23, R1_29);
          {
            X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, X_11, 0) = ((MR_Box) (Var_31));
            MR_hl_field(0, X_11, 1) = ((MR_Box) (Var_32));
            MR_hl_field(0, X_11, 2) = ((MR_Box) (Var_33));
            MR_hl_field(0, X_11, 3) = ((MR_Box) (Var_34));
            MR_hl_field(0, X_11, 4) = ((MR_Box) (Var_35));
            MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          // direct tailcall eliminated
          ;
          next_value_of_X0_6 = X_11;
          X0_6 = next_value_of_X0_6;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Vars0_5,
  MR_Word X0_6,
  MR_Word * TrueVars_7,
  MR_Word * FalseVars_8)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_uenum_21;
  MR_Word V_9;
  MR_Word Vars_10;
  MR_Word TypeInfo_19_19;
  MR_Box conv1_V_9;
  MR_Word conv0_Vars_10;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  {
    TypeClassInfo_for_uenum_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_21, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_21, 1) = ((MR_Box) (TypeInfo_for_T_17));
    MR_hl_field(0, TypeClassInfo_for_uenum_21, 2) = ((MR_Box) (TypeInfo_19_19));
  }
  succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_21, &conv1_V_9, (MR_Word) (Vars0_5), &conv0_Vars_10);
  if (succeeded)
  {
    V_9 = ((MR_Word) (conv1_V_9));
    Vars_10 = (MR_Word) (conv0_Vars_10);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word X1_11;
    MR_Word Var_15;
    MR_Word Var_32;

    X1_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0(TypeInfo_for_T_17, V_9, X0_6);
    Var_15 = ((MR_Word) ((MR_hl_field(0, X1_11, (MR_Integer) 4))));
    Var_32 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_17);
    succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_17, Var_15, Var_32);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word FalseVars0_12;

      succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(TypeInfo_for_T_17, Vars_10, X1_11, TrueVars_7, &FalseVars0_12);
      if (succeeded)
      {
        *FalseVars_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_17, TypeClassInfo_for_uenum_21, FalseVars0_12, V_9);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word X2_13;
      MR_Word TrueVars0_14;
      MR_Word Var_16;
      MR_Word Var_33;

      X2_13 = mode_robdd__tfeirn__var_restrict_true_2_f_0(TypeInfo_for_T_17, V_9, X0_6);
      Var_16 = ((MR_Word) ((MR_hl_field(0, X2_13, (MR_Integer) 4))));
      Var_33 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_17);
      succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_17, Var_16, Var_33);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(TypeInfo_for_T_17, Vars_10, X2_13, &TrueVars0_14, FalseVars_8);
        if (succeeded)
        {
          *TrueVars_7 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_17, TypeClassInfo_for_uenum_21, TrueVars0_14, V_9);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  else
  {
    MR_Word TypeInfo_31_31;
    MR_Word conv2_TrueVars_7;
    MR_Word conv3_FalseVars_8;

    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(TypeInfo_31_31);
    *TrueVars_7 = (MR_Word) (conv2_TrueVars_7);
    conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(TypeInfo_31_31);
    *FalseVars_8 = (MR_Word) (conv3_FalseVars_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
  void * env_ptr_arg)
{
  struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s * env_ptr = (struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word conv6_TrueVars_12;
    MR_Word conv7_FalseVars_13;

    conv6_TrueVars_12 = mercury__sparse_bitset__union_2_f_0((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) ((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14), (MR_Word) ((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17));
    *((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (MR_Word) (conv6_TrueVars_12);
    conv7_FalseVars_13 = mercury__sparse_bitset__union_2_f_0((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) ((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15), (MR_Word) ((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18));
    *((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (MR_Word) (conv7_FalseVars_13);
    ((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Vars0_5,
  MR_Word HeadVar__2_2,
  MR_Word * TrueVars_12,
  MR_Word * FalseVars_13,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s env;

  (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12 = TrueVars_12;
  (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13 = FalseVars_13;
  (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__cont = cont;
  (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded;
    MR_Word T_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word F_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word N_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word Vars_16;
    MR_Word Var_19;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5)));
    MR_Word conv0_TrueVars0_14;
    MR_Word conv1_FalseVars0_15;
    MR_Word conv2_Var_19;
    MR_Word conv3_Vars_16;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, base, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    conv0_TrueVars0_14 = mercury__sparse_bitset__intersect_2_f_0((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (T_6), (MR_Word) (Vars0_5));
    (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14 = (MR_Word) (conv0_TrueVars0_14);
    conv1_FalseVars0_15 = mercury__sparse_bitset__intersect_2_f_0((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (F_7), (MR_Word) (Vars0_5));
    (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15 = (MR_Word) (conv1_FalseVars0_15);
    conv2_Var_19 = mercury__sparse_bitset__difference_2_f_0((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (Vars0_5), (MR_Word) ((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14));
    Var_19 = (MR_Word) (conv2_Var_19);
    conv3_Vars_16 = mercury__sparse_bitset__difference_2_f_0((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (Var_19), (MR_Word) ((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15));
    Vars_16 = (MR_Word) (conv3_Vars_16);
    succeeded = mercury__sparse_bitset__is_empty_1_p_0((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (Vars_16));
    if (succeeded)
    {
      *((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
      *((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (env).mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
      ((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
    }
    else
    {
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word conv4_Var_21;
      MR_Word conv5_Var_22;

      conv4_Var_21 = mercury__sparse_bitset__init_0_f_0((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
      Var_21 = (MR_Word) (conv4_Var_21);
      conv5_Var_22 = mercury__sparse_bitset__init_0_f_0((env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
      Var_22 = (MR_Word) (conv5_Var_22);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (Var_22));
        MR_hl_field(0, Var_20, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, Var_20, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, Var_20, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, Var_20, 5) = (MR_Box) ((MR_Unsigned) (N_11));
      }
      mode_robdd__tfeirn__labelling_2_4_p_0(TypeInfo_for_T_23, Vars_16, Var_20, &(env).mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17, &(env).mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18, mode_robdd__tfeirn__labelling_4_p_0_1, &env);
    }
  }
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
  void * env_ptr_arg)
{
  struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_uenum_21, (env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, (env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
  ((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
  void * env_ptr_arg)
{
  struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_uenum_21, (env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
  ((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Vars0_5,
  MR_Word X0_6,
  MR_Word * TrueVars_7,
  MR_Word * FalseVars_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s env;

  (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17 = TypeInfo_for_T_17;
  (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7 = TrueVars_7;
  (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8 = FalseVars_8;
  (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont = cont;
  (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded;
    MR_Word Vars_10;
    MR_Word TypeInfo_19_19;
    MR_Box conv1_V_9;
    MR_Word conv0_Vars_10;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) ((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_uenum_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, base, 1) = ((MR_Box) ((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (TypeInfo_19_19));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_uenum_21, &conv1_V_9, (MR_Word) (Vars0_5), &conv0_Vars_10);
    if (succeeded)
    {
      (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9 = ((MR_Word) (conv1_V_9));
      Vars_10 = (MR_Word) (conv0_Vars_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        MR_Word X_11;
        MR_Word Var_14;
        MR_Word Var_32;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Unsigned packed_word_0;

        X_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, X0_6);
        Var_38 = ((MR_Word) ((MR_hl_field(0, X_11, (MR_Integer) 0))));
        Var_39 = ((MR_Word) ((MR_hl_field(0, X_11, (MR_Integer) 1))));
        Var_40 = ((MR_Word) ((MR_hl_field(0, X_11, (MR_Integer) 2))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, X_11, (MR_Integer) 3))));
        Var_14 = ((MR_Word) ((MR_hl_field(0, X_11, (MR_Integer) 4))));
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_11, (MR_Integer) 5)));
        Var_42 = ((MR_Unsigned) ((MR_hl_field(0, X_11, (MR_Integer) 5))) & (MR_Integer) 1);
        Var_32 = mercury__robdd__zero_0_f_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
        succeeded = mercury__robdd____Unify____robdd_1_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, Var_14, Var_32);
        succeeded = !(succeeded);
        if (succeeded)
          mode_robdd__tfeirn__labelling_2_4_p_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, Vars_10, X_11, (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7, &(env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, mode_robdd__tfeirn__labelling_2_4_p_0_1, &env);
      }
      {
        MR_Word X_16;
        MR_Word Var_15;
        MR_Word Var_33;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Unsigned packed_word_1;

        X_16 = mode_robdd__tfeirn__var_restrict_true_2_f_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, X0_6);
        Var_43 = ((MR_Word) ((MR_hl_field(0, X_16, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, X_16, (MR_Integer) 1))));
        Var_45 = ((MR_Word) ((MR_hl_field(0, X_16, (MR_Integer) 2))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, X_16, (MR_Integer) 3))));
        Var_15 = ((MR_Word) ((MR_hl_field(0, X_16, (MR_Integer) 4))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, X_16, (MR_Integer) 5)));
        Var_47 = ((MR_Unsigned) ((MR_hl_field(0, X_16, (MR_Integer) 5))) & (MR_Integer) 1);
        Var_33 = mercury__robdd__zero_0_f_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
        succeeded = mercury__robdd____Unify____robdd_1_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, Var_15, Var_33);
        succeeded = !(succeeded);
        if (succeeded)
          mode_robdd__tfeirn__labelling_2_4_p_0((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, Vars_10, X_16, &(env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8, mode_robdd__tfeirn__labelling_2_4_p_0_2, &env);
      }
    }
    else
    {
      MR_Word TypeInfo_31_31;
      MR_Word conv2_TrueVars_7;
      MR_Word conv3_FalseVars_8;

      {
        TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) ((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
      }
      conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(TypeInfo_31_31);
      *((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = (MR_Word) (conv2_TrueVars_7);
      conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(TypeInfo_31_31);
      *((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = (MR_Word) (conv3_FalseVars_8);
      ((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((env).mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
    }
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_false_2_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word X_11;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word TypeInfo_32_32;
  MR_Word TypeClassInfo_for_uenum_34;

  {
    TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_30));
  }
  {
    TypeClassInfo_for_uenum_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_34, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_34, 1) = ((MR_Box) (TypeInfo_for_T_30));
    MR_hl_field(0, TypeClassInfo_for_uenum_34, 2) = ((MR_Box) (TypeInfo_32_32));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_34, T_5, V_4);
  if (succeeded)
    X_11 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_30);
  else
  {
    MR_Word TypeClassInfo_for_uenum_38;
    MR_Word TypeInfo_36_36;

    {
      TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_36_36, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    {
      TypeClassInfo_for_uenum_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_38, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_38, 1) = ((MR_Box) (TypeInfo_for_T_30));
      MR_hl_field(0, TypeClassInfo_for_uenum_38, 2) = ((MR_Box) (TypeInfo_36_36));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_38, F_6, V_4);
    if (succeeded)
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_38, F_6, V_4);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (T_5));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (Var_13));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (N_10));
      }
    }
    else
    {
      MR_Word TypeInfo_44_44;
      MR_Word TypeClassInfo_for_uenum_46;
      MR_Word X0_12;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_24;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      {
        TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_44_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_T_30));
      }
      {
        TypeClassInfo_for_uenum_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_46, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_46, 1) = ((MR_Box) (TypeInfo_for_T_30));
        MR_hl_field(0, TypeClassInfo_for_uenum_46, 2) = ((MR_Box) (TypeInfo_44_44));
      }
      Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_46, F_6, V_4);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (T_5));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (Var_15));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, Var_14, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, Var_14, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      X0_12 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_30, Var_14);
      Var_18 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 1))));
      Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_46, Var_18, V_4);
      Var_24 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 2))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 3))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 4))));
      Var_29 = ((MR_Unsigned) ((MR_hl_field(0, X0_12, (MR_Integer) 5))) & (MR_Integer) 1);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (Var_24));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (Var_17));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (Var_26));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (Var_27));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (Var_28));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (Var_29));
      }
    }
  }
  return X_11;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_true_2_f_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word X_11;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word TypeInfo_32_32;
  MR_Word TypeClassInfo_for_uenum_34;

  {
    TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_30));
  }
  {
    TypeClassInfo_for_uenum_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_34, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_34, 1) = ((MR_Box) (TypeInfo_for_T_30));
    MR_hl_field(0, TypeClassInfo_for_uenum_34, 2) = ((MR_Box) (TypeInfo_32_32));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_34, F_6, V_4);
  if (succeeded)
    X_11 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_30);
  else
  {
    MR_Word TypeClassInfo_for_uenum_38;
    MR_Word TypeInfo_36_36;

    {
      TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_36_36, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_30));
    }
    {
      TypeClassInfo_for_uenum_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_38, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_38, 1) = ((MR_Box) (TypeInfo_for_T_30));
      MR_hl_field(0, TypeClassInfo_for_uenum_38, 2) = ((MR_Box) (TypeInfo_36_36));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_38, T_5, V_4);
    if (succeeded)
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_38, T_5, V_4);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (Var_13));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (F_6));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (N_10));
      }
    }
    else
    {
      MR_Word TypeInfo_44_44;
      MR_Word TypeClassInfo_for_uenum_46;
      MR_Word X0_12;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      {
        TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_44_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_T_30));
      }
      {
        TypeClassInfo_for_uenum_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_46, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_46, 1) = ((MR_Box) (TypeInfo_for_T_30));
        MR_hl_field(0, TypeClassInfo_for_uenum_46, 2) = ((MR_Box) (TypeInfo_44_44));
      }
      Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_46, T_5, V_4);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (F_6));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, Var_14, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, Var_14, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      X0_12 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_30, Var_14);
      Var_18 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 0))));
      Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_30, TypeClassInfo_for_uenum_46, Var_18, V_4);
      Var_25 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 1))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 2))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 3))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, X0_12, (MR_Integer) 4))));
      Var_29 = ((MR_Unsigned) ((MR_hl_field(0, X0_12, (MR_Integer) 5))) & (MR_Integer) 1);
      {
        X_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_11, 0) = ((MR_Box) (Var_17));
        MR_hl_field(0, X_11, 1) = ((MR_Box) (Var_25));
        MR_hl_field(0, X_11, 2) = ((MR_Box) (Var_26));
        MR_hl_field(0, X_11, 3) = ((MR_Box) (Var_27));
        MR_hl_field(0, X_11, 4) = ((MR_Box) (Var_28));
        MR_hl_field(0, X_11, 5) = (MR_Box) ((MR_Unsigned) (Var_29));
      }
    }
  }
  return X_11;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_filter_2_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word P_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_18_18;
  MR_Word TypeClassInfo_for_uenum_20;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word conv0_Var_11;
  MR_Word conv1_Var_12;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  {
    TypeClassInfo_for_uenum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 2) = ((MR_Box) (TypeInfo_18_18));
  }
  conv0_Var_11 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_uenum_20, (MR_Word) (P_4), (MR_Word) (T_5));
  Var_11 = (MR_Word) (conv0_Var_11);
  conv1_Var_12 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_uenum_20, (MR_Word) (P_4), (MR_Word) (F_6));
  Var_12 = (MR_Word) (conv1_Var_12);
  Var_13 = mode_robdd__equiv_vars__filter_2_f_0(TypeInfo_for_T_16, P_4, E_7);
  Var_14 = mode_robdd__implications__filter_2_f_0(TypeInfo_for_T_16, P_4, I_8);
  Var_15 = mercury__robdd__restrict_filter_2_f_0(TypeInfo_for_T_16, P_4, R_9);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_threshold_2_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_18_18;
  MR_Word TypeClassInfo_for_uenum_20;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word conv0_Var_11;
  MR_Word conv1_Var_12;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  {
    TypeClassInfo_for_uenum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 2) = ((MR_Box) (TypeInfo_18_18));
  }
  conv0_Var_11 = mercury__sparse_bitset__remove_gt_2_f_0(TypeClassInfo_for_uenum_20, (MR_Word) (T_5), ((MR_Box) (V_4)));
  Var_11 = (MR_Word) (conv0_Var_11);
  conv1_Var_12 = mercury__sparse_bitset__remove_gt_2_f_0(TypeClassInfo_for_uenum_20, (MR_Word) (F_6), ((MR_Box) (V_4)));
  Var_12 = (MR_Word) (conv1_Var_12);
  Var_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0(TypeInfo_for_T_16, V_4, E_7);
  Var_14 = mode_robdd__implications__restrict_threshold_2_f_0(TypeInfo_for_T_16, V_4, I_8);
  Var_15 = mercury__robdd__restrict_threshold_2_f_0(TypeInfo_for_T_16, V_4, R_9);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_2_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word V_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word T_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word E_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word I_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word R_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word N_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word TypeClassInfo_for_uenum_24;
  MR_Word TypeInfo_22_22;

  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_22_22));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_20, TypeClassInfo_for_uenum_24, T_5, V_4);
  if (succeeded)
  {
    MR_Word Var_12;

    Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_20, TypeClassInfo_for_uenum_24, T_5, V_4);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_12));
      MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
      MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_7));
      MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_8));
      MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_9));
      MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
    }
  }
  else
  {
    MR_Word TypeClassInfo_for_uenum_32;
    MR_Word TypeInfo_30_30;

    {
      TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_30_30, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeClassInfo_for_uenum_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_32, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_32, 1) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(0, TypeClassInfo_for_uenum_32, 2) = ((MR_Box) (TypeInfo_30_30));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_20, TypeClassInfo_for_uenum_32, F_6, V_4);
    if (succeeded)
    {
      MR_Word Var_13;

      Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_20, TypeClassInfo_for_uenum_32, F_6, V_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_13));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_7));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_8));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_9));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
      }
    }
    else
    {
      MR_Word L_11;

      succeeded = mode_robdd__equiv_vars__leader_2_f_0(TypeInfo_for_T_20, V_4, E_7, &L_11);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_20, L_11, V_4);
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word Var_14;

          Var_14 = mode_robdd__equiv_vars__delete_2_f_0(TypeInfo_for_T_20, E_7, V_4);
          {
            HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
            MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
            MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_14));
            MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_8));
            MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_9));
            MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
          }
        }
        else
        {
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word Var_17;

          Var_15 = mode_robdd__equiv_vars__delete_2_f_0(TypeInfo_for_T_20, E_7, V_4);
          Var_16 = mode_robdd__implications__delete_2_f_0(TypeInfo_for_T_20, I_8, V_4);
          Var_17 = mercury__robdd__restrict_2_f_0(TypeInfo_for_T_20, V_4, R_9);
          {
            HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
            MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
            MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_15));
            MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_16));
            MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_17));
            MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
          }
        }
      }
      else
      {
        MR_Word Var_18;
        MR_Word Var_19;

        Var_18 = mode_robdd__implications__delete_2_f_0(TypeInfo_for_T_20, I_8, V_4);
        Var_19 = mercury__robdd__restrict_2_f_0(TypeInfo_for_T_20, V_4, R_9);
        {
          HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_5));
          MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
          MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_7));
          MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_18));
          MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_19));
          MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) (N_10));
        }
      }
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
mode_robdd__tfeirn__known_vars_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word X_4,
  MR_Word * TrueVars_5,
  MR_Word * FalseVars_6)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 4))));
  MR_Word Var_21;

  Var_21 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_18);
  succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_18, Var_7, Var_21);
  if (succeeded)
  {
    MR_Word TypeInfo_20_20;
    MR_Word conv0_TrueVars_5;
    MR_Word conv1_FalseVars_6;

    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    conv0_TrueVars_5 = mercury__sparse_bitset__init_0_f_0(TypeInfo_20_20);
    *TrueVars_5 = (MR_Word) (conv0_TrueVars_5);
    conv1_FalseVars_6 = mercury__sparse_bitset__init_0_f_0(TypeInfo_20_20);
    *FalseVars_6 = (MR_Word) (conv1_FalseVars_6);
  }
  else
  {
    *TrueVars_5 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
    *FalseVars_6 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 1))));
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__vars_disentailed_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word X_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 4))));
  MR_Word Var_12;

  Var_12 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_11);
  succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_11, Var_4, Var_12);
  if (succeeded)
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__vars_entailed_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word X_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 4))));
  MR_Word Var_12;

  Var_12 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_11);
  succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_11, Var_4, Var_12);
  if (succeeded)
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 0))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    }
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mode_robdd__tfeirn__var_entailed_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word X_3,
  MR_Word V_4)
{
  MR_bool succeeded;

  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 4))));
    MR_Word Var_17;

    Var_17 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_12);
    succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_12, Var_5, Var_17);
  }
  if (!(succeeded))
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeClassInfo_for_uenum_16;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, X_3, (MR_Integer) 0))));

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeClassInfo_for_uenum_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_16, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_16, 1) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(0, TypeClassInfo_for_uenum_16, 2) = ((MR_Box) (TypeInfo_14_14));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_12, TypeClassInfo_for_uenum_16, Var_6, V_4);
  }
  return succeeded;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__io_constraint_4_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word V_in_6,
  MR_Word V_out_7,
  MR_Word V__8,
  MR_Word X_9)
{
  MR_Word HeadVar__5_5;
  MR_Word TypeInfo_17_17;
  MR_Word TypeClassInfo_for_uenum_19;
  MR_Word Vars_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  Var_11 = mode_robdd__tfeirn__not_both_3_f_0(TypeInfo_for_T_15, V_in_6, V__8, X_9);
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    TypeClassInfo_for_uenum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_19, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_19, 1) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, TypeClassInfo_for_uenum_19, 2) = ((MR_Box) (TypeInfo_17_17));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (V__8));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (V_in_6));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_15, TypeClassInfo_for_uenum_19, Var_12);
  HeadVar__5_5 = mode_robdd__tfeirn__disj_vars_eq_3_f_0(TypeInfo_for_T_15, Vars_10, V_out_7, Var_11);
  return HeadVar__5_5;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__not_both_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word F_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word T_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));
  MR_Word TypeInfo_18_18;
  MR_Word TypeClassInfo_for_uenum_20;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  {
    TypeClassInfo_for_uenum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 2) = ((MR_Box) (TypeInfo_18_18));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_20, F_8, VarA_5);
  if (succeeded)
    HeadVar__4_4 = X_7;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeClassInfo_for_uenum_24;

    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    {
      TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_22_22));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_24, F_8, VarB_6);
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeClassInfo_for_uenum_28;

      {
        TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      {
        TypeClassInfo_for_uenum_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 1) = ((MR_Box) (TypeInfo_for_T_16));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 2) = ((MR_Box) (TypeInfo_26_26));
      }
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_28, T_9, VarA_5);
      if (succeeded)
        HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(TypeInfo_for_T_16, VarB_6, X_7);
      else
      {
        MR_Word TypeInfo_30_30;
        MR_Word TypeClassInfo_for_uenum_32;

        {
          TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_30_30, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_T_16));
        }
        {
          TypeClassInfo_for_uenum_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeClassInfo_for_uenum_32, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
          MR_hl_field(0, TypeClassInfo_for_uenum_32, 1) = ((MR_Box) (TypeInfo_for_T_16));
          MR_hl_field(0, TypeClassInfo_for_uenum_32, 2) = ((MR_Box) (TypeInfo_30_30));
        }
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_32, T_9, VarB_6);
        if (succeeded)
          HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(TypeInfo_for_T_16, VarA_5, X_7);
        else
        {
          MR_Word Var_14;

          Var_14 = mode_robdd__implications__not_both_3_f_0(TypeInfo_for_T_16, VarA_5, VarB_6, I_11);
          {
            HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_9));
            MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_8));
            MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (E_10));
            MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_14));
            MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
            MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
        }
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__at_most_one_of_2_f_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Vars_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));
  MR_Word TypeInfo_22_22;
  MR_Word TypeClassInfo_for_uenum_24;
  MR_Integer Var_12;
  MR_Word Var_14;
  MR_Word conv0_Var_14;

  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_22_22));
  }
  conv0_Var_14 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_22_22, (MR_Word) (Vars_4), (MR_Word) (F_6));
  Var_14 = (MR_Word) (conv0_Var_14);
  Var_12 = mercury__sparse_bitset__count_1_f_0(TypeClassInfo_for_uenum_24, (MR_Word) (Var_14));
  succeeded = (Var_12 <= (MR_Integer) 1);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Word TypeInfo_26_26;
    MR_Word TypeClassInfo_for_uenum_28;
    MR_Integer Var_15;
    MR_Word Var_17;
    MR_Word conv1_Var_17;

    {
      TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeClassInfo_for_uenum_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_28, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_28, 1) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(0, TypeClassInfo_for_uenum_28, 2) = ((MR_Box) (TypeInfo_26_26));
    }
    conv1_Var_17 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_26_26, (MR_Word) (Vars_4), (MR_Word) (T_7));
    Var_17 = (MR_Word) (conv1_Var_17);
    Var_15 = mercury__sparse_bitset__count_1_f_0(TypeClassInfo_for_uenum_28, (MR_Word) (Var_17));
    succeeded = (Var_15 > (MR_Integer) 1);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_20);
    else
    {
      MR_Word Var_18;

      Var_18 = mode_robdd__implications__at_most_one_of_2_f_0(TypeInfo_for_T_20, Vars_4, I_9);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_7));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_6));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (Var_18));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__3_20;

  conv3_LambdaHeadVar__3_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__462__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_20));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Vars_5,
  MR_Word Var_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word F_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word T_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word TypeInfo_23_23;
  MR_Word TypeClassInfo_for_uenum_25;

  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_21));
  }
  {
    TypeClassInfo_for_uenum_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_25, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_25, 1) = ((MR_Box) (TypeInfo_for_T_21));
    MR_hl_field(0, TypeClassInfo_for_uenum_25, 2) = ((MR_Box) (TypeInfo_23_23));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_21, TypeClassInfo_for_uenum_25, F_8, Var_6);
  if (succeeded)
  {
    succeeded = mercury__sparse_bitset__subset_2_p_0(TypeInfo_23_23, (MR_Word) (Vars_5), (MR_Word) (F_8));
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
      HeadVar__4_4 = mode_robdd__tfeirn__conj_not_vars_2_f_0(TypeInfo_for_T_21, Vars_5, X_7);
  }
  else
  {
    MR_Word TypeInfo_29_29;
    MR_Word TypeClassInfo_for_uenum_31;

    {
      TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_T_21));
    }
    {
      TypeClassInfo_for_uenum_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_31, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_31, 1) = ((MR_Box) (TypeInfo_for_T_21));
      MR_hl_field(0, TypeClassInfo_for_uenum_31, 2) = ((MR_Box) (TypeInfo_29_29));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_21, TypeClassInfo_for_uenum_31, T_9, Var_6);
    if (succeeded)
    {
      succeeded = mercury__sparse_bitset__subset_2_p_0(TypeInfo_29_29, (MR_Word) (Vars_5), (MR_Word) (F_8));
      if (succeeded)
        HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_21);
      else
        HeadVar__4_4 = mode_robdd__tfeirn__disj_vars_2_f_0(TypeInfo_for_T_21, Vars_5, X_7);
    }
    else
    {
      MR_Word TypeInfo_35_35;
      MR_Word Var_16;
      MR_Word conv0_Var_16;

      {
        TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      conv0_Var_16 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_35_35, (MR_Word) (Vars_5), (MR_Word) (T_9));
      Var_16 = (MR_Word) (conv0_Var_16);
      succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_35_35, (MR_Word) (Var_16));
      if (succeeded)
        HeadVar__4_4 = mode_robdd__tfeirn__var_2_f_0(TypeInfo_for_T_21, Var_6, X_7);
      else
      {
        MR_Word TypeInfo_37_37;

        {
          TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_21));
        }
        succeeded = mercury__sparse_bitset__subset_2_p_0(TypeInfo_37_37, (MR_Word) (Vars_5), (MR_Word) (F_8));
        if (succeeded)
          HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(TypeInfo_for_T_21, Var_6, X_7);
        else
        {
          MR_Word TypeInfo_39_39;
          MR_Word TypeClassInfo_for_uenum_41;
          MR_Word Var1_10;
          MR_Word Vars1_11;
          MR_Box conv2_Var1_10;
          MR_Word conv1_Vars1_11;

          {
            TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_for_T_21));
          }
          {
            TypeClassInfo_for_uenum_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_for_uenum_41, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
            MR_hl_field(0, TypeClassInfo_for_uenum_41, 1) = ((MR_Box) (TypeInfo_for_T_21));
            MR_hl_field(0, TypeClassInfo_for_uenum_41, 2) = ((MR_Box) (TypeInfo_39_39));
          }
          succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_41, &conv2_Var1_10, (MR_Word) (Vars_5), &conv1_Vars1_11);
          if (succeeded)
          {
            Var1_10 = ((MR_Word) (conv2_Var1_10));
            Vars1_11 = (MR_Word) (conv1_Vars1_11);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_39_39, (MR_Word) (Vars1_11));
            if (succeeded)
              HeadVar__4_4 = mode_robdd__tfeirn__eq_vars_3_f_0(TypeInfo_for_T_21, Var_6, Var1_10, X_7);
            else
            {
              MR_Word TypeInfo_29_58;
              MR_Word Var_17;
              MR_Word Var_18;
              MR_Word Var_19;
              MR_Word Var_20;
              MR_Word T_44 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
              MR_Word F_45 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
              MR_Word E_46 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
              MR_Word I0_47 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
              MR_Word R_48 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));
              MR_Word I_50;
              MR_Word Var_52;
              MR_Word TA_59;
              MR_Word FA_60;
              MR_Word EA_61;
              MR_Word IA_62;
              MR_Word RA_63;
              MR_Word T1_65;
              MR_Word F1_66;
              MR_Word E1_67;
              MR_Word I1_68;
              MR_Word R1_69;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Box conv4_I_50;
              MR_Word conv5_Var_71;
              MR_Word conv6_Var_72;

              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_52, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
                MR_hl_field(0, Var_52, 1) = ((MR_Box) (mode_robdd__tfeirn__disj_vars_eq_3_f_0_1));
                MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_52, 3) = ((MR_Box) (TypeInfo_for_T_21));
                MR_hl_field(0, Var_52, 4) = ((MR_Box) (Var_6));
              }
              {
                TypeInfo_29_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_29_58, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_imp_vars_1));
                MR_hl_field(0, TypeInfo_29_58, 1) = ((MR_Box) (TypeInfo_for_T_21));
              }
              conv4_I_50 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_21, TypeInfo_29_58, TypeClassInfo_for_uenum_41, (MR_Word) (Var_52), Vars_5, ((MR_Box) (I0_47)));
              I_50 = ((MR_Word) (conv4_I_50));
              {
                Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_17, 0) = ((MR_Box) (T_44));
                MR_hl_field(0, Var_17, 1) = ((MR_Box) (F_45));
                MR_hl_field(0, Var_17, 2) = ((MR_Box) (E_46));
                MR_hl_field(0, Var_17, 3) = ((MR_Box) (I_50));
                MR_hl_field(0, Var_17, 4) = ((MR_Box) (R_48));
                MR_hl_field(0, Var_17, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              Var_19 = mercury__robdd__var_1_f_0(TypeInfo_for_T_21, Var_6);
              Var_20 = mercury__robdd__disj_vars_1_f_0(TypeInfo_for_T_21, Vars_5);
              Var_18 = mercury__robdd__f_less_or_equal_2_f_0(TypeInfo_for_T_21, Var_19, Var_20);
              TA_59 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
              FA_60 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
              EA_61 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 2))));
              IA_62 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 3))));
              RA_63 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 4))));
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = ((MR_Box) (TA_59));
                MR_hl_field(0, Var_78, 1) = ((MR_Box) (FA_60));
                MR_hl_field(0, Var_78, 2) = ((MR_Box) (EA_61));
                MR_hl_field(0, Var_78, 3) = ((MR_Box) (IA_62));
                MR_hl_field(0, Var_78, 4) = ((MR_Box) (Var_18));
                MR_hl_field(0, Var_78, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              Var_77 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_21, Var_78);
              T1_65 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));
              F1_66 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 1))));
              E1_67 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 2))));
              I1_68 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 3))));
              R1_69 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 4))));
              conv5_Var_71 = mercury__sparse_bitset__union_2_f_0(TypeInfo_39_39, (MR_Word) (TA_59), (MR_Word) (T1_65));
              Var_71 = (MR_Word) (conv5_Var_71);
              conv6_Var_72 = mercury__sparse_bitset__union_2_f_0(TypeInfo_39_39, (MR_Word) (FA_60), (MR_Word) (F1_66));
              Var_72 = (MR_Word) (conv6_Var_72);
              Var_73 = mode_robdd__equiv_vars__f_times_2_f_0(TypeInfo_for_T_21, EA_61, E1_67);
              Var_74 = mode_robdd__implications__f_times_2_f_0(TypeInfo_for_T_21, IA_62, I1_68);
              Var_75 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_21, RA_63, R1_69);
              {
                HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_71));
                MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (Var_72));
                MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_73));
                MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_74));
                MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (Var_75));
                MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
            }
          }
          else
            HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(TypeInfo_for_T_21, Var_6, X_7);
        }
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_2_f_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Vars_4,
  MR_Word X0_5)
{
  MR_bool succeeded;
  MR_Word X_6;
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 0))));
  MR_Word F_8 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 1))));
  MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 2))));
  MR_Word I_10 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 3))));
  MR_Word R_11 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 4))));
  MR_Word TypeInfo_24_24;
  MR_Word Var_18;
  MR_Word conv0_Var_18;

  {
    TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_22));
  }
  conv0_Var_18 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_24_24, (MR_Word) (Vars_4), (MR_Word) (T_7));
  Var_18 = (MR_Word) (conv0_Var_18);
  succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_24_24, (MR_Word) (Var_18));
  if (succeeded)
    X_6 = X0_5;
  else
  {
    MR_Word TypeInfo_26_26;

    {
      TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_22));
    }
    succeeded = mercury__sparse_bitset__subset_2_p_0(TypeInfo_26_26, (MR_Word) (Vars_4), (MR_Word) (F_8));
    if (succeeded)
      X_6 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_22);
    else
    {
      MR_Word TypeInfo_28_28;
      MR_Word VarsNF_13;
      MR_Word conv1_VarsNF_13;
      MR_Word TypeClassInfo_for_uenum_30;
      MR_Word Var1_14;
      MR_Word VarsNF1_15;
      MR_Box conv3_Var1_14;
      MR_Word conv2_VarsNF1_15;

      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_22));
      }
      conv1_VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_28_28, (MR_Word) (Vars_4), (MR_Word) (F_8));
      VarsNF_13 = (MR_Word) (conv1_VarsNF_13);
      {
        TypeClassInfo_for_uenum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_30, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_30, 1) = ((MR_Box) (TypeInfo_for_T_22));
        MR_hl_field(0, TypeClassInfo_for_uenum_30, 2) = ((MR_Box) (TypeInfo_28_28));
      }
      succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_30, &conv3_Var1_14, (MR_Word) (VarsNF_13), &conv2_VarsNF1_15);
      if (succeeded)
      {
        Var1_14 = ((MR_Word) (conv3_Var1_14));
        VarsNF1_15 = (MR_Word) (conv2_VarsNF1_15);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var2_16;
        MR_Word VarsNF2_17;
        MR_Box conv5_Var2_16;
        MR_Word conv4_VarsNF2_17;

        succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_30, &conv5_Var2_16, (MR_Word) (VarsNF1_15), &conv4_VarsNF2_17);
        if (succeeded)
        {
          Var2_16 = ((MR_Word) (conv5_Var2_16));
          VarsNF2_17 = (MR_Word) (conv4_VarsNF2_17);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_28_28, (MR_Word) (VarsNF2_17));
          if (succeeded)
          {
            MR_Word Var_19;

            Var_19 = mode_robdd__implications__either_3_f_0(TypeInfo_for_T_22, Var1_14, Var2_16, I_10);
            {
              X_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, X_6, 0) = ((MR_Box) (T_7));
              MR_hl_field(0, X_6, 1) = ((MR_Box) (F_8));
              MR_hl_field(0, X_6, 2) = ((MR_Box) (E_9));
              MR_hl_field(0, X_6, 3) = ((MR_Box) (Var_19));
              MR_hl_field(0, X_6, 4) = ((MR_Box) (R_11));
              MR_hl_field(0, X_6, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
          else
          {
            MR_Word Var_21;
            MR_Word TA_33;
            MR_Word FA_34;
            MR_Word EA_35;
            MR_Word IA_36;
            MR_Word RA_37;
            MR_Word T1_39;
            MR_Word F1_40;
            MR_Word E1_41;
            MR_Word I1_42;
            MR_Word R1_43;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word conv6_Var_45;
            MR_Word conv7_Var_46;

            Var_21 = mercury__robdd__disj_vars_1_f_0(TypeInfo_for_T_22, VarsNF_13);
            TA_33 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 0))));
            FA_34 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 1))));
            EA_35 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 2))));
            IA_36 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 3))));
            RA_37 = ((MR_Word) ((MR_hl_field(0, X0_5, (MR_Integer) 4))));
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (TA_33));
              MR_hl_field(0, Var_52, 1) = ((MR_Box) (FA_34));
              MR_hl_field(0, Var_52, 2) = ((MR_Box) (EA_35));
              MR_hl_field(0, Var_52, 3) = ((MR_Box) (IA_36));
              MR_hl_field(0, Var_52, 4) = ((MR_Box) (Var_21));
              MR_hl_field(0, Var_52, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            Var_51 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_22, Var_52);
            T1_39 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 0))));
            F1_40 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 1))));
            E1_41 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 2))));
            I1_42 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 3))));
            R1_43 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 4))));
            conv6_Var_45 = mercury__sparse_bitset__union_2_f_0(TypeInfo_28_28, (MR_Word) (TA_33), (MR_Word) (T1_39));
            Var_45 = (MR_Word) (conv6_Var_45);
            conv7_Var_46 = mercury__sparse_bitset__union_2_f_0(TypeInfo_28_28, (MR_Word) (FA_34), (MR_Word) (F1_40));
            Var_46 = (MR_Word) (conv7_Var_46);
            Var_47 = mode_robdd__equiv_vars__f_times_2_f_0(TypeInfo_for_T_22, EA_35, E1_41);
            Var_48 = mode_robdd__implications__f_times_2_f_0(TypeInfo_for_T_22, IA_36, I1_42);
            Var_49 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_22, RA_37, R1_43);
            {
              X_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, X_6, 0) = ((MR_Box) (Var_45));
              MR_hl_field(0, X_6, 1) = ((MR_Box) (Var_46));
              MR_hl_field(0, X_6, 2) = ((MR_Box) (Var_47));
              MR_hl_field(0, X_6, 3) = ((MR_Box) (Var_48));
              MR_hl_field(0, X_6, 4) = ((MR_Box) (Var_49));
              MR_hl_field(0, X_6, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
        }
        else
          X_6 = mode_robdd__tfeirn__var_2_f_0(TypeInfo_for_T_22, Var1_14, X0_5);
      }
      else
        X_6 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_22);
    }
  }
  return X_6;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__conj_not_vars_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Vars_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));
  MR_Word TypeInfo_17_17;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  succeeded = mercury__sparse_bitset__subset_2_p_0(TypeInfo_17_17, (MR_Word) (Vars_4), (MR_Word) (F_6));
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word Var_12;
    MR_Word conv0_Var_12;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    conv0_Var_12 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_19_19, (MR_Word) (Vars_4), (MR_Word) (T_7));
    Var_12 = (MR_Word) (conv0_Var_12);
    succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_19_19, (MR_Word) (Var_12));
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_15);
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word Var_13;
      MR_Word conv1_Var_13;

      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_15));
      }
      conv1_Var_13 = mercury__sparse_bitset__union_2_f_0(TypeInfo_21_21, (MR_Word) (F_6), (MR_Word) (Vars_4));
      Var_13 = (MR_Word) (conv1_Var_13);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_7));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_13));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__conj_vars_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Vars_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word T_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word F_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));
  MR_Word TypeInfo_17_17;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  succeeded = mercury__sparse_bitset__subset_2_p_0(TypeInfo_17_17, (MR_Word) (Vars_4), (MR_Word) (T_6));
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word Var_12;
    MR_Word conv0_Var_12;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    conv0_Var_12 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_19_19, (MR_Word) (Vars_4), (MR_Word) (F_7));
    Var_12 = (MR_Word) (conv0_Var_12);
    succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_19_19, (MR_Word) (Var_12));
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_15);
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word Var_13;
      MR_Word conv1_Var_13;

      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_15));
      }
      conv1_Var_13 = mercury__sparse_bitset__union_2_f_0(TypeInfo_21_21, (MR_Word) (T_6), (MR_Word) (Vars_4));
      Var_13 = (MR_Word) (conv1_Var_13);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_13));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_7));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__imp_vars_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));
  MR_Word TypeInfo_18_18;
  MR_Word TypeClassInfo_for_uenum_20;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  {
    TypeClassInfo_for_uenum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
    MR_hl_field(0, TypeClassInfo_for_uenum_20, 2) = ((MR_Box) (TypeInfo_18_18));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_20, T_8, VarA_5);
  if (succeeded)
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_20, F_9, VarB_6);
  if (succeeded)
    HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_16);
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeClassInfo_for_uenum_24;

    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    {
      TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_22_22));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_24, T_8, VarB_6);
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeClassInfo_for_uenum_28;

      {
        TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      {
        TypeClassInfo_for_uenum_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 1) = ((MR_Box) (TypeInfo_for_T_16));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 2) = ((MR_Box) (TypeInfo_26_26));
      }
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_28, F_9, VarA_5);
      if (succeeded)
        HeadVar__4_4 = X_7;
      else
      {
        MR_Word Var_14;

        Var_14 = mode_robdd__implications__imp_vars_3_f_0(TypeInfo_for_T_16, VarA_5, VarB_6, I_11);
        {
          HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_8));
          MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_9));
          MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (E_10));
          MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_14));
          MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
          MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__neq_vars_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));

  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeClassInfo_for_uenum_20;

    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    {
      TypeClassInfo_for_uenum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 2) = ((MR_Box) (TypeInfo_18_18));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_20, T_8, VarA_5);
    if (succeeded)
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_20, T_8, VarB_6);
  }
  if (!(succeeded))
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeClassInfo_for_uenum_24;

    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    {
      TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_22_22));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_24, F_9, VarA_5);
    if (succeeded)
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_24, F_9, VarB_6);
  }
  if (succeeded)
    HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_16);
  else
  {
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeClassInfo_for_uenum_28;

      {
        TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      {
        TypeClassInfo_for_uenum_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 1) = ((MR_Box) (TypeInfo_for_T_16));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 2) = ((MR_Box) (TypeInfo_26_26));
      }
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_28, T_8, VarA_5);
      if (succeeded)
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_28, F_9, VarB_6);
    }
    if (!(succeeded))
    {
      MR_Word TypeInfo_30_30;
      MR_Word TypeClassInfo_for_uenum_32;

      {
        TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_30_30, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      {
        TypeClassInfo_for_uenum_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_32, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_32, 1) = ((MR_Box) (TypeInfo_for_T_16));
        MR_hl_field(0, TypeClassInfo_for_uenum_32, 2) = ((MR_Box) (TypeInfo_30_30));
      }
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_32, F_9, VarA_5);
      if (succeeded)
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_32, T_8, VarB_6);
    }
    if (succeeded)
      HeadVar__4_4 = X_7;
    else
    {
      MR_Word Var_14;

      Var_14 = mode_robdd__implications__neq_vars_3_f_0(TypeInfo_for_T_16, VarA_5, VarB_6, I_11);
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_8));
        MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_9));
        MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (E_10));
        MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (Var_14));
        MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
        MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__eq_vars_3_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarA_5,
  MR_Word VarB_6,
  MR_Word X_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 0))));
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 1))));
  MR_Word E_10 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 2))));
  MR_Word I_11 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 3))));
  MR_Word R_12 = ((MR_Word) ((MR_hl_field(0, X_7, (MR_Integer) 4))));

  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeClassInfo_for_uenum_20;

    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    {
      TypeClassInfo_for_uenum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 1) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(0, TypeClassInfo_for_uenum_20, 2) = ((MR_Box) (TypeInfo_18_18));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_20, T_8, VarA_5);
    if (succeeded)
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_20, T_8, VarB_6);
  }
  if (!(succeeded))
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeClassInfo_for_uenum_24;

    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    {
      TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_22_22));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_24, F_9, VarA_5);
    if (succeeded)
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_24, F_9, VarB_6);
  }
  if (succeeded)
    HeadVar__4_4 = X_7;
  else
  {
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeClassInfo_for_uenum_28;

      {
        TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_26_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      {
        TypeClassInfo_for_uenum_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 1) = ((MR_Box) (TypeInfo_for_T_16));
        MR_hl_field(0, TypeClassInfo_for_uenum_28, 2) = ((MR_Box) (TypeInfo_26_26));
      }
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_28, T_8, VarA_5);
      if (succeeded)
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_28, F_9, VarB_6);
    }
    if (!(succeeded))
    {
      MR_Word TypeInfo_30_30;
      MR_Word TypeClassInfo_for_uenum_32;

      {
        TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_30_30, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_T_16));
      }
      {
        TypeClassInfo_for_uenum_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_32, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_32, 1) = ((MR_Box) (TypeInfo_for_T_16));
        MR_hl_field(0, TypeClassInfo_for_uenum_32, 2) = ((MR_Box) (TypeInfo_30_30));
      }
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_32, F_9, VarA_5);
      if (succeeded)
        succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_16, TypeClassInfo_for_uenum_32, T_8, VarB_6);
    }
    if (succeeded)
      HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_16);
    else
    {
      MR_Word Var_14;

      Var_14 = mode_robdd__equiv_vars__add_equality_3_f_0(TypeInfo_for_T_16, VarA_5, VarB_6, E_10);
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (T_8));
        MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (F_9));
        MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_14));
        MR_hl_field(0, HeadVar__4_4, 3) = ((MR_Box) (I_11));
        MR_hl_field(0, HeadVar__4_4, 4) = ((MR_Box) (R_12));
        MR_hl_field(0, HeadVar__4_4, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__not_var_2_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word V_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word T_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));
  MR_Word TypeInfo_16_16;
  MR_Word TypeClassInfo_for_uenum_18;

  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  {
    TypeClassInfo_for_uenum_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_18, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
    MR_hl_field(0, TypeClassInfo_for_uenum_18, 2) = ((MR_Box) (TypeInfo_16_16));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_14, TypeClassInfo_for_uenum_18, F_6, V_4);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeClassInfo_for_uenum_22;

    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    {
      TypeClassInfo_for_uenum_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 1) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_14, TypeClassInfo_for_uenum_22, T_7, V_4);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_14);
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeClassInfo_for_uenum_26;
      MR_Word Var_12;

      {
        TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      {
        TypeClassInfo_for_uenum_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_26, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_26, 1) = ((MR_Box) (TypeInfo_for_T_14));
        MR_hl_field(0, TypeClassInfo_for_uenum_26, 2) = ((MR_Box) (TypeInfo_24_24));
      }
      Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_14, TypeClassInfo_for_uenum_26, F_6, V_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (T_7));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_12));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__var_2_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word V_4,
  MR_Word X_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word T_6 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 0))));
  MR_Word F_7 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 1))));
  MR_Word E_8 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 2))));
  MR_Word I_9 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 3))));
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(0, X_5, (MR_Integer) 4))));
  MR_Word TypeInfo_16_16;
  MR_Word TypeClassInfo_for_uenum_18;

  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  {
    TypeClassInfo_for_uenum_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_18, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
    MR_hl_field(0, TypeClassInfo_for_uenum_18, 2) = ((MR_Box) (TypeInfo_16_16));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_14, TypeClassInfo_for_uenum_18, T_6, V_4);
  if (succeeded)
    HeadVar__3_3 = X_5;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeClassInfo_for_uenum_22;

    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    {
      TypeClassInfo_for_uenum_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 1) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_14, TypeClassInfo_for_uenum_22, F_7, V_4);
    if (succeeded)
      HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_14);
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeClassInfo_for_uenum_26;
      MR_Word Var_12;

      {
        TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      {
        TypeClassInfo_for_uenum_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_26, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_26, 1) = ((MR_Box) (TypeInfo_for_T_14));
        MR_hl_field(0, TypeClassInfo_for_uenum_26, 2) = ((MR_Box) (TypeInfo_24_24));
      }
      Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(TypeInfo_for_T_14, TypeClassInfo_for_uenum_26, T_6, V_4);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_12));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (F_7));
        MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (E_8));
        MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (I_9));
        MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (R_10));
        MR_hl_field(0, HeadVar__3_3, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv12_LambdaHeadVar__3_72;

  conv12_LambdaHeadVar__3_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_50_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv12_LambdaHeadVar__3_72));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv10_LambdaHeadVar__3_66;

  conv10_LambdaHeadVar__3_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_51_48_48_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv10_LambdaHeadVar__3_66));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__3_58;

  conv8_LambdaHeadVar__3_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_50_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv8_LambdaHeadVar__3_58));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__3_52;

  conv6_LambdaHeadVar__3_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_57_48_95_95_49_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv6_LambdaHeadVar__3_52));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word X_16;
  MR_Word TA0_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word FA0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word EA0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word IA0_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word RA0_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word TB0_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word FB0_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word EB0_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word IB0_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word RB0_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word Var_92;

  Var_92 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_85);
  succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_85, RA0_8, Var_92);
  if (succeeded)
    X_16 = HeadVar__2_2;
  else
  {
    MR_Word Var_93;

    Var_93 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_85);
    succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_85, RB0_14, Var_93);
    if (succeeded)
      X_16 = HeadVar__1_1;
    else
    {
      MR_Word TypeInfo_87_87;
      MR_Word TypeClassInfo_for_uenum_89;
      MR_Word TypeInfo_91_91;
      MR_Word T_17;
      MR_Word F_18;
      MR_Word E_19;
      MR_Word I_20;
      MR_Word R_21;
      MR_Word EA_22;
      MR_Word EB_23;
      MR_Word IA_24;
      MR_Word IB_25;
      MR_Word RA_26;
      MR_Word RB_27;
      MR_Word TAB_28;
      MR_Word FAB_29;
      MR_Word TBA_30;
      MR_Word FBA_31;
      MR_Word EAB_32;
      MR_Word EBA_33;
      MR_Word RA1_34;
      MR_Word RA2_37;
      MR_Word EA1_38;
      MR_Word RA3_39;
      MR_Word IA1_40;
      MR_Word RB1_41;
      MR_Word RB2_42;
      MR_Word EB1_43;
      MR_Word RB3_44;
      MR_Word IB1_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_55;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_69;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word conv0_T_17;
      MR_Word conv1_F_18;
      MR_Word conv2_TAB_28;
      MR_Word conv3_FAB_29;
      MR_Word conv4_TBA_30;
      MR_Word conv5_FBA_31;
      MR_Box conv7_RA1_34;
      MR_Box conv9_RA2_37;
      MR_Box conv11_RB1_41;
      MR_Box conv13_RB2_42;

      {
        TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_87_87, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_87_87, 1) = ((MR_Box) (TypeInfo_for_T_85));
      }
      conv0_T_17 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_87_87, (MR_Word) (TA0_4), (MR_Word) (TB0_10));
      T_17 = (MR_Word) (conv0_T_17);
      conv1_F_18 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_87_87, (MR_Word) (FA0_5), (MR_Word) (FB0_11));
      F_18 = (MR_Word) (conv1_F_18);
      conv2_TAB_28 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_87_87, (MR_Word) (TA0_4), (MR_Word) (TB0_10));
      TAB_28 = (MR_Word) (conv2_TAB_28);
      conv3_FAB_29 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_87_87, (MR_Word) (FA0_5), (MR_Word) (FB0_11));
      FAB_29 = (MR_Word) (conv3_FAB_29);
      Var_47 = mode_robdd__equiv_vars__add_equalities_2_f_0(TypeInfo_for_T_85, TAB_28, EA0_6);
      EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0(TypeInfo_for_T_85, FAB_29, Var_47);
      conv4_TBA_30 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_87_87, (MR_Word) (TB0_10), (MR_Word) (TA0_4));
      TBA_30 = (MR_Word) (conv4_TBA_30);
      conv5_FBA_31 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_87_87, (MR_Word) (FB0_11), (MR_Word) (FA0_5));
      FBA_31 = (MR_Word) (conv5_FBA_31);
      Var_48 = mode_robdd__equiv_vars__add_equalities_2_f_0(TypeInfo_for_T_85, TBA_30, EB0_12);
      EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0(TypeInfo_for_T_85, FBA_31, Var_48);
      E_19 = mode_robdd__equiv_vars__f_plus_2_f_0(TypeInfo_for_T_85, EA_22, EB_23);
      EAB_32 = mode_robdd__equiv_vars__difference_2_f_0(TypeInfo_for_T_85, EA_22, EB_23);
      IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(TypeInfo_for_T_85, EAB_32, IA0_7);
      EBA_33 = mode_robdd__equiv_vars__difference_2_f_0(TypeInfo_for_T_85, EB_23, EA_22);
      IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(TypeInfo_for_T_85, EBA_33, IB0_13);
      I_20 = mode_robdd__implications__f_plus_2_f_0(TypeInfo_for_T_85, IA_24, IB_25);
      {
        TypeClassInfo_for_uenum_89 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_89, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_89, 1) = ((MR_Box) (TypeInfo_for_T_85));
        MR_hl_field(0, TypeClassInfo_for_uenum_89, 2) = ((MR_Box) (TypeInfo_87_87));
      }
      {
        TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_91_91, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_robdd_1));
        MR_hl_field(0, TypeInfo_91_91, 1) = ((MR_Box) (TypeInfo_for_T_85));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_1));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (TypeInfo_for_T_85));
        MR_hl_field(0, Var_49, 4) = ((MR_Box) (E_19));
      }
      conv7_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_85, TypeInfo_91_91, TypeClassInfo_for_uenum_89, (MR_Word) (Var_49), TAB_28, ((MR_Box) (RA0_8)));
      RA1_34 = ((MR_Word) (conv7_RA1_34));
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_2));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (TypeInfo_for_T_85));
        MR_hl_field(0, Var_55, 4) = ((MR_Box) (E_19));
      }
      conv9_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_85, TypeInfo_91_91, TypeClassInfo_for_uenum_89, (MR_Word) (Var_55), FAB_29, ((MR_Box) (RA1_34)));
      RA2_37 = ((MR_Word) (conv9_RA2_37));
      Var_61 = mode_robdd__equiv_vars__difference_2_f_0(TypeInfo_for_T_85, EA_22, EB_23);
      EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0(TypeInfo_for_T_85, Var_61, EA0_6);
      RA3_39 = mercury__robdd__add_equivalences_2_f_0(TypeInfo_for_T_85, EA1_38, RA2_37);
      Var_62 = mode_robdd__implications__difference_2_f_0(TypeInfo_for_T_85, IA_24, IB_25);
      IA1_40 = mode_robdd__implications__f_plus_2_f_0(TypeInfo_for_T_85, Var_62, IA0_7);
      RA_26 = mercury__robdd__add_implications_2_f_0(TypeInfo_for_T_85, IA1_40, RA3_39);
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_3));
        MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_63, 3) = ((MR_Box) (TypeInfo_for_T_85));
        MR_hl_field(0, Var_63, 4) = ((MR_Box) (E_19));
      }
      conv11_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_85, TypeInfo_91_91, TypeClassInfo_for_uenum_89, (MR_Word) (Var_63), TBA_30, ((MR_Box) (RB0_14)));
      RB1_41 = ((MR_Word) (conv11_RB1_41));
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
        MR_hl_field(0, Var_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_4));
        MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_69, 3) = ((MR_Box) (TypeInfo_for_T_85));
        MR_hl_field(0, Var_69, 4) = ((MR_Box) (E_19));
      }
      conv13_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_85, TypeInfo_91_91, TypeClassInfo_for_uenum_89, (MR_Word) (Var_69), FBA_31, ((MR_Box) (RB1_41)));
      RB2_42 = ((MR_Word) (conv13_RB2_42));
      Var_75 = mode_robdd__equiv_vars__difference_2_f_0(TypeInfo_for_T_85, EB_23, EA_22);
      EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0(TypeInfo_for_T_85, Var_75, EB0_12);
      RB3_44 = mercury__robdd__add_equivalences_2_f_0(TypeInfo_for_T_85, EB1_43, RB2_42);
      Var_76 = mode_robdd__implications__difference_2_f_0(TypeInfo_for_T_85, IB_25, IA_24);
      IB1_45 = mode_robdd__implications__f_plus_2_f_0(TypeInfo_for_T_85, Var_76, IB0_13);
      RB_27 = mercury__robdd__add_implications_2_f_0(TypeInfo_for_T_85, IB1_45, RB3_44);
      R_21 = mercury__robdd__f_plus_2_f_0(TypeInfo_for_T_85, RA_26, RB_27);
      {
        X_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, X_16, 0) = ((MR_Box) (T_17));
        MR_hl_field(0, X_16, 1) = ((MR_Box) (F_18));
        MR_hl_field(0, X_16, 2) = ((MR_Box) (E_19));
        MR_hl_field(0, X_16, 3) = ((MR_Box) (I_20));
        MR_hl_field(0, X_16, 4) = ((MR_Box) (R_21));
        MR_hl_field(0, X_16, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
  }
  return X_16;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_times_2_f_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word ROBDD_16;
  MR_Word TypeInfo_47_47;
  MR_Word TA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word FA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word EA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word IA_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word RA_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word TB_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word FB_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word EB_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word IB_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word RB_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word TU_17;
  MR_Word FU_18;
  MR_Word EU_19;
  MR_Word IU_20;
  MR_Word TA1_21;
  MR_Word FA1_22;
  MR_Word EA1_23;
  MR_Word IA1_24;
  MR_Word RA1_25;
  MR_Word TB1_27;
  MR_Word FB1_28;
  MR_Word EB1_29;
  MR_Word IB1_30;
  MR_Word RB1_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word conv0_TU_17;
  MR_Word conv1_FU_18;
  MR_Word conv2_Var_39;
  MR_Word conv3_Var_40;

  {
    TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_47_47, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_47_47, 1) = ((MR_Box) (TypeInfo_for_T_45));
  }
  conv0_TU_17 = mercury__sparse_bitset__union_2_f_0(TypeInfo_47_47, (MR_Word) (TA_4), (MR_Word) (TB_10));
  TU_17 = (MR_Word) (conv0_TU_17);
  conv1_FU_18 = mercury__sparse_bitset__union_2_f_0(TypeInfo_47_47, (MR_Word) (FA_5), (MR_Word) (FB_11));
  FU_18 = (MR_Word) (conv1_FU_18);
  EU_19 = mode_robdd__equiv_vars__f_times_2_f_0(TypeInfo_for_T_45, EA_6, EB_12);
  IU_20 = mode_robdd__implications__f_times_2_f_0(TypeInfo_for_T_45, IA_7, IB_13);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (TU_17));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (FU_18));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) (EU_19));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (IU_20));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) (RA_8));
    MR_hl_field(0, Var_34, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_33 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_45, Var_34);
  TA1_21 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
  FA1_22 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
  EA1_23 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 2))));
  IA1_24 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 3))));
  RA1_25 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 4))));
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (TU_17));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (FU_18));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) (EU_19));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (IU_20));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) (RB_14));
    MR_hl_field(0, Var_37, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_36 = mode_robdd__tfeirn__normalise_1_f_0(TypeInfo_for_T_45, Var_37);
  TB1_27 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
  FB1_28 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
  EB1_29 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 2))));
  IB1_30 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 3))));
  RB1_31 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 4))));
  conv2_Var_39 = mercury__sparse_bitset__union_2_f_0(TypeInfo_47_47, (MR_Word) (TA1_21), (MR_Word) (TB1_27));
  Var_39 = (MR_Word) (conv2_Var_39);
  conv3_Var_40 = mercury__sparse_bitset__union_2_f_0(TypeInfo_47_47, (MR_Word) (FA1_22), (MR_Word) (FB1_28));
  Var_40 = (MR_Word) (conv3_Var_40);
  Var_41 = mode_robdd__equiv_vars__f_times_2_f_0(TypeInfo_for_T_45, EA1_23, EB1_29);
  Var_42 = mode_robdd__implications__f_times_2_f_0(TypeInfo_for_T_45, IA1_24, IB1_30);
  Var_43 = mercury__robdd__f_times_2_f_0(TypeInfo_for_T_45, RA1_25, RB1_31);
  {
    ROBDD_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ROBDD_16, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, ROBDD_16, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, ROBDD_16, 2) = ((MR_Box) (Var_41));
    MR_hl_field(0, ROBDD_16, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, ROBDD_16, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, ROBDD_16, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return ROBDD_16;
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
  MR_Word TypeInfo_for_T_57,
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word X_2;
    MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (Var_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_59_59;
          MR_Word Var_50;
          MR_Word conv0_Var_50;

          {
            TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_59_59, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_59_59, 1) = ((MR_Box) (TypeInfo_for_T_57));
          }
          conv0_Var_50 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_59_59, (MR_Word) (Var_69), (MR_Word) (Var_68));
          Var_50 = (MR_Word) (conv0_Var_50);
          succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_59_59, (MR_Word) (Var_50));
          if (succeeded)
            X_2 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_57);
          else
          {
            MR_Word Changed0_18;
            MR_Word TrueVars1_19;
            MR_Word FalseVars1_20;
            MR_Word EQVars1_21;
            MR_Word Changed1_22;
            MR_Word TrueVars2_23;
            MR_Word FalseVars2_24;
            MR_Word ImpVars1_25;
            MR_Word Changed2_26;
            MR_Word Robdd1_27;
            MR_Word Changed3_28;
            MR_Word Var_51;
            MR_Word Changed0_72;
            MR_Word Changed1_73;
            MR_Word DCG_1_74;
            MR_Word NewTrueVars_29;
            MR_Word NewFalseVars_30;
            MR_Word Var_52;
            MR_Word Var_53;

            mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(TypeInfo_for_T_57, &Changed0_72, Var_69, &TrueVars1_19, Var_67, &DCG_1_74);
            mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(TypeInfo_for_T_57, &Changed1_73, Var_68, &FalseVars1_20, DCG_1_74, &EQVars1_21);
            Changed0_18 = mercury__bool__or_2_f_0(Changed0_72, Changed1_73);
            mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(TypeInfo_for_T_57, &Changed1_22, TrueVars1_19, &TrueVars2_23, FalseVars1_20, &FalseVars2_24, Var_66, &ImpVars1_25);
            Changed2_26 = mercury__bool__or_2_f_0(Changed0_18, Changed1_22);
            Robdd1_27 = mercury__robdd__restrict_true_false_vars_3_f_0(TypeInfo_for_T_57, TrueVars2_23, FalseVars2_24, Var_65);
            succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_57, Robdd1_27, Var_65);
            succeeded = !(succeeded);
            if (succeeded)
              Var_51 = (MR_Integer) 1;
            else
              Var_51 = (MR_Integer) 0;
            Changed3_28 = mercury__bool__or_2_f_0(Changed2_26, Var_51);
            mercury__robdd__definite_vars_3_p_0(TypeInfo_for_T_57, Robdd1_27, &Var_52, &Var_53);
            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NewTrueVars_29 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
              succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                NewFalseVars_30 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Changed4_31;
              MR_Word TrueVars_32;
              MR_Word FalseVars_33;
              MR_Word TypeInfo_61_61;
              MR_Word Changed5_34;
              MR_Word ImpVars2_35;

              {
                TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_61_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                MR_hl_field(0, TypeInfo_61_61, 1) = ((MR_Box) (TypeInfo_for_T_57));
              }
              succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_61_61, (MR_Word) (NewTrueVars_29));
              if (succeeded)
                succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_61_61, (MR_Word) (NewFalseVars_30));
              if (succeeded)
              {
                Changed4_31 = Changed3_28;
                TrueVars_32 = TrueVars2_23;
                FalseVars_33 = FalseVars2_24;
              }
              else
              {
                MR_Word TypeInfo_63_63;
                MR_Word conv1_TrueVars_32;
                MR_Word conv2_FalseVars_33;

                Changed4_31 = (MR_Integer) 1;
                {
                  TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_63_63, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(0, TypeInfo_63_63, 1) = ((MR_Box) (TypeInfo_for_T_57));
                }
                conv1_TrueVars_32 = mercury__sparse_bitset__union_2_f_0(TypeInfo_63_63, (MR_Word) (TrueVars2_23), (MR_Word) (NewTrueVars_29));
                TrueVars_32 = (MR_Word) (conv1_TrueVars_32);
                conv2_FalseVars_33 = mercury__sparse_bitset__union_2_f_0(TypeInfo_63_63, (MR_Word) (FalseVars2_24), (MR_Word) (NewFalseVars_30));
                FalseVars_33 = (MR_Word) (conv2_FalseVars_33);
              }
              succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(TypeInfo_for_T_57, EQVars1_21, &Changed5_34, ImpVars1_25, &ImpVars2_35);
              if (succeeded)
              {
                MR_Word Changed6_36;
                MR_Word EQVars2_37;
                MR_Word ImpVars3_38;
                MR_Word Changed7_39;
                MR_Word Changed8_40;
                MR_Word Robdd2_41;
                MR_Word EQVars_42;
                MR_Word Changed9_43;
                MR_Word Changed10_44;
                MR_Word Robdd_45;
                MR_Word ImpVars_46;
                MR_Word Changed_47;
                MR_Word Var_54;
                MR_Word Changed0_76;
                MR_Word Robdd1_77;
                MR_Word Var_78;
                MR_Word RobddEQVars_75;

                mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(TypeInfo_for_T_57, &Changed6_36, EQVars1_21, &EQVars2_37, ImpVars2_35, &ImpVars3_38);
                Var_54 = mercury__bool__or_2_f_0(Changed4_31, Changed5_34);
                Changed7_39 = mercury__bool__or_2_f_0(Var_54, Changed6_36);
                succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(TypeInfo_for_T_57, Robdd1_27, &RobddEQVars_75);
                if (succeeded)
                {
                  succeeded = mode_robdd__equiv_vars__empty_1_p_0(TypeInfo_for_T_57, RobddEQVars_75);
                  if (succeeded)
                  {
                    Changed0_76 = (MR_Integer) 0;
                    Robdd1_77 = Robdd1_27;
                    EQVars_42 = EQVars2_37;
                  }
                  else
                  {
                    Changed0_76 = (MR_Integer) 1;
                    Robdd1_77 = mercury__robdd__squeeze_equiv_2_f_0(TypeInfo_for_T_57, RobddEQVars_75, Robdd1_27);
                    EQVars_42 = mode_robdd__equiv_vars__f_times_2_f_0(TypeInfo_for_T_57, EQVars2_37, RobddEQVars_75);
                  }
                }
                else
                {
                  EQVars_42 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(TypeInfo_for_T_57);
                  succeeded = mercury__robdd____Unify____equiv_vars_1_0(TypeInfo_for_T_57, EQVars_42, EQVars2_37);
                  if (succeeded)
                    Changed0_76 = (MR_Integer) 0;
                  else
                    Changed0_76 = (MR_Integer) 1;
                  Robdd1_77 = Robdd1_27;
                }
                Robdd2_41 = mode_robdd__equiv_vars__remove_equiv_2_f_0(TypeInfo_for_T_57, EQVars2_37, Robdd1_77);
                succeeded = mercury__robdd____Unify____robdd_1_0(TypeInfo_for_T_57, Robdd2_41, Robdd1_77);
                succeeded = !(succeeded);
                if (succeeded)
                  Var_78 = (MR_Integer) 1;
                else
                  Var_78 = (MR_Integer) 0;
                Changed8_40 = mercury__bool__or_2_f_0(Changed0_76, Var_78);
                Changed9_43 = mercury__bool__or_2_f_0(Changed7_39, Changed8_40);
                mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(TypeInfo_for_T_57, &Changed10_44, Robdd2_41, &Robdd_45, ImpVars3_38, &ImpVars_46);
                Changed_47 = mercury__bool__or_2_f_0(Changed9_43, Changed10_44);
                switch (Changed_47) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      X_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, X_2, 0) = ((MR_Box) (TrueVars_32));
                      MR_hl_field(0, X_2, 1) = ((MR_Box) (FalseVars_33));
                      MR_hl_field(0, X_2, 2) = ((MR_Box) (EQVars_42));
                      MR_hl_field(0, X_2, 3) = ((MR_Box) (ImpVars_46));
                      MR_hl_field(0, X_2, 4) = ((MR_Box) (Robdd_45));
                      MR_hl_field(0, X_2, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word X0_48;
                      MR_Word next_value_of_HeadVar__1_1;

                      {
                        X0_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, X0_48, 0) = ((MR_Box) (TrueVars_32));
                        MR_hl_field(0, X0_48, 1) = ((MR_Box) (FalseVars_33));
                        MR_hl_field(0, X0_48, 2) = ((MR_Box) (EQVars_42));
                        MR_hl_field(0, X0_48, 3) = ((MR_Box) (ImpVars_46));
                        MR_hl_field(0, X0_48, 4) = ((MR_Box) (Robdd_45));
                        MR_hl_field(0, X0_48, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_HeadVar__1_1 = X0_48;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              else
                X_2 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_57);
            }
            else
              X_2 = mode_robdd__tfeirn__zero_0_f_0(TypeInfo_for_T_57);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          X_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, X_2, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, X_2, 1) = ((MR_Box) (Var_68));
          MR_hl_field(0, X_2, 2) = ((MR_Box) (Var_67));
          MR_hl_field(0, X_2, 3) = ((MR_Box) (Var_66));
          MR_hl_field(0, X_2, 4) = ((MR_Box) (Var_65));
          MR_hl_field(0, X_2, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        break;
    }
    return X_2;
    break;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__zero_0_f_0(
  MR_Word TypeInfo_for_T_8)
{
  MR_Word HeadVar__1_1;
  MR_Word TypeInfo_10_10;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word conv0_Var_2;
  MR_Word conv1_Var_3;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  conv0_Var_2 = mercury__sparse_bitset__init_0_f_0(TypeInfo_10_10);
  Var_2 = (MR_Word) (conv0_Var_2);
  conv1_Var_3 = mercury__sparse_bitset__init_0_f_0(TypeInfo_10_10);
  Var_3 = (MR_Word) (conv1_Var_3);
  Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(TypeInfo_for_T_8);
  Var_5 = mode_robdd__implications__init_imp_vars_0_f_0(TypeInfo_for_T_8);
  Var_6 = mercury__robdd__zero_0_f_0(TypeInfo_for_T_8);
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mode_robdd__tfeirn__one_0_f_0(
  MR_Word TypeInfo_for_T_8)
{
  MR_Word HeadVar__1_1;
  MR_Word TypeInfo_10_10;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word conv0_Var_2;
  MR_Word conv1_Var_3;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  conv0_Var_2 = mercury__sparse_bitset__init_0_f_0(TypeInfo_10_10);
  Var_2 = (MR_Word) (conv0_Var_2);
  conv1_Var_3 = mercury__sparse_bitset__init_0_f_0(TypeInfo_10_10);
  Var_3 = (MR_Word) (conv1_Var_3);
  Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(TypeInfo_for_T_8);
  Var_5 = mode_robdd__implications__init_imp_vars_0_f_0(TypeInfo_for_T_8);
  Var_6 = mercury__robdd__one_0_f_0(TypeInfo_for_T_8);
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mode_robdd__tfeirn____Compare____tfeirn_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mode_robdd__tfeirn____Unify____tfeirn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mode_robdd__tfeirn____Compare____tfeirn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mode_robdd__tfeirn__init(void)
{
}

void mercury__mode_robdd__tfeirn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1);
	MR_register_type_ctor_info(&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_0);
}

void mercury__mode_robdd__tfeirn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mode_robdd__tfeirn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mode_robdd.tfeirn.
