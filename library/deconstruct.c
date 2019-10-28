/*
** Automatically generated from `deconstruct.m'
** by the Mercury compiler,
** version rotd-2019-10-28
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


// :- module deconstruct.
// :- implementation.

/*
INIT mercury__deconstruct__init
ENDINIT
*/

#include "deconstruct.mih"


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




static const MR_PseudoTypeInfo mercury__deconstruct__deconstruct__field_types_maybe_arg_0_0[1];

static const MR_DuExistLocn mercury__deconstruct__deconstruct__exist_locns_maybe_arg_0_0[1];

static const MR_DuExistInfo mercury__deconstruct__deconstruct__exist_info_maybe_arg_0_0;

static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0;

static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1;

static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_0[1];

static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_1[1];

static const MR_DuPtagLayout mercury__deconstruct__deconstruct__du_ptag_ordered_maybe_arg_0[2];

static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_name_ordered_maybe_arg_0[2];

static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_maybe_arg_0[2];

static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0;

static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1;

static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2;

static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_value_ordered_noncanon_handling_0[3];

static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_name_ordered_noncanon_handling_0[3];

static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_noncanon_handling_0[3];

static MR_Integer MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_can_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_dna_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
mercury__deconstruct__deconstruct_idcc_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
mercury__deconstruct__deconstruct_can_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__deconstruct__deconstruct_dna_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_can_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_dna_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_can_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_dna_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__deconstruct__functor_idcc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3);

static void MR_CALL 
mercury__deconstruct__functor_can_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3);

static void MR_CALL 
mercury__deconstruct__functor_dna_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__deconstruct____Unify____maybe_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__deconstruct____Compare____maybe_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__deconstruct____Unify____noncanon_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__deconstruct____Compare____noncanon_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__deconstruct_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__deconstruct_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__deconstruct_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__deconstruct_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__deconstruct_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__deconstruct_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__deconstruct_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__deconstruct_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__deconstruct_scalar_common_2[0])),
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
#include "deconstruct.mh"
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



static const MR_PseudoTypeInfo mercury__deconstruct__deconstruct__field_types_maybe_arg_0_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 513)
};

static const MR_DuExistLocn mercury__deconstruct__deconstruct__exist_locns_maybe_arg_0_0[1] = {
  {
    INT16_C(0),
    INT16_C(-1)
  }
};

static const MR_DuExistInfo mercury__deconstruct__deconstruct__exist_info_maybe_arg_0_0 = {
  INT16_C(1),
  INT16_C(0),
  INT16_C(0),
  mercury__deconstruct__deconstruct__exist_locns_maybe_arg_0_0,
  NULL
};

static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0 = {
  (MR_String) "arg",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__deconstruct__deconstruct__field_types_maybe_arg_0_0,
  NULL,
  NULL,
  &mercury__deconstruct__deconstruct__exist_info_maybe_arg_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1 = {
  (MR_String) "no_arg",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_0[1] = {
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1
};

static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_1[1] = {
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0
};

static const MR_DuPtagLayout mercury__deconstruct__deconstruct__du_ptag_ordered_maybe_arg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__deconstruct__deconstruct__du_stag_ordered_maybe_arg_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__deconstruct__deconstruct__du_name_ordered_maybe_arg_0[2] = {
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_0,
  &mercury__deconstruct__deconstruct__du_functor_desc_maybe_arg_0_1
};

static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_maybe_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__deconstruct__deconstruct__type_ctor_info_maybe_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__deconstruct____Unify____maybe_arg_0_0_10001)),
  ((MR_Box) (mercury__deconstruct____Compare____maybe_arg_0_0_10001)),
  (MR_String) "deconstruct",
  (MR_String) "maybe_arg",
  {     mercury__deconstruct__deconstruct__du_name_ordered_maybe_arg_0 },
  {     mercury__deconstruct__deconstruct__du_ptag_ordered_maybe_arg_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__deconstruct__deconstruct__functor_number_map_maybe_arg_0
};

static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0 = {
  (MR_String) "do_not_allow",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1 = {
  (MR_String) "canonicalize",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2 = {
  (MR_String) "include_details_cc",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_value_ordered_noncanon_handling_0[3] = {
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2
};

static const MR_EnumFunctorDescPtr mercury__deconstruct__deconstruct__enum_name_ordered_noncanon_handling_0[3] = {
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_1,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_0,
  &mercury__deconstruct__deconstruct__enum_functor_desc_noncanon_handling_0_2
};

static const MR_Integer mercury__deconstruct__deconstruct__functor_number_map_noncanon_handling_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__deconstruct__deconstruct__type_ctor_info_noncanon_handling_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__deconstruct____Unify____noncanon_handling_0_0_10001)),
  ((MR_Box) (mercury__deconstruct____Compare____noncanon_handling_0_0_10001)),
  (MR_String) "deconstruct",
  (MR_String) "noncanon_handling",
  {     mercury__deconstruct__deconstruct__enum_name_ordered_noncanon_handling_0 },
  {     mercury__deconstruct__deconstruct__enum_value_ordered_noncanon_handling_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__deconstruct__deconstruct__functor_number_map_noncanon_handling_0
};

static MR_Integer MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__deconstruct____Compare____noncanon_handling_0_0(
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
mercury__deconstruct____Unify____noncanon_handling_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__deconstruct____Compare____maybe_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word TypeInfo_12_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box Var_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word TypeInfo_13_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));

        mercury__private_builtin__typed_compare_3_p_0(TypeInfo_12_15, TypeInfo_13_13, HeadVar__1_1, Var_14, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__deconstruct____Unify____maybe_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeInfo_10_10;
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeInfo_10_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_9_9, TypeInfo_10_10, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__deconstruct__limited_deconstruct_idcc_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) HeadVar__1_1 ;
	MaxArity =  HeadVar__2_2 ;
		{
{
    #define EXPAND_INFO_TYPE    MR_ExpandFunctorArgsLimitInfo
    #define EXPAND_INFO_CALL    MR_expand_functor_args_limit
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define MAX_ARITY_ARG       MaxArity
    #define FUNCTOR_ARG         Functor
    #define ARITY_ARG           Arity
    #define ARGUMENTS_ARG       Arguments
    #define NONCANON            MR_NONCANON_CC
    // This comment tells the compiler to define MR_ALLOC_ID.
    #include "mercury_ml_deconstruct_body.h"
    #undef  EXPAND_INFO_TYPE
    #undef  EXPAND_INFO_CALL
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  MAX_ARITY_ARG
    #undef  FUNCTOR_ARG
    #undef  ARITY_ARG
    #undef  ARGUMENTS_ARG
    #undef  NONCANON

    if (!success) {
        // Fill in some dummy values, to ensure that we don't try to return
        // uninitialized memory to Mercury. It doesn't matter what we put here,
        // except that we must have Arity > MaxArity. The casts cast away
        // const.

        Arity = MaxArity + 1;
        Functor = (MR_String) (MR_Integer) "";
        Arguments = MR_list_empty();
    }
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = Functor;
	 *HeadVar__4_4  = Arity;
	 *HeadVar__5_5  = Arguments;
}
  }
}

static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_can_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_can_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) HeadVar__1_1 ;
	MaxArity =  HeadVar__2_2 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsLimitInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__3_3  = Functor;
	 *HeadVar__4_4  = Arity;
	 *HeadVar__5_5  = Arguments;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_dna_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_dna_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) HeadVar__1_1 ;
	MaxArity =  HeadVar__2_2 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsLimitInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__3_3  = Functor;
	 *HeadVar__4_4  = Arity;
	 *HeadVar__5_5  = Arguments;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static void MR_CALL 
mercury__deconstruct__deconstruct_idcc_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_12 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Functor;
	 *HeadVar__3_3  = FunctorNumber;
	 *HeadVar__4_4  = Arity;
	 *HeadVar__5_5  = Arguments;
}
  }
}

static void MR_CALL 
mercury__deconstruct__deconstruct_can_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_can_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_11 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Functor;
	 *HeadVar__3_3  = Arity;
	 *HeadVar__4_4  = Arguments;
}
  }
}

static void MR_CALL 
mercury__deconstruct__deconstruct_dna_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_dna_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_12 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Functor;
	 *HeadVar__3_3  = FunctorNumber;
	 *HeadVar__4_4  = Arity;
	 *HeadVar__5_5  = Arguments;
}
  }
}

void MR_CALL 
mercury__deconstruct__univ_named_arg_idcc_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer * HeadVar__5_5)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__univ_named_arg_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Name =  HeadVar__2_2 ;
	DummyUniv =  HeadVar__3_3 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__4_4  = Argument;
	 *HeadVar__5_5  = Success;
}
  }
}

static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_can_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__univ_named_arg_can_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Name =  HeadVar__2_2 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__3_3  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__deconstruct__univ_named_arg_dna_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__univ_named_arg_dna_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Name =  HeadVar__2_2 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__3_3  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__deconstruct__univ_arg_idcc_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer * HeadVar__5_5)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__univ_arg_idcc_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_17 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Index =  HeadVar__2_2 ;
	DummyUniv =  HeadVar__3_3 ;
		{
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__4_4  = Argument;
	 *HeadVar__5_5  = Success;
}
  }
}

static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_can_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__univ_arg_can_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_12 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Index =  HeadVar__2_2 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__3_3  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__deconstruct__univ_arg_dna_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__univ_arg_dna_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_12 ;
	Term = (MR_Word) HeadVar__1_1 ;
	Index =  HeadVar__2_2 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__3_3  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_2_5_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1(TypeInfo_for_T_22, Term_6, FunctorNumber_8, Arity_9, Arguments_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_2_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0(TypeInfo_for_T_22, Term_6, FunctorNumber_8, Arity_9, Arguments_10);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__deconstruct__dummy_univ_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &HeadVar__1_1);
    return HeadVar__1_1;
  }
}

static void MR_CALL 
mercury__deconstruct__functor_idcc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__functor_idcc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_10 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Functor;
	 *HeadVar__3_3  = Arity;
}
  }
}

static void MR_CALL 
mercury__deconstruct__functor_can_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__functor_can_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_10 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Functor;
	 *HeadVar__3_3  = Arity;
}
  }
}

static void MR_CALL 
mercury__deconstruct__functor_dna_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__functor_dna_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_10 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = Functor;
	 *HeadVar__3_3  = Arity;
}
  }
}

void MR_CALL 
mercury__deconstruct__limited_deconstruct_cc_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4,
  MR_Integer MaxArity_5,
  MR_Word * MaybeResult_6)
{
  {
    MR_bool succeeded;
    MR_String Functor_7;
    MR_Integer Arity_8;
    MR_Word Arguments_9;

{
#define MR_PROC_LABEL mercury__deconstruct__limited_deconstruct_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_11 ;
	Term = (MR_Word) Term_4 ;
	MaxArity =  MaxArity_5 ;
		{
{
    #define EXPAND_INFO_TYPE    MR_ExpandFunctorArgsLimitInfo
    #define EXPAND_INFO_CALL    MR_expand_functor_args_limit
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define MAX_ARITY_ARG       MaxArity
    #define FUNCTOR_ARG         Functor
    #define ARITY_ARG           Arity
    #define ARGUMENTS_ARG       Arguments
    #define NONCANON            MR_NONCANON_CC
    // This comment tells the compiler to define MR_ALLOC_ID.
    #include "mercury_ml_deconstruct_body.h"
    #undef  EXPAND_INFO_TYPE
    #undef  EXPAND_INFO_CALL
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  MAX_ARITY_ARG
    #undef  FUNCTOR_ARG
    #undef  ARITY_ARG
    #undef  ARGUMENTS_ARG
    #undef  NONCANON

    if (!success) {
        // Fill in some dummy values, to ensure that we don't try to return
        // uninitialized memory to Mercury. It doesn't matter what we put here,
        // except that we must have Arity > MaxArity. The casts cast away
        // const.

        Arity = MaxArity + 1;
        Functor = (MR_String) (MR_Integer) "";
        Arguments = MR_list_empty();
    }
}

		;}
#undef MR_PROC_LABEL
	 Functor_7  = Functor;
	 Arity_8  = Arity;
	 Arguments_9  = Arguments;
}
    succeeded = (Arity_8 <= MaxArity_5);
    if (succeeded)
    {
      MR_Tuple Var_10;

      {
        Var_10 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Functor_7));
        MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Arity_8));
        MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Arguments_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeResult_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
      }
    }
    else
      *MaybeResult_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Box Term_7,
  MR_Word NonCanon_8,
  MR_Integer MaxArity_9,
  MR_String * Functor_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(TypeInfo_for_T_15, Term_7, MaxArity_9, Functor_10, Arity_11, Arguments_12);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Box Term_7,
  MR_Integer MaxArity_9,
  MR_String * Functor_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_15 ;
	Term = (MR_Word) Term_7 ;
	MaxArity =  MaxArity_9 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsLimitInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Functor_10  = Functor;
	 *Arity_11  = Arity;
	 *Arguments_12  = Arguments;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__limited_deconstruct_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box Term_7,
  MR_Word NonCanon_8,
  MR_Integer MaxArity_9,
  MR_String * Functor_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0(TypeInfo_for_T_15, Term_7, MaxArity_9, Functor_10, Arity_11, Arguments_12);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box Term_7,
  MR_Integer MaxArity_9,
  MR_String * Functor_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer MaxArity;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_15 ;
	Term = (MR_Word) Term_7 ;
	MaxArity =  MaxArity_9 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsLimitInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Functor_10  = Functor;
	 *Arity_11  = Arity;
	 *Arguments_12  = Arguments;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_5_p_2(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_5_p_2

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__erlang_rtti_implementation__deconstruct_du_5_p_2(TypeInfo_for_T_11, Term_6, NonCanon_7, FunctorNumber_8, Arity_9, Arguments_10);
    else
      succeeded = mercury__deconstruct__deconstruct_du_2_5_p_2(TypeInfo_for_T_11, Term_6, NonCanon_7, FunctorNumber_8, Arity_9, Arguments_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_2_5_p_2(
  MR_Word TypeInfo_for_T_22,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Integer Var_11;
    MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_22 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 Var_14  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  Var_14 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_11  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      switch (NonCanon_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__require__unexpected_3_p_0((MR_String) "deconstruct", (MR_String) "deconstruct_du", (MR_String) "canonicalize not supported");
          break;
        case (MR_Integer) 0:
          {
            MR_String Var_12;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_22 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 Var_12  = Functor;
	 *FunctorNumber_8  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_13;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_2_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_22 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 Var_13  = Functor;
	 *FunctorNumber_8  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
          }
          break;
      }
      Var_18 = (MR_Integer) 0;
      succeeded = (*FunctorNumber_8 >= Var_18);
      if (!(succeeded))
        mercury__require__unexpected_3_p_0((MR_String) "deconstruct", (MR_String) "deconstruct_du", (MR_String) "internal error (recompile needed\?)");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_5_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_5_p_1

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__erlang_rtti_implementation__deconstruct_du_5_p_1(TypeInfo_for_T_11, Term_6, NonCanon_7, FunctorNumber_8, Arity_9, Arguments_10);
    else
      succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1(TypeInfo_for_T_11, Term_6, FunctorNumber_8, Arity_9, Arguments_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Box Term_6,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Integer Var_11;
    MR_String Var_13;
    MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_22 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 Var_14  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  Var_14 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_11  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_22 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 Var_13  = Functor;
	 *FunctorNumber_8  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
      Var_18 = (MR_Integer) 0;
      succeeded = (*FunctorNumber_8 >= Var_18);
      if (!(succeeded))
        mercury__require__unexpected_3_p_0((MR_String) "deconstruct", (MR_String) "deconstruct_du", (MR_String) "internal error (recompile needed\?)");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__deconstruct_du_5_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_du_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__erlang_rtti_implementation__deconstruct_du_5_p_0(TypeInfo_for_T_11, Term_6, NonCanon_7, FunctorNumber_8, Arity_9, Arguments_10);
    else
      succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0(TypeInfo_for_T_11, Term_6, FunctorNumber_8, Arity_9, Arguments_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Box Term_6,
  MR_Integer * FunctorNumber_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Integer Var_11;
    MR_String Var_12;
    MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_22 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 Var_14  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  Var_14 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_11  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_22 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 Var_12  = Functor;
	 *FunctorNumber_8  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
      Var_18 = (MR_Integer) 0;
      succeeded = (*FunctorNumber_8 >= Var_18);
      if (!(succeeded))
        mercury__require__unexpected_3_p_0((MR_String) "deconstruct", (MR_String) "deconstruct_du", (MR_String) "internal error (recompile needed\?)");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__deconstruct__deconstruct_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  switch (NonCanon_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_5_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_8  = Functor;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_5_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_8  = Functor;
	 Var_11  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__deconstruct__deconstruct_5_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_8  = Functor;
	 Var_12  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
      }
      break;
  }
}

void MR_CALL 
mercury__deconstruct__deconstruct_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_p_2(TypeInfo_for_T_13, Term_6, Functor_8, Arity_9, Arguments_10);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_6,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_8  = Functor;
	 Var_12  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
  }
}

void MR_CALL 
mercury__deconstruct__deconstruct_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_p_1(TypeInfo_for_T_13, Term_6, Functor_8, Arity_9, Arguments_10);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_6,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_8  = Functor;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
  }
}

void MR_CALL 
mercury__deconstruct__deconstruct_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_6,
  MR_Word NonCanon_7,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_p_0(TypeInfo_for_T_13, Term_6, Functor_8, Arity_9, Arguments_10);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_6,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * Arguments_10)
{
  {
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_Word Arguments;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_6 ;
		{
{
#define EXPAND_INFO_TYPE        MR_ExpandFunctorArgsInfo
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
// This comment tells the compiler to define MR_ALLOC_ID.
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_8  = Functor;
	 Var_11  = FunctorNumber;
	 *Arity_9  = Arity;
	 *Arguments_10  = Arguments;
}
  }
}

void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_17,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

    switch (NonCanon_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
{
#define MR_PROC_LABEL mercury__deconstruct__det_named_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_18 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
        }
        break;
      case (MR_Integer) 0:
        {
{
#define MR_PROC_LABEL mercury__deconstruct__det_named_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_18 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Univ0_10;
          MR_Integer Success_11;
          MR_Word Var_12;

          mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &Var_12);
{
#define MR_PROC_LABEL mercury__deconstruct__det_named_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_18 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
	DummyUniv =  Var_12 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}

		;}
#undef MR_PROC_LABEL
	 Univ0_10  = Argument;
	 Success_11  = Success;
}
          succeeded = (Success_11 == (MR_Integer) 0);
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_named_arg\'/4", (MR_String) "no argument with that name");
              return;
            }
          else
            Univ_9 = Univ0_10;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      *TypeInfo_for_T_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_named_arg\'/4", (MR_String) "no argument with that name");
        return;
      }
  }
}

void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_17,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_p_2(TypeInfo_for_T_18, TypeInfo_for_T_17, Term_5, Name_7, Argument_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_17,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;
    MR_Word Univ0_10;
    MR_Integer Success_11;
    MR_Word Var_12;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &Var_12);
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_18 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
	DummyUniv =  Var_12 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}

		;}
#undef MR_PROC_LABEL
	 Univ0_10  = Argument;
	 Success_11  = Success;
}
    succeeded = (Success_11 == (MR_Integer) 0);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_named_arg\'/4", (MR_String) "no argument with that name");
        return;
      }
    else
      Univ_9 = Univ0_10;
    *TypeInfo_for_T_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
    *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
  }
}

void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_17,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(TypeInfo_for_T_18, TypeInfo_for_T_17, Term_5, Name_7, Argument_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_17,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_18 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *TypeInfo_for_T_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_named_arg\'/4", (MR_String) "no argument with that name");
        return;
      }
  }
}

void MR_CALL 
mercury__deconstruct__det_named_arg_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_17,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(TypeInfo_for_T_18, TypeInfo_for_T_17, Term_5, Name_7, Argument_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_17,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_18 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *TypeInfo_for_T_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_named_arg\'/4", (MR_String) "no argument with that name");
        return;
      }
  }
}

void MR_CALL 
mercury__deconstruct__det_arg_4_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Word * TypeInfo_for_T_22,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_10;

    switch (NonCanon_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Univ0_19;

{
#define MR_PROC_LABEL mercury__deconstruct__det_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_23 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ0_19  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            Univ_10 = Univ0_19;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_arg\'/4", (MR_String) "argument number out of range");
              return;
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Univ0_9;

{
#define MR_PROC_LABEL mercury__deconstruct__det_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_23 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ0_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            Univ_10 = Univ0_9;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_arg\'/4", (MR_String) "argument number out of range");
              return;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Success_11;
          MR_Word Var_12;
          MR_Word Univ0_21;

          mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &Var_12);
{
#define MR_PROC_LABEL mercury__deconstruct__det_arg_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_23 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
	DummyUniv =  Var_12 ;
		{
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}

		;}
#undef MR_PROC_LABEL
	 Univ0_21  = Argument;
	 Success_11  = Success;
}
          succeeded = (Success_11 == (MR_Integer) 0);
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_arg\'/4", (MR_String) "argument number out of range");
              return;
            }
          else
            Univ_10 = Univ0_21;
        }
        break;
    }
    *TypeInfo_for_T_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
    *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 1));
  }
}

void MR_CALL 
mercury__deconstruct__det_arg_4_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word * TypeInfo_for_T_22,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_p_2(TypeInfo_for_T_23, TypeInfo_for_T_22, Term_5, Index_7, Argument_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word * TypeInfo_for_T_22,
  MR_Box Term_5,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_10;
    MR_Integer Success_11;
    MR_Word Var_12;
    MR_Word Univ0_21;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &Var_12);
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_23 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
	DummyUniv =  Var_12 ;
		{
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}

		;}
#undef MR_PROC_LABEL
	 Univ0_21  = Argument;
	 Success_11  = Success;
}
    succeeded = (Success_11 == (MR_Integer) 0);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_arg\'/4", (MR_String) "argument number out of range");
        return;
      }
    else
      Univ_10 = Univ0_21;
    *TypeInfo_for_T_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
    *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 1));
  }
}

void MR_CALL 
mercury__deconstruct__det_arg_4_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word * TypeInfo_for_T_22,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_p_1(TypeInfo_for_T_23, TypeInfo_for_T_22, Term_5, Index_7, Argument_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word * TypeInfo_for_T_22,
  MR_Box Term_5,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_10;
    MR_Word Univ0_19;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_23 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ0_19  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Univ_10 = Univ0_19;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_arg\'/4", (MR_String) "argument number out of range");
        return;
      }
    *TypeInfo_for_T_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
    *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 1));
  }
}

void MR_CALL 
mercury__deconstruct__det_arg_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word * TypeInfo_for_T_22,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_p_0(TypeInfo_for_T_23, TypeInfo_for_T_22, Term_5, Index_7, Argument_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word * TypeInfo_for_T_22,
  MR_Box Term_5,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_10;
    MR_Word Univ0_9;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_23 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ0_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Univ_10 = Univ0_9;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140deconstruct.det_arg\'/4", (MR_String) "argument number out of range");
        return;
      }
    *TypeInfo_for_T_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 0))));
    *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_10, (MR_Integer) 1));
  }
}

void MR_CALL 
mercury__deconstruct__named_arg_cc_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4,
  MR_String Name_5,
  MR_Word * MaybeArg_6)
{
  {
    MR_bool succeeded;
    MR_Word Univ_7;
    MR_Integer Success_8;
    MR_Word Var_9;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &Var_9);
{
#define MR_PROC_LABEL mercury__deconstruct__named_arg_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_11 ;
	Term = (MR_Word) Term_4 ;
	Name =  Name_5 ;
	DummyUniv =  Var_9 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

}

		;}
#undef MR_PROC_LABEL
	 Univ_7  = Argument;
	 Success_8  = Success;
}
    succeeded = (Success_8 == (MR_Integer) 0);
    if (succeeded)
      *MaybeArg_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeInfo_12_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_7, (MR_Integer) 0))));
      MR_Box Var_10 = (MR_hl_field(MR_mktag(0), Univ_7, (MR_Integer) 1));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeArg_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfo_12_12));
        MR_hl_field(MR_mktag(1), base, 1) = Var_10;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__deconstruct__named_arg_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

    switch (NonCanon_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
{
#define MR_PROC_LABEL mercury__deconstruct__named_arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
        }
        break;
      case (MR_Integer) 0:
        {
{
#define MR_PROC_LABEL mercury__deconstruct__named_arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
        }
        break;
    }
    if (succeeded)
    {
      *TypeInfo_for_T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__named_arg_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(TypeInfo_for_T_13, TypeInfo_for_T_12, Term_5, Name_7, Argument_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *TypeInfo_for_T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__named_arg_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(TypeInfo_for_T_13, TypeInfo_for_T_12, Term_5, Name_7, Argument_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Name;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Name =  Name_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *TypeInfo_for_T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__deconstruct__arg_cc_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4,
  MR_Integer Index_5,
  MR_Word * MaybeArg_6)
{
  {
    MR_bool succeeded;
    MR_Word Univ_7;
    MR_Integer Success_8;
    MR_Word Var_9;

    mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &Var_9);
{
#define MR_PROC_LABEL mercury__deconstruct__arg_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word DummyUniv;
	MR_Word Argument;
	MR_Integer Success;

	TypeInfo_for_T =  TypeInfo_for_T_11 ;
	Term = (MR_Word) Term_4 ;
	Index =  Index_5 ;
	DummyUniv =  Var_9 ;
		{
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
}

		;}
#undef MR_PROC_LABEL
	 Univ_7  = Argument;
	 Success_8  = Success;
}
    succeeded = (Success_8 == (MR_Integer) 0);
    if (succeeded)
      *MaybeArg_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeInfo_12_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_7, (MR_Integer) 0))));
      MR_Box Var_10 = (MR_hl_field(MR_mktag(0), Univ_7, (MR_Integer) 1));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeArg_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfo_12_12));
        MR_hl_field(MR_mktag(1), base, 1) = Var_10;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__deconstruct__arg_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

    switch (NonCanon_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
{
#define MR_PROC_LABEL mercury__deconstruct__arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
        }
        break;
      case (MR_Integer) 0:
        {
{
#define MR_PROC_LABEL mercury__deconstruct__arg_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
        }
        break;
    }
    if (succeeded)
    {
      *TypeInfo_for_T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__arg_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_p_1(TypeInfo_for_T_13, TypeInfo_for_T_12, Term_5, Index_7, Argument_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *TypeInfo_for_T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__arg_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_p_0(TypeInfo_for_T_13, TypeInfo_for_T_12, Term_5, Index_7, Argument_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * TypeInfo_for_T_12,
  MR_Box Term_5,
  MR_Integer Index_7,
  MR_Box * Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word Univ_9;

{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer Index;
	MR_Word Argument;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_13 ;
	Term = (MR_Word) Term_5 ;
	Index =  Index_7 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Univ_9  = Argument;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *TypeInfo_for_T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
      *Argument_8 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__functor_number_cc_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__functor_number_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_7 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#undef  FUNCTOR_ARG
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  NONCANON

SUCCESS_INDICATOR = (FunctorNumber >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__2_2  = FunctorNumber;
	 *HeadVar__3_3  = Arity;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__deconstruct__functor_number_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__deconstruct__functor_number_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_Integer FunctorNumber;
	MR_Integer Arity;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	Term = (MR_Word) HeadVar__1_1 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#undef  FUNCTOR_ARG
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  NONCANON

SUCCESS_INDICATOR = (FunctorNumber >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *HeadVar__2_2  = FunctorNumber;
	 *HeadVar__3_3  = Arity;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__deconstruct__functor_4_p_3(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String * Functor_7,
  MR_Integer * Arity_8)
{
  switch (NonCanon_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
{
#define MR_PROC_LABEL mercury__deconstruct__functor_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_9 ;
	Term = (MR_Word) Term_5 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_7  = Functor;
	 *Arity_8  = Arity;
}
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__deconstruct__functor_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_9 ;
	Term = (MR_Word) Term_5 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_7  = Functor;
	 *Arity_8  = Arity;
}
      }
      break;
    case (MR_Integer) 2:
      {
{
#define MR_PROC_LABEL mercury__deconstruct__functor_4_p_3

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_9 ;
	Term = (MR_Word) Term_5 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_7  = Functor;
	 *Arity_8  = Arity;
}
      }
      break;
  }
}

void MR_CALL 
mercury__deconstruct__functor_4_p_2(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String * Functor_7,
  MR_Integer * Arity_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_p_2(TypeInfo_for_T_9, Term_5, Functor_7, Arity_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_p_2(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_5,
  MR_String * Functor_7,
  MR_Integer * Arity_8)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_9 ;
	Term = (MR_Word) Term_5 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_7  = Functor;
	 *Arity_8  = Arity;
}
  }
}

void MR_CALL 
mercury__deconstruct__functor_4_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String * Functor_7,
  MR_Integer * Arity_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_p_1(TypeInfo_for_T_9, Term_5, Functor_7, Arity_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_5,
  MR_String * Functor_7,
  MR_Integer * Arity_8)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_9 ;
	Term = (MR_Word) Term_5 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_7  = Functor;
	 *Arity_8  = Arity;
}
  }
}

void MR_CALL 
mercury__deconstruct__functor_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String * Functor_7,
  MR_Integer * Arity_8)
{
  mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_p_0(TypeInfo_for_T_9, Term_5, Functor_7, Arity_8);
}

void MR_CALL 
mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_5,
  MR_String * Functor_7,
  MR_Integer * Arity_8)
{
  {
{
#define MR_PROC_LABEL mercury__deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Term;
	MR_String Functor;
	MR_Integer Arity;

	TypeInfo_for_T =  TypeInfo_for_T_9 ;
	Term = (MR_Word) Term_5 ;
		{
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
}

		;}
#undef MR_PROC_LABEL
	 *Functor_7  = Functor;
	 *Arity_8  = Arity;
}
  }
}

static MR_bool MR_CALL 
mercury__deconstruct____Unify____maybe_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct____Unify____maybe_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__deconstruct____Compare____maybe_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__deconstruct____Compare____maybe_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__deconstruct____Unify____noncanon_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__deconstruct____Unify____noncanon_handling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__deconstruct____Compare____noncanon_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__deconstruct____Compare____noncanon_handling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__deconstruct__init(void)
{
}

void mercury__deconstruct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__deconstruct__deconstruct__type_ctor_info_maybe_arg_0);
	MR_register_type_ctor_info(&mercury__deconstruct__deconstruct__type_ctor_info_noncanon_handling_0);
}

void mercury__deconstruct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__deconstruct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module deconstruct.
