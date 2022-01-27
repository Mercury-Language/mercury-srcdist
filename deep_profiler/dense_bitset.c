/*
** Automatically generated from `dense_bitset.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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




#line 67 "dense_bitset.c"
static const MR_FA_TypeInfo_Struct1 dense_bitset__array__ti_array_1builtin__type_ctor_info_int_0;

#line 70 "dense_bitset.c"
static MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0_10001(
#line 73 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_1,
#line 75 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_2);

#line 78 "dense_bitset.c"
static void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0_10001(
#line 81 "dense_bitset.c"
  MR_Box * dense_bitset__wrapper_arg_1,
#line 83 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_2,
#line 85 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_3);

#line 131 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2(
#line 131 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 131 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 131 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 131 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 131 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 131 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15);

#line 130 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1(
#line 130 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 130 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 130 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 130 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 130 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 130 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15);

#line 129 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0(
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 129 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 129 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 129 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 129 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15);

#line 117 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2(
#line 117 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 117 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 117 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 117 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 117 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 117 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13);

#line 116 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1(
#line 116 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 116 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 116 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 116 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 116 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 116 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13);

#line 115 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0(
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 115 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 115 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 115 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 115 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13);

#line 129 "dense_bitset.m"
static void MR_CALL 
dense_bitset__foldl2__ho3_6_p_0(
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 129 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 129 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 129 "dense_bitset.m"
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_15);

#line 115 "dense_bitset.m"
static void MR_CALL 
dense_bitset__foldl1__ho2_6_p_0(
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 115 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 115 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 115 "dense_bitset.m"
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_13);


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
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 246 "dense_bitset.c"
static const MR_FA_TypeInfo_Struct1 dense_bitset__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 254 "dense_bitset.c"
const MR_TypeCtorInfo_Struct dense_bitset__dense_bitset__type_ctor_info_dense_bitset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (dense_bitset____Unify____dense_bitset_0_0_10001)),
  ((MR_Box) (dense_bitset____Compare____dense_bitset_0_0_10001)),
  (MR_String) "dense_bitset",
  (MR_String) "dense_bitset",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &dense_bitset__array__ti_array_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 275 "dense_bitset.c"
static MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0_10001(
#line 278 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_1,
#line 280 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_2)
#line 282 "dense_bitset.c"
{
#line 284 "dense_bitset.c"
  {
#line 286 "dense_bitset.c"
    MR_bool dense_bitset__succeeded;

#line 289 "dense_bitset.c"
    {
#line 291 "dense_bitset.c"
      dense_bitset__succeeded = dense_bitset____Unify____dense_bitset_0_0(((MR_ArrayPtr) dense_bitset__wrapper_arg_1), ((MR_ArrayPtr) dense_bitset__wrapper_arg_2));
    }
#line 294 "dense_bitset.c"
    return dense_bitset__succeeded;
#line 296 "dense_bitset.c"
  }
#line 298 "dense_bitset.c"
}

#line 301 "dense_bitset.c"
static void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0_10001(
#line 304 "dense_bitset.c"
  MR_Box * dense_bitset__wrapper_arg_1,
#line 306 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_2,
#line 308 "dense_bitset.c"
  MR_Box dense_bitset__wrapper_arg_3)
#line 310 "dense_bitset.c"
{
#line 312 "dense_bitset.c"
  {
#line 314 "dense_bitset.c"
    MR_Word dense_bitset__conv0_HeadVar__1_1;

#line 317 "dense_bitset.c"
    {
#line 319 "dense_bitset.c"
      dense_bitset____Compare____dense_bitset_0_0(&dense_bitset__conv0_HeadVar__1_1, ((MR_ArrayPtr) dense_bitset__wrapper_arg_2), ((MR_ArrayPtr) dense_bitset__wrapper_arg_3));
    }
#line 322 "dense_bitset.c"
    *dense_bitset__wrapper_arg_1 = ((MR_Box) (dense_bitset__conv0_HeadVar__1_1));
#line 324 "dense_bitset.c"
  }
#line 326 "dense_bitset.c"
}

#line 131 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2(
#line 131 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 131 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 131 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 131 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 131 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 131 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15)
#line 131 "dense_bitset.m"
{
#line 144 "dense_bitset.m"
  while (MR_TRUE)
#line 144 "dense_bitset.m"
    {
#line 144 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 144 "dense_bitset.m"
      {
#line 144 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

#line 144 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 136 "dense_bitset.m"
          {
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__Word_12;
#line 136 "dense_bitset.m"
            MR_Box dense_bitset__STATE_VARIABLE_Acc_22_22;
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__V_23_23;
#line 136 "dense_bitset.m"
            MR_Box dense_bitset__conv0_Word_12;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_17_17;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_18_18;

#line 136 "dense_bitset.m"
            {
#line 136 "dense_bitset.m"
              mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
            }
#line 136 "dense_bitset.m"
            dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
#line 137 "dense_bitset.m"
            {
#line 137 "dense_bitset.m"
              dense_bitset__V_18_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
            }
#line 137 "dense_bitset.m"
            dense_bitset__V_17_17 = (dense_bitset__V_18_18 & dense_bitset__Word_12);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = (dense_bitset__V_17_17 == (MR_Integer) 0);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = !(dense_bitset__succeeded);
#line 140 "dense_bitset.m"
            if (dense_bitset__succeeded)
#line 138 "dense_bitset.m"
              {
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__I_13;
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__V_20_20 = (dense_bitset__W_8 * (MR_Integer) 32);
#line 139 "dense_bitset.m"
                void MR_CALL (* dense_bitset__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 138 "dense_bitset.m"
                dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__V_20_20);
#line 139 "dense_bitset.m"
                dense_bitset__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), dense_bitset__P_9, (MR_Integer) 1)));
#line 139 "dense_bitset.m"
                {
#line 139 "dense_bitset.m"
                  dense_bitset__func_1(((MR_Box) dense_bitset__P_9), ((MR_Box) (dense_bitset__I_13)), dense_bitset__STATE_VARIABLE_Acc_0_14, &dense_bitset__STATE_VARIABLE_Acc_22_22);
                }
#line 138 "dense_bitset.m"
              }
#line 140 "dense_bitset.m"
            else
#line 140 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 143 "dense_bitset.m"
            dense_bitset__V_23_23 = (dense_bitset__B_7 + (MR_Integer) 1);
#line 143 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 143 "dense_bitset.m"
            {
#line 143 "dense_bitset.m"
              MR_Integer dense_bitset__B__tmp_copy_7 = dense_bitset__V_23_23;
#line 143 "dense_bitset.m"
              MR_Box dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

#line 143 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 143 "dense_bitset.m"
              dense_bitset__B_7 = dense_bitset__B__tmp_copy_7;
#line 143 "dense_bitset.m"
            }
#line 143 "dense_bitset.m"
            continue;
#line 136 "dense_bitset.m"
          }
#line 144 "dense_bitset.m"
        else
#line 144 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 144 "dense_bitset.m"
      }
#line 144 "dense_bitset.m"
      break;
#line 144 "dense_bitset.m"
    }
#line 131 "dense_bitset.m"
}

#line 130 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1(
#line 130 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 130 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 130 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 130 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 130 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 130 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15)
#line 130 "dense_bitset.m"
{
#line 144 "dense_bitset.m"
  while (MR_TRUE)
#line 144 "dense_bitset.m"
    {
#line 144 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 144 "dense_bitset.m"
      {
#line 144 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

#line 144 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 136 "dense_bitset.m"
          {
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__Word_12;
#line 136 "dense_bitset.m"
            MR_Box dense_bitset__STATE_VARIABLE_Acc_22_22;
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__V_23_23;
#line 136 "dense_bitset.m"
            MR_Box dense_bitset__conv0_Word_12;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_17_17;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_18_18;

#line 136 "dense_bitset.m"
            {
#line 136 "dense_bitset.m"
              mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
            }
#line 136 "dense_bitset.m"
            dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
#line 137 "dense_bitset.m"
            {
#line 137 "dense_bitset.m"
              dense_bitset__V_18_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
            }
#line 137 "dense_bitset.m"
            dense_bitset__V_17_17 = (dense_bitset__V_18_18 & dense_bitset__Word_12);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = (dense_bitset__V_17_17 == (MR_Integer) 0);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = !(dense_bitset__succeeded);
#line 140 "dense_bitset.m"
            if (dense_bitset__succeeded)
#line 138 "dense_bitset.m"
              {
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__I_13;
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__V_20_20 = (dense_bitset__W_8 * (MR_Integer) 32);
#line 139 "dense_bitset.m"
                void MR_CALL (* dense_bitset__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 138 "dense_bitset.m"
                dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__V_20_20);
#line 139 "dense_bitset.m"
                dense_bitset__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), dense_bitset__P_9, (MR_Integer) 1)));
#line 139 "dense_bitset.m"
                {
#line 139 "dense_bitset.m"
                  dense_bitset__func_1(((MR_Box) dense_bitset__P_9), ((MR_Box) (dense_bitset__I_13)), dense_bitset__STATE_VARIABLE_Acc_0_14, &dense_bitset__STATE_VARIABLE_Acc_22_22);
                }
#line 138 "dense_bitset.m"
              }
#line 140 "dense_bitset.m"
            else
#line 140 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 143 "dense_bitset.m"
            dense_bitset__V_23_23 = (dense_bitset__B_7 + (MR_Integer) 1);
#line 143 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 143 "dense_bitset.m"
            {
#line 143 "dense_bitset.m"
              MR_Integer dense_bitset__B__tmp_copy_7 = dense_bitset__V_23_23;
#line 143 "dense_bitset.m"
              MR_Box dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

#line 143 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 143 "dense_bitset.m"
              dense_bitset__B_7 = dense_bitset__B__tmp_copy_7;
#line 143 "dense_bitset.m"
            }
#line 143 "dense_bitset.m"
            continue;
#line 136 "dense_bitset.m"
          }
#line 144 "dense_bitset.m"
        else
#line 144 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 144 "dense_bitset.m"
      }
#line 144 "dense_bitset.m"
      break;
#line 144 "dense_bitset.m"
    }
#line 130 "dense_bitset.m"
}

#line 129 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0(
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 129 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 129 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 129 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 129 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_15)
#line 129 "dense_bitset.m"
{
#line 144 "dense_bitset.m"
  while (MR_TRUE)
#line 144 "dense_bitset.m"
    {
#line 144 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 144 "dense_bitset.m"
      {
#line 144 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

#line 144 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 136 "dense_bitset.m"
          {
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__Word_12;
#line 136 "dense_bitset.m"
            MR_Box dense_bitset__STATE_VARIABLE_Acc_22_22;
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__V_23_23;
#line 136 "dense_bitset.m"
            MR_Box dense_bitset__conv0_Word_12;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_17_17;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_18_18;

#line 136 "dense_bitset.m"
            {
#line 136 "dense_bitset.m"
              mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
            }
#line 136 "dense_bitset.m"
            dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
#line 137 "dense_bitset.m"
            {
#line 137 "dense_bitset.m"
              dense_bitset__V_18_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
            }
#line 137 "dense_bitset.m"
            dense_bitset__V_17_17 = (dense_bitset__V_18_18 & dense_bitset__Word_12);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = (dense_bitset__V_17_17 == (MR_Integer) 0);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = !(dense_bitset__succeeded);
#line 140 "dense_bitset.m"
            if (dense_bitset__succeeded)
#line 138 "dense_bitset.m"
              {
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__I_13;
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__V_20_20 = (dense_bitset__W_8 * (MR_Integer) 32);
#line 139 "dense_bitset.m"
                void MR_CALL (* dense_bitset__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 138 "dense_bitset.m"
                dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__V_20_20);
#line 139 "dense_bitset.m"
                dense_bitset__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), dense_bitset__P_9, (MR_Integer) 1)));
#line 139 "dense_bitset.m"
                {
#line 139 "dense_bitset.m"
                  dense_bitset__func_1(((MR_Box) dense_bitset__P_9), ((MR_Box) (dense_bitset__I_13)), dense_bitset__STATE_VARIABLE_Acc_0_14, &dense_bitset__STATE_VARIABLE_Acc_22_22);
                }
#line 138 "dense_bitset.m"
              }
#line 140 "dense_bitset.m"
            else
#line 140 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 143 "dense_bitset.m"
            dense_bitset__V_23_23 = (dense_bitset__B_7 + (MR_Integer) 1);
#line 143 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 143 "dense_bitset.m"
            {
#line 143 "dense_bitset.m"
              MR_Integer dense_bitset__B__tmp_copy_7 = dense_bitset__V_23_23;
#line 143 "dense_bitset.m"
              MR_Box dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

#line 143 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 143 "dense_bitset.m"
              dense_bitset__B_7 = dense_bitset__B__tmp_copy_7;
#line 143 "dense_bitset.m"
            }
#line 143 "dense_bitset.m"
            continue;
#line 136 "dense_bitset.m"
          }
#line 144 "dense_bitset.m"
        else
#line 144 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 144 "dense_bitset.m"
      }
#line 144 "dense_bitset.m"
      break;
#line 144 "dense_bitset.m"
    }
#line 129 "dense_bitset.m"
}

#line 117 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2(
#line 117 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 117 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 117 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 117 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 117 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 117 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13)
#line 117 "dense_bitset.m"
{
#line 124 "dense_bitset.m"
  while (MR_TRUE)
#line 124 "dense_bitset.m"
    {
#line 124 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 124 "dense_bitset.m"
      {
#line 124 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

#line 124 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 122 "dense_bitset.m"
          {
#line 122 "dense_bitset.m"
            MR_Box dense_bitset__STATE_VARIABLE_Acc_15_15;
#line 122 "dense_bitset.m"
            MR_Integer dense_bitset__V_16_16;

#line 122 "dense_bitset.m"
            {
#line 122 "dense_bitset.m"
              dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_p_2((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__P_9, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
            }
#line 123 "dense_bitset.m"
            dense_bitset__V_16_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
#line 123 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 123 "dense_bitset.m"
            {
#line 123 "dense_bitset.m"
              MR_Integer dense_bitset__Min__tmp_copy_7 = dense_bitset__V_16_16;
#line 123 "dense_bitset.m"
              MR_Box dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

#line 123 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 123 "dense_bitset.m"
              dense_bitset__Min_7 = dense_bitset__Min__tmp_copy_7;
#line 123 "dense_bitset.m"
            }
#line 123 "dense_bitset.m"
            continue;
#line 122 "dense_bitset.m"
          }
#line 124 "dense_bitset.m"
        else
#line 124 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
#line 124 "dense_bitset.m"
      }
#line 124 "dense_bitset.m"
      break;
#line 124 "dense_bitset.m"
    }
#line 117 "dense_bitset.m"
}

#line 116 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1(
#line 116 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 116 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 116 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 116 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 116 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 116 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13)
#line 116 "dense_bitset.m"
{
#line 124 "dense_bitset.m"
  while (MR_TRUE)
#line 124 "dense_bitset.m"
    {
#line 124 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 124 "dense_bitset.m"
      {
#line 124 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

#line 124 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 122 "dense_bitset.m"
          {
#line 122 "dense_bitset.m"
            MR_Box dense_bitset__STATE_VARIABLE_Acc_15_15;
#line 122 "dense_bitset.m"
            MR_Integer dense_bitset__V_16_16;

#line 122 "dense_bitset.m"
            {
#line 122 "dense_bitset.m"
              dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_p_1((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__P_9, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
            }
#line 123 "dense_bitset.m"
            dense_bitset__V_16_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
#line 123 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 123 "dense_bitset.m"
            {
#line 123 "dense_bitset.m"
              MR_Integer dense_bitset__Min__tmp_copy_7 = dense_bitset__V_16_16;
#line 123 "dense_bitset.m"
              MR_Box dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

#line 123 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 123 "dense_bitset.m"
              dense_bitset__Min_7 = dense_bitset__Min__tmp_copy_7;
#line 123 "dense_bitset.m"
            }
#line 123 "dense_bitset.m"
            continue;
#line 122 "dense_bitset.m"
          }
#line 124 "dense_bitset.m"
        else
#line 124 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
#line 124 "dense_bitset.m"
      }
#line 124 "dense_bitset.m"
      break;
#line 124 "dense_bitset.m"
    }
#line 116 "dense_bitset.m"
}

#line 115 "dense_bitset.m"
static void MR_CALL 
dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0(
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 115 "dense_bitset.m"
  MR_Word dense_bitset__P_9,
#line 115 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 115 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 115 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_13)
#line 115 "dense_bitset.m"
{
#line 124 "dense_bitset.m"
  while (MR_TRUE)
#line 124 "dense_bitset.m"
    {
#line 124 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 124 "dense_bitset.m"
      {
#line 124 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

#line 124 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 122 "dense_bitset.m"
          {
#line 122 "dense_bitset.m"
            MR_Box dense_bitset__STATE_VARIABLE_Acc_15_15;
#line 122 "dense_bitset.m"
            MR_Integer dense_bitset__V_16_16;

#line 122 "dense_bitset.m"
            {
#line 122 "dense_bitset.m"
              dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_p_0((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__P_9, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
            }
#line 123 "dense_bitset.m"
            dense_bitset__V_16_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
#line 123 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 123 "dense_bitset.m"
            {
#line 123 "dense_bitset.m"
              MR_Integer dense_bitset__Min__tmp_copy_7 = dense_bitset__V_16_16;
#line 123 "dense_bitset.m"
              MR_Box dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

#line 123 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 123 "dense_bitset.m"
              dense_bitset__Min_7 = dense_bitset__Min__tmp_copy_7;
#line 123 "dense_bitset.m"
            }
#line 123 "dense_bitset.m"
            continue;
#line 122 "dense_bitset.m"
          }
#line 124 "dense_bitset.m"
        else
#line 124 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
#line 124 "dense_bitset.m"
      }
#line 124 "dense_bitset.m"
      break;
#line 124 "dense_bitset.m"
    }
#line 115 "dense_bitset.m"
}

#line 129 "dense_bitset.m"
static void MR_CALL 
dense_bitset__foldl2__ho3_6_p_0(
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__B_7,
#line 129 "dense_bitset.m"
  MR_Integer dense_bitset__W_8,
#line 129 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 129 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_14,
#line 129 "dense_bitset.m"
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_15)
#line 129 "dense_bitset.m"
{
#line 144 "dense_bitset.m"
  while (MR_TRUE)
#line 144 "dense_bitset.m"
    {
#line 144 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 144 "dense_bitset.m"
      {
#line 144 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__B_7 <= (MR_Integer) 31);

#line 144 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 136 "dense_bitset.m"
          {
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__Word_12;
#line 136 "dense_bitset.m"
            MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_22_22;
#line 136 "dense_bitset.m"
            MR_Integer dense_bitset__V_23_23;
#line 136 "dense_bitset.m"
            MR_Box dense_bitset__conv0_Word_12;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_17_17;
#line 137 "dense_bitset.m"
            MR_Integer dense_bitset__V_18_18;

#line 136 "dense_bitset.m"
            {
#line 136 "dense_bitset.m"
              mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_10, dense_bitset__W_8, &dense_bitset__conv0_Word_12);
            }
#line 136 "dense_bitset.m"
            dense_bitset__Word_12 = ((MR_Integer) dense_bitset__conv0_Word_12);
#line 137 "dense_bitset.m"
            {
#line 137 "dense_bitset.m"
              dense_bitset__V_18_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__B_7);
            }
#line 137 "dense_bitset.m"
            dense_bitset__V_17_17 = (dense_bitset__V_18_18 & dense_bitset__Word_12);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = (dense_bitset__V_17_17 == (MR_Integer) 0);
#line 137 "dense_bitset.m"
            dense_bitset__succeeded = !(dense_bitset__succeeded);
#line 140 "dense_bitset.m"
            if (dense_bitset__succeeded)
#line 138 "dense_bitset.m"
              {
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__I_13;
#line 138 "dense_bitset.m"
                MR_Integer dense_bitset__V_20_20 = (dense_bitset__W_8 * (MR_Integer) 32);

#line 138 "dense_bitset.m"
                dense_bitset__I_13 = (dense_bitset__B_7 + dense_bitset__V_20_20);
#line 107 "dense_bitset.m"
                {
#line 107 "dense_bitset.m"
                  dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__insert_2_f_0(dense_bitset__STATE_VARIABLE_Acc_0_14, dense_bitset__I_13);
                }
#line 138 "dense_bitset.m"
              }
#line 140 "dense_bitset.m"
            else
#line 140 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_22_22 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 143 "dense_bitset.m"
            dense_bitset__V_23_23 = (dense_bitset__B_7 + (MR_Integer) 1);
#line 143 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 143 "dense_bitset.m"
            {
#line 143 "dense_bitset.m"
              MR_Integer dense_bitset__B__tmp_copy_7 = dense_bitset__V_23_23;
#line 143 "dense_bitset.m"
              MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14 = dense_bitset__STATE_VARIABLE_Acc_22_22;

#line 143 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_14 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 143 "dense_bitset.m"
              dense_bitset__B_7 = dense_bitset__B__tmp_copy_7;
#line 143 "dense_bitset.m"
            }
#line 143 "dense_bitset.m"
            continue;
#line 136 "dense_bitset.m"
          }
#line 144 "dense_bitset.m"
        else
#line 144 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_15 = dense_bitset__STATE_VARIABLE_Acc_0_14;
#line 144 "dense_bitset.m"
      }
#line 144 "dense_bitset.m"
      break;
#line 144 "dense_bitset.m"
    }
#line 129 "dense_bitset.m"
}

#line 115 "dense_bitset.m"
static void MR_CALL 
dense_bitset__foldl1__ho2_6_p_0(
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Min_7,
#line 115 "dense_bitset.m"
  MR_Integer dense_bitset__Max_8,
#line 115 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_10,
#line 115 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0_12,
#line 115 "dense_bitset.m"
  MR_ArrayPtr * dense_bitset__STATE_VARIABLE_Acc_13)
#line 115 "dense_bitset.m"
{
#line 124 "dense_bitset.m"
  while (MR_TRUE)
#line 124 "dense_bitset.m"
    {
#line 124 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 124 "dense_bitset.m"
      {
#line 124 "dense_bitset.m"
        MR_bool dense_bitset__succeeded = (dense_bitset__Min_7 <= dense_bitset__Max_8);

#line 124 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 122 "dense_bitset.m"
          {
#line 122 "dense_bitset.m"
            MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_15_15;
#line 122 "dense_bitset.m"
            MR_Integer dense_bitset__V_16_16;

#line 122 "dense_bitset.m"
            {
#line 122 "dense_bitset.m"
              dense_bitset__foldl2__ho3_6_p_0((MR_Integer) 0, dense_bitset__Min_7, dense_bitset__A0_10, dense_bitset__STATE_VARIABLE_Acc_0_12, &dense_bitset__STATE_VARIABLE_Acc_15_15);
            }
#line 123 "dense_bitset.m"
            dense_bitset__V_16_16 = (dense_bitset__Min_7 + (MR_Integer) 1);
#line 123 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 123 "dense_bitset.m"
            {
#line 123 "dense_bitset.m"
              MR_Integer dense_bitset__Min__tmp_copy_7 = dense_bitset__V_16_16;
#line 123 "dense_bitset.m"
              MR_ArrayPtr dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12 = dense_bitset__STATE_VARIABLE_Acc_15_15;

#line 123 "dense_bitset.m"
              dense_bitset__STATE_VARIABLE_Acc_0_12 = dense_bitset__STATE_VARIABLE_Acc_0__tmp_copy_12;
#line 123 "dense_bitset.m"
              dense_bitset__Min_7 = dense_bitset__Min__tmp_copy_7;
#line 123 "dense_bitset.m"
            }
#line 123 "dense_bitset.m"
            continue;
#line 122 "dense_bitset.m"
          }
#line 124 "dense_bitset.m"
        else
#line 124 "dense_bitset.m"
          *dense_bitset__STATE_VARIABLE_Acc_13 = dense_bitset__STATE_VARIABLE_Acc_0_12;
#line 124 "dense_bitset.m"
      }
#line 124 "dense_bitset.m"
      break;
#line 124 "dense_bitset.m"
    }
#line 115 "dense_bitset.m"
}

#line 27 "dense_bitset.m"
void MR_CALL 
dense_bitset____Compare____dense_bitset_0_0(
#line 27 "dense_bitset.m"
  MR_Word * dense_bitset__HeadVar__1_1,
#line 27 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__HeadVar__2_2,
#line 27 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__HeadVar__3_3)
#line 27 "dense_bitset.m"
{
#line 27 "dense_bitset.m"
  {
#line 27 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 27 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__Cast_HeadVar1_4 = dense_bitset__HeadVar__2_2;
#line 27 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__Cast_HeadVar2_5 = dense_bitset__HeadVar__3_3;

#line 27 "dense_bitset.m"
    {
#line 27 "dense_bitset.m"
      mercury__builtin__compare_3_p_0((MR_Word) &dense_bitset_scalar_common_1[0], dense_bitset__HeadVar__1_1, ((MR_Box) (dense_bitset__Cast_HeadVar1_4)), ((MR_Box) (dense_bitset__Cast_HeadVar2_5)));
#line 27 "dense_bitset.m"
      return;
    }
#line 27 "dense_bitset.m"
  }
#line 27 "dense_bitset.m"
}

#line 27 "dense_bitset.m"
MR_bool MR_CALL 
dense_bitset____Unify____dense_bitset_0_0(
#line 27 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__HeadVar__1_1,
#line 27 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__HeadVar__2_2)
#line 27 "dense_bitset.m"
{
#line 27 "dense_bitset.m"
  {
#line 27 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 27 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__Cast_HeadVar1_3 = dense_bitset__HeadVar__1_1;
#line 27 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__Cast_HeadVar2_4 = dense_bitset__HeadVar__2_2;

#line 27 "dense_bitset.m"
    {
#line 27 "dense_bitset.m"
      return dense_bitset__succeeded = mercury__array____Unify____array_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__Cast_HeadVar1_3, (MR_ArrayPtr) dense_bitset__Cast_HeadVar2_4);
    }
#line 27 "dense_bitset.m"
    return dense_bitset__succeeded;
#line 27 "dense_bitset.m"
  }
#line 27 "dense_bitset.m"
}

#line 55 "dense_bitset.m"
void MR_CALL 
dense_bitset__foldl_4_p_2(
#line 55 "dense_bitset.m"
  MR_Word dense_bitset__TypeInfo_for_T_13,
#line 55 "dense_bitset.m"
  MR_Word dense_bitset__P_5,
#line 55 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_6,
#line 55 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_9,
#line 55 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_10)
#line 55 "dense_bitset.m"
{
#line 110 "dense_bitset.m"
  {
#line 110 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 110 "dense_bitset.m"
    MR_Integer dense_bitset__Max_8;

#line 111 "dense_bitset.m"
    {
#line 111 "dense_bitset.m"
      mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_6, &dense_bitset__Max_8);
    }
#line 112 "dense_bitset.m"
    {
#line 112 "dense_bitset.m"
      dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_p_2((MR_Integer) 0, dense_bitset__Max_8, dense_bitset__P_5, dense_bitset__A0_6, dense_bitset__STATE_VARIABLE_Acc_0_9, dense_bitset__STATE_VARIABLE_Acc_10);
#line 112 "dense_bitset.m"
      return;
    }
#line 110 "dense_bitset.m"
  }
#line 55 "dense_bitset.m"
}

#line 54 "dense_bitset.m"
void MR_CALL 
dense_bitset__foldl_4_p_1(
#line 54 "dense_bitset.m"
  MR_Word dense_bitset__TypeInfo_for_T_13,
#line 54 "dense_bitset.m"
  MR_Word dense_bitset__P_5,
#line 54 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_6,
#line 54 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_9,
#line 54 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_10)
#line 54 "dense_bitset.m"
{
#line 110 "dense_bitset.m"
  {
#line 110 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 110 "dense_bitset.m"
    MR_Integer dense_bitset__Max_8;

#line 111 "dense_bitset.m"
    {
#line 111 "dense_bitset.m"
      mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_6, &dense_bitset__Max_8);
    }
#line 112 "dense_bitset.m"
    {
#line 112 "dense_bitset.m"
      dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_p_1((MR_Integer) 0, dense_bitset__Max_8, dense_bitset__P_5, dense_bitset__A0_6, dense_bitset__STATE_VARIABLE_Acc_0_9, dense_bitset__STATE_VARIABLE_Acc_10);
#line 112 "dense_bitset.m"
      return;
    }
#line 110 "dense_bitset.m"
  }
#line 54 "dense_bitset.m"
}

#line 53 "dense_bitset.m"
void MR_CALL 
dense_bitset__foldl_4_p_0(
#line 53 "dense_bitset.m"
  MR_Word dense_bitset__TypeInfo_for_T_13,
#line 53 "dense_bitset.m"
  MR_Word dense_bitset__P_5,
#line 53 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_6,
#line 53 "dense_bitset.m"
  MR_Box dense_bitset__STATE_VARIABLE_Acc_0_9,
#line 53 "dense_bitset.m"
  MR_Box * dense_bitset__STATE_VARIABLE_Acc_10)
#line 53 "dense_bitset.m"
{
#line 110 "dense_bitset.m"
  {
#line 110 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 110 "dense_bitset.m"
    MR_Integer dense_bitset__Max_8;

#line 111 "dense_bitset.m"
    {
#line 111 "dense_bitset.m"
      mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A0_6, &dense_bitset__Max_8);
    }
#line 112 "dense_bitset.m"
    {
#line 112 "dense_bitset.m"
      dense_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_p_0((MR_Integer) 0, dense_bitset__Max_8, dense_bitset__P_5, dense_bitset__A0_6, dense_bitset__STATE_VARIABLE_Acc_0_9, dense_bitset__STATE_VARIABLE_Acc_10);
#line 112 "dense_bitset.m"
      return;
    }
#line 110 "dense_bitset.m"
  }
#line 53 "dense_bitset.m"
}

#line 42 "dense_bitset.m"
MR_ArrayPtr MR_CALL 
dense_bitset__union_2_f_0(
#line 42 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A_4,
#line 42 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__B_5)
#line 42 "dense_bitset.m"
{
#line 105 "dense_bitset.m"
  {
#line 105 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 105 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__C_6;
#line 105 "dense_bitset.m"
    MR_Integer dense_bitset__Max_24;

#line 111 "dense_bitset.m"
    {
#line 111 "dense_bitset.m"
      mercury__array__max_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) dense_bitset__A_4, &dense_bitset__Max_24);
    }
#line 112 "dense_bitset.m"
    {
#line 112 "dense_bitset.m"
      dense_bitset__foldl1__ho2_6_p_0((MR_Integer) 0, dense_bitset__Max_24, dense_bitset__A_4, dense_bitset__B_5, &dense_bitset__C_6);
    }
#line 105 "dense_bitset.m"
    return dense_bitset__C_6;
#line 105 "dense_bitset.m"
  }
#line 42 "dense_bitset.m"
}

#line 39 "dense_bitset.m"
MR_ArrayPtr MR_CALL 
dense_bitset__delete_2_f_0(
#line 39 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_4,
#line 39 "dense_bitset.m"
  MR_Integer dense_bitset__I_5)
#line 39 "dense_bitset.m"
{
#line 93 "dense_bitset.m"
  {
#line 93 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 93 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__A_6;
#line 93 "dense_bitset.m"
    MR_Word dense_bitset__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 93 "dense_bitset.m"
    MR_Integer dense_bitset__Max_7;

#line 94 "dense_bitset.m"
    {
#line 94 "dense_bitset.m"
      mercury__array__max_2_p_0(dense_bitset__TypeCtorInfo_18_18, (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__Max_7);
    }
#line 95 "dense_bitset.m"
    dense_bitset__succeeded = (dense_bitset__I_5 > dense_bitset__Max_7);
#line 97 "dense_bitset.m"
    if (dense_bitset__succeeded)
#line 96 "dense_bitset.m"
      dense_bitset__A_6 = dense_bitset__A0_4;
#line 97 "dense_bitset.m"
    else
#line 101 "dense_bitset.m"
      {
#line 97 "dense_bitset.m"
        dense_bitset__succeeded = (dense_bitset__I_5 >= (MR_Integer) 0);
#line 101 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 98 "dense_bitset.m"
          {
#line 98 "dense_bitset.m"
            MR_Integer dense_bitset__Word0_8;
#line 98 "dense_bitset.m"
            MR_Integer dense_bitset__Word_9;
#line 98 "dense_bitset.m"
            MR_Integer dense_bitset__V_11_11;
#line 98 "dense_bitset.m"
            MR_Integer dense_bitset__V_12_12;
#line 98 "dense_bitset.m"
            MR_Integer dense_bitset__V_13_13;
#line 98 "dense_bitset.m"
            MR_Integer dense_bitset__V_14_14;
#line 98 "dense_bitset.m"
            MR_Integer dense_bitset__V_23_23;
#line 98 "dense_bitset.m"
            MR_Box dense_bitset__conv0_Word0_8;
#line 100 "dense_bitset.m"
            MR_ArrayPtr dense_bitset__conv1_A_6;

#line 150 "dense_bitset.m"
            {
#line 150 "dense_bitset.m"
              dense_bitset__V_11_11 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
            }
#line 98 "dense_bitset.m"
            {
#line 98 "dense_bitset.m"
              mercury__array__lookup_3_p_0(dense_bitset__TypeCtorInfo_18_18, (MR_ArrayPtr) dense_bitset__A0_4, dense_bitset__V_11_11, &dense_bitset__conv0_Word0_8);
            }
#line 98 "dense_bitset.m"
            dense_bitset__Word0_8 = ((MR_Integer) dense_bitset__conv0_Word0_8);
#line 154 "dense_bitset.m"
            dense_bitset__V_23_23 = (dense_bitset__I_5 & (MR_Integer) 31);
#line 154 "dense_bitset.m"
            {
#line 154 "dense_bitset.m"
              dense_bitset__V_13_13 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__V_23_23);
            }
#line 99 "dense_bitset.m"
            dense_bitset__V_12_12 = ~(dense_bitset__V_13_13);
#line 99 "dense_bitset.m"
            dense_bitset__Word_9 = (dense_bitset__Word0_8 & dense_bitset__V_12_12);
#line 150 "dense_bitset.m"
            {
#line 150 "dense_bitset.m"
              dense_bitset__V_14_14 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
            }
#line 100 "dense_bitset.m"
            {
#line 100 "dense_bitset.m"
              mercury__array__set_4_p_0(dense_bitset__TypeCtorInfo_18_18, dense_bitset__V_14_14, ((MR_Box) (dense_bitset__Word_9)), (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__conv1_A_6);
            }
#line 100 "dense_bitset.m"
            dense_bitset__A_6 = (MR_ArrayPtr) dense_bitset__conv1_A_6;
#line 98 "dense_bitset.m"
          }
#line 101 "dense_bitset.m"
        else
#line 102 "dense_bitset.m"
          {
#line 102 "dense_bitset.m"
            {
#line 102 "dense_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "dense_bitset", (MR_String) "function \140dense_bitset.delete\'/2", (MR_String) "cannot use indexes < 0");
            }
#line 102 "dense_bitset.m"
          }
#line 101 "dense_bitset.m"
      }
#line 93 "dense_bitset.m"
    return dense_bitset__A_6;
#line 93 "dense_bitset.m"
  }
#line 39 "dense_bitset.m"
}

#line 36 "dense_bitset.m"
MR_ArrayPtr MR_CALL 
dense_bitset__insert_2_f_0(
#line 36 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A0_4,
#line 36 "dense_bitset.m"
  MR_Integer dense_bitset__I_5)
#line 36 "dense_bitset.m"
{
#line 80 "dense_bitset.m"
  while (MR_TRUE)
#line 80 "dense_bitset.m"
    {
#line 80 "dense_bitset.m"
      /* tailcall optimized into a loop */
#line 80 "dense_bitset.m"
      {
#line 80 "dense_bitset.m"
        MR_bool dense_bitset__succeeded;
#line 80 "dense_bitset.m"
        MR_ArrayPtr dense_bitset__A_6;
#line 80 "dense_bitset.m"
        MR_Word dense_bitset__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 80 "dense_bitset.m"
        MR_Integer dense_bitset__Max_7;
#line 82 "dense_bitset.m"
        MR_Integer dense_bitset__V_11_11;

#line 81 "dense_bitset.m"
        {
#line 81 "dense_bitset.m"
          mercury__array__max_2_p_0(dense_bitset__TypeCtorInfo_24_24, (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__Max_7);
        }
#line 150 "dense_bitset.m"
        {
#line 150 "dense_bitset.m"
          dense_bitset__V_11_11 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
        }
#line 82 "dense_bitset.m"
        dense_bitset__succeeded = (dense_bitset__V_11_11 > dense_bitset__Max_7);
#line 85 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 83 "dense_bitset.m"
          {
#line 83 "dense_bitset.m"
            MR_ArrayPtr dense_bitset__A1_8;
#line 83 "dense_bitset.m"
            MR_Integer dense_bitset__V_12_12;
#line 83 "dense_bitset.m"
            MR_Integer dense_bitset__V_14_14 = (dense_bitset__Max_7 + (MR_Integer) 1);
#line 83 "dense_bitset.m"
            MR_ArrayPtr dense_bitset__conv0_A1_8;

#line 83 "dense_bitset.m"
            dense_bitset__V_12_12 = (dense_bitset__V_14_14 * (MR_Integer) 2);
#line 83 "dense_bitset.m"
            {
#line 83 "dense_bitset.m"
              mercury__array__resize_4_p_0(dense_bitset__TypeCtorInfo_24_24, dense_bitset__V_12_12, ((MR_Box) ((MR_Integer) 0)), (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__conv0_A1_8);
            }
#line 83 "dense_bitset.m"
            dense_bitset__A1_8 = (MR_ArrayPtr) dense_bitset__conv0_A1_8;
#line 84 "dense_bitset.m"
            /* direct tailcall eliminated */
#line 84 "dense_bitset.m"
            {
#line 84 "dense_bitset.m"
              MR_ArrayPtr dense_bitset__A0__tmp_copy_4 = dense_bitset__A1_8;

#line 84 "dense_bitset.m"
              dense_bitset__A0_4 = dense_bitset__A0__tmp_copy_4;
#line 84 "dense_bitset.m"
            }
#line 84 "dense_bitset.m"
            continue;
#line 83 "dense_bitset.m"
          }
#line 85 "dense_bitset.m"
        else
#line 89 "dense_bitset.m"
          {
#line 85 "dense_bitset.m"
            dense_bitset__succeeded = (dense_bitset__I_5 >= (MR_Integer) 0);
#line 89 "dense_bitset.m"
            if (dense_bitset__succeeded)
#line 86 "dense_bitset.m"
              {
#line 86 "dense_bitset.m"
                MR_Integer dense_bitset__Word0_9;
#line 86 "dense_bitset.m"
                MR_Integer dense_bitset__Word_10;
#line 86 "dense_bitset.m"
                MR_Integer dense_bitset__V_18_18;
#line 86 "dense_bitset.m"
                MR_Integer dense_bitset__V_19_19;
#line 86 "dense_bitset.m"
                MR_Integer dense_bitset__V_20_20;
#line 86 "dense_bitset.m"
                MR_Integer dense_bitset__V_31_31;
#line 86 "dense_bitset.m"
                MR_Box dense_bitset__conv1_Word0_9;
#line 88 "dense_bitset.m"
                MR_ArrayPtr dense_bitset__conv2_A_6;

#line 150 "dense_bitset.m"
                {
#line 150 "dense_bitset.m"
                  dense_bitset__V_18_18 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
                }
#line 86 "dense_bitset.m"
                {
#line 86 "dense_bitset.m"
                  mercury__array__lookup_3_p_0(dense_bitset__TypeCtorInfo_24_24, (MR_ArrayPtr) dense_bitset__A0_4, dense_bitset__V_18_18, &dense_bitset__conv1_Word0_9);
                }
#line 86 "dense_bitset.m"
                dense_bitset__Word0_9 = ((MR_Integer) dense_bitset__conv1_Word0_9);
#line 154 "dense_bitset.m"
                dense_bitset__V_31_31 = (dense_bitset__I_5 & (MR_Integer) 31);
#line 154 "dense_bitset.m"
                {
#line 154 "dense_bitset.m"
                  dense_bitset__V_19_19 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, dense_bitset__V_31_31);
                }
#line 87 "dense_bitset.m"
                dense_bitset__Word_10 = (dense_bitset__Word0_9 | dense_bitset__V_19_19);
#line 150 "dense_bitset.m"
                {
#line 150 "dense_bitset.m"
                  dense_bitset__V_20_20 = mercury__int__f_47_47_2_f_0(dense_bitset__I_5, (MR_Integer) 32);
                }
#line 88 "dense_bitset.m"
                {
#line 88 "dense_bitset.m"
                  mercury__array__set_4_p_0(dense_bitset__TypeCtorInfo_24_24, dense_bitset__V_20_20, ((MR_Box) (dense_bitset__Word_10)), (MR_ArrayPtr) dense_bitset__A0_4, &dense_bitset__conv2_A_6);
                }
#line 88 "dense_bitset.m"
                dense_bitset__A_6 = (MR_ArrayPtr) dense_bitset__conv2_A_6;
#line 86 "dense_bitset.m"
              }
#line 89 "dense_bitset.m"
            else
#line 90 "dense_bitset.m"
              {
#line 90 "dense_bitset.m"
                {
#line 90 "dense_bitset.m"
                  mercury__require__unexpected_3_p_0((MR_String) "dense_bitset", (MR_String) "function \140dense_bitset.insert\'/2", (MR_String) "cannot use indexes < 0");
                }
#line 90 "dense_bitset.m"
              }
#line 89 "dense_bitset.m"
          }
#line 80 "dense_bitset.m"
        return dense_bitset__A_6;
#line 80 "dense_bitset.m"
      }
#line 80 "dense_bitset.m"
      break;
#line 80 "dense_bitset.m"
    }
#line 36 "dense_bitset.m"
}

#line 33 "dense_bitset.m"
MR_bool MR_CALL 
dense_bitset__member_2_p_0(
#line 33 "dense_bitset.m"
  MR_Integer dense_bitset__I_3,
#line 33 "dense_bitset.m"
  MR_ArrayPtr dense_bitset__A_4)
#line 33 "dense_bitset.m"
{
#line 71 "dense_bitset.m"
  {
#line 71 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 71 "dense_bitset.m"
    MR_Word dense_bitset__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 71 "dense_bitset.m"
    MR_Integer dense_bitset__Max_5;
#line 71 "dense_bitset.m"
    MR_Integer dense_bitset__Word_6;
#line 71 "dense_bitset.m"
    MR_Integer dense_bitset__V_7_7;
#line 71 "dense_bitset.m"
    MR_Integer dense_bitset__V_9_9;
#line 71 "dense_bitset.m"
    MR_Integer dense_bitset__V_10_10;
#line 71 "dense_bitset.m"
    MR_Integer dense_bitset__V_17_17;
#line 71 "dense_bitset.m"
    MR_Integer dense_bitset__V_19_19;
#line 74 "dense_bitset.m"
    MR_Box dense_bitset__conv0_Word_6;
#line 75 "dense_bitset.m"
    MR_Integer dense_bitset__V_11_11;
#line 75 "dense_bitset.m"
    MR_Integer dense_bitset__V_12_12;
#line 75 "dense_bitset.m"
    MR_Integer dense_bitset__V_21_21;
#line 75 "dense_bitset.m"
    MR_Integer dense_bitset__V_22_22;
#line 75 "dense_bitset.m"
    MR_Integer dense_bitset__V_23_23;

#line 72 "dense_bitset.m"
    {
#line 72 "dense_bitset.m"
      mercury__array__max_2_p_0(dense_bitset__TypeCtorInfo_13_13, (MR_ArrayPtr) dense_bitset__A_4, &dense_bitset__Max_5);
    }
#line 150 "dense_bitset.m"
    {
#line 150 "dense_bitset.m"
      dense_bitset__V_7_7 = mercury__int__f_47_47_2_f_0(dense_bitset__I_3, (MR_Integer) 32);
    }
#line 73 "dense_bitset.m"
    dense_bitset__succeeded = (dense_bitset__V_7_7 >= (MR_Integer) 0);
#line 71 "dense_bitset.m"
    if (dense_bitset__succeeded)
#line 71 "dense_bitset.m"
      {
#line 150 "dense_bitset.m"
        dense_bitset__V_17_17 = (MR_Integer) 32;
#line 150 "dense_bitset.m"
        {
#line 150 "dense_bitset.m"
          dense_bitset__V_9_9 = mercury__int__f_47_47_2_f_0(dense_bitset__I_3, dense_bitset__V_17_17);
        }
#line 73 "dense_bitset.m"
        dense_bitset__succeeded = (dense_bitset__V_9_9 <= dense_bitset__Max_5);
#line 71 "dense_bitset.m"
        if (dense_bitset__succeeded)
#line 71 "dense_bitset.m"
          {
#line 150 "dense_bitset.m"
            dense_bitset__V_19_19 = (MR_Integer) 32;
#line 150 "dense_bitset.m"
            {
#line 150 "dense_bitset.m"
              dense_bitset__V_10_10 = mercury__int__f_47_47_2_f_0(dense_bitset__I_3, dense_bitset__V_19_19);
            }
#line 74 "dense_bitset.m"
            {
#line 74 "dense_bitset.m"
              mercury__array__lookup_3_p_0(dense_bitset__TypeCtorInfo_13_13, (MR_ArrayPtr) dense_bitset__A_4, dense_bitset__V_10_10, &dense_bitset__conv0_Word_6);
            }
#line 74 "dense_bitset.m"
            dense_bitset__Word_6 = ((MR_Integer) dense_bitset__conv0_Word_6);
#line 154 "dense_bitset.m"
            dense_bitset__V_21_21 = (MR_Integer) 1;
#line 154 "dense_bitset.m"
            dense_bitset__V_23_23 = (MR_Integer) 31;
#line 154 "dense_bitset.m"
            dense_bitset__V_22_22 = (dense_bitset__I_3 & dense_bitset__V_23_23);
#line 154 "dense_bitset.m"
            {
#line 154 "dense_bitset.m"
              dense_bitset__V_12_12 = mercury__int__f_60_60_2_f_0(dense_bitset__V_21_21, dense_bitset__V_22_22);
            }
#line 75 "dense_bitset.m"
            dense_bitset__V_11_11 = (dense_bitset__V_12_12 & dense_bitset__Word_6);
#line 75 "dense_bitset.m"
            dense_bitset__succeeded = (dense_bitset__V_11_11 == (MR_Integer) 0);
#line 75 "dense_bitset.m"
            dense_bitset__succeeded = !(dense_bitset__succeeded);
#line 71 "dense_bitset.m"
          }
#line 71 "dense_bitset.m"
      }
#line 71 "dense_bitset.m"
    return dense_bitset__succeeded;
#line 71 "dense_bitset.m"
  }
#line 33 "dense_bitset.m"
}

#line 30 "dense_bitset.m"
MR_ArrayPtr MR_CALL 
dense_bitset__init_0_f_0(void)
#line 30 "dense_bitset.m"
{
#line 69 "dense_bitset.m"
  {
#line 69 "dense_bitset.m"
    MR_bool dense_bitset__succeeded;
#line 69 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__HeadVar__1_1;
#line 69 "dense_bitset.m"
    MR_ArrayPtr dense_bitset__conv0_HeadVar__1_1;

#line 69 "dense_bitset.m"
    {
#line 69 "dense_bitset.m"
      dense_bitset__conv0_HeadVar__1_1 = mercury__array__array_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) MR_mkword(MR_mktag(1), &dense_bitset_scalar_common_1[1]));
    }
#line 69 "dense_bitset.m"
    dense_bitset__HeadVar__1_1 = (MR_ArrayPtr) dense_bitset__conv0_HeadVar__1_1;
#line 69 "dense_bitset.m"
    return dense_bitset__HeadVar__1_1;
#line 69 "dense_bitset.m"
  }
#line 30 "dense_bitset.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module dense_bitset. */
