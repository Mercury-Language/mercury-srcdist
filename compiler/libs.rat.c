/*
** Automatically generated from `rat.m'
** by the Mercury compiler,
** version rotd-2023-07-17
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


// :- module libs.rat.
// :- implementation.

/*
INIT mercury__libs__rat__init
ENDINIT
*/

#include "libs.rat.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_PseudoTypeInfo libs__rat__libs__rat__field_types_rat_0_0[2];

static const MR_DuFunctorDesc libs__rat__libs__rat__du_functor_desc_rat_0_0;

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_stag_ordered_rat_0_0[1];

static const MR_DuPtagLayout libs__rat__libs__rat__du_ptag_ordered_rat_0[1];

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_name_ordered_rat_0[1];

static const MR_Integer libs__rat__libs__rat__functor_number_map_rat_0[1];

static MR_Integer MR_CALL 
libs__rat__gcd_loop_2_f_0(
  MR_Integer A_4,
  MR_Integer B_5);

static MR_bool MR_CALL 
libs__rat____Unify____rat_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__rat____Compare____rat_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__rat_scalar_common_1[2][2];

static /* final */ const MR_Box libs__rat_scalar_common_2[1][1];




static /* final */ const MR_Box libs__rat_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box libs__rat_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"


static const MR_PseudoTypeInfo libs__rat__libs__rat__field_types_rat_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc libs__rat__libs__rat__du_functor_desc_rat_0_0 = {
  (MR_String) "r",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__rat__libs__rat__field_types_rat_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_stag_ordered_rat_0_0[1] = { &libs__rat__libs__rat__du_functor_desc_rat_0_0 };

static const MR_DuPtagLayout libs__rat__libs__rat__du_ptag_ordered_rat_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__rat__libs__rat__du_stag_ordered_rat_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_name_ordered_rat_0[1] = { &libs__rat__libs__rat__du_functor_desc_rat_0_0 };

static const MR_Integer libs__rat__libs__rat__functor_number_map_rat_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__rat__libs__rat__type_ctor_info_rat_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__rat____Unify____rat_0_0_10001)),
  ((MR_Box) (libs__rat____Compare____rat_0_0_10001)),
  (MR_String) "libs.rat",
  (MR_String) "rat",
  { libs__rat__libs__rat__du_name_ordered_rat_0 },
  { libs__rat__libs__rat__du_ptag_ordered_rat_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__rat__libs__rat__functor_number_map_rat_0,

};

void MR_CALL 
libs__rat____Compare____rat_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
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
libs__rat____Unify____rat_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

MR_String MR_CALL 
libs__rat__to_rat_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Integer Num_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Denom_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Var_12;
  MR_String Var_19;
  MR_String Var_21;
  MR_String Var_22;
  MR_String Var_29;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__rat_scalar_common_2[0]), Denom_4, &Var_12);
  Var_19 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) ")");
  Var_21 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_19);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__rat_scalar_common_2[0]), Num_3, &Var_22);
  Var_29 = mercury__string__f_43_43_2_f_0(Var_22, Var_21);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "r(", Var_29);
  return HeadVar__2_2;
}

MR_String MR_CALL 
libs__rat__to_arith_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_String HeadVar__2_2;
  MR_Integer Num_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Denom_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = (Num_3 == (MR_Integer) 0);
  if (succeeded)
    HeadVar__2_2 = (MR_String) "0";
  else
  {
    succeeded = (Denom_4 == (MR_Integer) 1);
    if (succeeded)
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__rat_scalar_common_2[0]), Num_3, &HeadVar__2_2);
    else
    {
      MR_String Var_21;
      MR_String Var_29;
      MR_String Var_30;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__rat_scalar_common_2[0]), Denom_4, &Var_21);
      Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_21);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__rat_scalar_common_2[0]), Num_3, &Var_30);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_30, Var_29);
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__rat__abs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer Num_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Denom_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Var_5;

  Var_5 = mercury__int__abs_1_f_0(Num_3);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Denom_4));
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
libs__rat__denom_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Denom_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return Denom_4;
}

MR_Integer MR_CALL 
libs__rat__numer_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Num_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  return Num_3;
}

MR_Word MR_CALL 
libs__rat__f_slash_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Integer Num_7 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
  MR_Integer Denom_8 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 1))));

  succeeded = (Num_7 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Box conv0_Var_6;

    conv0_Var_6 = mercury__require__unexpected_2_f_0((MR_Word) (&libs__rat__libs__rat__type_ctor_info_rat_0), (MR_String) "function \140libs.rat.reciprocal\'/1", (MR_String) "division by zero");
    Var_6 = ((MR_Word) (conv0_Var_6));
  }
  else
  {
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer Var_13;

    succeeded = (Num_7 == (MR_Integer) 0);
    if (succeeded)
      Var_12 = (MR_Integer) 0;
    else
    {
      succeeded = (Num_7 < (MR_Integer) 0);
      if (succeeded)
        Var_12 = (MR_Integer) -1;
      else
        Var_12 = (MR_Integer) 1;
    }
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 * (MR_Unsigned) Denom_8);
    Var_13 = mercury__int__abs_1_f_0(Num_7);
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_6, 0) = ((MR_Box) (Var_11));
      MR_hl_field(0, Var_6, 1) = ((MR_Box) (Var_13));
    }
  }
  HeadVar__3_3 = libs__rat__f_times_2_f_0(X_4, Var_6);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
libs__rat__f_times_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Integer An_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Ad_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Bn_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Bd_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer Num_8;
  MR_Integer Denom_9;
  MR_Integer G1_10;
  MR_Integer G2_11;
  MR_Integer Var_12;
  MR_Integer Var_13;
  MR_Integer Var_14;
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Integer Var_17;
  MR_Integer Var_18;
  MR_Integer Var_19;

  Var_16 = mercury__int__abs_1_f_0(An_4);
  Var_17 = mercury__int__abs_1_f_0(Bd_7);
  G1_10 = libs__rat__gcd_loop_2_f_0(Var_16, Var_17);
  Var_18 = mercury__int__abs_1_f_0(Ad_5);
  Var_19 = mercury__int__abs_1_f_0(Bn_6);
  G2_11 = libs__rat__gcd_loop_2_f_0(Var_18, Var_19);
  Var_12 = mercury__int__f_47_47_2_f_0(An_4, G1_10);
  Var_13 = mercury__int__f_47_47_2_f_0(Bn_6, G2_11);
  Num_8 = (MR_Integer) ((MR_Unsigned) Var_12 * (MR_Unsigned) Var_13);
  Var_14 = mercury__int__f_47_47_2_f_0(Ad_5, G2_11);
  Var_15 = mercury__int__f_47_47_2_f_0(Bd_7, G1_10);
  Denom_9 = (MR_Integer) ((MR_Unsigned) Var_14 * (MR_Unsigned) Var_15);
  succeeded = (Denom_9 == (MR_Integer) 0);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
  else
  {
    succeeded = (Num_8 == (MR_Integer) 0);
    if (succeeded)
      HeadVar__3_3 = (MR_Word) (&libs__rat_scalar_common_1[1]);
    else
    {
      MR_Integer G_20;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Integer Var_28;
      MR_Integer Var_29;
      MR_Integer Var_30;
      MR_Integer Var_31;

      Var_30 = mercury__int__abs_1_f_0(Num_8);
      Var_31 = mercury__int__abs_1_f_0(Denom_9);
      G_20 = libs__rat__gcd_loop_2_f_0(Var_30, Var_31);
      succeeded = (Denom_9 == (MR_Integer) 0);
      if (succeeded)
        Var_27 = (MR_Integer) 0;
      else
      {
        succeeded = (Denom_9 < (MR_Integer) 0);
        if (succeeded)
          Var_27 = (MR_Integer) -1;
        else
          Var_27 = (MR_Integer) 1;
      }
      Var_26 = (MR_Integer) ((MR_Unsigned) Num_8 * (MR_Unsigned) Var_27);
      Var_25 = mercury__int__f_47_47_2_f_0(Var_26, G_20);
      Var_29 = mercury__int__abs_1_f_0(Denom_9);
      Var_28 = mercury__int__f_47_47_2_f_0(Var_29, G_20);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_25));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_28));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
libs__rat__f_minus_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Integer Num_7 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 0))));
  MR_Integer Denom_8 = ((MR_Integer) ((MR_hl_field(0, Y_5, (MR_Integer) 1))));
  MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Num_7);

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) (Denom_8));
  }
  HeadVar__3_3 = libs__rat__f_plus_2_f_0(X_4, Var_6);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
libs__rat__f_minus_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer Num_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Denom_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Var_5 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Num_3);

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Denom_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__rat__f_plus_1_f_0(
  MR_Word Rat_3)
{
  MR_Word Rat_2 = Rat_3;

  return Rat_2;
}

MR_Word MR_CALL 
libs__rat__rat_2_f_0(
  MR_Integer Num_4,
  MR_Integer Denom_5)
{
  MR_bool succeeded = (Denom_5 == (MR_Integer) 0);
  MR_Word HeadVar__3_3;

  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
  else
  {
    succeeded = (Num_4 == (MR_Integer) 0);
    if (succeeded)
      HeadVar__3_3 = (MR_Word) (&libs__rat_scalar_common_1[1]);
    else
    {
      MR_Integer G_6;
      MR_Integer Var_11;
      MR_Integer Var_12;
      MR_Integer Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_17;

      Var_16 = mercury__int__abs_1_f_0(Num_4);
      Var_17 = mercury__int__abs_1_f_0(Denom_5);
      G_6 = libs__rat__gcd_loop_2_f_0(Var_16, Var_17);
      succeeded = (Denom_5 == (MR_Integer) 0);
      if (succeeded)
        Var_13 = (MR_Integer) 0;
      else
      {
        succeeded = (Denom_5 < (MR_Integer) 0);
        if (succeeded)
          Var_13 = (MR_Integer) -1;
        else
          Var_13 = (MR_Integer) 1;
      }
      Var_12 = (MR_Integer) ((MR_Unsigned) Num_4 * (MR_Unsigned) Var_13);
      Var_11 = mercury__int__f_47_47_2_f_0(Var_12, G_6);
      Var_15 = mercury__int__abs_1_f_0(Denom_5);
      Var_14 = mercury__int__f_47_47_2_f_0(Var_15, G_6);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_14));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
libs__rat__rat_1_f_0(
  MR_Integer Int_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Int_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
libs__rat__f_greater_or_equal_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word Diff_6;
  MR_Word Var_7;
  MR_Integer Num_8 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 0))));
  MR_Integer Denom_9 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 1))));
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Num_8);
  MR_Integer Var_12;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (Denom_9));
  }
  Diff_6 = libs__rat__f_plus_2_f_0(X_3, Var_7);
  Var_12 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));
  succeeded = (Var_12 == (MR_Integer) 0);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
    MR_Integer Num_13 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));

    succeeded = (Num_13 < (MR_Integer) 0);
  }
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
libs__rat__f_less_or_equal_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word Diff_6;
  MR_Word Var_7;
  MR_Integer Num_8 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 0))));
  MR_Integer Denom_9 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 1))));
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Num_8);
  MR_Integer Var_12;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (Denom_9));
  }
  Diff_6 = libs__rat__f_plus_2_f_0(X_3, Var_7);
  Var_12 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));
  succeeded = (Var_12 == (MR_Integer) 0);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
    MR_Integer Num_13 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));

    succeeded = (Num_13 < (MR_Integer) 0);
    if (succeeded)
      succeeded = MR_FALSE;
    else
      succeeded = MR_TRUE;
  }
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
libs__rat__f_greater_than_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word Diff_6;
  MR_Word Var_7;
  MR_Integer Num_8 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 0))));
  MR_Integer Denom_9 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 1))));
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Num_8);
  MR_Integer Var_12;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (Denom_9));
  }
  Diff_6 = libs__rat__f_plus_2_f_0(X_3, Var_7);
  Var_12 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));
  succeeded = (Var_12 == (MR_Integer) 0);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
    MR_Integer Num_13 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));

    succeeded = (Num_13 < (MR_Integer) 0);
    if (succeeded)
      succeeded = MR_FALSE;
    else
      succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
libs__rat__f_less_than_2_p_0(
  MR_Word X_3,
  MR_Word Y_4)
{
  MR_bool succeeded;
  MR_Word Diff_6;
  MR_Word Var_7;
  MR_Integer Num_8 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 0))));
  MR_Integer Denom_9 = ((MR_Integer) ((MR_hl_field(0, Y_4, (MR_Integer) 1))));
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Num_8);
  MR_Integer Var_12;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (Denom_9));
  }
  Diff_6 = libs__rat__f_plus_2_f_0(X_3, Var_7);
  Var_12 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));
  succeeded = (Var_12 == (MR_Integer) 0);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
    MR_Integer Num_13 = ((MR_Integer) ((MR_hl_field(0, Diff_6, (MR_Integer) 0))));

    succeeded = (Num_13 < (MR_Integer) 0);
  }
  return succeeded;
}

MR_Word MR_CALL 
libs__rat__f_plus_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Integer An_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Ad_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Bn_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Bd_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Integer Num_8;
  MR_Integer Denom_9;
  MR_Integer CA_11;
  MR_Integer CB_12;
  MR_Integer Var_13;
  MR_Integer Var_14;

  succeeded = (Ad_5 == (MR_Integer) 0);
  if (succeeded)
    Denom_9 = (MR_Integer) 0;
  else
  {
    succeeded = (Bd_7 == (MR_Integer) 0);
    if (succeeded)
      Denom_9 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer Var_19;

      Var_18 = mercury__int__abs_1_f_0(Ad_5);
      Var_19 = mercury__int__abs_1_f_0(Bd_7);
      Var_17 = libs__rat__gcd_loop_2_f_0(Var_18, Var_19);
      Var_16 = mercury__int__f_47_47_2_f_0(Ad_5, Var_17);
      Var_15 = (MR_Integer) ((MR_Unsigned) Var_16 * (MR_Unsigned) Bd_7);
      Denom_9 = mercury__int__abs_1_f_0(Var_15);
    }
  }
  CA_11 = mercury__int__f_47_47_2_f_0(Denom_9, Ad_5);
  CB_12 = mercury__int__f_47_47_2_f_0(Denom_9, Bd_7);
  Var_13 = (MR_Integer) ((MR_Unsigned) An_4 * (MR_Unsigned) CA_11);
  Var_14 = (MR_Integer) ((MR_Unsigned) Bn_6 * (MR_Unsigned) CB_12);
  Num_8 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) Var_14);
  succeeded = (Denom_9 == (MR_Integer) 0);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
  else
  {
    succeeded = (Num_8 == (MR_Integer) 0);
    if (succeeded)
      HeadVar__3_3 = (MR_Word) (&libs__rat_scalar_common_1[1]);
    else
    {
      MR_Integer G_20;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Integer Var_28;
      MR_Integer Var_29;
      MR_Integer Var_30;
      MR_Integer Var_31;

      Var_30 = mercury__int__abs_1_f_0(Num_8);
      Var_31 = mercury__int__abs_1_f_0(Denom_9);
      G_20 = libs__rat__gcd_loop_2_f_0(Var_30, Var_31);
      succeeded = (Denom_9 == (MR_Integer) 0);
      if (succeeded)
        Var_27 = (MR_Integer) 0;
      else
      {
        succeeded = (Denom_9 < (MR_Integer) 0);
        if (succeeded)
          Var_27 = (MR_Integer) -1;
        else
          Var_27 = (MR_Integer) 1;
      }
      Var_26 = (MR_Integer) ((MR_Unsigned) Num_8 * (MR_Unsigned) Var_27);
      Var_25 = mercury__int__f_47_47_2_f_0(Var_26, G_20);
      Var_29 = mercury__int__abs_1_f_0(Denom_9);
      Var_28 = mercury__int__f_47_47_2_f_0(Var_29, G_20);
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_25));
        MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_28));
      }
    }
  }
  return HeadVar__3_3;
}

static MR_Integer MR_CALL 
libs__rat__gcd_loop_2_f_0(
  MR_Integer A_4,
  MR_Integer B_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (B_5 == (MR_Integer) 0);
    MR_Integer HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__3_3 = A_4;
    else
    {
      MR_Integer Var_6;
      MR_Integer next_value_of_A_4;
      MR_Integer next_value_of_B_5;

      Var_6 = mercury__int__rem_2_f_0(A_4, B_5);
      // direct tailcall eliminated
      ;
      next_value_of_A_4 = B_5;
      next_value_of_B_5 = Var_6;
      A_4 = next_value_of_A_4;
      B_5 = next_value_of_B_5;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
libs__rat__zero_0_f_0(void)
{
  return (MR_Word) (&libs__rat_scalar_common_1[1]);
}

MR_Word MR_CALL 
libs__rat__one_0_f_0(void)
{
  return (MR_Word) (&libs__rat_scalar_common_1[0]);
}

static MR_bool MR_CALL 
libs__rat____Unify____rat_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__rat____Unify____rat_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__rat____Compare____rat_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__rat____Compare____rat_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__rat__init(void)
{
}

void mercury__libs__rat__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__rat__libs__rat__type_ctor_info_rat_0);
}

void mercury__libs__rat__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__rat__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.rat.
