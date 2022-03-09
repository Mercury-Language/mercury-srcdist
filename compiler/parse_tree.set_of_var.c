/*
** Automatically generated from `set_of_var.m'
** by the Mercury compiler,
** version rotd-2022-03-09
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


// :- module parse_tree.set_of_var.
// :- implementation.

/*
INIT mercury__parse_tree__set_of_var__init
ENDINIT
*/

#include "parse_tree.set_of_var.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "enum.mih"
#include "integer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"



struct parse_tree__set_of_var__member_2_p_1_env_0_s {
  MR_Word * parse_tree__set_of_var__member_2_p_1_env_0__Elem_4;
  MR_Cont parse_tree__set_of_var__member_2_p_1_env_0__cont;
  void * parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr;
  MR_Box parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word VarB_6,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list2_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word SetsAcc_7,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word SetA_5,
  MR_Word VarB_6,
  MR_Word STATE_VARIABLE_Sets_0_13,
  MR_Word * STATE_VARIABLE_Sets_14);

static void MR_CALL 
parse_tree__set_of_var__find_all_colours_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ConstraintList_4,
  MR_Word Vars_5,
  MR_Word * ColourList_6);

static void MR_CALL 
parse_tree__set_of_var__next_colour_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Vars0_5,
  MR_Word ConstraintList_6,
  MR_Word * Remainder_7,
  MR_Word * SameColour_8);

static void MR_CALL 
parse_tree__set_of_var__divide_constraints_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Vars_0_5,
  MR_Word * STATE_VARIABLE_Vars_6);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var__member_2_p_1_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_1[4][2];

static /* final */ const MR_Integer parse_tree__set_of_var_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_3[3][8];




static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_1[2]))
  },
};

static /* final */ const MR_Integer parse_tree__set_of_var_scalar_common_2[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__set_of_var_scalar_common_3[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__set_of_var_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};






static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__set_of_var__term__pti_var_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__set_of_var__list__pti_list_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_progvar_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_progvar",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&parse_tree__set_of_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_tvar_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_tvar",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__set_of_var__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__set_of_var____Unify____set_of_var_1_0_10001)),
  ((MR_Box) (parse_tree__set_of_var____Compare____set_of_var_1_0_10001)),
  (MR_String) "parse_tree.set_of_var",
  (MR_String) "set_of_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__set_of_var__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word VarB_6,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  MR_Word TypeInfo_6_34;
  MR_Word TypeClassInfo_for_enum_36;
  MR_Word Set_12;
  MR_Word Var_18;
  MR_Word Var_19;

  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (VarB_6));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (LambdaHeadVar__1_15));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    TypeInfo_6_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_34, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_34, 1) = ((MR_Box) (TypeInfo_for_T_25));
  }
  {
    TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_36, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_36, 1) = ((MR_Box) (TypeInfo_for_T_25));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_36, 2) = ((MR_Box) (TypeInfo_6_34));
  }
  Set_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_25, TypeClassInfo_for_enum_36, Var_18);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__3_17 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Set_12));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LambdaHeadVar__2_16));
  }
}

void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__set_of_var_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__set_of_var_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__set_of_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__set_of_var_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list2_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word A_5,
  MR_Word B_6,
  MR_Word SetsAcc_7,
  MR_Word * HeadVar__4_4)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeInfo_13_13;
  MR_Word Product_8;
  MR_Word conv0_HeadVar__4_4;

  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
  }
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_11_11));
  }
  parse_tree__set_of_var__cartesian_product_3_p_0(TypeInfo_for_T_9, A_5, B_6, &Product_8);
  conv0_HeadVar__4_4 = mercury__list__f_43_43_2_f_0(TypeInfo_13_13, (MR_Word) (Product_8), (MR_Word) (SetsAcc_7));
  *HeadVar__4_4 = (MR_Word) (conv0_HeadVar__4_4);
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_17;

  parse_tree__set_of_var__IntroducedFrom__pred__cartesian_product2__318__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product2_4_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word SetA_5,
  MR_Word VarB_6,
  MR_Word STATE_VARIABLE_Sets_0_13,
  MR_Word * STATE_VARIABLE_Sets_14)
{
  MR_Word TypeInfo_29_29;
  MR_Word TypeInfo_31_31;
  MR_Word TypeInfo_14_39;
  MR_Word TypeClassInfo_for_enum_41;
  MR_Word Pred_8;
  MR_Box conv1_STATE_VARIABLE_Sets_14;

  {
    Pred_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Pred_8, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[2]));
    MR_hl_field(MR_mktag(0), Pred_8, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product2_4_p_0_1));
    MR_hl_field(MR_mktag(0), Pred_8, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Pred_8, 3) = ((MR_Box) (TypeInfo_for_T_25));
    MR_hl_field(MR_mktag(0), Pred_8, 4) = ((MR_Box) (VarB_6));
  }
  {
    TypeInfo_14_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_14_39, 1) = ((MR_Box) (TypeInfo_for_T_25));
  }
  {
    TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_14_39));
  }
  {
    TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_29_29));
  }
  {
    TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_41, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_41, 1) = ((MR_Box) (TypeInfo_for_T_25));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_41, 2) = ((MR_Box) (TypeInfo_14_39));
  }
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_25, TypeInfo_31_31, TypeClassInfo_for_enum_41, (MR_Word) (Pred_8), SetA_5, ((MR_Box) (STATE_VARIABLE_Sets_0_13)), &conv1_STATE_VARIABLE_Sets_14);
  *STATE_VARIABLE_Sets_14 = ((MR_Word) (conv1_STATE_VARIABLE_Sets_14));
}

void MR_CALL 
parse_tree__set_of_var__graph_colour_group_elements_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word STATE_VARIABLE_Constraints_0_8,
  MR_Word * Colours_4)
{
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_7_21;
  MR_Word ConstraintList_5;
  MR_Word AllVars_6;
  MR_Word ColourList_7;
  MR_Word Var_9;
  MR_Word STATE_VARIABLE_Constraints_10_10;
  MR_Word conv0_Var_9;
  MR_Word conv1_STATE_VARIABLE_Constraints_10_10;
  MR_Word conv2_ConstraintList_5;
  MR_Word conv3_AllVars_6;
  MR_Word conv4_Colours_4;

  {
    TypeInfo_7_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_21, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  conv0_Var_9 = mercury__sparse_bitset__init_0_f_0(TypeInfo_7_21);
  Var_9 = (MR_Word) (conv0_Var_9);
  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_7_21));
  }
  mercury__set__delete_3_p_0(TypeInfo_15_15, ((MR_Box) (Var_9)), (MR_Word) (STATE_VARIABLE_Constraints_0_8), &conv1_STATE_VARIABLE_Constraints_10_10);
  STATE_VARIABLE_Constraints_10_10 = (MR_Word) (conv1_STATE_VARIABLE_Constraints_10_10);
  mercury__set__to_sorted_list_2_p_0(TypeInfo_15_15, (MR_Word) (STATE_VARIABLE_Constraints_10_10), &conv2_ConstraintList_5);
  ConstraintList_5 = (MR_Word) (conv2_ConstraintList_5);
  conv3_AllVars_6 = mercury__sparse_bitset__union_list_1_f_0(TypeInfo_7_21, (MR_Word) (ConstraintList_5));
  AllVars_6 = (MR_Word) (conv3_AllVars_6);
  parse_tree__set_of_var__find_all_colours_3_p_0(TypeInfo_for_T_11, ConstraintList_5, AllVars_6, &ColourList_7);
  conv4_Colours_4 = mercury__set__list_to_set_1_f_0(TypeInfo_15_15, (MR_Word) (ColourList_7));
  *Colours_4 = (MR_Word) (conv4_Colours_4);
}

static void MR_CALL 
parse_tree__set_of_var__find_all_colours_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ConstraintList_4,
  MR_Word Vars_5,
  MR_Word * ColourList_6)
{
  if ((ConstraintList_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *ColourList_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_9_18;
    MR_Word RemainingConstraints_9;
    MR_Word Colour_10;
    MR_Word RestVars_11;
    MR_Word ColourList0_12;
    MR_Word conv0_RestVars_11;

    parse_tree__set_of_var__next_colour_4_p_0(TypeInfo_for_T_13, Vars_5, ConstraintList_4, &RemainingConstraints_9, &Colour_10);
    {
      TypeInfo_9_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__sparse_bitset__difference_3_p_0(TypeInfo_9_18, (MR_Word) (Vars_5), (MR_Word) (Colour_10), &conv0_RestVars_11);
    RestVars_11 = (MR_Word) (conv0_RestVars_11);
    parse_tree__set_of_var__find_all_colours_3_p_0(TypeInfo_for_T_13, RemainingConstraints_9, RestVars_11, &ColourList0_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ColourList_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Colour_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ColourList0_12));
    }
  }
}

static void MR_CALL 
parse_tree__set_of_var__next_colour_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Vars0_5,
  MR_Word ConstraintList_6,
  MR_Word * Remainder_7,
  MR_Word * SameColour_8)
{
  MR_bool succeeded;

  if ((ConstraintList_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeInfo_4_26;
    MR_Word conv0_SameColour_8;

    *Remainder_7 = (MR_Word) ((MR_Unsigned) 0U);
    {
      TypeInfo_4_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_4_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_4_26, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    conv0_SameColour_8 = mercury__sparse_bitset__init_0_f_0(TypeInfo_4_26);
    *SameColour_8 = (MR_Word) (conv0_SameColour_8);
  }
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word Var_11;
    MR_Word Vars1_12;
    MR_Word WereContaining_13;
    MR_Word NotContaining_14;
    MR_Word RestVars_15;
    MR_Word ResidueSets_18;
    MR_Word VarPrime_30;
    MR_Word VarsPrime_31;
    MR_Word TypeInfo_11_40;
    MR_Word TypeClassInfo_for_enum_42;
    MR_Box conv2_VarPrime_30;
    MR_Word conv1_VarsPrime_31;
    MR_Word conv3_Remainder_7;

    {
      TypeInfo_11_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_40, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_40, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeClassInfo_for_enum_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_42, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_42, 1) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_42, 2) = ((MR_Box) (TypeInfo_11_40));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_42, &conv2_VarPrime_30, (MR_Word) (Vars0_5), &conv1_VarsPrime_31);
    if (succeeded)
    {
      VarPrime_30 = ((MR_Word) (conv2_VarPrime_30));
      VarsPrime_31 = (MR_Word) (conv1_VarsPrime_31);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_11 = VarPrime_30;
      Vars1_12 = VarsPrime_31;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.set_of_var.choose_var\'/3", (MR_String) "no vars!");
        return;
      }
    parse_tree__set_of_var__divide_constraints_6_p_0(TypeInfo_for_T_20, Var_11, ConstraintList_6, &WereContaining_13, &NotContaining_14, Vars1_12, &RestVars_15);
    if ((NotContaining_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeInfo_6_45;
      MR_Word TypeClassInfo_for_enum_47;

      {
        TypeInfo_6_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_6_45, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_6_45, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      {
        TypeClassInfo_for_enum_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_47, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_47, 1) = ((MR_Box) (TypeInfo_for_T_20));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_47, 2) = ((MR_Box) (TypeInfo_6_45));
      }
      *SameColour_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_20, TypeClassInfo_for_enum_47, Var_11);
      ResidueSets_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeInfo_5_50;

      {
        TypeInfo_5_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_5_50, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_5_50, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_5_50, (MR_Word) (RestVars_15));
      if (succeeded)
      {
        MR_Word TypeClassInfo_for_enum_55;

        {
          TypeClassInfo_for_enum_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_55, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_55, 1) = ((MR_Box) (TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_55, 2) = ((MR_Box) (TypeInfo_5_50));
        }
        *SameColour_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_20, TypeClassInfo_for_enum_55, Var_11);
        ResidueSets_18 = NotContaining_14;
      }
      else
      {
        MR_Word TypeInfo_11_62;
        MR_Word TypeClassInfo_for_enum_64;
        MR_Word SameColour0_19;

        parse_tree__set_of_var__next_colour_4_p_0(TypeInfo_for_T_20, RestVars_15, NotContaining_14, &ResidueSets_18, &SameColour0_19);
        {
          TypeInfo_11_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_11_62, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_11_62, 1) = ((MR_Box) (TypeInfo_for_T_20));
        }
        {
          TypeClassInfo_for_enum_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_64, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_64, 1) = ((MR_Box) (TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_64, 2) = ((MR_Box) (TypeInfo_11_62));
        }
        mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_20, TypeClassInfo_for_enum_64, Var_11, SameColour0_19, SameColour_8);
      }
    }
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_22_22));
    }
    mercury__list__append_3_p_1(TypeInfo_24_24, (MR_Word) (ResidueSets_18), (MR_Word) (WereContaining_13), &conv3_Remainder_7);
    *Remainder_7 = (MR_Word) (conv3_Remainder_7);
  }
}

static void MR_CALL 
parse_tree__set_of_var__divide_constraints_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Vars_0_5,
  MR_Word * STATE_VARIABLE_Vars_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Vars_6 = STATE_VARIABLE_Vars_0_5;
  }
  else
  {
    MR_Word S_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Ss_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word C0_17;
    MR_Word NC0_18;
    MR_Word STATE_VARIABLE_Vars_22_22;
    MR_Word TypeInfo_7_28;
    MR_Word TypeClassInfo_for_enum_30;

    parse_tree__set_of_var__divide_constraints_6_p_0(TypeInfo_for_T_24, HeadVar__1_1, Ss_13, &C0_17, &NC0_18, STATE_VARIABLE_Vars_0_5, &STATE_VARIABLE_Vars_22_22);
    {
      TypeInfo_7_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_28, 1) = ((MR_Box) (TypeInfo_for_T_24));
    }
    {
      TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 1) = ((MR_Box) (TypeInfo_for_T_24));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 2) = ((MR_Box) (TypeInfo_7_28));
    }
    succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_enum_30, ((MR_Box) (HeadVar__1_1)), (MR_Word) (S_12));
    if (succeeded)
    {
      MR_Word T_19;
      MR_Word conv0_STATE_VARIABLE_Vars_6;

      mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_24, TypeClassInfo_for_enum_30, HeadVar__1_1, S_12, &T_19);
      succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_7_28, (MR_Word) (T_19));
      if (succeeded)
        *HeadVar__3_3 = C0_17;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (T_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (C0_17));
        }
      *HeadVar__4_4 = NC0_18;
      mercury__sparse_bitset__difference_3_p_0(TypeInfo_7_28, (MR_Word) (STATE_VARIABLE_Vars_22_22), (MR_Word) (T_19), &conv0_STATE_VARIABLE_Vars_6);
      *STATE_VARIABLE_Vars_6 = (MR_Word) (conv0_STATE_VARIABLE_Vars_6);
    }
    else
    {
      *HeadVar__3_3 = C0_17;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (S_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NC0_18));
      }
      *STATE_VARIABLE_Vars_6 = STATE_VARIABLE_Vars_22_22;
    }
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__all_true_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3,
  MR_Word Set_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeClassInfo_for_enum_9;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 2) = ((MR_Box) (TypeInfo_7_7));
  }
  succeeded = mercury__sparse_bitset__all_true_2_p_0(TypeClassInfo_for_enum_9, (MR_Word) (P_3), (MR_Word) (Set_4));
  return succeeded;
}

void MR_CALL 
parse_tree__set_of_var__filter_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Word * Trues_7,
  MR_Word * Falses_8)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;
  MR_Word conv1_Trues_7;
  MR_Word conv0_Falses_8;

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
  mercury__sparse_bitset__filter_4_p_0(TypeClassInfo_for_enum_13, (MR_Word) (P_5), (MR_Word) (Set_6), &conv1_Trues_7, &conv0_Falses_8);
  *Trues_7 = (MR_Word) (conv1_Trues_7);
  *Falses_8 = (MR_Word) (conv0_Falses_8);
}

void MR_CALL 
parse_tree__set_of_var__filter_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word P_4,
  MR_Word Set_5,
  MR_Word * Trues_6)
{
  MR_Word TypeInfo_9_9;
  MR_Word TypeClassInfo_for_enum_11;
  MR_Word conv0_Trues_6;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 1) = ((MR_Box) (TypeInfo_for_T_7));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 2) = ((MR_Box) (TypeInfo_9_9));
  }
  conv0_Trues_6 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_enum_11, (MR_Word) (P_4), (MR_Word) (Set_5));
  *Trues_6 = (MR_Word) (conv0_Trues_6);
}

MR_Word MR_CALL 
parse_tree__set_of_var__filter_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word P_4,
  MR_Word Set_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_8_8;
  MR_Word TypeClassInfo_for_enum_10;
  MR_Word conv0_HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 2) = ((MR_Box) (TypeInfo_8_8));
  }
  conv0_HeadVar__3_3 = mercury__sparse_bitset__filter_2_f_0(TypeClassInfo_for_enum_10, (MR_Word) (P_4), (MR_Word) (Set_5));
  HeadVar__3_3 = (MR_Word) (conv0_HeadVar__3_3);
  return HeadVar__3_3;
}

void MR_CALL 
parse_tree__set_of_var__fold_func_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_Acc_12,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Word TypeInfo_14_14;
  MR_Word TypeClassInfo_for_enum_16;

  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  {
    TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 1) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 2) = ((MR_Box) (TypeInfo_14_14));
  }
  *STATE_VARIABLE_Acc_9 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(TypeInfo_for_T_11, TypeInfo_for_Acc_12, TypeClassInfo_for_enum_16, P_5, Set_6, STATE_VARIABLE_Acc_0_8);
}

MR_bool MR_CALL 
parse_tree__set_of_var__fold_4_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_Acc_12,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Word TypeInfo_14_14;
  MR_Word TypeClassInfo_for_enum_16;

  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  {
    TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 1) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 2) = ((MR_Box) (TypeInfo_14_14));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_51_95_49_4_p_3(TypeInfo_for_T_11, TypeInfo_for_Acc_12, TypeClassInfo_for_enum_16, P_5, Set_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

void MR_CALL 
parse_tree__set_of_var__fold_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_Acc_12,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Word TypeInfo_14_14;
  MR_Word TypeClassInfo_for_enum_16;

  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  {
    TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 1) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 2) = ((MR_Box) (TypeInfo_14_14));
  }
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_11, TypeInfo_for_Acc_12, TypeClassInfo_for_enum_16, P_5, Set_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__set_of_var__cartesian_product_list2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__set_of_var__cartesian_product_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word FirstSet_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word OtherSets_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6;
    MR_Box conv1_HeadVar__2_2;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product_list_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_T_8));
      MR_hl_field(MR_mktag(0), Var_6, 4) = ((MR_Box) (FirstSet_3));
    }
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_13_13));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__list__foldl_4_p_0(TypeInfo_15_15, TypeInfo_17_17, (MR_Word) (Var_6), (MR_Word) (OtherSets_4), ((MR_Box) ((MR_Unsigned) 0U)), &conv1_HeadVar__2_2);
    *HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Sets_14;

  parse_tree__set_of_var__cartesian_product2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Sets_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Sets_14));
}

void MR_CALL 
parse_tree__set_of_var__cartesian_product_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Product_6)
{
  MR_Word TypeInfo_14_14;
  MR_Word TypeClassInfo_for_enum_16;
  MR_Word TypeInfo_18_18;
  MR_Word TypeInfo_20_20;
  MR_Word Var_7;
  MR_Box conv1_Product_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&parse_tree__set_of_var_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (parse_tree__set_of_var__cartesian_product_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TypeInfo_for_T_9));
    MR_hl_field(MR_mktag(0), Var_7, 4) = ((MR_Box) (A_4));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_9));
  }
  {
    TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 1) = ((MR_Box) (TypeInfo_for_T_9));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_16, 2) = ((MR_Box) (TypeInfo_14_14));
  }
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_14_14));
  }
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
  }
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_9, TypeInfo_20_20, TypeClassInfo_for_enum_16, (MR_Word) (Var_7), B_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Product_6);
  *Product_6 = ((MR_Word) (conv1_Product_6));
}

void MR_CALL 
parse_tree__set_of_var__divide_by_set_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word DivideBySet_5,
  MR_Word Set_6,
  MR_Word * InPart_7,
  MR_Word * OutPart_8)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;
  MR_Word conv1_InPart_7;
  MR_Word conv0_OutPart_8;

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
  mercury__sparse_bitset__divide_by_set_4_p_0(TypeClassInfo_for_enum_13, (MR_Word) (DivideBySet_5), (MR_Word) (Set_6), &conv1_InPart_7, &conv0_OutPart_8);
  *InPart_7 = (MR_Word) (conv1_InPart_7);
  *OutPart_8 = (MR_Word) (conv0_OutPart_8);
}

void MR_CALL 
parse_tree__set_of_var__divide_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Pred_5,
  MR_Word Set_6,
  MR_Word * InPart_7,
  MR_Word * OutPart_8)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;
  MR_Word conv1_InPart_7;
  MR_Word conv0_OutPart_8;

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
  mercury__sparse_bitset__divide_4_p_0(TypeClassInfo_for_enum_13, (MR_Word) (Pred_5), (MR_Word) (Set_6), &conv1_InPart_7, &conv0_OutPart_8);
  *InPart_7 = (MR_Word) (conv1_InPart_7);
  *OutPart_8 = (MR_Word) (conv0_OutPart_8);
}

void MR_CALL 
parse_tree__set_of_var__difference_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word TypeInfo_9_9;
  MR_Word conv0_Set_6;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__sparse_bitset__difference_3_p_0(TypeInfo_9_9, (MR_Word) (SetA_4), (MR_Word) (SetB_5), &conv0_Set_6);
  *Set_6 = (MR_Word) (conv0_Set_6);
}

MR_Word MR_CALL 
parse_tree__set_of_var__difference_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word SetA_4,
  MR_Word SetB_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_8_8;
  MR_Word conv0_HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  conv0_HeadVar__3_3 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_8_8, (MR_Word) (SetA_4), (MR_Word) (SetB_5));
  HeadVar__3_3 = (MR_Word) (conv0_HeadVar__3_3);
  return HeadVar__3_3;
}

void MR_CALL 
parse_tree__set_of_var__intersect_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  MR_Word TypeInfo_7_7;
  MR_Word conv0_Set_4;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  conv0_Set_4 = mercury__sparse_bitset__intersect_list_1_f_0(TypeInfo_7_7, (MR_Word) (Sets_3));
  *Set_4 = (MR_Word) (conv0_Set_4);
}

MR_Word MR_CALL 
parse_tree__set_of_var__intersect_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Sets_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_6_6;
  MR_Word conv0_HeadVar__2_2;

  {
    TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 1) = ((MR_Box) (TypeInfo_for_T_4));
  }
  conv0_HeadVar__2_2 = mercury__sparse_bitset__intersect_list_1_f_0(TypeInfo_6_6, (MR_Word) (Sets_3));
  HeadVar__2_2 = (MR_Word) (conv0_HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__set_of_var__intersect_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word TypeInfo_9_9;
  MR_Word conv0_Set_6;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__sparse_bitset__intersect_3_p_0(TypeInfo_9_9, (MR_Word) (SetA_4), (MR_Word) (SetB_5), &conv0_Set_6);
  *Set_6 = (MR_Word) (conv0_Set_6);
}

MR_Word MR_CALL 
parse_tree__set_of_var__intersect_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word SetA_4,
  MR_Word SetB_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_8_8;
  MR_Word conv0_HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  conv0_HeadVar__3_3 = mercury__sparse_bitset__intersect_2_f_0(TypeInfo_8_8, (MR_Word) (SetA_4), (MR_Word) (SetB_5));
  HeadVar__3_3 = (MR_Word) (conv0_HeadVar__3_3);
  return HeadVar__3_3;
}

void MR_CALL 
parse_tree__set_of_var__union_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  MR_Word TypeInfo_7_7;
  MR_Word conv0_Set_4;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  conv0_Set_4 = mercury__sparse_bitset__union_list_1_f_0(TypeInfo_7_7, (MR_Word) (Sets_3));
  *Set_4 = (MR_Word) (conv0_Set_4);
}

MR_Word MR_CALL 
parse_tree__set_of_var__union_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Sets_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_6_6;
  MR_Word conv0_HeadVar__2_2;

  {
    TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 1) = ((MR_Box) (TypeInfo_for_T_4));
  }
  conv0_HeadVar__2_2 = mercury__sparse_bitset__union_list_1_f_0(TypeInfo_6_6, (MR_Word) (Sets_3));
  HeadVar__2_2 = (MR_Word) (conv0_HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__set_of_var__union_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  MR_Word TypeInfo_9_9;
  MR_Word conv0_Set_6;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__sparse_bitset__union_3_p_0(TypeInfo_9_9, (MR_Word) (SetA_4), (MR_Word) (SetB_5), &conv0_Set_6);
  *Set_6 = (MR_Word) (conv0_Set_6);
}

MR_Word MR_CALL 
parse_tree__set_of_var__union_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word SetA_4,
  MR_Word SetB_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_8_8;
  MR_Word conv0_HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  conv0_HeadVar__3_3 = mercury__sparse_bitset__union_2_f_0(TypeInfo_8_8, (MR_Word) (SetA_4), (MR_Word) (SetB_5));
  HeadVar__3_3 = (MR_Word) (conv0_HeadVar__3_3);
  return HeadVar__3_3;
}

MR_bool MR_CALL 
parse_tree__set_of_var__remove_least_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * LeastElem_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;
  MR_Box conv1_LeastElem_4;
  MR_Word conv0_STATE_VARIABLE_Set_7;

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
  succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_13, &conv1_LeastElem_4, (MR_Word) (STATE_VARIABLE_Set_0_6), &conv0_STATE_VARIABLE_Set_7);
  if (succeeded)
  {
    *LeastElem_4 = ((MR_Word) (conv1_LeastElem_4));
    *STATE_VARIABLE_Set_7 = (MR_Word) (conv0_STATE_VARIABLE_Set_7);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__set_of_var__remove_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elems_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;
  MR_Word conv0_STATE_VARIABLE_Set_7;

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
  succeeded = mercury__sparse_bitset__remove_list_3_p_0(TypeClassInfo_for_enum_13, (MR_Word) (Elems_4), (MR_Word) (STATE_VARIABLE_Set_0_6), &conv0_STATE_VARIABLE_Set_7);
  if (succeeded)
  {
    *STATE_VARIABLE_Set_7 = (MR_Word) (conv0_STATE_VARIABLE_Set_7);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__set_of_var__remove_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elem_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_bool succeeded;
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;
  MR_Word conv0_STATE_VARIABLE_Set_7;

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
  succeeded = mercury__sparse_bitset__remove_3_p_0(TypeClassInfo_for_enum_13, ((MR_Box) (Elem_4)), (MR_Word) (STATE_VARIABLE_Set_0_6), &conv0_STATE_VARIABLE_Set_7);
  if (succeeded)
  {
    *STATE_VARIABLE_Set_7 = (MR_Word) (conv0_STATE_VARIABLE_Set_7);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
parse_tree__set_of_var__delete_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elems_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;

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
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_9, TypeClassInfo_for_enum_13, Elems_4, STATE_VARIABLE_Set_0_6, STATE_VARIABLE_Set_7);
}

void MR_CALL 
parse_tree__set_of_var__delete_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elem_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;

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
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_9, TypeClassInfo_for_enum_13, Elem_4, STATE_VARIABLE_Set_0_6, STATE_VARIABLE_Set_7);
}

void MR_CALL 
parse_tree__set_of_var__insert_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elems_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;

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
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_9, TypeClassInfo_for_enum_13, Elems_4, STATE_VARIABLE_Set_0_6, STATE_VARIABLE_Set_7);
}

void MR_CALL 
parse_tree__set_of_var__insert_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elem_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeClassInfo_for_enum_13;

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
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_9, TypeClassInfo_for_enum_13, Elem_4, STATE_VARIABLE_Set_0_6, STATE_VARIABLE_Set_7);
}

MR_Word MR_CALL 
parse_tree__set_of_var__bitset_to_set_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word BitSet_3)
{
  MR_Word OrdSet_4;
  MR_Word TypeInfo_8_8;
  MR_Word TypeClassInfo_for_enum_10;
  MR_Word List_5;
  MR_Word conv0_OrdSet_4;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 2) = ((MR_Box) (TypeInfo_8_8));
  }
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_6, TypeClassInfo_for_enum_10, BitSet_3, &List_5);
  mercury__set__sorted_list_to_set_2_p_0(TypeInfo_8_8, (MR_Word) (List_5), &conv0_OrdSet_4);
  OrdSet_4 = (MR_Word) (conv0_OrdSet_4);
  return OrdSet_4;
}

MR_Word MR_CALL 
parse_tree__set_of_var__set_to_bitset_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word OrdSet_3)
{
  MR_Word BitSet_4;
  MR_Word TypeInfo_8_8;
  MR_Word TypeClassInfo_for_enum_10;
  MR_Word List_5;
  MR_Word conv0_List_5;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__set__to_sorted_list_2_p_0(TypeInfo_8_8, (MR_Word) (OrdSet_3), &conv0_List_5);
  List_5 = (MR_Word) (conv0_List_5);
  {
    TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 2) = ((MR_Box) (TypeInfo_8_8));
  }
  mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_6, TypeClassInfo_for_enum_10, List_5, &BitSet_4);
  return BitSet_4;
}

void MR_CALL 
parse_tree__set_of_var__to_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word * List_4)
{
  MR_Word TypeInfo_6_8;
  MR_Word TypeClassInfo_for_enum_10;

  {
    TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 2) = ((MR_Box) (TypeInfo_6_8));
  }
  *List_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_5, TypeClassInfo_for_enum_10, Set_3);
}

void MR_CALL 
parse_tree__set_of_var__sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  MR_Word TypeInfo_6_8;
  MR_Word TypeClassInfo_for_enum_10;

  {
    TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 2) = ((MR_Box) (TypeInfo_6_8));
  }
  *Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_5, TypeClassInfo_for_enum_10, List_3);
}

void MR_CALL 
parse_tree__set_of_var__list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  MR_Word TypeInfo_6_8;
  MR_Word TypeClassInfo_for_enum_10;

  {
    TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 2) = ((MR_Box) (TypeInfo_6_8));
  }
  *Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_5, TypeClassInfo_for_enum_10, List_3);
}

MR_Word MR_CALL 
parse_tree__set_of_var__to_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Set_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_6_6;
  MR_Word TypeClassInfo_for_enum_8;

  {
    TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 1) = ((MR_Box) (TypeInfo_for_T_4));
  }
  {
    TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 1) = ((MR_Box) (TypeInfo_for_T_4));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 2) = ((MR_Box) (TypeInfo_6_6));
  }
  HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_4, TypeClassInfo_for_enum_8, Set_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__set_of_var__sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_6_6;
  MR_Word TypeClassInfo_for_enum_8;

  {
    TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 1) = ((MR_Box) (TypeInfo_for_T_4));
  }
  {
    TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 1) = ((MR_Box) (TypeInfo_for_T_4));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 2) = ((MR_Box) (TypeInfo_6_6));
  }
  HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_4, TypeClassInfo_for_enum_8, List_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__set_of_var__list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_6_6;
  MR_Word TypeClassInfo_for_enum_8;

  {
    TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 1) = ((MR_Box) (TypeInfo_for_T_4));
  }
  {
    TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 1) = ((MR_Box) (TypeInfo_for_T_4));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 2) = ((MR_Box) (TypeInfo_6_6));
  }
  HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_4, TypeClassInfo_for_enum_8, List_3);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
parse_tree__set_of_var__equal_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__sparse_bitset__equal_2_p_0(TypeInfo_7_7, (MR_Word) (SetA_3), (MR_Word) (SetB_4));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__set_of_var__contains_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word Elem_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeClassInfo_for_enum_9;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 2) = ((MR_Box) (TypeInfo_7_7));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_5, TypeClassInfo_for_enum_9, Set_3, Elem_4);
  return succeeded;
}

void MR_CALL 
parse_tree__set_of_var__is_member_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Set_4,
  MR_Word Elem_5,
  MR_Word * IsMember_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_11;
  MR_Word TypeClassInfo_for_enum_13;

  {
    TypeInfo_7_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_11, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeClassInfo_for_enum_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 1) = ((MR_Box) (TypeInfo_for_T_7));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_13, 2) = ((MR_Box) (TypeInfo_7_11));
  }
  succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_7, TypeClassInfo_for_enum_13, Set_4, Elem_5);
  if (succeeded)
    *IsMember_6 = (MR_Integer) 1;
  else
    *IsMember_6 = (MR_Integer) 0;
}

static void MR_CALL 
parse_tree__set_of_var__member_2_p_1_1(
  void * env_ptr_arg)
{
  struct parse_tree__set_of_var__member_2_p_1_env_0_s * env_ptr = (struct parse_tree__set_of_var__member_2_p_1_env_0_s *) (env_ptr_arg);

  *((env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__Elem_4) = ((MR_Word) ((env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4));
  ((env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__cont)((env_ptr)->parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr);
}

void MR_CALL 
parse_tree__set_of_var__member_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word * Elem_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct parse_tree__set_of_var__member_2_p_1_env_0_s env;

  (env).parse_tree__set_of_var__member_2_p_1_env_0__Elem_4 = Elem_4;
  (env).parse_tree__set_of_var__member_2_p_1_env_0__cont = cont;
  (env).parse_tree__set_of_var__member_2_p_1_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word TypeInfo_7_7;
    MR_Word TypeClassInfo_for_enum_9;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 2) = ((MR_Box) (TypeInfo_7_7));
    }
    mercury__sparse_bitset__member_2_p_1(TypeClassInfo_for_enum_9, &(env).parse_tree__set_of_var__member_2_p_1_env_0__conv0_Elem_4, (MR_Word) (Set_3), parse_tree__set_of_var__member_2_p_1_1, &env);
  }
}

MR_bool MR_CALL 
parse_tree__set_of_var__member_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word Elem_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeClassInfo_for_enum_9;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 2) = ((MR_Box) (TypeInfo_7_7));
  }
  succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_enum_9, ((MR_Box) (Elem_4)), (MR_Word) (Set_3));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__set_of_var__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word * Elem_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeClassInfo_for_enum_9;
  MR_Box conv0_Elem_4;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 2) = ((MR_Box) (TypeInfo_7_7));
  }
  succeeded = mercury__sparse_bitset__is_singleton_2_p_0(TypeClassInfo_for_enum_9, (MR_Word) (Set_3), &conv0_Elem_4);
  if (succeeded)
  {
    *Elem_4 = ((MR_Word) (conv0_Elem_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__set_of_var__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_5_5;

  {
    TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_5_5, 1) = ((MR_Box) (TypeInfo_for_T_3));
  }
  succeeded = mercury__sparse_bitset__is_non_empty_1_p_0(TypeInfo_5_5, (MR_Word) (Set_2));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__set_of_var__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_5_5;

  {
    TypeInfo_5_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_5_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_5_5, 1) = ((MR_Box) (TypeInfo_for_T_3));
  }
  succeeded = mercury__sparse_bitset__is_empty_1_p_0(TypeInfo_5_5, (MR_Word) (Set_2));
  return succeeded;
}

MR_Integer MR_CALL 
parse_tree__set_of_var__count_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  MR_Integer Count_4;
  MR_Word TypeInfo_7_7;
  MR_Word TypeClassInfo_for_enum_9;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_9, 2) = ((MR_Box) (TypeInfo_7_7));
  }
  Count_4 = mercury__sparse_bitset__count_1_f_0(TypeClassInfo_for_enum_9, (MR_Word) (Set_3));
  return Count_4;
}

void MR_CALL 
parse_tree__set_of_var__make_singleton_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Elem_3,
  MR_Word * Set_4)
{
  MR_Word TypeInfo_6_8;
  MR_Word TypeClassInfo_for_enum_10;

  {
    TypeInfo_6_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeClassInfo_for_enum_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_10, 2) = ((MR_Box) (TypeInfo_6_8));
  }
  *Set_4 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_5, TypeClassInfo_for_enum_10, Elem_3);
}

MR_Word MR_CALL 
parse_tree__set_of_var__make_singleton_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Elem_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeInfo_6_6;
  MR_Word TypeClassInfo_for_enum_8;

  {
    TypeInfo_6_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_6_6, 1) = ((MR_Box) (TypeInfo_for_T_4));
  }
  {
    TypeClassInfo_for_enum_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 1) = ((MR_Box) (TypeInfo_for_T_4));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, 2) = ((MR_Box) (TypeInfo_6_6));
  }
  HeadVar__2_2 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(TypeInfo_for_T_4, TypeClassInfo_for_enum_8, Elem_3);
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__set_of_var__init_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * Set_2)
{
  MR_Word TypeInfo_4_5;
  MR_Word conv0_Set_2;

  {
    TypeInfo_4_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_4_5, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_4_5, 1) = ((MR_Box) (TypeInfo_for_T_3));
  }
  conv0_Set_2 = mercury__sparse_bitset__init_0_f_0(TypeInfo_4_5);
  *Set_2 = (MR_Word) (conv0_Set_2);
}

MR_Word MR_CALL 
parse_tree__set_of_var__init_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  MR_Word HeadVar__1_1;
  MR_Word TypeInfo_4_4;
  MR_Word conv0_HeadVar__1_1;

  {
    TypeInfo_4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_4_4, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_4_4, 1) = ((MR_Box) (TypeInfo_for_T_2));
  }
  conv0_HeadVar__1_1 = mercury__sparse_bitset__init_0_f_0(TypeInfo_4_4);
  HeadVar__1_1 = (MR_Word) (conv0_HeadVar__1_1);
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_progvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var____Unify____set_of_progvar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_progvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__set_of_var____Compare____set_of_progvar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_tvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var____Unify____set_of_tvar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_tvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__set_of_var____Compare____set_of_tvar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__set_of_var____Unify____set_of_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var____Unify____set_of_var_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__set_of_var____Compare____set_of_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__set_of_var____Compare____set_of_var_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__set_of_var__init(void)
{
}

void mercury__parse_tree__set_of_var__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_progvar_0);
	MR_register_type_ctor_info(&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_tvar_0);
	MR_register_type_ctor_info(&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1);
}

void mercury__parse_tree__set_of_var__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__set_of_var__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.set_of_var.
