/*
** Automatically generated from `array_util.m'
** by the Mercury compiler,
** version rotd-2020-03-09
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


// :- module array_util.
// :- implementation.

/*
INIT mercury__array_util__init
ENDINIT
*/

#include "array_util.mih"


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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static void MR_CALL 
array_util__array_map_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Integer N_6,
  MR_Integer Size_7,
  MR_Word Closure_8,
  MR_ArrayPtr STATE_VARIABLE_Array_0_12,
  MR_ArrayPtr * STATE_VARIABLE_Array_13);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Integer N_11,
  MR_Integer Max_12,
  MR_Word P_13,
  MR_ArrayPtr Array_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(
  MR_Word TypeInfo_for_T_26,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_16,
  MR_Box * STATE_VARIABLE_AccU_17,
  MR_Box STATE_VARIABLE_AccV_0_18,
  MR_Box * STATE_VARIABLE_AccV_19);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(
  MR_Word TypeInfo_for_T_26,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_16,
  MR_Box * STATE_VARIABLE_AccU_17,
  MR_Box STATE_VARIABLE_AccV_0_18,
  MR_Box * STATE_VARIABLE_AccV_19);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_16,
  MR_Box * STATE_VARIABLE_AccU_17,
  MR_Box STATE_VARIABLE_AccV_0_18,
  MR_Box * STATE_VARIABLE_AccV_19);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Integer N_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_AccU_0_13,
  MR_Box * STATE_VARIABLE_AccU_14);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Integer N_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_AccU_0_13,
  MR_Box * STATE_VARIABLE_AccU_14);







#include "array.mh"
#include "array_util.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
array_util__array_map_from_1_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word P_4,
  MR_ArrayPtr STATE_VARIABLE_AccU_0_7,
  MR_ArrayPtr * STATE_VARIABLE_AccU_8)
{
  {
    MR_Integer Max_6;

    mercury__array__max_2_p_0(TypeInfo_for_T_11, STATE_VARIABLE_AccU_0_7, &Max_6);
    array_util__array_map_5_p_0(TypeInfo_for_T_11, (MR_Integer) 1, Max_6, P_4, STATE_VARIABLE_AccU_0_7, STATE_VARIABLE_AccU_8);
  }
}

void MR_CALL 
array_util__array_map_from_0_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word P_4,
  MR_ArrayPtr STATE_VARIABLE_AccU_0_7,
  MR_ArrayPtr * STATE_VARIABLE_AccU_8)
{
  {
    MR_Integer Max_6;

    mercury__array__max_2_p_0(TypeInfo_for_T_11, STATE_VARIABLE_AccU_0_7, &Max_6);
    array_util__array_map_5_p_0(TypeInfo_for_T_11, (MR_Integer) 0, Max_6, P_4, STATE_VARIABLE_AccU_0_7, STATE_VARIABLE_AccU_8);
  }
}

static void MR_CALL 
array_util__array_map_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Integer N_6,
  MR_Integer Size_7,
  MR_Word Closure_8,
  MR_ArrayPtr STATE_VARIABLE_Array_0_12,
  MR_ArrayPtr * STATE_VARIABLE_Array_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_6 >= Size_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Array_13 = STATE_VARIABLE_Array_0_12;
    else
    {
      MR_Box OldElem_10;
      MR_Box NewElem_11;
      MR_ArrayPtr STATE_VARIABLE_Array_14_14;
      MR_Integer Var_15;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_N_6;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_12;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_18, STATE_VARIABLE_Array_0_12, N_6, &OldElem_10);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_8, (MR_Integer) 1))));
      func_0(((MR_Box) (Closure_8)), OldElem_10, &NewElem_11);
      mercury__array__set_4_p_0(TypeInfo_for_T_18, N_6, NewElem_11, STATE_VARIABLE_Array_0_12, &STATE_VARIABLE_Array_14_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) N_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_6 = Var_15;
      next_value_of_STATE_VARIABLE_Array_0_12 = STATE_VARIABLE_Array_14_14;
      N_6 = next_value_of_N_6;
      STATE_VARIABLE_Array_0_12 = next_value_of_STATE_VARIABLE_Array_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
array_util__array_list_foldl2_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeInfo_for_U_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_AccU_0_3,
  MR_ArrayPtr * STATE_VARIABLE_AccU_4,
  MR_ArrayPtr STATE_VARIABLE_AccV_0_5,
  MR_ArrayPtr * STATE_VARIABLE_AccV_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AccV_6 = STATE_VARIABLE_AccV_0_5;
      *STATE_VARIABLE_AccU_4 = STATE_VARIABLE_AccU_0_3;
    }
    else
    {
      MR_Box X_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Xs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_AccU_23_23;
      MR_ArrayPtr STATE_VARIABLE_AccV_24_24;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Box conv2_STATE_VARIABLE_AccU_23_23;
      MR_Box conv1_STATE_VARIABLE_AccV_24_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_AccU_0_3;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_AccV_0_5;

      func_0(((MR_Box) (P_1)), X_15, ((MR_Box) (STATE_VARIABLE_AccU_0_3)), &conv2_STATE_VARIABLE_AccU_23_23, ((MR_Box) (STATE_VARIABLE_AccV_0_5)), &conv1_STATE_VARIABLE_AccV_24_24);
      STATE_VARIABLE_AccU_23_23 = ((MR_ArrayPtr) (conv2_STATE_VARIABLE_AccU_23_23));
      STATE_VARIABLE_AccV_24_24 = ((MR_ArrayPtr) (conv1_STATE_VARIABLE_AccV_24_24));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Xs_16;
      next_value_of_STATE_VARIABLE_AccU_0_3 = STATE_VARIABLE_AccU_23_23;
      next_value_of_STATE_VARIABLE_AccV_0_5 = STATE_VARIABLE_AccV_24_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_AccU_0_3 = next_value_of_STATE_VARIABLE_AccU_0_3;
      STATE_VARIABLE_AccV_0_5 = next_value_of_STATE_VARIABLE_AccV_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
array_util__array_list_foldl_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_Acc_0_3,
  MR_ArrayPtr * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Box X_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Xs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_Acc_15_15;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
      MR_Box conv1_STATE_VARIABLE_Acc_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), X_10, ((MR_Box) (STATE_VARIABLE_Acc_0_3)), &conv1_STATE_VARIABLE_Acc_15_15);
      STATE_VARIABLE_Acc_15_15 = ((MR_ArrayPtr) (conv1_STATE_VARIABLE_Acc_15_15));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Xs_11;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
array_util__array_foldl3_from_1_8_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_U_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_W_28,
  MR_Word P_9,
  MR_ArrayPtr Array_10,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_Integer Max_14;

    mercury__array__max_2_p_0(TypeInfo_for_T_25, Array_10, &Max_14);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(TypeInfo_for_T_25, (MR_Integer) 1, Max_14, P_9, Array_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Integer N_11,
  MR_Integer Max_12,
  MR_Word P_13,
  MR_ArrayPtr Array_14,
  MR_Box STATE_VARIABLE_A_0_19,
  MR_Box * STATE_VARIABLE_A_20,
  MR_Box STATE_VARIABLE_B_0_21,
  MR_Box * STATE_VARIABLE_B_22,
  MR_Box STATE_VARIABLE_C_0_23,
  MR_Box * STATE_VARIABLE_C_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_11 <= Max_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_18;
      MR_Box STATE_VARIABLE_A_25_25;
      MR_Box STATE_VARIABLE_B_26_26;
      MR_Box STATE_VARIABLE_C_27_27;
      MR_Integer Var_28;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_N_11;
      MR_Box next_value_of_STATE_VARIABLE_A_0_19;
      MR_Box next_value_of_STATE_VARIABLE_B_0_21;
      MR_Box next_value_of_STATE_VARIABLE_C_0_23;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_33, Array_14, N_11, &E_18);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      func_0(((MR_Box) (P_13)), ((MR_Box) (N_11)), E_18, STATE_VARIABLE_A_0_19, &STATE_VARIABLE_A_25_25, STATE_VARIABLE_B_0_21, &STATE_VARIABLE_B_26_26, STATE_VARIABLE_C_0_23, &STATE_VARIABLE_C_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) N_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_11 = Var_28;
      next_value_of_STATE_VARIABLE_A_0_19 = STATE_VARIABLE_A_25_25;
      next_value_of_STATE_VARIABLE_B_0_21 = STATE_VARIABLE_B_26_26;
      next_value_of_STATE_VARIABLE_C_0_23 = STATE_VARIABLE_C_27_27;
      N_11 = next_value_of_N_11;
      STATE_VARIABLE_A_0_19 = next_value_of_STATE_VARIABLE_A_0_19;
      STATE_VARIABLE_B_0_21 = next_value_of_STATE_VARIABLE_B_0_21;
      STATE_VARIABLE_C_0_23 = next_value_of_STATE_VARIABLE_C_0_23;
      continue;
    }
    else
    {
      *STATE_VARIABLE_C_24 = STATE_VARIABLE_C_0_23;
      *STATE_VARIABLE_B_22 = STATE_VARIABLE_B_0_21;
      *STATE_VARIABLE_A_20 = STATE_VARIABLE_A_0_19;
    }
    break;
  }
}

void MR_CALL 
array_util__array_foldl2_8_p_4(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word TypeInfo_for_V_23,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_15,
  MR_Box * STATE_VARIABLE_AccU_16,
  MR_Box STATE_VARIABLE_AccV_0_17,
  MR_Box * STATE_VARIABLE_AccV_18)
{
  {
    MR_bool succeeded = (N_9 <= Max_10);

    if (succeeded)
    {
      MR_Box E_34;
      MR_Box STATE_VARIABLE_AccU_20_35;
      MR_Box STATE_VARIABLE_AccV_21_36;
      MR_Integer Var_37;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

      mercury__array__lookup_3_p_0(TypeInfo_for_T_21, A_12, N_9, &E_34);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), ((MR_Box) (N_9)), E_34, STATE_VARIABLE_AccU_0_15, &STATE_VARIABLE_AccU_20_35, STATE_VARIABLE_AccV_0_17, &STATE_VARIABLE_AccV_21_36);
      Var_37 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(TypeInfo_for_T_21, Var_37, Max_10, P_11, A_12, STATE_VARIABLE_AccU_20_35, STATE_VARIABLE_AccU_16, STATE_VARIABLE_AccV_21_36, STATE_VARIABLE_AccV_18);
    }
    else
    {
      *STATE_VARIABLE_AccV_18 = STATE_VARIABLE_AccV_0_17;
      *STATE_VARIABLE_AccU_16 = STATE_VARIABLE_AccU_0_15;
    }
  }
}

void MR_CALL 
array_util__array_foldl2_8_p_3(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word TypeInfo_for_V_23,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_15,
  MR_Box * STATE_VARIABLE_AccU_16,
  MR_Box STATE_VARIABLE_AccV_0_17,
  MR_Box * STATE_VARIABLE_AccV_18)
{
  array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(TypeInfo_for_T_21, N_9, Max_10, P_11, A_12, STATE_VARIABLE_AccU_0_15, STATE_VARIABLE_AccU_16, STATE_VARIABLE_AccV_0_17, STATE_VARIABLE_AccV_18);
}

void MR_CALL 
array_util__array_foldl2_8_p_2(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word TypeInfo_for_V_23,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_15,
  MR_Box * STATE_VARIABLE_AccU_16,
  MR_Box STATE_VARIABLE_AccV_0_17,
  MR_Box * STATE_VARIABLE_AccV_18)
{
  {
    MR_bool succeeded = (N_9 <= Max_10);

    if (succeeded)
    {
      MR_Box E_34;
      MR_Box STATE_VARIABLE_AccU_20_35;
      MR_Box STATE_VARIABLE_AccV_21_36;
      MR_Integer Var_37;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

      mercury__array__lookup_3_p_0(TypeInfo_for_T_21, A_12, N_9, &E_34);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), ((MR_Box) (N_9)), E_34, STATE_VARIABLE_AccU_0_15, &STATE_VARIABLE_AccU_20_35, STATE_VARIABLE_AccV_0_17, &STATE_VARIABLE_AccV_21_36);
      Var_37 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(TypeInfo_for_T_21, Var_37, Max_10, P_11, A_12, STATE_VARIABLE_AccU_20_35, STATE_VARIABLE_AccU_16, STATE_VARIABLE_AccV_21_36, STATE_VARIABLE_AccV_18);
    }
    else
    {
      *STATE_VARIABLE_AccV_18 = STATE_VARIABLE_AccV_0_17;
      *STATE_VARIABLE_AccU_16 = STATE_VARIABLE_AccU_0_15;
    }
  }
}

void MR_CALL 
array_util__array_foldl2_8_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word TypeInfo_for_V_23,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_15,
  MR_Box * STATE_VARIABLE_AccU_16,
  MR_Box STATE_VARIABLE_AccV_0_17,
  MR_Box * STATE_VARIABLE_AccV_18)
{
  array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(TypeInfo_for_T_21, N_9, Max_10, P_11, A_12, STATE_VARIABLE_AccU_0_15, STATE_VARIABLE_AccU_16, STATE_VARIABLE_AccV_0_17, STATE_VARIABLE_AccV_18);
}

void MR_CALL 
array_util__array_foldl2_8_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_U_22,
  MR_Word TypeInfo_for_V_23,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_15,
  MR_Box * STATE_VARIABLE_AccU_16,
  MR_Box STATE_VARIABLE_AccV_0_17,
  MR_Box * STATE_VARIABLE_AccV_18)
{
  array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(TypeInfo_for_T_21, N_9, Max_10, P_11, A_12, STATE_VARIABLE_AccU_0_15, STATE_VARIABLE_AccU_16, STATE_VARIABLE_AccV_0_17, STATE_VARIABLE_AccV_18);
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_4(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_U_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13,
  MR_Box STATE_VARIABLE_AccV_0_14,
  MR_Box * STATE_VARIABLE_AccV_15)
{
  {
    MR_bool succeeded;
    MR_Integer Max_11;

    mercury__array__max_2_p_0(TypeInfo_for_T_19, A_8, &Max_11);
    succeeded = ((MR_Integer) 1 <= Max_11);
    if (succeeded)
    {
      MR_Box E_32;
      MR_Box STATE_VARIABLE_AccU_20_33;
      MR_Box STATE_VARIABLE_AccV_21_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

      mercury__array__lookup_3_p_0(TypeInfo_for_T_19, A_8, (MR_Integer) 1, &E_32);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), ((MR_Box) ((MR_Integer) 1)), E_32, STATE_VARIABLE_AccU_0_12, &STATE_VARIABLE_AccU_20_33, STATE_VARIABLE_AccV_0_14, &STATE_VARIABLE_AccV_21_34);
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(TypeInfo_for_T_19, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), Max_11, P_7, A_8, STATE_VARIABLE_AccU_20_33, STATE_VARIABLE_AccU_13, STATE_VARIABLE_AccV_21_34, STATE_VARIABLE_AccV_15);
    }
    else
    {
      *STATE_VARIABLE_AccV_15 = STATE_VARIABLE_AccV_0_14;
      *STATE_VARIABLE_AccU_13 = STATE_VARIABLE_AccU_0_12;
    }
  }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_3(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_U_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13,
  MR_Box STATE_VARIABLE_AccV_0_14,
  MR_Box * STATE_VARIABLE_AccV_15)
{
  {
    MR_Integer Max_11;

    mercury__array__max_2_p_0(TypeInfo_for_T_19, A_8, &Max_11);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(TypeInfo_for_T_19, (MR_Integer) 1, Max_11, P_7, A_8, STATE_VARIABLE_AccU_0_12, STATE_VARIABLE_AccU_13, STATE_VARIABLE_AccV_0_14, STATE_VARIABLE_AccV_15);
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(
  MR_Word TypeInfo_for_T_26,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_16,
  MR_Box * STATE_VARIABLE_AccU_17,
  MR_Box STATE_VARIABLE_AccV_0_18,
  MR_Box * STATE_VARIABLE_AccV_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_9 <= Max_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_15;
      MR_Box STATE_VARIABLE_AccU_20_20;
      MR_Box STATE_VARIABLE_AccV_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_N_9;
      MR_Box next_value_of_STATE_VARIABLE_AccU_0_16;
      MR_Box next_value_of_STATE_VARIABLE_AccV_0_18;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_26, A_12, N_9, &E_15);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), ((MR_Box) (N_9)), E_15, STATE_VARIABLE_AccU_0_16, &STATE_VARIABLE_AccU_20_20, STATE_VARIABLE_AccV_0_18, &STATE_VARIABLE_AccV_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_9 = Var_22;
      next_value_of_STATE_VARIABLE_AccU_0_16 = STATE_VARIABLE_AccU_20_20;
      next_value_of_STATE_VARIABLE_AccV_0_18 = STATE_VARIABLE_AccV_21_21;
      N_9 = next_value_of_N_9;
      STATE_VARIABLE_AccU_0_16 = next_value_of_STATE_VARIABLE_AccU_0_16;
      STATE_VARIABLE_AccV_0_18 = next_value_of_STATE_VARIABLE_AccV_0_18;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccV_19 = STATE_VARIABLE_AccV_0_18;
      *STATE_VARIABLE_AccU_17 = STATE_VARIABLE_AccU_0_16;
    }
    break;
  }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_U_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13,
  MR_Box STATE_VARIABLE_AccV_0_14,
  MR_Box * STATE_VARIABLE_AccV_15)
{
  {
    MR_bool succeeded;
    MR_Integer Max_11;

    mercury__array__max_2_p_0(TypeInfo_for_T_19, A_8, &Max_11);
    succeeded = ((MR_Integer) 1 <= Max_11);
    if (succeeded)
    {
      MR_Box E_32;
      MR_Box STATE_VARIABLE_AccU_20_33;
      MR_Box STATE_VARIABLE_AccV_21_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

      mercury__array__lookup_3_p_0(TypeInfo_for_T_19, A_8, (MR_Integer) 1, &E_32);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), ((MR_Box) ((MR_Integer) 1)), E_32, STATE_VARIABLE_AccU_0_12, &STATE_VARIABLE_AccU_20_33, STATE_VARIABLE_AccV_0_14, &STATE_VARIABLE_AccV_21_34);
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(TypeInfo_for_T_19, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), Max_11, P_7, A_8, STATE_VARIABLE_AccU_20_33, STATE_VARIABLE_AccU_13, STATE_VARIABLE_AccV_21_34, STATE_VARIABLE_AccV_15);
    }
    else
    {
      *STATE_VARIABLE_AccV_15 = STATE_VARIABLE_AccV_0_14;
      *STATE_VARIABLE_AccU_13 = STATE_VARIABLE_AccU_0_12;
    }
  }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_U_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13,
  MR_Box STATE_VARIABLE_AccV_0_14,
  MR_Box * STATE_VARIABLE_AccV_15)
{
  {
    MR_Integer Max_11;

    mercury__array__max_2_p_0(TypeInfo_for_T_19, A_8, &Max_11);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(TypeInfo_for_T_19, (MR_Integer) 1, Max_11, P_7, A_8, STATE_VARIABLE_AccU_0_12, STATE_VARIABLE_AccU_13, STATE_VARIABLE_AccV_0_14, STATE_VARIABLE_AccV_15);
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(
  MR_Word TypeInfo_for_T_26,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_16,
  MR_Box * STATE_VARIABLE_AccU_17,
  MR_Box STATE_VARIABLE_AccV_0_18,
  MR_Box * STATE_VARIABLE_AccV_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_9 <= Max_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_15;
      MR_Box STATE_VARIABLE_AccU_20_20;
      MR_Box STATE_VARIABLE_AccV_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_N_9;
      MR_Box next_value_of_STATE_VARIABLE_AccU_0_16;
      MR_Box next_value_of_STATE_VARIABLE_AccV_0_18;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_26, A_12, N_9, &E_15);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), ((MR_Box) (N_9)), E_15, STATE_VARIABLE_AccU_0_16, &STATE_VARIABLE_AccU_20_20, STATE_VARIABLE_AccV_0_18, &STATE_VARIABLE_AccV_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_9 = Var_22;
      next_value_of_STATE_VARIABLE_AccU_0_16 = STATE_VARIABLE_AccU_20_20;
      next_value_of_STATE_VARIABLE_AccV_0_18 = STATE_VARIABLE_AccV_21_21;
      N_9 = next_value_of_N_9;
      STATE_VARIABLE_AccU_0_16 = next_value_of_STATE_VARIABLE_AccU_0_16;
      STATE_VARIABLE_AccV_0_18 = next_value_of_STATE_VARIABLE_AccV_0_18;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccV_19 = STATE_VARIABLE_AccV_0_18;
      *STATE_VARIABLE_AccU_17 = STATE_VARIABLE_AccU_0_16;
    }
    break;
  }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_U_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13,
  MR_Box STATE_VARIABLE_AccV_0_14,
  MR_Box * STATE_VARIABLE_AccV_15)
{
  {
    MR_Integer Max_11;

    mercury__array__max_2_p_0(TypeInfo_for_T_19, A_8, &Max_11);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(TypeInfo_for_T_19, (MR_Integer) 1, Max_11, P_7, A_8, STATE_VARIABLE_AccU_0_12, STATE_VARIABLE_AccU_13, STATE_VARIABLE_AccV_0_14, STATE_VARIABLE_AccV_15);
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Integer N_9,
  MR_Integer Max_10,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_AccU_0_16,
  MR_Box * STATE_VARIABLE_AccU_17,
  MR_Box STATE_VARIABLE_AccV_0_18,
  MR_Box * STATE_VARIABLE_AccV_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_9 <= Max_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_15;
      MR_Box STATE_VARIABLE_AccU_20_20;
      MR_Box STATE_VARIABLE_AccV_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_N_9;
      MR_Box next_value_of_STATE_VARIABLE_AccU_0_16;
      MR_Box next_value_of_STATE_VARIABLE_AccV_0_18;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_26, A_12, N_9, &E_15);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), ((MR_Box) (N_9)), E_15, STATE_VARIABLE_AccU_0_16, &STATE_VARIABLE_AccU_20_20, STATE_VARIABLE_AccV_0_18, &STATE_VARIABLE_AccV_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_9 = Var_22;
      next_value_of_STATE_VARIABLE_AccU_0_16 = STATE_VARIABLE_AccU_20_20;
      next_value_of_STATE_VARIABLE_AccV_0_18 = STATE_VARIABLE_AccV_21_21;
      N_9 = next_value_of_N_9;
      STATE_VARIABLE_AccU_0_16 = next_value_of_STATE_VARIABLE_AccU_0_16;
      STATE_VARIABLE_AccV_0_18 = next_value_of_STATE_VARIABLE_AccV_0_18;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccV_19 = STATE_VARIABLE_AccV_0_18;
      *STATE_VARIABLE_AccU_17 = STATE_VARIABLE_AccU_0_16;
    }
    break;
  }
}

void MR_CALL 
array_util__array_foldl_6_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Integer N_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13)
{
  {
    MR_bool succeeded = (N_7 <= Max_8);

    if (succeeded)
    {
      MR_Box E_24;
      MR_Box STATE_VARIABLE_AccU_15_25;
      MR_Integer Var_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__array__lookup_3_p_0(TypeInfo_for_T_15, A_10, N_7, &E_24);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), ((MR_Box) (N_7)), E_24, STATE_VARIABLE_AccU_0_12, &STATE_VARIABLE_AccU_15_25);
      Var_26 = (MR_Integer) ((MR_Unsigned) N_7 + (MR_Unsigned) 1);
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(TypeInfo_for_T_15, Var_26, Max_8, P_9, A_10, STATE_VARIABLE_AccU_15_25, STATE_VARIABLE_AccU_13);
    }
    else
      *STATE_VARIABLE_AccU_13 = STATE_VARIABLE_AccU_0_12;
  }
}

void MR_CALL 
array_util__array_foldl_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Integer N_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13)
{
  array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(TypeInfo_for_T_15, N_7, Max_8, P_9, A_10, STATE_VARIABLE_AccU_0_12, STATE_VARIABLE_AccU_13);
}

void MR_CALL 
array_util__array_foldl_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Integer N_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_AccU_0_12,
  MR_Box * STATE_VARIABLE_AccU_13)
{
  array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(TypeInfo_for_T_15, N_7, Max_8, P_9, A_10, STATE_VARIABLE_AccU_0_12, STATE_VARIABLE_AccU_13);
}

void MR_CALL 
array_util__array_foldl_from_0_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_AccU_0_9,
  MR_Box * STATE_VARIABLE_AccU_10)
{
  {
    MR_bool succeeded;
    MR_Integer Max_8;

    mercury__array__max_2_p_0(TypeInfo_for_T_13, A_6, &Max_8);
    succeeded = ((MR_Integer) 0 <= Max_8);
    if (succeeded)
    {
      MR_Box E_22;
      MR_Box STATE_VARIABLE_AccU_15_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__array__lookup_3_p_0(TypeInfo_for_T_13, A_6, (MR_Integer) 0, &E_22);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
      func_0(((MR_Box) (P_5)), ((MR_Box) ((MR_Integer) 0)), E_22, STATE_VARIABLE_AccU_0_9, &STATE_VARIABLE_AccU_15_23);
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(TypeInfo_for_T_13, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), Max_8, P_5, A_6, STATE_VARIABLE_AccU_15_23, STATE_VARIABLE_AccU_10);
    }
    else
      *STATE_VARIABLE_AccU_10 = STATE_VARIABLE_AccU_0_9;
  }
}

void MR_CALL 
array_util__array_foldl_from_0_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_AccU_0_9,
  MR_Box * STATE_VARIABLE_AccU_10)
{
  {
    MR_Integer Max_8;

    mercury__array__max_2_p_0(TypeInfo_for_T_13, A_6, &Max_8);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(TypeInfo_for_T_13, (MR_Integer) 0, Max_8, P_5, A_6, STATE_VARIABLE_AccU_0_9, STATE_VARIABLE_AccU_10);
  }
}

void MR_CALL 
array_util__array_foldl_from_0_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_AccU_0_9,
  MR_Box * STATE_VARIABLE_AccU_10)
{
  {
    MR_Integer Max_8;

    mercury__array__max_2_p_0(TypeInfo_for_T_13, A_6, &Max_8);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(TypeInfo_for_T_13, (MR_Integer) 0, Max_8, P_5, A_6, STATE_VARIABLE_AccU_0_9, STATE_VARIABLE_AccU_10);
  }
}

void MR_CALL 
array_util__array_foldl_from_1_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_AccU_0_9,
  MR_Box * STATE_VARIABLE_AccU_10)
{
  {
    MR_bool succeeded;
    MR_Integer Max_8;

    mercury__array__max_2_p_0(TypeInfo_for_T_13, A_6, &Max_8);
    succeeded = ((MR_Integer) 1 <= Max_8);
    if (succeeded)
    {
      MR_Box E_22;
      MR_Box STATE_VARIABLE_AccU_15_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__array__lookup_3_p_0(TypeInfo_for_T_13, A_6, (MR_Integer) 1, &E_22);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
      func_0(((MR_Box) (P_5)), ((MR_Box) ((MR_Integer) 1)), E_22, STATE_VARIABLE_AccU_0_9, &STATE_VARIABLE_AccU_15_23);
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(TypeInfo_for_T_13, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), Max_8, P_5, A_6, STATE_VARIABLE_AccU_15_23, STATE_VARIABLE_AccU_10);
    }
    else
      *STATE_VARIABLE_AccU_10 = STATE_VARIABLE_AccU_0_9;
  }
}

void MR_CALL 
array_util__array_foldl_from_1_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_AccU_0_9,
  MR_Box * STATE_VARIABLE_AccU_10)
{
  {
    MR_Integer Max_8;

    mercury__array__max_2_p_0(TypeInfo_for_T_13, A_6, &Max_8);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(TypeInfo_for_T_13, (MR_Integer) 1, Max_8, P_5, A_6, STATE_VARIABLE_AccU_0_9, STATE_VARIABLE_AccU_10);
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Integer N_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_AccU_0_13,
  MR_Box * STATE_VARIABLE_AccU_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_12;
      MR_Box STATE_VARIABLE_AccU_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_N_7;
      MR_Box next_value_of_STATE_VARIABLE_AccU_0_13;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_19, A_10, N_7, &E_12);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), ((MR_Box) (N_7)), E_12, STATE_VARIABLE_AccU_0_13, &STATE_VARIABLE_AccU_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) N_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_7 = Var_16;
      next_value_of_STATE_VARIABLE_AccU_0_13 = STATE_VARIABLE_AccU_15_15;
      N_7 = next_value_of_N_7;
      STATE_VARIABLE_AccU_0_13 = next_value_of_STATE_VARIABLE_AccU_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_AccU_14 = STATE_VARIABLE_AccU_0_13;
    break;
  }
}

void MR_CALL 
array_util__array_foldl_from_1_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_AccU_0_9,
  MR_Box * STATE_VARIABLE_AccU_10)
{
  {
    MR_Integer Max_8;

    mercury__array__max_2_p_0(TypeInfo_for_T_13, A_6, &Max_8);
    array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(TypeInfo_for_T_13, (MR_Integer) 1, Max_8, P_5, A_6, STATE_VARIABLE_AccU_0_9, STATE_VARIABLE_AccU_10);
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Integer N_7,
  MR_Integer Max_8,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_AccU_0_13,
  MR_Box * STATE_VARIABLE_AccU_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_12;
      MR_Box STATE_VARIABLE_AccU_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_N_7;
      MR_Box next_value_of_STATE_VARIABLE_AccU_0_13;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_19, A_10, N_7, &E_12);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), ((MR_Box) (N_7)), E_12, STATE_VARIABLE_AccU_0_13, &STATE_VARIABLE_AccU_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) N_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_7 = Var_16;
      next_value_of_STATE_VARIABLE_AccU_0_13 = STATE_VARIABLE_AccU_15_15;
      N_7 = next_value_of_N_7;
      STATE_VARIABLE_AccU_0_13 = next_value_of_STATE_VARIABLE_AccU_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_AccU_14 = STATE_VARIABLE_AccU_0_13;
    break;
  }
}

MR_Box MR_CALL 
array_util__u_1_f_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Box HeadVar__2_2;

{
#define MR_PROC_LABEL array_util__u_1_f_0

	MR_Word A;
	MR_Word B;

	A = (MR_Word) HeadVar__1_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 HeadVar__2_2  = (MR_Box) B;
}
    return HeadVar__2_2;
  }
}

void mercury__array_util__init(void)
{
}

void mercury__array_util__init_type_tables(void)
{
}

void mercury__array_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__array_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module array_util.
