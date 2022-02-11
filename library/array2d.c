/*
** Automatically generated from `array2d.m'
** by the Mercury compiler,
** version rotd-2022-02-11
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



struct mercury__array2d__from_lists_2_f_0_env_0_s {
  MR_Word mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_for_T_17;
  MR_Word mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1;
  MR_bool mercury__array2d__from_lists_2_f_0_env_0__succeeded;
  MR_Word mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_19_19;
  MR_Integer mercury__array2d__from_lists_2_f_0_env_0__NumColumns_11;
  jmp_buf mercury__array2d__from_lists_2_f_0_env_0__commit_0;
  MR_Word mercury__array2d__from_lists_2_f_0_env_0__Row_12;
  MR_Box mercury__array2d__from_lists_2_f_0_env_0__conv0_Row_12;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__array2d__array__pti_array_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__array2d__array2d__field_types_array2d_1_0[3];

static const MR_DuFunctorDesc mercury__array2d__array2d__du_functor_desc_array2d_1_0;

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_stag_ordered_array2d_1_0[1];

static const MR_DuPtagLayout mercury__array2d__array2d__du_ptag_ordered_array2d_1[1];

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_name_ordered_array2d_1[1];

static const MR_Integer mercury__array2d__array2d__functor_number_map_array2d_1[1];

static void MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_111_108_117_109_110_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer RowNum_7,
  MR_Integer ColumnNum_8,
  MR_Integer NumColumns_9,
  MR_ArrayPtr A_10,
  MR_Word STATE_VARIABLE_Columns_0_13,
  MR_Word * STATE_VARIABLE_Columns_14);

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_4(
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__array2d____Unify____array2d_1_0_10001)),
  ((MR_Box) (mercury__array2d____Compare____array2d_1_0_10001)),
  (MR_String) "array2d",
  (MR_String) "array2d",
  {     mercury__array2d__array2d__du_name_ordered_array2d_1 },
  {     mercury__array2d__array2d__du_ptag_ordered_array2d_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__array2d__array2d__functor_number_map_array2d_1,

};

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
  MR_Word Array0_5,
  MR_Word * Array_6)
{
  {
    MR_Integer NumRows_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_5, (MR_Integer) 0))));
    MR_Integer NumColumns_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_5, (MR_Integer) 1))));
    MR_ArrayPtr A0_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Array0_5, (MR_Integer) 2))));
    MR_ArrayPtr A_10;
    MR_Integer Var_15;
    MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array2d__fill_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A0_9 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array2d__fill_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A0_9 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_16  = Max;
}
    mercury__array__do_fill_range_5_p_0(TypeInfo_for_T_11, Item_4, Var_15, Var_16, A0_9, &A_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Array_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumRows_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumColumns_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (A_10));
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__lists_1_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Rows_6;
    MR_Integer NumRows_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer NumColumns_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_ArrayPtr A_5 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) NumRows_3 - (MR_Unsigned) 1);

    mercury__array2d__get_rows_5_p_0(TypeInfo_for_T_10, Var_7, NumColumns_4, A_5, (MR_Word) ((MR_Unsigned) 0U), &Rows_6);
    return Rows_6;
  }
}

void MR_CALL 
mercury__array2d__get_rows_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Integer RowNum_6,
  MR_Integer NumColumns_7,
  MR_ArrayPtr A_8,
  MR_Word STATE_VARIABLE_Rows_0_11,
  MR_Word * STATE_VARIABLE_Rows_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RowNum_6 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Columns_10;
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) NumColumns_7 - (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Rows_17_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_RowNum_6;
      MR_Word next_value_of_STATE_VARIABLE_Rows_0_11;

      mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_111_108_117_109_110_115_95_95_91_49_93_95_48_6_p_0(RowNum_6, Var_14, NumColumns_7, A_8, (MR_Word) ((MR_Unsigned) 0U), &Columns_10);
      {
        STATE_VARIABLE_Rows_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rows_17_17, 0) = ((MR_Box) (Columns_10));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rows_17_17, 1) = ((MR_Box) (STATE_VARIABLE_Rows_0_11));
      }
      Var_18 = (MR_Integer) ((MR_Unsigned) RowNum_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_RowNum_6 = Var_18;
      next_value_of_STATE_VARIABLE_Rows_0_11 = STATE_VARIABLE_Rows_17_17;
      RowNum_6 = next_value_of_RowNum_6;
      STATE_VARIABLE_Rows_0_11 = next_value_of_STATE_VARIABLE_Rows_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_Rows_12 = STATE_VARIABLE_Rows_0_11;
    break;
  }
}

static void MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_111_108_117_109_110_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer RowNum_7,
  MR_Integer ColumnNum_8,
  MR_Integer NumColumns_9,
  MR_ArrayPtr A_10,
  MR_Word STATE_VARIABLE_Columns_0_13,
  MR_Word * STATE_VARIABLE_Columns_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ColumnNum_8 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_12;
      MR_Integer Var_16;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) RowNum_7 * (MR_Unsigned) NumColumns_9);
      MR_Word STATE_VARIABLE_Columns_18_18;
      MR_Integer Var_19;
      MR_Integer next_value_of_ColumnNum_8;
      MR_Word next_value_of_STATE_VARIABLE_Columns_0_13;

      Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) ColumnNum_8);
{
#define MR_PROC_LABEL mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_111_108_117_109_110_115_95_95_91_49_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_10 ;
	Index = Var_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 Elem_12  = (MR_Box) Item;
}
      {
        STATE_VARIABLE_Columns_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Columns_18_18, 0) = Elem_12;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Columns_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Columns_0_13));
      }
      Var_19 = (MR_Integer) ((MR_Unsigned) ColumnNum_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ColumnNum_8 = Var_19;
      next_value_of_STATE_VARIABLE_Columns_0_13 = STATE_VARIABLE_Columns_18_18;
      ColumnNum_8 = next_value_of_ColumnNum_8;
      STATE_VARIABLE_Columns_0_13 = next_value_of_STATE_VARIABLE_Columns_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_Columns_14 = STATE_VARIABLE_Columns_0_13;
    break;
  }
}

MR_Word MR_CALL 
mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer R_7,
  MR_Integer C_8,
  MR_Word Array0_6,
  MR_Box Value_9)
{
  {
    MR_Word Array_10;
    MR_Integer NumRows_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_6, (MR_Integer) 0))));
    MR_Integer NumColumns_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array0_6, (MR_Integer) 1))));
    MR_ArrayPtr A0_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Array0_6, (MR_Integer) 2))));
    MR_ArrayPtr A_21;
    MR_Integer Var_22;
    MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) R_7 * (MR_Unsigned) NumColumns_19);

    Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) C_8);
{
#define MR_PROC_LABEL mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Var_22 ;
	Item = (MR_Word) Value_9 ;
	Array0 = (MR_ArrayPtr)A0_20 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 A_21  = (MR_Box) Array;
}
    {
      Array_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Array_10, 0) = ((MR_Box) (NumRows_18));
      MR_hl_field(MR_mktag(0), Array_10, 1) = ((MR_Box) (NumColumns_19));
      MR_hl_field(MR_mktag(0), Array_10, 2) = ((MR_Box) (A_21));
    }
    return Array_10;
  }
}

void MR_CALL 
mercury__array2d__unsafe_set_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Integer R_6,
  MR_Integer C_7,
  MR_Box Value_8,
  MR_Word STATE_VARIABLE_Array_0_14,
  MR_Word * STATE_VARIABLE_Array_15)
{
  {
    MR_Integer NumRows_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Array_0_14, (MR_Integer) 0))));
    MR_Integer NumColumns_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Array_0_14, (MR_Integer) 1))));
    MR_ArrayPtr A0_12 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Array_0_14, (MR_Integer) 2))));
    MR_ArrayPtr A_13;
    MR_Integer Var_16;
    MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) R_6 * (MR_Unsigned) NumColumns_11);

    Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) C_7);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_set_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Var_16 ;
	Item = (MR_Word) Value_8 ;
	Array0 = (MR_ArrayPtr)A0_12 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 A_13  = (MR_Box) Array;
}
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Array_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumRows_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumColumns_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (A_13));
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__f_101_108_101_109_32_58_61_4_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer R_7,
  MR_Integer C_8,
  MR_Word Array0_6,
  MR_Box Value_9)
{
  {
    MR_Word Array_10;

    mercury__array2d__set_5_p_0(TypeInfo_for_T_11, R_7, C_8, Value_9, Array0_6, &Array_10);
    return Array_10;
  }
}

void MR_CALL 
mercury__array2d__set_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Integer R_6,
  MR_Integer C_7,
  MR_Box Value_8,
  MR_Word STATE_VARIABLE_Array_0_10,
  MR_Word * STATE_VARIABLE_Array_11)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= R_6);
    MR_Integer NumRows_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Array_0_10, (MR_Integer) 0))));
    MR_Integer NumColumns_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Array_0_10, (MR_Integer) 1))));
    MR_ArrayPtr _A_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Array_0_10, (MR_Integer) 2))));
    MR_Integer Var_22;

    if (succeeded)
    {
      succeeded = (R_6 < NumRows_18);
      if (succeeded)
      {
        Var_22 = (MR_Integer) 0;
        succeeded = (Var_22 <= C_7);
        if (succeeded)
          succeeded = (C_7 < NumColumns_19);
      }
    }
    if (succeeded)
    {
      MR_ArrayPtr A_32;
      MR_Integer Var_33;
      MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) R_6 * (MR_Unsigned) NumColumns_19);

      Var_33 = (MR_Integer) ((MR_Unsigned) Var_34 + (MR_Unsigned) C_7);
{
#define MR_PROC_LABEL mercury__array2d__set_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Var_33 ;
	Item = (MR_Word) Value_8 ;
	Array0 = (MR_ArrayPtr)_A_20 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 A_32  = (MR_Box) Array;
}
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Array_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumRows_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumColumns_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (A_32));
      }
    }
    else
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140array2d.set\'/5", (MR_String) "indices out of bounds");
        return;
      }
  }
}

MR_Box MR_CALL 
mercury__array2d__unsafe_elem_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Integer R_6,
  MR_Integer C_7,
  MR_Word Array_5)
{
  {
    MR_Box HeadVar__4_4;
    MR_Integer NumColumns_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 1))));
    MR_ArrayPtr A_15 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 2))));
    MR_Integer Var_16;
    MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) R_6 * (MR_Unsigned) NumColumns_14);

    Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) C_7);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_elem_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_15 ;
	Index = Var_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 HeadVar__4_4  = (MR_Box) Item;
}
    return HeadVar__4_4;
  }
}

void MR_CALL 
mercury__array2d__unsafe_lookup_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Array_5,
  MR_Integer R_6,
  MR_Integer C_7,
  MR_Box * Elem_8)
{
  {
    MR_Integer NumColumns_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 1))));
    MR_ArrayPtr A_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 2))));
    MR_Integer Var_17;
    MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) R_6 * (MR_Unsigned) NumColumns_15);

    Var_17 = (MR_Integer) ((MR_Unsigned) Var_18 + (MR_Unsigned) C_7);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_lookup_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = Var_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 *Elem_8  = (MR_Box) Item;
}
  }
}

MR_Box MR_CALL 
mercury__array2d__unsafe_lookup_3_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Array_5,
  MR_Integer R_6,
  MR_Integer C_7)
{
  {
    MR_Box Elem_8;
    MR_Integer NumColumns_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 1))));
    MR_ArrayPtr A_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 2))));
    MR_Integer Var_12;
    MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) R_6 * (MR_Unsigned) NumColumns_10);

    Var_12 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) C_7);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_lookup_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_11 ;
	Index = Var_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 Elem_8  = (MR_Box) Item;
}
    return Elem_8;
  }
}

MR_Box MR_CALL 
mercury__array2d__elem_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Integer R_6,
  MR_Integer C_7,
  MR_Word Array_5)
{
  {
    MR_Box HeadVar__4_4;

    HeadVar__4_4 = mercury__array2d__lookup_3_f_0(TypeInfo_for_T_8, Array_5, R_6, C_7);
    return HeadVar__4_4;
  }
}

void MR_CALL 
mercury__array2d__lookup_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Array_5,
  MR_Integer R_6,
  MR_Integer C_7,
  MR_Box * Elem_8)
{
  *Elem_8 = mercury__array2d__lookup_3_f_0(TypeInfo_for_T_9, Array_5, R_6, C_7);
}

MR_Box MR_CALL 
mercury__array2d__lookup_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Array_5,
  MR_Integer R_6,
  MR_Integer C_7)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= R_6);
    MR_Box Elem_8;
    MR_Integer NumColumns_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 1))));
    MR_ArrayPtr _A_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 2))));
    MR_Integer NumRows_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Array_5, (MR_Integer) 0))));
    MR_Integer Var_18;

    if (succeeded)
    {
      succeeded = (R_6 < NumRows_14);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 0;
        succeeded = (Var_18 <= C_7);
        if (succeeded)
          succeeded = (C_7 < NumColumns_15);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_26;
      MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) R_6 * (MR_Unsigned) NumColumns_15);

      Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) C_7);
{
#define MR_PROC_LABEL mercury__array2d__lookup_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)_A_16 ;
	Index = Var_26 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 Elem_8  = (MR_Box) Item;
}
    }
    else
      mercury__require__error_2_p_0((MR_String) "function \140array2d.lookup\'/3", (MR_String) "indices out of bounds");
    return Elem_8;
  }
}

MR_bool MR_CALL 
mercury__array2d__in_bounds_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Integer R_7,
  MR_Integer C_8)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= R_7);
    MR_Integer NumRows_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer NumColumns_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Var_10;

    if (succeeded)
    {
      succeeded = (R_7 < NumRows_4);
      if (succeeded)
      {
        Var_10 = (MR_Integer) 0;
        succeeded = (Var_10 <= C_8);
        if (succeeded)
          succeeded = (C_8 < NumColumns_5);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__array2d__bounds_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Integer * NumRows_4,
  MR_Integer * NumColumns_5)
{
  {
    *NumRows_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    *NumColumns_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
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

	Array = (MR_ArrayPtr)A_4 ;
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
  MR_Word TypeInfo_for_T_20,
  MR_Integer NumRows_5,
  MR_Integer NumColumns_6,
  MR_ArrayPtr Array_7)
{
  {
    MR_bool succeeded = (NumRows_5 >= (MR_Integer) 0);
    MR_Word Array2d_8;
    MR_Integer Var_12;

    if (succeeded)
    {
      Var_12 = (MR_Integer) 0;
      succeeded = (NumColumns_6 >= Var_12);
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

	Array = (MR_ArrayPtr)Array_7 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Size_9  = Max;
}
      Var_13 = (MR_Integer) ((MR_Unsigned) NumRows_5 * (MR_Unsigned) NumColumns_6);
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
          mercury__require__error_2_p_0((MR_String) "function \140array2d.from_array\'/3", (MR_String) "too few elements");
          break;
        case (MR_Integer) 0:
          {
            Array2d_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Array2d_8, 0) = ((MR_Box) (NumRows_5));
            MR_hl_field(MR_mktag(0), Array2d_8, 1) = ((MR_Box) (NumColumns_6));
            MR_hl_field(MR_mktag(0), Array2d_8, 2) = ((MR_Box) (Array_7));
          }
          break;
        case (MR_Integer) 2:
          mercury__require__error_2_p_0((MR_String) "function \140array2d.from_array\'/3", (MR_String) "too many elements");
          break;
      }
    }
    else
      mercury__require__error_2_p_0((MR_String) "function \140array2d.from_array\'/3", (MR_String) " bounds must be non-negative");
    return Array2d_8;
  }
}

MR_Word MR_CALL 
mercury__array2d__array2d_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Rows_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__array2d__from_lists_1_f_0(TypeInfo_for_T_4, Rows_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__from_lists_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__from_lists_2_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__from_lists_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__from_lists_2_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__Row_12 = ((MR_Word) ((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__conv0_Row_12));
    mercury__array2d__from_lists_1_f_0_2(env_ptr);
  }
}

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__from_lists_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__from_lists_2_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_Integer Var_20;

      mercury__list__length_acc_3_p_0((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_for_T_17, (env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__Row_12, (MR_Integer) 0, &Var_20);
      (env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__succeeded = ((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__NumColumns_11 != Var_20);
      if ((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__succeeded)
        mercury__array2d__from_lists_1_f_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__array2d__from_lists_1_f_0_4(
  void * env_ptr_arg)
{
  {
    struct mercury__array2d__from_lists_2_f_0_env_0_s * env_ptr = (struct mercury__array2d__from_lists_2_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_19_19, &(env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__conv0_Row_12, (MR_Word) ((env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1), mercury__array2d__from_lists_1_f_0_3, env_ptr);
        (env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__array2d__from_lists_2_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
mercury__array2d__from_lists_1_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1)
{
  {
    struct mercury__array2d__from_lists_2_f_0_env_0_s env;

    (env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_for_T_17 = TypeInfo_for_T_17;
    (env).mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1 = HeadVar__1_1;
    {
      MR_Word HeadVar__2_2;

      if (((env).mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_ArrayPtr Var_5;
        MR_Word TypeInfo_for_T_48;

{
#define MR_PROC_LABEL mercury__array2d__from_lists_1_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	 Var_5  = (MR_Box) Array;
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
        MR_Word FirstRow_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer NumRows_10;
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          (env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_19_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_for_T_17));
        }
        mercury__list__length_acc_3_p_0((env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_19_19, (MR_Word) ((env).mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1), (MR_Integer) 0, &NumRows_10);
        mercury__list__length_acc_3_p_0((env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_for_T_17, FirstRow_7, (MR_Integer) 0, &(env).mercury__array2d__from_lists_2_f_0_env_0__NumColumns_11);
        mercury__array2d__from_lists_1_f_0_4(&env);
        (env).mercury__array2d__from_lists_2_f_0_env_0__succeeded = !((env).mercury__array2d__from_lists_2_f_0_env_0__succeeded);
        if ((env).mercury__array2d__from_lists_2_f_0_env_0__succeeded)
        {
          MR_ArrayPtr A_13;
          MR_Word Var_14;
          MR_Word Var_41;
          MR_Word conv1_Var_41;

          mercury__list__reverse_2_p_0((env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_19_19, (MR_Word) ((env).mercury__array2d__from_lists_2_f_0_env_0__HeadVar__1_1), &conv1_Var_41);
          Var_41 = (MR_Word) (conv1_Var_41);
          mercury__list__condense_acc_3_p_0((env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_for_T_17, Var_41, (MR_Word) ((MR_Unsigned) 0U), &Var_14);
          mercury__array__from_list_2_p_0((env).mercury__array2d__from_lists_2_f_0_env_0__TypeInfo_for_T_17, Var_14, &A_13);
          {
            HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (NumRows_10));
            MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((env).mercury__array2d__from_lists_2_f_0_env_0__NumColumns_11));
            MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (A_13));
          }
        }
        else
          mercury__require__error_2_p_0((MR_String) "function \140array2d.from_lists\'/1", (MR_String) "non-rectangular list of lists");
      }
      return HeadVar__2_2;
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__init_3_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Integer NumRows_5,
  MR_Integer NumColumns_6,
  MR_Box Elem_7)
{
  {
    MR_bool succeeded = (NumRows_5 >= (MR_Integer) 0);
    MR_Word HeadVar__4_4;
    MR_Integer Var_9;

    if (succeeded)
    {
      Var_9 = (MR_Integer) 0;
      succeeded = (NumColumns_6 >= Var_9);
    }
    if (succeeded)
    {
      MR_ArrayPtr Var_10;
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) NumRows_5 * (MR_Unsigned) NumColumns_6);

      mercury__array__init_3_p_0(TypeInfo_for_T_14, Var_11, Elem_7, &Var_10);
      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (NumRows_5));
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (NumColumns_6));
        MR_hl_field(MR_mktag(0), HeadVar__4_4, 2) = ((MR_Box) (Var_10));
      }
    }
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Box conv0_HeadVar__4_4;

      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__array2d__array2d__type_ctor_info_array2d_1));
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      conv0_HeadVar__4_4 = mercury__require__func_error_2_f_0(TypeInfo_16_16, (MR_String) "function \140array2d.init\'/3", (MR_String) "bounds must be non-negative");
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
