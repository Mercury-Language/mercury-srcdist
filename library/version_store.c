/*
** Automatically generated from `version_store.m'
** by the Mercury compiler,
** version rotd-2019-10-08
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




static const MR_Integer mercury__version_store__version_store__functor_number_map_mutvar_2[1];

static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_mutvar_2;

static const MR_EnumFunctorDesc mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0;

static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_value_ordered_some_version_store_type_0[1];

static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0[1];

static const MR_Integer mercury__version_store__version_store__functor_number_map_some_version_store_type_0[1];

static const MR_Integer mercury__version_store__version_store__functor_number_map_version_store_1[1];

static const MR_FA_TypeInfo_Struct1 mercury__version_store__version_array__ti_version_array_1univ__type_ctor_info_univ_0;

static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_version_store_1;

static MR_Integer MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_store____Unify____mutvar_2_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____mutvar_2_0_10001)),
  (MR_String) "version_store",
  (MR_String) "mutvar",
  {     &mercury__version_store__version_store__notag_functor_desc_mutvar_2 },
  {     &mercury__version_store__version_store__notag_functor_desc_mutvar_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__version_store__version_store__functor_number_map_mutvar_2
};

static const MR_EnumFunctorDesc mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0 = {
  (MR_String) "some_version_store_type",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_value_ordered_some_version_store_type_0[1] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__version_store____Unify____some_version_store_type_0_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____some_version_store_type_0_0_10001)),
  (MR_String) "version_store",
  (MR_String) "some_version_store_type",
  {     mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0 },
  {     mercury__version_store__version_store__enum_value_ordered_some_version_store_type_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__version_store__version_store__functor_number_map_some_version_store_type_0
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_store____Unify____version_store_1_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____version_store_1_0_10001)),
  (MR_String) "version_store",
  (MR_String) "version_store",
  {     &mercury__version_store__version_store__notag_functor_desc_version_store_1 },
  {     &mercury__version_store__version_store__notag_functor_desc_version_store_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__version_store__version_store__functor_number_map_version_store_1
};

static MR_Integer MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__version_store____Compare____version_store_1_0(
  MR_Word TypeInfo_for_S_8,
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

      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__version_store_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0(
  MR_Word TypeInfo_for_S_7,
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

      succeeded = mercury__version_array____Unify____version_array_1_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
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
mercury__version_store____Unify____mutvar_2_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_S_8,
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

MR_Word MR_CALL 
mercury__version_store__resize_2_f_0(
  MR_Word TypeInfo_for_S_9,
  MR_Word HeadVar__1_1,
  MR_Integer N_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box VA_4 = (MR_Box) (HeadVar__1_1);
    MR_Box Var_6;
    MR_Word Var_7;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) ((MR_Integer) 0)), &Var_7);
{
#define MR_PROC_LABEL mercury__version_store__resize_2_f_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_4 , VA0);
	N =  N_5 ;
	X = (MR_Word) ((MR_Box) (Var_7)) ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, Var_6 );
}
    HeadVar__3_3 = (MR_Word) (Var_6);
    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__version_store__size_1_f_0(
  MR_Word TypeInfo_for_S_4,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Box VA_3 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__version_store__size_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_3 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 HeadVar__2_2  = N;
}
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__version_store__unsafe_rewind_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word VS_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Box VA_5 = (MR_Box) (VS_3);
    MR_Box Var_6;

{
#define MR_PROC_LABEL mercury__version_store__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_5 , VA0);
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, Var_6 );
}
    *HeadVar__2_2 = (MR_Word) (Var_6);
  }
}

MR_Word MR_CALL 
mercury__version_store__unsafe_rewind_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Box VA_3 = (MR_Box) (HeadVar__1_1);
    MR_Box Var_4;

{
#define MR_PROC_LABEL mercury__version_store__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_3 , VA0);
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, Var_4 );
}
    HeadVar__2_2 = (MR_Word) (Var_4);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__version_store__set_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_S_9,
  MR_Word Mutvar_5,
  MR_Box X_6,
  MR_Word VS_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Box VA_11 = (MR_Box) (VS_7);
    MR_Integer I_12 = (MR_Integer) (Mutvar_5);
    MR_Box Var_13;
    MR_Word Var_14;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_8, X_6, &Var_14);
    mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_12, ((MR_Box) (Var_14)), VA_11, &Var_13);
    *HeadVar__4_4 = (MR_Word) (Var_13);
  }
}

MR_Word MR_CALL 
mercury__version_store__set_3_f_0(
  MR_Word TypeInfo_for_S_8,
  MR_Word TypeInfo_for_T_9,
  MR_Word VS_5,
  MR_Word Mutvar_6,
  MR_Box X_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Box VA_11 = (MR_Box) (VS_5);
    MR_Integer I_12 = (MR_Integer) (Mutvar_6);
    MR_Box Var_13;
    MR_Word Var_14;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_9, X_7, &Var_14);
    mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_12, ((MR_Box) (Var_14)), VA_11, &Var_13);
    HeadVar__4_4 = (MR_Word) (Var_13);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__version_store__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_S_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box X_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Box VA_5 = (MR_Box) (HeadVar__2_2);
    MR_Integer I_6 = (MR_Integer) (HeadVar__1_1);
    MR_Box Var_8;
    MR_Word Var_9;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_7, &Var_9);
    mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_6, ((MR_Box) (Var_9)), VA_5, &Var_8);
    HeadVar__4_4 = (MR_Word) (Var_8);
    return HeadVar__4_4;
  }
}

void MR_CALL 
mercury__version_store__get_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_S_8,
  MR_Word Mutvar_5,
  MR_Box * HeadVar__2_2,
  MR_Word VS_6,
  MR_Word * VS_4)
{
  {
    MR_Box VA_10 = (MR_Box) (VS_6);
    MR_Integer I_11 = (MR_Integer) (Mutvar_5);
    MR_Word UnivX_12;
    MR_Box conv0_UnivX_12;

    conv0_UnivX_12 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_10, I_11);
    UnivX_12 = ((MR_Word) (conv0_UnivX_12));
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_7, UnivX_12, HeadVar__2_2);
    *VS_4 = VS_6;
  }
}

MR_Box MR_CALL 
mercury__version_store__lookup_2_f_0(
  MR_Word TypeInfo_for_S_6,
  MR_Word TypeInfo_for_T_7,
  MR_Word VS_4,
  MR_Word Mutvar_5)
{
  {
    MR_Box HeadVar__3_3;
    MR_Box VA_9 = (MR_Box) (VS_4);
    MR_Integer I_10 = (MR_Integer) (Mutvar_5);
    MR_Word UnivX_11;
    MR_Box conv0_UnivX_11;

    conv0_UnivX_11 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_9, I_10);
    UnivX_11 = ((MR_Word) (conv0_UnivX_11));
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_7, UnivX_11, &HeadVar__3_3);
    return HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__version_store__elem_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_S_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Box X_6;
    MR_Box VA_4 = (MR_Box) (HeadVar__2_2);
    MR_Integer I_5 = (MR_Integer) (HeadVar__1_1);
    MR_Word UnivX_7;
    MR_Box conv0_UnivX_7;

    conv0_UnivX_7 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_4, I_5);
    UnivX_7 = ((MR_Word) (conv0_UnivX_7));
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_8, UnivX_7, &X_6);
    return X_6;
  }
}

void MR_CALL 
mercury__version_store__copy_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_S_11,
  MR_Word Mutvar0_5,
  MR_Word * Mutvar_6,
  MR_Word VS0_7,
  MR_Word * VS_8)
{
  {
    MR_Box X_9;
    MR_Box VA_13 = (MR_Box) (VS0_7);
    MR_Integer I_14 = (MR_Integer) (Mutvar0_5);
    MR_Word UnivX_15;
    MR_Box conv0_UnivX_15;

    conv0_UnivX_15 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_13, I_14);
    UnivX_15 = ((MR_Word) (conv0_UnivX_15));
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_10, UnivX_15, &X_9);
    mercury__version_store__new_mutvar_4_p_0(TypeInfo_for_T_10, TypeInfo_for_S_11, X_9, Mutvar_6, VS0_7, VS_8);
  }
}

void MR_CALL 
mercury__version_store__new_cyclic_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_S_23,
  MR_Word F_5,
  MR_Word * Mutvar_6,
  MR_Word VS0_7,
  MR_Word * VS_8)
{
  {
    MR_bool succeeded;
    MR_Word Counter0_9;
    MR_Integer I_10;
    MR_Word Counter_11;
    MR_Integer Size0_12;
    MR_Word VS1_13;
    MR_Word Var_18;
    MR_Box Var_19;
    MR_Box VA_26 = (MR_Box) (VS0_7);
    MR_Word UnivX_28;
    MR_Integer V_5_31;
    MR_Box VA_33;
    MR_Box VA_45;
    MR_Box Var_47;
    MR_Word Var_48;
    MR_Box VA_57;
    MR_Integer I_58;
    MR_Box Var_59;
    MR_Word Var_60;
    MR_Box conv0_UnivX_28;
    MR_Box conv1_Counter0_9;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);

    conv0_UnivX_28 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_26, (MR_Integer) 0);
    UnivX_28 = ((MR_Word) (conv0_UnivX_28));
    mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), UnivX_28, &conv1_Counter0_9);
    Counter0_9 = ((MR_Word) (conv1_Counter0_9));
    I_10 = (MR_Integer) (Counter0_9);
    V_5_31 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
    Counter_11 = (MR_Word) (V_5_31);
    *Mutvar_6 = (MR_Word) (I_10);
    VA_33 = (MR_Box) (VS0_7);
{
#define MR_PROC_LABEL mercury__version_store__new_cyclic_mutvar_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_33 , VA);
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
      MR_Box VA_36 = (MR_Box) (VS0_7);
      MR_Box Var_37;
      MR_Word Var_38;

      mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) ((MR_Integer) 0)), &Var_38);
{
#define MR_PROC_LABEL mercury__version_store__new_cyclic_mutvar_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_36 , VA0);
	N =  Var_16 ;
	X = (MR_Word) ((MR_Box) (Var_38)) ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, Var_37 );
}
      VS1_13 = (MR_Word) (Var_37);
    }
    else
      VS1_13 = VS0_7;
    VA_45 = (MR_Box) (VS1_13);
    mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Counter_11)), &Var_48);
    mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Integer) ((MR_Word) (((MR_Box) ((MR_Integer) 0)))), ((MR_Box) (Var_48)), VA_45, &Var_47);
    Var_18 = (MR_Word) (Var_47);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
    Var_19 = func_2(((MR_Box) (F_5)), ((MR_Box) (*Mutvar_6)));
    I_58 = (MR_Integer) (*Mutvar_6);
    VA_57 = (MR_Box) (Var_18);
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_22, Var_19, &Var_60);
    mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_58, ((MR_Box) (Var_60)), VA_57, &Var_59);
    *VS_8 = (MR_Word) (Var_59);
  }
}

void MR_CALL 
mercury__version_store__new_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_S_16,
  MR_Box X_5,
  MR_Word * Mutvar_6,
  MR_Word VS0_7,
  MR_Word * VS_8)
{
  {
    MR_bool succeeded;
    MR_Word Counter0_21;
    MR_Integer I_22;
    MR_Word Counter_23;
    MR_Integer Size0_24;
    MR_Word VS1_25;
    MR_Box VA_36 = (MR_Box) (VS0_7);
    MR_Word UnivX_38;
    MR_Integer V_5_41;
    MR_Box VA_43;
    MR_Box VA_55;
    MR_Word Var_58;
    MR_Box VA_78;
    MR_Integer I_79;
    MR_Box Var_80;
    MR_Word Var_81;
    MR_Box conv0_UnivX_38;
    MR_Box conv1_Counter0_21;

    conv0_UnivX_38 = mercury__version_array__lookup_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), VA_36, (MR_Integer) 0);
    UnivX_38 = ((MR_Word) (conv0_UnivX_38));
    mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), UnivX_38, &conv1_Counter0_21);
    Counter0_21 = ((MR_Word) (conv1_Counter0_21));
    I_22 = (MR_Integer) (Counter0_21);
    V_5_41 = (MR_Integer) ((MR_Unsigned) I_22 + (MR_Unsigned) 1);
    Counter_23 = (MR_Word) (V_5_41);
    *Mutvar_6 = (MR_Word) (I_22);
    VA_43 = (MR_Box) (VS0_7);
{
#define MR_PROC_LABEL mercury__version_store__new_mutvar_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_43 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 Size0_24  = N;
}
    succeeded = (I_22 >= Size0_24);
    if (succeeded)
    {
      MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) Size0_24 + (MR_Unsigned) Size0_24);
      MR_Box VA_46 = (MR_Box) (VS0_7);
      MR_Box Var_47;
      MR_Word Var_48;

      mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ((MR_Box) ((MR_Integer) 0)), &Var_48);
{
#define MR_PROC_LABEL mercury__version_store__new_mutvar_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VA_46 , VA0);
	N =  Var_28 ;
	X = (MR_Word) ((MR_Box) (Var_48)) ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, Var_47 );
}
      VS1_25 = (MR_Word) (Var_47);
    }
    else
      VS1_25 = VS0_7;
    VA_55 = (MR_Box) (VS1_25);
    mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Counter_23)), &Var_58);
    mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Integer) ((MR_Word) (((MR_Box) ((MR_Integer) 0)))), ((MR_Box) (Var_58)), VA_55, &VA_78);
    I_79 = (MR_Integer) (*Mutvar_6);
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_15, X_5, &Var_81);
    mercury__version_array__set_4_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), I_79, ((MR_Box) (Var_81)), VA_78, &Var_80);
    *VS_8 = (MR_Word) (Var_80);
  }
}

MR_Word MR_CALL 
mercury__version_store__init_0_f_0(
  MR_Word * ExistQTypeInfo_for_S_12)
{
  {
    MR_Word ExistQHeadVar__1_11;
    MR_Word HeadVar__1_1;
    MR_Box VA_2;
    MR_Word Var_4;

    mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (((MR_Box) ((MR_Integer) 1)))), &Var_4);
    VA_2 = mercury__version_array__init_2_f_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Integer) 256, ((MR_Box) (Var_4)));
    HeadVar__1_1 = (MR_Word) (VA_2);
    ExistQHeadVar__1_11 = HeadVar__1_1;
    *ExistQTypeInfo_for_S_12 = (MR_Word) (&mercury__version_store__version_store__type_ctor_info_some_version_store_type_0);
    return ExistQHeadVar__1_11;
  }
}

static MR_bool MR_CALL 
mercury__version_store____Unify____mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_store____Unify____mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__version_store____Compare____mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__version_store____Compare____mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_store____Unify____some_version_store_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_store____Unify____some_version_store_type_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__version_store____Compare____some_version_store_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__version_store____Compare____some_version_store_type_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__version_store____Unify____version_store_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__version_store____Compare____version_store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__version_store____Compare____version_store_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
