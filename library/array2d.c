/*
** Automatically generated from `array2d.m'
** by the Mercury compiler,
** version rotd-2019-05-19
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


// :- module array2d.
// :- implementation.

/*
INIT mercury__array2d__init
ENDINIT
*/

#include "array2d.mih"


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



struct mercury__array2d__array2d_2_f_0_env_0_s {
  MR_Word mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16;
  MR_Word mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1;
  MR_bool mercury__array2d__array2d_2_f_0_env_0__succeeded;
  MR_Word mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41;
  MR_Integer mercury__array2d__array2d_2_f_0_env_0__N_11;
  jmp_buf mercury__array2d__array2d_2_f_0_env_0__commit_0;
  MR_Word mercury__array2d__array2d_2_f_0_env_0__Ys_13;
  MR_Box mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__array2d__array__pti_array_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__array2d__array2d__field_types_array2d_1_0[3];

static const MR_DuFunctorDesc mercury__array2d__array2d__du_functor_desc_array2d_1_0;

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_stag_ordered_array2d_1_0[1];

static const MR_DuPtagLayout mercury__array2d__array2d__du_ptag_ordered_array2d_1[1];

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_name_ordered_array2d_1[1];

static const MR_Integer mercury__array2d__array2d__functor_number_map_array2d_1[1];

static MR_Integer MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__array2d__lists_2_6_f_0(
  MR_Word TypeInfo_for_T_26,
  MR_Integer IJ_8,
  MR_Integer J_9,
  MR_Integer N_10,
  MR_ArrayPtr A_11,
  MR_Word Xs_12,
  MR_Word Xss_13);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__array2d____Compare____array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__array2d_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__array2d_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__array2d_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__array2d_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array2d_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array2d_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_2[0])),
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__array2d__array__pti_array_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__array2d__array2d__field_types_array2d_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__array2d__array__pti_array_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__array2d__array2d__du_functor_desc_array2d_1_0 = {
  (MR_String) "array2d",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__array2d__array2d__field_types_array2d_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_stag_ordered_array2d_1_0[1] = {
  &mercury__array2d__array2d__du_functor_desc_array2d_1_0
};

static const MR_DuPtagLayout mercury__array2d__array2d__du_ptag_ordered_array2d_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__array2d__array2d__du_stag_ordered_array2d_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_name_ordered_array2d_1[1] = {
  &mercury__array2d__array2d__du_functor_desc_array2d_1_0
};

static const MR_Integer mercury__array2d__array2d__functor_number_map_array2d_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__array2d__array2d__type_ctor_info_array2d_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__array2d____Unify____array2d_1_0_10001)),
  ((MR_Box) (mercury__array2d____Compare____array2d_1_0_10001)),
  (MR_String) "array2d",
  (MR_String) "array2d",
  {     mercury__array2d__array2d__du_name_ordered_array2d_1 },
  {     mercury__array2d__array2d__du_ptag_ordered_array2d_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__array2d__array2d__functor_number_map_array2d_1
};

static MR_Integer MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__array2d____Compare____array2d_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_ArrayPtr ArgX3_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_ArrayPtr ArgY3_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__array____Compare____array_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_ArrayPtr ArgX3_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_ArrayPtr ArgY3_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = mercury__array____Unify____array_1_0(TypeInfo_for_T_11, ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__array2d__fill_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Item_4,
  MR_Word A0_5,
  MR_Word * A_6)
{
  {
    MR_Integer M_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A0_5, (MR_Integer) 0))));
    MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A0_5, (MR_Integer) 1))));
    MR_ArrayPtr Array0_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), A0_5, (MR_Integer) 2))));
    MR_ArrayPtr Array_10;
    MR_Integer V_6_15;
    MR_Integer V_7_16;

{
#define MR_PROC_LABEL mercury__array2d__fill_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array0_9 , Array);
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_6_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array2d__fill_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array0_9 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_7_16  = Max;
}
    mercury__array__do_fill_range_5_p_0(TypeInfo_for_T_11, Item_4, V_6_15, V_7_16, Array0_9, &Array_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *A_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (M_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (N_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Array_10));
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__lists_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer M_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer N_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_ArrayPtr A_5 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Var_6;
    MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) M_3 * (MR_Unsigned) N_4);
    MR_Integer Var_9;

    Var_6 = (MR_Integer) ((MR_Unsigned) Var_7 - (MR_Unsigned) (MR_Integer) 1);
    Var_9 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) (MR_Integer) 1);
    HeadVar__2_2 = mercury__array2d__lists_2_6_f_0(TypeInfo_for_T_13, Var_6, Var_9, N_4, A_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U));
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__array2d__lists_2_6_f_0(
  MR_Word TypeInfo_for_T_26,
  MR_Integer IJ_8,
  MR_Integer J_9,
  MR_Integer N_10,
  MR_ArrayPtr A_11,
  MR_Word Xs_12,
  MR_Word Xss_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= IJ_8);
    MR_Word HeadVar__7_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = ((MR_Integer) 0 <= J_9);
      if (succeeded)
      {
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) IJ_8 - (MR_Unsigned) (MR_Integer) 1);
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) J_9 - (MR_Unsigned) (MR_Integer) 1);
        MR_Word Var_20;
        MR_Box Var_21;
        MR_Integer next_value_of_IJ_8;
        MR_Integer next_value_of_J_9;
        MR_Word next_value_of_Xs_12;

        mercury__array__lookup_3_p_0(TypeInfo_for_T_26, A_11, IJ_8, &Var_21);
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = Var_21;
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Xs_12));
        }
        // direct tailcall eliminated
        ;
        next_value_of_IJ_8 = Var_16;
        next_value_of_J_9 = Var_18;
        next_value_of_Xs_12 = Var_20;
        IJ_8 = next_value_of_IJ_8;
        J_9 = next_value_of_J_9;
        Xs_12 = next_value_of_Xs_12;
        continue;
      }
      else
      {
        MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) N_10 - (MR_Unsigned) (MR_Integer) 1);
        MR_Word Var_25;
        MR_Integer next_value_of_J_9;
        MR_Word next_value_of_Xss_13;

        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Xs_12));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Xss_13));
        }
        // direct tailcall eliminated
        ;
        next_value_of_J_9 = Var_22;
        next_value_of_Xss_13 = Var_25;
        J_9 = next_value_of_J_9;
        Xs_12 = (MR_Word) ((MR_Unsigned) 0U);
        Xss_13 = next_value_of_Xss_13;
        continue;
      }
    }
    else
      {
        HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Xs_12));
        MR_hl_field(MR_mktag(1), HeadVar__7_7, 1) = ((MR_Box) (Xss_13));
      }
    return HeadVar__7_7;
    break;
  }
}

void MR_CALL 
mercury__array2d__unsafe_set_5_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer I_6,
  MR_Integer J_7,
  MR_Box X_8,
  MR_Word A_9,
  MR_Word * HeadVar__5_5)
{
  {
    MR_Integer M_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_9, (MR_Integer) 0))));
    MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_9, (MR_Integer) 1))));
    MR_ArrayPtr A_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), A_9, (MR_Integer) 2))));
    MR_ArrayPtr Var_17;
    MR_Integer Var_18;
    MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) I_6 * (MR_Unsigned) N_15);

    Var_18 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) J_7);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_set_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  Var_18 ;
	Item = (MR_Word) X_8 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A_16 , Array0);
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, Var_17 );
}
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (M_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (N_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Integer I_9,
  MR_Integer J_10,
  MR_Word HeadVar__3_3,
  MR_Box X_11)
{
  {
    MR_Word HeadVar__5_5;
    MR_Integer M_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer N_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_ArrayPtr A_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_ArrayPtr Var_12;
    MR_Integer Var_13;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) I_9 * (MR_Unsigned) N_7);

    Var_13 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) J_10);
{
#define MR_PROC_LABEL mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  Var_13 ;
	Item = (MR_Word) X_11 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A_8 , Array0);
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, Var_12 );
}
    {
      HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 0) = ((MR_Box) (M_6));
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 1) = ((MR_Box) (N_7));
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 2) = ((MR_Box) (Var_12));
    }
    return HeadVar__5_5;
  }
}

void MR_CALL 
mercury__array2d__set_5_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer I_6,
  MR_Integer J_7,
  MR_Box X_8,
  MR_Word A_9,
  MR_Word * HeadVar__5_5)
{
  *HeadVar__5_5 = mercury__array2d__f_101_108_101_109_32_58_61_4_f_0(TypeInfo_for_T_10, I_6, J_7, A_9, X_8);
}

MR_Word MR_CALL 
mercury__array2d__f_101_108_101_109_32_58_61_4_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer I_7,
  MR_Integer J_8,
  MR_Word T_6,
  MR_Box X_9)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_7);
    MR_Word HeadVar__5_5;
    MR_Integer M_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), T_6, (MR_Integer) 0))));
    MR_Integer N_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), T_6, (MR_Integer) 1))));
    MR_ArrayPtr _A_18 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), T_6, (MR_Integer) 2))));
    MR_Integer Var_20;

    if (succeeded)
    {
      succeeded = (I_7 < M_16);
      if (succeeded)
      {
        Var_20 = (MR_Integer) 0;
        succeeded = (Var_20 <= J_8);
        if (succeeded)
          succeeded = (J_8 < N_17);
      }
    }
    if (succeeded)
    {
      MR_ArrayPtr Var_27;
      MR_Integer Var_28;
      MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) I_7 * (MR_Unsigned) N_17);

      Var_28 = (MR_Integer) ((MR_Unsigned) Var_29 + (MR_Unsigned) J_8);
{
#define MR_PROC_LABEL mercury__array2d__f_101_108_101_109_32_58_61_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  Var_28 ;
	Item = (MR_Word) X_9 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, _A_18 , Array0);
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, Var_27 );
}
      {
        HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__5_5, 0) = ((MR_Box) (M_16));
        MR_hl_field(MR_mktag(0), HeadVar__5_5, 1) = ((MR_Box) (N_17));
        MR_hl_field(MR_mktag(0), HeadVar__5_5, 2) = ((MR_Box) (Var_27));
      }
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Box conv0_HeadVar__5_5;

      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__array2d__array2d__type_ctor_info_array2d_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      conv0_HeadVar__5_5 = mercury__require__func_error_1_f_0(TypeInfo_13_13, (MR_String) "array2d.\'elem :=\': indices out of bounds");
      HeadVar__5_5 = ((MR_Word) (conv0_HeadVar__5_5));
    }
    return HeadVar__5_5;
  }
}

MR_Box MR_CALL 
mercury__array2d__unsafe_elem_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer I_8,
  MR_Integer J_9,
  MR_Word HeadVar__3_3)
{
  {
    MR_Box HeadVar__4_4;
    MR_Integer N_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_ArrayPtr A_7 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer Var_10;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) I_8 * (MR_Unsigned) N_6);

    Var_10 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) J_9);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_elem_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A_7 , Array);
	Index =  Var_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 HeadVar__4_4  = (MR_Box) Item;
}
    return HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__array2d__elem_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer I_6,
  MR_Integer J_7,
  MR_Word T_5)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_6);
    MR_Box HeadVar__4_4;
    MR_Integer N_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), T_5, (MR_Integer) 1))));
    MR_ArrayPtr _A_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), T_5, (MR_Integer) 2))));
    MR_Integer M_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), T_5, (MR_Integer) 0))));
    MR_Integer Var_16;

    if (succeeded)
    {
      succeeded = (I_6 < M_12);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 0;
        succeeded = (Var_16 <= J_7);
        if (succeeded)
          succeeded = (J_7 < N_13);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_22;
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) I_6 * (MR_Unsigned) N_13);

      Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) J_7);
{
#define MR_PROC_LABEL mercury__array2d__elem_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, _A_14 , Array);
	Index =  Var_22 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 HeadVar__4_4  = (MR_Box) Item;
}
    }
    else
    {
      return HeadVar__4_4 = mercury__require__func_error_1_f_0(TypeInfo_for_T_9, (MR_String) "array2d.elem: indices out of bounds");
    }
    return HeadVar__4_4;
  }
}

MR_bool MR_CALL 
mercury__array2d__in_bounds_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Integer I_7,
  MR_Integer J_8)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_7);
    MR_Integer M_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer N_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_10;

    if (succeeded)
    {
      succeeded = (I_7 < M_4);
      if (succeeded)
      {
        Var_10 = (MR_Integer) 0;
        succeeded = (Var_10 <= J_8);
        if (succeeded)
          succeeded = (J_8 < N_5);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__array2d__bounds_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Integer * M_4,
  MR_Integer * N_5)
{
  {
    *M_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    *N_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  }
}

MR_bool MR_CALL 
mercury__array2d__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr A_4 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__array2d__is_empty_1_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A_4 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_8  = Max;
}
    succeeded = ((MR_Integer) 0 == Var_8);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__array2d__from_array_3_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Integer M_5,
  MR_Integer N_6,
  MR_ArrayPtr Array_7)
{
  {
    MR_bool succeeded = (M_5 >= (MR_Integer) 0);
    MR_Word Array2d_8;
    MR_Integer Var_12;

    if (succeeded)
    {
      Var_12 = (MR_Integer) 0;
      succeeded = (N_6 >= Var_12);
    }
    if (succeeded)
    {
      MR_Integer Size_9;
      MR_Word Result_10;
      MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__array2d__from_array_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_7 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Size_9  = Max;
}
      Var_13 = (MR_Integer) ((MR_Unsigned) M_5 * (MR_Unsigned) N_6);
      succeeded = (Size_9 < Var_13);
      if (succeeded)
        Result_10 = (MR_Integer) 1;
      else
      {
        succeeded = (Size_9 == Var_13);
        if (succeeded)
          Result_10 = (MR_Integer) 0;
        else
          Result_10 = (MR_Integer) 2;
      }
      switch (Result_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__require__error_1_p_0((MR_String) "array2d.from_array: too few elements");
          }
          break;
        case (MR_Integer) 0:
          {
            Array2d_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Array2d_8, 0) = ((MR_Box) (M_5));
            MR_hl_field(MR_mktag(0), Array2d_8, 1) = ((MR_Box) (N_6));
            MR_hl_field(MR_mktag(0), Array2d_8, 2) = ((MR_Box) (Array_7));
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__error_1_p_0((MR_String) "array2d.from_array: too many elements");
          }
          break;
      }
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "array2d.from_array: bounds must be non-negative");
    }
    return Array2d_8;
  }
}

MR_Word MR_CALL 
mercury__array2d__from_lists_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Xss_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__array2d__array2d_1_f_0(TypeInfo_for_T_4, Xss_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__array2d__array2d_2_f_0_env_0__Ys_13 = ((MR_Word) ((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13));
    mercury__array2d__array2d_1_f_0_2(env_ptr);
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_Integer Var_21;

      mercury__list__length_acc_3_p_0((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, (env_ptr)->mercury__array2d__array2d_2_f_0_env_0__Ys_13, (MR_Integer) 0, &Var_21);
      (env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = ((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__N_11 != Var_21);
      if ((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded)
        mercury__array2d__array2d_1_f_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_4(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, &(env_ptr)->mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13, (MR_Word) ((env_ptr)->mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1), mercury__array2d__array2d_1_f_0_3, env_ptr);
        (env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
mercury__array2d__array2d_1_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s env;

    (env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16 = TypeInfo_for_T_16;
    (env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1 = HeadVar__1_1;
    {
      MR_Word HeadVar__2_2;

      if (((env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_ArrayPtr Var_5;
        MR_Word TypeInfo_for_T_49;

{
#define MR_PROC_LABEL mercury__array2d__array2d_1_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, Var_5 );
}
        {
          HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_5));
        }
      }
      else
      {
        MR_Word Xs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer M_10;
        MR_ArrayPtr A_12;
        MR_Word Var_14;
        MR_Word V_5_37;
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 1))));
        MR_Word conv0_V_5_37;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          (env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16));
        }
        mercury__list__length_acc_3_p_0((env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, (MR_Word) ((env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1), (MR_Integer) 0, &M_10);
        mercury__list__length_acc_3_p_0((env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, Xs_7, (MR_Integer) 0, &(env).mercury__array2d__array2d_2_f_0_env_0__N_11);
        mercury__list__reverse_2_p_0((env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, (MR_Word) ((env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1), &conv0_V_5_37);
        V_5_37 = (MR_Word) (conv0_V_5_37);
        mercury__list__condense_acc_3_p_0((env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, V_5_37, (MR_Word) ((MR_Unsigned) 0U), &Var_14);
        mercury__array__from_list_2_p_0((env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, Var_14, &A_12);
        mercury__array2d__array2d_1_f_0_4(&env);
        (env).mercury__array2d__array2d_2_f_0_env_0__succeeded = !((env).mercury__array2d__array2d_2_f_0_env_0__succeeded);
        if ((env).mercury__array2d__array2d_2_f_0_env_0__succeeded)
          {
            HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (M_10));
            MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((env).mercury__array2d__array2d_2_f_0_env_0__N_11));
            MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (A_12));
          }
        else
        {
          MR_Word TypeInfo_20_20;
          MR_Box conv2_HeadVar__2_2;

          {
            TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__array2d__array2d__type_ctor_info_array2d_1));
            MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) ((env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16));
          }
          conv2_HeadVar__2_2 = mercury__require__func_error_1_f_0(TypeInfo_20_20, (MR_String) "array2d.array2d/1: non-rectangular list of lists");
          HeadVar__2_2 = ((MR_Word) (conv2_HeadVar__2_2));
        }
      }
      return HeadVar__2_2;
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__init_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer M_5,
  MR_Integer N_6,
  MR_Box X_7)
{
  {
    MR_bool succeeded = (M_5 >= (MR_Integer) 0);
    MR_Word HeadVar__4_4;
    MR_Integer Var_9;

    if (succeeded)
    {
      Var_9 = (MR_Integer) 0;
      succeeded = (N_6 >= Var_9);
    }
    if (succeeded)
    {
      MR_ArrayPtr Var_10;
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) M_5 * (MR_Unsigned) N_6);

      mercury__array__init_3_p_0(TypeInfo_for_T_13, Var_11, X_7, &Var_10);
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (M_5));
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (N_6));
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 2) = ((MR_Box) (Var_10));
      }
    }
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Box conv0_HeadVar__4_4;

      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__array2d__array2d__type_ctor_info_array2d_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
      }
      conv0_HeadVar__4_4 = mercury__require__func_error_1_f_0(TypeInfo_15_15, (MR_String) "array2d.init: bounds must be non-negative");
      HeadVar__4_4 = ((MR_Word) (conv0_HeadVar__4_4));
    }
    return HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__array2d____Unify____array2d_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__array2d____Compare____array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__array2d____Compare____array2d_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__array2d__init(void)
{
}

void mercury__array2d__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__array2d__array2d__type_ctor_info_array2d_1);
}

void mercury__array2d__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__array2d__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module array2d.
