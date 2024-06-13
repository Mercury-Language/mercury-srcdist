/*
** Automatically generated from `vartypes.m'
** by the Mercury compiler,
** version rotd-2024-06-13
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


// :- module parse_tree.vartypes.
// :- implementation.

/*
INIT mercury__parse_tree__vartypes__init
ENDINIT
*/

#include "parse_tree.vartypes.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_subst.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__vartypes__parse_tree__vartypes__field_types_prog_var_set_types_0_0[2];

static const MR_DuFunctorDesc parse_tree__vartypes__parse_tree__vartypes__du_functor_desc_prog_var_set_types_0_0;

static const MR_DuFunctorDescPtr parse_tree__vartypes__parse_tree__vartypes__du_stag_ordered_prog_var_set_types_0_0[1];

static const MR_DuPtagLayout parse_tree__vartypes__parse_tree__vartypes__du_ptag_ordered_prog_var_set_types_0[1];

static const MR_DuFunctorDescPtr parse_tree__vartypes__parse_tree__vartypes__du_name_ordered_prog_var_set_types_0[1];

static const MR_Integer parse_tree__vartypes__parse_tree__vartypes__functor_number_map_prog_var_set_types_0[1];

static void MR_CALL 
parse_tree__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__vartypes__apply_subst_to_vartypes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__vartypes____Unify____prog_var_set_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__vartypes____Compare____prog_var_set_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__vartypes____Unify____vartypes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__vartypes____Compare____vartypes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__vartypes_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__vartypes_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__vartypes_scalar_common_3[2][6];




static /* final */ const MR_Box parse_tree__vartypes_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__vartypes_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__vartypes_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box parse_tree__vartypes_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};





static const MR_FA_TypeInfo_Struct1 parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__vartypes__parse_tree__vartypes__field_types_prog_var_set_types_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__vartypes__parse_tree__vartypes__du_functor_desc_prog_var_set_types_0_0 = {
  (MR_String) "prog_var_set_types",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__vartypes__parse_tree__vartypes__field_types_prog_var_set_types_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__vartypes__parse_tree__vartypes__du_stag_ordered_prog_var_set_types_0_0[1] = { &parse_tree__vartypes__parse_tree__vartypes__du_functor_desc_prog_var_set_types_0_0 };

static const MR_DuPtagLayout parse_tree__vartypes__parse_tree__vartypes__du_ptag_ordered_prog_var_set_types_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__vartypes__parse_tree__vartypes__du_stag_ordered_prog_var_set_types_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__vartypes__parse_tree__vartypes__du_name_ordered_prog_var_set_types_0[1] = { &parse_tree__vartypes__parse_tree__vartypes__du_functor_desc_prog_var_set_types_0_0 };

static const MR_Integer parse_tree__vartypes__parse_tree__vartypes__functor_number_map_prog_var_set_types_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_prog_var_set_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__vartypes____Unify____prog_var_set_types_0_0_10001)),
  ((MR_Box) (parse_tree__vartypes____Compare____prog_var_set_types_0_0_10001)),
  (MR_String) "parse_tree.vartypes",
  (MR_String) "prog_var_set_types",
  { parse_tree__vartypes__parse_tree__vartypes__du_name_ordered_prog_var_set_types_0 },
  { parse_tree__vartypes__parse_tree__vartypes__du_ptag_ordered_prog_var_set_types_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__vartypes__parse_tree__vartypes__functor_number_map_prog_var_set_types_0,

};

const MR_TypeCtorInfo_Struct parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__vartypes____Unify____vartypes_0_0_10001)),
  ((MR_Box) (parse_tree__vartypes____Compare____vartypes_0_0_10001)),
  (MR_String) "parse_tree.vartypes",
  (MR_String) "vartypes",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__vartypes____Compare____vartypes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__vartypes____Unify____vartypes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__vartypes____Compare____prog_var_set_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__vartypes____Unify____prog_var_set_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__vartypes_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__vartypes__foldl_var_types_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Pred_5,
  MR_Word VarTypes_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfo_for_T_10, (MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), Pred_5, VarTypes_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
parse_tree__vartypes__transform_foldl_var_types_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Transform_6,
  MR_Word STATE_VARIABLE_VarTypes_0_9,
  MR_Word * STATE_VARIABLE_VarTypes_10,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  mercury__map__map_values_foldl_5_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfo_for_T_13, (MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), Transform_6, STATE_VARIABLE_VarTypes_0_9, STATE_VARIABLE_VarTypes_10, STATE_VARIABLE_Acc_0_11, STATE_VARIABLE_Acc_12);
}

static void MR_CALL 
parse_tree__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__vartypes__apply_rec_subst_to_vartypes_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__vartypes_scalar_common_3[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__vartypes__apply_rec_subst_to_vartypes_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), Var_8, STATE_VARIABLE_VarTypes_0_6, STATE_VARIABLE_VarTypes_7);
}

static void MR_CALL 
parse_tree__vartypes__apply_subst_to_vartypes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__vartypes__apply_subst_to_vartypes_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__vartypes_scalar_common_3[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__vartypes__apply_subst_to_vartypes_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), Var_8, STATE_VARIABLE_VarTypes_0_6, STATE_VARIABLE_VarTypes_7);
}

static void MR_CALL 
parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__vartypes_scalar_common_3[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), Var_8, STATE_VARIABLE_VarTypes_0_6, STATE_VARIABLE_VarTypes_7);
}

void MR_CALL 
parse_tree__vartypes__delete_sorted_var_types_3_p_0(
  MR_Word SortedVars_4,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7)
{
  mercury__map__delete_sorted_list_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SortedVars_4, STATE_VARIABLE_VarTypes_0_6, STATE_VARIABLE_VarTypes_7);
}

void MR_CALL 
parse_tree__vartypes__delete_var_types_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7)
{
  mercury__map__delete_list_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Vars_4, STATE_VARIABLE_VarTypes_0_6, STATE_VARIABLE_VarTypes_7);
}

void MR_CALL 
parse_tree__vartypes__delete_var_type_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7)
{
  mercury__map__delete_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_4)), STATE_VARIABLE_VarTypes_0_6, STATE_VARIABLE_VarTypes_7);
}

void MR_CALL 
parse_tree__vartypes__vartypes_add_corresponding_lists_4_p_0(
  MR_Word Vars_5,
  MR_Word Types_6,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Vars_5, Types_6, STATE_VARIABLE_VarTypes_0_8, STATE_VARIABLE_VarTypes_9);
}

void MR_CALL 
parse_tree__vartypes__vartypes_from_rev_sorted_assoc_list_2_p_0(
  MR_Word RevAssocList_3,
  MR_Word * VarTypes_4)
{
  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevAssocList_3, VarTypes_4);
}

void MR_CALL 
parse_tree__vartypes__vartypes_from_sorted_assoc_list_2_p_0(
  MR_Word AssocList_3,
  MR_Word * VarTypes_4)
{
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), AssocList_3, VarTypes_4);
}

void MR_CALL 
parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(
  MR_Word Vars_4,
  MR_Word Types_5,
  MR_Word * VarTypes_6)
{
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Vars_4, Types_5, VarTypes_6);
}

void MR_CALL 
parse_tree__vartypes__vartypes_to_sorted_assoc_list_2_p_0(
  MR_Word VarTypes_3,
  MR_Word * AssocList_4)
{
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_3, AssocList_4);
}

void MR_CALL 
parse_tree__vartypes__vartypes_types_2_p_0(
  MR_Word VarTypes_3,
  MR_Word * Types_4)
{
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_3, Types_4);
}

void MR_CALL 
parse_tree__vartypes__vartypes_vars_2_p_0(
  MR_Word VarTypes_3,
  MR_Word * Vars_4)
{
  mercury__map__keys_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_3, Vars_4);
}

void MR_CALL 
parse_tree__vartypes__lookup_var_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Type_8;
    MR_Word Types_9;
    MR_Box conv0_Type_8;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HeadVar__1_1, ((MR_Box) (Var_6)), &conv0_Type_8);
    Type_8 = ((MR_Word) (conv0_Type_8));
    parse_tree__vartypes__lookup_var_types_3_p_0(HeadVar__1_1, Vars_7, &Types_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Types_9));
    }
  }
}

void MR_CALL 
parse_tree__vartypes__lookup_var_type_3_p_0(
  MR_Word VarTypes_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  MR_Box conv0_Type_6;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_4, ((MR_Box) (Var_5)), &conv0_Type_6);
  *Type_6 = ((MR_Word) (conv0_Type_6));
}

MR_Word MR_CALL 
parse_tree__vartypes__lookup_var_type_func_2_f_0(
  MR_Word VarTypes_4,
  MR_Word Var_5)
{
  MR_Word Type_6;
  MR_Box conv0_Type_6;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_4, ((MR_Box) (Var_5)), &conv0_Type_6);
  Type_6 = ((MR_Word) (conv0_Type_6));
  return Type_6;
}

MR_bool MR_CALL 
parse_tree__vartypes__search_var_type_3_p_0(
  MR_Word VarTypes_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;
  MR_Box conv0_Type_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_4, ((MR_Box) (Var_5)), &conv0_Type_6);
  if (succeeded)
  {
    *Type_6 = ((MR_Word) (conv0_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__vartypes__is_in_vartypes_2_p_0(
  MR_Word VarTypes_3,
  MR_Word Var_4)
{
  MR_bool succeeded;

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_3, ((MR_Box) (Var_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__vartypes__search_insert_var_type_5_p_0(
  MR_Word Var_6,
  MR_Word NewType_7,
  MR_Word * MaybeOldType_8,
  MR_Word STATE_VARIABLE_VarTypes_0_10,
  MR_Word * STATE_VARIABLE_VarTypes_11)
{
  mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_6)), ((MR_Box) (NewType_7)), MaybeOldType_8, STATE_VARIABLE_VarTypes_0_10, STATE_VARIABLE_VarTypes_11);
}

void MR_CALL 
parse_tree__vartypes__update_var_type_4_p_0(
  MR_Word Var_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_5)), ((MR_Box) (Type_6)), STATE_VARIABLE_VarTypes_0_8, STATE_VARIABLE_VarTypes_9);
}

void MR_CALL 
parse_tree__vartypes__add_var_type_4_p_0(
  MR_Word Var_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_5)), ((MR_Box) (Type_6)), STATE_VARIABLE_VarTypes_0_8, STATE_VARIABLE_VarTypes_9);
}

void MR_CALL 
parse_tree__vartypes__vartypes_optimize_2_p_0(
  MR_Word STATE_VARIABLE_VarTypes_0_4,
  MR_Word * STATE_VARIABLE_VarTypes_5)
{
  mercury__map__optimize_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_VarTypes_0_4, STATE_VARIABLE_VarTypes_5);
}

void MR_CALL 
parse_tree__vartypes__vartypes_select_3_p_0(
  MR_Word SelectedVars_4,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7)
{
  mercury__map__select_3_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_VarTypes_0_6, SelectedVars_4, STATE_VARIABLE_VarTypes_7);
}

void MR_CALL 
parse_tree__vartypes__vartypes_count_2_p_0(
  MR_Word VarTypes_3,
  MR_Integer * Count_4)
{
  mercury__map__count_2_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_3, Count_4);
}

MR_bool MR_CALL 
parse_tree__vartypes__vartypes_is_empty_1_p_0(
  MR_Word VarTypes_2)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_2);
  return succeeded;
}

void MR_CALL 
parse_tree__vartypes__init_vartypes_1_p_0(
  MR_Word * VarTypes_2)
{
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__vartypes_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), VarTypes_2);
}

static MR_bool MR_CALL 
parse_tree__vartypes____Unify____prog_var_set_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__vartypes____Unify____prog_var_set_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__vartypes____Compare____prog_var_set_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__vartypes____Compare____prog_var_set_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__vartypes____Unify____vartypes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__vartypes____Unify____vartypes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__vartypes____Compare____vartypes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__vartypes____Compare____vartypes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__vartypes__init(void)
{
}

void mercury__parse_tree__vartypes__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_prog_var_set_types_0);
	MR_register_type_ctor_info(&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0);
}

void mercury__parse_tree__vartypes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__vartypes__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.vartypes.
