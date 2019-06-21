/*
** Automatically generated from `random.m'
** by the Mercury compiler,
** version rotd-2019-06-20
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


// :- module random.
// :- implementation.

/*
INIT mercury__random__init
ENDINIT
*/

#include "random.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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




static const MR_Integer mercury__random__random__functor_number_map_supply_0[1];

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_supply_0;

static MR_Integer MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__random____Unify____supply_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__random____Compare____supply_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__random_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__random_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__random_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__random_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
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



static const MR_Integer mercury__random__random__functor_number_map_supply_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_supply_0 = {
  (MR_String) "rs",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_supply_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__random____Unify____supply_0_0_10001)),
  ((MR_Box) (mercury__random____Compare____supply_0_0_10001)),
  (MR_String) "random",
  (MR_String) "supply",
  {     &mercury__random__random__notag_functor_desc_supply_0 },
  {     &mercury__random__random__notag_functor_desc_supply_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__random__functor_number_map_supply_0
};

static MR_Integer MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__random____Compare____supply_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__random____Unify____supply_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
mercury__random__test_2_4_p_0(
  MR_Integer N_5,
  MR_Word * Is_6,
  MR_Word STATE_VARIABLE_RS_0_11,
  MR_Word * STATE_VARIABLE_RS_12)
{
  {
    MR_bool succeeded = (N_5 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer N1_8 = (MR_Integer) ((MR_Unsigned) N_5 - (MR_Unsigned) (MR_Integer) 1);
      MR_Integer I_9;
      MR_Word Is0_10;
      MR_Word STATE_VARIABLE_RS_15_15;

      mercury__random__random_3_p_0(&I_9, STATE_VARIABLE_RS_0_11, &STATE_VARIABLE_RS_15_15);
      mercury__random__test_2_4_p_0(N1_8, &Is0_10, STATE_VARIABLE_RS_15_15, STATE_VARIABLE_RS_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Is_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (I_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Is0_10));
      }
    }
    else
    {
      *Is_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RS_12 = STATE_VARIABLE_RS_0_11;
    }
  }
}

void MR_CALL 
mercury__random__params_3_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  {
    *HeadVar__1_1 = (MR_Integer) 9301;
    *HeadVar__2_2 = (MR_Integer) 49297;
    *HeadVar__3_3 = (MR_Integer) 233280;
  }
}

void MR_CALL 
mercury__random__test_4_p_0(
  MR_Integer Seed_5,
  MR_Integer N_6,
  MR_Word * Nums_7,
  MR_Integer * Max_8)
{
  {
    MR_Word RS1_10;
    MR_Integer RS_13;
    MR_Box conv0_Copy;
    MR_Word _RS2_11;

{
#define MR_PROC_LABEL mercury__random__test_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (Seed_5)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_13 = ((MR_Integer) (conv0_Copy));
}
    RS1_10 = (MR_Word) (RS_13);
    *Max_8 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 233280 - (MR_Unsigned) (MR_Integer) 1);
    mercury__random__test_2_4_p_1(N_6, Nums_7, RS1_10, &_RS2_11);
  }
}

void MR_CALL 
mercury__random__test_2_4_p_1(
  MR_Integer N_5,
  MR_Word * Is_6,
  MR_Word STATE_VARIABLE_RS_0_11,
  MR_Word * STATE_VARIABLE_RS_12)
{
  {
    MR_bool succeeded = (N_5 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer N1_8 = (MR_Integer) ((MR_Unsigned) N_5 - (MR_Unsigned) (MR_Integer) 1);
      MR_Integer I_9;
      MR_Word Is0_10;
      MR_Word STATE_VARIABLE_RS_15_15;

      mercury__random__random_3_p_1(&I_9, STATE_VARIABLE_RS_0_11, &STATE_VARIABLE_RS_15_15);
      mercury__random__test_2_4_p_1(N1_8, &Is0_10, STATE_VARIABLE_RS_15_15, STATE_VARIABLE_RS_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Is_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (I_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Is0_10));
      }
    }
    else
    {
      *Is_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RS_12 = STATE_VARIABLE_RS_0_11;
    }
  }
}

void MR_CALL 
mercury__random__permutation_4_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word List0_5,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_RS_0_10,
  MR_Word * STATE_VARIABLE_RS_11)
{
  {
    MR_ArrayPtr Samples_8;
    MR_Integer Len_9;

    mercury__array__from_list_2_p_0(TypeInfo_for_T_14, List0_5, &Samples_8);
{
#define MR_PROC_LABEL mercury__random__permutation_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Samples_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Len_9  = Max;
}
    mercury__random__perform_sampling_6_p_1(TypeInfo_for_T_14, Len_9, Samples_8, (MR_Word) ((MR_Unsigned) 0U), List_6, STATE_VARIABLE_RS_0_10, STATE_VARIABLE_RS_11);
  }
}

void MR_CALL 
mercury__random__perform_sampling_6_p_1(
  MR_Word TypeInfo_for_T_29,
  MR_Integer I_7,
  MR_ArrayPtr STATE_VARIABLE_Record_0_15,
  MR_Word STATE_VARIABLE_Order_0_16,
  MR_Word * STATE_VARIABLE_Order_17,
  MR_Word STATE_VARIABLE_RS_0_18,
  MR_Word * STATE_VARIABLE_RS_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RS_19 = STATE_VARIABLE_RS_0_18;
      *STATE_VARIABLE_Order_17 = STATE_VARIABLE_Order_0_16;
    }
    else
    {
      MR_Integer I1_11 = (MR_Integer) ((MR_Unsigned) I_7 - (MR_Unsigned) (MR_Integer) 1);
      MR_Integer Index_12;
      MR_Box Next_13;
      MR_Box MaxImage_14;
      MR_Word STATE_VARIABLE_RS_23_23;
      MR_Word STATE_VARIABLE_Order_24_24;
      MR_ArrayPtr STATE_VARIABLE_Record_25_25;
      MR_ArrayPtr STATE_VARIABLE_Record_26_26;
      MR_Integer next_value_of_I_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Record_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Order_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RS_0_18;

      mercury__random__random_5_p_1((MR_Integer) 0, I_7, &Index_12, STATE_VARIABLE_RS_0_18, &STATE_VARIABLE_RS_23_23);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, Index_12, &Next_13);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, I1_11, &MaxImage_14);
      {
        STATE_VARIABLE_Order_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 0) = Next_13;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Order_0_16));
      }
      mercury__array__set_4_p_0(TypeInfo_for_T_29, Index_12, MaxImage_14, STATE_VARIABLE_Record_0_15, &STATE_VARIABLE_Record_25_25);
      mercury__array__set_4_p_0(TypeInfo_for_T_29, I1_11, Next_13, STATE_VARIABLE_Record_25_25, &STATE_VARIABLE_Record_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_I_7 = I1_11;
      next_value_of_STATE_VARIABLE_Record_0_15 = STATE_VARIABLE_Record_26_26;
      next_value_of_STATE_VARIABLE_Order_0_16 = STATE_VARIABLE_Order_24_24;
      next_value_of_STATE_VARIABLE_RS_0_18 = STATE_VARIABLE_RS_23_23;
      I_7 = next_value_of_I_7;
      STATE_VARIABLE_Record_0_15 = next_value_of_STATE_VARIABLE_Record_0_15;
      STATE_VARIABLE_Order_0_16 = next_value_of_STATE_VARIABLE_Order_0_16;
      STATE_VARIABLE_RS_0_18 = next_value_of_STATE_VARIABLE_RS_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__permutation_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word List0_5,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_RS_0_10,
  MR_Word * STATE_VARIABLE_RS_11)
{
  {
    MR_ArrayPtr Samples_8;
    MR_Integer Len_9;

    mercury__array__from_list_2_p_0(TypeInfo_for_T_14, List0_5, &Samples_8);
{
#define MR_PROC_LABEL mercury__random__permutation_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Samples_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Len_9  = Max;
}
    mercury__random__perform_sampling_6_p_0(TypeInfo_for_T_14, Len_9, Samples_8, (MR_Word) ((MR_Unsigned) 0U), List_6, STATE_VARIABLE_RS_0_10, STATE_VARIABLE_RS_11);
  }
}

void MR_CALL 
mercury__random__perform_sampling_6_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Integer I_7,
  MR_ArrayPtr STATE_VARIABLE_Record_0_15,
  MR_Word STATE_VARIABLE_Order_0_16,
  MR_Word * STATE_VARIABLE_Order_17,
  MR_Word STATE_VARIABLE_RS_0_18,
  MR_Word * STATE_VARIABLE_RS_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RS_19 = STATE_VARIABLE_RS_0_18;
      *STATE_VARIABLE_Order_17 = STATE_VARIABLE_Order_0_16;
    }
    else
    {
      MR_Integer I1_11 = (MR_Integer) ((MR_Unsigned) I_7 - (MR_Unsigned) (MR_Integer) 1);
      MR_Integer Index_12;
      MR_Box Next_13;
      MR_Box MaxImage_14;
      MR_Word STATE_VARIABLE_RS_23_23;
      MR_Word STATE_VARIABLE_Order_24_24;
      MR_ArrayPtr STATE_VARIABLE_Record_25_25;
      MR_ArrayPtr STATE_VARIABLE_Record_26_26;
      MR_Integer next_value_of_I_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Record_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Order_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RS_0_18;

      mercury__random__random_5_p_0((MR_Integer) 0, I_7, &Index_12, STATE_VARIABLE_RS_0_18, &STATE_VARIABLE_RS_23_23);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, Index_12, &Next_13);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, I1_11, &MaxImage_14);
      {
        STATE_VARIABLE_Order_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 0) = Next_13;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Order_0_16));
      }
      mercury__array__set_4_p_0(TypeInfo_for_T_29, Index_12, MaxImage_14, STATE_VARIABLE_Record_0_15, &STATE_VARIABLE_Record_25_25);
      mercury__array__set_4_p_0(TypeInfo_for_T_29, I1_11, Next_13, STATE_VARIABLE_Record_25_25, &STATE_VARIABLE_Record_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_I_7 = I1_11;
      next_value_of_STATE_VARIABLE_Record_0_15 = STATE_VARIABLE_Record_26_26;
      next_value_of_STATE_VARIABLE_Order_0_16 = STATE_VARIABLE_Order_24_24;
      next_value_of_STATE_VARIABLE_RS_0_18 = STATE_VARIABLE_RS_23_23;
      I_7 = next_value_of_I_7;
      STATE_VARIABLE_Record_0_15 = next_value_of_STATE_VARIABLE_Record_0_15;
      STATE_VARIABLE_Order_0_16 = next_value_of_STATE_VARIABLE_Order_0_16;
      STATE_VARIABLE_RS_0_18 = next_value_of_STATE_VARIABLE_RS_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__randcount_3_p_1(
  MR_Integer * M_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M_4 = (MR_Integer) 233280;
  }
}

void MR_CALL 
mercury__random__randcount_3_p_0(
  MR_Integer * M_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M_4 = (MR_Integer) 233280;
  }
}

void MR_CALL 
mercury__random__randmax_3_p_1(
  MR_Integer * M1_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M1_4 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 233280 - (MR_Unsigned) (MR_Integer) 1);
  }
}

void MR_CALL 
mercury__random__randmax_3_p_0(
  MR_Integer * M1_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M1_4 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 233280 - (MR_Unsigned) (MR_Integer) 1);
  }
}

void MR_CALL 
mercury__random__random_5_p_1(
  MR_Integer Low_6,
  MR_Integer Range_7,
  MR_Integer * Num_8,
  MR_Word STATE_VARIABLE_RandomSupply_0_12,
  MR_Word * STATE_VARIABLE_RandomSupply_13)
{
  {
    MR_Integer R_10;
    MR_Integer Var_16;
    MR_Integer Var_17;

    mercury__random__random_3_p_1(&R_10, STATE_VARIABLE_RandomSupply_0_12, STATE_VARIABLE_RandomSupply_13);
    Var_17 = (MR_Integer) ((MR_Unsigned) Range_7 * (MR_Unsigned) R_10);
    Var_16 = (Var_17 / (MR_Integer) 233280);
    *Num_8 = (MR_Integer) ((MR_Unsigned) Low_6 + (MR_Unsigned) Var_16);
  }
}

void MR_CALL 
mercury__random__random_5_p_0(
  MR_Integer Low_6,
  MR_Integer Range_7,
  MR_Integer * Num_8,
  MR_Word STATE_VARIABLE_RandomSupply_0_12,
  MR_Word * STATE_VARIABLE_RandomSupply_13)
{
  {
    MR_Integer R_10;
    MR_Integer Var_16;
    MR_Integer Var_17;

    mercury__random__random_3_p_0(&R_10, STATE_VARIABLE_RandomSupply_0_12, STATE_VARIABLE_RandomSupply_13);
    Var_17 = (MR_Integer) ((MR_Unsigned) Range_7 * (MR_Unsigned) R_10);
    Var_16 = (Var_17 / (MR_Integer) 233280);
    *Num_8 = (MR_Integer) ((MR_Unsigned) Low_6 + (MR_Unsigned) Var_16);
  }
}

void MR_CALL 
mercury__random__random_3_p_1(
  MR_Integer * I_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Integer RS_6;
    MR_Integer I0_7 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_11;
    MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) I0_7 * (MR_Unsigned) (MR_Integer) 9301);
    MR_Integer V_6_17;
    MR_Integer V_7_18;
    MR_Box conv0_Copy;

    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) (MR_Integer) 49297);
    V_7_18 = mercury__int__div_2_f_0(Var_11, (MR_Integer) 233280);
    V_6_17 = (MR_Integer) ((MR_Unsigned) V_7_18 * (MR_Unsigned) (MR_Integer) 233280);
    *I_4 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) V_6_17);
{
#define MR_PROC_LABEL mercury__random__random_3_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (*I_4)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_6 = ((MR_Integer) (conv0_Copy));
}
    *HeadVar__3_3 = (MR_Word) (RS_6);
  }
}

void MR_CALL 
mercury__random__random_3_p_0(
  MR_Integer * I_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Integer RS_6;
    MR_Integer I0_7 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_11;
    MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) I0_7 * (MR_Unsigned) (MR_Integer) 9301);
    MR_Integer V_6_17;
    MR_Integer V_7_18;
    MR_Box conv0_Copy;

    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) (MR_Integer) 49297);
    V_7_18 = mercury__int__div_2_f_0(Var_11, (MR_Integer) 233280);
    V_6_17 = (MR_Integer) ((MR_Unsigned) V_7_18 * (MR_Unsigned) (MR_Integer) 233280);
    *I_4 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) V_6_17);
{
#define MR_PROC_LABEL mercury__random__random_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (*I_4)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_6 = ((MR_Integer) (conv0_Copy));
}
    *HeadVar__3_3 = (MR_Word) (RS_6);
  }
}

void MR_CALL 
mercury__random__init_2_p_0(
  MR_Integer I0_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer RS_4;
    MR_Box conv0_Copy;

{
#define MR_PROC_LABEL mercury__random__init_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (I0_3)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_4 = ((MR_Integer) (conv0_Copy));
}
    *HeadVar__2_2 = (MR_Word) (RS_4);
  }
}

static MR_bool MR_CALL 
mercury__random____Unify____supply_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random____Unify____supply_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__random____Compare____supply_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random____Compare____supply_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__random__init(void)
{
}

void mercury__random__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_supply_0);
}

void mercury__random__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__random__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module random.
