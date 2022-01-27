/*
** Automatically generated from `array_util.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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




#line 217 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 217 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_33,
#line 217 "array_util.m"
  MR_Integer array_util__N_11,
#line 217 "array_util.m"
  MR_Integer array_util__Max_12,
#line 217 "array_util.m"
  MR_Word array_util__P_13,
#line 217 "array_util.m"
  MR_ArrayPtr array_util__Array_14,
#line 217 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_A_0_19,
#line 217 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_A_20,
#line 217 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_B_0_21,
#line 217 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_B_22,
#line 217 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_C_0_23,
#line 217 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_C_24);

#line 195 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(
#line 195 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_26,
#line 195 "array_util.m"
  MR_Integer array_util__N_9,
#line 195 "array_util.m"
  MR_Integer array_util__Max_10,
#line 195 "array_util.m"
  MR_Word array_util__P_11,
#line 195 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 195 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
#line 195 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
#line 195 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
#line 195 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_19);

#line 189 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(
#line 189 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_26,
#line 189 "array_util.m"
  MR_Integer array_util__N_9,
#line 189 "array_util.m"
  MR_Integer array_util__Max_10,
#line 189 "array_util.m"
  MR_Word array_util__P_11,
#line 189 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 189 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
#line 189 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
#line 189 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
#line 189 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_19);

#line 187 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(
#line 187 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_26,
#line 187 "array_util.m"
  MR_Integer array_util__N_9,
#line 187 "array_util.m"
  MR_Integer array_util__Max_10,
#line 187 "array_util.m"
  MR_Word array_util__P_11,
#line 187 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 187 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
#line 187 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
#line 187 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
#line 187 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_19);

#line 160 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(
#line 160 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 160 "array_util.m"
  MR_Integer array_util__N_7,
#line 160 "array_util.m"
  MR_Integer array_util__Max_8,
#line 160 "array_util.m"
  MR_Word array_util__P_9,
#line 160 "array_util.m"
  MR_ArrayPtr array_util__A_10,
#line 160 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
#line 160 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_14);

#line 159 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(
#line 159 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 159 "array_util.m"
  MR_Integer array_util__N_7,
#line 159 "array_util.m"
  MR_Integer array_util__Max_8,
#line 159 "array_util.m"
  MR_Word array_util__P_9,
#line 159 "array_util.m"
  MR_ArrayPtr array_util__A_10,
#line 159 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
#line 159 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_14);

#line 251 "array_util.m"
static void MR_CALL 
array_util__array_map_5_p_0(
#line 251 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_18,
#line 251 "array_util.m"
  MR_Integer array_util__N_6,
#line 251 "array_util.m"
  MR_Integer array_util__Size_7,
#line 251 "array_util.m"
  MR_Word array_util__Closure_8,
#line 251 "array_util.m"
  MR_ArrayPtr array_util__STATE_VARIABLE_Array_0_12,
#line 251 "array_util.m"
  MR_ArrayPtr * array_util__STATE_VARIABLE_Array_13);







#include "array_util.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 217 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 217 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_33,
#line 217 "array_util.m"
  MR_Integer array_util__N_11,
#line 217 "array_util.m"
  MR_Integer array_util__Max_12,
#line 217 "array_util.m"
  MR_Word array_util__P_13,
#line 217 "array_util.m"
  MR_ArrayPtr array_util__Array_14,
#line 217 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_A_0_19,
#line 217 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_A_20,
#line 217 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_B_0_21,
#line 217 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_B_22,
#line 217 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_C_0_23,
#line 217 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_C_24)
#line 217 "array_util.m"
{
#line 226 "array_util.m"
  while (MR_TRUE)
#line 226 "array_util.m"
    {
#line 226 "array_util.m"
      /* tailcall optimized into a loop */
#line 226 "array_util.m"
      {
#line 226 "array_util.m"
        MR_bool array_util__succeeded = (array_util__N_11 <= array_util__Max_12);

#line 226 "array_util.m"
        if (array_util__succeeded)
#line 223 "array_util.m"
          {
#line 223 "array_util.m"
            MR_Box array_util__E_18;
#line 223 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_A_25_25;
#line 223 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_B_26_26;
#line 223 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_C_27_27;
#line 223 "array_util.m"
            MR_Integer array_util__V_28_28;
#line 224 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 223 "array_util.m"
            {
#line 223 "array_util.m"
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_33, array_util__Array_14, array_util__N_11, &array_util__E_18);
            }
#line 224 "array_util.m"
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_13, (MR_Integer) 1)));
#line 224 "array_util.m"
            {
#line 224 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_13), ((MR_Box) (array_util__N_11)), array_util__E_18, array_util__STATE_VARIABLE_A_0_19, &array_util__STATE_VARIABLE_A_25_25, array_util__STATE_VARIABLE_B_0_21, &array_util__STATE_VARIABLE_B_26_26, array_util__STATE_VARIABLE_C_0_23, &array_util__STATE_VARIABLE_C_27_27);
            }
#line 225 "array_util.m"
            array_util__V_28_28 = (array_util__N_11 + (MR_Integer) 1);
#line 225 "array_util.m"
            /* direct tailcall eliminated */
#line 225 "array_util.m"
            {
#line 225 "array_util.m"
              MR_Integer array_util__N__tmp_copy_11 = array_util__V_28_28;
#line 225 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_A_0__tmp_copy_19 = array_util__STATE_VARIABLE_A_25_25;
#line 225 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_B_0__tmp_copy_21 = array_util__STATE_VARIABLE_B_26_26;
#line 225 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_C_0__tmp_copy_23 = array_util__STATE_VARIABLE_C_27_27;

#line 225 "array_util.m"
              array_util__STATE_VARIABLE_C_0_23 = array_util__STATE_VARIABLE_C_0__tmp_copy_23;
#line 225 "array_util.m"
              array_util__STATE_VARIABLE_B_0_21 = array_util__STATE_VARIABLE_B_0__tmp_copy_21;
#line 225 "array_util.m"
              array_util__STATE_VARIABLE_A_0_19 = array_util__STATE_VARIABLE_A_0__tmp_copy_19;
#line 225 "array_util.m"
              array_util__N_11 = array_util__N__tmp_copy_11;
#line 225 "array_util.m"
            }
#line 225 "array_util.m"
            continue;
#line 223 "array_util.m"
          }
#line 226 "array_util.m"
        else
#line 227 "array_util.m"
          {
#line 227 "array_util.m"
            *array_util__STATE_VARIABLE_C_24 = array_util__STATE_VARIABLE_C_0_23;
#line 227 "array_util.m"
            *array_util__STATE_VARIABLE_B_22 = array_util__STATE_VARIABLE_B_0_21;
#line 227 "array_util.m"
            *array_util__STATE_VARIABLE_A_20 = array_util__STATE_VARIABLE_A_0_19;
#line 227 "array_util.m"
          }
#line 226 "array_util.m"
      }
#line 226 "array_util.m"
      break;
#line 226 "array_util.m"
    }
#line 217 "array_util.m"
}

#line 195 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(
#line 195 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_26,
#line 195 "array_util.m"
  MR_Integer array_util__N_9,
#line 195 "array_util.m"
  MR_Integer array_util__Max_10,
#line 195 "array_util.m"
  MR_Word array_util__P_11,
#line 195 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 195 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
#line 195 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
#line 195 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
#line 195 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_19)
#line 195 "array_util.m"
{
#line 205 "array_util.m"
  while (MR_TRUE)
#line 205 "array_util.m"
    {
#line 205 "array_util.m"
      /* tailcall optimized into a loop */
#line 205 "array_util.m"
      {
#line 205 "array_util.m"
        MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

#line 205 "array_util.m"
        if (array_util__succeeded)
#line 202 "array_util.m"
          {
#line 202 "array_util.m"
            MR_Box array_util__E_15;
#line 202 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccU_20_20;
#line 202 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccV_21_21;
#line 202 "array_util.m"
            MR_Integer array_util__V_22_22;
#line 203 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 202 "array_util.m"
            {
#line 202 "array_util.m"
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_26, array_util__A_12, array_util__N_9, &array_util__E_15);
            }
#line 203 "array_util.m"
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
#line 203 "array_util.m"
            {
#line 203 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_15, array_util__STATE_VARIABLE_AccU_0_16, &array_util__STATE_VARIABLE_AccU_20_20, array_util__STATE_VARIABLE_AccV_0_18, &array_util__STATE_VARIABLE_AccV_21_21);
            }
#line 204 "array_util.m"
            array_util__V_22_22 = (array_util__N_9 + (MR_Integer) 1);
#line 204 "array_util.m"
            /* direct tailcall eliminated */
#line 204 "array_util.m"
            {
#line 204 "array_util.m"
              MR_Integer array_util__N__tmp_copy_9 = array_util__V_22_22;
#line 204 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccU_0__tmp_copy_16 = array_util__STATE_VARIABLE_AccU_20_20;
#line 204 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccV_0__tmp_copy_18 = array_util__STATE_VARIABLE_AccV_21_21;

#line 204 "array_util.m"
              array_util__STATE_VARIABLE_AccV_0_18 = array_util__STATE_VARIABLE_AccV_0__tmp_copy_18;
#line 204 "array_util.m"
              array_util__STATE_VARIABLE_AccU_0_16 = array_util__STATE_VARIABLE_AccU_0__tmp_copy_16;
#line 204 "array_util.m"
              array_util__N_9 = array_util__N__tmp_copy_9;
#line 204 "array_util.m"
            }
#line 204 "array_util.m"
            continue;
#line 202 "array_util.m"
          }
#line 205 "array_util.m"
        else
#line 206 "array_util.m"
          {
#line 206 "array_util.m"
            *array_util__STATE_VARIABLE_AccV_19 = array_util__STATE_VARIABLE_AccV_0_18;
#line 206 "array_util.m"
            *array_util__STATE_VARIABLE_AccU_17 = array_util__STATE_VARIABLE_AccU_0_16;
#line 206 "array_util.m"
          }
#line 205 "array_util.m"
      }
#line 205 "array_util.m"
      break;
#line 205 "array_util.m"
    }
#line 195 "array_util.m"
}

#line 189 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(
#line 189 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_26,
#line 189 "array_util.m"
  MR_Integer array_util__N_9,
#line 189 "array_util.m"
  MR_Integer array_util__Max_10,
#line 189 "array_util.m"
  MR_Word array_util__P_11,
#line 189 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 189 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
#line 189 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
#line 189 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
#line 189 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_19)
#line 189 "array_util.m"
{
#line 205 "array_util.m"
  while (MR_TRUE)
#line 205 "array_util.m"
    {
#line 205 "array_util.m"
      /* tailcall optimized into a loop */
#line 205 "array_util.m"
      {
#line 205 "array_util.m"
        MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

#line 205 "array_util.m"
        if (array_util__succeeded)
#line 202 "array_util.m"
          {
#line 202 "array_util.m"
            MR_Box array_util__E_15;
#line 202 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccU_20_20;
#line 202 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccV_21_21;
#line 202 "array_util.m"
            MR_Integer array_util__V_22_22;
#line 203 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 202 "array_util.m"
            {
#line 202 "array_util.m"
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_26, array_util__A_12, array_util__N_9, &array_util__E_15);
            }
#line 203 "array_util.m"
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
#line 203 "array_util.m"
            {
#line 203 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_15, array_util__STATE_VARIABLE_AccU_0_16, &array_util__STATE_VARIABLE_AccU_20_20, array_util__STATE_VARIABLE_AccV_0_18, &array_util__STATE_VARIABLE_AccV_21_21);
            }
#line 204 "array_util.m"
            array_util__V_22_22 = (array_util__N_9 + (MR_Integer) 1);
#line 204 "array_util.m"
            /* direct tailcall eliminated */
#line 204 "array_util.m"
            {
#line 204 "array_util.m"
              MR_Integer array_util__N__tmp_copy_9 = array_util__V_22_22;
#line 204 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccU_0__tmp_copy_16 = array_util__STATE_VARIABLE_AccU_20_20;
#line 204 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccV_0__tmp_copy_18 = array_util__STATE_VARIABLE_AccV_21_21;

#line 204 "array_util.m"
              array_util__STATE_VARIABLE_AccV_0_18 = array_util__STATE_VARIABLE_AccV_0__tmp_copy_18;
#line 204 "array_util.m"
              array_util__STATE_VARIABLE_AccU_0_16 = array_util__STATE_VARIABLE_AccU_0__tmp_copy_16;
#line 204 "array_util.m"
              array_util__N_9 = array_util__N__tmp_copy_9;
#line 204 "array_util.m"
            }
#line 204 "array_util.m"
            continue;
#line 202 "array_util.m"
          }
#line 205 "array_util.m"
        else
#line 206 "array_util.m"
          {
#line 206 "array_util.m"
            *array_util__STATE_VARIABLE_AccV_19 = array_util__STATE_VARIABLE_AccV_0_18;
#line 206 "array_util.m"
            *array_util__STATE_VARIABLE_AccU_17 = array_util__STATE_VARIABLE_AccU_0_16;
#line 206 "array_util.m"
          }
#line 205 "array_util.m"
      }
#line 205 "array_util.m"
      break;
#line 205 "array_util.m"
    }
#line 189 "array_util.m"
}

#line 187 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(
#line 187 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_26,
#line 187 "array_util.m"
  MR_Integer array_util__N_9,
#line 187 "array_util.m"
  MR_Integer array_util__Max_10,
#line 187 "array_util.m"
  MR_Word array_util__P_11,
#line 187 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 187 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_16,
#line 187 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_17,
#line 187 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_18,
#line 187 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_19)
#line 187 "array_util.m"
{
#line 205 "array_util.m"
  while (MR_TRUE)
#line 205 "array_util.m"
    {
#line 205 "array_util.m"
      /* tailcall optimized into a loop */
#line 205 "array_util.m"
      {
#line 205 "array_util.m"
        MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

#line 205 "array_util.m"
        if (array_util__succeeded)
#line 202 "array_util.m"
          {
#line 202 "array_util.m"
            MR_Box array_util__E_15;
#line 202 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccU_20_20;
#line 202 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccV_21_21;
#line 202 "array_util.m"
            MR_Integer array_util__V_22_22;
#line 203 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 202 "array_util.m"
            {
#line 202 "array_util.m"
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_26, array_util__A_12, array_util__N_9, &array_util__E_15);
            }
#line 203 "array_util.m"
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
#line 203 "array_util.m"
            {
#line 203 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_15, array_util__STATE_VARIABLE_AccU_0_16, &array_util__STATE_VARIABLE_AccU_20_20, array_util__STATE_VARIABLE_AccV_0_18, &array_util__STATE_VARIABLE_AccV_21_21);
            }
#line 204 "array_util.m"
            array_util__V_22_22 = (array_util__N_9 + (MR_Integer) 1);
#line 204 "array_util.m"
            /* direct tailcall eliminated */
#line 204 "array_util.m"
            {
#line 204 "array_util.m"
              MR_Integer array_util__N__tmp_copy_9 = array_util__V_22_22;
#line 204 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccU_0__tmp_copy_16 = array_util__STATE_VARIABLE_AccU_20_20;
#line 204 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccV_0__tmp_copy_18 = array_util__STATE_VARIABLE_AccV_21_21;

#line 204 "array_util.m"
              array_util__STATE_VARIABLE_AccV_0_18 = array_util__STATE_VARIABLE_AccV_0__tmp_copy_18;
#line 204 "array_util.m"
              array_util__STATE_VARIABLE_AccU_0_16 = array_util__STATE_VARIABLE_AccU_0__tmp_copy_16;
#line 204 "array_util.m"
              array_util__N_9 = array_util__N__tmp_copy_9;
#line 204 "array_util.m"
            }
#line 204 "array_util.m"
            continue;
#line 202 "array_util.m"
          }
#line 205 "array_util.m"
        else
#line 206 "array_util.m"
          {
#line 206 "array_util.m"
            *array_util__STATE_VARIABLE_AccV_19 = array_util__STATE_VARIABLE_AccV_0_18;
#line 206 "array_util.m"
            *array_util__STATE_VARIABLE_AccU_17 = array_util__STATE_VARIABLE_AccU_0_16;
#line 206 "array_util.m"
          }
#line 205 "array_util.m"
      }
#line 205 "array_util.m"
      break;
#line 205 "array_util.m"
    }
#line 187 "array_util.m"
}

#line 160 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(
#line 160 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 160 "array_util.m"
  MR_Integer array_util__N_7,
#line 160 "array_util.m"
  MR_Integer array_util__Max_8,
#line 160 "array_util.m"
  MR_Word array_util__P_9,
#line 160 "array_util.m"
  MR_ArrayPtr array_util__A_10,
#line 160 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
#line 160 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_14)
#line 160 "array_util.m"
{
#line 170 "array_util.m"
  while (MR_TRUE)
#line 170 "array_util.m"
    {
#line 170 "array_util.m"
      /* tailcall optimized into a loop */
#line 170 "array_util.m"
      {
#line 170 "array_util.m"
        MR_bool array_util__succeeded = (array_util__N_7 <= array_util__Max_8);

#line 170 "array_util.m"
        if (array_util__succeeded)
#line 167 "array_util.m"
          {
#line 167 "array_util.m"
            MR_Box array_util__E_12;
#line 167 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccU_15_15;
#line 167 "array_util.m"
            MR_Integer array_util__V_16_16;
#line 168 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 167 "array_util.m"
            {
#line 167 "array_util.m"
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_10, array_util__N_7, &array_util__E_12);
            }
#line 168 "array_util.m"
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_9, (MR_Integer) 1)));
#line 168 "array_util.m"
            {
#line 168 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_9), ((MR_Box) (array_util__N_7)), array_util__E_12, array_util__STATE_VARIABLE_AccU_0_13, &array_util__STATE_VARIABLE_AccU_15_15);
            }
#line 169 "array_util.m"
            array_util__V_16_16 = (array_util__N_7 + (MR_Integer) 1);
#line 169 "array_util.m"
            /* direct tailcall eliminated */
#line 169 "array_util.m"
            {
#line 169 "array_util.m"
              MR_Integer array_util__N__tmp_copy_7 = array_util__V_16_16;
#line 169 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccU_0__tmp_copy_13 = array_util__STATE_VARIABLE_AccU_15_15;

#line 169 "array_util.m"
              array_util__STATE_VARIABLE_AccU_0_13 = array_util__STATE_VARIABLE_AccU_0__tmp_copy_13;
#line 169 "array_util.m"
              array_util__N_7 = array_util__N__tmp_copy_7;
#line 169 "array_util.m"
            }
#line 169 "array_util.m"
            continue;
#line 167 "array_util.m"
          }
#line 170 "array_util.m"
        else
#line 169 "array_util.m"
          *array_util__STATE_VARIABLE_AccU_14 = array_util__STATE_VARIABLE_AccU_0_13;
#line 170 "array_util.m"
      }
#line 170 "array_util.m"
      break;
#line 170 "array_util.m"
    }
#line 160 "array_util.m"
}

#line 159 "array_util.m"
static void MR_CALL 
array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(
#line 159 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 159 "array_util.m"
  MR_Integer array_util__N_7,
#line 159 "array_util.m"
  MR_Integer array_util__Max_8,
#line 159 "array_util.m"
  MR_Word array_util__P_9,
#line 159 "array_util.m"
  MR_ArrayPtr array_util__A_10,
#line 159 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_13,
#line 159 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_14)
#line 159 "array_util.m"
{
#line 170 "array_util.m"
  while (MR_TRUE)
#line 170 "array_util.m"
    {
#line 170 "array_util.m"
      /* tailcall optimized into a loop */
#line 170 "array_util.m"
      {
#line 170 "array_util.m"
        MR_bool array_util__succeeded = (array_util__N_7 <= array_util__Max_8);

#line 170 "array_util.m"
        if (array_util__succeeded)
#line 167 "array_util.m"
          {
#line 167 "array_util.m"
            MR_Box array_util__E_12;
#line 167 "array_util.m"
            MR_Box array_util__STATE_VARIABLE_AccU_15_15;
#line 167 "array_util.m"
            MR_Integer array_util__V_16_16;
#line 168 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 167 "array_util.m"
            {
#line 167 "array_util.m"
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_10, array_util__N_7, &array_util__E_12);
            }
#line 168 "array_util.m"
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_9, (MR_Integer) 1)));
#line 168 "array_util.m"
            {
#line 168 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_9), ((MR_Box) (array_util__N_7)), array_util__E_12, array_util__STATE_VARIABLE_AccU_0_13, &array_util__STATE_VARIABLE_AccU_15_15);
            }
#line 169 "array_util.m"
            array_util__V_16_16 = (array_util__N_7 + (MR_Integer) 1);
#line 169 "array_util.m"
            /* direct tailcall eliminated */
#line 169 "array_util.m"
            {
#line 169 "array_util.m"
              MR_Integer array_util__N__tmp_copy_7 = array_util__V_16_16;
#line 169 "array_util.m"
              MR_Box array_util__STATE_VARIABLE_AccU_0__tmp_copy_13 = array_util__STATE_VARIABLE_AccU_15_15;

#line 169 "array_util.m"
              array_util__STATE_VARIABLE_AccU_0_13 = array_util__STATE_VARIABLE_AccU_0__tmp_copy_13;
#line 169 "array_util.m"
              array_util__N_7 = array_util__N__tmp_copy_7;
#line 169 "array_util.m"
            }
#line 169 "array_util.m"
            continue;
#line 167 "array_util.m"
          }
#line 170 "array_util.m"
        else
#line 169 "array_util.m"
          *array_util__STATE_VARIABLE_AccU_14 = array_util__STATE_VARIABLE_AccU_0_13;
#line 170 "array_util.m"
      }
#line 170 "array_util.m"
      break;
#line 170 "array_util.m"
    }
#line 159 "array_util.m"
}

#line 251 "array_util.m"
static void MR_CALL 
array_util__array_map_5_p_0(
#line 251 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_18,
#line 251 "array_util.m"
  MR_Integer array_util__N_6,
#line 251 "array_util.m"
  MR_Integer array_util__Size_7,
#line 251 "array_util.m"
  MR_Word array_util__Closure_8,
#line 251 "array_util.m"
  MR_ArrayPtr array_util__STATE_VARIABLE_Array_0_12,
#line 251 "array_util.m"
  MR_ArrayPtr * array_util__STATE_VARIABLE_Array_13)
#line 251 "array_util.m"
{
#line 256 "array_util.m"
  while (MR_TRUE)
#line 256 "array_util.m"
    {
#line 256 "array_util.m"
      /* tailcall optimized into a loop */
#line 256 "array_util.m"
      {
#line 256 "array_util.m"
        MR_bool array_util__succeeded = (array_util__N_6 >= array_util__Size_7);

#line 256 "array_util.m"
        if (array_util__succeeded)
#line 254 "array_util.m"
          *array_util__STATE_VARIABLE_Array_13 = array_util__STATE_VARIABLE_Array_0_12;
#line 256 "array_util.m"
        else
#line 257 "array_util.m"
          {
#line 257 "array_util.m"
            MR_Box array_util__OldElem_10;
#line 257 "array_util.m"
            MR_Box array_util__NewElem_11;
#line 257 "array_util.m"
            MR_ArrayPtr array_util__STATE_VARIABLE_Array_14_14;
#line 257 "array_util.m"
            MR_Integer array_util__V_15_15;
#line 258 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box *);

#line 257 "array_util.m"
            {
#line 257 "array_util.m"
              mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_18, array_util__STATE_VARIABLE_Array_0_12, array_util__N_6, &array_util__OldElem_10);
            }
#line 258 "array_util.m"
            array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__Closure_8, (MR_Integer) 1)));
#line 258 "array_util.m"
            {
#line 258 "array_util.m"
              array_util__func_0(((MR_Box) array_util__Closure_8), array_util__OldElem_10, &array_util__NewElem_11);
            }
#line 259 "array_util.m"
            {
#line 259 "array_util.m"
              mercury__array__set_4_p_0(array_util__TypeInfo_for_T_18, array_util__N_6, array_util__NewElem_11, array_util__STATE_VARIABLE_Array_0_12, &array_util__STATE_VARIABLE_Array_14_14);
            }
#line 260 "array_util.m"
            array_util__V_15_15 = (array_util__N_6 + (MR_Integer) 1);
#line 260 "array_util.m"
            /* direct tailcall eliminated */
#line 260 "array_util.m"
            {
#line 260 "array_util.m"
              MR_Integer array_util__N__tmp_copy_6 = array_util__V_15_15;
#line 260 "array_util.m"
              MR_ArrayPtr array_util__STATE_VARIABLE_Array_0__tmp_copy_12 = array_util__STATE_VARIABLE_Array_14_14;

#line 260 "array_util.m"
              array_util__STATE_VARIABLE_Array_0_12 = array_util__STATE_VARIABLE_Array_0__tmp_copy_12;
#line 260 "array_util.m"
              array_util__N_6 = array_util__N__tmp_copy_6;
#line 260 "array_util.m"
            }
#line 260 "array_util.m"
            continue;
#line 257 "array_util.m"
          }
#line 256 "array_util.m"
      }
#line 256 "array_util.m"
      break;
#line 256 "array_util.m"
    }
#line 251 "array_util.m"
}

#line 125 "array_util.m"
void MR_CALL 
array_util__array_map_from_1_3_p_0(
#line 125 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_11,
#line 125 "array_util.m"
  MR_Word array_util__P_4,
#line 125 "array_util.m"
  MR_ArrayPtr array_util__STATE_VARIABLE_AccU_0_7,
#line 125 "array_util.m"
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccU_8)
#line 125 "array_util.m"
{
#line 246 "array_util.m"
  {
#line 246 "array_util.m"
    MR_bool array_util__succeeded;
#line 246 "array_util.m"
    MR_Integer array_util__Max_6;

#line 247 "array_util.m"
    {
#line 247 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_11, array_util__STATE_VARIABLE_AccU_0_7, &array_util__Max_6);
    }
#line 248 "array_util.m"
    {
#line 248 "array_util.m"
      array_util__array_map_5_p_0(array_util__TypeInfo_for_T_11, (MR_Integer) 1, array_util__Max_6, array_util__P_4, array_util__STATE_VARIABLE_AccU_0_7, array_util__STATE_VARIABLE_AccU_8);
#line 248 "array_util.m"
      return;
    }
#line 246 "array_util.m"
  }
#line 125 "array_util.m"
}

#line 119 "array_util.m"
void MR_CALL 
array_util__array_map_from_0_3_p_0(
#line 119 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_11,
#line 119 "array_util.m"
  MR_Word array_util__P_4,
#line 119 "array_util.m"
  MR_ArrayPtr array_util__STATE_VARIABLE_AccU_0_7,
#line 119 "array_util.m"
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccU_8)
#line 119 "array_util.m"
{
#line 242 "array_util.m"
  {
#line 242 "array_util.m"
    MR_bool array_util__succeeded;
#line 242 "array_util.m"
    MR_Integer array_util__Max_6;

#line 243 "array_util.m"
    {
#line 243 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_11, array_util__STATE_VARIABLE_AccU_0_7, &array_util__Max_6);
    }
#line 244 "array_util.m"
    {
#line 244 "array_util.m"
      array_util__array_map_5_p_0(array_util__TypeInfo_for_T_11, (MR_Integer) 0, array_util__Max_6, array_util__P_4, array_util__STATE_VARIABLE_AccU_0_7, array_util__STATE_VARIABLE_AccU_8);
#line 244 "array_util.m"
      return;
    }
#line 242 "array_util.m"
  }
#line 119 "array_util.m"
}

#line 112 "array_util.m"
void MR_CALL 
array_util__array_list_foldl2_6_p_0(
#line 112 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_27,
#line 112 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_28,
#line 112 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_29,
#line 112 "array_util.m"
  MR_Word array_util__P_1,
#line 112 "array_util.m"
  MR_Word array_util__HeadVar__2_2,
#line 112 "array_util.m"
  MR_ArrayPtr array_util__STATE_VARIABLE_AccU_0_3,
#line 112 "array_util.m"
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccU_4,
#line 112 "array_util.m"
  MR_ArrayPtr array_util__STATE_VARIABLE_AccV_0_5,
#line 112 "array_util.m"
  MR_ArrayPtr * array_util__STATE_VARIABLE_AccV_6)
#line 112 "array_util.m"
{
#line 237 "array_util.m"
  while (MR_TRUE)
#line 237 "array_util.m"
    {
#line 237 "array_util.m"
      /* tailcall optimized into a loop */
#line 237 "array_util.m"
      {
#line 237 "array_util.m"
        MR_bool array_util__succeeded;

#line 237 "array_util.m"
        if ((array_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "array_util.m"
          {
#line 237 "array_util.m"
            *array_util__STATE_VARIABLE_AccV_6 = array_util__STATE_VARIABLE_AccV_0_5;
#line 237 "array_util.m"
            *array_util__STATE_VARIABLE_AccU_4 = array_util__STATE_VARIABLE_AccU_0_3;
#line 237 "array_util.m"
          }
#line 237 "array_util.m"
        else
#line 238 "array_util.m"
          {
#line 238 "array_util.m"
            MR_Box array_util__X_15 = (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 0));
#line 238 "array_util.m"
            MR_Word array_util__Xs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "array_util.m"
            MR_ArrayPtr array_util__STATE_VARIABLE_AccU_23_23;
#line 238 "array_util.m"
            MR_ArrayPtr array_util__STATE_VARIABLE_AccV_24_24;
#line 239 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_1, (MR_Integer) 1)));
#line 239 "array_util.m"
            MR_Box array_util__conv2_STATE_VARIABLE_AccU_23_23;
#line 239 "array_util.m"
            MR_Box array_util__conv1_STATE_VARIABLE_AccV_24_24;

#line 239 "array_util.m"
            {
#line 239 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_1), array_util__X_15, ((MR_Box) (array_util__STATE_VARIABLE_AccU_0_3)), &array_util__conv2_STATE_VARIABLE_AccU_23_23, ((MR_Box) (array_util__STATE_VARIABLE_AccV_0_5)), &array_util__conv1_STATE_VARIABLE_AccV_24_24);
            }
#line 239 "array_util.m"
            array_util__STATE_VARIABLE_AccU_23_23 = ((MR_ArrayPtr) array_util__conv2_STATE_VARIABLE_AccU_23_23);
#line 239 "array_util.m"
            array_util__STATE_VARIABLE_AccV_24_24 = ((MR_ArrayPtr) array_util__conv1_STATE_VARIABLE_AccV_24_24);
#line 240 "array_util.m"
            /* direct tailcall eliminated */
#line 240 "array_util.m"
            {
#line 240 "array_util.m"
              MR_Word array_util__HeadVar__2__tmp_copy_2 = array_util__Xs_16;
#line 240 "array_util.m"
              MR_ArrayPtr array_util__STATE_VARIABLE_AccU_0__tmp_copy_3 = array_util__STATE_VARIABLE_AccU_23_23;
#line 240 "array_util.m"
              MR_ArrayPtr array_util__STATE_VARIABLE_AccV_0__tmp_copy_5 = array_util__STATE_VARIABLE_AccV_24_24;

#line 240 "array_util.m"
              array_util__STATE_VARIABLE_AccV_0_5 = array_util__STATE_VARIABLE_AccV_0__tmp_copy_5;
#line 240 "array_util.m"
              array_util__STATE_VARIABLE_AccU_0_3 = array_util__STATE_VARIABLE_AccU_0__tmp_copy_3;
#line 240 "array_util.m"
              array_util__HeadVar__2_2 = array_util__HeadVar__2__tmp_copy_2;
#line 240 "array_util.m"
            }
#line 240 "array_util.m"
            continue;
#line 238 "array_util.m"
          }
#line 237 "array_util.m"
      }
#line 237 "array_util.m"
      break;
#line 237 "array_util.m"
    }
#line 112 "array_util.m"
}

#line 104 "array_util.m"
void MR_CALL 
array_util__array_list_foldl_4_p_0(
#line 104 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_17,
#line 104 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_18,
#line 104 "array_util.m"
  MR_Word array_util__P_1,
#line 104 "array_util.m"
  MR_Word array_util__HeadVar__2_2,
#line 104 "array_util.m"
  MR_ArrayPtr array_util__STATE_VARIABLE_Acc_0_3,
#line 104 "array_util.m"
  MR_ArrayPtr * array_util__STATE_VARIABLE_Acc_4)
#line 104 "array_util.m"
{
#line 232 "array_util.m"
  while (MR_TRUE)
#line 232 "array_util.m"
    {
#line 232 "array_util.m"
      /* tailcall optimized into a loop */
#line 232 "array_util.m"
      {
#line 232 "array_util.m"
        MR_bool array_util__succeeded;

#line 232 "array_util.m"
        if ((array_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "array_util.m"
          *array_util__STATE_VARIABLE_Acc_4 = array_util__STATE_VARIABLE_Acc_0_3;
#line 232 "array_util.m"
        else
#line 233 "array_util.m"
          {
#line 233 "array_util.m"
            MR_Box array_util__X_10 = (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 0));
#line 233 "array_util.m"
            MR_Word array_util__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), array_util__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "array_util.m"
            MR_ArrayPtr array_util__STATE_VARIABLE_Acc_15_15;
#line 234 "array_util.m"
            void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_1, (MR_Integer) 1)));
#line 234 "array_util.m"
            MR_Box array_util__conv1_STATE_VARIABLE_Acc_15_15;

#line 234 "array_util.m"
            {
#line 234 "array_util.m"
              array_util__func_0(((MR_Box) array_util__P_1), array_util__X_10, ((MR_Box) (array_util__STATE_VARIABLE_Acc_0_3)), &array_util__conv1_STATE_VARIABLE_Acc_15_15);
            }
#line 234 "array_util.m"
            array_util__STATE_VARIABLE_Acc_15_15 = ((MR_ArrayPtr) array_util__conv1_STATE_VARIABLE_Acc_15_15);
#line 235 "array_util.m"
            /* direct tailcall eliminated */
#line 235 "array_util.m"
            {
#line 235 "array_util.m"
              MR_Word array_util__HeadVar__2__tmp_copy_2 = array_util__Xs_11;
#line 235 "array_util.m"
              MR_ArrayPtr array_util__STATE_VARIABLE_Acc_0__tmp_copy_3 = array_util__STATE_VARIABLE_Acc_15_15;

#line 235 "array_util.m"
              array_util__STATE_VARIABLE_Acc_0_3 = array_util__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 235 "array_util.m"
              array_util__HeadVar__2_2 = array_util__HeadVar__2__tmp_copy_2;
#line 235 "array_util.m"
            }
#line 235 "array_util.m"
            continue;
#line 233 "array_util.m"
          }
#line 232 "array_util.m"
      }
#line 232 "array_util.m"
      break;
#line 232 "array_util.m"
    }
#line 104 "array_util.m"
}

#line 95 "array_util.m"
void MR_CALL 
array_util__array_foldl3_from_1_8_p_0(
#line 95 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_25,
#line 95 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_26,
#line 95 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_27,
#line 95 "array_util.m"
  MR_Word array_util__TypeInfo_for_W_28,
#line 95 "array_util.m"
  MR_Word array_util__P_9,
#line 95 "array_util.m"
  MR_ArrayPtr array_util__Array_10,
#line 95 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_A_0_15,
#line 95 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_A_16,
#line 95 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_B_0_17,
#line 95 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_B_18,
#line 95 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_C_0_19,
#line 95 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_C_20)
#line 95 "array_util.m"
{
#line 211 "array_util.m"
  {
#line 211 "array_util.m"
    MR_bool array_util__succeeded;
#line 211 "array_util.m"
    MR_Integer array_util__Max_14;

#line 212 "array_util.m"
    {
#line 212 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_25, array_util__Array_10, &array_util__Max_14);
    }
#line 213 "array_util.m"
    {
#line 213 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_51_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(array_util__TypeInfo_for_T_25, (MR_Integer) 1, array_util__Max_14, array_util__P_9, array_util__Array_10, array_util__STATE_VARIABLE_A_0_15, array_util__STATE_VARIABLE_A_16, array_util__STATE_VARIABLE_B_0_17, array_util__STATE_VARIABLE_B_18, array_util__STATE_VARIABLE_C_0_19, array_util__STATE_VARIABLE_C_20);
#line 213 "array_util.m"
      return;
    }
#line 211 "array_util.m"
  }
#line 95 "array_util.m"
}

#line 87 "array_util.m"
void MR_CALL 
array_util__array_foldl2_8_p_4(
#line 87 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_21,
#line 87 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_22,
#line 87 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_23,
#line 87 "array_util.m"
  MR_Integer array_util__N_9,
#line 87 "array_util.m"
  MR_Integer array_util__Max_10,
#line 87 "array_util.m"
  MR_Word array_util__P_11,
#line 87 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 87 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
#line 87 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
#line 87 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
#line 87 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
#line 87 "array_util.m"
{
#line 205 "array_util.m"
  {
#line 205 "array_util.m"
    MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

#line 205 "array_util.m"
    if (array_util__succeeded)
#line 202 "array_util.m"
      {
#line 202 "array_util.m"
        MR_Box array_util__E_34;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccU_20_35;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccV_21_36;
#line 202 "array_util.m"
        MR_Integer array_util__V_37_37;
#line 203 "array_util.m"
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 202 "array_util.m"
        {
#line 202 "array_util.m"
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_21, array_util__A_12, array_util__N_9, &array_util__E_34);
        }
#line 203 "array_util.m"
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
#line 203 "array_util.m"
        {
#line 203 "array_util.m"
          array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_34, array_util__STATE_VARIABLE_AccU_0_15, &array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccV_0_17, &array_util__STATE_VARIABLE_AccV_21_36);
        }
#line 204 "array_util.m"
        array_util__V_37_37 = (array_util__N_9 + (MR_Integer) 1);
#line 204 "array_util.m"
        {
#line 204 "array_util.m"
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_21, array_util__V_37_37, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_21_36, array_util__STATE_VARIABLE_AccV_18);
#line 204 "array_util.m"
          return;
        }
#line 202 "array_util.m"
      }
#line 205 "array_util.m"
    else
#line 206 "array_util.m"
      {
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccV_18 = array_util__STATE_VARIABLE_AccV_0_17;
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccU_16 = array_util__STATE_VARIABLE_AccU_0_15;
#line 206 "array_util.m"
      }
#line 205 "array_util.m"
  }
#line 87 "array_util.m"
}

#line 85 "array_util.m"
void MR_CALL 
array_util__array_foldl2_8_p_3(
#line 85 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_21,
#line 85 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_22,
#line 85 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_23,
#line 85 "array_util.m"
  MR_Integer array_util__N_9,
#line 85 "array_util.m"
  MR_Integer array_util__Max_10,
#line 85 "array_util.m"
  MR_Word array_util__P_11,
#line 85 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 85 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
#line 85 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
#line 85 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
#line 85 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
#line 85 "array_util.m"
{
#line 179 "array_util.m"
  {
#line 179 "array_util.m"
    MR_bool array_util__succeeded;

#line 179 "array_util.m"
    {
#line 179 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(array_util__TypeInfo_for_T_21, array_util__N_9, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_0_15, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_0_17, array_util__STATE_VARIABLE_AccV_18);
#line 179 "array_util.m"
      return;
    }
#line 179 "array_util.m"
  }
#line 85 "array_util.m"
}

#line 82 "array_util.m"
void MR_CALL 
array_util__array_foldl2_8_p_2(
#line 82 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_21,
#line 82 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_22,
#line 82 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_23,
#line 82 "array_util.m"
  MR_Integer array_util__N_9,
#line 82 "array_util.m"
  MR_Integer array_util__Max_10,
#line 82 "array_util.m"
  MR_Word array_util__P_11,
#line 82 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 82 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
#line 82 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
#line 82 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
#line 82 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
#line 82 "array_util.m"
{
#line 205 "array_util.m"
  {
#line 205 "array_util.m"
    MR_bool array_util__succeeded = (array_util__N_9 <= array_util__Max_10);

#line 205 "array_util.m"
    if (array_util__succeeded)
#line 202 "array_util.m"
      {
#line 202 "array_util.m"
        MR_Box array_util__E_34;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccU_20_35;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccV_21_36;
#line 202 "array_util.m"
        MR_Integer array_util__V_37_37;
#line 203 "array_util.m"
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 202 "array_util.m"
        {
#line 202 "array_util.m"
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_21, array_util__A_12, array_util__N_9, &array_util__E_34);
        }
#line 203 "array_util.m"
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_11, (MR_Integer) 1)));
#line 203 "array_util.m"
        {
#line 203 "array_util.m"
          array_util__func_0(((MR_Box) array_util__P_11), ((MR_Box) (array_util__N_9)), array_util__E_34, array_util__STATE_VARIABLE_AccU_0_15, &array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccV_0_17, &array_util__STATE_VARIABLE_AccV_21_36);
        }
#line 204 "array_util.m"
        array_util__V_37_37 = (array_util__N_9 + (MR_Integer) 1);
#line 204 "array_util.m"
        {
#line 204 "array_util.m"
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_21, array_util__V_37_37, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_20_35, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_21_36, array_util__STATE_VARIABLE_AccV_18);
#line 204 "array_util.m"
          return;
        }
#line 202 "array_util.m"
      }
#line 205 "array_util.m"
    else
#line 206 "array_util.m"
      {
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccV_18 = array_util__STATE_VARIABLE_AccV_0_17;
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccU_16 = array_util__STATE_VARIABLE_AccU_0_15;
#line 206 "array_util.m"
      }
#line 205 "array_util.m"
  }
#line 82 "array_util.m"
}

#line 79 "array_util.m"
void MR_CALL 
array_util__array_foldl2_8_p_1(
#line 79 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_21,
#line 79 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_22,
#line 79 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_23,
#line 79 "array_util.m"
  MR_Integer array_util__N_9,
#line 79 "array_util.m"
  MR_Integer array_util__Max_10,
#line 79 "array_util.m"
  MR_Word array_util__P_11,
#line 79 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 79 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
#line 79 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
#line 79 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
#line 79 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
#line 79 "array_util.m"
{
#line 179 "array_util.m"
  {
#line 179 "array_util.m"
    MR_bool array_util__succeeded;

#line 179 "array_util.m"
    {
#line 179 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_21, array_util__N_9, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_0_15, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_0_17, array_util__STATE_VARIABLE_AccV_18);
#line 179 "array_util.m"
      return;
    }
#line 179 "array_util.m"
  }
#line 79 "array_util.m"
}

#line 77 "array_util.m"
void MR_CALL 
array_util__array_foldl2_8_p_0(
#line 77 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_21,
#line 77 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_22,
#line 77 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_23,
#line 77 "array_util.m"
  MR_Integer array_util__N_9,
#line 77 "array_util.m"
  MR_Integer array_util__Max_10,
#line 77 "array_util.m"
  MR_Word array_util__P_11,
#line 77 "array_util.m"
  MR_ArrayPtr array_util__A_12,
#line 77 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_15,
#line 77 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_16,
#line 77 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_17,
#line 77 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_18)
#line 77 "array_util.m"
{
#line 179 "array_util.m"
  {
#line 179 "array_util.m"
    MR_bool array_util__succeeded;

#line 179 "array_util.m"
    {
#line 179 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(array_util__TypeInfo_for_T_21, array_util__N_9, array_util__Max_10, array_util__P_11, array_util__A_12, array_util__STATE_VARIABLE_AccU_0_15, array_util__STATE_VARIABLE_AccU_16, array_util__STATE_VARIABLE_AccV_0_17, array_util__STATE_VARIABLE_AccV_18);
#line 179 "array_util.m"
      return;
    }
#line 179 "array_util.m"
  }
#line 77 "array_util.m"
}

#line 70 "array_util.m"
void MR_CALL 
array_util__array_foldl2_from_1_6_p_4(
#line 70 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 70 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_20,
#line 70 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_21,
#line 70 "array_util.m"
  MR_Word array_util__P_7,
#line 70 "array_util.m"
  MR_ArrayPtr array_util__A_8,
#line 70 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 70 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
#line 70 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
#line 70 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
#line 70 "array_util.m"
{
#line 174 "array_util.m"
  {
#line 174 "array_util.m"
    MR_bool array_util__succeeded;
#line 174 "array_util.m"
    MR_Integer array_util__Max_11;

#line 175 "array_util.m"
    {
#line 175 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
#line 201 "array_util.m"
    array_util__succeeded = ((MR_Integer) 1 <= array_util__Max_11);
#line 205 "array_util.m"
    if (array_util__succeeded)
#line 202 "array_util.m"
      {
#line 202 "array_util.m"
        MR_Box array_util__E_32;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccU_20_33;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccV_21_34;
#line 203 "array_util.m"
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 202 "array_util.m"
        {
#line 202 "array_util.m"
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, (MR_Integer) 1, &array_util__E_32);
        }
#line 203 "array_util.m"
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_7, (MR_Integer) 1)));
#line 203 "array_util.m"
        {
#line 203 "array_util.m"
          array_util__func_0(((MR_Box) array_util__P_7), ((MR_Box) ((MR_Integer) 1)), array_util__E_32, array_util__STATE_VARIABLE_AccU_0_12, &array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccV_0_14, &array_util__STATE_VARIABLE_AccV_21_34);
        }
#line 204 "array_util.m"
        {
#line 204 "array_util.m"
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_19, (MR_Integer) 2, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_21_34, array_util__STATE_VARIABLE_AccV_15);
#line 204 "array_util.m"
          return;
        }
#line 202 "array_util.m"
      }
#line 205 "array_util.m"
    else
#line 206 "array_util.m"
      {
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccV_15 = array_util__STATE_VARIABLE_AccV_0_14;
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccU_13 = array_util__STATE_VARIABLE_AccU_0_12;
#line 206 "array_util.m"
      }
#line 174 "array_util.m"
  }
#line 70 "array_util.m"
}

#line 68 "array_util.m"
void MR_CALL 
array_util__array_foldl2_from_1_6_p_3(
#line 68 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 68 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_20,
#line 68 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_21,
#line 68 "array_util.m"
  MR_Word array_util__P_7,
#line 68 "array_util.m"
  MR_ArrayPtr array_util__A_8,
#line 68 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 68 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
#line 68 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
#line 68 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
#line 68 "array_util.m"
{
#line 174 "array_util.m"
  {
#line 174 "array_util.m"
    MR_bool array_util__succeeded;
#line 174 "array_util.m"
    MR_Integer array_util__Max_11;

#line 175 "array_util.m"
    {
#line 175 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
#line 176 "array_util.m"
    {
#line 176 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_p_3(array_util__TypeInfo_for_T_19, (MR_Integer) 1, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_0_14, array_util__STATE_VARIABLE_AccV_15);
#line 176 "array_util.m"
      return;
    }
#line 174 "array_util.m"
  }
#line 68 "array_util.m"
}

#line 66 "array_util.m"
void MR_CALL 
array_util__array_foldl2_from_1_6_p_2(
#line 66 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 66 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_20,
#line 66 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_21,
#line 66 "array_util.m"
  MR_Word array_util__P_7,
#line 66 "array_util.m"
  MR_ArrayPtr array_util__A_8,
#line 66 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 66 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
#line 66 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
#line 66 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
#line 66 "array_util.m"
{
#line 174 "array_util.m"
  {
#line 174 "array_util.m"
    MR_bool array_util__succeeded;
#line 174 "array_util.m"
    MR_Integer array_util__Max_11;

#line 175 "array_util.m"
    {
#line 175 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
#line 201 "array_util.m"
    array_util__succeeded = ((MR_Integer) 1 <= array_util__Max_11);
#line 205 "array_util.m"
    if (array_util__succeeded)
#line 202 "array_util.m"
      {
#line 202 "array_util.m"
        MR_Box array_util__E_32;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccU_20_33;
#line 202 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccV_21_34;
#line 203 "array_util.m"
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 202 "array_util.m"
        {
#line 202 "array_util.m"
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, (MR_Integer) 1, &array_util__E_32);
        }
#line 203 "array_util.m"
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_7, (MR_Integer) 1)));
#line 203 "array_util.m"
        {
#line 203 "array_util.m"
          array_util__func_0(((MR_Box) array_util__P_7), ((MR_Box) ((MR_Integer) 1)), array_util__E_32, array_util__STATE_VARIABLE_AccU_0_12, &array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccV_0_14, &array_util__STATE_VARIABLE_AccV_21_34);
        }
#line 204 "array_util.m"
        {
#line 204 "array_util.m"
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_19, (MR_Integer) 2, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_20_33, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_21_34, array_util__STATE_VARIABLE_AccV_15);
#line 204 "array_util.m"
          return;
        }
#line 202 "array_util.m"
      }
#line 205 "array_util.m"
    else
#line 206 "array_util.m"
      {
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccV_15 = array_util__STATE_VARIABLE_AccV_0_14;
#line 206 "array_util.m"
        *array_util__STATE_VARIABLE_AccU_13 = array_util__STATE_VARIABLE_AccU_0_12;
#line 206 "array_util.m"
      }
#line 174 "array_util.m"
  }
#line 66 "array_util.m"
}

#line 63 "array_util.m"
void MR_CALL 
array_util__array_foldl2_from_1_6_p_1(
#line 63 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 63 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_20,
#line 63 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_21,
#line 63 "array_util.m"
  MR_Word array_util__P_7,
#line 63 "array_util.m"
  MR_ArrayPtr array_util__A_8,
#line 63 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 63 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
#line 63 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
#line 63 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
#line 63 "array_util.m"
{
#line 174 "array_util.m"
  {
#line 174 "array_util.m"
    MR_bool array_util__succeeded;
#line 174 "array_util.m"
    MR_Integer array_util__Max_11;

#line 175 "array_util.m"
    {
#line 175 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
#line 176 "array_util.m"
    {
#line 176 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_p_1(array_util__TypeInfo_for_T_19, (MR_Integer) 1, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_0_14, array_util__STATE_VARIABLE_AccV_15);
#line 176 "array_util.m"
      return;
    }
#line 174 "array_util.m"
  }
#line 63 "array_util.m"
}

#line 61 "array_util.m"
void MR_CALL 
array_util__array_foldl2_from_1_6_p_0(
#line 61 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_19,
#line 61 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_20,
#line 61 "array_util.m"
  MR_Word array_util__TypeInfo_for_V_21,
#line 61 "array_util.m"
  MR_Word array_util__P_7,
#line 61 "array_util.m"
  MR_ArrayPtr array_util__A_8,
#line 61 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 61 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13,
#line 61 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccV_0_14,
#line 61 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccV_15)
#line 61 "array_util.m"
{
#line 174 "array_util.m"
  {
#line 174 "array_util.m"
    MR_bool array_util__succeeded;
#line 174 "array_util.m"
    MR_Integer array_util__Max_11;

#line 175 "array_util.m"
    {
#line 175 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_19, array_util__A_8, &array_util__Max_11);
    }
#line 176 "array_util.m"
    {
#line 176 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_p_0(array_util__TypeInfo_for_T_19, (MR_Integer) 1, array_util__Max_11, array_util__P_7, array_util__A_8, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13, array_util__STATE_VARIABLE_AccV_0_14, array_util__STATE_VARIABLE_AccV_15);
#line 176 "array_util.m"
      return;
    }
#line 174 "array_util.m"
  }
#line 61 "array_util.m"
}

#line 55 "array_util.m"
void MR_CALL 
array_util__array_foldl_6_p_2(
#line 55 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_15,
#line 55 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_16,
#line 55 "array_util.m"
  MR_Integer array_util__N_7,
#line 55 "array_util.m"
  MR_Integer array_util__Max_8,
#line 55 "array_util.m"
  MR_Word array_util__P_9,
#line 55 "array_util.m"
  MR_ArrayPtr array_util__A_10,
#line 55 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 55 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13)
#line 55 "array_util.m"
{
#line 170 "array_util.m"
  {
#line 170 "array_util.m"
    MR_bool array_util__succeeded = (array_util__N_7 <= array_util__Max_8);

#line 170 "array_util.m"
    if (array_util__succeeded)
#line 167 "array_util.m"
      {
#line 167 "array_util.m"
        MR_Box array_util__E_24;
#line 167 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccU_15_25;
#line 167 "array_util.m"
        MR_Integer array_util__V_26_26;
#line 168 "array_util.m"
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 167 "array_util.m"
        {
#line 167 "array_util.m"
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_15, array_util__A_10, array_util__N_7, &array_util__E_24);
        }
#line 168 "array_util.m"
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_9, (MR_Integer) 1)));
#line 168 "array_util.m"
        {
#line 168 "array_util.m"
          array_util__func_0(((MR_Box) array_util__P_9), ((MR_Box) (array_util__N_7)), array_util__E_24, array_util__STATE_VARIABLE_AccU_0_12, &array_util__STATE_VARIABLE_AccU_15_25);
        }
#line 169 "array_util.m"
        array_util__V_26_26 = (array_util__N_7 + (MR_Integer) 1);
#line 169 "array_util.m"
        {
#line 169 "array_util.m"
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_15, array_util__V_26_26, array_util__Max_8, array_util__P_9, array_util__A_10, array_util__STATE_VARIABLE_AccU_15_25, array_util__STATE_VARIABLE_AccU_13);
#line 169 "array_util.m"
          return;
        }
#line 167 "array_util.m"
      }
#line 170 "array_util.m"
    else
#line 169 "array_util.m"
      *array_util__STATE_VARIABLE_AccU_13 = array_util__STATE_VARIABLE_AccU_0_12;
#line 170 "array_util.m"
  }
#line 55 "array_util.m"
}

#line 53 "array_util.m"
void MR_CALL 
array_util__array_foldl_6_p_1(
#line 53 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_15,
#line 53 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_16,
#line 53 "array_util.m"
  MR_Integer array_util__N_7,
#line 53 "array_util.m"
  MR_Integer array_util__Max_8,
#line 53 "array_util.m"
  MR_Word array_util__P_9,
#line 53 "array_util.m"
  MR_ArrayPtr array_util__A_10,
#line 53 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 53 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13)
#line 53 "array_util.m"
{
#line 152 "array_util.m"
  {
#line 152 "array_util.m"
    MR_bool array_util__succeeded;

#line 152 "array_util.m"
    {
#line 152 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_15, array_util__N_7, array_util__Max_8, array_util__P_9, array_util__A_10, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13);
#line 152 "array_util.m"
      return;
    }
#line 152 "array_util.m"
  }
#line 53 "array_util.m"
}

#line 52 "array_util.m"
void MR_CALL 
array_util__array_foldl_6_p_0(
#line 52 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_15,
#line 52 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_16,
#line 52 "array_util.m"
  MR_Integer array_util__N_7,
#line 52 "array_util.m"
  MR_Integer array_util__Max_8,
#line 52 "array_util.m"
  MR_Word array_util__P_9,
#line 52 "array_util.m"
  MR_ArrayPtr array_util__A_10,
#line 52 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_12,
#line 52 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_13)
#line 52 "array_util.m"
{
#line 152 "array_util.m"
  {
#line 152 "array_util.m"
    MR_bool array_util__succeeded;

#line 152 "array_util.m"
    {
#line 152 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(array_util__TypeInfo_for_T_15, array_util__N_7, array_util__Max_8, array_util__P_9, array_util__A_10, array_util__STATE_VARIABLE_AccU_0_12, array_util__STATE_VARIABLE_AccU_13);
#line 152 "array_util.m"
      return;
    }
#line 152 "array_util.m"
  }
#line 52 "array_util.m"
}

#line 46 "array_util.m"
void MR_CALL 
array_util__array_foldl_from_0_4_p_2(
#line 46 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_13,
#line 46 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_14,
#line 46 "array_util.m"
  MR_Word array_util__P_5,
#line 46 "array_util.m"
  MR_ArrayPtr array_util__A_6,
#line 46 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
#line 46 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
#line 46 "array_util.m"
{
#line 147 "array_util.m"
  {
#line 147 "array_util.m"
    MR_bool array_util__succeeded;
#line 147 "array_util.m"
    MR_Integer array_util__Max_8;

#line 148 "array_util.m"
    {
#line 148 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
#line 166 "array_util.m"
    array_util__succeeded = ((MR_Integer) 0 <= array_util__Max_8);
#line 170 "array_util.m"
    if (array_util__succeeded)
#line 167 "array_util.m"
      {
#line 167 "array_util.m"
        MR_Box array_util__E_22;
#line 167 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccU_15_23;
#line 168 "array_util.m"
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 167 "array_util.m"
        {
#line 167 "array_util.m"
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, (MR_Integer) 0, &array_util__E_22);
        }
#line 168 "array_util.m"
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_5, (MR_Integer) 1)));
#line 168 "array_util.m"
        {
#line 168 "array_util.m"
          array_util__func_0(((MR_Box) array_util__P_5), ((MR_Box) ((MR_Integer) 0)), array_util__E_22, array_util__STATE_VARIABLE_AccU_0_9, &array_util__STATE_VARIABLE_AccU_15_23);
        }
#line 169 "array_util.m"
        {
#line 169 "array_util.m"
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, (MR_Integer) 1, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_15_23, array_util__STATE_VARIABLE_AccU_10);
#line 169 "array_util.m"
          return;
        }
#line 167 "array_util.m"
      }
#line 170 "array_util.m"
    else
#line 169 "array_util.m"
      *array_util__STATE_VARIABLE_AccU_10 = array_util__STATE_VARIABLE_AccU_0_9;
#line 147 "array_util.m"
  }
#line 46 "array_util.m"
}

#line 44 "array_util.m"
void MR_CALL 
array_util__array_foldl_from_0_4_p_1(
#line 44 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_13,
#line 44 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_14,
#line 44 "array_util.m"
  MR_Word array_util__P_5,
#line 44 "array_util.m"
  MR_ArrayPtr array_util__A_6,
#line 44 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
#line 44 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
#line 44 "array_util.m"
{
#line 147 "array_util.m"
  {
#line 147 "array_util.m"
    MR_bool array_util__succeeded;
#line 147 "array_util.m"
    MR_Integer array_util__Max_8;

#line 148 "array_util.m"
    {
#line 148 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
#line 149 "array_util.m"
    {
#line 149 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, (MR_Integer) 0, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
#line 149 "array_util.m"
      return;
    }
#line 147 "array_util.m"
  }
#line 44 "array_util.m"
}

#line 43 "array_util.m"
void MR_CALL 
array_util__array_foldl_from_0_4_p_0(
#line 43 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_13,
#line 43 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_14,
#line 43 "array_util.m"
  MR_Word array_util__P_5,
#line 43 "array_util.m"
  MR_ArrayPtr array_util__A_6,
#line 43 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
#line 43 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
#line 43 "array_util.m"
{
#line 147 "array_util.m"
  {
#line 147 "array_util.m"
    MR_bool array_util__succeeded;
#line 147 "array_util.m"
    MR_Integer array_util__Max_8;

#line 148 "array_util.m"
    {
#line 148 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
#line 149 "array_util.m"
    {
#line 149 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(array_util__TypeInfo_for_T_13, (MR_Integer) 0, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
#line 149 "array_util.m"
      return;
    }
#line 147 "array_util.m"
  }
#line 43 "array_util.m"
}

#line 37 "array_util.m"
void MR_CALL 
array_util__array_foldl_from_1_4_p_2(
#line 37 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_13,
#line 37 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_14,
#line 37 "array_util.m"
  MR_Word array_util__P_5,
#line 37 "array_util.m"
  MR_ArrayPtr array_util__A_6,
#line 37 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
#line 37 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
#line 37 "array_util.m"
{
#line 143 "array_util.m"
  {
#line 143 "array_util.m"
    MR_bool array_util__succeeded;
#line 143 "array_util.m"
    MR_Integer array_util__Max_8;

#line 144 "array_util.m"
    {
#line 144 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
#line 166 "array_util.m"
    array_util__succeeded = ((MR_Integer) 1 <= array_util__Max_8);
#line 170 "array_util.m"
    if (array_util__succeeded)
#line 167 "array_util.m"
      {
#line 167 "array_util.m"
        MR_Box array_util__E_22;
#line 167 "array_util.m"
        MR_Box array_util__STATE_VARIABLE_AccU_15_23;
#line 168 "array_util.m"
        void MR_CALL (* array_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 167 "array_util.m"
        {
#line 167 "array_util.m"
          mercury__array__lookup_3_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, (MR_Integer) 1, &array_util__E_22);
        }
#line 168 "array_util.m"
        array_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), array_util__P_5, (MR_Integer) 1)));
#line 168 "array_util.m"
        {
#line 168 "array_util.m"
          array_util__func_0(((MR_Box) array_util__P_5), ((MR_Box) ((MR_Integer) 1)), array_util__E_22, array_util__STATE_VARIABLE_AccU_0_9, &array_util__STATE_VARIABLE_AccU_15_23);
        }
#line 169 "array_util.m"
        {
#line 169 "array_util.m"
          array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, (MR_Integer) 2, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_15_23, array_util__STATE_VARIABLE_AccU_10);
#line 169 "array_util.m"
          return;
        }
#line 167 "array_util.m"
      }
#line 170 "array_util.m"
    else
#line 169 "array_util.m"
      *array_util__STATE_VARIABLE_AccU_10 = array_util__STATE_VARIABLE_AccU_0_9;
#line 143 "array_util.m"
  }
#line 37 "array_util.m"
}

#line 35 "array_util.m"
void MR_CALL 
array_util__array_foldl_from_1_4_p_1(
#line 35 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_13,
#line 35 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_14,
#line 35 "array_util.m"
  MR_Word array_util__P_5,
#line 35 "array_util.m"
  MR_ArrayPtr array_util__A_6,
#line 35 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
#line 35 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
#line 35 "array_util.m"
{
#line 143 "array_util.m"
  {
#line 143 "array_util.m"
    MR_bool array_util__succeeded;
#line 143 "array_util.m"
    MR_Integer array_util__Max_8;

#line 144 "array_util.m"
    {
#line 144 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
#line 145 "array_util.m"
    {
#line 145 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_p_1(array_util__TypeInfo_for_T_13, (MR_Integer) 1, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
#line 145 "array_util.m"
      return;
    }
#line 143 "array_util.m"
  }
#line 35 "array_util.m"
}

#line 34 "array_util.m"
void MR_CALL 
array_util__array_foldl_from_1_4_p_0(
#line 34 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_13,
#line 34 "array_util.m"
  MR_Word array_util__TypeInfo_for_U_14,
#line 34 "array_util.m"
  MR_Word array_util__P_5,
#line 34 "array_util.m"
  MR_ArrayPtr array_util__A_6,
#line 34 "array_util.m"
  MR_Box array_util__STATE_VARIABLE_AccU_0_9,
#line 34 "array_util.m"
  MR_Box * array_util__STATE_VARIABLE_AccU_10)
#line 34 "array_util.m"
{
#line 143 "array_util.m"
  {
#line 143 "array_util.m"
    MR_bool array_util__succeeded;
#line 143 "array_util.m"
    MR_Integer array_util__Max_8;

#line 144 "array_util.m"
    {
#line 144 "array_util.m"
      mercury__array__max_2_p_0(array_util__TypeInfo_for_T_13, array_util__A_6, &array_util__Max_8);
    }
#line 145 "array_util.m"
    {
#line 145 "array_util.m"
      array_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_p_0(array_util__TypeInfo_for_T_13, (MR_Integer) 1, array_util__Max_8, array_util__P_5, array_util__A_6, array_util__STATE_VARIABLE_AccU_0_9, array_util__STATE_VARIABLE_AccU_10);
#line 145 "array_util.m"
      return;
    }
#line 143 "array_util.m"
  }
#line 34 "array_util.m"
}

#line 28 "array_util.m"
MR_Box MR_CALL 
array_util__u_1_f_0(
#line 28 "array_util.m"
  MR_Word array_util__TypeInfo_for_T_3,
#line 28 "array_util.m"
  MR_Box array_util__HeadVar__1_1)
#line 28 "array_util.m"
{
#line 136 "array_util.m"
  {
#line 136 "array_util.m"
    MR_bool array_util__succeeded;
#line 136 "array_util.m"
    MR_Box array_util__HeadVar__2_2;
#line 136 "array_util.m"
    MR_Word array_util__TypeInfo_for_T_4;

#line 139 "array_util.m"
{
#define MR_PROC_LABEL array_util__u_1_f_0

	MR_Word A;
	MR_Word B;

	A = (MR_Word) array_util__HeadVar__1_1 ;
		{
#line 139 "array_util.m"

    B = A;

#line 2346 "array_util.c"

		;}
#undef MR_PROC_LABEL
	 array_util__HeadVar__2_2  = (MR_Box) B;
#line 139 "array_util.m"
}
#line 136 "array_util.m"
    return array_util__HeadVar__2_2;
#line 136 "array_util.m"
  }
#line 28 "array_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module array_util. */
