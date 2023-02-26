/*
** Automatically generated from `thread.mvar.m'
** by the Mercury compiler,
** version rotd-2023-02-25
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


// :- module thread.mvar.
// :- implementation.

/*
INIT mercury__thread__mvar__init
ENDINIT
*/

#include "thread.mvar.mih"


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
#include "one_or_more.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "thread.mih"
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
#include "io.error_util.mih"
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
#include "thread.semaphore.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__mvar__mutvar__pti_mutvar_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__thread__mvar__thread__mvar__field_types_mvar_1_0[3];

static const MR_DuFunctorDesc mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0;

static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_stag_ordered_mvar_1_0[1];

static const MR_DuPtagLayout mercury__thread__mvar__thread__mvar__du_ptag_ordered_mvar_1[1];

static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_name_ordered_mvar_1[1];

static const MR_Integer mercury__thread__mvar__thread__mvar__functor_number_map_mvar_1[1];

static MR_bool MR_CALL 
mercury__thread__mvar____Unify____mvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__mvar____Compare____mvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__thread__mvar_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__thread__mvar_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__mvar_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__mvar_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__mvar_scalar_common_2[0])),
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
#include "thread.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#include "thread.semaphore.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__mvar__mutvar__pti_mutvar_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__thread__mvar__thread__mvar__field_types_mvar_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0),
  (MR_PseudoTypeInfo) (&mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0),
  (MR_PseudoTypeInfo) (&mercury__thread__mvar__mutvar__pti_mutvar_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0 = {
  (MR_String) "mvar",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__mvar__thread__mvar__field_types_mvar_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_stag_ordered_mvar_1_0[1] = {
  &mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0
};

static const MR_DuPtagLayout mercury__thread__mvar__thread__mvar__du_ptag_ordered_mvar_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__mvar__thread__mvar__du_stag_ordered_mvar_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_name_ordered_mvar_1[1] = {
  &mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0
};

static const MR_Integer mercury__thread__mvar__thread__mvar__functor_number_map_mvar_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__mvar____Unify____mvar_1_0_10001)),
  ((MR_Box) (mercury__thread__mvar____Compare____mvar_1_0_10001)),
  (MR_String) "thread.mvar",
  (MR_String) "mvar",
  { mercury__thread__mvar__thread__mvar__du_name_ordered_mvar_1 },
  { mercury__thread__mvar__thread__mvar__du_ptag_ordered_mvar_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__thread__mvar__thread__mvar__functor_number_map_mvar_1,

};

void MR_CALL 
mercury__thread__mvar____Compare____mvar_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgY1_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX2_7 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box ArgY2_8 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__thread__semaphore____Compare____semaphore_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__thread__semaphore____Compare____semaphore_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__mutvar____Compare____mutvar_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
mercury__thread__mvar____Unify____mvar_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Box ArgY1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgX2_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Box ArgY2_6 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mercury__mutvar____Unify____mutvar_1_0(TypeInfo_for_T_11, ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__thread__mvar__try_read_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word * MaybeData_8)
{
  MR_Box Full_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Ref_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word Success_10;

  mercury__thread__semaphore__try_wait_4_p_0(Full_5, &Success_10);
  switch (Success_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeData_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box Data_11;

        mercury__mutvar__get_mutvar_2_p_0(TypeInfo_for_T_15, Ref_7, &Data_11);
        mercury__thread__semaphore__signal_3_p_0(Full_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeData_8 = base;
          MR_hl_field(1, base, 0) = Data_11;
        }
      }
      break;
  }
}

void MR_CALL 
mercury__thread__mvar__read_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box * Data_8)
{
  MR_Box Full_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Ref_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));

  mercury__thread__semaphore__wait_3_p_0(Full_5);
  mercury__mutvar__get_mutvar_2_p_0(TypeInfo_for_T_13, Ref_7, Data_8);
  mercury__thread__semaphore__signal_3_p_0(Full_5);
}

void MR_CALL 
mercury__thread__mvar__try_put_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Box Data_9,
  MR_Word * Success_10)
{
  MR_Box Full_6 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Box Empty_7 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Ref_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));

  mercury__thread__semaphore__try_wait_4_p_0(Empty_7, Success_10);
  switch (*Success_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__mutvar__set_mutvar_2_p_0(TypeInfo_for_T_15, Ref_8, Data_9);
        mercury__thread__semaphore__signal_3_p_0(Full_6);
      }
      break;
  }
}

void MR_CALL 
mercury__thread__mvar__put_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box Data_8)
{
  MR_Box Full_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Box Empty_6 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Ref_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));

  mercury__thread__semaphore__wait_3_p_0(Empty_6);
  mercury__mutvar__set_mutvar_2_p_0(TypeInfo_for_T_13, Ref_7, Data_8);
  mercury__thread__semaphore__signal_3_p_0(Full_5);
}

void MR_CALL 
mercury__thread__mvar__try_take_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word * MaybeData_8)
{
  MR_Box Full_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Box Empty_6 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Ref_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word Success_10;

  mercury__thread__semaphore__try_wait_4_p_0(Full_5, &Success_10);
  switch (Success_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeData_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box Data_11;

        mercury__mutvar__get_mutvar_2_p_0(TypeInfo_for_T_15, Ref_7, &Data_11);
        mercury__mutvar__clear_mutvar_1_p_0(TypeInfo_for_T_15, Ref_7);
        mercury__thread__semaphore__signal_3_p_0(Empty_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeData_8 = base;
          MR_hl_field(1, base, 0) = Data_11;
        }
      }
      break;
  }
}

void MR_CALL 
mercury__thread__mvar__take_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box * Data_8)
{
  MR_Box Full_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Box Empty_6 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Ref_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));

  mercury__thread__semaphore__wait_3_p_0(Full_5);
  mercury__mutvar__get_mutvar_2_p_0(TypeInfo_for_T_13, Ref_7, Data_8);
  mercury__mutvar__clear_mutvar_1_p_0(TypeInfo_for_T_13, Ref_7);
  mercury__thread__semaphore__signal_3_p_0(Empty_6);
}

MR_Word MR_CALL 
mercury__thread__mvar__impure_init_1_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box Value_3)
{
  MR_Word HeadVar__2_2;
  MR_Box Full_4;
  MR_Box Empty_5;
  MR_Word Ref_6;

  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 1, &Full_4);
  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 0, &Empty_5);
  mercury__mutvar__new_mutvar_2_p_0(TypeInfo_for_T_9, Value_3, &Ref_6);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Full_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Empty_5));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Ref_6));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__thread__mvar__impure_init_0_f_0(
  MR_Word TypeInfo_for_T_7)
{
  MR_Word HeadVar__1_1;
  MR_Box Full_2;
  MR_Box Empty_3;
  MR_Word Ref_4;

  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 0, &Full_2);
  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 1, &Empty_3);
  mercury__mutvar__new_mutvar0_1_p_0(TypeInfo_for_T_7, &Ref_4);
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Full_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Empty_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Ref_4));
  }
  return HeadVar__1_1;
}

void MR_CALL 
mercury__thread__mvar__init_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Value_5,
  MR_Word * Mvar_6)
{
  MR_Box Full_11;
  MR_Box Empty_12;
  MR_Word Ref_13;

  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 1, &Full_11);
  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 0, &Empty_12);
  mercury__mutvar__new_mutvar_2_p_0(TypeInfo_for_T_10, Value_5, &Ref_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Mvar_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Full_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Empty_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Ref_13));
  }
}

void MR_CALL 
mercury__thread__mvar__init_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * Mvar_4)
{
  MR_Box Full_9;
  MR_Box Empty_10;
  MR_Word Ref_11;

  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 0, &Full_9);
  mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 1, &Empty_10);
  mercury__mutvar__new_mutvar0_1_p_0(TypeInfo_for_T_8, &Ref_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Mvar_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Full_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Empty_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Ref_11));
  }
}

static MR_bool MR_CALL 
mercury__thread__mvar____Unify____mvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__mvar____Unify____mvar_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__mvar____Compare____mvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__mvar____Compare____mvar_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__thread__mvar__init(void)
{
}

void mercury__thread__mvar__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1);
}

void mercury__thread__mvar__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__thread__mvar__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module thread.mvar.
