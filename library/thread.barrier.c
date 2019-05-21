/*
** Automatically generated from `thread.barrier.m'
** by the Mercury compiler,
** version rotd-2017-11-16
** configured for x86_64-pc-linux-gnu.
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


// :- module thread.barrier.
// :- implementation.

/*
INIT mercury__thread__barrier__init
ENDINIT
*/

#include "thread.barrier.mih"


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
#include "thread.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
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
#include "thread.mvar.mih"
#include "thread.semaphore.mih"




static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1thread__barrier__type_ctor_info_why_can_we_go_0;

static const MR_PseudoTypeInfo mercury__thread__barrier__thread__barrier__field_types_barrier_0_0[2];

static const MR_ConstString mercury__thread__barrier__thread__barrier__field_names_barrier_0_0[2];

static const MR_DuFunctorDesc mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0;

static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_stag_ordered_barrier_0_0[1];

static const MR_DuPtagLayout mercury__thread__barrier__thread__barrier__du_ptag_ordered_barrier_0[1];

static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_name_ordered_barrier_0[1];

static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_barrier_0[1];

static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0;

static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1;

static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_value_ordered_why_can_we_go_0[2];

static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_name_ordered_why_can_we_go_0[2];

static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_why_can_we_go_0[2];

static MR_Integer MR_CALL 
mercury__thread__barrier__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__thread__barrier____Unify____barrier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__thread__barrier____Compare____barrier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__thread__barrier____Unify____why_can_we_go_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__thread__barrier____Compare____why_can_we_go_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__thread__barrier_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__thread__barrier_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1)),
    ((MR_Box) (&mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0))
  },
};

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__barrier_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__barrier_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__barrier_scalar_common_3[0])),
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
#include "thread.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "thread.semaphore.mh"



static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1builtin__type_ctor_info_int_0 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1thread__barrier__type_ctor_info_why_can_we_go_0 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_TypeInfo) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0
  }
};

static const MR_PseudoTypeInfo mercury__thread__barrier__thread__barrier__field_types_barrier_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__thread__barrier__thread__mvar__ti_mvar_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__thread__barrier__thread__mvar__ti_mvar_1thread__barrier__type_ctor_info_why_can_we_go_0
};

static const MR_ConstString mercury__thread__barrier__thread__barrier__field_names_barrier_0_0[2] = {
  (MR_String) "b_waiting_for",
  (MR_String) "b_go"
};

static const MR_DuFunctorDesc mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0 = {
  (MR_String) "barrier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__barrier__thread__barrier__field_types_barrier_0_0,
  mercury__thread__barrier__thread__barrier__field_names_barrier_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_stag_ordered_barrier_0_0[1] = {
  &mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0
};

static const MR_DuPtagLayout mercury__thread__barrier__thread__barrier__du_ptag_ordered_barrier_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__thread__barrier__thread__barrier__du_stag_ordered_barrier_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_name_ordered_barrier_0[1] = {
  &mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0
};

static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_barrier_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__barrier__thread__barrier__type_ctor_info_barrier_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__barrier____Unify____barrier_0_0_10001)),
  ((MR_Box) (mercury__thread__barrier____Compare____barrier_0_0_10001)),
  (MR_String) "thread.barrier",
  (MR_String) "barrier",
  {     mercury__thread__barrier__thread__barrier__du_name_ordered_barrier_0 },
  {     mercury__thread__barrier__thread__barrier__du_ptag_ordered_barrier_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__barrier__thread__barrier__functor_number_map_barrier_0
};

static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0 = {
  (MR_String) "can_go_normal",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1 = {
  (MR_String) "can_go_release_called",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_value_ordered_why_can_we_go_0[2] = {
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0,
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1
};

static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_name_ordered_why_can_we_go_0[2] = {
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0,
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1
};

static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_why_can_we_go_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__thread__barrier____Unify____why_can_we_go_0_0_10001)),
  ((MR_Box) (mercury__thread__barrier____Compare____why_can_we_go_0_0_10001)),
  (MR_String) "thread.barrier",
  (MR_String) "why_can_we_go",
  {     mercury__thread__barrier__thread__barrier__enum_name_ordered_why_can_we_go_0 },
  {     mercury__thread__barrier__thread__barrier__enum_value_ordered_why_can_we_go_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__thread__barrier__thread__barrier__functor_number_map_why_can_we_go_0
};

static MR_Integer MR_CALL 
mercury__thread__barrier__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__thread__barrier____Compare____why_can_we_go_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__thread__barrier____Unify____why_can_we_go_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__thread__barrier____Compare____barrier_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Word TypeInfo_11_11 = (MR_Word) &mercury__thread__barrier_scalar_common_1[0];

      mercury__builtin__compare_3_p_0(TypeInfo_11_11, &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Word TypeInfo_12_12 = (MR_Word) &mercury__thread__barrier_scalar_common_1[1];

        mercury__builtin__compare_3_p_0(TypeInfo_12_12, HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__thread__barrier____Unify____barrier_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9 = (MR_Word) &mercury__thread__barrier_scalar_common_1[0];
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &mercury__thread__barrier_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__thread__barrier__release_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word TypeCtorInfo_15_15 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
    MR_Word TypeCtorInfo_16_16;
    MR_Word WaitingOn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Go_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer _N_7;
    MR_Box conv0__N_7;

    mercury__thread__mvar__put_4_p_0(TypeCtorInfo_15_15, Go_5, ((MR_Box) ((MR_Integer) 1)));
    TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__thread__mvar__take_4_p_0(TypeCtorInfo_16_16, WaitingOn_4, &conv0__N_7);
    _N_7 = ((MR_Integer) conv0__N_7);
    mercury__thread__mvar__put_4_p_0(TypeCtorInfo_16_16, WaitingOn_4, ((MR_Box) ((MR_Integer) 0)));
  }
}

void MR_CALL 
mercury__thread__barrier__wait_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word WaitingOn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Go_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer N_7;
    MR_Integer StillWaitingFor_8;
    MR_Box conv0_N_7;

    mercury__thread__mvar__take_4_p_0(TypeCtorInfo_30_30, WaitingOn_4, &conv0_N_7);
    N_7 = ((MR_Integer) conv0_N_7);
    StillWaitingFor_8 = (N_7 - (MR_Integer) 1);
    succeeded = (StillWaitingFor_8 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_31_31;
      MR_Word WhyGo_9;
      MR_Box conv1_WhyGo_9;

      mercury__thread__mvar__put_4_p_0(TypeCtorInfo_30_30, WaitingOn_4, ((MR_Box) (StillWaitingFor_8)));
      TypeCtorInfo_31_31 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
      mercury__thread__mvar__take_4_p_0(TypeCtorInfo_31_31, Go_5, &conv1_WhyGo_9);
      WhyGo_9 = ((MR_Word) conv1_WhyGo_9);
      mercury__thread__mvar__put_4_p_0(TypeCtorInfo_31_31, Go_5, ((MR_Box) (WhyGo_9)));
    }
    else
    {
      succeeded = (StillWaitingFor_8 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_32_32 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;

        mercury__thread__mvar__put_4_p_0(TypeCtorInfo_32_32, Go_5, ((MR_Box) ((MR_Integer) 0)));
        mercury__thread__mvar__put_4_p_0(TypeCtorInfo_30_30, WaitingOn_4, ((MR_Box) (StillWaitingFor_8)));
      }
      else
      {
        MR_Word TypeCtorInfo_33_33;
        MR_Word WhyGo_28;
        MR_Box conv2_WhyGo_28;

        mercury__thread__mvar__put_4_p_0(TypeCtorInfo_30_30, WaitingOn_4, ((MR_Box) ((MR_Integer) 0)));
        TypeCtorInfo_33_33 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
        mercury__thread__mvar__take_4_p_0(TypeCtorInfo_33_33, Go_5, &conv2_WhyGo_28);
        WhyGo_28 = ((MR_Word) conv2_WhyGo_28);
        mercury__thread__mvar__put_4_p_0(TypeCtorInfo_33_33, Go_5, ((MR_Box) (WhyGo_28)));
        switch (WhyGo_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "thread.barrier.m", (MR_String) "predicate \140thread.barrier.wait\'/3", (MR_String) "Too many threads called barrier/3 on this barrier.");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
    }
  }
}

void MR_CALL 
mercury__thread__barrier__init_4_p_0(
  MR_Integer N_5,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_15_15;
    MR_Word WaitingOn_6;
    MR_Word Go_7;

    mercury__thread__mvar__init_3_p_0(TypeCtorInfo_14_14, &WaitingOn_6);
    TypeCtorInfo_15_15 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
    mercury__thread__mvar__init_3_p_0(TypeCtorInfo_15_15, &Go_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (WaitingOn_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Go_7));
    }
    mercury__thread__mvar__put_4_p_0(TypeCtorInfo_14_14, WaitingOn_6, ((MR_Box) (N_5)));
  }
}

static MR_bool MR_CALL 
mercury__thread__barrier____Unify____barrier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__barrier____Unify____barrier_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__barrier____Compare____barrier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread__barrier____Compare____barrier_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__barrier____Unify____why_can_we_go_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__barrier____Unify____why_can_we_go_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__barrier____Compare____why_can_we_go_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread__barrier____Compare____why_can_we_go_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__thread__barrier__init(void)
{
}

void mercury__thread__barrier__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__barrier__thread__barrier__type_ctor_info_barrier_0);
	MR_register_type_ctor_info(&mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0);
}

void mercury__thread__barrier__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__thread__barrier__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module thread.barrier.
