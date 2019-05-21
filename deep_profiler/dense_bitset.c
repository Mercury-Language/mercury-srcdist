/*
** Automatically generated from `dense_bitset.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module dense_bitset. */
/* :- implementation. */

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
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1(
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0(
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15);

static void MR_CALL 
dense_bitset__foldl1__ho2_6_p_0(
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_13);

static void MR_CALL 
dense_bitset__foldl2__ho3_6_p_0(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_15);

static MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0_10001(
  MR_Box dense_bitset__wrapper_arg_1,
  MR_Box dense_bitset__wrapper_arg_2);

static void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0_10001(
  MR_Box * dense_bitset__wrapper_arg_1,
  MR_Box dense_bitset__wrapper_arg_2,
  MR_Box dense_bitset__wrapper_arg_3);


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
  MR_Word * dense_bitset__HeadVar__1_1,
  MR_ArrayPtr dense_bitset__HeadVar__2_2,
  MR_ArrayPtr dense_bitset__HeadVar__3_3)
{
  {
    MR_ArrayPtr dense_bitset__Cast_HeadVar1_4 = dense_bitset__HeadVar__2_2;
    MR_ArrayPtr dense_bitset__Cast_HeadVar2_5 = dense_bitset__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &dense_bitset_scalar_common_1[0], dense_bitset__HeadVar__1_1, ((MR_Box) (dense_bitset__Cast_HeadVar1_4)), ((MR_Box) (dense_bitset__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0(
  MR_ArrayPtr dense_bitset__HeadVar__1_1,
  MR_ArrayPtr dense_bitset__HeadVar__2_2)
{
  {
    MR_bool dense_bitset__succeeded;
    MR_ArrayPtr dense_bitset__Cast_HeadVar1_3 = dense_bitset__HeadVar__1_1;
    MR_ArrayPtr dense_bitset__Cast_HeadVar2_4 = dense_bitset__HeadVar__2_2;

    dense_bitset__succeeded = mercury__array____Unify____array_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__Cast_HeadVar1_3, (MR_ArrayPtr) dense_bitset__Cast_HeadVar2_4);
    return dense_bitset__succeeded;
  }
}

void MR_CALL 
dense_bitset__foldl_4_p_2(
  MR_Word dense_bitset__TypeInfo_for_T_13,
  MR_Word dense_bitset__P_5,
  MR_ArrayPtr dense_bitset__A0_6,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_9,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer dense_bitset__Max_8;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_6, &dense_bitset__Max_8);
    dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2((MR_Integer) 0, dense_bitset__Max_8, dense_bitset__P_5, dense_bitset__A0_6, dense_bitset__STATE_VARIABLE_Acc_0_9, dense_bitset__STATE_VARIABLE_Acc_10);
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2(
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

      if (dense_bitset__succeeded)
      {
        MR_Box dense_bitset__STATE_VARIABLE_Acc_15_15;
        MR_Integer dense_bitset__Var_16;

        dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__P_9, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
        dense_bitset__Var_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_Min_7 = dense_bitset__Var_16;
          MR_Box dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

          dense_bitset__Min_7 = dense_bitset__next_value_of_Min_7;
          dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
    }
    break;
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

      if (dense_bitset__succeeded)
      {
        MR_Integer dense_bitset__Word_12;
        MR_Box dense_bitset__STATE_VARIABLE_Acc_22_22;
        MR_Integer dense_bitset__Var_23;
        MR_Box dense_bitset__conv0_Word_12;
        MR_Integer dense_bitset__Var_17;
        MR_Integer dense_bitset__Var_18;

        mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
        dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
        dense_bitset__Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
        dense_bitset__Var_17 = (dense_bitset__Var_18 & dense_bitset__Word_12);
        dense_bitset__succeeded = (dense_bitset__Var_17 == (MR_Integer) 0);
        dense_bitset__succeeded = !(dense_bitset__succeeded);
        if (dense_bitset__succeeded)
        {
          MR_Integer dense_bitset__I_13;
          MR_Integer dense_bitset__Var_20 = (dense_bitset__W_8 * (MR_Integer) 32);
          void MR_CALL (* dense_bitset__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

          dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__Var_20);
          dense_bitset__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), dense_bitset__P_9, (MR_Integer) 1)));
          dense_bitset__func_1(((MR_Box) dense_bitset__P_9), ((MR_Box) (dense_bitset__I_13)), dense_bitset__STATE_VARIABLE_Acc_0_14, &dense_bitset__STATE_VARIABLE_Acc_22_22);
        }
        else
          dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
        dense_bitset__Var_23 = (dense_bitset__B_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_B_7 = dense_bitset__Var_23;
          MR_Box dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

          dense_bitset__B_7 = dense_bitset__next_value_of_B_7;
          dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
dense_bitset__foldl_4_p_1(
  MR_Word dense_bitset__TypeInfo_for_T_13,
  MR_Word dense_bitset__P_5,
  MR_ArrayPtr dense_bitset__A0_6,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_9,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer dense_bitset__Max_8;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_6, &dense_bitset__Max_8);
    dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1((MR_Integer) 0, dense_bitset__Max_8, dense_bitset__P_5, dense_bitset__A0_6, dense_bitset__STATE_VARIABLE_Acc_0_9, dense_bitset__STATE_VARIABLE_Acc_10);
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1(
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

      if (dense_bitset__succeeded)
      {
        MR_Box dense_bitset__STATE_VARIABLE_Acc_15_15;
        MR_Integer dense_bitset__Var_16;

        dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__P_9, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
        dense_bitset__Var_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_Min_7 = dense_bitset__Var_16;
          MR_Box dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

          dense_bitset__Min_7 = dense_bitset__next_value_of_Min_7;
          dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
    }
    break;
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

      if (dense_bitset__succeeded)
      {
        MR_Integer dense_bitset__Word_12;
        MR_Box dense_bitset__STATE_VARIABLE_Acc_22_22;
        MR_Integer dense_bitset__Var_23;
        MR_Box dense_bitset__conv0_Word_12;
        MR_Integer dense_bitset__Var_17;
        MR_Integer dense_bitset__Var_18;

        mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
        dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
        dense_bitset__Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
        dense_bitset__Var_17 = (dense_bitset__Var_18 & dense_bitset__Word_12);
        dense_bitset__succeeded = (dense_bitset__Var_17 == (MR_Integer) 0);
        dense_bitset__succeeded = !(dense_bitset__succeeded);
        if (dense_bitset__succeeded)
        {
          MR_Integer dense_bitset__I_13;
          MR_Integer dense_bitset__Var_20 = (dense_bitset__W_8 * (MR_Integer) 32);
          void MR_CALL (* dense_bitset__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

          dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__Var_20);
          dense_bitset__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), dense_bitset__P_9, (MR_Integer) 1)));
          dense_bitset__func_1(((MR_Box) dense_bitset__P_9), ((MR_Box) (dense_bitset__I_13)), dense_bitset__STATE_VARIABLE_Acc_0_14, &dense_bitset__STATE_VARIABLE_Acc_22_22);
        }
        else
          dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
        dense_bitset__Var_23 = (dense_bitset__B_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_B_7 = dense_bitset__Var_23;
          MR_Box dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

          dense_bitset__B_7 = dense_bitset__next_value_of_B_7;
          dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
dense_bitset__foldl_4_p_0(
  MR_Word dense_bitset__TypeInfo_for_T_13,
  MR_Word dense_bitset__P_5,
  MR_ArrayPtr dense_bitset__A0_6,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_9,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer dense_bitset__Max_8;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_6, &dense_bitset__Max_8);
    dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0((MR_Integer) 0, dense_bitset__Max_8, dense_bitset__P_5, dense_bitset__A0_6, dense_bitset__STATE_VARIABLE_Acc_0_9, dense_bitset__STATE_VARIABLE_Acc_10);
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0(
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

      if (dense_bitset__succeeded)
      {
        MR_Box dense_bitset__STATE_VARIABLE_Acc_15_15;
        MR_Integer dense_bitset__Var_16;

        dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__P_9, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
        dense_bitset__Var_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_Min_7 = dense_bitset__Var_16;
          MR_Box dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

          dense_bitset__Min_7 = dense_bitset__next_value_of_Min_7;
          dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
    }
    break;
  }
}

static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_Word dense_bitset__P_9,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

      if (dense_bitset__succeeded)
      {
        MR_Integer dense_bitset__Word_12;
        MR_Box dense_bitset__STATE_VARIABLE_Acc_22_22;
        MR_Integer dense_bitset__Var_23;
        MR_Box dense_bitset__conv0_Word_12;
        MR_Integer dense_bitset__Var_17;
        MR_Integer dense_bitset__Var_18;

        mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
        dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
        dense_bitset__Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
        dense_bitset__Var_17 = (dense_bitset__Var_18 & dense_bitset__Word_12);
        dense_bitset__succeeded = (dense_bitset__Var_17 == (MR_Integer) 0);
        dense_bitset__succeeded = !(dense_bitset__succeeded);
        if (dense_bitset__succeeded)
        {
          MR_Integer dense_bitset__I_13;
          MR_Integer dense_bitset__Var_20 = (dense_bitset__W_8 * (MR_Integer) 32);
          void MR_CALL (* dense_bitset__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

          dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__Var_20);
          dense_bitset__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), dense_bitset__P_9, (MR_Integer) 1)));
          dense_bitset__func_1(((MR_Box) dense_bitset__P_9), ((MR_Box) (dense_bitset__I_13)), dense_bitset__STATE_VARIABLE_Acc_0_14, &dense_bitset__STATE_VARIABLE_Acc_22_22);
        }
        else
          dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
        dense_bitset__Var_23 = (dense_bitset__B_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_B_7 = dense_bitset__Var_23;
          MR_Box dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

          dense_bitset__B_7 = dense_bitset__next_value_of_B_7;
          dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__union_2_f_0(
  MR_ArrayPtr dense_bitset__A_4,
  MR_ArrayPtr dense_bitset__B_5)
{
  {
    MR_ArrayPtr dense_bitset__C_6;
    MR_Integer dense_bitset__Max_24;

    mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A_4, &dense_bitset__Max_24);
    dense_bitset__foldl1__ho2_6_p_0((MR_Integer) 0, dense_bitset__Max_24, dense_bitset__A_4, dense_bitset__B_5, &dense_bitset__C_6);
    return dense_bitset__C_6;
  }
}

static void MR_CALL 
dense_bitset__foldl1__ho2_6_p_0(
  MR_Integer dense_bitset__Min_7,
  MR_Integer dense_bitset__Max_8,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_12,
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

      if (dense_bitset__succeeded)
      {
        MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_15_15;
        MR_Integer dense_bitset__Var_16;

        dense_bitset__foldl2__ho3_6_p_0((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
        dense_bitset__Var_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_Min_7 = dense_bitset__Var_16;
          MR_ArrayPtr dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

          dense_bitset__Min_7 = dense_bitset__next_value_of_Min_7;
          dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
    }
    break;
  }
}

static void MR_CALL 
dense_bitset__foldl2__ho3_6_p_0(
  MR_Integer dense_bitset__B_7,
  MR_Integer dense_bitset__W_8,
  MR_ArrayPtr dense_bitset__A0_10,
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_14,
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

      if (dense_bitset__succeeded)
      {
        MR_Integer dense_bitset__Word_12;
        MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_22_22;
        MR_Integer dense_bitset__Var_23;
        MR_Box dense_bitset__conv0_Word_12;
        MR_Integer dense_bitset__Var_17;
        MR_Integer dense_bitset__Var_18;

        mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
        dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
        dense_bitset__Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
        dense_bitset__Var_17 = (dense_bitset__Var_18 & dense_bitset__Word_12);
        dense_bitset__succeeded = (dense_bitset__Var_17 == (MR_Integer) 0);
        dense_bitset__succeeded = !(dense_bitset__succeeded);
        if (dense_bitset__succeeded)
        {
          MR_Integer dense_bitset__I_13;
          MR_Integer dense_bitset__Var_20 = (dense_bitset__W_8 * (MR_Integer) 32);

          dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__Var_20);
          dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__insert_2_f_0(dense_bitset__STATE_VARIABLE_Acc_0_14, dense_bitset__I_13);
        }
        else
          dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
        dense_bitset__Var_23 = (dense_bitset__B_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer dense_bitset__next_value_of_B_7 = dense_bitset__Var_23;
          MR_ArrayPtr dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

          dense_bitset__B_7 = dense_bitset__next_value_of_B_7;
          dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__delete_2_f_0(
  MR_ArrayPtr dense_bitset__A0_4,
  MR_Integer dense_bitset__I_5)
{
  {
    MR_bool dense_bitset__succeeded;
    MR_ArrayPtr dense_bitset__A_6;
    MR_Word dense_bitset__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer dense_bitset__Max_7;

    mercury__array__max_2_p_0(dense_bitset__TypeCtorInfo_18_18, (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__Max_7);
    dense_bitset__succeeded = (dense_bitset__I_5 > dense_bitset__Max_7);
    if (dense_bitset__succeeded)
      dense_bitset__A_6 = dense_bitset__A0_4;
    else
    {
      dense_bitset__succeeded = (dense_bitset__I_5 >= (MR_Integer) 0);
      if (dense_bitset__succeeded)
      {
        MR_Integer dense_bitset__Word0_8;
        MR_Integer dense_bitset__Word_9;
        MR_Integer dense_bitset__Var_11;
        MR_Integer dense_bitset__Var_12;
        MR_Integer dense_bitset__Var_13;
        MR_Integer dense_bitset__Var_14;
        MR_Integer dense_bitset__Var_23;
        MR_Box dense_bitset__conv0_Word0_8;
        MR_ArrayPtr dense_bitset__conv1_A_6;

        dense_bitset__Var_11 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
        mercury__array__lookup_3_p_0(dense_bitset__TypeCtorInfo_18_18, (MR_ArrayPtr) dense_bitset__A0_4, dense_bitset__Var_11, &dense_bitset__conv0_Word0_8);
        dense_bitset__Word0_8 = ((MR_Integer) dense_bitset__conv0_Word0_8);
        dense_bitset__Var_23 = (dense_bitset__I_5 & (MR_Integer) 31);
        dense_bitset__Var_13 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__Var_23);
        dense_bitset__Var_12 = ~(dense_bitset__Var_13);
        dense_bitset__Word_9 = (dense_bitset__Word0_8 & dense_bitset__Var_12);
        dense_bitset__Var_14 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
        mercury__array__set_4_p_0(dense_bitset__TypeCtorInfo_18_18, dense_bitset__Var_14, ((MR_Box) (dense_bitset__Word_9)), (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__conv1_A_6);
        dense_bitset__A_6 = (MR_ArrayPtr) dense_bitset__conv1_A_6;
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "dense_bitset", (MR_String) "function \140dense_bitset.delete\'/2", (MR_String) "cannot use indexes < 0");
      }
    }
    return dense_bitset__A_6;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__insert_2_f_0(
  MR_ArrayPtr dense_bitset__A0_4,
  MR_Integer dense_bitset__I_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool dense_bitset__succeeded;
      MR_ArrayPtr dense_bitset__A_6;
      MR_Word dense_bitset__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Integer dense_bitset__Max_7;
      MR_Integer dense_bitset__Var_11;

      mercury__array__max_2_p_0(dense_bitset__TypeCtorInfo_24_24, (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__Max_7);
      dense_bitset__Var_11 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
      dense_bitset__succeeded = (dense_bitset__Var_11 > dense_bitset__Max_7);
      if (dense_bitset__succeeded)
      {
        MR_ArrayPtr dense_bitset__A1_8;
        MR_Integer dense_bitset__Var_12;
        MR_Integer dense_bitset__Var_14 = (dense_bitset__Max_7 + (MR_Integer) 1);
        MR_ArrayPtr dense_bitset__conv0_A1_8;

        dense_bitset__Var_12 = (dense_bitset__Var_14 * (MR_Integer) 2);
        mercury__array__resize_4_p_0(dense_bitset__TypeCtorInfo_24_24, dense_bitset__Var_12, ((MR_Box) ((MR_Integer) 0)), (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__conv0_A1_8);
        dense_bitset__A1_8 = (MR_ArrayPtr) dense_bitset__conv0_A1_8;
        /* direct tailcall eliminated */
        {
          MR_ArrayPtr dense_bitset__next_value_of_A0_4 = dense_bitset__A1_8;

          dense_bitset__A0_4 = dense_bitset__next_value_of_A0_4;
        }
        continue;
      }
      else
      {
        dense_bitset__succeeded = (dense_bitset__I_5 >= (MR_Integer) 0);
        if (dense_bitset__succeeded)
        {
          MR_Integer dense_bitset__Word0_9;
          MR_Integer dense_bitset__Word_10;
          MR_Integer dense_bitset__Var_18;
          MR_Integer dense_bitset__Var_19;
          MR_Integer dense_bitset__Var_20;
          MR_Integer dense_bitset__Var_31;
          MR_Box dense_bitset__conv1_Word0_9;
          MR_ArrayPtr dense_bitset__conv2_A_6;

          dense_bitset__Var_18 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
          mercury__array__lookup_3_p_0(dense_bitset__TypeCtorInfo_24_24, (MR_ArrayPtr) dense_bitset__A0_4, dense_bitset__Var_18, &dense_bitset__conv1_Word0_9);
          dense_bitset__Word0_9 = ((MR_Integer) dense_bitset__conv1_Word0_9);
          dense_bitset__Var_31 = (dense_bitset__I_5 & (MR_Integer) 31);
          dense_bitset__Var_19 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__Var_31);
          dense_bitset__Word_10 = (dense_bitset__Word0_9 | dense_bitset__Var_19);
          dense_bitset__Var_20 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
          mercury__array__set_4_p_0(dense_bitset__TypeCtorInfo_24_24, dense_bitset__Var_20, ((MR_Box) (dense_bitset__Word_10)), (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__conv2_A_6);
          dense_bitset__A_6 = (MR_ArrayPtr) dense_bitset__conv2_A_6;
        }
        else
        {
          mercury__require__unexpected_3_p_0((MR_String) "dense_bitset", (MR_String) "function \140dense_bitset.insert\'/2", (MR_String) "cannot use indexes < 0");
        }
      }
      return dense_bitset__A_6;
    }
    break;
  }
}

MR_bool MR_CALL 
dense_bitset__member_2_p_0(
  MR_Integer dense_bitset__I_3,
  MR_ArrayPtr dense_bitset__A_4)
{
  {
    MR_bool dense_bitset__succeeded;
    MR_Word dense_bitset__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer dense_bitset__Max_5;
    MR_Integer dense_bitset__Word_6;
    MR_Integer dense_bitset__Var_7;
    MR_Integer dense_bitset__Var_9;
    MR_Integer dense_bitset__Var_10;
    MR_Integer dense_bitset__Var_17;
    MR_Integer dense_bitset__Var_19;
    MR_Box dense_bitset__conv0_Word_6;
    MR_Integer dense_bitset__Var_11;
    MR_Integer dense_bitset__Var_12;
    MR_Integer dense_bitset__Var_21;
    MR_Integer dense_bitset__Var_22;
    MR_Integer dense_bitset__Var_23;

    mercury__array__max_2_p_0(dense_bitset__TypeCtorInfo_13_13, (MR_ArrayPtr) dense_bitset__A_4, &dense_bitset__Max_5);
    dense_bitset__Var_7 = mercury__int__f_47_47_2_f_0(dense_bitset__I_3, (MR_Integer) 32);
    dense_bitset__succeeded = (dense_bitset__Var_7 >= (MR_Integer) 0);
    if (dense_bitset__succeeded)
    {
      dense_bitset__Var_17 = (MR_Integer) 32;
      dense_bitset__Var_9 = mercury__int__f_47_47_2_f_0(dense_bitset__I_3, dense_bitset__Var_17);
      dense_bitset__succeeded = (dense_bitset__Var_9 <= dense_bitset__Max_5);
      if (dense_bitset__succeeded)
      {
        dense_bitset__Var_19 = (MR_Integer) 32;
        dense_bitset__Var_10 = mercury__int__f_47_47_2_f_0(dense_bitset__I_3, dense_bitset__Var_19);
        mercury__array__lookup_3_p_0(dense_bitset__TypeCtorInfo_13_13, (MR_ArrayPtr) dense_bitset__A_4, dense_bitset__Var_10, &dense_bitset__conv0_Word_6);
        dense_bitset__Word_6 = ((MR_Integer) dense_bitset__conv0_Word_6);
        dense_bitset__Var_21 = (MR_Integer) 1;
        dense_bitset__Var_23 = (MR_Integer) 31;
        dense_bitset__Var_22 = (dense_bitset__I_3 & dense_bitset__Var_23);
        dense_bitset__Var_12 = mercury__int__f_60_60_2_f_0(dense_bitset__Var_21, dense_bitset__Var_22);
        dense_bitset__Var_11 = (dense_bitset__Var_12 & dense_bitset__Word_6);
        dense_bitset__succeeded = (dense_bitset__Var_11 == (MR_Integer) 0);
        dense_bitset__succeeded = !(dense_bitset__succeeded);
      }
    }
    return dense_bitset__succeeded;
  }
}

MR_ArrayPtr MR_CALL 
dense_bitset__init_0_f_0(void)
{
  {
    MR_ArrayPtr dense_bitset__HeadVar__1_1;
    MR_ArrayPtr dense_bitset__conv0_HeadVar__1_1;

    dense_bitset__conv0_HeadVar__1_1 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) MR_mkword(MR_mktag(1), &dense_bitset_scalar_common_1[1]));
    dense_bitset__HeadVar__1_1 = (MR_ArrayPtr) dense_bitset__conv0_HeadVar__1_1;
    return dense_bitset__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0_10001(
  MR_Box dense_bitset__wrapper_arg_1,
  MR_Box dense_bitset__wrapper_arg_2)
{
  {
    MR_bool dense_bitset__succeeded;

    dense_bitset__succeeded = dense_bitset____Unify____dense_bitset_0_0(((MR_ArrayPtr) dense_bitset__wrapper_arg_1), ((MR_ArrayPtr) dense_bitset__wrapper_arg_2));
    return dense_bitset__succeeded;
  }
}

static void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0_10001(
  MR_Box * dense_bitset__wrapper_arg_1,
  MR_Box dense_bitset__wrapper_arg_2,
  MR_Box dense_bitset__wrapper_arg_3)
{
  {
    MR_Word dense_bitset__conv0_HeadVar__1_1;

    dense_bitset____Compare____dense_bitset_0_0(&dense_bitset__conv0_HeadVar__1_1, ((MR_ArrayPtr) dense_bitset__wrapper_arg_2), ((MR_ArrayPtr) dense_bitset__wrapper_arg_3));
    *dense_bitset__wrapper_arg_1 = ((MR_Box) (dense_bitset__conv0_HeadVar__1_1));
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

/* :- end_module dense_bitset. */
