/*
** Automatically generated from `lazy.m'
** by the Mercury compiler,
** version 2018-10-19
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


// :- module lazy.
// :- implementation.

/*
INIT mercury__lazy__init
ENDINIT
*/

#include "lazy.mih"


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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__lazy__pti_lazy_state_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_1_0[1];

static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_1_0;

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_1_0[1];

static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_1[1];

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_1[1];

static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_1[1];

static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_0[1];

static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_0;

static const MR_VA_PseudoTypeInfo_Struct1 mercury__lazy____vpti_func_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_1[1];

static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_1;

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_0[1];

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_1[1];

static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_state_1[2];

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_state_1[2];

static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_state_1[2];

static MR_Integer MR_CALL 
mercury__lazy__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__lazy____Compare____lazy_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__lazy____Compare____lazy_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__lazy_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__lazy_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__lazy_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__lazy_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__lazy_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lazy_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__lazy_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lazy_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lazy_scalar_common_2[0])),
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__lazy__pti_lazy_state_1__pseudo_1 = {
  &mercury__lazy__lazy__type_ctor_info_lazy_state_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__lazy__mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) (&mercury__lazy__lazy__pti_lazy_state_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_1_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__lazy__mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_1_0 = {
  (MR_String) "lazy",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__lazy__lazy__field_types_lazy_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_1_0[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_1_0
};

static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__lazy__lazy__du_stag_ordered_lazy_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_1[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_1_0
};

static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__lazy__lazy__type_ctor_info_lazy_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mercury__lazy____Unify____lazy_1_0_10001)),
  ((MR_Box) (mercury__lazy____Compare____lazy_1_0_10001)),
  (MR_String) "lazy",
  (MR_String) "lazy",
  {     mercury__lazy__lazy__du_name_ordered_lazy_1 },
  {     mercury__lazy__lazy__du_ptag_ordered_lazy_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__lazy__lazy__functor_number_map_lazy_1
};

static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_0 = {
  (MR_String) "value",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__lazy__lazy__field_types_lazy_state_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_VA_PseudoTypeInfo_Struct1 mercury__lazy____vpti_func_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__lazy__lazy__field_types_lazy_state_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__lazy____vpti_func_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__lazy__lazy__du_functor_desc_lazy_state_1_1 = {
  (MR_String) "closure",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__lazy__lazy__field_types_lazy_state_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_0[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_0
};

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_stag_ordered_lazy_state_1_1[1] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_1
};

static const MR_DuPtagLayout mercury__lazy__lazy__du_ptag_ordered_lazy_state_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__lazy__lazy__du_stag_ordered_lazy_state_1_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__lazy__lazy__du_stag_ordered_lazy_state_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__lazy__lazy__du_name_ordered_lazy_state_1[2] = {
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_1,
  &mercury__lazy__lazy__du_functor_desc_lazy_state_1_0
};

static const MR_Integer mercury__lazy__lazy__functor_number_map_lazy_state_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__lazy__lazy__type_ctor_info_lazy_state_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__lazy____Unify____lazy_state_1_0_10001)),
  ((MR_Box) (mercury__lazy____Compare____lazy_state_1_0_10001)),
  (MR_String) "lazy",
  (MR_String) "lazy_state",
  {     mercury__lazy__lazy__du_name_ordered_lazy_state_1 },
  {     mercury__lazy__lazy__du_ptag_ordered_lazy_state_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__lazy__lazy__functor_number_map_lazy_state_1
};

static MR_Integer MR_CALL 
mercury__lazy__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__lazy____Compare____lazy_state_1_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_18), (MR_Word) (ArgY1_11));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_19 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_19, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__lazy____Unify____lazy_state_1_0(
  MR_Word TypeInfo_for_T_9,
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_5), (MR_Word) (ArgY1_6));
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__lazy____Compare____lazy_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_4 == CastY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box Var_10;
      MR_Box Var_11;

      Var_10 = mercury__lazy__force_1_f_0(TypeInfo_for_T_6, HeadVar__2_2);
      Var_11 = mercury__lazy__force_1_f_0(TypeInfo_for_T_6, HeadVar__3_3);
      mercury__builtin__compare_3_p_0(TypeInfo_for_T_6, HeadVar__1_1, Var_10, Var_11);
    }
  }
}

MR_bool MR_CALL 
mercury__lazy____Unify____lazy_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_3 == CastY_4);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box Var_8;
      MR_Box Var_9;

      Var_8 = mercury__lazy__force_1_f_0(TypeInfo_for_T_5, HeadVar__1_1);
      Var_9 = mercury__lazy__force_1_f_0(TypeInfo_for_T_5, HeadVar__2_2);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_5, Var_8, Var_9);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__lazy__compare_values_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * R_4,
  MR_Word X_5,
  MR_Word Y_6)
{
  {
    MR_Box Var_7;
    MR_Box Var_8;

    Var_7 = mercury__lazy__force_1_f_0(TypeInfo_for_T_9, X_5);
    Var_8 = mercury__lazy__force_1_f_0(TypeInfo_for_T_9, Y_6);
    mercury__builtin__compare_3_p_0(TypeInfo_for_T_9, R_4, Var_7, Var_8);
  }
}

MR_bool MR_CALL 
mercury__lazy__equal_values_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word X_3,
  MR_Word Y_4)
{
  {
    MR_bool succeeded;
    MR_Box Var_5;
    MR_Box Var_7;

    Var_5 = mercury__lazy__force_1_f_0(TypeInfo_for_T_6, X_3);
    Var_7 = mercury__lazy__force_1_f_0(TypeInfo_for_T_6, Y_4);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_6, Var_5, Var_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__lazy__read_if_val_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Lazy_3,
  MR_Box * Value_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_9_9;
    MR_Word Mutvar_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lazy_3, (MR_Integer) 0))));
    MR_Word State_6;
    MR_Box conv0_State_6;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_state_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_9_9, (MR_Word) (Mutvar_5), &conv0_State_6);
    State_6 = ((MR_Word) (conv0_State_6));
    succeeded = ((MR_tag((MR_Word) State_6)) == (MR_Integer) 0);
    if (succeeded)
      *Value_4 = (MR_hl_field(MR_mktag(0), State_6, (MR_Integer) 0));
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__lazy__force_1_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Lazy_3)
{
  {
    MR_Box Value_4;
    MR_Word Mutvar_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lazy_3, (MR_Integer) 0))));
    MR_Word TypeInfo_11_11;
    MR_Word State_6;
    MR_Box conv0_State_6;

    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_state_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_11_11, (MR_Word) (Mutvar_5), &conv0_State_6);
    State_6 = ((MR_Word) (conv0_State_6));
    if (((MR_tag((MR_Word) State_6)) == (MR_Integer) 1))
    {
      MR_Word Thunk_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), State_6, (MR_Integer) 0))));
      MR_Word Var_8;
      MR_Box MR_CALL (* func_1)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Thunk_7, (MR_Integer) 1))));

      Value_4 = func_1(((MR_Box) (Thunk_7)));
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = Value_4;
      }
      mercury__mutvar__set_mutvar_2_p_0(TypeInfo_11_11, (MR_Word) (Mutvar_5), ((MR_Box) (Var_8)));
    }
    else
      Value_4 = (MR_hl_field(MR_mktag(0), State_6, (MR_Integer) 0));
    return Value_4;
  }
}

MR_Word MR_CALL 
mercury__lazy__delay_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word F_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Mutvar_4;
    MR_Word TypeInfo_8_8;
    MR_Word Var_5;
    MR_Word conv0_Mutvar_4;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (F_3));
    }
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_state_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__mutvar__new_mutvar_2_p_0(TypeInfo_8_8, ((MR_Box) (Var_5)), &conv0_Mutvar_4);
    Mutvar_4 = (MR_Word) (conv0_Mutvar_4);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Mutvar_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__lazy__val_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Mutvar_4;
    MR_Word TypeInfo_8_8;
    MR_Word Var_5;
    MR_Word conv0_Mutvar_4;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = X_3;
    }
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_state_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__mutvar__new_mutvar_2_p_0(TypeInfo_8_8, ((MR_Box) (Var_5)), &conv0_Mutvar_4);
    Mutvar_4 = (MR_Word) (conv0_Mutvar_4);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Mutvar_4));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__lazy____Unify____lazy_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__lazy____Compare____lazy_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__lazy____Compare____lazy_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lazy____Unify____lazy_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__lazy____Unify____lazy_state_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__lazy____Compare____lazy_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__lazy____Compare____lazy_state_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__lazy__init(void)
{
}

void mercury__lazy__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__lazy__lazy__type_ctor_info_lazy_1);
	MR_register_type_ctor_info(&mercury__lazy__lazy__type_ctor_info_lazy_state_1);
}

void mercury__lazy__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__lazy__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module lazy.
