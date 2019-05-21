/*
** Automatically generated from `array_util.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module array_util. */
/* :- implementation. */

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




static void MR_CALL 
array_util__array_map_5_p_0(
  MR_Word array_util__TypeInfo_for_T_18,
  MR_Integer array_util__N_6,
  MR_Integer array_util__Size_7,
  MR_Word array_util__Closure_8,
  MR_ArrayPtr array_util__STATE_VARIABLE_Array_0_12,
  MR_ArrayPtr * array_util__STATE_VARIABLE_Array_13);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
  MR_Word array_util__TypeInfo_for_T_33,
  MR_Integer array_util__N_11,
  MR_Integer array_util__Max_12,
  MR_Word array_util__P_13,
  MR_ArrayPtr array_util__Array_14,
  MR_Box array_util__STATE_VARIABLE_A_0_19,
  MR_Box * array_util__STATE_VARIABLE_A_20,
  MR_Box array_util__STATE_VARIABLE_B_0_21,
  MR_Box * array_util__STATE_VARIABLE_B_22,
  MR_Box array_util__STATE_VARIABLE_C_0_23,
  MR_Box * array_util__STATE_VARIABLE_C_24);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(
  MR_Word array_util__TypeInfo_for_T_26,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
  MR_Box * array_util__STATE_VARIABLE_AccV_19);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(
  MR_Word array_util__TypeInfo_for_T_26,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
  MR_Box * array_util__STATE_VARIABLE_AccV_19);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(
  MR_Word array_util__TypeInfo_for_T_26,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
  MR_Box * array_util__STATE_VARIABLE_AccV_19);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Integer array_util__N_7,
  MR_Integer array_util__Max_8,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__A_10,
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
  MR_Box * array_util__STATE_VARIABLE_AccU_14);

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Integer array_util__N_7,
  MR_Integer array_util__Max_8,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__A_10,
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
  MR_Box * array_util__STATE_VARIABLE_AccU_14);







#include "array.mh"
#include "array_util.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
array_util__array_map_from_1_3_p_0(
  MR_Word array_util__TypeInfo_for_T_11,
  MR_Word array_util__P_4,
  MR_ArrayPtr array_util__STATE_VARIABLE_AccU_0_7,
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccU_8)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_6;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_11, array_util__STATE_VARIABLE_AccU_0_7, &array_util__Max_6);
    }
    {
      array_util__array_map_5_p_0(array_util__TypeInfo_for_T_11, (MR_Integer) 1, array_util__Max_6, array_util__P_4, array_util__STATE_VARIABLE_AccU_0_7, array_util__STATE_VARIABLE_AccU_8);
    }
  }
}

void MR_CALL 
array_util__array_map_from_0_3_p_0(
  MR_Word array_util__TypeInfo_for_T_11,
  MR_Word array_util__P_4,
  MR_ArrayPtr array_util__STATE_VARIABLE_AccU_0_7,
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccU_8)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_6;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_11, array_util__STATE_VARIABLE_AccU_0_7, &array_util__Max_6);
    }
    {
      array_util__array_map_5_p_0(array_util__TypeInfo_for_T_11, (MR_Integer) 0, array_util__Max_6, array_util__P_4, array_util__STATE_VARIABLE_AccU_0_7, array_util__STATE_VARIABLE_AccU_8);
    }
  }
}

static void MR_CALL 
array_util__array_map_5_p_0(
  MR_Word array_util__TypeInfo_for_T_18,
  MR_Integer array_util__N_6,
  MR_Integer array_util__Size_7,
  MR_Word array_util__Closure_8,
  MR_ArrayPtr array_util__STATE_VARIABLE_Array_0_12,
  MR_ArrayPtr * array_util__STATE_VARIABLE_Array_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded = (array_util__N_6 >= array_util__Size_7);

        if (array_util__succeeded)
          *array_util__STATE_VARIABLE_Array_13 = array_util__STATE_VARIABLE_Array_0_12;
        else
          {
            MR_Box array_util__OldElem_10;
            MR_Box array_util__NewElem_11;
            MR_ArrayPtr array_util__STATE_VARIABLE_Array_14_14;
            MR_Integer array_util__Var_15;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box *);

            {
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_18, array_util__STATE_VARIABLE_Array_0_12, array_util__N_6, &array_util__OldElem_10);
            }
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__Closure_8, (MR_Integer) 1)));
            {
              array_util__func_0(((MR_Box) array_util__Closure_8), array_util__OldElem_10, &array_util__NewElem_11);
            }
            {
              mercury__array__set_4_p_0(array_util__TypeInfo_for_T_18, array_util__N_6, array_util__NewElem_11, array_util__STATE_VARIABLE_Array_0_12, &array_util__STATE_VARIABLE_Array_14_14);
            }
            array_util__Var_15 = (array_util__N_6 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer array_util__next_value_of_N_6 = array_util__Var_15;
              MR_ArrayPtr array_util__next_value_of_STATE_VARIABLE_Array_0_12 = array_util__STATE_VARIABLE_Array_14_14;

              array_util__STATE_VARIABLE_Array_0_12 = array_util__next_value_of_STATE_VARIABLE_Array_0_12;
              array_util__N_6 = array_util__next_value_of_N_6;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
array_util__array_list_foldl2_6_p_0(
  MR_Word array_util__TypeInfo_for_T_27,
  MR_Word array_util__TypeInfo_for_U_28,
  MR_Word array_util__TypeInfo_for_V_29,
  MR_Word array_util__P_1,
  MR_Word array_util__HeadVar__2_2,
  MR_ArrayPtr array_util__STATE_VARIABLE_AccU_0_3,
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccU_4,
  MR_ArrayPtr array_util__STATE_VARIABLE_AccV_0_5,
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccV_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded;

        if ((array_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *array_util__STATE_VARIABLE_AccV_6 = array_util__STATE_VARIABLE_AccV_0_5;
            *array_util__STATE_VARIABLE_AccU_4 = array_util__STATE_VARIABLE_AccU_0_3;
          }
        else
          {
            MR_Box array_util__X_15 = (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 0));
            MR_Word array_util__Xs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_ArrayPtr array_util__STATE_VARIABLE_AccU_23_23;
            MR_ArrayPtr array_util__STATE_VARIABLE_AccV_24_24;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_1, (MR_Integer) 1)));
            MR_Box array_util__conv2_STATE_VARIABLE_AccU_23_23;
            MR_Box array_util__conv1_STATE_VARIABLE_AccV_24_24;

            {
              array_util__func_0(((MR_Box) array_util__P_1), array_util__X_15, ((MR_Box) (array_util__STATE_VARIABLE_AccU_0_3)), &array_util__conv2_STATE_VARIABLE_AccU_23_23, ((MR_Box) (array_util__STATE_VARIABLE_AccV_0_5)), &array_util__conv1_STATE_VARIABLE_AccV_24_24);
            }
            array_util__STATE_VARIABLE_AccU_23_23 = ((MR_ArrayPtr) array_util__conv2_STATE_VARIABLE_AccU_23_23);
            array_util__STATE_VARIABLE_AccV_24_24 = ((MR_ArrayPtr) array_util__conv1_STATE_VARIABLE_AccV_24_24);
            /* direct tailcall eliminated */
            {
              MR_Word array_util__next_value_of_HeadVar__2_2 = array_util__Xs_16;
              MR_ArrayPtr array_util__next_value_of_STATE_VARIABLE_AccU_0_3 = array_util__STATE_VARIABLE_AccU_23_23;
              MR_ArrayPtr array_util__next_value_of_STATE_VARIABLE_AccV_0_5 = array_util__STATE_VARIABLE_AccV_24_24;

              array_util__STATE_VARIABLE_AccV_0_5 = array_util__next_value_of_STATE_VARIABLE_AccV_0_5;
              array_util__STATE_VARIABLE_AccU_0_3 = array_util__next_value_of_STATE_VARIABLE_AccU_0_3;
              array_util__HeadVar__2_2 = array_util__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
array_util__array_list_foldl_4_p_0(
  MR_Word array_util__TypeInfo_for_T_17,
  MR_Word array_util__TypeInfo_for_U_18,
  MR_Word array_util__P_1,
  MR_Word array_util__HeadVar__2_2,
  MR_ArrayPtr array_util__STATE_VARIABLE_Acc_0_3,
  MR_ArrayPtr * array_util__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded;

        if ((array_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *array_util__STATE_VARIABLE_Acc_4 = array_util__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Box array_util__X_10 = (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 0));
            MR_Word array_util__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_ArrayPtr array_util__STATE_VARIABLE_Acc_15_15;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_1, (MR_Integer) 1)));
            MR_Box array_util__conv1_STATE_VARIABLE_Acc_15_15;

            {
              array_util__func_0(((MR_Box) array_util__P_1), array_util__X_10, ((MR_Box) (array_util__STATE_VARIABLE_Acc_0_3)), &array_util__conv1_STATE_VARIABLE_Acc_15_15);
            }
            array_util__STATE_VARIABLE_Acc_15_15 = ((MR_ArrayPtr) array_util__conv1_STATE_VARIABLE_Acc_15_15);
            /* direct tailcall eliminated */
            {
              MR_Word array_util__next_value_of_HeadVar__2_2 = array_util__Xs_11;
              MR_ArrayPtr array_util__next_value_of_STATE_VARIABLE_Acc_0_3 = array_util__STATE_VARIABLE_Acc_15_15;

              array_util__STATE_VARIABLE_Acc_0_3 = array_util__next_value_of_STATE_VARIABLE_Acc_0_3;
              array_util__HeadVar__2_2 = array_util__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
array_util__array_foldl3_from_1_8_p_0(
  MR_Word array_util__TypeInfo_for_T_25,
  MR_Word array_util__TypeInfo_for_U_26,
  MR_Word array_util__TypeInfo_for_V_27,
  MR_Word array_util__TypeInfo_for_W_28,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__Array_10,
  MR_Box array_util__STATE_VARIABLE_A_0_15,
  MR_Box * array_util__STATE_VARIABLE_A_16,
  MR_Box array_util__STATE_VARIABLE_B_0_17,
  MR_Box * array_util__STATE_VARIABLE_B_18,
  MR_Box array_util__STATE_VARIABLE_C_0_19,
  MR_Box * array_util__STATE_VARIABLE_C_20)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_14;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_25, array_util__Array_10, &array_util__Max_14);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(array_util__TypeInfo_for_T_25, (MR_Integer) 1, array_util__Max_14, array_util__P_9, array_util__Array_10, array_util__STATE_VARIABLE_A_0_15, array_util__STATE_VARIABLE_A_16, array_util__STATE_VARIABLE_B_0_17, array_util__STATE_VARIABLE_B_18, array_util__STATE_VARIABLE_C_0_19, array_util__STATE_VARIABLE_C_20);
    }
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
  MR_Word array_util__TypeInfo_for_T_33,
  MR_Integer array_util__N_11,
  MR_Integer array_util__Max_12,
  MR_Word array_util__P_13,
  MR_ArrayPtr array_util__Array_14,
  MR_Box array_util__STATE_VARIABLE_A_0_19,
  MR_Box * array_util__STATE_VARIABLE_A_20,
  MR_Box array_util__STATE_VARIABLE_B_0_21,
  MR_Box * array_util__STATE_VARIABLE_B_22,
  MR_Box array_util__STATE_VARIABLE_C_0_23,
  MR_Box * array_util__STATE_VARIABLE_C_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded = (array_util__N_11 <= array_util__Max_12);

        if (array_util__succeeded)
          {
            MR_Box array_util__E_18;
            MR_Box array_util__STATE_VARIABLE_A_25_25;
            MR_Box array_util__STATE_VARIABLE_B_26_26;
            MR_Box array_util__STATE_VARIABLE_C_27_27;
            MR_Integer array_util__Var_28;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_33, array_util__Array_14, array_util__N_11, &array_util__E_18);
            }
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_13, (MR_Integer) 1)));
            {
              array_util__func_0(((MR_Box) array_util__P_13), ((MR_Box) (array_util__N_11)), array_util__E_18, array_util__STATE_VARIABLE_A_0_19, &array_util__STATE_VARIABLE_A_25_25, array_util__STATE_VARIABLE_B_0_21, &array_util__STATE_VARIABLE_B_26_26, array_util__STATE_VARIABLE_C_0_23, &array_util__STATE_VARIABLE_C_27_27);
            }
            array_util__Var_28 = (array_util__N_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer array_util__next_value_of_N_11 = array_util__Var_28;
              MR_Box array_util__next_value_of_STATE_VARIABLE_A_0_19 = array_util__STATE_VARIABLE_A_25_25;
              MR_Box array_util__next_value_of_STATE_VARIABLE_B_0_21 = array_util__STATE_VARIABLE_B_26_26;
              MR_Box array_util__next_value_of_STATE_VARIABLE_C_0_23 = array_util__STATE_VARIABLE_C_27_27;

              array_util__STATE_VARIABLE_C_0_23 = array_util__next_value_of_STATE_VARIABLE_C_0_23;
              array_util__STATE_VARIABLE_B_0_21 = array_util__next_value_of_STATE_VARIABLE_B_0_21;
              array_util__STATE_VARIABLE_A_0_19 = array_util__next_value_of_STATE_VARIABLE_A_0_19;
              array_util__N_11 = array_util__next_value_of_N_11;
            }
            continue;
          }
        else
          {
            *array_util__STATE_VARIABLE_C_24 = array_util__STATE_VARIABLE_C_0_23;
            *array_util__STATE_VARIABLE_B_22 = array_util__STATE_VARIABLE_B_0_21;
            *array_util__STATE_VARIABLE_A_20 = array_util__STATE_VARIABLE_A_0_19;
          }
      }
      break;
    }
}

void MR_CALL 
array_util__array_foldl2_8_p_4(
  MR_Word array_util__TypeInfo_for_T_21,
  MR_Word array_util__TypeInfo_for_U_22,
  MR_Word array_util__TypeInfo_for_V_23,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
{
  {
    MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

    if (array_util__succeeded)
      {
        MR_Box array_util__E_34;
        MR_Box array_util__STATE_VARIABLE_AccU_20_35;
        MR_Box array_util__STATE_VARIABLE_AccV_21_36;
        MR_Integer array_util__Var_37;
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

        {
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_21, array_util__A_12, array_util__N_9, &array_util__E_34);
        }
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
        {
          array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_34, array_util__STATE_VARIABLE_AccU_0_15, &array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccV_0_17, &array_util__STATE_VARIABLE_AccV_21_36);
        }
        array_util__Var_37 = (array_util__N_9 + (MR_Integer) 1);
        {
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_21, array_util__Var_37, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_21_36, array_util__STATE_VARIABLE_AccV_18);
        }
      }
    else
      {
        *array_util__STATE_VARIABLE_AccV_18 = array_util__STATE_VARIABLE_AccV_0_17;
        *array_util__STATE_VARIABLE_AccU_16 = array_util__STATE_VARIABLE_AccU_0_15;
      }
  }
}

void MR_CALL 
array_util__array_foldl2_8_p_3(
  MR_Word array_util__TypeInfo_for_T_21,
  MR_Word array_util__TypeInfo_for_U_22,
  MR_Word array_util__TypeInfo_for_V_23,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
{
  {
    MR_bool array_util__succeeded;

    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(array_util__TypeInfo_for_T_21, array_util__N_9, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_0_15, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_0_17, array_util__STATE_VARIABLE_AccV_18);
    }
  }
}

void MR_CALL 
array_util__array_foldl2_8_p_2(
  MR_Word array_util__TypeInfo_for_T_21,
  MR_Word array_util__TypeInfo_for_U_22,
  MR_Word array_util__TypeInfo_for_V_23,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
{
  {
    MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

    if (array_util__succeeded)
      {
        MR_Box array_util__E_34;
        MR_Box array_util__STATE_VARIABLE_AccU_20_35;
        MR_Box array_util__STATE_VARIABLE_AccV_21_36;
        MR_Integer array_util__Var_37;
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

        {
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_21, array_util__A_12, array_util__N_9, &array_util__E_34);
        }
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
        {
          array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_34, array_util__STATE_VARIABLE_AccU_0_15, &array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccV_0_17, &array_util__STATE_VARIABLE_AccV_21_36);
        }
        array_util__Var_37 = (array_util__N_9 + (MR_Integer) 1);
        {
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_21, array_util__Var_37, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_21_36, array_util__STATE_VARIABLE_AccV_18);
        }
      }
    else
      {
        *array_util__STATE_VARIABLE_AccV_18 = array_util__STATE_VARIABLE_AccV_0_17;
        *array_util__STATE_VARIABLE_AccU_16 = array_util__STATE_VARIABLE_AccU_0_15;
      }
  }
}

void MR_CALL 
array_util__array_foldl2_8_p_1(
  MR_Word array_util__TypeInfo_for_T_21,
  MR_Word array_util__TypeInfo_for_U_22,
  MR_Word array_util__TypeInfo_for_V_23,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
{
  {
    MR_bool array_util__succeeded;

    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_21, array_util__N_9, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_0_15, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_0_17, array_util__STATE_VARIABLE_AccV_18);
    }
  }
}

void MR_CALL 
array_util__array_foldl2_8_p_0(
  MR_Word array_util__TypeInfo_for_T_21,
  MR_Word array_util__TypeInfo_for_U_22,
  MR_Word array_util__TypeInfo_for_V_23,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
{
  {
    MR_bool array_util__succeeded;

    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(array_util__TypeInfo_for_T_21, array_util__N_9, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_0_15, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_0_17, array_util__STATE_VARIABLE_AccV_18);
    }
  }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_4(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Word array_util__TypeInfo_for_U_20,
  MR_Word array_util__TypeInfo_for_V_21,
  MR_Word array_util__P_7,
  MR_ArrayPtr array_util__A_8,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_11;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
    array_util__succeeded = ((MR_Integer) 1 <= array_util__Max_11);
    if (array_util__succeeded)
      {
        MR_Box array_util__E_32;
        MR_Box array_util__STATE_VARIABLE_AccU_20_33;
        MR_Box array_util__STATE_VARIABLE_AccV_21_34;
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

        {
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, (MR_Integer) 1, &array_util__E_32);
        }
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_7, (MR_Integer) 1)));
        {
          array_util__func_0(((MR_Box) array_util__P_7), ((MR_Box) ((MR_Integer) 1)), array_util__E_32, array_util__STATE_VARIABLE_AccU_0_12, &array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccV_0_14, &array_util__STATE_VARIABLE_AccV_21_34);
        }
        {
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_19, ((MR_Integer) 1 + (MR_Integer) 1), array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_21_34, array_util__STATE_VARIABLE_AccV_15);
        }
      }
    else
      {
        *array_util__STATE_VARIABLE_AccV_15 = array_util__STATE_VARIABLE_AccV_0_14;
        *array_util__STATE_VARIABLE_AccU_13 = array_util__STATE_VARIABLE_AccU_0_12;
      }
  }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_3(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Word array_util__TypeInfo_for_U_20,
  MR_Word array_util__TypeInfo_for_V_21,
  MR_Word array_util__P_7,
  MR_ArrayPtr array_util__A_8,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_11;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(array_util__TypeInfo_for_T_19, (MR_Integer) 1, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_0_14, array_util__STATE_VARIABLE_AccV_15);
    }
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(
  MR_Word array_util__TypeInfo_for_T_26,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
  MR_Box * array_util__STATE_VARIABLE_AccV_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

        if (array_util__succeeded)
          {
            MR_Box array_util__E_15;
            MR_Box array_util__STATE_VARIABLE_AccU_20_20;
            MR_Box array_util__STATE_VARIABLE_AccV_21_21;
            MR_Integer array_util__Var_22;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_26, array_util__A_12, array_util__N_9, &array_util__E_15);
            }
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
            {
              array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_15, array_util__STATE_VARIABLE_AccU_0_16, &array_util__STATE_VARIABLE_AccU_20_20, array_util__STATE_VARIABLE_AccV_0_18, &array_util__STATE_VARIABLE_AccV_21_21);
            }
            array_util__Var_22 = (array_util__N_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer array_util__next_value_of_N_9 = array_util__Var_22;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccU_0_16 = array_util__STATE_VARIABLE_AccU_20_20;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccV_0_18 = array_util__STATE_VARIABLE_AccV_21_21;

              array_util__STATE_VARIABLE_AccV_0_18 = array_util__next_value_of_STATE_VARIABLE_AccV_0_18;
              array_util__STATE_VARIABLE_AccU_0_16 = array_util__next_value_of_STATE_VARIABLE_AccU_0_16;
              array_util__N_9 = array_util__next_value_of_N_9;
            }
            continue;
          }
        else
          {
            *array_util__STATE_VARIABLE_AccV_19 = array_util__STATE_VARIABLE_AccV_0_18;
            *array_util__STATE_VARIABLE_AccU_17 = array_util__STATE_VARIABLE_AccU_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_2(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Word array_util__TypeInfo_for_U_20,
  MR_Word array_util__TypeInfo_for_V_21,
  MR_Word array_util__P_7,
  MR_ArrayPtr array_util__A_8,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_11;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
    array_util__succeeded = ((MR_Integer) 1 <= array_util__Max_11);
    if (array_util__succeeded)
      {
        MR_Box array_util__E_32;
        MR_Box array_util__STATE_VARIABLE_AccU_20_33;
        MR_Box array_util__STATE_VARIABLE_AccV_21_34;
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

        {
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, (MR_Integer) 1, &array_util__E_32);
        }
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_7, (MR_Integer) 1)));
        {
          array_util__func_0(((MR_Box) array_util__P_7), ((MR_Box) ((MR_Integer) 1)), array_util__E_32, array_util__STATE_VARIABLE_AccU_0_12, &array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccV_0_14, &array_util__STATE_VARIABLE_AccV_21_34);
        }
        {
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_19, ((MR_Integer) 1 + (MR_Integer) 1), array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_21_34, array_util__STATE_VARIABLE_AccV_15);
        }
      }
    else
      {
        *array_util__STATE_VARIABLE_AccV_15 = array_util__STATE_VARIABLE_AccV_0_14;
        *array_util__STATE_VARIABLE_AccU_13 = array_util__STATE_VARIABLE_AccU_0_12;
      }
  }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_1(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Word array_util__TypeInfo_for_U_20,
  MR_Word array_util__TypeInfo_for_V_21,
  MR_Word array_util__P_7,
  MR_ArrayPtr array_util__A_8,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_11;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_19, (MR_Integer) 1, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_0_14, array_util__STATE_VARIABLE_AccV_15);
    }
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(
  MR_Word array_util__TypeInfo_for_T_26,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
  MR_Box * array_util__STATE_VARIABLE_AccV_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

        if (array_util__succeeded)
          {
            MR_Box array_util__E_15;
            MR_Box array_util__STATE_VARIABLE_AccU_20_20;
            MR_Box array_util__STATE_VARIABLE_AccV_21_21;
            MR_Integer array_util__Var_22;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_26, array_util__A_12, array_util__N_9, &array_util__E_15);
            }
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
            {
              array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_15, array_util__STATE_VARIABLE_AccU_0_16, &array_util__STATE_VARIABLE_AccU_20_20, array_util__STATE_VARIABLE_AccV_0_18, &array_util__STATE_VARIABLE_AccV_21_21);
            }
            array_util__Var_22 = (array_util__N_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer array_util__next_value_of_N_9 = array_util__Var_22;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccU_0_16 = array_util__STATE_VARIABLE_AccU_20_20;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccV_0_18 = array_util__STATE_VARIABLE_AccV_21_21;

              array_util__STATE_VARIABLE_AccV_0_18 = array_util__next_value_of_STATE_VARIABLE_AccV_0_18;
              array_util__STATE_VARIABLE_AccU_0_16 = array_util__next_value_of_STATE_VARIABLE_AccU_0_16;
              array_util__N_9 = array_util__next_value_of_N_9;
            }
            continue;
          }
        else
          {
            *array_util__STATE_VARIABLE_AccV_19 = array_util__STATE_VARIABLE_AccV_0_18;
            *array_util__STATE_VARIABLE_AccU_17 = array_util__STATE_VARIABLE_AccU_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
array_util__array_foldl2_from_1_6_p_0(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Word array_util__TypeInfo_for_U_20,
  MR_Word array_util__TypeInfo_for_V_21,
  MR_Word array_util__P_7,
  MR_ArrayPtr array_util__A_8,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_11;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(array_util__TypeInfo_for_T_19, (MR_Integer) 1, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_0_14, array_util__STATE_VARIABLE_AccV_15);
    }
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(
  MR_Word array_util__TypeInfo_for_T_26,
  MR_Integer array_util__N_9,
  MR_Integer array_util__Max_10,
  MR_Word array_util__P_11,
  MR_ArrayPtr array_util__A_12,
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
  MR_Box * array_util__STATE_VARIABLE_AccV_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

        if (array_util__succeeded)
          {
            MR_Box array_util__E_15;
            MR_Box array_util__STATE_VARIABLE_AccU_20_20;
            MR_Box array_util__STATE_VARIABLE_AccV_21_21;
            MR_Integer array_util__Var_22;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

            {
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_26, array_util__A_12, array_util__N_9, &array_util__E_15);
            }
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
            {
              array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_15, array_util__STATE_VARIABLE_AccU_0_16, &array_util__STATE_VARIABLE_AccU_20_20, array_util__STATE_VARIABLE_AccV_0_18, &array_util__STATE_VARIABLE_AccV_21_21);
            }
            array_util__Var_22 = (array_util__N_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer array_util__next_value_of_N_9 = array_util__Var_22;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccU_0_16 = array_util__STATE_VARIABLE_AccU_20_20;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccV_0_18 = array_util__STATE_VARIABLE_AccV_21_21;

              array_util__STATE_VARIABLE_AccV_0_18 = array_util__next_value_of_STATE_VARIABLE_AccV_0_18;
              array_util__STATE_VARIABLE_AccU_0_16 = array_util__next_value_of_STATE_VARIABLE_AccU_0_16;
              array_util__N_9 = array_util__next_value_of_N_9;
            }
            continue;
          }
        else
          {
            *array_util__STATE_VARIABLE_AccV_19 = array_util__STATE_VARIABLE_AccV_0_18;
            *array_util__STATE_VARIABLE_AccU_17 = array_util__STATE_VARIABLE_AccU_0_16;
          }
      }
      break;
    }
}

void MR_CALL 
array_util__array_foldl_6_p_2(
  MR_Word array_util__TypeInfo_for_T_15,
  MR_Word array_util__TypeInfo_for_U_16,
  MR_Integer array_util__N_7,
  MR_Integer array_util__Max_8,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__A_10,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13)
{
  {
    MR_bool array_util__succeeded = (array_util__N_7 <= array_util__Max_8);

    if (array_util__succeeded)
      {
        MR_Box array_util__E_24;
        MR_Box array_util__STATE_VARIABLE_AccU_15_25;
        MR_Integer array_util__Var_26;
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_15, array_util__A_10, array_util__N_7, &array_util__E_24);
        }
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_9, (MR_Integer) 1)));
        {
          array_util__func_0(((MR_Box) array_util__P_9), ((MR_Box) (array_util__N_7)), array_util__E_24, array_util__STATE_VARIABLE_AccU_0_12, &array_util__STATE_VARIABLE_AccU_15_25);
        }
        array_util__Var_26 = (array_util__N_7 + (MR_Integer) 1);
        {
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_15, array_util__Var_26, array_util__Max_8, array_util__P_9, array_util__A_10, array_util__STATE_VARIABLE_AccU_15_25, array_util__STATE_VARIABLE_AccU_13);
        }
      }
    else
      *array_util__STATE_VARIABLE_AccU_13 = array_util__STATE_VARIABLE_AccU_0_12;
  }
}

void MR_CALL 
array_util__array_foldl_6_p_1(
  MR_Word array_util__TypeInfo_for_T_15,
  MR_Word array_util__TypeInfo_for_U_16,
  MR_Integer array_util__N_7,
  MR_Integer array_util__Max_8,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__A_10,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13)
{
  {
    MR_bool array_util__succeeded;

    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_15, array_util__N_7, array_util__Max_8, array_util__P_9, array_util__A_10, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13);
    }
  }
}

void MR_CALL 
array_util__array_foldl_6_p_0(
  MR_Word array_util__TypeInfo_for_T_15,
  MR_Word array_util__TypeInfo_for_U_16,
  MR_Integer array_util__N_7,
  MR_Integer array_util__Max_8,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__A_10,
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
  MR_Box * array_util__STATE_VARIABLE_AccU_13)
{
  {
    MR_bool array_util__succeeded;

    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(array_util__TypeInfo_for_T_15, array_util__N_7, array_util__Max_8, array_util__P_9, array_util__A_10, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13);
    }
  }
}

void MR_CALL 
array_util__array_foldl_from_0_4_p_2(
  MR_Word array_util__TypeInfo_for_T_13,
  MR_Word array_util__TypeInfo_for_U_14,
  MR_Word array_util__P_5,
  MR_ArrayPtr array_util__A_6,
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_8;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
    array_util__succeeded = ((MR_Integer) 0 <= array_util__Max_8);
    if (array_util__succeeded)
      {
        MR_Box array_util__E_22;
        MR_Box array_util__STATE_VARIABLE_AccU_15_23;
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, (MR_Integer) 0, &array_util__E_22);
        }
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_5, (MR_Integer) 1)));
        {
          array_util__func_0(((MR_Box) array_util__P_5), ((MR_Box) ((MR_Integer) 0)), array_util__E_22, array_util__STATE_VARIABLE_AccU_0_9, &array_util__STATE_VARIABLE_AccU_15_23);
        }
        {
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, ((MR_Integer) 0 + (MR_Integer) 1), array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_15_23, array_util__STATE_VARIABLE_AccU_10);
        }
      }
    else
      *array_util__STATE_VARIABLE_AccU_10 = array_util__STATE_VARIABLE_AccU_0_9;
  }
}

void MR_CALL 
array_util__array_foldl_from_0_4_p_1(
  MR_Word array_util__TypeInfo_for_T_13,
  MR_Word array_util__TypeInfo_for_U_14,
  MR_Word array_util__P_5,
  MR_ArrayPtr array_util__A_6,
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_8;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, (MR_Integer) 0, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
    }
  }
}

void MR_CALL 
array_util__array_foldl_from_0_4_p_0(
  MR_Word array_util__TypeInfo_for_T_13,
  MR_Word array_util__TypeInfo_for_U_14,
  MR_Word array_util__P_5,
  MR_ArrayPtr array_util__A_6,
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_8;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(array_util__TypeInfo_for_T_13, (MR_Integer) 0, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
    }
  }
}

void MR_CALL 
array_util__array_foldl_from_1_4_p_2(
  MR_Word array_util__TypeInfo_for_T_13,
  MR_Word array_util__TypeInfo_for_U_14,
  MR_Word array_util__P_5,
  MR_ArrayPtr array_util__A_6,
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_8;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
    array_util__succeeded = ((MR_Integer) 1 <= array_util__Max_8);
    if (array_util__succeeded)
      {
        MR_Box array_util__E_22;
        MR_Box array_util__STATE_VARIABLE_AccU_15_23;
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, (MR_Integer) 1, &array_util__E_22);
        }
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_5, (MR_Integer) 1)));
        {
          array_util__func_0(((MR_Box) array_util__P_5), ((MR_Box) ((MR_Integer) 1)), array_util__E_22, array_util__STATE_VARIABLE_AccU_0_9, &array_util__STATE_VARIABLE_AccU_15_23);
        }
        {
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, ((MR_Integer) 1 + (MR_Integer) 1), array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_15_23, array_util__STATE_VARIABLE_AccU_10);
        }
      }
    else
      *array_util__STATE_VARIABLE_AccU_10 = array_util__STATE_VARIABLE_AccU_0_9;
  }
}

void MR_CALL 
array_util__array_foldl_from_1_4_p_1(
  MR_Word array_util__TypeInfo_for_T_13,
  MR_Word array_util__TypeInfo_for_U_14,
  MR_Word array_util__P_5,
  MR_ArrayPtr array_util__A_6,
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_8;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, (MR_Integer) 1, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
    }
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Integer array_util__N_7,
  MR_Integer array_util__Max_8,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__A_10,
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
  MR_Box * array_util__STATE_VARIABLE_AccU_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded = (array_util__N_7 <= array_util__Max_8);

        if (array_util__succeeded)
          {
            MR_Box array_util__E_12;
            MR_Box array_util__STATE_VARIABLE_AccU_15_15;
            MR_Integer array_util__Var_16;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_10, array_util__N_7, &array_util__E_12);
            }
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_9, (MR_Integer) 1)));
            {
              array_util__func_0(((MR_Box) array_util__P_9), ((MR_Box) (array_util__N_7)), array_util__E_12, array_util__STATE_VARIABLE_AccU_0_13, &array_util__STATE_VARIABLE_AccU_15_15);
            }
            array_util__Var_16 = (array_util__N_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer array_util__next_value_of_N_7 = array_util__Var_16;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccU_0_13 = array_util__STATE_VARIABLE_AccU_15_15;

              array_util__STATE_VARIABLE_AccU_0_13 = array_util__next_value_of_STATE_VARIABLE_AccU_0_13;
              array_util__N_7 = array_util__next_value_of_N_7;
            }
            continue;
          }
        else
          *array_util__STATE_VARIABLE_AccU_14 = array_util__STATE_VARIABLE_AccU_0_13;
      }
      break;
    }
}

void MR_CALL 
array_util__array_foldl_from_1_4_p_0(
  MR_Word array_util__TypeInfo_for_T_13,
  MR_Word array_util__TypeInfo_for_U_14,
  MR_Word array_util__P_5,
  MR_ArrayPtr array_util__A_6,
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
{
  {
    MR_bool array_util__succeeded;
    MR_Integer array_util__Max_8;

    {
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
    {
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(array_util__TypeInfo_for_T_13, (MR_Integer) 1, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
    }
  }
}

static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(
  MR_Word array_util__TypeInfo_for_T_19,
  MR_Integer array_util__N_7,
  MR_Integer array_util__Max_8,
  MR_Word array_util__P_9,
  MR_ArrayPtr array_util__A_10,
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
  MR_Box * array_util__STATE_VARIABLE_AccU_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool array_util__succeeded = (array_util__N_7 <= array_util__Max_8);

        if (array_util__succeeded)
          {
            MR_Box array_util__E_12;
            MR_Box array_util__STATE_VARIABLE_AccU_15_15;
            MR_Integer array_util__Var_16;
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_10, array_util__N_7, &array_util__E_12);
            }
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_9, (MR_Integer) 1)));
            {
              array_util__func_0(((MR_Box) array_util__P_9), ((MR_Box) (array_util__N_7)), array_util__E_12, array_util__STATE_VARIABLE_AccU_0_13, &array_util__STATE_VARIABLE_AccU_15_15);
            }
            array_util__Var_16 = (array_util__N_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer array_util__next_value_of_N_7 = array_util__Var_16;
              MR_Box array_util__next_value_of_STATE_VARIABLE_AccU_0_13 = array_util__STATE_VARIABLE_AccU_15_15;

              array_util__STATE_VARIABLE_AccU_0_13 = array_util__next_value_of_STATE_VARIABLE_AccU_0_13;
              array_util__N_7 = array_util__next_value_of_N_7;
            }
            continue;
          }
        else
          *array_util__STATE_VARIABLE_AccU_14 = array_util__STATE_VARIABLE_AccU_0_13;
      }
      break;
    }
}

MR_Box MR_CALL 
array_util__u_1_f_0(
  MR_Word array_util__TypeInfo_for_T_3,
  MR_Box array_util__HeadVar__1_1)
{
  {
    MR_bool array_util__succeeded;
    MR_Box array_util__HeadVar__2_2;
    MR_Word array_util__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL array_util__u_1_f_0

	MR_Word A;
	MR_Word B;

	A = (MR_Word) array_util__HeadVar__1_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 array_util__HeadVar__2_2  = (MR_Box) B;
}
    return array_util__HeadVar__2_2;
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

/* :- end_module array_util. */
