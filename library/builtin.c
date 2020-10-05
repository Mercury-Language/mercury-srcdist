/*
** Automatically generated from `builtin.m'
** by the Mercury compiler,
** version rotd-2020-10-05
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


// :- module builtin.
// :- implementation.

/*
INIT mercury__builtin__init
ENDINIT
*/

#include "builtin.mih"
#include "builtin.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
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




static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0;

static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0;

static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1;

static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2;

static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_value_ordered_comparison_result_0[3];

static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_name_ordered_comparison_result_0[3];

static const MR_Integer mercury__builtin__builtin__functor_number_map_comparison_result_0[3];

static const MR_VA_PseudoTypeInfo_Struct2 mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1;

static MR_Integer MR_CALL 
mercury__builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__builtin__tuple_arg_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * TypeInfo_for_ArgT_7,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
mercury__builtin__tuple_arity_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
mercury__builtin__compare_rep_tuple_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Result_4,
  MR_Box TermA_5,
  MR_Box TermB_6);

static void MR_CALL 
mercury__builtin__compare_rep_tuple_pos_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * Result_6,
  MR_Box TermA_7,
  MR_Box TermB_8,
  MR_Integer Index_9,
  MR_Integer Arity_10);

static void MR_CALL 
mercury__builtin__compare_tuple_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Result_4,
  MR_Box TermA_5,
  MR_Box TermB_6);

static void MR_CALL 
mercury__builtin__compare_tuple_pos_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * Result_6,
  MR_Box TermA_7,
  MR_Box TermB_8,
  MR_Integer Index_9,
  MR_Integer Arity_10);

static MR_bool MR_CALL 
mercury__builtin__unify_tuple_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box TermA_3,
  MR_Box TermB_4);

static MR_bool MR_CALL 
mercury__builtin__unify_tuple_pos_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box TermA_5,
  MR_Box TermB_6,
  MR_Integer Index_7,
  MR_Integer Arity_8);

static MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__builtin____Compare____compare_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__builtin____Compare____unify_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__builtin_scalar_common_2[0])),
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

#line 558 "builtin.m"
MR_bool 
ML_unify_tuple(
  MR_Word TypeInfo_for_T_7,
  MR_Word TermA_3,
  MR_Word TermB_4)
#line 558 "builtin.m"
{
#line 558 "builtin.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__builtin__unify_tuple_2_p_0((MR_Word) TypeInfo_for_T_7, (MR_Box) TermA_3, (MR_Box) TermB_4);
	return ret_value;
}

#line 582 "builtin.m"
void 
ML_compare_tuple(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Result_4,
  MR_Word TermA_5,
  MR_Word TermB_6)
#line 582 "builtin.m"
{
#line 582 "builtin.m"
	mercury__builtin__compare_tuple_3_p_0((MR_Word) TypeInfo_for_T_9, (MR_Word *) Result_4, (MR_Box) TermA_5, (MR_Box) TermB_6);
}

#line 612 "builtin.m"
void 
ML_compare_rep_tuple(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Result_4,
  MR_Word TermA_5,
  MR_Word TermB_6)
#line 612 "builtin.m"
{
#line 612 "builtin.m"
	mercury__builtin__compare_rep_tuple_3_p_0((MR_Word) TypeInfo_for_T_9, (MR_Word *) Result_4, (MR_Box) TermA_5, (MR_Box) TermB_6);
}


static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_compare_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____compare_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____compare_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "compare",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin____vpti_pred_3__plain_builtin__type_ctor_info_comparison_result_0__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_comparison_func_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____comparison_func_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____comparison_func_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "comparison_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_comparison_pred_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____comparison_pred_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____comparison_pred_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "comparison_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin____vpti_pred_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_comparison_result_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0 = {
  (MR_String) "=",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1 = {
  (MR_String) "<",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2 = {
  (MR_String) ">",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_value_ordered_comparison_result_0[3] = {
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2
};

static const MR_EnumFunctorDescPtr mercury__builtin__builtin__enum_name_ordered_comparison_result_0[3] = {
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_1,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_0,
  &mercury__builtin__builtin__enum_functor_desc_comparison_result_0_2
};

static const MR_Integer mercury__builtin__builtin__functor_number_map_comparison_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_comparison_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__builtin____Unify____comparison_result_0_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____comparison_result_0_0_10001)),
  (MR_String) "builtin",
  (MR_String) "comparison_result",
  {     mercury__builtin__builtin__enum_name_ordered_comparison_result_0 },
  {     mercury__builtin__builtin__enum_value_ordered_comparison_result_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__builtin__builtin__functor_number_map_comparison_result_0
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct mercury__builtin__builtin__type_ctor_info_unify_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__builtin____Unify____unify_1_0_10001)),
  ((MR_Box) (mercury__builtin____Compare____unify_1_0_10001)),
  (MR_String) "builtin",
  (MR_String) "unify",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin____vpti_pred_2__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__builtin____Compare____unify_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__builtin____Compare____compare_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__builtin____Compare____c_pointer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__builtin____Unify____c_pointer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__builtin__tuple_arg_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * TypeInfo_for_ArgT_7,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__builtin__tuple_arg_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_Out_1;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T = TypeInfo_for_T_8 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Index = HeadVar__2_2 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_ArgT;
	 *TypeInfo_for_ArgT_7  = TypeInfo_for_ArgT;
	 *HeadVar__3_3  = (MR_Box) Arg;
}
  }
}

static void MR_CALL 
mercury__builtin__tuple_arity_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__builtin__tuple_arity_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Integer Arity;

	TypeInfo_for_T = TypeInfo_for_T_6 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Arity;
}
  }
}

static void MR_CALL 
mercury__builtin__compare_rep_tuple_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Result_4,
  MR_Box TermA_5,
  MR_Box TermB_6)
{
  {
    MR_Integer Arity_7;

{
#define MR_PROC_LABEL mercury__builtin__compare_rep_tuple_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Integer Arity;

	TypeInfo_for_T = TypeInfo_for_T_9 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 Arity_7  = Arity;
}
    mercury__builtin__compare_rep_tuple_pos_5_p_0(TypeInfo_for_T_9, Result_4, TermA_5, TermB_6, (MR_Integer) 0, Arity_7);
  }
}

static void MR_CALL 
mercury__builtin__compare_rep_tuple_pos_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * Result_6,
  MR_Box TermA_7,
  MR_Box TermB_8,
  MR_Integer Index_9,
  MR_Integer Arity_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 >= Arity_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Result_6 = (MR_Integer) 0;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Box SubTermA_11;
      MR_Box SubTermB_12;
      MR_Box CastSubTermB_13;
      MR_Word SubResult_14;
      MR_Word TypeInfo_19_19;

{
#define MR_PROC_LABEL mercury__builtin__compare_rep_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_Out_1;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T = TypeInfo_for_T_17 ;
	Term = (MR_Word) TermA_7 ;
	Index = Index_9 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_ArgT;
	 TypeInfo_18_18  = TypeInfo_for_ArgT;
	 SubTermA_11  = (MR_Box) Arg;
}
{
#define MR_PROC_LABEL mercury__builtin__compare_rep_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_Out_1;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T = TypeInfo_for_T_17 ;
	Term = (MR_Word) TermB_8 ;
	Index = Index_9 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_ArgT;
	 TypeInfo_19_19  = TypeInfo_for_ArgT;
	 SubTermB_12  = (MR_Box) Arg;
}
      CastSubTermB_13 = SubTermB_12;
      mercury__builtin__compare_representation_3_p_0(TypeInfo_18_18, &SubResult_14, SubTermA_11, CastSubTermB_13);
      switch (SubResult_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Result_6 = SubResult_14;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Index_9 = Var_15;

            // direct tailcall eliminated
            ;
            Index_9 = next_value_of_Index_9;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__builtin__compare_tuple_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Result_4,
  MR_Box TermA_5,
  MR_Box TermB_6)
{
  {
    MR_Integer Arity_7;

{
#define MR_PROC_LABEL mercury__builtin__compare_tuple_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Integer Arity;

	TypeInfo_for_T = TypeInfo_for_T_9 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 Arity_7  = Arity;
}
    mercury__builtin__compare_tuple_pos_5_p_0(TypeInfo_for_T_9, Result_4, TermA_5, TermB_6, (MR_Integer) 0, Arity_7);
  }
}

static void MR_CALL 
mercury__builtin__compare_tuple_pos_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * Result_6,
  MR_Box TermA_7,
  MR_Box TermB_8,
  MR_Integer Index_9,
  MR_Integer Arity_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 >= Arity_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Result_6 = (MR_Integer) 0;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Box SubTermA_11;
      MR_Box SubTermB_12;
      MR_Box CastSubTermB_13;
      MR_Word SubResult_14;
      MR_Word TypeInfo_19_19;

{
#define MR_PROC_LABEL mercury__builtin__compare_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_Out_1;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T = TypeInfo_for_T_17 ;
	Term = (MR_Word) TermA_7 ;
	Index = Index_9 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_ArgT;
	 TypeInfo_18_18  = TypeInfo_for_ArgT;
	 SubTermA_11  = (MR_Box) Arg;
}
{
#define MR_PROC_LABEL mercury__builtin__compare_tuple_pos_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_Out_1;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T = TypeInfo_for_T_17 ;
	Term = (MR_Word) TermB_8 ;
	Index = Index_9 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_ArgT;
	 TypeInfo_19_19  = TypeInfo_for_ArgT;
	 SubTermB_12  = (MR_Box) Arg;
}
      CastSubTermB_13 = SubTermB_12;
      mercury__builtin__compare_3_p_0(TypeInfo_18_18, &SubResult_14, SubTermA_11, CastSubTermB_13);
      switch (SubResult_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Result_6 = SubResult_14;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Index_9 = Var_15;

            // direct tailcall eliminated
            ;
            Index_9 = next_value_of_Index_9;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__builtin__unify_tuple_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box TermA_3,
  MR_Box TermB_4)
{
  {
    MR_bool succeeded;
    MR_Integer Arity_5;

{
#define MR_PROC_LABEL mercury__builtin__unify_tuple_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Integer Arity;

	TypeInfo_for_T = TypeInfo_for_T_7 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    Arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY((MR_TypeInfo) TypeInfo_for_T);


		;}
#undef MR_PROC_LABEL
	 Arity_5  = Arity;
}
    succeeded = mercury__builtin__unify_tuple_pos_4_p_0(TypeInfo_for_T_7, TermA_3, TermB_4, (MR_Integer) 0, Arity_5);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__builtin__unify_tuple_pos_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box TermA_5,
  MR_Box TermB_6,
  MR_Integer Index_7,
  MR_Integer Arity_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 >= Arity_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Box SubTermA_9;
      MR_Box SubTermB_10;
      MR_Box CastSubTermB_11;
      MR_Integer Var_12;
      MR_Integer Var_13;
      MR_Word TypeInfo_16_16;
      MR_Integer next_value_of_Index_7;

{
#define MR_PROC_LABEL mercury__builtin__unify_tuple_pos_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_Out_1;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T = TypeInfo_for_T_14 ;
	Term = (MR_Word) TermA_5 ;
	Index = Index_7 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_ArgT;
	 TypeInfo_15_15  = TypeInfo_for_ArgT;
	 SubTermA_9  = (MR_Box) Arg;
}
{
#define MR_PROC_LABEL mercury__builtin__unify_tuple_pos_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_Out_1;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Arg;

	TypeInfo_for_T = TypeInfo_for_T_14 ;
	Term = (MR_Word) TermB_6 ;
	Index = Index_7 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_TypeInfo type_info = (MR_TypeInfo) TypeInfo_for_T;
    MR_Word     *arg_vector = (MR_Word *) Term;

    TypeInfo_for_ArgT =
        (MR_Word) MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info)[1 + Index];
    Arg = arg_vector[Index];


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_ArgT;
	 TypeInfo_16_16  = TypeInfo_for_ArgT;
	 SubTermB_10  = (MR_Box) Arg;
}
      CastSubTermB_11 = SubTermB_10;
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, SubTermA_9, CastSubTermB_11);
      if (succeeded)
      {
        Var_13 = (MR_Integer) 1;
        Var_12 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) Var_13);
        // direct tailcall eliminated
        ;
        next_value_of_Index_7 = Var_12;
        Index_7 = next_value_of_Index_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__builtin__init_runtime_hooks_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__builtin__init_runtime_hooks_0_p_0


		{

#ifdef MR_HIGHLEVEL_CODE
    MR_special_pred_hooks.MR_unify_tuple_pred = ML_unify_tuple;
    MR_special_pred_hooks.MR_compare_tuple_pred = ML_compare_tuple;
    MR_special_pred_hooks.MR_compare_rep_tuple_pred = ML_compare_rep_tuple;
#else
    MR_special_pred_hooks.MR_unify_tuple_pred =
        MR_ENTRY(mercury__builtin__unify_tuple_2_0);
    MR_special_pred_hooks.MR_compare_tuple_pred =
        MR_ENTRY(mercury__builtin__compare_tuple_3_0);
    MR_special_pred_hooks.MR_compare_rep_tuple_pred =
        MR_ENTRY(mercury__builtin__compare_rep_tuple_3_0);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__builtin__get_one_solution_io_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_IO_12,
  MR_Word Pred_5,
  MR_Box * X_6,
  MR_Box STATE_VARIABLE_IO_0_8,
  MR_Box * STATE_VARIABLE_IO_9)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));

    func_0(((MR_Box) (Pred_5)), X_6, STATE_VARIABLE_IO_0_8, STATE_VARIABLE_IO_9);
    mercury__private_builtin__imp_0_p_0();
  }
}

MR_bool MR_CALL 
mercury__builtin__get_one_solution_1_f_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word CCPred_3,
  MR_Box * OutVal_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CCPred_3, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (CCPred_3)), OutVal_4);
    if (succeeded)
    {
      mercury__private_builtin__imp_0_p_0();
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__builtin__get_one_solution_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word CCPred_3)
{
  {
    MR_Box OutVal_4;
    void MR_CALL (* func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CCPred_3, (MR_Integer) 1))));

    func_0(((MR_Box) (CCPred_3)), &OutVal_4);
    mercury__private_builtin__imp_0_p_0();
    return OutVal_4;
  }
}

void MR_CALL 
mercury__builtin__compare_representation_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

MR_bool MR_CALL 
mercury__builtin__dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T1_5,
  MR_Word TypeInfo_for_T2_6,
  MR_Box X_3,
  MR_Box * Y_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_5, TypeInfo_for_T2_6, X_3, Y_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__builtin__semipure_true_0_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__builtin__impure_true_0_p_0(void)
{
  mercury__private_builtin__imp_0_p_0();
}

void MR_CALL 
mercury__builtin__cc_multi_equal_2_p_1(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__builtin__cc_multi_equal_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) HeadVar__1_1 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = (MR_Box) Y;
}
  }
}

void MR_CALL 
mercury__builtin__cc_multi_equal_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__builtin__cc_multi_equal_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) HeadVar__1_1 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = (MR_Box) Y;
}
  }
}

MR_bool MR_CALL 
mercury__builtin__semidet_false_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__builtin__semidet_false_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__semidet_true_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__builtin__semidet_true_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__semidet_fail_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__builtin__semidet_fail_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__semidet_succeed_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__builtin__semidet_succeed_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__f_64_62_61_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Box Y_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_6, &Var_7, X_3, Y_4);
    succeeded = ((MR_Integer) 1 != Var_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__f_64_62_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Box Y_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_6, &Var_7, X_3, Y_4);
    succeeded = ((MR_Integer) 2 == Var_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__f_64_61_60_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Box Y_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_6, &Var_7, X_3, Y_4);
    succeeded = ((MR_Integer) 2 != Var_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__f_64_60_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Box Y_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_6, &Var_7, X_3, Y_4);
    succeeded = ((MR_Integer) 1 == Var_7);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__builtin__ordering_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box X_4,
  MR_Box Y_5)
{
  {
    MR_Word R_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_7, &R_6, X_4, Y_5);
    return R_6;
  }
}

void MR_CALL 
mercury__builtin__compare_3_p_3(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

void MR_CALL 
mercury__builtin__compare_3_p_2(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

void MR_CALL 
mercury__builtin__compare_3_p_1(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

void MR_CALL 
mercury__builtin__compare_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

MR_bool MR_CALL 
mercury__builtin__unify_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

void MR_CALL 
mercury__builtin__promise_only_solution_io_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_IO_12,
  MR_Word Pred_5,
  MR_Box * X_6,
  MR_Box STATE_VARIABLE_IO_0_8,
  MR_Box * STATE_VARIABLE_IO_9)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));

    func_0(((MR_Box) (Pred_5)), X_6, STATE_VARIABLE_IO_0_8, STATE_VARIABLE_IO_9);
    mercury__private_builtin__imp_0_p_0();
  }
}

MR_bool MR_CALL 
mercury__builtin__promise_only_solution_1_f_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word CCPred_1,
  MR_Box * OutVal_2)
{
  {
    MR_bool succeeded;
    MR_Box OutVal0_12;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CCPred_1, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (CCPred_1)), &OutVal0_12);
    if (succeeded)
    {
      mercury__private_builtin__imp_0_p_0();
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *OutVal_2 = OutVal0_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__builtin__promise_only_solution_1_f_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word CCPred_1,
  MR_Box * OutVal_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CCPred_1, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (CCPred_1)), OutVal_2);
    if (succeeded)
    {
      mercury__private_builtin__imp_0_p_0();
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__builtin__promise_only_solution_1_f_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word CCPred_1)
{
  {
    MR_Box OutVal_2;
    MR_Box OutVal0_7;
    void MR_CALL (* func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CCPred_1, (MR_Integer) 1))));

    func_0(((MR_Box) (CCPred_1)), &OutVal0_7);
    mercury__private_builtin__imp_0_p_0();
    OutVal_2 = OutVal0_7;
    return OutVal_2;
  }
}

MR_Box MR_CALL 
mercury__builtin__promise_only_solution_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word CCPred_1)
{
  {
    MR_Box OutVal_2;
    void MR_CALL (* func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CCPred_1, (MR_Integer) 1))));

    func_0(((MR_Box) (CCPred_1)), &OutVal_2);
    mercury__private_builtin__imp_0_p_0();
    return OutVal_2;
  }
}

MR_Box MR_CALL 
mercury__builtin__unsafe_cast_any_to_ground_1_f_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Box HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__builtin__unsafe_cast_any_to_ground_1_f_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) HeadVar__1_1 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 HeadVar__2_2  = (MR_Box) Y;
}
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__builtin__false_0_p_0(void)
{
  return MR_FALSE;
}

void MR_CALL 
mercury__builtin__unsafe_promise_unique_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  *HeadVar__2_2 = HeadVar__1_1;
}

MR_Box MR_CALL 
mercury__builtin__unsafe_promise_unique_1_f_0(
  MR_Box HeadVar__1_1)
{
  {
    MR_Box HeadVar__2_2 = HeadVar__1_1;

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__builtin__copy_2_p_1(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__builtin__copy_2_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = TypeInfo_for_T_3 ;
	Value = (MR_Word) HeadVar__1_1 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = (MR_Box) Copy;
}
  }
}

void MR_CALL 
mercury__builtin__copy_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__builtin__copy_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = TypeInfo_for_T_3 ;
	Value = (MR_Word) HeadVar__1_1 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = (MR_Box) Copy;
}
  }
}

static MR_bool MR_CALL 
mercury__builtin____Unify____compare_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin____Unify____compare_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__builtin____Compare____compare_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__builtin____Compare____compare_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin____Unify____comparison_func_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__builtin____Compare____comparison_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__builtin____Compare____comparison_func_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin____Unify____comparison_pred_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__builtin____Compare____comparison_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__builtin____Compare____comparison_pred_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__builtin____Unify____comparison_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin____Unify____comparison_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__builtin____Compare____comparison_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__builtin____Compare____comparison_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__builtin____Unify____unify_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin____Unify____unify_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__builtin____Compare____unify_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__builtin____Compare____unify_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__builtin__init(void)
{
}

void mercury__builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_compare_1);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_comparison_func_1);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_comparison_pred_1);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_comparison_result_0);
	MR_register_type_ctor_info(&mercury__builtin__builtin__type_ctor_info_unify_1);
}

void mercury__builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__builtin__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module builtin.
