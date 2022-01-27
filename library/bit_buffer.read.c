/*
** Automatically generated from `bit_buffer.read.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module bit_buffer.read. */
/* :- implementation. */

/*
INIT mercury__bit_buffer__read__init
ENDINIT
*/

#include "bit_buffer.read.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0;

static const MR_Integer mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3[1];

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3;

static const MR_NotagFunctorDesc mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3;

static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0;

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001(
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
  MR_Box mercury__bit_buffer__read__wrapper_arg_4,
  MR_Box mercury__bit_buffer__read__wrapper_arg_5);

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
  MR_Box * mercury__bit_buffer__read__wrapper_arg_4,
  MR_Box mercury__bit_buffer__read__wrapper_arg_5,
  MR_Box mercury__bit_buffer__read__wrapper_arg_6);

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0_10001(
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__bit_buffer__read__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_50,
  MR_Word * mercury__bit_buffer__read__Result_4,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20);

static void MR_CALL 
mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_27,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_29,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_30,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_31,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_32,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33,
  MR_Word * mercury__bit_buffer__read__Result_16,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_35);

static void MR_CALL 
mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0(
  MR_Word mercury__bit_buffer__read__TypeInfo_for_S_38,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_St_39,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_E_40,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_21,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_23,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29);

static void MR_CALL 
mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
  MR_Word * mercury__bit_buffer__read__Result_14,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29);

static void MR_CALL 
mercury__bit_buffer__read__do_get_bits_7_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46,
  MR_Integer mercury__bit_buffer__read__Index_8,
  MR_Integer mercury__bit_buffer__read__NumBits_9,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_0_22,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Word_23,
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_11,
  MR_Word mercury__bit_buffer__read__RB_6,
  MR_Word * mercury__bit_buffer__read__HeadVar__7_7);


static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_1[3][4];

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_1[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_1[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_1[2])),
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
#include "version_array.mh"



static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0 = {
  &mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3,
  {
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_binary_input_stream_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_error_0
  }
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_io_read_buffer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "io_read_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

static const MR_NotagFunctorDesc mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 = {
  (MR_String) "read_buffer",
  (MR_PseudoTypeInfo) &mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3,
  (MR_String) "bit_buffer",
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3 = {
  (MR_Integer) 3,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bit_buffer__read____Unify____read_buffer_3_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____read_buffer_3_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "read_buffer",
  {     &mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 },
  {     &mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3
};

static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0 = {
  &mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3,
  {
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0,
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0,
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0
  }
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__read____Unify____read_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____read_buffer_0_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "read_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;

    {
      mercury__bit_buffer__read__succeeded = mercury__bit_buffer__read____Unify____io_read_buffer_0_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2));
    }
    return mercury__bit_buffer__read__succeeded;
  }
}

static void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001(
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3)
{
  {
    MR_Word mercury__bit_buffer__read__conv0_HeadVar__1_1;

    {
      mercury__bit_buffer__read____Compare____io_read_buffer_0_0(&mercury__bit_buffer__read__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3));
    }
    *mercury__bit_buffer__read__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__read__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
  MR_Box mercury__bit_buffer__read__wrapper_arg_4,
  MR_Box mercury__bit_buffer__read__wrapper_arg_5)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;

    {
      mercury__bit_buffer__read__succeeded = mercury__bit_buffer__read____Unify____read_buffer_3_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_4), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_5));
    }
    return mercury__bit_buffer__read__succeeded;
  }
}

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
  MR_Box * mercury__bit_buffer__read__wrapper_arg_4,
  MR_Box mercury__bit_buffer__read__wrapper_arg_5,
  MR_Box mercury__bit_buffer__read__wrapper_arg_6)
{
  {
    MR_Word mercury__bit_buffer__read__conv0_HeadVar__1_1;

    {
      mercury__bit_buffer__read____Compare____read_buffer_3_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3), &mercury__bit_buffer__read__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__read__wrapper_arg_5), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_6));
    }
    *mercury__bit_buffer__read__wrapper_arg_4 = ((MR_Box) (mercury__bit_buffer__read__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0_10001(
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;

    {
      mercury__bit_buffer__read__succeeded = mercury__bit_buffer__read____Unify____read_buffer_0_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2));
    }
    return mercury__bit_buffer__read__succeeded;
  }
}

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0_10001(
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
  MR_Box mercury__bit_buffer__read__wrapper_arg_3)
{
  {
    MR_Word mercury__bit_buffer__read__conv0_HeadVar__1_1;

    {
      mercury__bit_buffer__read____Compare____read_buffer_0_0(&mercury__bit_buffer__read__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3));
    }
    *mercury__bit_buffer__read__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__read__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__bit_buffer__read__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0(
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Stream_8,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_State_9,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Error_10,
  MR_Word * mercury__bit_buffer__read__HeadVar__1_1,
  MR_Word mercury__bit_buffer__read__HeadVar__2_2,
  MR_Word mercury__bit_buffer__read__HeadVar__3_3)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__CastX_6 = (MR_Integer) mercury__bit_buffer__read__HeadVar__2_2;
    MR_Integer mercury__bit_buffer__read__CastY_7 = (MR_Integer) mercury__bit_buffer__read__HeadVar__3_3;

    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_6 == mercury__bit_buffer__read__CastY_7);
    if (mercury__bit_buffer__read__succeeded)
      *mercury__bit_buffer__read__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__bit_buffer__read__V_4_4 = (MR_Box) mercury__bit_buffer__read__HeadVar__2_2;
        MR_Box mercury__bit_buffer__read__V_5_5 = (MR_Box) mercury__bit_buffer__read__HeadVar__3_3;

        {
          mercury__bit_buffer____Compare____bit_buffer_3_0(mercury__bit_buffer__read__TypeInfo_for_Stream_8, mercury__bit_buffer__read__TypeInfo_for_State_9, mercury__bit_buffer__read__TypeInfo_for_Error_10, mercury__bit_buffer__read__HeadVar__1_1, mercury__bit_buffer__read__V_4_4, mercury__bit_buffer__read__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0(
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Stream_7,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_State_8,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Error_9,
  MR_Word mercury__bit_buffer__read__HeadVar__1_1,
  MR_Word mercury__bit_buffer__read__HeadVar__2_2)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__CastX_5 = (MR_Integer) mercury__bit_buffer__read__HeadVar__1_1;
    MR_Integer mercury__bit_buffer__read__CastY_6 = (MR_Integer) mercury__bit_buffer__read__HeadVar__2_2;

    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_5 == mercury__bit_buffer__read__CastY_6);
    if (mercury__bit_buffer__read__succeeded)
      mercury__bit_buffer__read__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__bit_buffer__read__V_3_3 = (MR_Box) mercury__bit_buffer__read__HeadVar__1_1;
        MR_Box mercury__bit_buffer__read__V_4_4 = (MR_Box) mercury__bit_buffer__read__HeadVar__2_2;

        {
          mercury__bit_buffer__read__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(mercury__bit_buffer__read__TypeInfo_for_Stream_7, mercury__bit_buffer__read__TypeInfo_for_State_8, mercury__bit_buffer__read__TypeInfo_for_Error_9, mercury__bit_buffer__read__V_3_3, mercury__bit_buffer__read__V_4_4);
        }
      }
    return mercury__bit_buffer__read__succeeded;
  }
}

void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0(
  MR_Word * mercury__bit_buffer__read__HeadVar__1_1,
  MR_Word mercury__bit_buffer__read__HeadVar__2_2,
  MR_Word mercury__bit_buffer__read__HeadVar__3_3)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__TypeInfo_6_6 = (MR_Word) &mercury__bit_buffer__read_scalar_common_1[1];
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_4 = mercury__bit_buffer__read__HeadVar__2_2;
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_5 = mercury__bit_buffer__read__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__bit_buffer__read__TypeInfo_6_6, mercury__bit_buffer__read__HeadVar__1_1, ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar1_4)), ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0(
  MR_Word mercury__bit_buffer__read__HeadVar__1_1,
  MR_Word mercury__bit_buffer__read__HeadVar__2_2)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_5_5 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_6_6 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_7_7 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0;
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_3 = mercury__bit_buffer__read__HeadVar__1_1;
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_4 = mercury__bit_buffer__read__HeadVar__2_2;
    MR_Integer mercury__bit_buffer__read__CastX_10 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar1_3;
    MR_Integer mercury__bit_buffer__read__CastY_11 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar2_4;

    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_10 == mercury__bit_buffer__read__CastY_11);
    if (mercury__bit_buffer__read__succeeded)
      mercury__bit_buffer__read__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__bit_buffer__read__V_8_8 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar1_3;
        MR_Box mercury__bit_buffer__read__V_9_9 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar2_4;

        {
          mercury__bit_buffer__read__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(mercury__bit_buffer__read__TypeCtorInfo_5_5, mercury__bit_buffer__read__TypeCtorInfo_6_6, mercury__bit_buffer__read__TypeCtorInfo_7_7, mercury__bit_buffer__read__V_8_8, mercury__bit_buffer__read__V_9_9);
        }
      }
    return mercury__bit_buffer__read__succeeded;
  }
}

void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0(
  MR_Word * mercury__bit_buffer__read__HeadVar__1_1,
  MR_Word mercury__bit_buffer__read__HeadVar__2_2,
  MR_Word mercury__bit_buffer__read__HeadVar__3_3)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__TypeInfo_6_6 = (MR_Word) &mercury__bit_buffer__read_scalar_common_1[0];
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_4 = mercury__bit_buffer__read__HeadVar__2_2;
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_5 = mercury__bit_buffer__read__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__bit_buffer__read__TypeInfo_6_6, mercury__bit_buffer__read__HeadVar__1_1, ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar1_4)), ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0(
  MR_Word mercury__bit_buffer__read__HeadVar__1_1,
  MR_Word mercury__bit_buffer__read__HeadVar__2_2)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_5_5 = (MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_6_6 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_7_7 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_3 = mercury__bit_buffer__read__HeadVar__1_1;
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_4 = mercury__bit_buffer__read__HeadVar__2_2;
    MR_Integer mercury__bit_buffer__read__CastX_10 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar1_3;
    MR_Integer mercury__bit_buffer__read__CastY_11 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar2_4;

    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_10 == mercury__bit_buffer__read__CastY_11);
    if (mercury__bit_buffer__read__succeeded)
      mercury__bit_buffer__read__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__bit_buffer__read__V_8_8 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar1_3;
        MR_Box mercury__bit_buffer__read__V_9_9 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar2_4;

        {
          mercury__bit_buffer__read__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(mercury__bit_buffer__read__TypeCtorInfo_5_5, mercury__bit_buffer__read__TypeCtorInfo_6_6, mercury__bit_buffer__read__TypeCtorInfo_7_7, mercury__bit_buffer__read__V_8_8, mercury__bit_buffer__read__V_9_9);
        }
      }
    return mercury__bit_buffer__read__succeeded;
  }
}

static void MR_CALL 
mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_50,
  MR_Word * mercury__bit_buffer__read__Result_4,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__UseStream_6;
    MR_Word mercury__bit_buffer__read__TypeInfo_52_94;
    MR_Word mercury__bit_buffer__read__TypeInfo_54_95;
    MR_Word mercury__bit_buffer__read__TypeInfo_56_96;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{

    UseStream = Buffer->ML_bit_buffer_use_stream;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__UseStream_6  = UseStream;
}
    switch (mercury__bit_buffer__read__UseStream_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__bit_buffer__read__Remain_11;
          MR_Integer mercury__bit_buffer__read__OldPos_12;
          MR_Integer mercury__bit_buffer__read__ChunkSize_13;
          MR_Integer mercury__bit_buffer__read__StartByteIndex_14;
          MR_Integer mercury__bit_buffer__read__NumBytesToRead_15;
          MR_Box mercury__bit_buffer__read__Stream_16;
          MR_Integer mercury__bit_buffer__read__NumBytesRead_17;
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_26_26;
          MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Size_28_28;
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_State_29_29;
          MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Pos_30_30;
          MR_Integer mercury__bit_buffer__read__V_31_31;
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_33_33;
          MR_Integer mercury__bit_buffer__read__V_35_35;
          MR_Integer mercury__bit_buffer__read__V_36_36;
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_State_40_40;
          MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Size_41_41;
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46;
          MR_Word mercury__bit_buffer__read__V_47_47;
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_48_48;
          MR_Word mercury__bit_buffer__read__TypeInfo_57_57;
          MR_Word mercury__bit_buffer__read__TypeInfo_58_58;
          MR_Word mercury__bit_buffer__read__TypeInfo_59_59;
          MR_Integer mercury__bit_buffer__read__V_21_21;
          MR_Integer mercury__bit_buffer__read__V_22_22;
          MR_Word mercury__bit_buffer__read__V_23_23 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19;
          MR_Word mercury__bit_buffer__read__TypeInfo_60_97;
          MR_Word mercury__bit_buffer__read__TypeInfo_61_98;
          MR_Word mercury__bit_buffer__read__TypeInfo_62_99;
          MR_Word mercury__bit_buffer__read__TypeInfo_63_100;
          MR_Word mercury__bit_buffer__read__TypeInfo_64_101;
          MR_Word mercury__bit_buffer__read__TypeInfo_65_102;
          MR_Word mercury__bit_buffer__read__TypeInfo_66_103;
          MR_Word mercury__bit_buffer__read__TypeInfo_67_104;
          MR_Word mercury__bit_buffer__read__TypeInfo_68_105;
          MR_Word mercury__bit_buffer__read__TypeInfo_69_106;
          MR_Word mercury__bit_buffer__read__TypeInfo_70_107;
          MR_Word mercury__bit_buffer__read__TypeInfo_71_108;
          MR_Word mercury__bit_buffer__read__TypeInfo_72_109;
          MR_Word mercury__bit_buffer__read__TypeInfo_73_110;
          MR_Word mercury__bit_buffer__read__TypeInfo_74_111;
          void MR_CALL (* mercury__bit_buffer__read__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_39_39;
          MR_Box mercury__bit_buffer__read__conv2_NumBytesRead_17;
          MR_Box mercury__bit_buffer__read__conv1_Result_4;
          MR_Word mercury__bit_buffer__read__TypeInfo_78_115;
          MR_Word mercury__bit_buffer__read__TypeInfo_79_116;
          MR_Word mercury__bit_buffer__read__TypeInfo_80_117;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_50 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_57_57  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_50 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_58_58  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_50 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_59_59  = TypeInfo;
}
          {
            mercury__bit_buffer__read__V_21_21 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_57_57, mercury__bit_buffer__read__TypeInfo_58_58, mercury__bit_buffer__read__TypeInfo_59_59, mercury__bit_buffer__read__V_23_23);
          }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_22_22  = Bits;
}
          mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_21_21 <= mercury__bit_buffer__read__V_22_22);
          if (mercury__bit_buffer__read__succeeded)
            {
            }
          else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140bit_buffer.read.do_refill_read_buffer\'/3", (MR_String) "too many bits in buffer");
                return;
              }
            }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_BM_26_26  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__OldPos_12  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Size_28_28  = Size;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_State_29_29  = (MR_Box) State;
}
          mercury__bit_buffer__read__Remain_11 = (mercury__bit_buffer__read__STATE_VARIABLE_Size_28_28 - mercury__bit_buffer__read__OldPos_12);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_31_31  = Bits;
}
          mercury__bit_buffer__read__STATE_VARIABLE_Pos_30_30 = (mercury__bit_buffer__read__V_31_31 - mercury__bit_buffer__read__Remain_11);
          mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Remain_11 > (MR_Integer) 0);
          if (mercury__bit_buffer__read__succeeded)
            {
              MR_Integer mercury__bit_buffer__read__V_34_34;

              {
                mercury__bit_buffer__read__V_34_34 = mercury__bitmap__bits_3_f_0(mercury__bit_buffer__read__OldPos_12, mercury__bit_buffer__read__Remain_11, mercury__bit_buffer__read__STATE_VARIABLE_BM_26_26);
              }
              {
                mercury__bit_buffer__read__STATE_VARIABLE_BM_33_33 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(mercury__bit_buffer__read__STATE_VARIABLE_Pos_30_30, mercury__bit_buffer__read__Remain_11, mercury__bit_buffer__read__STATE_VARIABLE_BM_26_26, mercury__bit_buffer__read__V_34_34);
              }
            }
          else
            mercury__bit_buffer__read__STATE_VARIABLE_BM_33_33 = mercury__bit_buffer__read__STATE_VARIABLE_BM_26_26;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_35_35  = Bits;
}
          mercury__bit_buffer__read__ChunkSize_13 = (mercury__bit_buffer__read__STATE_VARIABLE_Size_28_28 - mercury__bit_buffer__read__V_35_35);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_36_36  = Bits;
}
          mercury__bit_buffer__read__StartByteIndex_14 = (mercury__bit_buffer__read__V_36_36 / (MR_Integer) 8);
          mercury__bit_buffer__read__NumBytesToRead_15 = (mercury__bit_buffer__read__ChunkSize_13 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Stream_16  = (MR_Box) Stream;
}
          mercury__bit_buffer__read__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_50, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__bit_buffer__read__func_0(((MR_Box) mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_50), mercury__bit_buffer__read__Stream_16, ((MR_Box) (mercury__bit_buffer__read__StartByteIndex_14)), ((MR_Box) (mercury__bit_buffer__read__NumBytesToRead_15)), ((MR_Box) (mercury__bit_buffer__read__STATE_VARIABLE_BM_33_33)), &mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_39_39, &mercury__bit_buffer__read__conv2_NumBytesRead_17, &mercury__bit_buffer__read__conv1_Result_4, mercury__bit_buffer__read__STATE_VARIABLE_State_29_29, &mercury__bit_buffer__read__STATE_VARIABLE_State_40_40);
          }
          mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39 = ((MR_Box) mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_39_39);
          mercury__bit_buffer__read__NumBytesRead_17 = ((MR_Integer) mercury__bit_buffer__read__conv2_NumBytesRead_17);
          *mercury__bit_buffer__read__Result_4 = ((MR_Word) mercury__bit_buffer__read__conv1_Result_4);
          mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBytesRead_17 == mercury__bit_buffer__read__NumBytesToRead_15);
          if (mercury__bit_buffer__read__succeeded)
            {
              mercury__bit_buffer__read__STATE_VARIABLE_Size_41_41 = mercury__bit_buffer__read__STATE_VARIABLE_Size_28_28;
              mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19;
            }
          else
            {
              MR_Integer mercury__bit_buffer__read__V_42_42 = (mercury__bit_buffer__read__NumBytesRead_17 * (MR_Integer) 8);
              MR_Integer mercury__bit_buffer__read__V_44_44;
              MR_Word mercury__bit_buffer__read__TypeInfo_75_112;
              MR_Word mercury__bit_buffer__read__TypeInfo_76_113;
              MR_Word mercury__bit_buffer__read__TypeInfo_77_114;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_44_44  = Bits;
}
              mercury__bit_buffer__read__STATE_VARIABLE_Size_41_41 = (mercury__bit_buffer__read__V_42_42 + mercury__bit_buffer__read__V_44_44);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word UseStream;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	UseStream =  (MR_Integer) 0 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_use_stream = UseStream;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46  = (MR_Box) Buffer;
}
            }
          mercury__bit_buffer__read__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39 ;
	Pos =  mercury__bit_buffer__read__STATE_VARIABLE_Pos_30_30 ;
	Size =  mercury__bit_buffer__read__STATE_VARIABLE_Size_41_41 ;
	State = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_State_40_40 ;
	FilledBMs =  mercury__bit_buffer__read__V_47_47 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_48_48  = (MR_Box) Buffer;
}
          if ((*mercury__bit_buffer__read__Result_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_48_48;
          else
            {
              MR_Word mercury__bit_buffer__read__TypeInfo_81_118;
              MR_Word mercury__bit_buffer__read__TypeInfo_82_119;
              MR_Word mercury__bit_buffer__read__TypeInfo_83_120;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus =  *mercury__bit_buffer__read__Result_4 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_48_48 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;


		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20  = (MR_Box) Buffer;
}
            }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_27,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_29,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_30,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_31,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_32,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33,
  MR_Word * mercury__bit_buffer__read__Result_16,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_35)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__StartByteIndex_18 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26 / (MR_Integer) 8);
    MR_Integer mercury__bit_buffer__read__NumBytesToBulkGet_19 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28 / (MR_Integer) 8);
    MR_Box mercury__bit_buffer__read__Stream_20;
    MR_Box mercury__bit_buffer__read__State0_21;
    MR_Integer mercury__bit_buffer__read__NumBytesRead_22;
    MR_Box mercury__bit_buffer__read__State_23;
    MR_Integer mercury__bit_buffer__read__NumBitsBulkRead_25;
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39;
    MR_Word mercury__bit_buffer__read__TypeInfo_47_66;
    MR_Word mercury__bit_buffer__read__TypeInfo_49_67;
    MR_Word mercury__bit_buffer__read__TypeInfo_51_68;
    MR_Word mercury__bit_buffer__read__TypeInfo_52_69;
    MR_Word mercury__bit_buffer__read__TypeInfo_53_70;
    MR_Word mercury__bit_buffer__read__TypeInfo_54_71;
    void MR_CALL (* mercury__bit_buffer__read__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_31;
    MR_Box mercury__bit_buffer__read__conv2_NumBytesRead_22;
    MR_Box mercury__bit_buffer__read__conv1_Result_16;
    MR_Word mercury__bit_buffer__read__TypeInfo_58_75;
    MR_Word mercury__bit_buffer__read__TypeInfo_59_76;
    MR_Word mercury__bit_buffer__read__TypeInfo_60_77;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Stream_20  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__State0_21  = (MR_Box) State;
}
    mercury__bit_buffer__read__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__bit_buffer__read__func_0(((MR_Box) mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45), mercury__bit_buffer__read__Stream_20, ((MR_Box) (mercury__bit_buffer__read__StartByteIndex_18)), ((MR_Box) (mercury__bit_buffer__read__NumBytesToBulkGet_19)), ((MR_Box) (mercury__bit_buffer__read__STATE_VARIABLE_BM_0_30)), &mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_31, &mercury__bit_buffer__read__conv2_NumBytesRead_22, &mercury__bit_buffer__read__conv1_Result_16, mercury__bit_buffer__read__State0_21, &mercury__bit_buffer__read__State_23);
    }
    *mercury__bit_buffer__read__STATE_VARIABLE_BM_31 = ((MR_Box) mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_31);
    mercury__bit_buffer__read__NumBytesRead_22 = ((MR_Integer) mercury__bit_buffer__read__conv2_NumBytesRead_22);
    *mercury__bit_buffer__read__Result_16 = ((MR_Word) mercury__bit_buffer__read__conv1_Result_16);
    if ((*mercury__bit_buffer__read__Result_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34;
    else
      {
        MR_Word mercury__bit_buffer__read__TypeInfo_55_72;
        MR_Word mercury__bit_buffer__read__TypeInfo_56_73;
        MR_Word mercury__bit_buffer__read__TypeInfo_57_74;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus =  *mercury__bit_buffer__read__Result_16 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39  = (MR_Box) Buffer;
}
      }
    mercury__bit_buffer__read__NumBitsBulkRead_25 = (mercury__bit_buffer__read__NumBytesRead_22 * (MR_Integer) 8);
    *mercury__bit_buffer__read__STATE_VARIABLE_Index_27 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26 + mercury__bit_buffer__read__NumBitsBulkRead_25);
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_32 + mercury__bit_buffer__read__NumBitsBulkRead_25);
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBits_29 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28 - mercury__bit_buffer__read__NumBitsBulkRead_25);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	MR_Word State;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	State = (MR_Word) mercury__bit_buffer__read__State_23 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_state = State;


		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_35  = (MR_Box) Buffer;
}
  }
}

static void MR_CALL 
mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0(
  MR_Word mercury__bit_buffer__read__TypeInfo_for_S_38,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_St_39,
  MR_Word mercury__bit_buffer__read__TypeInfo_for_E_40,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_21,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_23,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__NumBufferedBits_16;
    MR_Integer mercury__bit_buffer__read__NumBitsToGet_17;
    MR_Integer mercury__bit_buffer__read__Pos0_18;
    MR_Integer mercury__bit_buffer__read__Pos_19;
    MR_Word mercury__bit_buffer__read__V_30_30 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28;
    MR_Box mercury__bit_buffer__read__V_32_32;
    MR_Box mercury__bit_buffer__read__V_33_33;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_54;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_55;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_56;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_57;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_58;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_59;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_60;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_61;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_62;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_63;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_64;
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_65;

    {
      mercury__bit_buffer__read__NumBufferedBits_16 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_for_S_38, mercury__bit_buffer__read__TypeInfo_for_St_39, mercury__bit_buffer__read__TypeInfo_for_E_40, mercury__bit_buffer__read__V_30_30);
    }
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22 < mercury__bit_buffer__read__NumBufferedBits_16);
    if (mercury__bit_buffer__read__succeeded)
      mercury__bit_buffer__read__NumBitsToGet_17 = mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22;
    else
      mercury__bit_buffer__read__NumBitsToGet_17 = mercury__bit_buffer__read__NumBufferedBits_16;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos0_18  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_32_32  = (MR_Box) BM;
}
    {
      *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bit_buffer__read__V_32_32, mercury__bit_buffer__read__Pos0_18, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24, mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20, mercury__bit_buffer__read__NumBitsToGet_17);
    }
    mercury__bit_buffer__read__Pos_19 = (mercury__bit_buffer__read__Pos0_18 + mercury__bit_buffer__read__NumBitsToGet_17);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_33_33  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__V_33_33 ;
	Pos =  mercury__bit_buffer__read__Pos_19 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29  = (MR_Box) Buffer;
}
    *mercury__bit_buffer__read__STATE_VARIABLE_Index_21 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20 + mercury__bit_buffer__read__NumBitsToGet_17);
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBits_23 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22 - mercury__bit_buffer__read__NumBitsToGet_17);
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26 + mercury__bit_buffer__read__NumBitsToGet_17);
  }
}

static void MR_CALL 
mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
  MR_Word * mercury__bit_buffer__read__Result_14,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23 == (MR_Integer) 0);

        if (mercury__bit_buffer__read__succeeded)
          {
            *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28;
            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26;
            *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24;
          }
        else
          {
            MR_Word mercury__bit_buffer__read__TypeInfo_80_80;
            MR_Word mercury__bit_buffer__read__TypeInfo_82_82;
            MR_Word mercury__bit_buffer__read__TypeInfo_84_84;
            MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30;
            MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31;
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
            MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_80_80  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_82_82  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_84_84  = TypeInfo;
}
            {
              mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0(mercury__bit_buffer__read__TypeInfo_80_80, mercury__bit_buffer__read__TypeInfo_82_82, mercury__bit_buffer__read__TypeInfo_84_84, mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22, &mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23, &mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24, &mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32, mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26, &mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34);
            }
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31 == (MR_Integer) 0);
            if (mercury__bit_buffer__read__succeeded)
              {
                *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34;
                *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
                *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
              }
            else
              {
                MR_Integer mercury__bit_buffer__read__V_35_35 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30 % (MR_Integer) 8);

                mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_35_35 == (MR_Integer) 0);
                if (mercury__bit_buffer__read__succeeded)
                  {
                    MR_Word mercury__bit_buffer__read__BulkGetResult_16;
                    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
                    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40;
                    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
                    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_37_63;
                    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64;

                    {
                      mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78, mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30, &mercury__bit_buffer__read__STATE_VARIABLE_Index_37_63, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31, &mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64, mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32, &mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39, mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33, &mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40, &mercury__bit_buffer__read__BulkGetResult_16, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41);
                    }
                    if ((mercury__bit_buffer__read__BulkGetResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64 > (MR_Integer) 0);
                        if (mercury__bit_buffer__read__succeeded)
                          {
                            MR_Integer mercury__bit_buffer__read__LastBits_17;
                            MR_Integer mercury__bit_buffer__read__NumLastBitsRead_18;
                            MR_Word mercury__bit_buffer__read__LastBitsResult_19;
                            MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_43_43 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
                            MR_Integer mercury__bit_buffer__read__V_44_44;
                            MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46;
                            MR_Integer mercury__bit_buffer__read__V_47_47;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_47_47  = Bits;
}
                            mercury__bit_buffer__read__V_44_44 = (mercury__bit_buffer__read__V_47_47 - mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64);
                            {
                              mercury__bit_buffer__read__get_bits_8_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78, mercury__bit_buffer__read__V_44_44, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64, (MR_Integer) 0, &mercury__bit_buffer__read__LastBits_17, &mercury__bit_buffer__read__NumLastBitsRead_18, &mercury__bit_buffer__read__LastBitsResult_19, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_43_43, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46);
                            }
                            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46;
                            if ((mercury__bit_buffer__read__LastBitsResult_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              {
                                {
                                  *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(mercury__bit_buffer__read__STATE_VARIABLE_Index_37_63, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64, mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39, mercury__bit_buffer__read__LastBits_17);
                                }
                                *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              }
                            else
                              {
                                *mercury__bit_buffer__read__Result_14 = mercury__bit_buffer__read__LastBitsResult_19;
                                *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
                              }
                            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40 + mercury__bit_buffer__read__NumLastBitsRead_18);
                          }
                        else
                          {
                            *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
                            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40;
                            *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
                          }
                      }
                    else
                      {
                        *mercury__bit_buffer__read__Result_14 = mercury__bit_buffer__read__BulkGetResult_16;
                        *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
                        *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40;
                        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
                      }
                  }
                else
                  {
                    MR_Word mercury__bit_buffer__read__RefillRes_21;
                    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;

                    {
                      mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78, &mercury__bit_buffer__read__RefillRes_21, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51);
                    }
                    if ((mercury__bit_buffer__read__RefillRes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word mercury__bit_buffer__read__TypeInfo_85_85;
                        MR_Word mercury__bit_buffer__read__TypeInfo_86_86;
                        MR_Word mercury__bit_buffer__read__TypeInfo_87_87;
                        MR_Integer mercury__bit_buffer__read__V_52_52;
                        MR_Word mercury__bit_buffer__read__V_54_54 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_85_85  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_86_86  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_87_87  = TypeInfo;
}
                        {
                          mercury__bit_buffer__read__V_52_52 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_85_85, mercury__bit_buffer__read__TypeInfo_86_86, mercury__bit_buffer__read__TypeInfo_87_87, mercury__bit_buffer__read__V_54_54);
                        }
                        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_52_52 > (MR_Integer) 0);
                        if (mercury__bit_buffer__read__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0__tmp_copy_22 = mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30;
                              MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0__tmp_copy_23 = mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31;
                              MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0__tmp_copy_24 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
                              MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0__tmp_copy_26 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
                              MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0__tmp_copy_28 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;

                              mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0__tmp_copy_28;
                              mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0__tmp_copy_26;
                              mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0__tmp_copy_24;
                              mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23 = mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0__tmp_copy_23;
                              mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22 = mercury__bit_buffer__read__STATE_VARIABLE_Index_0__tmp_copy_22;
                            }
                            continue;
                          }
                        else
                          {
                            *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;
                            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
                            *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
                          }
                      }
                    else
                      {
                        *mercury__bit_buffer__read__Result_14 = mercury__bit_buffer__read__RefillRes_21;
                        *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
                        *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
                        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;
                      }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__bit_buffer__read__do_get_bits_7_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46,
  MR_Integer mercury__bit_buffer__read__Index_8,
  MR_Integer mercury__bit_buffer__read__NumBits_9,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_0_22,
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Word_23,
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_11,
  MR_Word mercury__bit_buffer__read__RB_6,
  MR_Word * mercury__bit_buffer__read__HeadVar__7_7)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__TypeInfo_48_48;
    MR_Word mercury__bit_buffer__read__TypeInfo_50_50;
    MR_Word mercury__bit_buffer__read__TypeInfo_52_52;
    MR_Integer mercury__bit_buffer__read__NumBitsAvailable_14;
    MR_Integer mercury__bit_buffer__read__Pos_15;
    MR_Integer mercury__bit_buffer__read__Bits0_16;
    MR_Integer mercury__bit_buffer__read__Bits_17;
    MR_Integer mercury__bit_buffer__read__LastBit_18;
    MR_Integer mercury__bit_buffer__read__Shift_19;
    MR_Integer mercury__bit_buffer__read__BitMask_20;
    MR_Integer mercury__bit_buffer__read__BitsMask_21;
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 = (MR_Box) mercury__bit_buffer__read__RB_6;
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_25;
    MR_Box mercury__bit_buffer__read__V_26_26;
    MR_Integer mercury__bit_buffer__read__V_27_27;
    MR_Integer mercury__bit_buffer__read__V_28_28;
    MR_Integer mercury__bit_buffer__read__V_30_30;
    MR_Integer mercury__bit_buffer__read__V_31_31;
    MR_Integer mercury__bit_buffer__read__V_34_34;
    MR_Integer mercury__bit_buffer__read__V_36_36;
    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_38_38;
    MR_Integer mercury__bit_buffer__read__V_39_39;
    MR_Integer mercury__bit_buffer__read__V_40_40;
    MR_Integer mercury__bit_buffer__read__V_42_42;
    MR_Box mercury__bit_buffer__read__V_43_43;
    MR_Integer mercury__bit_buffer__read__V_44_44;
    MR_Word mercury__bit_buffer__read__TypeInfo_53_72;
    MR_Word mercury__bit_buffer__read__TypeInfo_54_73;
    MR_Word mercury__bit_buffer__read__TypeInfo_55_74;
    MR_Word mercury__bit_buffer__read__TypeInfo_56_75;
    MR_Word mercury__bit_buffer__read__TypeInfo_57_76;
    MR_Word mercury__bit_buffer__read__TypeInfo_58_77;
    MR_Word mercury__bit_buffer__read__TypeInfo_59_78;
    MR_Word mercury__bit_buffer__read__TypeInfo_60_79;
    MR_Word mercury__bit_buffer__read__TypeInfo_61_80;
    MR_Word mercury__bit_buffer__read__TypeInfo_62_81;
    MR_Word mercury__bit_buffer__read__TypeInfo_63_82;
    MR_Word mercury__bit_buffer__read__TypeInfo_64_83;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_48_48  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_50_50  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_52_52  = TypeInfo;
}
    {
      mercury__bit_buffer__read__NumBitsAvailable_14 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_48_48, mercury__bit_buffer__read__TypeInfo_50_50, mercury__bit_buffer__read__TypeInfo_52_52, mercury__bit_buffer__read__RB_6);
    }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos_15  = Pos;
}
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBitsAvailable_14 < mercury__bit_buffer__read__NumBits_9);
    if (mercury__bit_buffer__read__succeeded)
      *mercury__bit_buffer__read__NumBitsRead_11 = mercury__bit_buffer__read__NumBitsAvailable_14;
    else
      *mercury__bit_buffer__read__NumBitsRead_11 = mercury__bit_buffer__read__NumBits_9;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_26_26  = (MR_Box) BM;
}
    {
      mercury__bit_buffer__read__Bits0_16 = mercury__bitmap__bits_3_f_0(mercury__bit_buffer__read__Pos_15, *mercury__bit_buffer__read__NumBitsRead_11, mercury__bit_buffer__read__V_26_26);
    }
    mercury__bit_buffer__read__V_27_27 = (mercury__bit_buffer__read__NumBits_9 - *mercury__bit_buffer__read__NumBitsRead_11);
    mercury__bit_buffer__read__Bits_17 = (mercury__bit_buffer__read__Bits0_16 << mercury__bit_buffer__read__V_27_27);
    mercury__bit_buffer__read__V_28_28 = (mercury__bit_buffer__read__Index_8 + *mercury__bit_buffer__read__NumBitsRead_11);
    mercury__bit_buffer__read__LastBit_18 = (mercury__bit_buffer__read__V_28_28 - (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_31_31  = Bits;
}
    mercury__bit_buffer__read__V_30_30 = (mercury__bit_buffer__read__V_31_31 - (MR_Integer) 1);
    mercury__bit_buffer__read__Shift_19 = (mercury__bit_buffer__read__V_30_30 - mercury__bit_buffer__read__LastBit_18);
    mercury__bit_buffer__read__V_34_34 = (mercury__bit_buffer__read__NumBits_9 - (MR_Integer) 1);
    mercury__bit_buffer__read__BitMask_20 = ((MR_Integer) 1 << mercury__bit_buffer__read__V_34_34);
    mercury__bit_buffer__read__V_36_36 = (mercury__bit_buffer__read__BitMask_20 - (MR_Integer) 1);
    mercury__bit_buffer__read__BitsMask_21 = (mercury__bit_buffer__read__BitMask_20 | mercury__bit_buffer__read__V_36_36);
    mercury__bit_buffer__read__V_40_40 = (mercury__bit_buffer__read__BitsMask_21 << mercury__bit_buffer__read__Shift_19);
    mercury__bit_buffer__read__V_39_39 = ~(mercury__bit_buffer__read__V_40_40);
    mercury__bit_buffer__read__STATE_VARIABLE_Word_38_38 = (mercury__bit_buffer__read__STATE_VARIABLE_Word_0_22 & mercury__bit_buffer__read__V_39_39);
    mercury__bit_buffer__read__V_42_42 = (mercury__bit_buffer__read__Bits_17 << mercury__bit_buffer__read__Shift_19);
    *mercury__bit_buffer__read__STATE_VARIABLE_Word_23 = (mercury__bit_buffer__read__STATE_VARIABLE_Word_38_38 | mercury__bit_buffer__read__V_42_42);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_43_43  = (MR_Box) BM;
}
    mercury__bit_buffer__read__V_44_44 = (mercury__bit_buffer__read__Pos_15 + mercury__bit_buffer__read__NumBits_9);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__V_43_43 ;
	Pos =  mercury__bit_buffer__read__V_44_44 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_25  = (MR_Box) Buffer;
}
    *mercury__bit_buffer__read__HeadVar__7_7 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_25;
  }
}

void MR_CALL 
mercury__bit_buffer__read__finalize_6_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9,
  MR_Word mercury__bit_buffer__read__ReadBuffer_1,
  MR_Box * mercury__bit_buffer__read__HeadVar__2_2,
  MR_Box * mercury__bit_buffer__read__HeadVar__3_3,
  MR_Box * mercury__bit_buffer__read__HeadVar__4_4,
  MR_Integer * mercury__bit_buffer__read__HeadVar__5_5,
  MR_Integer * mercury__bit_buffer__read__HeadVar__6_6)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__TypeInfo_25_25;
    MR_Word mercury__bit_buffer__read__TypeInfo_26_26;
    MR_Word mercury__bit_buffer__read__TypeInfo_27_27;
    MR_Box mercury__bit_buffer__read__Buffer_8 = (MR_Box) mercury__bit_buffer__read__ReadBuffer_1;
    MR_Word mercury__bit_buffer__read__TypeInfo_11_28;
    MR_Word mercury__bit_buffer__read__TypeInfo_13_29;
    MR_Word mercury__bit_buffer__read__TypeInfo_15_30;
    MR_Word mercury__bit_buffer__read__TypeInfo_16_31;
    MR_Word mercury__bit_buffer__read__TypeInfo_17_32;
    MR_Word mercury__bit_buffer__read__TypeInfo_18_33;
    MR_Word mercury__bit_buffer__read__TypeInfo_19_34;
    MR_Word mercury__bit_buffer__read__TypeInfo_20_35;
    MR_Word mercury__bit_buffer__read__TypeInfo_21_36;
    MR_Word mercury__bit_buffer__read__TypeInfo_22_37;
    MR_Word mercury__bit_buffer__read__TypeInfo_23_38;
    MR_Word mercury__bit_buffer__read__TypeInfo_24_39;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__2_2  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__3_3  = (MR_Box) State;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__4_4  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__5_5  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_25_25  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_26_26  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_27_27  = TypeInfo;
}
    {
      *mercury__bit_buffer__read__HeadVar__6_6 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_25_25, mercury__bit_buffer__read__TypeInfo_26_26, mercury__bit_buffer__read__TypeInfo_27_27, mercury__bit_buffer__read__ReadBuffer_1);
    }
  }
}

void MR_CALL 
mercury__bit_buffer__read__get_bitmap_8_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_38,
  MR_Integer mercury__bit_buffer__read__Index_9,
  MR_Integer mercury__bit_buffer__read__NumBits_10,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_21,
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_12,
  MR_Word * mercury__bit_buffer__read__Result_13,
  MR_Word mercury__bit_buffer__read__HeadVar__7_7,
  MR_Word * mercury__bit_buffer__read__HeadVar__8_8)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__Status_15;
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 = (MR_Box) mercury__bit_buffer__read__HeadVar__7_7;
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23;
    MR_Word mercury__bit_buffer__read__TypeInfo_40_88;
    MR_Word mercury__bit_buffer__read__TypeInfo_42_89;
    MR_Word mercury__bit_buffer__read__TypeInfo_44_90;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{

    ReadStatus = Buffer->ML_bit_buffer_read_status;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Status_15  = ReadStatus;
}
    if ((mercury__bit_buffer__read__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__bit_buffer__read__V_25_25;
        MR_Integer mercury__bit_buffer__read__V_26_26;
        MR_Integer mercury__bit_buffer__read__V_27_27;
        MR_Integer mercury__bit_buffer__read__V_5_65;
        MR_Integer mercury__bit_buffer__read__V_6_66;
        MR_Integer mercury__bit_buffer__read__V_5_69;
        MR_Integer mercury__bit_buffer__read__V_6_70;

        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 > (MR_Integer) 0);
        if (mercury__bit_buffer__read__succeeded)
          {
            mercury__bit_buffer__read__V_5_65 = (MR_Integer) 0;
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_5_65 <= mercury__bit_buffer__read__Index_9);
            if (mercury__bit_buffer__read__succeeded)
              {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_6_66  = NumBits;
}
                mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Index_9 < mercury__bit_buffer__read__V_6_66);
                if (mercury__bit_buffer__read__succeeded)
                  {
                    mercury__bit_buffer__read__V_26_26 = (mercury__bit_buffer__read__Index_9 + mercury__bit_buffer__read__NumBits_10);
                    mercury__bit_buffer__read__V_27_27 = (MR_Integer) 1;
                    mercury__bit_buffer__read__V_25_25 = (mercury__bit_buffer__read__V_26_26 - mercury__bit_buffer__read__V_27_27);
                    mercury__bit_buffer__read__V_5_69 = (MR_Integer) 0;
                    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_5_69 <= mercury__bit_buffer__read__V_25_25);
                    if (mercury__bit_buffer__read__succeeded)
                      {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_6_70  = NumBits;
}
                        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_25_25 < mercury__bit_buffer__read__V_6_70);
                      }
                  }
              }
          }
        if (mercury__bit_buffer__read__succeeded)
          {
            MR_Word mercury__bit_buffer__read__UseStream_16;
            MR_Word mercury__bit_buffer__read__TypeInfo_45_91;
            MR_Word mercury__bit_buffer__read__TypeInfo_46_92;
            MR_Word mercury__bit_buffer__read__TypeInfo_47_93;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{

    UseStream = Buffer->ML_bit_buffer_use_stream;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__UseStream_16  = UseStream;
}
            switch (mercury__bit_buffer__read__UseStream_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer mercury__bit_buffer__read__Pos_17;
                  MR_Integer mercury__bit_buffer__read__Size_18;
                  MR_Integer mercury__bit_buffer__read__V_28_28;
                  MR_Box mercury__bit_buffer__read__V_30_30;
                  MR_Box mercury__bit_buffer__read__V_31_31;
                  MR_Integer mercury__bit_buffer__read__V_32_32;
                  MR_Word mercury__bit_buffer__read__TypeInfo_48_94;
                  MR_Word mercury__bit_buffer__read__TypeInfo_49_95;
                  MR_Word mercury__bit_buffer__read__TypeInfo_50_96;
                  MR_Word mercury__bit_buffer__read__TypeInfo_51_97;
                  MR_Word mercury__bit_buffer__read__TypeInfo_52_98;
                  MR_Word mercury__bit_buffer__read__TypeInfo_53_99;
                  MR_Word mercury__bit_buffer__read__TypeInfo_54_100;
                  MR_Word mercury__bit_buffer__read__TypeInfo_55_101;
                  MR_Word mercury__bit_buffer__read__TypeInfo_56_102;
                  MR_Word mercury__bit_buffer__read__TypeInfo_57_103;
                  MR_Word mercury__bit_buffer__read__TypeInfo_58_104;
                  MR_Word mercury__bit_buffer__read__TypeInfo_59_105;
                  MR_Word mercury__bit_buffer__read__TypeInfo_60_106;
                  MR_Word mercury__bit_buffer__read__TypeInfo_61_107;
                  MR_Word mercury__bit_buffer__read__TypeInfo_62_108;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos_17  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Size_18  = Size;
}
                  mercury__bit_buffer__read__V_28_28 = (mercury__bit_buffer__read__Size_18 - mercury__bit_buffer__read__Pos_17);
                  mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_28_28 < mercury__bit_buffer__read__NumBits_10);
                  if (mercury__bit_buffer__read__succeeded)
                    *mercury__bit_buffer__read__NumBitsRead_12 = mercury__bit_buffer__read__V_28_28;
                  else
                    *mercury__bit_buffer__read__NumBitsRead_12 = mercury__bit_buffer__read__NumBits_10;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_30_30  = (MR_Box) BM;
}
                  {
                    *mercury__bit_buffer__read__STATE_VARIABLE_BM_21 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bit_buffer__read__V_30_30, mercury__bit_buffer__read__Pos_17, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20, mercury__bit_buffer__read__Index_9, *mercury__bit_buffer__read__NumBitsRead_12);
                  }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_31_31  = (MR_Box) BM;
}
                  mercury__bit_buffer__read__V_32_32 = (mercury__bit_buffer__read__Pos_17 + mercury__bit_buffer__read__NumBits_10);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__V_31_31 ;
	Pos =  mercury__bit_buffer__read__V_32_32 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23  = (MR_Box) Buffer;
}
                  *mercury__bit_buffer__read__Result_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_38, mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20, mercury__bit_buffer__read__STATE_VARIABLE_BM_21, (MR_Integer) 0, mercury__bit_buffer__read__NumBitsRead_12, mercury__bit_buffer__read__Result_13, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23);
                  }
                }
                break;
            }
          }
        else
          {
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 == (MR_Integer) 0);
            if (mercury__bit_buffer__read__succeeded)
              {
                {
                  MR_Integer mercury__bit_buffer__read__V_6_87;

                  mercury__bit_buffer__read__succeeded = ((MR_Integer) 0 <= mercury__bit_buffer__read__Index_9);
                  if (mercury__bit_buffer__read__succeeded)
                    {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_6_87  = NumBits;
}
                      mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Index_9 < mercury__bit_buffer__read__V_6_87);
                    }
                }
                if (!(mercury__bit_buffer__read__succeeded))
                  mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Index_9 == (MR_Integer) 0);
              }
            if (mercury__bit_buffer__read__succeeded)
              {
                *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
                *mercury__bit_buffer__read__Result_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                {
                  mercury__bitmap__throw_bounds_error_4_p_0(mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20, (MR_String) "bit_buffer.read.get_bitmap", mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10);
                  return;
                }
              }
            mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22;
            *mercury__bit_buffer__read__STATE_VARIABLE_BM_21 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20;
          }
      }
    else
      {
        *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
        *mercury__bit_buffer__read__Result_13 = mercury__bit_buffer__read__Status_15;
        *mercury__bit_buffer__read__STATE_VARIABLE_BM_21 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20;
        mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22;
      }
    *mercury__bit_buffer__read__HeadVar__8_8 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23;
  }
}

void MR_CALL 
mercury__bit_buffer__read__get_bitmap_6_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_19,
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_11,
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_12,
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_8,
  MR_Word * mercury__bit_buffer__read__Result_9,
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_13,
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_14)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__V_16_16;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_6_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_11 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_16_16  = NumBits;
}
    {
      mercury__bit_buffer__read__get_bitmap_8_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_19, (MR_Integer) 0, mercury__bit_buffer__read__V_16_16, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_11, mercury__bit_buffer__read__STATE_VARIABLE_BM_12, mercury__bit_buffer__read__NumBitsRead_8, mercury__bit_buffer__read__Result_9, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_13, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_14);
    }
  }
}

void MR_CALL 
mercury__bit_buffer__read__get_bits_8_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_36,
  MR_Integer mercury__bit_buffer__read__Index_9,
  MR_Integer mercury__bit_buffer__read__NumBits_10,
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18,
  MR_Integer * mercury__bit_buffer__read__HeadVar__4_4,
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_12,
  MR_Word * mercury__bit_buffer__read__BitsResult_13,
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20,
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__Status_15;
    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_19;
    MR_Box mercury__bit_buffer__read__V_22_22 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
    MR_Word mercury__bit_buffer__read__TypeInfo_38_52;
    MR_Word mercury__bit_buffer__read__TypeInfo_40_53;
    MR_Word mercury__bit_buffer__read__TypeInfo_42_54;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_22_22 ;
		{

    ReadStatus = Buffer->ML_bit_buffer_read_status;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Status_15  = ReadStatus;
}
    if ((mercury__bit_buffer__read__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 > (MR_Integer) 0);
        if (mercury__bit_buffer__read__succeeded)
          {
            MR_Integer mercury__bit_buffer__read__V_24_24;
            MR_Word mercury__bit_buffer__read__TypeInfo_43_43;
            MR_Word mercury__bit_buffer__read__TypeInfo_44_44;
            MR_Word mercury__bit_buffer__read__TypeInfo_45_45;
            MR_Integer mercury__bit_buffer__read__V_27_27;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_24_24  = Bits;
}
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 > mercury__bit_buffer__read__V_24_24);
            if (mercury__bit_buffer__read__succeeded)
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140bit_buffer.read.get_bits\'/8", (MR_String) "invalid number of bits");
                  return;
                }
              }
            else
              {
              }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_36 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_43_43  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_36 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_44_44  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_36 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_45_45  = TypeInfo;
}
            {
              mercury__bit_buffer__read__V_27_27 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_43_43, mercury__bit_buffer__read__TypeInfo_44_44, mercury__bit_buffer__read__TypeInfo_45_45, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20);
            }
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_27_27 >= mercury__bit_buffer__read__NumBits_10);
            if (mercury__bit_buffer__read__succeeded)
              {
                *mercury__bit_buffer__read__BitsResult_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__bit_buffer__read__do_get_bits_7_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_36, mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10, mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18, &mercury__bit_buffer__read__STATE_VARIABLE_Word_19, mercury__bit_buffer__read__NumBitsRead_12, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21);
                }
              }
            else
              {
                MR_Word mercury__bit_buffer__read__RefillResult_16;
                MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_30_30;
                MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_49 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
                MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_50;

                {
                  mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_36, &mercury__bit_buffer__read__RefillResult_16, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_49, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_50);
                }
                mercury__bit_buffer__read__STATE_VARIABLE_Buffer_30_30 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_50;
                if ((mercury__bit_buffer__read__RefillResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *mercury__bit_buffer__read__BitsResult_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__bit_buffer__read__do_get_bits_7_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_36, mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10, mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18, &mercury__bit_buffer__read__STATE_VARIABLE_Word_19, mercury__bit_buffer__read__NumBitsRead_12, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_30_30, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21);
                    }
                  }
                else
                  {
                    *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
                    *mercury__bit_buffer__read__BitsResult_13 = mercury__bit_buffer__read__RefillResult_16;
                    mercury__bit_buffer__read__STATE_VARIABLE_Word_19 = mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18;
                    *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_30_30;
                  }
              }
          }
        else
          {
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 == (MR_Integer) 0);
            if (mercury__bit_buffer__read__succeeded)
              {
                *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
                *mercury__bit_buffer__read__BitsResult_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140bit_buffer.read.get_bits\'/8", (MR_String) "negative number of bits");
                  return;
                }
              }
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
            mercury__bit_buffer__read__STATE_VARIABLE_Word_19 = mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18;
          }
      }
    else
      {
        *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
        *mercury__bit_buffer__read__BitsResult_13 = mercury__bit_buffer__read__Status_15;
        mercury__bit_buffer__read__STATE_VARIABLE_Word_19 = mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18;
        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
      }
    *mercury__bit_buffer__read__HeadVar__4_4 = mercury__bit_buffer__read__STATE_VARIABLE_Word_19;
  }
}

void MR_CALL 
mercury__bit_buffer__read__get_bit_3_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_17,
  MR_Word * mercury__bit_buffer__read__BitResult_4,
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_10,
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_11)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__Word_6;
    MR_Integer mercury__bit_buffer__read__NumBitsRead_7;
    MR_Word mercury__bit_buffer__read__BitsResult_8;

    {
      mercury__bit_buffer__read__get_bits_8_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_17, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, &mercury__bit_buffer__read__Word_6, &mercury__bit_buffer__read__NumBitsRead_7, &mercury__bit_buffer__read__BitsResult_8, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_10, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_11);
    }
    if ((mercury__bit_buffer__read__BitsResult_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBitsRead_7 == (MR_Integer) 1);
        if (mercury__bit_buffer__read__succeeded)
          {
            MR_Word mercury__bit_buffer__read__V_16_16;

            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Word_6 == (MR_Integer) 0);
            if (mercury__bit_buffer__read__succeeded)
              mercury__bit_buffer__read__V_16_16 = (MR_Integer) 0;
            else
              mercury__bit_buffer__read__V_16_16 = (MR_Integer) 1;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__bit_buffer__read__BitResult_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bit_buffer__read__V_16_16));
            }
          }
        else
          *mercury__bit_buffer__read__BitResult_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Box mercury__bit_buffer__read__Error_9 = (MR_hl_field(MR_mktag(1), mercury__bit_buffer__read__BitsResult_8, (MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__bit_buffer__read__BitResult_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = mercury__bit_buffer__read__Error_9;
        }
      }
  }
}

void MR_CALL 
mercury__bit_buffer__read__buffer_status_3_p_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18,
  MR_Word * mercury__bit_buffer__read__Result_4,
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11,
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__Status_6;
    MR_Box mercury__bit_buffer__read__V_13_13 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
    MR_Word mercury__bit_buffer__read__TypeInfo_20_36;
    MR_Word mercury__bit_buffer__read__TypeInfo_22_37;
    MR_Word mercury__bit_buffer__read__TypeInfo_24_38;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_13_13 ;
		{

    ReadStatus = Buffer->ML_bit_buffer_read_status;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Status_6  = ReadStatus;
}
    if ((mercury__bit_buffer__read__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__bit_buffer__read__TypeInfo_25_25;
        MR_Word mercury__bit_buffer__read__TypeInfo_26_26;
        MR_Word mercury__bit_buffer__read__TypeInfo_27_27;
        MR_Integer mercury__bit_buffer__read__NumBufferedBits_7;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_25_25  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_26_26  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_27_27  = TypeInfo;
}
        {
          mercury__bit_buffer__read__NumBufferedBits_7 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_25_25, mercury__bit_buffer__read__TypeInfo_26_26, mercury__bit_buffer__read__TypeInfo_27_27, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11);
        }
        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBufferedBits_7 > (MR_Integer) 0);
        if (mercury__bit_buffer__read__succeeded)
          {
            *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
          }
        else
          {
            MR_Word mercury__bit_buffer__read__RefillResult_8;
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_33 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34;

            {
              mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18, &mercury__bit_buffer__read__RefillResult_8, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_33, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34);
            }
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34;
            if ((mercury__bit_buffer__read__RefillResult_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__bit_buffer__read__TypeInfo_28_28;
                MR_Word mercury__bit_buffer__read__TypeInfo_29_29;
                MR_Word mercury__bit_buffer__read__TypeInfo_30_30;
                MR_Integer mercury__bit_buffer__read__NewNumBufferedBits_9;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_28_28  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_29_29  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_30_30  = TypeInfo;
}
                {
                  mercury__bit_buffer__read__NewNumBufferedBits_9 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_28_28, mercury__bit_buffer__read__TypeInfo_29_29, mercury__bit_buffer__read__TypeInfo_30_30, *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12);
                }
                mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NewNumBufferedBits_9 > (MR_Integer) 0);
                if (mercury__bit_buffer__read__succeeded)
                  *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              }
            else
              {
                MR_Box mercury__bit_buffer__read__Err_10 = (MR_hl_field(MR_mktag(1), mercury__bit_buffer__read__RefillResult_8, (MR_Integer) 0));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__bit_buffer__read__Result_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__bit_buffer__read__Err_10;
                }
              }
          }
      }
    else
      {
        MR_Box mercury__bit_buffer__read__Err_17 = (MR_hl_field(MR_mktag(1), mercury__bit_buffer__read__Status_6, (MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__bit_buffer__read__Result_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__bit_buffer__read__Err_17;
        }
        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
      }
  }
}

MR_Integer MR_CALL 
mercury__bit_buffer__read__num_bits_to_byte_boundary_1_f_0(
  MR_Word mercury__bit_buffer__read__TypeInfo_10_10,
  MR_Word mercury__bit_buffer__read__TypeInfo_11_11,
  MR_Word mercury__bit_buffer__read__TypeInfo_12_12,
  MR_Word mercury__bit_buffer__read__Buffer_3)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__NumBits_4;
    MR_Integer mercury__bit_buffer__read__Pos_5;
    MR_Integer mercury__bit_buffer__read__PosInByte_6;
    MR_Box mercury__bit_buffer__read__V_7_7 = (MR_Box) mercury__bit_buffer__read__Buffer_3;
    MR_Word mercury__bit_buffer__read__TypeInfo_10_13;
    MR_Word mercury__bit_buffer__read__TypeInfo_11_14;
    MR_Word mercury__bit_buffer__read__TypeInfo_12_15;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_bits_to_byte_boundary_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_7_7 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos_5  = Pos;
}
    mercury__bit_buffer__read__PosInByte_6 = (mercury__bit_buffer__read__Pos_5 % (MR_Integer) 8);
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__PosInByte_6 == (MR_Integer) 0);
    if (mercury__bit_buffer__read__succeeded)
      mercury__bit_buffer__read__NumBits_4 = (MR_Integer) 0;
    else
      {
        mercury__bit_buffer__read__NumBits_4 = ((MR_Integer) 8 - mercury__bit_buffer__read__PosInByte_6);
      }
    return mercury__bit_buffer__read__NumBits_4;
  }
}

MR_Integer MR_CALL 
mercury__bit_buffer__read__num_buffered_bits_1_f_0(
  MR_Word mercury__bit_buffer__read__TypeInfo_10_10,
  MR_Word mercury__bit_buffer__read__TypeInfo_11_11,
  MR_Word mercury__bit_buffer__read__TypeInfo_12_12,
  MR_Word mercury__bit_buffer__read__Buffer_3)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Integer mercury__bit_buffer__read__HeadVar__2_2;
    MR_Integer mercury__bit_buffer__read__V_4_4;
    MR_Integer mercury__bit_buffer__read__V_5_5;
    MR_Box mercury__bit_buffer__read__V_6_6 = (MR_Box) mercury__bit_buffer__read__Buffer_3;
    MR_Integer mercury__bit_buffer__read__V_7_7;
    MR_Box mercury__bit_buffer__read__V_8_8;
    MR_Word mercury__bit_buffer__read__TypeInfo_10_19;
    MR_Word mercury__bit_buffer__read__TypeInfo_11_20;
    MR_Word mercury__bit_buffer__read__TypeInfo_12_21;
    MR_Word mercury__bit_buffer__read__TypeInfo_10_22;
    MR_Word mercury__bit_buffer__read__TypeInfo_11_23;
    MR_Word mercury__bit_buffer__read__TypeInfo_12_24;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_6_6 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_5_5  = Size;
}
    mercury__bit_buffer__read__V_8_8 = (MR_Box) mercury__bit_buffer__read__Buffer_3;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_8_8 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_7_7  = Pos;
}
    mercury__bit_buffer__read__V_4_4 = (mercury__bit_buffer__read__V_5_5 - mercury__bit_buffer__read__V_7_7);
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_4_4 > (MR_Integer) 0);
    if (mercury__bit_buffer__read__succeeded)
      mercury__bit_buffer__read__HeadVar__2_2 = mercury__bit_buffer__read__V_4_4;
    else
      mercury__bit_buffer__read__HeadVar__2_2 = (MR_Integer) 0;
    return mercury__bit_buffer__read__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__bit_buffer__read__new_bitmap_reader_1_f_0(
  MR_Box mercury__bit_buffer__read__BM_3)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__HeadVar__2_2;
    MR_Integer mercury__bit_buffer__read__V_5_5;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_bitmap_reader_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_5_5  = NumBits;
}
    {
      mercury__bit_buffer__read__HeadVar__2_2 = mercury__bit_buffer__read__new_bitmap_reader_3_f_0(mercury__bit_buffer__read__BM_3, (MR_Integer) 0, mercury__bit_buffer__read__V_5_5);
    }
    return mercury__bit_buffer__read__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__bit_buffer__read__new_bitmap_reader_3_f_0(
  MR_Box mercury__bit_buffer__read__BM_5,
  MR_Integer mercury__bit_buffer__read__StartIndex_6,
  MR_Integer mercury__bit_buffer__read__NumBits_7)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__Buffer_8;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_13_13 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_14_14 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0;
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_15_15 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0;
    MR_Box mercury__bit_buffer__read__V_9_9;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      mercury__bit_buffer__read__V_9_9 = mercury__bit_buffer__new_buffer_6_f_0(mercury__bit_buffer__read__TypeCtorInfo_13_13, mercury__bit_buffer__read__TypeCtorInfo_14_14, mercury__bit_buffer__read__TypeCtorInfo_15_15, mercury__bit_buffer__read__BM_5, mercury__bit_buffer__read__StartIndex_6, mercury__bit_buffer__read__NumBits_7, (MR_Integer) 0, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__bit_buffer__read__Buffer_8 = (MR_Word) mercury__bit_buffer__read__V_9_9;
    return mercury__bit_buffer__read__Buffer_8;
  }
}

MR_Word MR_CALL 
mercury__bit_buffer__read__new_3_f_0(
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20,
  MR_Integer mercury__bit_buffer__read__NumBytes_5,
  MR_Box mercury__bit_buffer__read__Stream_6,
  MR_Box mercury__bit_buffer__read__State_7)
{
  {
    MR_bool mercury__bit_buffer__read__succeeded;
    MR_Word mercury__bit_buffer__read__Buffer_8;
    MR_Word mercury__bit_buffer__read__TypeInfo_22_22;
    MR_Word mercury__bit_buffer__read__TypeInfo_24_24;
    MR_Word mercury__bit_buffer__read__TypeInfo_26_26;
    MR_Integer mercury__bit_buffer__read__SizeInBits_9 = (mercury__bit_buffer__read__NumBytes_5 * (MR_Integer) 8);
    MR_Integer mercury__bit_buffer__read__ChunkSize_10;
    MR_Box mercury__bit_buffer__read__BM_12;
    MR_Integer mercury__bit_buffer__read__Pos_13;
    MR_Integer mercury__bit_buffer__read__V_15_15;
    MR_Integer mercury__bit_buffer__read__V_16_16;
    MR_Box mercury__bit_buffer__read__V_18_18;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_15_15  = Bits;
}
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__SizeInBits_9 > mercury__bit_buffer__read__V_15_15);
    if (mercury__bit_buffer__read__succeeded)
      mercury__bit_buffer__read__ChunkSize_10 = mercury__bit_buffer__read__SizeInBits_9;
    else
      mercury__bit_buffer__read__ChunkSize_10 = mercury__bit_buffer__read__V_15_15;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_16_16  = Bits;
}
    mercury__bit_buffer__read__Pos_13 = (mercury__bit_buffer__read__ChunkSize_10 + mercury__bit_buffer__read__V_16_16);
    {
      mercury__bit_buffer__read__BM_12 = mercury__bitmap__init_2_f_0(mercury__bit_buffer__read__Pos_13, (MR_Integer) 0);
    }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20 ;
	Index =  (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_22_22  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20 ;
	Index =  (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_24_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20 ;
	Index =  (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_26_26  = TypeInfo;
}
    {
      mercury__bit_buffer__read__V_18_18 = mercury__bit_buffer__new_buffer_6_f_0(mercury__bit_buffer__read__TypeInfo_22_22, mercury__bit_buffer__read__TypeInfo_24_24, mercury__bit_buffer__read__TypeInfo_26_26, mercury__bit_buffer__read__BM_12, mercury__bit_buffer__read__Pos_13, mercury__bit_buffer__read__Pos_13, (MR_Integer) 1, mercury__bit_buffer__read__Stream_6, mercury__bit_buffer__read__State_7);
    }
    mercury__bit_buffer__read__Buffer_8 = (MR_Word) mercury__bit_buffer__read__V_18_18;
    return mercury__bit_buffer__read__Buffer_8;
  }
}

void mercury__bit_buffer__read__init(void)
{
}

void mercury__bit_buffer__read__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_io_read_buffer_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3);
	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_0);
}

void mercury__bit_buffer__read__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bit_buffer__read__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module bit_buffer.read. */
