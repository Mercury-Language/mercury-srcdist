/*
** Automatically generated from `pseudo_type_info.m'
** by the Mercury compiler,
** version rotd-2023-05-30
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


// :- module backend_libs.pseudo_type_info.
// :- implementation.

/*
INIT mercury__backend_libs__pseudo_type_info__init
ENDINIT
*/

#include "backend_libs.pseudo_type_info.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "libs.mih"
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
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint16.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.rtti.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 backend_libs__pseudo_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0;

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__180__1_2_p_0(
  MR_Word TypeInfoArgs_27,
  MR_Integer HeadVar__2_30);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__169__1_3_p_0(
  MR_Word VarArityId_7,
  MR_Word TypeInfoArgs_10,
  MR_Integer HeadVar__3_30);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__116__1_2_p_0(
  MR_Word PseudoArgs_60,
  MR_Integer HeadVar__2_65);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__104__1_3_p_0(
  MR_Word VarArityId_27,
  MR_Word PseudoArgs_30,
  MR_Integer HeadVar__3_65);

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(
  MR_Integer NumUnivQTvars_5,
  MR_Word ExistQTvars_6,
  MR_Word TypeArg_7,
  MR_Word * MaybePseudoArg_8);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_2[1][1];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_3[1][7];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_4[2][6];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_5[4][5];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_6[2][3];




static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "builtin")) },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_var_arity_ctor_id_0)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_var_arity_ctor_id_0)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_5[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_6[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[2])),
    ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[2])),
    ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 backend_libs__pseudo_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__pseudo_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0) }
};

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__180__1_2_p_0(
  MR_Word TypeInfoArgs_27,
  MR_Integer HeadVar__2_30)
{
  MR_bool succeeded;
  MR_Integer NumPseudoArgs_31;

  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), TypeInfoArgs_27, &NumPseudoArgs_31);
  succeeded = (NumPseudoArgs_31 == HeadVar__2_30);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__169__1_3_p_0(
  MR_Word VarArityId_7,
  MR_Word TypeInfoArgs_10,
  MR_Integer HeadVar__3_30)
{
  MR_bool succeeded;
  MR_Integer NumPseudoArgs_31;

  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), TypeInfoArgs_10, &NumPseudoArgs_31);
  switch (VarArityId_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) NumPseudoArgs_31 - (MR_Unsigned) HeadVar__3_30);

        succeeded = (Var_32 == (MR_Integer) 1);
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      succeeded = (NumPseudoArgs_31 == HeadVar__3_30);
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__116__1_2_p_0(
  MR_Word PseudoArgs_60,
  MR_Integer HeadVar__2_65)
{
  MR_bool succeeded;
  MR_Integer NumPseudoArgs_66;

  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), PseudoArgs_60, &NumPseudoArgs_66);
  succeeded = (NumPseudoArgs_66 == HeadVar__2_65);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__104__1_3_p_0(
  MR_Word VarArityId_27,
  MR_Word PseudoArgs_30,
  MR_Integer HeadVar__3_65)
{
  MR_bool succeeded;
  MR_Integer NumPseudoArgs_66;

  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), PseudoArgs_30, &NumPseudoArgs_66);
  switch (VarArityId_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Var_67 = (MR_Integer) ((MR_Unsigned) NumPseudoArgs_66 - (MR_Unsigned) HeadVar__3_65);

        succeeded = (Var_67 == (MR_Integer) 1);
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      succeeded = (NumPseudoArgs_66 == HeadVar__3_65);
      break;
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(
  MR_Integer NumUnivQTvars_5,
  MR_Word ExistQTvars_6,
  MR_Word TypeArg_7,
  MR_Word * MaybePseudoArg_8)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type__type_is_ground_1_p_0(TypeArg_7);
  if (succeeded)
  {
    MR_Word PseudoArg_9;

    backend_libs__pseudo_type_info__construct_type_info_2_p_0(TypeArg_7, &PseudoArg_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePseudoArg_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PseudoArg_9));
    }
  }
  else
  {
    MR_Word PseudoArg_10;

    backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(TypeArg_7, NumUnivQTvars_5, ExistQTvars_6, &PseudoArg_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePseudoArg_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (PseudoArg_10));
    }
  }
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(
  MR_Word Type_5,
  MR_Integer NumUnivQTvars_6,
  MR_Word ExistQTvars_7,
  MR_Word * MaybePseudoTypeInfo_8)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type__type_is_ground_1_p_0(Type_5);
  if (succeeded)
  {
    MR_Word TypeInfo_9;

    backend_libs__pseudo_type_info__construct_type_info_2_p_0(Type_5, &TypeInfo_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePseudoTypeInfo_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeInfo_9));
    }
  }
  else
  {
    MR_Word PseudoTypeInfo_10;

    backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(Type_5, NumUnivQTvars_6, ExistQTvars_7, &PseudoTypeInfo_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePseudoTypeInfo_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (PseudoTypeInfo_10));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__180__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TypeInfo_4;

  backend_libs__pseudo_type_info__construct_type_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TypeInfo_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_TypeInfo_4));
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__169__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TypeInfo_4;

  backend_libs__pseudo_type_info__construct_type_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TypeInfo_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_TypeInfo_4));
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeInfo_4)
{
  MR_bool succeeded;
  MR_Word TypeCtor_5;
  MR_Word TypeArgs_6;
  MR_Integer Var_30;
  MR_Word Var_31;
  MR_Word VarArityId_7;
  MR_Word PredOrFunc_33;
  MR_Word _Purity_32;
  MR_Word Var_35;

  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_3, &TypeCtor_5, &TypeArgs_6);
  Var_31 = ((MR_Word) ((MR_hl_field(0, TypeCtor_5, (MR_Integer) 0))));
  Var_30 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_5, (MR_Integer) 1))));
  succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_3, &_Purity_32, &PredOrFunc_33, &Var_35);
  if (succeeded)
  {
    switch (PredOrFunc_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        VarArityId_7 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        VarArityId_7 = (MR_Integer) 0;
        break;
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_36;

    succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_3, &Var_36);
    if (succeeded)
    {
      VarArityId_7 = (MR_Integer) 2;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfoArgs_10;
    MR_Word Var_18;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&backend_libs__pseudo_type_info_scalar_common_6[0]), TypeArgs_6, &TypeInfoArgs_10);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[1]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_2));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (VarArityId_7));
      MR_hl_field(0, Var_18, 4) = ((MR_Box) (TypeInfoArgs_10));
      MR_hl_field(0, Var_18, 5) = ((MR_Box) (Var_30));
    }
    mercury__require__expect_3_p_0(Var_18, (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_type_info\'/2", (MR_String) "arity mismatch");
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TypeInfo_4 = base;
      MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (VarArityId_7));
      MR_hl_field(2, base, 1) = ((MR_Box) (TypeInfoArgs_10));
    }
  }
  else
  {
    MR_String TypeName_13;
    MR_Word TypeModule_14;
    MR_Word RttiTypeCtor_15;
    uint16_t Var_23;
    MR_Word Var_24;
    MR_Word TypeInfoArgs_27;

    TypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_31);
    mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Var_31, (MR_Word) (&backend_libs__pseudo_type_info_scalar_common_2[0]), &TypeModule_14);
    Var_23 = mercury__uint16__det_from_int_1_f_0(Var_30);
    {
      RttiTypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RttiTypeCtor_15, 0) = ((MR_Box) (TypeModule_14));
      MR_hl_field(0, RttiTypeCtor_15, 1) = ((MR_Box) (TypeName_13));
      MR_hl_field(0, RttiTypeCtor_15, 2) = ((MR_Box) (MR_Word) (Var_23));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&backend_libs__pseudo_type_info_scalar_common_6[1]), TypeArgs_6, &TypeInfoArgs_27);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[3]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_4));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (TypeInfoArgs_27));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (Var_30));
    }
    mercury__require__expect_3_p_0(Var_24, (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_type_info\'/2", (MR_String) "arity mismatch");
    if ((TypeInfoArgs_27 == (MR_Word) ((MR_Unsigned) 0U)))
      *TypeInfo_4 = (MR_Word) ((MR_Word) (RttiTypeCtor_15));
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *TypeInfo_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (RttiTypeCtor_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (TypeInfoArgs_27));
      }
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__116__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybePseudoArg_8;

  backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_MaybePseudoArg_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_MaybePseudoArg_8));
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__104__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybePseudoArg_8;

  backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybePseudoArg_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybePseudoArg_8));
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(
  MR_Word Type_5,
  MR_Integer NumUnivQTvars_6,
  MR_Word ExistQTvars_7,
  MR_Word * PseudoTypeInfo_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Type_5, (MR_Integer) 0))));
        MR_Integer VarInt0_40;
        MR_Integer VarInt_41;
        MR_Word Var_56;

        mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Var_38, &VarInt0_40);
        succeeded = (VarInt0_40 <= NumUnivQTvars_6);
        if (!(succeeded))
          succeeded = (NumUnivQTvars_6 < (MR_Integer) 0);
        if (succeeded)
          VarInt_41 = VarInt0_40;
        else
        {
          MR_Integer ExistNum0_42;

          succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&backend_libs__pseudo_type_info_scalar_common_1[0]), ExistQTvars_7, ((MR_Box) (Var_38)), &ExistNum0_42);
          if (succeeded)
            VarInt_41 = (MR_Integer) ((MR_Unsigned) ExistNum0_42 + (MR_Unsigned) 512);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "not in list");
              return;
            }
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[1]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_5));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (VarInt_41));
          MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 1024));
        }
        mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "type var exceeds limit");
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *PseudoTypeInfo_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (VarInt_41));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word TypeCtor_25;
        MR_Word TypeArgs_26;
        MR_Integer Var_65;
        MR_Word Var_66;
        MR_Word VarArityId_27;
        MR_Word PredOrFunc_68;
        MR_Word _Purity_67;
        MR_Word Var_70;

        parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_5, &TypeCtor_25, &TypeArgs_26);
        Var_66 = ((MR_Word) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 0))));
        Var_65 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_5, &_Purity_67, &PredOrFunc_68, &Var_70);
        if (succeeded)
        {
          switch (PredOrFunc_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              VarArityId_27 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              VarArityId_27 = (MR_Integer) 0;
              break;
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_71;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_5, &Var_71);
          if (succeeded)
          {
            VarArityId_27 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word PseudoArgs_30;
          MR_Word Var_43;
          MR_Word Var_72;

          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_3[0]));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1));
            MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_72, 3) = ((MR_Box) (NumUnivQTvars_6));
            MR_hl_field(0, Var_72, 4) = ((MR_Box) (ExistQTvars_7));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Var_72, TypeArgs_26, &PseudoArgs_30);
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_43, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[0]));
            MR_hl_field(0, Var_43, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2));
            MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_43, 3) = ((MR_Box) (VarArityId_27));
            MR_hl_field(0, Var_43, 4) = ((MR_Box) (PseudoArgs_30));
            MR_hl_field(0, Var_43, 5) = ((MR_Box) (Var_65));
          }
          mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "var arity mismatch");
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *PseudoTypeInfo_8 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (VarArityId_27));
            MR_hl_field(2, base, 1) = ((MR_Box) (PseudoArgs_30));
          }
        }
        else
        {
          MR_String TypeName_33;
          MR_Word TypeModule_34;
          MR_Word RttiTypeCtor_35;
          uint16_t Var_48;
          MR_Word Var_49;
          MR_Word PseudoArgs_60;
          MR_Word Var_75;

          TypeName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_66);
          mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Var_66, (MR_Word) (&backend_libs__pseudo_type_info_scalar_common_2[0]), &TypeModule_34);
          Var_48 = mercury__uint16__det_from_int_1_f_0(Var_65);
          {
            RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RttiTypeCtor_35, 0) = ((MR_Box) (TypeModule_34));
            MR_hl_field(0, RttiTypeCtor_35, 1) = ((MR_Box) (TypeName_33));
            MR_hl_field(0, RttiTypeCtor_35, 2) = ((MR_Box) (MR_Word) (Var_48));
          }
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_75, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_3[0]));
            MR_hl_field(0, Var_75, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3));
            MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_75, 3) = ((MR_Box) (NumUnivQTvars_6));
            MR_hl_field(0, Var_75, 4) = ((MR_Box) (ExistQTvars_7));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Var_75, TypeArgs_26, &PseudoArgs_60);
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_49, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[0]));
            MR_hl_field(0, Var_49, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4));
            MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_49, 3) = ((MR_Box) (PseudoArgs_60));
            MR_hl_field(0, Var_49, 4) = ((MR_Box) (Var_65));
          }
          mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "arity mismatch");
          if ((PseudoArgs_60 == (MR_Word) ((MR_Unsigned) 0U)))
            *PseudoTypeInfo_8 = (MR_Word) ((MR_Word) (RttiTypeCtor_35));
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *PseudoTypeInfo_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (RttiTypeCtor_35));
              MR_hl_field(1, base, 1) = ((MR_Box) (PseudoArgs_60));
            }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word TypeCtor_25;
        MR_Word TypeArgs_26;
        MR_Integer Var_65;
        MR_Word Var_66;
        MR_Word VarArityId_27;
        MR_Word PredOrFunc_68;
        MR_Word _Purity_67;
        MR_Word Var_70;

        parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_5, &TypeCtor_25, &TypeArgs_26);
        Var_66 = ((MR_Word) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 0))));
        Var_65 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_5, &_Purity_67, &PredOrFunc_68, &Var_70);
        if (succeeded)
        {
          switch (PredOrFunc_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              VarArityId_27 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              VarArityId_27 = (MR_Integer) 0;
              break;
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_71;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_5, &Var_71);
          if (succeeded)
          {
            VarArityId_27 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word PseudoArgs_30;
          MR_Word Var_43;
          MR_Word Var_72;

          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_3[0]));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1));
            MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_72, 3) = ((MR_Box) (NumUnivQTvars_6));
            MR_hl_field(0, Var_72, 4) = ((MR_Box) (ExistQTvars_7));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Var_72, TypeArgs_26, &PseudoArgs_30);
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_43, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[0]));
            MR_hl_field(0, Var_43, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2));
            MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_43, 3) = ((MR_Box) (VarArityId_27));
            MR_hl_field(0, Var_43, 4) = ((MR_Box) (PseudoArgs_30));
            MR_hl_field(0, Var_43, 5) = ((MR_Box) (Var_65));
          }
          mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "var arity mismatch");
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *PseudoTypeInfo_8 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (VarArityId_27));
            MR_hl_field(2, base, 1) = ((MR_Box) (PseudoArgs_30));
          }
        }
        else
        {
          MR_String TypeName_33;
          MR_Word TypeModule_34;
          MR_Word RttiTypeCtor_35;
          uint16_t Var_48;
          MR_Word Var_49;
          MR_Word PseudoArgs_60;
          MR_Word Var_75;

          TypeName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_66);
          mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Var_66, (MR_Word) (&backend_libs__pseudo_type_info_scalar_common_2[0]), &TypeModule_34);
          Var_48 = mercury__uint16__det_from_int_1_f_0(Var_65);
          {
            RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RttiTypeCtor_35, 0) = ((MR_Box) (TypeModule_34));
            MR_hl_field(0, RttiTypeCtor_35, 1) = ((MR_Box) (TypeName_33));
            MR_hl_field(0, RttiTypeCtor_35, 2) = ((MR_Box) (MR_Word) (Var_48));
          }
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_75, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_3[0]));
            MR_hl_field(0, Var_75, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3));
            MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_75, 3) = ((MR_Box) (NumUnivQTvars_6));
            MR_hl_field(0, Var_75, 4) = ((MR_Box) (ExistQTvars_7));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Var_75, TypeArgs_26, &PseudoArgs_60);
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_49, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[0]));
            MR_hl_field(0, Var_49, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4));
            MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_49, 3) = ((MR_Box) (PseudoArgs_60));
            MR_hl_field(0, Var_49, 4) = ((MR_Box) (Var_65));
          }
          mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "arity mismatch");
          if ((PseudoArgs_60 == (MR_Word) ((MR_Unsigned) 0U)))
            *PseudoTypeInfo_8 = (MR_Word) ((MR_Word) (RttiTypeCtor_35));
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *PseudoTypeInfo_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (RttiTypeCtor_35));
              MR_hl_field(1, base, 1) = ((MR_Box) (PseudoArgs_60));
            }
        }
      }
      break;
  }
}

void mercury__backend_libs__pseudo_type_info__init(void)
{
}

void mercury__backend_libs__pseudo_type_info__init_type_tables(void)
{
}

void mercury__backend_libs__pseudo_type_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__pseudo_type_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.pseudo_type_info.
