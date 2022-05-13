/*
** Automatically generated from `version_store.m'
** by the Mercury compiler,
** version rotd-2022-05-13
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


// :- module version_store.
// :- implementation.

/*
INIT mercury__version_store__init
ENDINIT
*/

#include "version_store.mih"


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
#include "counter.mih"
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
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__version_store__version_store__functor_number_map_mutvar_2[1];

static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_mutvar_2;

static const MR_EnumFunctorDesc mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0;

static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_ordinal_ordered_some_version_store_type_0[1];

static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0[1];

static const MR_Integer mercury__version_store__version_store__functor_number_map_some_version_store_type_0[1];

static const MR_Integer mercury__version_store__version_store__functor_number_map_version_store_1[1];

static const MR_FA_TypeInfo_Struct1 mercury__version_store__version_array__ti_version_array_1univ__type_ctor_info_univ_0;

static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_version_store_1;

static MR_bool MR_CALL 
mercury__version_store____Unify____mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__version_store____Compare____mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__version_store____Unify____some_version_store_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__version_store____Compare____some_version_store_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__version_store____Compare____version_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__version_store_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__version_store_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__version_store_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__version_store_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__version_store_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_3[0])),
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
#include "io.environment.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



static const MR_Integer mercury__version_store__version_store__functor_number_map_mutvar_2[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_mutvar_2 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__version_store__version_store__type_ctor_info_mutvar_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_store____Unify____mutvar_2_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____mutvar_2_0_10001)),
  (MR_String) "version_store",
  (MR_String) "mutvar",
  { &mercury__version_store__version_store__notag_functor_desc_mutvar_2 },
  { &mercury__version_store__version_store__notag_functor_desc_mutvar_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__version_store__version_store__functor_number_map_mutvar_2,

};

static const MR_EnumFunctorDesc mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0 = {
  (MR_String) "some_version_store_type",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_ordinal_ordered_some_version_store_type_0[1] = {
  &mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0
};

static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0[1] = {
  &mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0
};

static const MR_Integer mercury__version_store__version_store__functor_number_map_some_version_store_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__version_store__version_store__type_ctor_info_some_version_store_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__version_store____Unify____some_version_store_type_0_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____some_version_store_type_0_0_10001)),
  (MR_String) "version_store",
  (MR_String) "some_version_store_type",
  { mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0 },
  { mercury__version_store__version_store__enum_ordinal_ordered_some_version_store_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__version_store__version_store__functor_number_map_some_version_store_type_0,

};

static const MR_Integer mercury__version_store__version_store__functor_number_map_version_store_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 mercury__version_store__version_array__ti_version_array_1univ__type_ctor_info_univ_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_version_store_1 = {
  (MR_String) "version_store",
  (MR_PseudoTypeInfo) (&mercury__version_store__version_array__ti_version_array_1univ__type_ctor_info_univ_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__version_store__version_store__type_ctor_info_version_store_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_store____Unify____version_store_1_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____version_store_1_0_10001)),
  (MR_String) "version_store",
  (MR_String) "version_store",
  { &mercury__version_store__version_store__notag_functor_desc_version_store_1 },
  { &mercury__version_store__version_store__notag_functor_desc_version_store_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__version_store__version_store__functor_number_map_version_store_1,

};

void MR_CALL 
mercury__version_store____Compare____version_store_1_0(
  MR_Word TypeInfo_for_S_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__version_store_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0(
  MR_Word TypeInfo_for_S_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

    succeeded = mercury__version_array____Unify____version_array_1_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__version_store____Compare____some_version_store_type_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__version_store____Unify____some_version_store_type_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__version_store____Compare____mutvar_2_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_S_9,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__version_store____Unify____mutvar_2_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_S_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

void MR_CALL 
mercury__version_store__resize_3_p_0(
  MR_Word TypeInfo_for_S_9,
  MR_Integer N_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Box VA0_5 = (MR_Box) (HeadVar__2_2);
  MR_Box VA_6;
  MR_Word Var_7;

  mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) ((MR_Integer) 0)), &Var_7);
{
#define MR_PROC_LABEL mercury__version_store__resize_3_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA0_5 ;
	N = N_4 ;
	X = (MR_Word) ((MR_Box) (Var_7)) ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	VA_6  = (MR_Box) VA;
}
  *HeadVar__3_3 = (MR_Word) (VA_6);
}

MR_Integer MR_CALL 
mercury__version_store__size_1_f_0(
  MR_Word TypeInfo_for_S_4,
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;
  MR_Box VA_3 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__version_store__size_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = N;
}
  return HeadVar__2_2;
}

void MR_CALL 
mercury__version_store__unsafe_rewind_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Box VA0_3 = (MR_Box) (HeadVar__1_1);
  MR_Box VA_4;

{
#define MR_PROC_LABEL mercury__version_store__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA0_3 ;
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	VA_4  = (MR_Box) VA;
}
  *HeadVar__2_2 = (MR_Word) (VA_4);
}

MR_Word MR_CALL 
mercury__version_store__unsafe_rewind_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word VS0_3)
{
  MR_Word VS_4;
  MR_Box VA0_6 = (MR_Box) (VS0_3);
  MR_Box VA_7;

{
#define MR_PROC_LABEL mercury__version_store__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA0_6 ;
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	VA_7  = (MR_Box) VA;
}
  VS_4 = (MR_Word) (VA_7);
  return VS_4;
}

void MR_CALL 
mercury__version_store__set_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_S_11,
  MR_Word HeadVar__1_1,
  MR_Box Value_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Integer I_5 = (MR_Integer) (HeadVar__1_1);
  MR_Box VA0_7 = (MR_Box) (HeadVar__3_3);
  MR_Box VA_8;
  MR_Word Var_9;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, Value_6, &Var_9);
  mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_5, ((MR_Box) (Var_9)), VA0_7, &VA_8);
  *HeadVar__4_4 = (MR_Word) (VA_8);
}

MR_Word MR_CALL 
mercury__version_store__set_3_f_0(
  MR_Word TypeInfo_for_S_9,
  MR_Word TypeInfo_for_T_10,
  MR_Word VS0_5,
  MR_Word Mutvar_6,
  MR_Box Value_7)
{
  MR_Word VS_8;
  MR_Integer I_11 = (MR_Integer) (Mutvar_6);
  MR_Box VA0_12 = (MR_Box) (VS0_5);
  MR_Box VA_13;
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, Value_7, &Var_14);
  mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_11, ((MR_Box) (Var_14)), VA0_12, &VA_13);
  VS_8 = (MR_Word) (VA_13);
  return VS_8;
}

MR_Word MR_CALL 
mercury__version_store__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word TypeInfo_for_S_10,
  MR_Word Mutvar_6,
  MR_Word VS0_5,
  MR_Box Value_7)
{
  MR_Word VS_8;
  MR_Integer I_11 = (MR_Integer) (Mutvar_6);
  MR_Box VA0_12 = (MR_Box) (VS0_5);
  MR_Box VA_13;
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_9, Value_7, &Var_14);
  mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_11, ((MR_Box) (Var_14)), VA0_12, &VA_13);
  VS_8 = (MR_Word) (VA_13);
  return VS_8;
}

void MR_CALL 
mercury__version_store__get_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_S_11,
  MR_Word HeadVar__1_1,
  MR_Box * Value_6,
  MR_Word VS_7,
  MR_Word * VS_4)
{
  MR_Integer I_5 = (MR_Integer) (HeadVar__1_1);
  MR_Box VA_8;
  MR_Word UnivValue_9;
  MR_Box conv0_UnivValue_9;

  *VS_4 = VS_7;
  VA_8 = (MR_Box) (VS_7);
  conv0_UnivValue_9 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_8, I_5);
  UnivValue_9 = ((MR_Word) (conv0_UnivValue_9));
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_10, UnivValue_9, Value_6);
}

MR_Box MR_CALL 
mercury__version_store__lookup_2_f_0(
  MR_Word TypeInfo_for_S_8,
  MR_Word TypeInfo_for_T_9,
  MR_Word VS_4,
  MR_Word Mutvar_5)
{
  MR_Box Value_6;
  MR_Integer I_10 = (MR_Integer) (Mutvar_5);
  MR_Box VA_11 = (MR_Box) (VS_4);
  MR_Word UnivValue_12;
  MR_Box conv0_UnivValue_12;

  conv0_UnivValue_12 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_11, I_10);
  UnivValue_12 = ((MR_Word) (conv0_UnivValue_12));
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_9, UnivValue_12, &Value_6);
  return Value_6;
}

MR_Box MR_CALL 
mercury__version_store__elem_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_S_9,
  MR_Word Mutvar_5,
  MR_Word VS_4)
{
  MR_Box Value_6;
  MR_Integer I_10 = (MR_Integer) (Mutvar_5);
  MR_Box VA_11 = (MR_Box) (VS_4);
  MR_Word UnivValue_12;
  MR_Box conv0_UnivValue_12;

  conv0_UnivValue_12 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_11, I_10);
  UnivValue_12 = ((MR_Word) (conv0_UnivValue_12));
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_8, UnivValue_12, &Value_6);
  return Value_6;
}

void MR_CALL 
mercury__version_store__copy_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_S_12,
  MR_Word Mutvar0_5,
  MR_Word * Mutvar_6,
  MR_Word VS0_7,
  MR_Word * VS_8)
{
  MR_Box Value_9;
  MR_Integer I_13 = (MR_Integer) (Mutvar0_5);
  MR_Box VA_14 = (MR_Box) (VS0_7);
  MR_Word UnivValue_15;
  MR_Box conv0_UnivValue_15;

  conv0_UnivValue_15 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_14, I_13);
  UnivValue_15 = ((MR_Word) (conv0_UnivValue_15));
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_11, UnivValue_15, &Value_9);
  mercury__version_store__new_mutvar_4_p_0(TypeInfo_for_T_11, TypeInfo_for_S_12, Value_9, Mutvar_6, VS0_7, VS_8);
}

void MR_CALL 
mercury__version_store__new_cyclic_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_S_22,
  MR_Word F_5,
  MR_Word * Mutvar_6,
  MR_Word STATE_VARIABLE_VS_0_13,
  MR_Word * STATE_VARIABLE_VS_14)
{
  MR_bool succeeded;
  MR_Word CounterMutvar_8 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
  MR_Word Counter0_9;
  MR_Integer I_10;
  MR_Word Counter_11;
  MR_Integer Size0_12;
  MR_Word STATE_VARIABLE_VS_17_17;
  MR_Word STATE_VARIABLE_VS_19_19;
  MR_Box Var_20;
  MR_Integer I_25 = (MR_Integer) (CounterMutvar_8);
  MR_Box VA_26 = (MR_Box) (STATE_VARIABLE_VS_0_13);
  MR_Word UnivValue_27;
  MR_Integer Var_29;
  MR_Box VA_31;
  MR_Integer I_39;
  MR_Box VA0_40;
  MR_Box VA_41;
  MR_Word Var_42;
  MR_Integer I_44;
  MR_Box VA0_45;
  MR_Box VA_46;
  MR_Word Var_47;
  MR_Box conv0_UnivValue_27;
  MR_Box conv1_Counter0_9;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);

  conv0_UnivValue_27 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_26, I_25);
  UnivValue_27 = ((MR_Word) (conv0_UnivValue_27));
  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), UnivValue_27, &conv1_Counter0_9);
  Counter0_9 = ((MR_Word) (conv1_Counter0_9));
  I_10 = (MR_Integer) (Counter0_9);
  Var_29 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
  Counter_11 = (MR_Word) (Var_29);
  *Mutvar_6 = (MR_Word) (I_10);
  VA_31 = (MR_Box) (STATE_VARIABLE_VS_0_13);
{
#define MR_PROC_LABEL mercury__version_store__new_cyclic_mutvar_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_31 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Size0_12  = N;
}
  succeeded = (I_10 >= Size0_12);
  if (succeeded)
  {
    MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Size0_12 + (MR_Unsigned) Size0_12);
    MR_Box VA0_33 = (MR_Box) (STATE_VARIABLE_VS_0_13);
    MR_Box VA_34;
    MR_Word Var_35;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) ((MR_Integer) 0)), &Var_35);
{
#define MR_PROC_LABEL mercury__version_store__new_cyclic_mutvar_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA0_33 ;
	N = Var_16 ;
	X = (MR_Word) ((MR_Box) (Var_35)) ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	VA_34  = (MR_Box) VA;
}
    STATE_VARIABLE_VS_17_17 = (MR_Word) (VA_34);
  }
  else
    STATE_VARIABLE_VS_17_17 = STATE_VARIABLE_VS_0_13;
  I_39 = (MR_Integer) (CounterMutvar_8);
  VA0_40 = (MR_Box) (STATE_VARIABLE_VS_17_17);
  mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Counter_11)), &Var_42);
  mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_39, ((MR_Box) (Var_42)), VA0_40, &VA_41);
  STATE_VARIABLE_VS_19_19 = (MR_Word) (VA_41);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
  Var_20 = func_2(((MR_Box) (F_5)), ((MR_Box) (*Mutvar_6)));
  I_44 = (MR_Integer) (*Mutvar_6);
  VA0_45 = (MR_Box) (STATE_VARIABLE_VS_19_19);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_21, Var_20, &Var_47);
  mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_44, ((MR_Box) (Var_47)), VA0_45, &VA_46);
  *STATE_VARIABLE_VS_14 = (MR_Word) (VA_46);
}

void MR_CALL 
mercury__version_store__new_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_S_17,
  MR_Box X_5,
  MR_Word * Mutvar_6,
  MR_Word STATE_VARIABLE_VS_0_9,
  MR_Word * STATE_VARIABLE_VS_10)
{
  MR_bool succeeded;
  MR_Word CounterMutvar_18 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
  MR_Word Counter0_19;
  MR_Integer I_20;
  MR_Word Counter_21;
  MR_Integer Size0_22;
  MR_Word STATE_VARIABLE_VS_17_25;
  MR_Integer I_31 = (MR_Integer) (CounterMutvar_18);
  MR_Box VA_32 = (MR_Box) (STATE_VARIABLE_VS_0_9);
  MR_Word UnivValue_33;
  MR_Integer Var_35;
  MR_Box VA_37;
  MR_Integer I_45;
  MR_Box VA0_46;
  MR_Word Var_48;
  MR_Integer I_50;
  MR_Box VA0_51;
  MR_Box VA_52;
  MR_Word Var_53;
  MR_Box conv0_UnivValue_33;
  MR_Box conv1_Counter0_19;

  conv0_UnivValue_33 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_32, I_31);
  UnivValue_33 = ((MR_Word) (conv0_UnivValue_33));
  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), UnivValue_33, &conv1_Counter0_19);
  Counter0_19 = ((MR_Word) (conv1_Counter0_19));
  I_20 = (MR_Integer) (Counter0_19);
  Var_35 = (MR_Integer) ((MR_Unsigned) I_20 + (MR_Unsigned) 1);
  Counter_21 = (MR_Word) (Var_35);
  *Mutvar_6 = (MR_Word) (I_20);
  VA_37 = (MR_Box) (STATE_VARIABLE_VS_0_9);
{
#define MR_PROC_LABEL mercury__version_store__new_mutvar_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)VA_37 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Size0_22  = N;
}
  succeeded = (I_20 >= Size0_22);
  if (succeeded)
  {
    MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Size0_22 + (MR_Unsigned) Size0_22);
    MR_Box VA0_39 = (MR_Box) (STATE_VARIABLE_VS_0_9);
    MR_Box VA_40;
    MR_Word Var_41;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) ((MR_Integer) 0)), &Var_41);
{
#define MR_PROC_LABEL mercury__version_store__new_mutvar_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	VA0 = (struct ML_va *)VA0_39 ;
	N = Var_24 ;
	X = (MR_Word) ((MR_Box) (Var_41)) ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	VA_40  = (MR_Box) VA;
}
    STATE_VARIABLE_VS_17_25 = (MR_Word) (VA_40);
  }
  else
    STATE_VARIABLE_VS_17_25 = STATE_VARIABLE_VS_0_9;
  I_45 = (MR_Integer) (CounterMutvar_18);
  VA0_46 = (MR_Box) (STATE_VARIABLE_VS_17_25);
  mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Counter_21)), &Var_48);
  mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_45, ((MR_Box) (Var_48)), VA0_46, &VA0_51);
  I_50 = (MR_Integer) (*Mutvar_6);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, X_5, &Var_53);
  mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_50, ((MR_Box) (Var_53)), VA0_51, &VA_52);
  *STATE_VARIABLE_VS_10 = (MR_Word) (VA_52);
}

MR_Word MR_CALL 
mercury__version_store__init_0_f_0(
  MR_Word * ExistQTypeInfo_for_S_12)
{
  MR_Word ExistQHeadVar__1_11;
  MR_Word HeadVar__1_1;
  MR_Box VA_2;
  MR_Word Var_6;

  mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (((MR_Box) ((MR_Integer) 1)))), &Var_6);
  VA_2 = mercury__version_array__init_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Integer) 256, ((MR_Box) (Var_6)));
  HeadVar__1_1 = (MR_Word) (VA_2);
  ExistQHeadVar__1_11 = HeadVar__1_1;
  *ExistQTypeInfo_for_S_12 = (MR_Word) (&mercury__version_store__version_store__type_ctor_info_some_version_store_type_0);
  return ExistQHeadVar__1_11;
}

static MR_bool MR_CALL 
mercury__version_store____Unify____mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__version_store____Unify____mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__version_store____Compare____mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__version_store____Compare____mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__version_store____Unify____some_version_store_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__version_store____Unify____some_version_store_type_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__version_store____Compare____some_version_store_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__version_store____Compare____some_version_store_type_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__version_store____Unify____version_store_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__version_store____Compare____version_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__version_store____Compare____version_store_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__version_store__init(void)
{
}

void mercury__version_store__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__version_store__version_store__type_ctor_info_mutvar_2);
	MR_register_type_ctor_info(&mercury__version_store__version_store__type_ctor_info_some_version_store_type_0);
	MR_register_type_ctor_info(&mercury__version_store__version_store__type_ctor_info_version_store_1);
}

void mercury__version_store__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__version_store__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module version_store.
