/*
** Automatically generated from `bit_buffer.write.m'
** by the Mercury compiler,
** version rotd-2018-11-29
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


// :- module bit_buffer.write.
// :- implementation.

/*
INIT mercury__bit_buffer__write__init
ENDINIT
*/

#include "bit_buffer.write.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bit_buffer.mih"
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




static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0;

static const MR_Integer mercury__bit_buffer__write__bit_buffer__write__functor_number_map_write_buffer_2[1];

static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer__write____vti_tuple_0;

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__write__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0;

static const MR_NotagFunctorDesc mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2;

static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0;

static MR_Integer MR_CALL 
mercury__bit_buffer__write__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__bit_buffer__write__foldl2__ho2_6_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static void MR_CALL 
mercury__bit_buffer__write__copy_out_bitmap_5_p_0(
  MR_Box FilledBM_6,
  MR_Integer STATE_VARIABLE_Index_0_10,
  MR_Integer * STATE_VARIABLE_Index_11,
  MR_Box STATE_VARIABLE_BM_0_12,
  MR_Box * STATE_VARIABLE_BM_13);

static void MR_CALL 
mercury__bit_buffer__write__flush_all_to_stream_2_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box STATE_VARIABLE_Buffer_0_4,
  MR_Box * STATE_VARIABLE_Buffer_5);

static void MR_CALL 
mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____io_write_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer__write____Compare____io_write_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__write_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__write_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__write_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bit_buffer.mh"
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



static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0 = {
  &mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2,
  {
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_binary_output_stream_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_io_write_buffer_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__write____Unify____io_write_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__write____Compare____io_write_buffer_0_0_10001)),
  (MR_String) "bit_buffer.write",
  (MR_String) "io_write_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer mercury__bit_buffer__write__bit_buffer__write__functor_number_map_write_buffer_2[1] = {
  (MR_Integer) 0
};

static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer__write____vti_tuple_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__write__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) (&mercury__bit_buffer__write____vti_tuple_0)
  }
};

static const MR_NotagFunctorDesc mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2 = {
  (MR_String) "write_buffer",
  (MR_PseudoTypeInfo) (&mercury__bit_buffer__write__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0),
  (MR_String) "bit_buffer",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bit_buffer__write____Unify____write_buffer_2_0_10001)),
  ((MR_Box) (mercury__bit_buffer__write____Compare____write_buffer_2_0_10001)),
  (MR_String) "bit_buffer.write",
  (MR_String) "write_buffer",
  {     &mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2 },
  {     &mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bit_buffer__write__bit_buffer__write__functor_number_map_write_buffer_2
};

static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0 = {
  &mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2,
  {
    (MR_TypeInfo) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0),
    (MR_TypeInfo) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__write____Unify____write_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__write____Compare____write_buffer_0_0_10001)),
  (MR_String) "bit_buffer.write",
  (MR_String) "write_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__bit_buffer__write__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_2_0(
  MR_Word TypeInfo_for_Stream_8,
  MR_Word TypeInfo_for_State_9,
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
      MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
      MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);

      mercury__bit_buffer____Compare____bit_buffer_3_0(TypeInfo_for_Stream_8, TypeInfo_for_State_9, (MR_Word) (&mercury__bit_buffer__write_scalar_common_1[0]), HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__bit_buffer__write_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__bit_buffer__write____Unify____write_buffer_2_0((MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0), (MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bit_buffer__write____Compare____io_write_buffer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__bit_buffer__write_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____io_write_buffer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__bit_buffer__write____Unify____write_buffer_2_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_output_stream_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_2_0(
  MR_Word TypeInfo_for_Stream_7,
  MR_Word TypeInfo_for_State_8,
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
      MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
      MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);

      succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(TypeInfo_for_Stream_7, TypeInfo_for_State_8, (MR_Word) (&mercury__bit_buffer__write_scalar_common_1[0]), ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__bit_buffer__write__finalize_to_bitmap_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box STATE_VARIABLE_BM_9;
    MR_Box Buffer_3 = (MR_Box) (HeadVar__1_1);
    MR_Integer NumBits_5;
    MR_Box LastBM_6;
    MR_Integer Index_7;
    MR_Box STATE_VARIABLE_BM_11_11;
    MR_Box Var_12;
    MR_Integer Var_13;
    MR_Box STATE_VARIABLE_BM_14_14;
    MR_Word Var_16;
    MR_Integer Var_8;

    NumBits_5 = mercury__bit_buffer__write__num_buffered_bits_1_f_0((MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0), (MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0), HeadVar__1_1);
    STATE_VARIABLE_BM_11_11 = mercury__bitmap__init_2_f_0(NumBits_5, (MR_Integer) 0);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_to_bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) Buffer_3 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 Var_12  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_to_bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) Buffer_3 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Var_13  = Pos;
}
    LastBM_6 = mercury__bitmap__shrink_without_copying_2_f_0(Var_12, Var_13);
    mercury__bit_buffer__write__copy_out_bitmap_5_p_0(LastBM_6, NumBits_5, &Index_7, STATE_VARIABLE_BM_11_11, &STATE_VARIABLE_BM_14_14);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_to_bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) Buffer_3 ;
		{

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;


		;}
#undef MR_PROC_LABEL
	 Var_16  = FilledBMs;
}
    mercury__bit_buffer__write__foldl2__ho2_6_p_in__list_0(Var_16, Index_7, &Var_8, STATE_VARIABLE_BM_14_14, &STATE_VARIABLE_BM_9);
    return STATE_VARIABLE_BM_9;
  }
}

static void MR_CALL 
mercury__bit_buffer__write__foldl2__ho2_6_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Box V_15_13 = ((MR_Box) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_16_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer V_23_19;
      MR_Box V_24_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      mercury__bit_buffer__write__copy_out_bitmap_5_p_0(V_15_13, HeadVar__3_3, &V_23_19, HeadVar__5_5, &V_24_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_16_14;
      next_value_of_HeadVar__3_3 = V_23_19;
      next_value_of_HeadVar__5_5 = V_24_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bit_buffer__write__copy_out_bitmap_5_p_0(
  MR_Box FilledBM_6,
  MR_Integer STATE_VARIABLE_Index_0_10,
  MR_Integer * STATE_VARIABLE_Index_11,
  MR_Box STATE_VARIABLE_BM_0_12,
  MR_Box * STATE_VARIABLE_BM_13)
{
  {
    MR_bool succeeded;
    MR_Integer Size_9;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__copy_out_bitmap_5_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) FilledBM_6 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Size_9  = NumBits;
}
    succeeded = (Size_9 > (MR_Integer) 0);
    if (succeeded)
    {
      *STATE_VARIABLE_Index_11 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Index_0_10 - (MR_Unsigned) Size_9);
      *STATE_VARIABLE_BM_13 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, FilledBM_6, (MR_Integer) 0, STATE_VARIABLE_BM_0_12, *STATE_VARIABLE_Index_11, Size_9);
    }
    else
    {
      *STATE_VARIABLE_BM_13 = STATE_VARIABLE_BM_0_12;
      *STATE_VARIABLE_Index_11 = STATE_VARIABLE_Index_0_10;
    }
  }
}

void MR_CALL 
mercury__bit_buffer__write__finalize_3_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word STATE_VARIABLE_Buffer_0_8,
  MR_Box * Stream_5,
  MR_Box * State_6)
{
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_19_19;
    MR_Integer BitsToByte_7;
    MR_Word STATE_VARIABLE_Buffer_10_10;
    MR_Word STATE_VARIABLE_Buffer_11_11;
    MR_Box Var_12;
    MR_Box Var_13;
    MR_Box Var_14;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_17_17  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_19_19  = TypeInfo;
}
    BitsToByte_7 = mercury__bit_buffer__write__num_bits_to_byte_boundary_1_f_0(TypeInfo_17_17, TypeInfo_19_19, STATE_VARIABLE_Buffer_0_8);
    mercury__bit_buffer__write__put_bits_4_p_0(TypeClassInfo_for_writer_15, (MR_Integer) 0, BitsToByte_7, STATE_VARIABLE_Buffer_0_8, &STATE_VARIABLE_Buffer_10_10);
    mercury__bit_buffer__write__flush_2_p_0(TypeClassInfo_for_writer_15, STATE_VARIABLE_Buffer_10_10, &STATE_VARIABLE_Buffer_11_11);
    Var_12 = (MR_Box) (STATE_VARIABLE_Buffer_11_11);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) Var_12 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	 *Stream_5  = (MR_Box) Stream;
}
    Var_14 = (MR_Box) (STATE_VARIABLE_Buffer_11_11);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) Var_14 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	 Var_13  = (MR_Box) State;
}
    *State_6 = Var_13;
  }
}

void MR_CALL 
mercury__bit_buffer__write__flush_2_p_0(
  MR_Word TypeClassInfo_for_writer_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word UseStream_4;
    MR_Box STATE_VARIABLE_Buffer_0_5 = (MR_Box) (HeadVar__1_1);
    MR_Box STATE_VARIABLE_Buffer_6;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_5 ;
		{

    UseStream = Buffer->ML_bit_buffer_use_stream;


		;}
#undef MR_PROC_LABEL
	 UseStream_4  = UseStream;
}
    switch (UseStream_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Buffer_6 = STATE_VARIABLE_Buffer_0_5;
        break;
      case (MR_Integer) 1:
        mercury__bit_buffer__write__flush_all_to_stream_2_p_0(TypeClassInfo_for_writer_8, STATE_VARIABLE_Buffer_0_5, &STATE_VARIABLE_Buffer_6);
        break;
    }
    *HeadVar__2_2 = (MR_Word) (STATE_VARIABLE_Buffer_6);
  }
}

static void MR_CALL 
mercury__bit_buffer__write__flush_all_to_stream_2_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box STATE_VARIABLE_Buffer_0_4,
  MR_Box * STATE_VARIABLE_Buffer_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;
    MR_Integer Var_6;
    MR_Word Var_8;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_all_to_stream_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_11 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_13_13  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_all_to_stream_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_11 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    Var_8 = (MR_Word) (STATE_VARIABLE_Buffer_0_4);
    Var_6 = mercury__bit_buffer__write__num_buffered_bits_1_f_0(TypeInfo_13_13, TypeInfo_15_15, Var_8);
    succeeded = (Var_6 >= (MR_Integer) 8);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Buffer_9_9;
      MR_Box next_value_of_STATE_VARIABLE_Buffer_0_4;

      mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0(TypeClassInfo_for_writer_11, STATE_VARIABLE_Buffer_0_4, &STATE_VARIABLE_Buffer_9_9);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Buffer_0_4 = STATE_VARIABLE_Buffer_9_9;
      STATE_VARIABLE_Buffer_0_4 = next_value_of_STATE_VARIABLE_Buffer_0_4;
      continue;
    }
    else
      *STATE_VARIABLE_Buffer_5 = STATE_VARIABLE_Buffer_0_4;
    break;
  }
}

void MR_CALL 
mercury__bit_buffer__write__put_bitmap_5_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box BM_6,
  MR_Integer Index_7,
  MR_Integer NumBits_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_Box STATE_VARIABLE_Buffer_0_10 = (MR_Box) (HeadVar__4_4);
    MR_Box STATE_VARIABLE_Buffer_11;

    mercury__bit_buffer__write__put_bitmap_2_5_p_0(TypeClassInfo_for_writer_13, BM_6, Index_7, NumBits_8, STATE_VARIABLE_Buffer_0_10, &STATE_VARIABLE_Buffer_11);
    *HeadVar__5_5 = (MR_Word) (STATE_VARIABLE_Buffer_11);
  }
}

void MR_CALL 
mercury__bit_buffer__write__put_bitmap_3_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box BM_4,
  MR_Word STATE_VARIABLE_Buffer_0_6,
  MR_Word * STATE_VARIABLE_Buffer_7)
{
  {
    MR_Integer Var_9;
    MR_Box STATE_VARIABLE_Buffer_0_16;
    MR_Box STATE_VARIABLE_Buffer_17;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_3_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_9  = NumBits;
}
    STATE_VARIABLE_Buffer_0_16 = (MR_Box) (STATE_VARIABLE_Buffer_0_6);
    mercury__bit_buffer__write__put_bitmap_2_5_p_0(TypeClassInfo_for_writer_11, BM_4, (MR_Integer) 0, Var_9, STATE_VARIABLE_Buffer_0_16, &STATE_VARIABLE_Buffer_17);
    *STATE_VARIABLE_Buffer_7 = (MR_Word) (STATE_VARIABLE_Buffer_17);
  }
}

void MR_CALL 
mercury__bit_buffer__write__put_bitmap_2_5_p_0(
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box BM_6,
  MR_Integer Index_7,
  MR_Integer NumBits_8,
  MR_Box STATE_VARIABLE_Buffer_0_16,
  MR_Box * STATE_VARIABLE_Buffer_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBits_8 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Buffer_17 = STATE_VARIABLE_Buffer_0_16;
    else
    {
      MR_Box BufferBM0_10;
      MR_Integer Pos_11;
      MR_Integer Size_12;
      MR_Integer Remain_13;
      MR_Integer NumBitsToWrite_14;
      MR_Box BufferBM_15;
      MR_Integer Var_18;
      MR_Box STATE_VARIABLE_Buffer_19_19;
      MR_Box STATE_VARIABLE_Buffer_20_20;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_NumBits_8;
      MR_Box next_value_of_STATE_VARIABLE_Buffer_0_16;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_16 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 BufferBM0_10  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_16 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Pos_11  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_16 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 Size_12  = Size;
}
      Remain_13 = (MR_Integer) ((MR_Unsigned) Size_12 - (MR_Unsigned) Pos_11);
      succeeded = (Remain_13 < NumBits_8);
      if (succeeded)
        NumBitsToWrite_14 = Remain_13;
      else
        NumBitsToWrite_14 = NumBits_8;
      BufferBM_15 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, BM_6, Index_7, BufferBM0_10, Pos_11, NumBitsToWrite_14);
      Var_18 = (MR_Integer) ((MR_Unsigned) Pos_11 + (MR_Unsigned) NumBitsToWrite_14);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) BufferBM_15 ;
	Pos =  Var_18 ;
	Buffer0 = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_16 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Buffer_19_19  = (MR_Box) Buffer;
}
      mercury__bit_buffer__write__maybe_make_room_2_p_0(TypeClassInfo_for_writer_24, STATE_VARIABLE_Buffer_19_19, &STATE_VARIABLE_Buffer_20_20);
      Var_21 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) NumBitsToWrite_14);
      Var_22 = (MR_Integer) ((MR_Unsigned) NumBits_8 - (MR_Unsigned) NumBitsToWrite_14);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_21;
      next_value_of_NumBits_8 = Var_22;
      next_value_of_STATE_VARIABLE_Buffer_0_16 = STATE_VARIABLE_Buffer_20_20;
      Index_7 = next_value_of_Index_7;
      NumBits_8 = next_value_of_NumBits_8;
      STATE_VARIABLE_Buffer_0_16 = next_value_of_STATE_VARIABLE_Buffer_0_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bit_buffer__write__put_byte_3_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Integer Byte_4,
  MR_Word STATE_VARIABLE_Buffer_0_6,
  MR_Word * STATE_VARIABLE_Buffer_7)
{
  {
    mercury__bit_buffer__write__put_bits_4_p_0(TypeClassInfo_for_writer_10, Byte_4, (MR_Integer) 8, STATE_VARIABLE_Buffer_0_6, STATE_VARIABLE_Buffer_7);
  }
}

void MR_CALL 
mercury__bit_buffer__write__put_bit_3_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Buffer_0_2,
  MR_Word * STATE_VARIABLE_Buffer_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__bit_buffer__write__put_bits_4_p_0(TypeClassInfo_for_writer_16, (MR_Integer) 0, (MR_Integer) 1, STATE_VARIABLE_Buffer_0_2, STATE_VARIABLE_Buffer_3);
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__bit_buffer__write__put_bits_4_p_0(TypeClassInfo_for_writer_16, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_Buffer_0_2, STATE_VARIABLE_Buffer_3);
      }
      break;
  }
}

void MR_CALL 
mercury__bit_buffer__write__put_bits_4_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Integer Bits_5,
  MR_Integer NumBits_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Box BM0_8;
    MR_Integer Pos0_9;
    MR_Box BM_10;
    MR_Integer Pos_11;
    MR_Box STATE_VARIABLE_Buffer_0_12 = (MR_Box) (HeadVar__3_3);
    MR_Box STATE_VARIABLE_Buffer_13;
    MR_Box STATE_VARIABLE_Buffer_14_14;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bits_4_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_12 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 BM0_8  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bits_4_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_12 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Pos0_9  = Pos;
}
    BM_10 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(Pos0_9, NumBits_6, BM0_8, Bits_5);
    Pos_11 = (MR_Integer) ((MR_Unsigned) Pos0_9 + (MR_Unsigned) NumBits_6);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bits_4_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) BM_10 ;
	Pos =  Pos_11 ;
	Buffer0 = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_12 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Buffer_14_14  = (MR_Box) Buffer;
}
    mercury__bit_buffer__write__maybe_make_room_2_p_0(TypeClassInfo_for_writer_16, STATE_VARIABLE_Buffer_14_14, &STATE_VARIABLE_Buffer_13);
    *HeadVar__4_4 = (MR_Word) (STATE_VARIABLE_Buffer_13);
  }
}

void MR_CALL 
mercury__bit_buffer__write__maybe_make_room_2_p_0(
  MR_Word TypeClassInfo_for_writer_9,
  MR_Box STATE_VARIABLE_Buffer_0_4,
  MR_Box * STATE_VARIABLE_Buffer_5)
{
  {
    MR_bool succeeded;
    MR_Integer Var_6;
    MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__maybe_make_room_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_4 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Var_6  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__maybe_make_room_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_4 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 Var_7  = Size;
}
    succeeded = (Var_6 >= Var_7);
    if (succeeded)
      mercury__bit_buffer__write__make_room_2_p_0(TypeClassInfo_for_writer_9, STATE_VARIABLE_Buffer_0_4, STATE_VARIABLE_Buffer_5);
    else
      *STATE_VARIABLE_Buffer_5 = STATE_VARIABLE_Buffer_0_4;
  }
}

void MR_CALL 
mercury__bit_buffer__write__make_room_2_p_0(
  MR_Word TypeClassInfo_for_writer_9,
  MR_Box STATE_VARIABLE_Buffer_0_5,
  MR_Box * STATE_VARIABLE_Buffer_6)
{
  {
    MR_Word UseStream_4;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__make_room_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_5 ;
		{

    UseStream = Buffer->ML_bit_buffer_use_stream;


		;}
#undef MR_PROC_LABEL
	 UseStream_4  = UseStream;
}
    switch (UseStream_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__bit_buffer__write__store_full_buffer_2_p_0(TypeClassInfo_for_writer_9, STATE_VARIABLE_Buffer_0_5, STATE_VARIABLE_Buffer_6);
        break;
      case (MR_Integer) 1:
        mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0(TypeClassInfo_for_writer_9, STATE_VARIABLE_Buffer_0_5, STATE_VARIABLE_Buffer_6);
        break;
    }
  }
}

void MR_CALL 
mercury__bit_buffer__write__store_full_buffer_2_p_0(
  MR_Word TypeClassInfo_for_writer_26,
  MR_Box STATE_VARIABLE_Buffer_0_15,
  MR_Box * STATE_VARIABLE_Buffer_16)
{
  {
    MR_Integer Pos_4;
    MR_Integer Size_5;
    MR_Box OldBM_6;
    MR_Box State_7;
    MR_Integer NewSize_8;
    MR_Box NewBM0_9;
    MR_Integer NewPos_11;
    MR_Box NewBM_12;
    MR_Box FilledBM_13;
    MR_Word FilledBMs_14;
    MR_Integer Var_17;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Word Var_23;
    MR_Box Var_24;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_15 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Pos_4  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_15 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 Size_5  = Size;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_15 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 OldBM_6  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_15 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	 State_7  = (MR_Box) State;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_15 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 Var_17  = Size;
}
    NewSize_8 = (MR_Integer) ((MR_Unsigned) Var_17 * (MR_Unsigned) (MR_Integer) 2);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_20  = Bits;
}
    Var_19 = (MR_Integer) ((MR_Unsigned) NewSize_8 + (MR_Unsigned) Var_20);
    NewBM0_9 = mercury__bitmap__init_2_f_0(Var_19, (MR_Integer) 0);
    NewPos_11 = (MR_Integer) ((MR_Unsigned) Pos_4 - (MR_Unsigned) Size_5);
    Var_21 = mercury__bitmap__bits_3_f_0(Size_5, NewPos_11, OldBM_6);
    NewBM_12 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0((MR_Integer) 0, NewPos_11, NewBM0_9, Var_21);
    FilledBM_13 = mercury__bitmap__shrink_without_copying_2_f_0(OldBM_6, Size_5);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_15 ;
		{

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;


		;}
#undef MR_PROC_LABEL
	 Var_23  = FilledBMs;
}
    {
      FilledBMs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FilledBMs_14, 0) = ((MR_Box) (FilledBM_13));
      MR_hl_field(MR_mktag(1), FilledBMs_14, 1) = ((MR_Box) (Var_23));
    }
    Var_24 = State_7;
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) NewBM_12 ;
	Pos =  NewPos_11 ;
	Size =  NewSize_8 ;
	State = (MR_Word) Var_24 ;
	FilledBMs =  FilledBMs_14 ;
	Buffer0 = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_15 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Buffer_16  = (MR_Box) Buffer;
}
  }
}

void MR_CALL 
mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0(
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box STATE_VARIABLE_Buffer_0_13,
  MR_Box * STATE_VARIABLE_Buffer_14)
{
  {
    MR_bool succeeded;
    MR_Integer Pos_4;
    MR_Integer Size_5;
    MR_Integer NumBitsToWrite0_6;
    MR_Integer NumBytes_7;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Pos_4  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 Size_5  = Size;
}
    succeeded = (Size_5 < Pos_4);
    if (succeeded)
      NumBitsToWrite0_6 = Size_5;
    else
      NumBitsToWrite0_6 = Pos_4;
    NumBytes_7 = (NumBitsToWrite0_6 / (MR_Integer) 8);
    succeeded = (NumBytes_7 == (MR_Integer) 0);
    if (succeeded)
      *STATE_VARIABLE_Buffer_14 = STATE_VARIABLE_Buffer_0_13;
    else
    {
      MR_Integer NumBitsToWrite_8 = (MR_Integer) ((MR_Unsigned) NumBytes_7 * (MR_Unsigned) (MR_Integer) 8);
      MR_Box NewState_9;
      MR_Integer Remain_10;
      MR_Box NewBM_11;
      MR_Box Var_17;
      MR_Word Var_18;
      MR_Box Var_19;
      MR_Box Var_20;
      MR_Box Var_22;
      MR_Integer Var_25;
      MR_Word Var_26;
      MR_Integer V_8_62;
      MR_Integer V_10_63;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	 Var_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 Var_20  = (MR_Box) BM;
}
      V_8_62 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 * (MR_Unsigned) (MR_Integer) 8);
      V_10_63 = (MR_Integer) ((MR_Unsigned) NumBytes_7 * (MR_Unsigned) (MR_Integer) 8);
      Var_18 = mercury__bitmap__slice_3_f_0(Var_20, V_8_62, V_10_63);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	 Var_22  = (MR_Box) State;
}
      Var_19 = Var_22;
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_writer_28)), Var_17, ((MR_Box) (Var_18)), Var_19, &NewState_9);
      Remain_10 = (MR_Integer) ((MR_Unsigned) Pos_4 - (MR_Unsigned) NumBitsToWrite_8);
      succeeded = (Remain_10 == (MR_Integer) 0);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 NewBM_11  = (MR_Box) BM;
}
      }
      else
      {
        MR_Box NewBM0_12;
        MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 NewBM0_12  = (MR_Box) BM;
}
        Var_23 = mercury__bitmap__bits_3_f_0(NumBitsToWrite_8, Remain_10, NewBM0_12);
        NewBM_11 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0((MR_Integer) 0, Remain_10, NewBM0_12, Var_23);
      }
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 Var_25  = Size;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;


		;}
#undef MR_PROC_LABEL
	 Var_26  = FilledBMs;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) NewBM_11 ;
	Pos =  Remain_10 ;
	Size =  Var_25 ;
	State = (MR_Word) NewState_9 ;
	FilledBMs =  Var_26 ;
	Buffer0 = (ML_BitBufferPtr) STATE_VARIABLE_Buffer_0_13 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Buffer_14  = (MR_Box) Buffer;
}
    }
  }
}

MR_Integer MR_CALL 
mercury__bit_buffer__write__num_bits_to_byte_boundary_1_f_0(
  MR_Word TypeInfo_10_10,
  MR_Word TypeInfo_11_11,
  MR_Word Buffer_3)
{
  {
    MR_bool succeeded;
    MR_Integer NumBits_4;
    MR_Integer Pos_5;
    MR_Integer Rem_6;
    MR_Box Var_7 = (MR_Box) (Buffer_3);

{
#define MR_PROC_LABEL mercury__bit_buffer__write__num_bits_to_byte_boundary_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) Var_7 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Pos_5  = Pos;
}
    Rem_6 = (Pos_5 % (MR_Integer) 8);
    succeeded = (Rem_6 == (MR_Integer) 0);
    if (succeeded)
      NumBits_4 = (MR_Integer) 0;
    else
    {
      NumBits_4 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 8 - (MR_Unsigned) Rem_6);
    }
    return NumBits_4;
  }
}

MR_Integer MR_CALL 
mercury__bit_buffer__write__num_buffered_bits_1_f_0(
  MR_Word TypeInfo_17_17,
  MR_Word TypeInfo_18_18,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Box Buffer_3 = (MR_Box) (HeadVar__1_1);
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Word Var_13;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) Buffer_3 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 Var_6  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) Buffer_3 ;
		{

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;


		;}
#undef MR_PROC_LABEL
	 Var_13  = FilledBMs;
}
    mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0(Var_13, (MR_Integer) 0, &Var_7);
    HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_6 + (MR_Unsigned) Var_7);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_10_9 = ((MR_Box) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer V_15_13;
      MR_Integer Var_52;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) V_10_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_52  = NumBits;
}
      V_15_13 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_52);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bit_buffer__write__new_bitmap_builder_1_f_0(
  MR_Integer NumBytes_3)
{
  {
    MR_Word Buffer_4;
    MR_Integer Size_5 = (MR_Integer) ((MR_Unsigned) NumBytes_3 * (MR_Unsigned) (MR_Integer) 8);
    MR_Box BM_6;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Box Var_11;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__new_bitmap_builder_1_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_9  = Bits;
}
    Var_8 = (MR_Integer) ((MR_Unsigned) Size_5 + (MR_Unsigned) Var_9);
    BM_6 = mercury__bitmap__init_2_f_0(Var_8, (MR_Integer) 0);
    Var_11 = mercury__bit_buffer__new_buffer_6_f_0((MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0), (MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0), (MR_Word) (&mercury__bit_buffer__write_scalar_common_1[0]), BM_6, (MR_Integer) 0, Size_5, (MR_Integer) 0, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)));
    Buffer_4 = (MR_Word) (Var_11);
    return Buffer_4;
  }
}

MR_Word MR_CALL 
mercury__bit_buffer__write__new_3_f_0(
  MR_Word TypeClassInfo_for_writer_20,
  MR_Integer NumBytes_5,
  MR_Box Stream_6,
  MR_Box State_7)
{
  {
    MR_bool succeeded;
    MR_Word Buffer_8;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Integer SizeInBits_9 = (MR_Integer) ((MR_Unsigned) NumBytes_5 * (MR_Unsigned) (MR_Integer) 8);
    MR_Integer Size_10;
    MR_Box BM_11;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Integer Var_15;
    MR_Box Var_17;

{
#define MR_PROC_LABEL mercury__bit_buffer__write__new_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_13  = Bits;
}
    succeeded = (SizeInBits_9 > Var_13);
    if (succeeded)
      Size_10 = SizeInBits_9;
    else
      Size_10 = Var_13;
{
#define MR_PROC_LABEL mercury__bit_buffer__write__new_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_15  = Bits;
}
    Var_14 = (MR_Integer) ((MR_Unsigned) Size_10 + (MR_Unsigned) Var_15);
    BM_11 = mercury__bitmap__init_2_f_0(Var_14, (MR_Integer) 0);
{
#define MR_PROC_LABEL mercury__bit_buffer__write__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_20 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_22_22  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__write__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_20 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
    Var_17 = mercury__bit_buffer__new_buffer_6_f_0(TypeInfo_22_22, TypeInfo_24_24, (MR_Word) (&mercury__bit_buffer__write_scalar_common_1[0]), BM_11, (MR_Integer) 0, Size_10, (MR_Integer) 1, Stream_6, State_7);
    Buffer_8 = (MR_Word) (Var_17);
    return Buffer_8;
  }
}

static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____io_write_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bit_buffer__write____Unify____io_write_buffer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bit_buffer__write____Compare____io_write_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bit_buffer__write____Compare____io_write_buffer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bit_buffer__write____Unify____write_buffer_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bit_buffer__write____Compare____write_buffer_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bit_buffer__write____Unify____write_buffer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bit_buffer__write____Compare____write_buffer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__bit_buffer__write__init(void)
{
}

void mercury__bit_buffer__write__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_io_write_buffer_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2);
	MR_register_type_ctor_info(&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_0);
}

void mercury__bit_buffer__write__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bit_buffer__write__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bit_buffer.write.
