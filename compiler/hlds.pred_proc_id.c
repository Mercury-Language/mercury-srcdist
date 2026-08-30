/*
** Automatically generated from `pred_proc_id.m'
** by the Mercury compiler,
** version rotd-2026-08-30
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


// :- module hlds.pred_proc_id.
// :- implementation.

/*
INIT mercury__hlds__pred_proc_id__init
ENDINIT
*/

#include "hlds.pred_proc_id.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
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




static const MR_Integer hlds__pred_proc_id__hlds__pred_proc_id__functor_number_map_pred_id_0[1];

static const MR_NotagFunctorDesc hlds__pred_proc_id__hlds__pred_proc_id__notag_functor_desc_pred_id_0;

static const MR_PseudoTypeInfo hlds__pred_proc_id__hlds__pred_proc_id__field_types_pred_proc_id_0_0[2];

static const MR_DuFunctorDesc hlds__pred_proc_id__hlds__pred_proc_id__du_functor_desc_pred_proc_id_0_0;

static const MR_DuFunctorDescPtr hlds__pred_proc_id__hlds__pred_proc_id__du_stag_ordered_pred_proc_id_0_0[1];

static const MR_DuPtagLayout hlds__pred_proc_id__hlds__pred_proc_id__du_ptag_ordered_pred_proc_id_0[1];

static const MR_DuFunctorDescPtr hlds__pred_proc_id__hlds__pred_proc_id__du_name_ordered_pred_proc_id_0[1];

static const MR_Integer hlds__pred_proc_id__hlds__pred_proc_id__functor_number_map_pred_proc_id_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__pred_proc_id__set_ordlist__ti_set_ordlist_1hlds__pred_proc_id__type_ctor_info_pred_proc_id_0;

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____pred_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_proc_id____Compare____pred_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____pred_proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_proc_id____Compare____pred_proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_proc_id____Compare____proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____scc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_proc_id____Compare____scc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_proc_id_scalar_common_1[1][2];




static /* final */ const MR_Box hlds__pred_proc_id_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0))
  },
};



#include "array.mh"


static const MR_Integer hlds__pred_proc_id__hlds__pred_proc_id__functor_number_map_pred_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__pred_proc_id__hlds__pred_proc_id__notag_functor_desc_pred_id_0 = {
  (MR_String) "pred_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__pred_proc_id____Unify____pred_id_0_0_10001)),
  ((MR_Box) (hlds__pred_proc_id____Compare____pred_id_0_0_10001)),
  (MR_String) "hlds.pred_proc_id",
  (MR_String) "pred_id",
  { &hlds__pred_proc_id__hlds__pred_proc_id__notag_functor_desc_pred_id_0 },
  { &hlds__pred_proc_id__hlds__pred_proc_id__notag_functor_desc_pred_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__pred_proc_id__hlds__pred_proc_id__functor_number_map_pred_id_0,

};

static const MR_PseudoTypeInfo hlds__pred_proc_id__hlds__pred_proc_id__field_types_pred_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_proc_id__hlds__pred_proc_id__du_functor_desc_pred_proc_id_0_0 = {
  (MR_String) "proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_proc_id__hlds__pred_proc_id__field_types_pred_proc_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_proc_id__hlds__pred_proc_id__du_stag_ordered_pred_proc_id_0_0[1] = { &hlds__pred_proc_id__hlds__pred_proc_id__du_functor_desc_pred_proc_id_0_0 };

static const MR_DuPtagLayout hlds__pred_proc_id__hlds__pred_proc_id__du_ptag_ordered_pred_proc_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_proc_id__hlds__pred_proc_id__du_stag_ordered_pred_proc_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_proc_id__hlds__pred_proc_id__du_name_ordered_pred_proc_id_0[1] = { &hlds__pred_proc_id__hlds__pred_proc_id__du_functor_desc_pred_proc_id_0_0 };

static const MR_Integer hlds__pred_proc_id__hlds__pred_proc_id__functor_number_map_pred_proc_id_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_proc_id____Unify____pred_proc_id_0_0_10001)),
  ((MR_Box) (hlds__pred_proc_id____Compare____pred_proc_id_0_0_10001)),
  (MR_String) "hlds.pred_proc_id",
  (MR_String) "pred_proc_id",
  { hlds__pred_proc_id__hlds__pred_proc_id__du_name_ordered_pred_proc_id_0 },
  { hlds__pred_proc_id__hlds__pred_proc_id__du_ptag_ordered_pred_proc_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__pred_proc_id__hlds__pred_proc_id__functor_number_map_pred_proc_id_0,

};

const MR_TypeCtorInfo_Struct hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_proc_id____Unify____proc_id_0_0_10001)),
  ((MR_Box) (hlds__pred_proc_id____Compare____proc_id_0_0_10001)),
  (MR_String) "hlds.pred_proc_id",
  (MR_String) "proc_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__pred_proc_id__set_ordlist__ti_set_ordlist_1hlds__pred_proc_id__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0) }
};

const MR_TypeCtorInfo_Struct hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_scc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_proc_id____Unify____scc_0_0_10001)),
  ((MR_Box) (hlds__pred_proc_id____Compare____scc_0_0_10001)),
  (MR_String) "hlds.pred_proc_id",
  (MR_String) "scc",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__pred_proc_id__set_ordlist__ti_set_ordlist_1hlds__pred_proc_id__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
hlds__pred_proc_id____Compare____scc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_proc_id_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__pred_proc_id____Unify____scc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_proc_id_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__pred_proc_id____Compare____proc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__pred_proc_id____Unify____proc_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
hlds__pred_proc_id____Compare____pred_proc_id_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
hlds__pred_proc_id____Unify____pred_proc_id_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer CastX_11 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_12 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_9 = (MR_Integer) (ArgX1_3);
      MR_Integer ArgY1_10 = (MR_Integer) (ArgY1_4);

      succeeded = (ArgX1_9 == ArgY1_10);
    }
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_proc_id____Compare____pred_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__pred_proc_id____Unify____pred_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_proc_id__in_in_unification_proc_id_1_p_0(
  MR_Integer * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

void MR_CALL 
hlds__pred_proc_id__next_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Integer PredId_3 = (MR_Integer) (HeadVar__1_1);
  MR_Integer NextPredId_4 = (MR_Integer) ((MR_Unsigned) PredId_3 + (MR_Unsigned) 1);

  *HeadVar__2_2 = (MR_Word) (NextPredId_4);
}

MR_Integer MR_CALL 
hlds__pred_proc_id__invalid_proc_id_0_f_0(void)
{
  return (MR_Integer) -1;
}

MR_Word MR_CALL 
hlds__pred_proc_id__invalid_pred_id_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) -1)));
}

MR_Integer MR_CALL 
hlds__pred_proc_id__initial_proc_id_0_f_0(void)
{
  return (MR_Integer) 0;
}

MR_Word MR_CALL 
hlds__pred_proc_id__initial_pred_id_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

MR_Integer MR_CALL 
hlds__pred_proc_id__proc_id_to_int_1_f_0(
  MR_Integer ProcId_3)
{
  MR_Integer ProcId_2 = ProcId_3;

  return ProcId_2;
}

void MR_CALL 
hlds__pred_proc_id__proc_id_to_int_2_p_1(
  MR_Integer * ProcId_3,
  MR_Integer ProcId_2)
{
  *ProcId_3 = ProcId_2;
}

void MR_CALL 
hlds__pred_proc_id__proc_id_to_int_2_p_0(
  MR_Integer ProcId_3,
  MR_Integer * ProcId_2)
{
  *ProcId_2 = ProcId_3;
}

MR_Integer MR_CALL 
hlds__pred_proc_id__pred_id_to_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer PredId_3 = (MR_Integer) (HeadVar__1_1);

  return PredId_3;
}

void MR_CALL 
hlds__pred_proc_id__pred_id_to_int_2_p_1(
  MR_Word * HeadVar__1_1,
  MR_Integer PredId_3)
{
  *HeadVar__1_1 = (MR_Word) (PredId_3);
}

void MR_CALL 
hlds__pred_proc_id__pred_id_to_int_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * PredId_3)
{
  *PredId_3 = (MR_Integer) (HeadVar__1_1);
}

MR_Word MR_CALL 
hlds__pred_proc_id__unshroud_pred_proc_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer PredId_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer ProcId_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word Var_5 = (MR_Word) (PredId_3);

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (ProcId_4));
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
hlds__pred_proc_id__unshroud_proc_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer ProcId_3 = (MR_Integer) (HeadVar__1_1);

  return ProcId_3;
}

MR_Word MR_CALL 
hlds__pred_proc_id__unshroud_pred_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer PredId_3 = (MR_Integer) (HeadVar__1_1);

  HeadVar__2_2 = (MR_Word) (PredId_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__pred_proc_id__shroud_pred_proc_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer PredId_3;
  MR_Integer ProcId_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  PredId_3 = (MR_Integer) (Var_5);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (PredId_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (ProcId_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__pred_proc_id__shroud_proc_id_1_f_0(
  MR_Integer ProcId_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (ProcId_3);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__pred_proc_id__shroud_pred_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer PredId_3 = (MR_Integer) (HeadVar__1_1);

  HeadVar__2_2 = (MR_Word) (PredId_3);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
hlds__pred_proc_id__pred_proc_id_project_proc_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer ProcId_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));

  return ProcId_4;
}

MR_Word MR_CALL 
hlds__pred_proc_id__pred_proc_id_project_pred_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word PredId_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  return PredId_3;
}

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____pred_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_proc_id____Compare____pred_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_proc_id____Compare____pred_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____pred_proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_proc_id____Unify____pred_proc_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_proc_id____Compare____pred_proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_proc_id____Compare____pred_proc_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_proc_id____Unify____proc_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_proc_id____Compare____proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_proc_id____Compare____proc_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_proc_id____Unify____scc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_proc_id____Unify____scc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_proc_id____Compare____scc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_proc_id____Compare____scc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__pred_proc_id__init(void)
{
}

void mercury__hlds__pred_proc_id__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0);
  MR_register_type_ctor_info(&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0);
  MR_register_type_ctor_info(&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0);
  MR_register_type_ctor_info(&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_scc_0);
}

void mercury__hlds__pred_proc_id__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__pred_proc_id__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.pred_proc_id.
