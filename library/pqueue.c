/*
** Automatically generated from `pqueue.m'
** by the Mercury compiler,
** version 22.01.9
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


// :- module pqueue.
// :- implementation.

/*
INIT mercury__pqueue__init
ENDINIT
*/

#include "pqueue.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5];

static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1;

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1];

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1];

static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2];

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2];

static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2];

static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Box K_1,
  MR_Box V_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0 = {
  (MR_String) "empty",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2 = {
  &mercury__pqueue__pqueue__type_ctor_info_pqueue_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1 = {
  (MR_String) "pqueue",
  INT16_C(5),
  UINT16_C(30),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__pqueue__pqueue__field_types_pqueue_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0
};

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0,
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__pqueue__pqueue__type_ctor_info_pqueue_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pqueue____Unify____pqueue_2_0_10001)),
  ((MR_Box) (mercury__pqueue____Compare____pqueue_2_0_10001)),
  (MR_String) "pqueue",
  (MR_String) "pqueue",
  {     mercury__pqueue__pqueue__du_name_ordered_pqueue_2 },
  {     mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__pqueue__pqueue__functor_number_map_pqueue_2,

};

void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_28 == CastY_29);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      MR_Box Var_39 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      MR_Box Var_40 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Box ArgY2_18 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Box ArgY3_21 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
        MR_Word ArgY4_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
        MR_Word ArgY5_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
        MR_Word SubResult1_16;

        succeeded = (Var_41 < ArgY1_15);
        if (succeeded)
          SubResult1_16 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_41 == ArgY1_15);
          if (succeeded)
            SubResult1_16 = (MR_Integer) 0;
          else
            SubResult1_16 = (MR_Integer) 2;
        }
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_30, &SubResult2_19, Var_40, ArgY2_18);
          succeeded = (SubResult2_19 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
          {
            MR_Word SubResult3_22;

            mercury__builtin__compare_3_p_0(TypeInfo_for_V_31, &SubResult3_22, Var_39, ArgY3_21);
            succeeded = (SubResult3_22 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_22;
            else
            {
              MR_Word SubResult4_25;

              mercury__pqueue____Compare____pqueue_2_0(TypeInfo_for_K_30, TypeInfo_for_V_31, &SubResult4_25, Var_38, ArgY4_24);
              succeeded = (SubResult4_25 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult4_25;
              else
              {
                MR_Word next_value_of_HeadVar__2_2 = Var_37;
                MR_Word next_value_of_HeadVar__3_3 = ArgY5_27;

                // direct tailcall eliminated
                ;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
            }
          }
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_8;
      MR_Box ArgX3_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_10;
      MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_12;
      MR_Word ArgX5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        ArgY3_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        ArgY4_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        ArgY5_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_17, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_18, ArgX3_9, ArgY3_10);
            if (succeeded)
            {
              succeeded = mercury__pqueue____Unify____pqueue_2_0(TypeInfo_for_K_17, TypeInfo_for_V_18, ArgX4_11, ArgY4_12);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgX5_13;
                next_value_of_HeadVar__2_2 = ArgY5_14;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_Integer MR_CALL 
mercury__pqueue__length_1_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Integer D_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) D_3 + (MR_Unsigned) 1);
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pqueue__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word List_3)
{
  {
    MR_Word PQueue_4;

    mercury__pqueue__assoc_list_to_pqueue_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, List_3, &PQueue_4);
    return PQueue_4;
  }
}

MR_Word MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word PQ2_4;

    mercury__pqueue__assoc_list_to_pqueue_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &PQ2_4);
    return PQ2_4;
  }
}

void MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_2_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word * Q_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *Q_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_4;
    MR_Box V_5;
    MR_Word L_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Q0_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    K_4 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
    V_5 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
    mercury__pqueue__assoc_list_to_pqueue_2_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, L_6, &Q0_8);
    mercury__pqueue__insert_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_4, V_5, Q0_8, Q_2);
  }
}

MR_Word MR_CALL 
mercury__pqueue__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word PQ_3)
{
  {
    MR_Word AL_4;

    mercury__pqueue__to_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, PQ_3, &AL_4);
    return AL_4;
  }
}

void MR_CALL 
mercury__pqueue__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word Q0_3,
  MR_Word * L_4)
{
  {
    MR_bool succeeded = (Q0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_5;
    MR_Box V_6;
    MR_Word Q1_7;
    MR_Word L0_16;
    MR_Word R0_17;

    if (succeeded)
    {
      K_5 = (MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 1));
      V_6 = (MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 2));
      L0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 3))));
      R0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 4))));
      mercury__pqueue__remove_2_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, L0_16, R0_17, &Q1_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word * AddrL0_18;

      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = K_5;
        MR_hl_field(MR_mktag(0), Var_9, 1) = V_6;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *L_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrL0_18 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *L_4, (MR_Integer) 1)));
      mercury__pqueue__LCMCpr_to_assoc_list_1_2_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Q1_7, AddrL0_18);
    }
    else
      *L_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__pqueue__LCMCpr_to_assoc_list_1_2_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word Q0_3,
  MR_Word * AddrOfL_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Q0_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K_5;
    MR_Box V_6;
    MR_Word Q1_7;
    MR_Word L0_16;
    MR_Word R0_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      K_5 = (MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 1));
      V_6 = (MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 2));
      L0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 3))));
      R0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Q0_3, (MR_Integer) 4))));
      mercury__pqueue__remove_2_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, L0_16, R0_17, &Q1_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word L_4;
      MR_Word * AddrL0_18;
      MR_Word next_value_of_Q0_3;
      MR_Word * next_value_of_AddrOfL_19;

      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = K_5;
        MR_hl_field(MR_mktag(0), Var_9, 1) = V_6;
      }
      {
        L_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), L_4, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), L_4, 1) = NULL;
      }
      AddrL0_18 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 1)));
      *AddrOfL_19 = L_4;
      // direct tailcall eliminated
      ;
      next_value_of_Q0_3 = Q1_7;
      next_value_of_AddrOfL_19 = AddrL0_18;
      Q0_3 = next_value_of_Q0_3;
      AddrOfL_19 = next_value_of_AddrOfL_19;
      continue;
    }
    else
      *AddrOfL_19 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

MR_Word MR_CALL 
mercury__pqueue__merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word A_4,
  MR_Word B_5)
{
  {
    MR_Word C_6;

    mercury__pqueue__merge_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, A_4, B_5, &C_6);
    return C_6;
  }
}

void MR_CALL 
mercury__pqueue__merge_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * C_6)
{
  {
    MR_bool succeeded;
    MR_Integer Var_7;
    MR_Integer Var_8;

    if ((A_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_7 = (MR_Integer) 0;
    else
    {
      MR_Integer D_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 0))));

      Var_7 = (MR_Integer) ((MR_Unsigned) D_11 + (MR_Unsigned) 1);
    }
    if ((B_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_8 = (MR_Integer) 0;
    else
    {
      MR_Integer D_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), B_5, (MR_Integer) 0))));

      Var_8 = (MR_Integer) ((MR_Unsigned) D_17 + (MR_Unsigned) 1);
    }
    succeeded = (Var_7 <= Var_8);
    if (succeeded)
      mercury__pqueue__do_merge_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, A_4, B_5, C_6);
    else
      mercury__pqueue__do_merge_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, B_5, A_4, C_6);
  }
}

void MR_CALL 
mercury__pqueue__do_merge_3_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * C_6)
{
  if ((A_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *C_6 = B_5;
  else
  {
    MR_Box K_8 = (MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 1));
    MR_Box V_9 = (MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 2));
    MR_Word L_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 3))));
    MR_Word R_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 4))));

    if ((B_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *C_6 = A_4;
    else
    {
      MR_Word C0_17;
      MR_Word C1_18;

      mercury__pqueue__do_merge_3_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, L_10, B_5, &C0_17);
      mercury__pqueue__do_merge_3_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, R_11, C0_17, &C1_18);
      mercury__pqueue__insert_4_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, K_8, V_9, C1_18, C_6);
    }
  }
}

void MR_CALL 
mercury__pqueue__det_remove_4_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Box * K_5,
  MR_Box * V_6,
  MR_Word STATE_VARIABLE_PQ_0_10,
  MR_Word * STATE_VARIABLE_PQ_11)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_PQ_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box K0_8;
    MR_Box V0_9;
    MR_Word STATE_VARIABLE_PQ_12_12;
    MR_Word L0_23;
    MR_Word R0_24;

    if (succeeded)
    {
      K0_8 = (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PQ_0_10, (MR_Integer) 1));
      V0_9 = (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PQ_0_10, (MR_Integer) 2));
      L0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PQ_0_10, (MR_Integer) 3))));
      R0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PQ_0_10, (MR_Integer) 4))));
      mercury__pqueue__remove_2_3_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, L0_23, R0_24, &STATE_VARIABLE_PQ_12_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PQ_11 = STATE_VARIABLE_PQ_12_12;
      *K_5 = K0_8;
      *V_6 = V0_9;
    }
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "pqueue.m", (MR_String) "predicate \140pqueue.det_remove\'/4", (MR_String) "empty priority queue");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__pqueue__remove_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box * K_5,
  MR_Box * V_6,
  MR_Word HeadVar__3_3,
  MR_Word * PQ_10)
{
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word L0_8;
    MR_Word R0_9;

    if (succeeded)
    {
      *K_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
      *V_6 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
      L0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
      R0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
      mercury__pqueue__remove_2_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, L0_8, R0_9, PQ_10);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__pqueue__remove_2_3_p_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
        *HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Box Var_40 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box Var_41 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = HeadVar__1_1;
      else
      {
        MR_Integer D1_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Box K1_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Box V1_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        MR_Word L1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Word R1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
        MR_Word CMP_25;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_36, &CMP_25, Var_41, K1_20);
        succeeded = (CMP_25 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Integer D0M1_26 = (MR_Integer) ((MR_Unsigned) Var_42 - (MR_Unsigned) 1);
          MR_Integer D_27;
          MR_Word * AddrPQ0_49;

          succeeded = (D0M1_26 > D1_19);
          if (succeeded)
            D_27 = D0M1_26;
          else
            D_27 = D1_19;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (D_27));
            MR_hl_field(MR_mktag(1), base, 1) = Var_41;
            MR_hl_field(MR_mktag(1), base, 2) = Var_40;
            MR_hl_field(MR_mktag(1), base, 3) = NULL;
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (HeadVar__2_2));
          }
          AddrPQ0_49 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 3)));
          mercury__pqueue__LCMCpr_remove_2_1_3_p_0(TypeInfo_for_K_36, TypeInfo_for_V_37, Var_39, Var_38, AddrPQ0_49);
        }
        else
        {
          MR_Integer D1M1_29 = (MR_Integer) ((MR_Unsigned) Var_42 - (MR_Unsigned) 1);
          MR_Integer D_35;
          MR_Word * AddrPQ1_50;

          succeeded = (D1M1_29 > D1_19);
          if (succeeded)
            D_35 = D1M1_29;
          else
            D_35 = D1_19;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (D_35));
            MR_hl_field(MR_mktag(1), base, 1) = K1_20;
            MR_hl_field(MR_mktag(1), base, 2) = V1_21;
            MR_hl_field(MR_mktag(1), base, 3) = NULL;
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (HeadVar__1_1));
          }
          AddrPQ1_50 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 3)));
          mercury__pqueue__LCMCpr_remove_2_1_3_p_0(TypeInfo_for_K_36, TypeInfo_for_V_37, L1_22, R1_23, AddrPQ1_50);
        }
      }
    }
  }
}

void MR_CALL 
mercury__pqueue__LCMCpr_remove_2_1_3_p_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_51)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_51 = (MR_Word) ((MR_Unsigned) 0U);
      else
        *AddrOfHeadVar__3_51 = HeadVar__2_2;
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Box Var_40 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box Var_41 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_51 = HeadVar__1_1;
      else
      {
        MR_Integer D1_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Box K1_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Box V1_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        MR_Word L1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Word R1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
        MR_Word CMP_25;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_36, &CMP_25, Var_41, K1_20);
        succeeded = (CMP_25 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Integer D0M1_26 = (MR_Integer) ((MR_Unsigned) Var_42 - (MR_Unsigned) 1);
          MR_Integer D_27;
          MR_Word * AddrPQ0_49;
          MR_Word HeadVar__3_54;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_51;

          succeeded = (D0M1_26 > D1_19);
          if (succeeded)
            D_27 = D0M1_26;
          else
            D_27 = D1_19;
          {
            HeadVar__3_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_54, 0) = ((MR_Box) (D_27));
            MR_hl_field(MR_mktag(1), HeadVar__3_54, 1) = Var_41;
            MR_hl_field(MR_mktag(1), HeadVar__3_54, 2) = Var_40;
            MR_hl_field(MR_mktag(1), HeadVar__3_54, 3) = NULL;
            MR_hl_field(MR_mktag(1), HeadVar__3_54, 4) = ((MR_Box) (HeadVar__2_2));
          }
          AddrPQ0_49 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_54, (MR_Integer) 3)));
          *AddrOfHeadVar__3_51 = HeadVar__3_54;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Var_39;
          next_value_of_HeadVar__2_2 = Var_38;
          next_value_of_AddrOfHeadVar__3_51 = AddrPQ0_49;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_51 = next_value_of_AddrOfHeadVar__3_51;
          continue;
        }
        else
        {
          MR_Integer D1M1_29 = (MR_Integer) ((MR_Unsigned) Var_42 - (MR_Unsigned) 1);
          MR_Integer D_35;
          MR_Word * AddrPQ1_50;
          MR_Word HeadVar__3_57;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_51;

          succeeded = (D1M1_29 > D1_19);
          if (succeeded)
            D_35 = D1M1_29;
          else
            D_35 = D1_19;
          {
            HeadVar__3_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_57, 0) = ((MR_Box) (D_35));
            MR_hl_field(MR_mktag(1), HeadVar__3_57, 1) = K1_20;
            MR_hl_field(MR_mktag(1), HeadVar__3_57, 2) = V1_21;
            MR_hl_field(MR_mktag(1), HeadVar__3_57, 3) = NULL;
            MR_hl_field(MR_mktag(1), HeadVar__3_57, 4) = ((MR_Box) (HeadVar__1_1));
          }
          AddrPQ1_50 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_57, (MR_Integer) 3)));
          *AddrOfHeadVar__3_51 = HeadVar__3_57;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = L1_22;
          next_value_of_HeadVar__2_2 = R1_23;
          next_value_of_AddrOfHeadVar__3_51 = AddrPQ1_50;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_51 = next_value_of_AddrOfHeadVar__3_51;
          continue;
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__pqueue__insert_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_PQ_0_8,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_Word STATE_VARIABLE_PQ_9;

    mercury__pqueue__insert_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_6, V_7, STATE_VARIABLE_PQ_0_8, &STATE_VARIABLE_PQ_9);
    return STATE_VARIABLE_PQ_9;
  }
}

static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Box K_1,
  MR_Box V_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = K_1;
          MR_hl_field(MR_mktag(1), base, 2) = V_2;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = K_1;
          MR_hl_field(MR_mktag(1), base, 2) = V_2;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *HeadVar__6_6 = HeadVar__4_4;
      }
    else
    {
      MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = HeadVar__3_3;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = K_1;
          MR_hl_field(MR_mktag(1), base, 2) = V_2;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Integer D1_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

        succeeded = (Var_54 > D1_39);
        if (succeeded)
        {
          mercury__pqueue__insert_4_p_0(TypeInfo_for_K_48, TypeInfo_for_V_49, K_1, V_2, HeadVar__4_4, HeadVar__6_6);
          *HeadVar__5_5 = HeadVar__3_3;
        }
        else
        {
          mercury__pqueue__insert_4_p_0(TypeInfo_for_K_48, TypeInfo_for_V_49, K_1, V_2, HeadVar__3_3, HeadVar__5_5);
          *HeadVar__6_6 = HeadVar__4_4;
        }
      }
    }
  }
}

void MR_CALL 
mercury__pqueue__insert_4_p_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Box K_1,
  MR_Box V_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), base, 1) = K_1;
        MR_hl_field(MR_mktag(1), base, 2) = V_2;
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Integer D0_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box K0_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
      MR_Box V0_14 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
      MR_Word L0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word R0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer D_18 = (MR_Integer) ((MR_Unsigned) D0_12 + (MR_Unsigned) 1);
      MR_Word CMP_19;
      MR_Box K1_20;
      MR_Box V1_21;
      MR_Word L_22;
      MR_Word R_23;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &CMP_19, K_1, K0_13);
      succeeded = (CMP_19 == (MR_Integer) 1);
      if (succeeded)
      {
        K1_20 = K_1;
        V1_21 = V_2;
        if ((L0_15 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((R0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              L_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), L_22, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), L_22, 1) = K0_13;
              MR_hl_field(MR_mktag(1), L_22, 2) = V0_14;
              MR_hl_field(MR_mktag(1), L_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), L_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            R_23 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            {
              L_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), L_22, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), L_22, 1) = K0_13;
              MR_hl_field(MR_mktag(1), L_22, 2) = V0_14;
              MR_hl_field(MR_mktag(1), L_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), L_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            R_23 = R0_16;
          }
        else
        {
          MR_Integer Var_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), L0_15, (MR_Integer) 0))));

          if ((R0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            L_22 = L0_15;
            {
              R_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), R_23, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), R_23, 1) = K0_13;
              MR_hl_field(MR_mktag(1), R_23, 2) = V0_14;
              MR_hl_field(MR_mktag(1), R_23, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), R_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Integer D1_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), R0_16, (MR_Integer) 0))));

            succeeded = (Var_72 > D1_59);
            if (succeeded)
            {
              mercury__pqueue__insert_4_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, K0_13, V0_14, R0_16, &R_23);
              L_22 = L0_15;
            }
            else
            {
              mercury__pqueue__insert_4_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, K0_13, V0_14, L0_15, &L_22);
              R_23 = R0_16;
            }
          }
        }
      }
      else
      {
        K1_20 = K0_13;
        V1_21 = V0_14;
        mercury__pqueue__insert_2_6_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, K_1, V_2, L0_15, R0_16, &L_22, &R_23);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (D_18));
        MR_hl_field(MR_mktag(1), base, 1) = K1_20;
        MR_hl_field(MR_mktag(1), base, 2) = V1_21;
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (L_22));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (R_23));
      }
    }
  }
}

MR_Box MR_CALL 
mercury__pqueue__det_peek_value_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word PQ_3)
{
  {
    MR_Box V_4;
    MR_Box Var_5;

    mercury__pqueue__det_peek_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, PQ_3, &Var_5, &V_4);
    return V_4;
  }
}

MR_Box MR_CALL 
mercury__pqueue__det_peek_key_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word PQ_3)
{
  {
    MR_Box K_4;
    MR_Box Var_5;

    mercury__pqueue__det_peek_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, PQ_3, &K_4, &Var_5);
    return K_4;
  }
}

void MR_CALL 
mercury__pqueue__det_peek_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word PQ_4,
  MR_Box * K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded = (PQ_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box KPrime_7;
    MR_Box VPrime_8;

    if (succeeded)
    {
      KPrime_7 = (MR_hl_field(MR_mktag(1), PQ_4, (MR_Integer) 1));
      VPrime_8 = (MR_hl_field(MR_mktag(1), PQ_4, (MR_Integer) 2));
      *K_5 = KPrime_7;
      *V_6 = VPrime_8;
    }
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "pqueue.m", (MR_String) "predicate \140pqueue.det_peek\'/3", (MR_String) "empty priority queue");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__pqueue__peek_value_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box * V_5)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *V_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__pqueue__peek_key_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box * K_4)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *K_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__pqueue__peek_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Box * K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      *K_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      *V_6 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__pqueue__is_empty_1_p_0(
  MR_Word TypeInfo_for_K_2,
  MR_Word TypeInfo_for_V_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

void MR_CALL 
mercury__pqueue__init_1_p_0(
  MR_Word TypeInfo_for_K_2,
  MR_Word TypeInfo_for_V_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mercury__pqueue__init_0_f_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word TypeInfo_for_V_4)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pqueue____Unify____pqueue_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pqueue____Compare____pqueue_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__pqueue__init(void)
{
}

void mercury__pqueue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pqueue__pqueue__type_ctor_info_pqueue_2);
}

void mercury__pqueue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__pqueue__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module pqueue.
