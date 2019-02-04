/*
** Automatically generated from `dense_bitset.m'
** by the Mercury compiler,
** version rotd=2018-01-08
** configured for x86_64-pc-linux-gnu.
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


// :- module dense_bitset.
// :- implementation.

/*
INIT mercury__dense_bitset__init
ENDINIT
*/

#include "dense_bitset.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_FA_TypeInfo_Struct1 dense_bitset__array__ti_array_1builtin__type_ctor_info_int_0;

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static void MR_CALL 
dense_bitset__foldl1__ho2_6_p_0(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr STATE_VARIABLE_Acc_0_12,
  MR_ArrayPtr * STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__foldl2__ho3_6_p_0(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr STATE_VARIABLE_Acc_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Acc_15);

static MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box dense_bitset_scalar_common_1[2][2];




static /* final */ const MR_Box dense_bitset_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 dense_bitset__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct dense_bitset__dense_bitset__type_ctor_info_dense_bitset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (dense_bitset____Unify____dense_bitset_0_0_10001)),
  ((MR_Box) (dense_bitset____Compare____dense_bitset_0_0_10001)),
  (MR_String) "dense_bitset",
  (MR_String) "dense_bitset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &dense_bitset__array__ti_array_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &dense_bitset_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__array____Unify____array_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) Cast_HeadVar1_3, (MR_ArrayPtr) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
dense_bitset__foldl_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word P_5,
  MR_ArrayPtr A0_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer Max_8;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A0_6, &Max_8);
    dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2((MR_Integer) 0, Max_8, P_5, A0_6, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Min_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_Min_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2((MR_Integer) 0, Min_7, P_9, A0_10, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (Min_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Min_7 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      Min_7 = next_value_of_Min_7;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (B_7 <= (MR_Integer) 31);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer Word_12;
      MR_Box STATE_VARIABLE_Acc_22_22;
      MR_Integer Var_23;
      MR_Box conv0_Word_12;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_B_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A0_10, W_8, &conv0_Word_12);
      Word_12 = ((MR_Integer) conv0_Word_12);
      Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, B_7);
      Var_17 = (Var_18 & Word_12);
      succeeded = (Var_17 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Integer I_13;
        MR_Integer Var_20 = (W_8 * (MR_Integer) 32);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

        I_13 = (B_7 + Var_20);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
        func_1(((MR_Box) P_9), ((MR_Box) (I_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_22_22);
      }
      else
        STATE_VARIABLE_Acc_22_22 = STATE_VARIABLE_Acc_0_14;
      Var_23 = (B_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_B_7 = Var_23;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_22_22;
      B_7 = next_value_of_B_7;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
dense_bitset__foldl_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word P_5,
  MR_ArrayPtr A0_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer Max_8;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A0_6, &Max_8);
    dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1((MR_Integer) 0, Max_8, P_5, A0_6, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Min_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_Min_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1((MR_Integer) 0, Min_7, P_9, A0_10, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (Min_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Min_7 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      Min_7 = next_value_of_Min_7;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (B_7 <= (MR_Integer) 31);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer Word_12;
      MR_Box STATE_VARIABLE_Acc_22_22;
      MR_Integer Var_23;
      MR_Box conv0_Word_12;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_B_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A0_10, W_8, &conv0_Word_12);
      Word_12 = ((MR_Integer) conv0_Word_12);
      Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, B_7);
      Var_17 = (Var_18 & Word_12);
      succeeded = (Var_17 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Integer I_13;
        MR_Integer Var_20 = (W_8 * (MR_Integer) 32);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

        I_13 = (B_7 + Var_20);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
        func_1(((MR_Box) P_9), ((MR_Box) (I_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_22_22);
      }
      else
        STATE_VARIABLE_Acc_22_22 = STATE_VARIABLE_Acc_0_14;
      Var_23 = (B_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_B_7 = Var_23;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_22_22;
      B_7 = next_value_of_B_7;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
dense_bitset__foldl_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word P_5,
  MR_ArrayPtr A0_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer Max_8;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A0_6, &Max_8);
    dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0((MR_Integer) 0, Max_8, P_5, A0_6, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Min_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_Min_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

      dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0((MR_Integer) 0, Min_7, P_9, A0_10, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (Min_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Min_7 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      Min_7 = next_value_of_Min_7;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_Word P_9,
  MR_ArrayPtr A0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (B_7 <= (MR_Integer) 31);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer Word_12;
      MR_Box STATE_VARIABLE_Acc_22_22;
      MR_Integer Var_23;
      MR_Box conv0_Word_12;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_B_7;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A0_10, W_8, &conv0_Word_12);
      Word_12 = ((MR_Integer) conv0_Word_12);
      Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, B_7);
      Var_17 = (Var_18 & Word_12);
      succeeded = (Var_17 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Integer I_13;
        MR_Integer Var_20 = (W_8 * (MR_Integer) 32);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

        I_13 = (B_7 + Var_20);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
        func_1(((MR_Box) P_9), ((MR_Box) (I_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_22_22);
      }
      else
        STATE_VARIABLE_Acc_22_22 = STATE_VARIABLE_Acc_0_14;
      Var_23 = (B_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_B_7 = Var_23;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_22_22;
      B_7 = next_value_of_B_7;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__union_2_f_0(
  MR_ArrayPtr A_4,
  MR_ArrayPtr B_5)
{
  {
    MR_ArrayPtr C_6;
    MR_Integer Max_24;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A_4, &Max_24);
    dense_bitset__foldl1__ho2_6_p_0((MR_Integer) 0, Max_24, A_4, B_5, &C_6);
    return C_6;
  }
}

static void MR_CALL 
dense_bitset__foldl1__ho2_6_p_0(
  MR_Integer Min_7,
  MR_Integer Max_8,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr STATE_VARIABLE_Acc_0_12,
  MR_ArrayPtr * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Min_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_ArrayPtr STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_Min_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Acc_0_12;

      dense_bitset__foldl2__ho3_6_p_0((MR_Integer) 0, Min_7, A0_10, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (Min_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Min_7 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      Min_7 = next_value_of_Min_7;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    break;
  }
}

static void MR_CALL 
dense_bitset__foldl2__ho3_6_p_0(
  MR_Integer B_7,
  MR_Integer W_8,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr STATE_VARIABLE_Acc_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (B_7 <= (MR_Integer) 31);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer Word_12;
      MR_ArrayPtr STATE_VARIABLE_Acc_22_22;
      MR_Integer Var_23;
      MR_Box conv0_Word_12;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_B_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) A0_10, W_8, &conv0_Word_12);
      Word_12 = ((MR_Integer) conv0_Word_12);
      Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, B_7);
      Var_17 = (Var_18 & Word_12);
      succeeded = (Var_17 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Integer I_13;
        MR_Integer Var_20 = (W_8 * (MR_Integer) 32);

        I_13 = (B_7 + Var_20);
        STATE_VARIABLE_Acc_22_22 = dense_bitset__insert_2_f_0(STATE_VARIABLE_Acc_0_14, I_13);
      }
      else
        STATE_VARIABLE_Acc_22_22 = STATE_VARIABLE_Acc_0_14;
      Var_23 = (B_7 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_B_7 = Var_23;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_22_22;
      B_7 = next_value_of_B_7;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__delete_2_f_0(
  MR_ArrayPtr A0_4,
  MR_Integer I_5)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr A_6;
    MR_Word TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer Max_7;

    mercury__array__max_2_p_0(TypeCtorInfo_18_18, (MR_ArrayPtr) A0_4, &Max_7);
    succeeded = (I_5 > Max_7);
    if (succeeded)
      A_6 = A0_4;
    else
    {
      succeeded = (I_5 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Word0_8;
        MR_Integer Word_9;
        MR_Integer Var_11;
        MR_Integer Var_12;
        MR_Integer Var_13;
        MR_Integer Var_14;
        MR_Integer Var_23;
        MR_Box conv0_Word0_8;
        MR_ArrayPtr conv1_A_6;

        Var_11 = mercury__int__f_47_47_2_f_0(I_5, (MR_Integer) 32);
        mercury__array__lookup_3_p_0(TypeCtorInfo_18_18, (MR_ArrayPtr) A0_4, Var_11, &conv0_Word0_8);
        Word0_8 = ((MR_Integer) conv0_Word0_8);
        Var_23 = (I_5 & (MR_Integer) 31);
        Var_13 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Var_23);
        Var_12 = ~(Var_13);
        Word_9 = (Word0_8 & Var_12);
        Var_14 = mercury__int__f_47_47_2_f_0(I_5, (MR_Integer) 32);
        mercury__array__set_4_p_0(TypeCtorInfo_18_18, Var_14, ((MR_Box) (Word_9)), (MR_ArrayPtr) A0_4, &conv1_A_6);
        A_6 = (MR_ArrayPtr) conv1_A_6;
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "dense_bitset", (MR_String) "function \140dense_bitset.delete\'/2", (MR_String) "cannot use indexes < 0");
      }
    }
    return A_6;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__insert_2_f_0(
  MR_ArrayPtr A0_4,
  MR_Integer I_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_ArrayPtr A_6;
    MR_Word TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer Max_7;
    MR_Integer Var_11;

    // setup for model_det tailcalls optimized into a loop
    mercury__array__max_2_p_0(TypeCtorInfo_24_24, (MR_ArrayPtr) A0_4, &Max_7);
    Var_11 = mercury__int__f_47_47_2_f_0(I_5, (MR_Integer) 32);
    succeeded = (Var_11 > Max_7);
    if (succeeded)
    {
      MR_ArrayPtr A1_8;
      MR_Integer Var_12;
      MR_Integer Var_14 = (Max_7 + (MR_Integer) 1);
      MR_ArrayPtr conv0_A1_8;
      MR_ArrayPtr next_value_of_A0_4;

      Var_12 = (Var_14 * (MR_Integer) 2);
      mercury__array__resize_4_p_0(TypeCtorInfo_24_24, Var_12, ((MR_Box) ((MR_Integer) 0)), (MR_ArrayPtr) A0_4, &conv0_A1_8);
      A1_8 = (MR_ArrayPtr) conv0_A1_8;
      // direct tailcall eliminated
      next_value_of_A0_4 = A1_8;
      A0_4 = next_value_of_A0_4;
      continue;
    }
    else
    {
      succeeded = (I_5 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Word0_9;
        MR_Integer Word_10;
        MR_Integer Var_18;
        MR_Integer Var_19;
        MR_Integer Var_20;
        MR_Integer Var_31;
        MR_Box conv1_Word0_9;
        MR_ArrayPtr conv2_A_6;

        Var_18 = mercury__int__f_47_47_2_f_0(I_5, (MR_Integer) 32);
        mercury__array__lookup_3_p_0(TypeCtorInfo_24_24, (MR_ArrayPtr) A0_4, Var_18, &conv1_Word0_9);
        Word0_9 = ((MR_Integer) conv1_Word0_9);
        Var_31 = (I_5 & (MR_Integer) 31);
        Var_19 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Var_31);
        Word_10 = (Word0_9 | Var_19);
        Var_20 = mercury__int__f_47_47_2_f_0(I_5, (MR_Integer) 32);
        mercury__array__set_4_p_0(TypeCtorInfo_24_24, Var_20, ((MR_Box) (Word_10)), (MR_ArrayPtr) A0_4, &conv2_A_6);
        A_6 = (MR_ArrayPtr) conv2_A_6;
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "dense_bitset", (MR_String) "function \140dense_bitset.insert\'/2", (MR_String) "cannot use indexes < 0");
      }
    }
    return A_6;
    break;
  }
}

MR_bool MR_CALL 
dense_bitset__member_2_p_0(
  MR_Integer I_3,
  MR_ArrayPtr A_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer Max_5;
    MR_Integer Word_6;
    MR_Integer Var_7;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_17;
    MR_Integer Var_19;
    MR_Box conv0_Word_6;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer Var_21;
    MR_Integer Var_22;
    MR_Integer Var_23;

    mercury__array__max_2_p_0(TypeCtorInfo_13_13, (MR_ArrayPtr) A_4, &Max_5);
    Var_7 = mercury__int__f_47_47_2_f_0(I_3, (MR_Integer) 32);
    succeeded = (Var_7 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 32;
      Var_9 = mercury__int__f_47_47_2_f_0(I_3, Var_17);
      succeeded = (Var_9 <= Max_5);
      if (succeeded)
      {
        Var_19 = (MR_Integer) 32;
        Var_10 = mercury__int__f_47_47_2_f_0(I_3, Var_19);
        mercury__array__lookup_3_p_0(TypeCtorInfo_13_13, (MR_ArrayPtr) A_4, Var_10, &conv0_Word_6);
        Word_6 = ((MR_Integer) conv0_Word_6);
        Var_21 = (MR_Integer) 1;
        Var_23 = (MR_Integer) 31;
        Var_22 = (I_3 & Var_23);
        Var_12 = mercury__int__f_60_60_2_f_0(Var_21, Var_22);
        Var_11 = (Var_12 & Word_6);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
      }
    }
    return succeeded;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__init_0_f_0(void)
{
  {
    MR_ArrayPtr HeadVar__1_1;
    MR_ArrayPtr conv0_HeadVar__1_1;

    conv0_HeadVar__1_1 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) MR_mkword(MR_mktag(1), &dense_bitset_scalar_common_1[1]));
    HeadVar__1_1 = (MR_ArrayPtr) conv0_HeadVar__1_1;
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = dense_bitset____Unify____dense_bitset_0_0(((MR_ArrayPtr) wrapper_arg_1), ((MR_ArrayPtr) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    dense_bitset____Compare____dense_bitset_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) wrapper_arg_2), ((MR_ArrayPtr) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__dense_bitset__init(void)
{
}

void mercury__dense_bitset__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&dense_bitset__dense_bitset__type_ctor_info_dense_bitset_0);
}

void mercury__dense_bitset__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__dense_bitset__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module dense_bitset.
